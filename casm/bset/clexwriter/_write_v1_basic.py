from typing import Optional

import libcasm.clusterography as casmclust
from libcasm.clexulator import (
    PrimNeighborList,
)

from casm.bset.clexwriter._cpp_str import (
    CppFormatProperties,
)
from casm.bset.polynomial_functions import (
    PolynomialFunction,
)

from ._methods import (
    make_orbit_bfuncs,
    make_site_bfuncs,
)


class WriterV1Basic:
    """Writes standard CASM v1 compatible Clexulator (no automatic differentiation)"""

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

        .. rubric:: Constructor

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
            :func:`~casm.bset.make_cluster_functions` or
            :func:`~casm.bset.make_local_cluster_functions`.
        clusters: list[list[libcasm.clusterography.Cluster]]
            List of clusters, as output by
            :func:`~casm.bset.make_cluster_functions` or
            :func:`~casm.bset.make_local_cluster_functions`.
        functions: list[list[list[casm.bset.PolynomialFunction]]]
            List of functions, as output by as output by
            :func:`~casm.bset.make_cluster_functions` or
            :func:`~casm.bset.make_local_cluster_functions`.
        occ_site_functions: list[dict]
            List of occupation site basis functions. For each sublattice with discrete
            site basis functions, must include:

            - `"sublattice_index"`: int, index of the sublattice
            - `"function"`: list[list[float]], list of the site basis function values,
              by DoF key (i.e. "occ") as ``value = X[function_index][occupant_index]``.

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
        self.orbit_bfuncs, self.orbit_bfuncs_variables_needed = make_orbit_bfuncs(
            prim_neighbor_list=self.prim_neighbor_list,
            clusters=clusters,
            functions=functions,
            cpp_fmt=self.cpp_fmt,
            linear_function_indices=self.linear_function_indices,
        )

        # set self.site_bfuncs
        self.site_bfuncs, self.site_bfuncs_variables_needed_at = make_site_bfuncs(
            is_periodic=is_periodic,
            prim_neighbor_list=self.prim_neighbor_list,
            clusters=clusters,
            functions=functions,
            cpp_fmt=self.cpp_fmt,
            linear_function_indices=self.linear_function_indices,
        )

        print("orbit_bfunfs_variables_needed:")
        print(self.orbit_bfuncs_variables_needed)
        print()

        for i, variables_needed in enumerate(self.site_bfuncs_variables_needed_at):
            print(f"site_bfunfs_variables_needed_at_{i}:")
            print(variables_needed)
            print()

    def variables(self) -> dict:
        return {
            "clexulator_name": self.clexulator_name,
            "nlist_size": self.nlist_size,
            "n_corr": self.n_corr,
            "n_point_corr_sites": self.n_point_corr_sites,
            "orbit_bfuncs": self.orbit_bfuncs,
            "orbit_bfuncs_variables_needed": self.orbit_bfuncs_variables_needed,
            "site_bfuncs": self.site_bfuncs,
            "site_bfuncs_variables_needed_at": self.site_bfuncs_variables_needed_at,
            "occ_site_functions": self.occ_site_functions,
            "continuous_dof": self.continuous_dof,
            "params": self.params,
            "nlist_weight_matrix": self.prim_neighbor_list.weight_matrix().tolist(),
            "nlist_sublattice_indices": self.prim_neighbor_list.sublattice_indices(),
            "nlist_total_n_sublattice": self.prim_neighbor_list.total_n_sublattice(),
        }
