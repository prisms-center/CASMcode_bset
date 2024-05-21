"""Simple top-level casm.bset methods for the most common use cases"""
import pathlib
from typing import Optional, Union

import libcasm.clusterography as casmclust
import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
from libcasm.clexulator import (
    PrimNeighborList,
)

import casm.bset._helpers as _helpers
from casm.bset.clexwriter import (
    ClexulatorWriter,
    CppFormatProperties,
)
from casm.bset.cluster_functions import (
    ClexBasisSpecs,
    ClusterFunctionsBuilder,
    make_occ_site_functions,
)
from casm.bset.polynomial_functions import (
    PolynomialFunction,
)


def make_cluster_functions(
    prim: Union[xtal.Prim, casmconfig.Prim, dict, str, pathlib.Path],
    clex_basis_specs: Union[ClexBasisSpecs, dict, str, pathlib.Path],
    prim_neighbor_list: Optional[PrimNeighborList] = None,
    make_equivalents: bool = True,
    make_all_local_basis_sets: bool = True,
    verbose: bool = False,
) -> tuple[
    list[list[list[PolynomialFunction]]],
    list[list[casmclust.Cluster]],
    PrimNeighborList,
    list[list[list[list[PolynomialFunction]]]] | None,
    list[list[list[casmclust.Cluster]]] | None,
]:
    """Constructs cluster expansion basis functions

    Parameters
    ----------
    prim: Union[libcasm.xtal.Prim, libcasm.configuration.Prim, dict, str, pathlib.Path]
        The prim, with symmetry information. May be provided as a Prim instance, a Prim
        dict, or the path to a file containing the Prim dict.

    clex_basis_specs: Union[casm.bset.cluster_functions.ClexBasisSpecs, dict, str, \
    pathlib.Path]
        Parameters specifying the cluster orbits and basis function type and order. May
        be provided as a ClexBasisSpecs instance, a ClexBasisSpecs dict, or the path
        to a file containing a ClexBasisSpecs dict.

    prim_neighbor_list: Optional[libcasm.clexulator.PrimNeighborList] = None
        The :class:`PrimNeighborList` is used to uniquely index sites with local
        variables included in the cluster functions, relative to a reference unit cell.
        If None, a default neighbor list is constructed.

    make_equivalents: bool = True
            If True, make all equivalent clusters and functions. Otherwise, only
            construct and return the prototype clusters and functions on the prototype
            cluster (i.e. ``i_equiv=0`` only).

    make_all_local_basis_sets: bool = True
        If True, make local clusters and functions for all phenomenal
        clusters in the primitive cell equivalent by prim factor group symmetry.
        Requires that `make_equivalents` is True.

    verbose: bool = False
        Print progress statements


    Returns
    -------
    functions: list[list[list[\
    `PolynomialFunction <casm.bset.polynomial_functions.PolynomialFunction>`_]]]
        Polynomial functions, where ``functions[i_orbit][i_equiv][i_func]``,
        is the `i_func`-th function on the cluster given by
        `clusters[i_orbit][i_equiv]`.

    clusters: list[list[`Cluster <libcasm.clusterography.Cluster>`_]]
        Clusters associated with the generatd `functions`. The cluster
        ``clusters[i_orbit][i_equiv]`` is the `i_equiv`-th symmetrically equivalent
        cluster in the `i_orbit`-th orbit. The order of sites in the returned
        clusters is not arbitrary, it is consistent with the way variables are
        defined in the returned `functions`.

    prim_neighbor_list: `PrimNeighborList <libcasm.clexulator.PrimNeighborList>`_
        The neighbor list corresponding to the `neighbor_list_index` of the
        :class:`Variable` used in the :class:`PolynomialFunction` returned in
        `functions`.

    equivalent_functions: Optional[list[list[list[list[\
    `PolynomialFunction <casm.bset.polynomial_functions.PolynomialFunction>`_]]]]]
        The generated cluster functions about all equivalent phenomenal clusters
        (if a local cluster expansion). The function
        ``equivalent_functions[i_clex][i_orbit][i_equiv][i_func]``, is the
        `i_func`-th function on the `i_equiv`-th cluster in the `i_orbit`-th orbit
        about the `i_clex`-th equivalent phenomenal cluster.

    equivalent_clusters: Optional[list[list[list[\
    `Cluster <libcasm.clusterography.Cluster>`_]]]]
        Clusters for the `equivalent_functions` are constructed. The
        cluster ``equivalent_clusters[i_clex][i_orbit][i_equiv]`` is the
        `i_equiv`-th symmetrically equivalent cluster in the `i_orbit`-th orbit
        about the `i_clex`-th equivalent phenomenal cluster. The order of sites in
        the returned clusters is not arbitrary, it is consistent with the way
        variables are defined in the returned `functions`.

    """
    prim = _helpers.as_Prim(prim)
    clex_basis_specs = _helpers.as_ClexBasisSpecs(clex_basis_specs, prim=prim)
    prim_neighbor_list = _helpers.as_PrimNeighborList(prim_neighbor_list, prim=prim)

    cluster_specs = clex_basis_specs.cluster_specs
    clusters = [orbit[0] for orbit in cluster_specs.make_orbits()]

    bfunc_specs = clex_basis_specs.basis_function_specs
    orbit_branch_max_poly_order = {
        int(key): value
        for key, value in bfunc_specs.orbit_branch_max_poly_order.items()
    }
    occ_site_functions = make_occ_site_functions(
        prim=prim,
        dof_specs=bfunc_specs.dof_specs,
    )

    builder = ClusterFunctionsBuilder(
        prim=prim,
        dofs=bfunc_specs.dofs,
        generating_group=cluster_specs.generating_group(),
        clusters=clusters,
        phenomenal=cluster_specs.phenomenal(),
        global_max_poly_order=bfunc_specs.global_max_poly_order,
        orbit_branch_max_poly_order=orbit_branch_max_poly_order,
        occ_site_functions=occ_site_functions,
        prim_neighbor_list=prim_neighbor_list,
        make_equivalents=make_equivalents,
        make_all_local_basis_sets=make_all_local_basis_sets,
        verbose=verbose,
    )

    return (
        builder.functions,
        builder.clusters,
        builder.prim_neighbor_list,
        builder.equivalent_functions,
        builder.equivalent_clusters,
    )


