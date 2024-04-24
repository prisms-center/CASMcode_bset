from typing import Any, Optional

import jinja2
import libcasm.clusterography as casmclust
from libcasm.clexulator import (
    PrimNeighborList,
)

from ._cluster_functions import (
    make_periodic_point_functions,
)
from ._cpp_str import (
    CppFormatProperties,
    orbit_bfunc_cpp_str,
    site_bfunc_cpp_str,
)
from ._polynomial_function import (
    PolynomialFunction,
    Variable,
)


def get_orbit_neighbor_list_indices(
    orbit: list[list[PolynomialFunction]],
    prim_neighbor_list: PrimNeighborList,
    is_periodic: bool,
) -> set[int]:
    # Get neighbor list indices where point correlations can be evaluated
    neighbor_list_indices = set()
    if is_periodic:
        candidate = set()
        for i in range(len(prim_neighbor_list.sublattice_indices())):
            candidate.add(i)
        for i_equiv, equiv in enumerate(orbit):
            for func in equiv:
                for var in func.variables:
                    if var.neighborhood_site_index in candidate:
                        neighbor_list_indices.add(var.neighborhood_site_index)
    else:
        for i_equiv, equiv in enumerate(orbit):
            for func in equiv:
                for var in func.variables:
                    neighbor_list_indices.add(var.neighborhood_site_index)
    return neighbor_list_indices


def variables_for_global_corr(
    functions: list[list[list[PolynomialFunction]]],
    linear_function_indices: Optional[set[int]] = None,
) -> set[Variable]:
    """Get the set of variables needed for evaluation of correlation contribution

    Parameters
    ----------
    functions : list[list[list[casm.bset.PolynomialFunction]]]
        The set of basis functions
    linear_function_indices : Optional[set[int]]
        The linear indices of the functions that will be evaluated. If None,
        all variables from all functions will be included in the results. Otherwise,
        only the variables of functions with the given linear indices will be
        included in the results.

    Returns
    -------
    variable_set: set[casm.bset.Variable]
        The set of variables needed for evaluation of the correlation contribution
    """
    variable_set = set()

    linear_function_index = 1
    for orbit in functions:
        for equiv in orbit:
            for i_func, func in enumerate(equiv):
                if (
                    linear_function_indices is None
                    or (i_func + linear_function_index) in linear_function_indices
                ):
                    for var in func.variables:
                        variable_set.add(var)
        linear_function_index += len(orbit[0])
    return variable_set


def variables_for_point_corr(
    functions: list[list[list[PolynomialFunction]]],
    neighbor_list_index: int,
    linear_function_indices: Optional[set[int]] = None,
) -> set[Variable]:
    """Get the set of variables needed for evaluation of point correlations

    Parameters
    ----------
    functions : list[list[list[casm.bset.PolynomialFunction]]]
        The set of basis functions
    neighbor_list_index : int
        The index in the neighbor list for which the point correlations are
        calculated
    linear_function_indices : Optional[set[int]]
        The linear indices of the functions that will be evaluated. If None,
        all variables from all functions will be included in the results. Otherwise,
        only the variables of functions with the given linear indices will be
        included in the results.

    Returns
    -------
    variable_set: set[casm.bset.Variable]
        The set of variables needed for evaluation of the correlation contribution
    """

    def _includes_point_corr_site(
        variable_set: set[Variable],
        neighbor_list_index: int,
    ) -> bool:
        for var in variable_set:
            if var.neighborhood_site_index == neighbor_list_index:
                return True
        return False

    variable_set = set()

    linear_function_index = 1
    for orbit in functions:
        for equiv in orbit:
            for i_func, func in enumerate(equiv):
                if (
                    linear_function_indices is None
                    or (i_func + linear_function_index) in linear_function_indices
                ):
                    func_variables = set()
                    for var in func.variables:
                        func_variables.add(var)
                    if _includes_point_corr_site(func_variables, neighbor_list_index):
                        variable_set.update(func_variables)

        linear_function_index += len(orbit[0])
    return variable_set


