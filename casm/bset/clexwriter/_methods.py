from typing import Any, Optional, Union
import pathlib

import jinja2

import libcasm.xtal as xtal
import libcasm.clusterography as casmclust
from libcasm.clexulator import (
    PrimNeighborList,
)
import libcasm.configuration as casmconfig
import libcasm.configuration.io as config_io

from casm.bset.clexwriter import (
    CppFormatProperties,
    occ_delta_site_bfunc_cpp_str,
    orbit_bfunc_cpp_str,
    site_bfunc_cpp_str,
)
from casm.bset.cluster_functions import (
    ClexBasisSpecs,
    make_equivalents_generators,
    make_periodic_cluster_functions,
    make_periodic_point_functions,
    orbits_to_dict,
)
from casm.bset.polynomial_functions import (
    PolynomialFunction,
)


def add_variables_needed(
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
                add_variables_needed(
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
                for neighbor_list_index, equiv_functions_by_point in enumerate(
                    equiv_functions
                ):
                    add_variables_needed(
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
    """Write a Clexulator C++ source file

    Parameters
    ----------
    f: io.TextIOBase
        A text stream, such as a file opened using
        ``open("MyProject_Clexulator_default.cpp", 'w')``, or an
        ``io.StringIO`` object.
    version: str
        The Clexulator version to write. One of:

        - "v1.basic": Standard CASM v1 compatible Clexulator, without automatic
          differentiation
        - "v1.diff": (TODO) CASM v1 compatible Clexulator, with ``fadbad`` automatic
          differentiation enabled

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

    if version == "v1.basic":
        from ._write_v1_basic import WriterV1Basic

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


class ClexulatorWriter:
    def __init__(
        self,
        version: str,
        project_name: str,
        bset_name: str,
        cpp_fmt: Optional[CppFormatProperties] = None,
    ):
        self.version: str = version
        self.project_name: str = project_name
        self.bset_name: str = bset_name
        self.cpp_fmt: Optional[CppFormatProperties] = cpp_fmt

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
        linear_function_indices: Optional[set[int]] = None,
    ):
        cluster_specs = clex_basis_specs.cluster_specs
        bfunc_specs = clex_basis_specs.basis_function_specs

        _orbits = cluster_specs.make_orbits()
        orbit_prototypes = [_orbit[0] for _orbit in _orbits]

        orbit_branch_max_poly_order = {
            int(key): value
            for key, value in bfunc_specs.orbit_branch_max_poly_order.items()
        }

        (
            orbits,
            functions,
            prim_neighbor_list,
            params,
        ) = make_periodic_cluster_functions(
            xtal_prim=prim.xtal_prim,
            dofs=bfunc_specs.dofs,
            orbit_prototypes=orbit_prototypes,
            global_max_poly_order=bfunc_specs.global_max_poly_order,
            orbit_branch_max_poly_order=orbit_branch_max_poly_order,
            make_equivalents=True,
            make_variable_name_f=None,
            prim_neighbor_list=prim_neighbor_list,
            verbose=False,
        )

        if cluster_specs.phenomenal() is not None:
            phenomenal = cluster_specs.phenomenal()

            (
                generating_ops,
                generating_indices,
                generating_site_reps,
            ) = make_equivalents_generators(
                cluster_specs=cluster_specs,
                prim=prim,
            )

            # Equivalents info, prototype
            equivalents_info = {}
            equivalents_info[
                "factor_group"
            ] = config_io.symgroup_to_dict_with_group_classification(
                prim, prim.factor_group
            )

            equivalents_info["prototype"] = {}
            prototype_info = {}
            prototype_info["phenomenal"] = phenomenal.to_dict(xtal_prim=prim.xtal_prim)
            prototype_info["prim"] = prim.to_dict()
            prototype_info["orbits"] = orbits_to_dict(orbits)

            # Get factor group operations
            # that generate equivalent local cluster expansions
            # equivalents_generation_ops = ...

            for i_equiv, op in enumerate(generating_ops):
                site_rep = generating_site_reps[i_equiv]
                M = None
                # M = equivalence_map_inv_matrix_rep[0]

                # Generate equivalent phenomenal cluster
                equiv_phenomenal = site_rep * phenomenal

                # Generate local clusters and functions
                # around equivalent phenomenal cluster

            return None