def write_clexulator(
    prim: Union[xtal.Prim, casmconfig.Prim, dict, str, pathlib.Path],
    clex_basis_specs: Union[ClexBasisSpecs, dict, str, pathlib.Path],
    bset_dir: Union[str, pathlib.Path, None] = None,
    prim_neighbor_list: Optional[PrimNeighborList] = None,
    project_name: Optional[str] = None,
    bset_name: str = "default",
    version: str = "v1.basic",
    linear_function_indices: Optional[set[int]] = None,
    cpp_fmt: Optional[CppFormatProperties] = None,
) -> None:
    """Write a CASM Clexulator

    Notes
    -----

    The CASM Clexulator is written to the `bset_dir` directory as described in the
    documentation for
    `the CASM Clexulator <https://prisms-center.github.io/CASMcode_pydocs/libcasm/clexulator/2.0/usage/cluster_expansion_details.html#the-casm-clexulator>`_.

    Parameters
    ----------
    prim: Union[libcasm.xtal.Prim, libcasm.configuration.Prim, dict, str, pathlib.Path]
        The prim, with symmetry information. May be provided as a Prim instance, a Prim
        dict, or the path to a file containing the Prim dict.

    clex_basis_specs: Union[casm.bset.cluster_functions.ClexBasisSpecs, dict, str, \
    pathlib.Path]
        Parameters specifying the cluster orbits and basis function type and order. May
        be provided as a ClexBasisSpecs instance, a ClexBasisSpecs dict, or the path
        to a file containing a ClexBasisSpecs dict.

    bset_dir: Union[pathlib.Path, str, None] = None
        The path to the basis set directory where the Clexulator should be written.
        If None, the current working directory is used.

    prim_neighbor_list: Optional[PrimNeighborList] = None
        The :class:`PrimNeighborList` is used to uniquely index sites with local
        variables included in the cluster functions, relative to a reference unit cell.
        If None, a default neighbor list is constructed.

    project_name: Optional[str] = None
        Project name. Used to construct the Clexulator class name. If None, uses
        the prim's title. This must consist of alphanumeric characters and underscores
        only. The first character may not be a number.

    bset_name: str = "default"
        Basis set name. Used to construct the Clexulator class name. This must consist
        of alphanumeric characters and underscores only.

    version: str = "v1.basic"
        The Clexulator version to write. One of:

        - "v1.basic": Standard CASM v1 compatible Clexulator, without automatic
          differentiation
        - "v1.diff": (TODO) CASM v1 compatible Clexulator, with ``fadbad`` automatic
          differentiation enabled

    linear_function_indices: Optional[set[int]] = None
        (Experimental feature) The linear indices of the functions that will be
        included. If None, all functions will be included in the Clexulator. Otherwise,
        only the specified functions will be included in the Clexulator.
        Generally this is not known the first time a Clexulator is generated, but
        after fitting coefficients it may be used to re-generate the Clexulator
        with the subset of the basis functions needed.

    cpp_fmt: Optional[CppFormatProperties] = None
        C++ string formatting properties. If None, default constructor values are used.

    """
    prim = _helpers.as_Prim(prim)
    clex_basis_specs = _helpers.as_ClexBasisSpecs(clex_basis_specs, prim=prim)
    bset_dir = _helpers.as_bset_dir(bset_dir)
    prim_neighbor_list = _helpers.as_PrimNeighborList(prim_neighbor_list, prim=prim)

    if project_name is None:
        project_name = prim.to_dict().get("title", "")

    writer = ClexulatorWriter(
        bset_dir=bset_dir,
        version=version,
        project_name=project_name,
        bset_name=bset_name,
        linear_function_indices=linear_function_indices,
        cpp_fmt=cpp_fmt,
    )
    writer.write(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        prim_neighbor_list=prim_neighbor_list,
    )