def make_orbit_bfuncs(
    prim_neighbor_list: PrimNeighborList,
    clusters: list[list[casmclust.Cluster]],
    functions: list[list[list[PolynomialFunction]]],
    cpp_fmt: CppFormatProperties,
    linear_function_indices: Optional[set[int]] = None,
) -> list[dict]:
    """

    Parameters
    ----------
    functions: list[list[list[casm.bset.PolynomialFunction]]]
        List of functions, as output by as output by
        :func:`~casm.bset.make_periodic_cluster_functions` or
        :func:`~casm.bset.make_local_cluster_functions`.

    prim_neighbor_list: libcasm.clexulator.PrimNeighborList
        :class:`~libcasm.clexulator.PrimNeighborList`, containing all the neighbors
        needed for evaluation, as output by
        :func:`~casm.bset.make_periodic_cluster_functions` or
        :func:`~casm.bset.make_local_cluster_functions`.

    linear_function_indices : Optional[set[int]]
        The linear indices of the functions that will be included. If None,
        all functions will be included in the Clexulator. Otherwise,
        only the specified functions will be included in the Clexulator


    Returns
    -------
    orbit_bfuncs: list[dict]
        Data for each orbit basis function (i.e. the contribution to the global
        correlations from one unit cell). Includes:

        - ``"linear_function_index"``: int, Linear function index
        - ``"linear_orbit_index"``: int, Linear cluster orbit index
        - ``"cpp"``: str, C++ expression for evaluating the global correlation
            contribution
        - ``"latex_prototype"``: str, Latex formula for the prototype
        - ``latex_orbit"``: str, Latex formula for the orbit contribution
    """
    linear_function_index = 0
    linear_orbit_index = 0
    orbit_bfuncs = []

    # For constant term, linear_function_index==0:
    if (
        linear_function_indices is None
        or linear_function_index in linear_function_indices
    ):
        orbit_bfuncs.append(
            {
                "linear_function_index": linear_function_index,
                "linear_orbit_index": linear_orbit_index,
                "cpp": "1",
                "latex_prototype": "1",
                "latex_orbit": "1",
            }
        )
    linear_function_index += 1

    ### For all cluster orbits (includes null cluster):
    # i_orbit: cluster orbit index
    # orbit: list[Cluster]
    for i_orbit, orbit in enumerate(clusters):
        # i_func: cluster function index
        # f_prototype: i_func-th function on prototype cluster
        for i_func, f_prototype in enumerate(functions[i_orbit][0]):
            # Allow filtering by linear_function_index
            if (
                linear_function_indices is None
                or linear_function_index in linear_function_indices
            ):
                # orbit_functions: i_func-th function on each cluster in orbit
                orbit_functions = [
                    functions_by_cluster[i_func]
                    for functions_by_cluster in functions[i_orbit]
                ]

                orbit_bfuncs.append(
                    # make global correlation contribution formulas
                    {
                        "linear_function_index": linear_function_index,
                        "linear_orbit_index": linear_orbit_index,
                        "cpp": orbit_bfunc_cpp_str(
                            orbit_functions=orbit_functions,
                            orbit_size=len(orbit_functions),
                            prim_neighbor_list=prim_neighbor_list,
                            cpp_fmt=cpp_fmt,
                        ),
                        "latex_prototype": "<todo>",
                        "latex_orbit": "<todo>",
                    }
                )
            linear_function_index += 1
        linear_orbit_index += 1
    return orbit_bfuncs


def make_site_bfuncs_data(
    linear_function_index: int,
    linear_orbit_index: int,
    equiv_functions: list[list[PolynomialFunction]],
    orbit_size: int,
    prim_neighbor_list: PrimNeighborList,
    cpp_fmt: CppFormatProperties,
) -> dict:
    data = {
        "linear_function_index": linear_function_index,
        "linear_orbit_index": linear_orbit_index,
        "at": [],
    }
    for neighbor_list_index, equiv_functions_by_point in enumerate(equiv_functions):
        data["at"].append(
            {
                "neighbor_list_index": neighbor_list_index,
                "cpp": site_bfunc_cpp_str(
                    point_functions=equiv_functions_by_point,
                    orbit_size=orbit_size,
                    prim_neighbor_list=prim_neighbor_list,
                    cpp_fmt=cpp_fmt,
                ),
                "latex_prototype": "<todo>",
                "latex_orbit": "<todo>",
                "occ_delta_cpp": "<todo>",
            }
        )
    return data


