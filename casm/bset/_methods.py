"""Simple top-level casm.bset methods for the most common use cases"""

import pathlib
from typing import Optional, Union

import casm.bset._helpers as _helpers
import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
from casm.bset.clexwriter import (
    ClexulatorWriter,
    CppFormatProperties,
)
from casm.bset.cluster_functions import (
    BasisFunctionSpecs,
    ClexBasisSpecs,
    ClusterFunctionsBuilder,
)
from libcasm.clexulator import (
    PrimNeighborList,
)
from libcasm.clusterography import (
    Cluster,
    ClusterOrbitGenerator,
    ClusterSpecs,
    make_cluster_group,
    make_integral_site_coordinate_symgroup_rep,
)
from libcasm.occ_events import (
    OccEvent,
    make_occevent_group,
    make_occevent_symgroup_rep,
)


def make_clex_basis_specs(
    prim: Union[xtal.Prim, casmconfig.Prim, dict, str, pathlib.Path],
    dofs: Optional[list[str]] = None,
    max_length: Optional[list[float]] = [],
    custom_generators: Optional[list[ClusterOrbitGenerator]] = [],
    phenomenal: Union[Cluster, OccEvent, None] = None,
    cutoff_radius: Optional[list[float]] = [],
    occ_site_basis_functions_specs: Union[str, list[dict], None] = None,
    global_max_poly_order: Optional[int] = None,
    orbit_branch_max_poly_order: Optional[dict] = None,
) -> ClexBasisSpecs:
    """Constructs cluster expansion basis functions specifications

    Parameters
    ----------
    prim: Union[libcasm.xtal.Prim, libcasm.configuration.Prim, dict, str, pathlib.Path]
        The prim, with symmetry information. May be provided as a Prim instance, a Prim
        dict, or the path to a file containing the Prim dict.

    dofs: Optional[list[str]] = None
        An list of string of dof type names that should be used to construct basis
        functions. The default value is all DoF types included in the prim.

    max_length: list[float] = []
        The maximum site-to-site distance to allow in clusters, by number of sites in
        the cluster. Example: `[0.0, 0.0, 5.0, 4.0]` specifies that pair clusters up to
        distance 5.0 and triplet clusters up to distance 4.0 should be included. The
        null cluster and point cluster values (elements 0 and 1) are arbitrary.

    custom_generators: list[libcasm.clusterography.ClusterOrbitGenerator] = []]
        Specifies clusters that should be uses to construct orbits regardless of the
        `max_length` or `cutoff_radius` parameters.

    phenomenal: Union[libcasm.clusterography.Cluster, libcasm.occ_events.OccEvent, \
    None] = None
        If provided, generate local cluster functions using the invariant group of the
        phenomenal cluster or event. By default, periodic cluster functions are
        generated.

    cutoff_radius: list[float] = []
        For local clusters, the maximum distance of sites from any phenomenal cluster
        site to include in the local environment, by number of sites in the cluster.
        The null cluster value (element 0) is arbitrary.

    occ_site_basis_functions_specs: Union[str, list[dict], None] = None
        Provides instructions for constructing occupation site basis functions.
        The accepted options are "chebychev", "occupation", or a `list[dict]`
        a specifying sublattice-specific choice of site basis functions. This
        parameter corresponds to the value of

        .. code-block:: Python

            "dof_specs": {
                "occ": {
                    "site_basis_functions": ...
                }
            }

        as described in detail in the section
        :ref:`DoF Specifications <sec-dof-specifications>` and is required for
        functions of occupation DoF.

    global_max_poly_order: Optional[int] = None
        The maximum order of polynomials of continuous DoF to generate, for any
        orbit not specified more specifically by `orbit_branch_max_poly_order`.

    orbit_branch_max_poly_order: Optional[dict[int, int]] = None
        Specifies for continuous DoF the maximum polynomial order to generate by
        cluster size, according to
        ``orbit_branch_max_poly_order[cluster_size] = max_poly_order``. By default,
        for a given cluster orbit, polynomials of order up to the cluster size are
        created. Higher order polynomials are requested either according to cluster
        size using `orbit_branch_max_poly_order` or globally using
        `global_max_poly_order`. The most specific level specified is used.

    Returns
    -------
    clex_basis_specs: casm.bset.cluster_functions.ClexBasisSpecs
        The cluster expansion basis set specifications

    """
    prim = _helpers.as_Prim(prim)

    # cluster specs
    if phenomenal is None:
        generating_group = prim.factor_group
        phenomenal_cluster = None
    elif isinstance(phenomenal, Cluster):
        symgroup_rep = make_integral_site_coordinate_symgroup_rep(
            prim.factor_group.elements, prim.xtal_prim
        )
        generating_group = make_cluster_group(
            cluster=phenomenal,
            group=prim.factor_group,
            lattice=prim.xtal_prim.lattice(),
            integral_site_coordinate_symgroup_rep=symgroup_rep,
        )
        phenomenal_cluster = phenomenal
    elif isinstance(phenomenal, OccEvent):
        symgroup_rep = make_occevent_symgroup_rep(
            prim.factor_group.elements, prim.xtal_prim
        )
        generating_group = make_occevent_group(
            occ_event=phenomenal,
            group=prim.factor_group,
            lattice=prim.xtal_prim.lattice(),
            occevent_symgroup_rep=symgroup_rep,
        )
        phenomenal_cluster = phenomenal.cluster()
    else:
        raise ValueError(
            "Error in build_cluster_functions:"
            "`phenomenal` must be a Cluster, OccEvent, or None"
        )

    cluster_specs = ClusterSpecs(
        xtal_prim=prim.xtal_prim,
        generating_group=generating_group,
        max_length=max_length,
        custom_generators=custom_generators,
        phenomenal=phenomenal_cluster,
        include_phenomenal_sites=False,
        cutoff_radius=cutoff_radius,
    )

    dof_specs = {}
    if occ_site_basis_functions_specs is not None:
        dof_specs["occ"] = {"site_basis_functions": occ_site_basis_functions_specs}

    _orbit_branch_max_poly_order = {}
    if orbit_branch_max_poly_order is not None:
        _orbit_branch_max_poly_order = {
            str(key): value for key, value in orbit_branch_max_poly_order.items()
        }

    return ClexBasisSpecs(
        cluster_specs=cluster_specs,
        basis_function_specs=BasisFunctionSpecs(
            dofs=dofs,
            dof_specs=dof_specs,
            global_max_poly_order=global_max_poly_order,
            orbit_branch_max_poly_order=_orbit_branch_max_poly_order,
        ),
    )


