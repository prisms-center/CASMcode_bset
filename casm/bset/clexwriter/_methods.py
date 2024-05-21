import pathlib
import re
from typing import Optional

import jinja2
import libcasm.clusterography as casmclust
import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
from libcasm.clexulator import (
    PrimNeighborList,
)

from casm.bset.clexwriter import (
    CppFormatProperties,
    occ_delta_site_bfunc_cpp_str,
    orbit_bfunc_cpp_str,
    site_bfunc_cpp_str,
)
from casm.bset.cluster_functions import (
    ClexBasisSpecs,
    ClusterFunctionsBuilder,
    make_occ_site_functions,
    make_point_functions,
)
from casm.bset.polynomial_functions import (
    PolynomialFunction,
)


def _add_variables_needed(
    data: dict[str, list],
    functions: list[PolynomialFunction],
    prim_neighbor_list: PrimNeighborList,
):
    nlist_sublat_indices = prim_neighbor_list.sublattice_indices()
    for f in functions:
        for var in f.variables:
            if var.key not in data:
                data[var.key] = []
            # continuous DoF
            n = var.neighborhood_site_index
            if n is None:
                b = None
            else:
                i = var.neighborhood_site_index % len(nlist_sublat_indices)
                b = nlist_sublat_indices[i]
            if var.key == "occ":
                # occ DoF / site basis function
                value = [var.site_basis_function_index, n, b]
            else:
                value = [var.component_index, n, b]
            if value not in data[var.key]:
                data[var.key].append(value)


def make_orbit_bfuncs(
    prim_neighbor_list: PrimNeighborList,
    clusters: list[list[casmclust.Cluster]],
    functions: list[list[list[PolynomialFunction]]],
    cpp_fmt: CppFormatProperties,
    linear_function_indices: Optional[set[int]] = None,
) -> tuple[list[dict], dict[str, list[list[int]]]]:
    """Convert clusters and functions to data used by Jinja templates to write the \
    orbit basis function evaluating methods (i.e. the contributions to the global \
    correlations from one unit cell).

    Parameters
    ----------
    prim_neighbor_list: libcasm.clexulator.PrimNeighborList
        :class:`~libcasm.clexulator.PrimNeighborList`, containing all the neighbors
        needed for evaluation, as generated by
        :class:`~casm.bset.cluster_functions.ClusterFunctionBuilder`.

    clusters: list[list[libcasm.clusterography.Cluster]]
        List of clusters, as generated by
        :class:`~casm.bset.cluster_functions.ClusterFunctionBuilder`. Site order
        must be consistent with `functions`.

    functions: list[list[list[casm.bset.polynomial_functions.PolynomialFunction]]]
        List of functions, as generated by
        :class:`~casm.bset.cluster_functions.ClusterFunctionBuilder`.

    cpp_fmt: CppFormatProperties
        C++ string formatting properties. If None, the default values are used.

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

    variables_needed: dict[str,list[list[int]]]
        The variables needed to evaluate the orbit basis functions. The dictionary keys
        are DoF type key, and values are lists of
        [`component_index`, `neighbor_list_index`, `sublattice_index`] for variables
        of that type. The `neighbor_list_index` and `sublattice_index` for global
        continuous DoF is None.

    """
    linear_function_index = 0
    linear_orbit_index = 0
    orbit_bfuncs = []
    variables_needed = {}

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
                _add_variables_needed(
                    data=variables_needed,
                    functions=orbit_functions,
                    prim_neighbor_list=prim_neighbor_list,
                )

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
    return (orbit_bfuncs, variables_needed)