def make_site_bfuncs(
    is_periodic: bool,
    prim_neighbor_list: PrimNeighborList,
    clusters: list[list[casmclust.Cluster]],
    functions: list[list[list[PolynomialFunction]]],
    cpp_fmt: CppFormatProperties,
    linear_function_indices: Optional[set[int]] = None,
) -> list[dict]:
    """

    Parameters
    ----------
    is_periodic: bool
        Whether the Clexulator is for a periodic basis set or local basis set.
    prim_neighbor_list: libcasm.clexulator.PrimNeighborList
        :class:`~libcasm.clexulator.PrimNeighborList`, containing all the neighbors
        needed for evaluation, as output by
        :func:`~casm.bset.make_periodic_cluster_functions` or
        :func:`~casm.bset.make_local_cluster_functions`.
    clusters: list[list[libcasm.clusterography.Cluster]]
        List of clusters, as output by
        :func:`~casm.bset.make_periodic_cluster_functions` or
        :func:`~casm.bset.make_local_cluster_functions`.
    functions: list[list[list[casm.bset.PolynomialFunction]]]
        List of functions, as output by as output by
        :func:`~casm.bset.make_periodic_cluster_functions` or
        :func:`~casm.bset.make_local_cluster_functions`.
    linear_function_indices : Optional[set[int]]
        The linear indices of the functions that will be included. If None,
        all functions will be included in the Clexulator. Otherwise,
        only the specified functions will be included in the Clexulator

    """

    # set n_point_corr_sites
    if is_periodic:
        n_point_corr_sites = len(prim_neighbor_list.sublattice_indices())
    else:
        n_point_corr_sites = prim_neighbor_list.n_neighborhood_sites()

    ### Start: constant term, linear_function_index==0 ###
    linear_function_index = 0
    linear_orbit_index = 0
    site_bfuncs = []

    ### For constant term, linear_function_index==0:
    # Allow filtering by linear_function_index
    if (
        linear_function_indices is None
        or linear_function_index in linear_function_indices
    ):
        site_bfuncs.append(
            # make placeholders (no point functions)
            make_site_bfuncs_data(
                linear_function_index=linear_function_index,
                linear_orbit_index=linear_orbit_index,
                equiv_functions=[[]] * n_point_corr_sites,
                orbit_size=0,
                prim_neighbor_list=prim_neighbor_list,
                cpp_fmt=cpp_fmt,
            )
        )

    linear_function_index += 1

    ### For all cluster orbits (includes null cluster):
    # i_orbit: cluster orbit index
    # orbit: list[Cluster]
    for i_orbit, orbit in enumerate(clusters):
        # point_functions: list[list[list[PolynomialFunction]]]
        #     All point functions for this cluster orbit, for each point corr site
        #     point_functions[i_func][nlist_index][i_point_function]
        if is_periodic:
            # take global functions (non-duplicating) and make all point functions
            point_functions = make_periodic_point_functions(
                prim_neighbor_list=prim_neighbor_list,
                orbit=orbit,
                orbit_functions=functions[i_orbit],
            )
        else:
            raise Exception(
                "Error in make_site_bfuncs: local Clexulator not yet supported"
            )

        # i_func: cluster function index
        # equiv_functions: list[list[PolynomialFunction]]
        #     All equivalent point functions, for each point corr site
        #     equiv_functions[nlist_index][i_point_function]
        for i_func, equiv_functions in enumerate(point_functions):
            # Allow filtering by linear_function_index
            if (
                linear_function_indices is None
                or linear_function_index in linear_function_indices
            ):
                site_bfuncs.append(
                    # make point correlation formulas for each point corr site
                    make_site_bfuncs_data(
                        linear_function_index=linear_function_index,
                        linear_orbit_index=linear_orbit_index,
                        equiv_functions=equiv_functions,
                        orbit_size=len(orbit),
                        prim_neighbor_list=prim_neighbor_list,
                        cpp_fmt=cpp_fmt,
                    )
                )
            linear_function_index += 1
        linear_orbit_index += 1
    return site_bfuncs