def build_cluster_functions(
    prim: Union[xtal.Prim, casmconfig.Prim, dict, str, pathlib.Path],
    clex_basis_specs: Union[ClexBasisSpecs, dict, str, pathlib.Path],
    prim_neighbor_list: Optional[PrimNeighborList] = None,
    make_equivalents: bool = True,
    make_all_local_basis_sets: bool = True,
    verbose: bool = False,
) -> ClusterFunctionsBuilder:
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
        variables included in the cluster functions, relative to a reference unit
        cell. If not provided, a PrimNeighborList is constructed using default
        parameters that include all sites with degrees of freedom (DoF) and the
        default shape used by CASM projects. In most cases, the default should be
        used.

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
    builder: casm.bset.cluster_functions.ClusterFunctionsBuilder
        The ClusterFunctionsBuilder data structure holds the generated cluster
        functions and associated clusters.

    """
    prim = _helpers.as_Prim(prim)
    prim_neighbor_list = _helpers.as_PrimNeighborList(prim_neighbor_list, prim=prim)

    clex_basis_specs = _helpers.as_ClexBasisSpecs(clex_basis_specs, prim=prim)

    cluster_specs = clex_basis_specs.cluster_specs
    clusters = [orbit[0] for orbit in cluster_specs.make_orbits()]
    phenomenal_cluster = cluster_specs.phenomenal()

    bfunc_specs = clex_basis_specs.basis_function_specs
    orbit_branch_max_poly_order = {
        int(key): value
        for key, value in bfunc_specs.orbit_branch_max_poly_order.items()
    }
    occ_site_basis_functions_specs = None
    if "occ" in bfunc_specs.dof_specs:
        if "site_basis_functions" in bfunc_specs.dof_specs["occ"]:
            occ_site_basis_functions_specs = bfunc_specs.dof_specs["occ"][
                "site_basis_functions"
            ]

    return ClusterFunctionsBuilder(
        prim=prim,
        generating_group=cluster_specs.generating_group(),
        clusters=clusters,
        phenomenal=phenomenal_cluster,
        dofs=bfunc_specs.dofs,
        global_max_poly_order=bfunc_specs.global_max_poly_order,
        orbit_branch_max_poly_order=orbit_branch_max_poly_order,
        occ_site_basis_functions_specs=occ_site_basis_functions_specs,
        prim_neighbor_list=prim_neighbor_list,
        make_equivalents=make_equivalents,
        make_all_local_basis_sets=make_all_local_basis_sets,
        verbose=verbose,
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
) -> tuple[pathlib.Path, Optional[list[pathlib.Path]], PrimNeighborList]:
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

    Returns
    -------
    src_path: pathlib.Path
        The path to the Clexulator source file
    local_src_path: Optional[list[pathlib.Path]]
        The paths to the local Clexulator source files
    prim_neighbor_list: libcasm.clexulator.PrimNeighborList
        The PrimNeighborList.
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

    return (writer.src_path, writer.local_src_path, prim_neighbor_list)