def _make_site_bfuncs_data(
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
                "occ_delta_cpp": occ_delta_site_bfunc_cpp_str(
                    neighbor_list_index=neighbor_list_index,
                    point_functions=equiv_functions_by_point,
                    orbit_size=orbit_size,
                    prim_neighbor_list=prim_neighbor_list,
                    cpp_fmt=cpp_fmt,
                ),
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
) -> tuple[list[dict], list[dict[str, list[list[int]]]]]:
    """Convert clusters and functions to data used by Jinja templates to write the \
    point correlation evaluating methods.

    Parameters
    ----------
    is_periodic: bool
        Whether the Clexulator is for a periodic basis set or local basis set.
    prim_neighbor_list: libcasm.clexulator.PrimNeighborList
        :class:`~libcasm.clexulator.PrimNeighborList`, containing all the neighbors
        needed for evaluation, as output by
        :func:`~casm.bset.make_cluster_functions` or
        :func:`~casm.bset.make_local_cluster_functions`.
    clusters: list[list[libcasm.clusterography.Cluster]]
        List of clusters, as generated by
        :class:`~casm.bset.cluster_functions.ClusterFunctionBuilder`. Site order
        must be consistent with `functions`.
    functions: list[list[list[casm.bset.polynomial_functions.PolynomialFunction]]]
        List of functions, as generated by
        :class:`~casm.bset.cluster_functions.ClusterFunctionBuilder`.
    cpp_fmt: CppFormatProperties
        C++ string formatting properties. If None, the default values are used.
    linear_function_indices : Optional[set[int]]
        The linear indices of the functions that will be included. If None,
        all functions will be included in the Clexulator. Otherwise,
        only the specified functions will be included in the Clexulator

    Returns
    -------
    site_bfuncs_data: list[dict]
        List of dictionaries, one per cluster expansion basis function, with information
        needed for printing the Clexulator point correlation evaluation methods.
        The format is:

        - "linear_function_index": int - The cluster expansion basis function index.
        - "linear_orbit_index": int - The cluster orbit index
        - "at": list[dict] - Data for functions at specific points

          - "neighbor_list_index": int - Index into the neighbor list of the point
          - "cpp": str - The C++ code to evaluate the point functions
          - "occ_delta_cpp": str - The C++ code to evaluate the change in point
            functions due to the change of occupation index on the site from
            ``"occ_i"`` to ``"occ_f"``.
          - "latex_prototype": str - The latex expression for the point functions,
            including only functions from the prototype cluster
          - "latex_orbit": str - The latex expression for the point functions,
            including functions from the entire cluster orbit

    variables_needed_at: list[dict[str,list[list[int]]]]
        For each point, the variables needed to evaluate the point functions. The value
        of `variables_needed_at[neighbor_list_index]` is a dictionary, where the keys
        are DoF type key, and values are lists of
        [`component_index`, `neighbor_list_index`, `sublattice_index`] for variables
        of that type. The `neighbor_list_index` and `sublattice_index` for global
        continuous DoF is None.
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
    variables_needed_at = [{}] * n_point_corr_sites

    ### For constant term, linear_function_index==0:
    # Allow filtering by linear_function_index
    if (
        linear_function_indices is None
        or linear_function_index in linear_function_indices
    ):
        site_bfuncs.append(
            # make placeholders (no point functions)
            _make_site_bfuncs_data(
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
            point_functions = make_point_functions(
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
                for neighbor_list_index, equiv_functions_by_point in enumerate(
                    equiv_functions
                ):
                    _add_variables_needed(
                        data=variables_needed_at[neighbor_list_index],
                        functions=equiv_functions_by_point,
                        prim_neighbor_list=prim_neighbor_list,
                    )

                site_bfuncs.append(
                    # make point correlation formulas for each point corr site
                    _make_site_bfuncs_data(
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
    return (site_bfuncs, variables_needed_at)


class ClexulatorWriter:
    """Write Clexulator source files and related files"""

    def __init__(
        self,
        bset_dir: pathlib.Path,
        version: str,
        project_name: str,
        bset_name: str,
        linear_function_indices: Optional[set[int]] = None,
        cpp_fmt: Optional[CppFormatProperties] = None,
    ):
        """

        .. rubric:: Constructor

        Parameters
        ----------
        bset_dir: pathlib.Path
            The path to the basis set directory where the Clexulator and related files
            should be written

        version: str
            The Clexulator version to write. One of:

            - "v1.basic": Standard CASM v1 compatible Clexulator, without automatic
              differentiation
            - "v1.diff": (TODO) CASM v1 compatible Clexulator, with ``fadbad`` automatic
              differentiation enabled

        project_name: str
            Project name. Used to construct the Clexulator class name. This must
            consist of alphanumeric characters and underscores only. The first
            character may not be a number.

        bset_name: str
            Basis set name. Used to construct the Clexulator class name. This must
            consist of alphanumeric characters and underscores only.

        linear_function_indices : Optional[set[int]]
            The linear indices of the functions that will be included. If None,
            all functions will be included in the Clexulator. Otherwise,
            only the specified functions will be included in the Clexulator.
            Generally this is not known the first time a Clexulator is generated, but
            after fitting coefficients it may be used to re-generate the Clexulator
            with the subset of the basis functions needed.

        cpp_fmt: Optional[CppFormatProperties] = None,
            C++ string formatting properties. If None, the default values are used.

        """
        self.bset_dir: pathlib = pathlib.Path(bset_dir)
        self.version: str = version
        self.project_name: str = project_name
        self.bset_name: str = bset_name
        self.linear_function_indices: Optional[set[int]] = linear_function_indices
        self.cpp_fmt: Optional[CppFormatProperties] = cpp_fmt

        if not re.match(
            R"^[a-zA-Z_]+\w*",
            project_name,
        ):
            raise Exception(
                f"project_name='{project_name}' is not valid: ",
                "Must consist alphanumeric characters and underscores only. "
                "The first character may not be a number.",
            )
        if not re.match(
            R"^\w+",
            bset_name,
        ):
            raise Exception(
                f"bset_name='{bset_name}' is not valid: ",
                "Must consist alphanumeric characters and underscores only.",
            )

        if self.version == "v1.basic":
            from ._write_v1_basic import WriterV1Basic

            self.writer_type = WriterV1Basic
        else:
            raise Exception(f"Error in ClexulatorWriter: Unknown version '{version}'")

    def write(
        self,
        prim: casmconfig.Prim,
        clex_basis_specs: ClexBasisSpecs,
        prim_neighbor_list: PrimNeighborList,
    ):
        """Write Clexulator source files and related files

        Parameters
        ----------
        prim: libcasm.configuration.Prim
            The prim, with symmetry information.

        clex_basis_specs: casm.bset.cluster_functions.ClexBasisSpecs
            Parameters specifying the cluster orbits and basis function type and order.

        prim_neighbor_list: PrimNeighborList
            The :class:`PrimNeighborList` is used to uniquely index sites with local
            variables included in the cluster functions, relative to a reference unit
            cell. If None, a default neighbor list is constructed.

        """
        cluster_specs = clex_basis_specs.cluster_specs
        bfunc_specs = clex_basis_specs.basis_function_specs

        orbit_branch_max_poly_order = {
            int(key): value
            for key, value in bfunc_specs.orbit_branch_max_poly_order.items()
        }

        phenomenal = cluster_specs.phenomenal()
        is_periodic = phenomenal is None
        occ_site_functions = make_occ_site_functions(
            prim=prim,
            dof_specs=bfunc_specs.dof_specs,
        )

        builder = ClusterFunctionsBuilder(
            prim=prim,
            generating_group=cluster_specs.generating_group(),
            dofs=bfunc_specs.dofs,
            max_length=cluster_specs.max_length(),
            phenomenal=phenomenal,
            cutoff_radius=cluster_specs.cutoff_radius(),
            global_max_poly_order=bfunc_specs.global_max_poly_order,
            orbit_branch_max_poly_order=orbit_branch_max_poly_order,
            occ_site_functions=occ_site_functions,
            prim_neighbor_list=prim_neighbor_list,
        )

        env = jinja2.Environment(
            trim_blocks=True,
            lstrip_blocks=True,
            loader=jinja2.PackageLoader("casm.bset"),
        )
        template = env.get_template(self.writer_type.template_name())

        ## common clexulator writer parameters
        writer_params = dict(
            project_name=self.project_name,
            bset_name=self.bset_name,
            is_periodic=is_periodic,
            prim_neighbor_list=builder.prim_neighbor_list,
            occ_site_functions=occ_site_functions,
            linear_function_indices=self.linear_function_indices,
            cpp_fmt=self.cpp_fmt,
        )

        ## write periodic clexulator / prototype local clexulator
        writer = self.writer_type(
            i_clex=None,
            clusters=builder.clusters,
            functions=builder.functions,
            **writer_params,
        )
        clexulator_src_path = self.bset_dir / f"{writer.clexulator_name}.cc"
        with open(clexulator_src_path, "w") as f:
            f.write(template.render(writer.variables()))

        basis_path = self.bset_dir / "basis.json"
        with open(basis_path, "w") as f:
            f.write(xtal.pretty_json(builder.basis_dict()))

        ## if local clexulators
        if phenomenal is not None:
            # write equivalents_info.json
            equivalents_info_path = self.bset_dir / "equivalents_info.json"
            with open(equivalents_info_path, "w") as f:
                f.write(xtal.pretty_json(builder.equivalents_info_dict()))

            # write each local clexulator
            for i_clex in range(len(builder.equivalent_clusters)):
                writer = self.writer_type(
                    i_clex=i_clex,
                    clusters=builder.equivalent_clusters[i_clex],
                    functions=builder.equivalent_functions[i_clex],
                    **writer_params,
                )
                clexulator_src_path = (
                    self.bset_dir / f"{i_clex}" / f"{writer.clexulator_name}.cc"
                )
                clexulator_src_path.parent.mkdir(parents=True, exist_ok=True)
                with open(clexulator_src_path, "w") as f:
                    f.write(template.render(writer.variables()))

        return None