class WriterV1Basic:
    def __init__(
        self,
        project_name: str,
        bset_name: str,
        is_periodic: bool,
        prim_neighbor_list: PrimNeighborList,
        clusters: list[list[casmclust.Cluster]],
        functions: list[list[list[PolynomialFunction]]],
        occ_site_functions: list[dict],
        continuous_dof: list[dict],
        params: list[dict],
        linear_function_indices: Optional[set[int]] = None,
        cpp_fmt: Optional[CppFormatProperties] = None,
    ):
        """

        Parameters
        ----------
        project_name: str
            Project name. Used to contruct Clexulator class name.
        bset_name: str
            Basis set name. Used to contruct Clexulator class name.
        is_periodic: bool
            Whether the Clexulator is for a periodic basis set or local basis set.
        prim_neighbor_list: libcasm.clexulator.PrimNeighborList
            :class:`~libcasm.clexulator.PrimNeighborList`, containing all the neighbors
            needed for evaluation, as output by
            :func:`~casm.bset.make_periodic_cluster_functions` or
            :func:`~casm.bset.make_local_cluster_functions`.
        clusters: list[list[libcasm.clusterography.Cluster]]
            List of clusters, as output by
            :func:`~casm.bset.make_periodic_cluster_functions` or
            :func:`~casm.bset.make_local_cluster_functions`.
        functions: list[list[list[casm.bset.PolynomialFunction]]]
            List of functions, as output by as output by
            :func:`~casm.bset.make_periodic_cluster_functions` or
            :func:`~casm.bset.make_local_cluster_functions`.
        occ_site_functions: list[dict]
            List of occupation site basis functions. For each sublattice with site
            basis functions, must include:

            - `"sublattice_index"`: int, index of the sublattice
            - `"functions"`: list[list[float]], list of the site basis function values,
              as ``value = functions[function_index][occupant_index]``.

        continuous_dof: list[dict]
            List of continuous DoF to register. For each, must include:

            - `"key"`: str, DoF name (i.e. ``"Hstrain``)
            - `"paramname"`: str, Parameter pack name (i.e. `Hstrain_var`)
            - `"is_global"`: bool, DoF type
            - `"max_n_components"`: int, Maximum number of components (for local DoF)
            - `"sites"`: list[dict], Describes local DoF, includes:

              - `"sublattice_index"`: int, Sublattice index containing local DoF
              - `"n_components"`: int, Number of components on this sublattice

        params: list[dict]
            List of parameter packs to include. For each parameter, must include:

            - `"name"`: str, Parameter name (i.e. ``"occ_site_func"``,
              ``"Hstrain_var"``, ``"disp_var"``, or ``"corr"``.)
            - `"rows"`: int, Number of rows needed by the parameter pack. For DoF,
              this is the maximum number of components. For "corr", this is the number
              of functions.
            - `"cols"`: int, Number of columns needed by the parameter pack. For site
              DoF this is the number of neighbors, for global DoF this is 1,
              and for "corr" this is 1.
            - `"is_independent"`: str, String representation of C++ bool. For DoF
              this is ``"true"``, and for "corr" this is ``"false"``.

        linear_function_indices : Optional[set[int]]
            The linear indices of the functions that will be included. If None,
            all functions will be included in the Clexulator. Otherwise,
            only the specified functions will be included in the Clexulator

        cpp_fmt: Optional[CppFormatProperties] = None,
            C++ string formatting properties. If None, the default values are used.

            .. code-block:: Python

                CppFormatProperties(
                    coeff_fmt_spec=".10f",
                    coeff_atol=1e-10,
                )

        """

        ### defaults ###
        if cpp_fmt is None:
            cpp_fmt = CppFormatProperties()

        ### declare variables ###
        self.template_name = "v1.basic/Clexulator.cpp"

        self.project_name = project_name
        self.bset_name = bset_name
        self.is_periodic = is_periodic
        self.clexulator_name = f"{project_name}_Clexulator_{bset_name}"
        self.nlist_size = 0
        self.n_corr = 0
        self.n_point_corr_sites = 0
        self.orbit_bfuncs = []
        self.site_bfuncs = []
        self.linear_function_indices = linear_function_indices
        self.prim_neighbor_list = prim_neighbor_list
        self.occ_site_functions = occ_site_functions
        self.continuous_dof = continuous_dof
        self.params = params
        self.cpp_fmt = cpp_fmt
        self.variables_for_global_corr = None
        self.variables_for_point_corr = None

        ### set variables ###

        # set nlist_size
        self.nlist_size = prim_neighbor_list.n_neighborhood_sites()

        # set n_corr
        self.n_corr = 1  # include constant term
        for i_orbit, orbit in enumerate(functions):
            self.n_corr += len(orbit[0])

        # set n_point_corr_sites
        if is_periodic:
            self.n_point_corr_sites = len(prim_neighbor_list.sublattice_indices())
        else:
            self.n_point_corr_sites = prim_neighbor_list.n_neighborhood_sites()

        # set self.orbit_bfuncs
        self.orbit_bfuncs = make_orbit_bfuncs(
            prim_neighbor_list=self.prim_neighbor_list,
            clusters=clusters,
            functions=functions,
            cpp_fmt=self.cpp_fmt,
            linear_function_indices=self.linear_function_indices,
        )

        # set self.site_bfuncs
        self.site_bfuncs = make_site_bfuncs(
            is_periodic=is_periodic,
            prim_neighbor_list=self.prim_neighbor_list,
            clusters=clusters,
            functions=functions,
            cpp_fmt=self.cpp_fmt,
            linear_function_indices=self.linear_function_indices,
        )

    def variables(self) -> dict:
        return {
            "clexulator_name": self.clexulator_name,
            "nlist_size": self.nlist_size,
            "n_corr": self.n_corr,
            "n_point_corr_sites": self.n_point_corr_sites,
            "orbit_bfuncs": self.orbit_bfuncs,
            "site_bfuncs": self.site_bfuncs,
            "occ_site_functions": self.occ_site_functions,
            "continuous_dof": self.continuous_dof,
            "params": self.params,
            "nlist_weight_matrix": self.prim_neighbor_list.weight_matrix().tolist(),
            "nlist_sublattice_indices": self.prim_neighbor_list.sublattice_indices(),
            "nlist_total_n_sublattice": self.prim_neighbor_list.total_n_sublattice(),
        }


def write_clexulator(
    f: Any,
    version: str,
    project_name: str,
    bset_name: str,
    is_periodic: bool,
    prim_neighbor_list: PrimNeighborList,
    clusters: list[list[casmclust.Cluster]],
    functions: list[list[list[PolynomialFunction]]],
    occ_site_functions: list[dict],
    continuous_dof: list[dict],
    params: list[dict],
    linear_function_indices: Optional[set[int]] = None,
    cpp_fmt: Optional[CppFormatProperties] = None,
):
    if version == "v1.basic":
        writer = WriterV1Basic(
            project_name=project_name,
            bset_name=bset_name,
            is_periodic=is_periodic,
            prim_neighbor_list=prim_neighbor_list,
            clusters=clusters,
            functions=functions,
            occ_site_functions=occ_site_functions,
            continuous_dof=continuous_dof,
            params=params,
            linear_function_indices=linear_function_indices,
            cpp_fmt=cpp_fmt,
        )
    else:
        raise Exception(f"Error in write_clexulator: Unknown version '{version}'")
    env = jinja2.Environment(
        trim_blocks=True,
        lstrip_blocks=True,
        loader=jinja2.PackageLoader("casm.bset"),
    )
    template = env.get_template(writer.template_name)
    print(template)
    print(writer.variables())
    f.write(template.render(writer.variables()))
