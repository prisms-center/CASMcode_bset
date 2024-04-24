from typing import Callable, Iterable, Optional

import libcasm.clusterography as casmclust
import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
import numpy as np
from libcasm.clexulator import (
    PrimNeighborList,
    make_default_prim_neighbor_list,
)

from ._matrix_rep import (
    PeriodicOrbitMatrixRepBuilder,
)
from ._polynomial_function import (
    FunctionRep,
    PolynomialFunction,
    make_symmetry_adapted_polynomials,
)


def _get_dof_types(
    xtal_prim: xtal.Prim,
    dofs: Optional[list[str]] = None,
) -> tuple[list[str], list[str], list[str], dict]:
    """Given a list of dofs, make lists of which are global, local continuous, and local
    discrete.

    Parameters
    ----------
    xtal_prim: xtal.Prim
        The Prim
    dofs: Optional[Iterable[str]] = None
        An iterable of string of dof type names that should be used to construct basis
        functions. The default value is all DoF types included in the prim.

    Returns
    -------
    (global_dof, local_continuous_dof, local_discrete_dof):

        global_dof: list[str]
            The types of global degree of freedom (DoF). All global DoF are treated
            as continuous.

        local_continuous_dof: list[str]
            The types of local discrete degree of freedom (DoF).

        local_discrete_dof: list[str]
            The types of local discrete degree of freedom (DoF).

    """
    all_global_dof = set()
    for _global_dof in xtal_prim.global_dof():
        all_global_dof.add(_global_dof.dofname())

    all_local_continuous_dof = set()
    for _sublattice_dof in xtal_prim.local_dof():
        for _local_dof in _sublattice_dof:
            all_local_continuous_dof.add(_local_dof.dofname())

    # TODO: support other local discrete dof
    all_local_discrete_dof = set()
    for _occ_dof in xtal_prim.occ_dof():
        if len(_occ_dof) > 1:
            all_local_discrete_dof.add("occ")

    if dofs is None:
        global_dof = list(all_global_dof)
        local_continuous_dof = list(all_local_continuous_dof)
        local_discrete_dof = list(all_local_discrete_dof)
    else:
        global_dof = []
        local_continuous_dof = []
        local_discrete_dof = []
        for _dofname in dofs:
            if _dofname in all_global_dof:
                global_dof.append(_dofname)
            elif _dofname in all_local_continuous_dof:
                local_continuous_dof.append(_dofname)
            elif _dofname in all_local_discrete_dof:
                local_discrete_dof.append(_dofname)
            else:
                raise Exception(f"Error in _get_dof_types: Unknown dof '{_dofname}'")
    return (global_dof, local_continuous_dof, local_discrete_dof)


def _default_nlist_sublat_indices(
    xtal_prim: xtal.Prim,
) -> list[int]:
    """Default sublattice indices for PrimNeighborList

    Typically, sublattices are included in the neighbor list if they have allowed DoF,
    either >1 occupant DoF allowed, or 1 continuous DoF.

    Parameters
    ----------
    xtal_prim: xtal.Prim
        The Prim.

    Returns
    -------
    sublat_indices: list[int]
        The indices of the sublattices that should be included in the neighbor list.

    """
    sublat_indices = set()
    occ_dof = xtal_prim.occ_dof()
    for b, sublattice_occ_dof in enumerate(occ_dof):
        if len(sublattice_occ_dof) >= 2:
            sublat_indices.add(b)
    local_dof = xtal_prim.local_dof()
    for b, sublattice_local_dof in enumerate(local_dof):
        if len(sublattice_local_dof) > 0:
            sublat_indices.add(b)
    return list(sublat_indices)


def assign_neighborhood_site_index(
    cluster: casmclust.Cluster,
    function: PolynomialFunction,
    prim_neighbor_list: PrimNeighborList,
    translation: Optional[np.ndarray] = None,
):
    """Assign neighborhood_site_index for function variables

    Parameters
    ----------
    cluster: libcasm.clusterography.Cluster
        The cluster associated with the function
    function: casm.bset.PolynomialFunction
        A PolynomialFunction with variables that have cluster_site_index set
        referring to which site in `cluster` they are associated with.
    prim_neighbor_list: libcasm.clexulator.PrimNeighborList
        The neighbor list
    translation: Optional[np.ndarray],
        Optional translation to apply to cluster.

    """
    for var in function.variables:
        if var.cluster_site_index is not None:
            integral_site_coordinate = cluster[var.cluster_site_index]
            if translation is not None:
                integral_site_coordinate = integral_site_coordinate + translation
            var.neighborhood_site_index = prim_neighbor_list.neighbor_index(
                integral_site_coordinate
            )


def make_periodic_cluster_functions(
    xtal_prim: xtal.Prim,
    dofs: Optional[Iterable[str]] = None,
    orbit_prototypes: Optional[Iterable[casmclust.Cluster]] = None,
    max_length: Optional[list[float]] = None,
    global_max_poly_order: Optional[int] = None,
    orbit_branch_max_poly_order: dict[int, int] = {},
    make_equivalents: bool = True,
    make_variable_name_f: Optional[Callable] = None,
    prim_neighbor_list: Optional[PrimNeighborList] = None,
    verbose: bool = False,
) -> tuple[list[list[casmclust.Cluster]], list[list[list[PolynomialFunction]]]]:
    """Construct cluster functions with periodic symmetry

    Notes
    -----
    - Cluster functions are constructed for cluster orbits which may be given explicitly
      using the `orbit_prototypes` parameter, or generated automatically using the
      `max_length` parameter to specify the maximum site-to-site distance for
      clusters of a given number of sites.
    - For functions of only discrete DoF, the polynomial functions include a single
      site basis function from each discrete DoF type on each site in a cluster.
    - For functions that include continuous DoF, by default, polynomials of order up to
      the cluster size are created. Higher order polynomials are requested either
      according to cluster size using the `orbit_branch_max_poly_order` parameter or
      globally using `global_max_poly_order`. The most specific level specified is used.
    - Functions are generated for all equivalent clusters in the orbit by default. If
      only functions on the prototype cluster are needed, the `make_equivalents`
      parameter can be set to `False`.
    -

    Parameters
    ----------
    xtal_prim: xtal.Prim
        The Prim
    dofs: Optional[Iterable[str]] = None
        An iterable of string of dof type names that should be used to construct basis
        functions. The default value is all DoF types included in the prim.
    orbit_prototypes: Optional[Iterable[casmclust.Cluster]]
        An iterable of :class:`~casmclust.Cluster` containing the prototypes of orbits
        to generate functions for. If provided, `max_length` is ignored.
    max_length: list[float]
        If `orbit_prototypes` is not provided, `max_length` must be given to specify
        which clusters to generate functions for, using a site-to-site distance cutoff.
        Clusters with `n_site` sites are included if the maximum site-to-site distance
        is less than ``max_length[n_site]``. Notes:

        - For null and point clusters, there are no site-to-site distances so
          ``max_length[0]`` and ``max_length[1]`` are always ignored.

    global_max_poly_order: Optional[int] = None
        The maximum order of polynomials of continuous DoF to generate, for any orbit
        not specified more specifically by `orbit_branch_max_poly_order`.
    orbit_branch_max_poly_order: dict[int, int] = {}
        Specifies for continuous DoF the maximum polynomial order to generate by
        cluster size, according to
        ``orbit_branch_max_poly_order[cluster_size] = max_poly_order``. By default, for
        a given cluster orbit, polynomials of order up to the cluster size are created.
        Higher order polynomials are requested either according to cluster size
        using `orbit_branch_max_poly_order` or globally using `global_max_poly_order`.
        The most specific level specified is used.
    make_equivalents: bool = True
        If True, make all equivalent clusters and functions. Otherwise, only construct
        and return the prototype clusters and functions on the prototype cluster
        (i.e. ``i_equiv=0`` only).
    make_variable_name_f: Optional[Callable] = None
        Allows specifying a custom function to construct variable names. The default
        function used is :func:`make_variable_name`. Custom functions should have the
        same signature as :func:`make_variable_name`.
    prim_neighbor_list: Optional[PrimNeighborList] = None
        The :class:`PrimNeighborList` is used to uniquely index sites with local
        variables included in the cluster functions, relative to a reference unit cell.
        If not provided, a PrimNeighborList is constructed using default parameters
        that include all sites with degrees of freedom (DoF) and the default shape
        used by CASM projects. In most cases, this default should be used.
    verbose: bool = False
        Print progress statements

    Returns
    -------
    (clusters, functions, prim_neighbor_list, params):

        clusters: list[list[casmclust.Cluster]]
            Orbits of clusters, where ``orbits[i_orbit][i_equiv]``, is the
            `i_equiv`-th symmetrically equivalent cluster in the
            `i_orbit`-th orbit.

            The order of sites in the returned clusters is not arbitrary, it
            is consistent with the `cluster_site_index` of the :class:`Variable` used
            in the :class:`PolynomialFunction` returned in `functions`.

        functions: list[list[list[PolynomialFunction]]]
            Polynomial functions, where ``functions[i_orbit][i_equiv][i_func]``,
            is the `i_func`-th function on the cluster given by
            `clusters[i_orbit][i_equiv]`.

        prim_neighbor_list: PrimNeighborList
            The neighbor list corresponding to the `neighbor_list_index` of the
            :class:`Variable` used in the :class:`PolynomialFunction` returned in
            `functions`.

        params: dict
            Parameters used in clexulator writing

    """
    prim = casmconfig.Prim(xtal_prim)
    params = {}

    if orbit_prototypes is None:
        # generate cluster orbits
        cluster_specs = casmclust.ClusterSpecs(
            xtal_prim=prim.xtal_prim,
            generating_group=prim.factor_group,
            max_length=max_length,
        )
        orbit_prototypes = [orbit[0] for orbit in cluster_specs.make_orbits()]

    if prim_neighbor_list is None:
        prim_neighbor_list = make_default_prim_neighbor_list(xtal_prim=prim.xtal_prim)

    global_dof, local_continuous_dof, local_discrete_dof = _get_dof_types(
        xtal_prim, dofs
    )

    only_discrete = len(global_dof) + len(local_continuous_dof) == 0

    def min_poly_order(orbit_prototype):
        if only_discrete:
            return len(orbit_prototype)
        return 1

    def max_poly_order(orbit_prototype):
        if only_discrete:
            return len(orbit_prototype)
        branch = len(orbit_prototype)
        if branch in orbit_branch_max_poly_order:
            return orbit_branch_max_poly_order[branch]
        elif global_max_poly_order is not None:
            return int(global_max_poly_order)
        else:
            return branch

    # loop over cluster orbit prototypes,
    # building sym rep matrices and polynomial functions
    clusters = []
    functions = []
    for i_orbit, orbit_prototype in enumerate(orbit_prototypes):
        orbit_clusters = []
        orbit_basis_sets = []

        if verbose:
            print(f"~~~ i_orbit: {i_orbit} ~~~")
            print("Prototype cluster:")
            print(xtal.pretty_json(orbit_prototype.to_dict(prim.xtal_prim)))
            print()

        builder = PeriodicOrbitMatrixRepBuilder(
            prim=prim,
            generating_group=prim.factor_group,
            global_dof=global_dof,
            local_continuous_dof=local_continuous_dof,
            local_discrete_dof=local_discrete_dof,
            cluster=orbit_prototype,
            make_variable_name_f=make_variable_name_f,
        )

        if len(builder.prototype_variables) == 0:
            # if no variables, no functions
            if verbose:
                print("No variables")
            prototype_basis_set = []

        elif builder.n_local_variables == 0 and orbit_prototype.size() != 0:
            # if no local variables, only generate functions on the null cluster
            if verbose:
                print("No local variables")
            prototype_basis_set = []

        else:
            if verbose:
                print("Variables:")
                for i_var, var in enumerate(builder.prototype_variables):
                    print(f"{i_var}: {var.name}")
                print()
                print("Variable subsets:")
                for i_subset, subset in enumerate(builder.prototype_variable_subsets):
                    print(f"{i_subset}:", end="")
                    for i_var in subset:
                        print(f"{builder.prototype_variables[i_var].name}, ", end="")
                    print()
                print()

            prototype_basis_set = make_symmetry_adapted_polynomials(
                matrix_rep=builder.prototype_matrix_rep,
                variables=builder.prototype_variables,
                variable_subsets=builder.prototype_variable_subsets,
                min_poly_order=min_poly_order(orbit_prototype),
                max_poly_order=max_poly_order(orbit_prototype),
                constraints=builder.constraints,
                orthonormalize_in_place=False,
                verbose=verbose,
            )

        if verbose:
            print("Prototype cluster basis set:")
            if len(prototype_basis_set) == 0:
                print("Empty")
            for i_func, func in enumerate(prototype_basis_set):
                print(f"~~~ order: {func.order()}, function_index: {i_func} ~~~")
                func._basic_print()
                print()
            print()

        if builder.equivalence_map_clusters is None or not make_equivalents:
            if verbose:
                print("Skip generating equivalents...")
                print()
            # if generating prototype cluster basis set only
            orbit_clusters.append(builder.orbit[0])

            # TODO: set variable neighbor_list_index
            # basis_set = copy.deepcopy(prototype_basis_set)
            # for func in basis_set:
            #     for var in func.variables:
            #         var.neighborhood_site_index = prim_neighbor_list.

            orbit_basis_sets.append(prototype_basis_set)
        else:
            # generate basis sets on all equivalent clusters
            if verbose:
                print("Generating equivalents...")
                print()
            # i_equiv: index for equivalent clusters
            # M_list: sym rep matrices (1 for each sym op that prototype cluster to
            #     the equivalent cluster, only the first is needed here)
            for i_equiv, M_list in enumerate(builder.equivalence_map_inv_matrix_rep):
                # add equivalent cluster to orbit of clusters
                equiv_cluster = builder.equivalence_map_clusters[i_equiv][0]
                orbit_clusters.append(equiv_cluster)
                if verbose:
                    print(f"~~~ i_orbit: {i_orbit}, i_equiv: {i_equiv} ~~~")
                    print("Equivalent cluster:")
                    print(xtal.pretty_json(equiv_cluster.to_dict(prim.xtal_prim)))
                    print()

                # add basis set for equivalent cluster to orbit of basis sets
                equiv_basis_set = []
                for f_prototype in prototype_basis_set:
                    M = M_list[0]
                    S = FunctionRep(
                        matrix_rep=M,
                        neighborhood_site_index_perm_rep=None,
                    )
                    f_equiv = S * f_prototype
                    assign_neighborhood_site_index(
                        cluster=equiv_cluster,
                        function=f_equiv,
                        prim_neighbor_list=prim_neighbor_list,
                    )
                    assert f_equiv.variables is not f_prototype.variables
                    for i in range(len(f_prototype.variables)):
                        assert f_equiv.variables[i] is not f_prototype.variables[i]
                    equiv_basis_set.append(f_equiv)
                orbit_basis_sets.append(equiv_basis_set)
                if verbose:
                    print("Equivalent cluster basis set:")
                    if len(equiv_basis_set) == 0:
                        print("Empty")
                    for i_func, func in enumerate(equiv_basis_set):
                        print(
                            f"~~~ order: {func.order()}, function_index: {i_func} ~~~"
                        )
                        func._basic_print()
                        print()
                    print()

        clusters.append(orbit_clusters)
        functions.append(orbit_basis_sets)

    return clusters, functions, prim_neighbor_list, params


def make_periodic_point_functions(
    prim_neighbor_list: PrimNeighborList,
    orbit: list[casmclust.Cluster],
    orbit_functions: list[list[PolynomialFunction]],
):
    """Construct point functions

    This method uses the results of :func:`~casm.bset.make_periodic_cluster_functions`
    or :func:`~casm.bset.make_local_cluster_functions` and collects all the functions
    that involve each point. These functions are used by Clexulator methods that can
    calculate point correlations and changes in point correlations.

    Parameters
    ----------
    prim_neighbor_list: PrimNeighborList
        The :class:`PrimNeighborList` is used to uniquely index sites with local
        variables included in the cluster functions, relative to a reference unit cell.

    orbit: list[libcasm.clusterography.Cluster]
        An orbit of clusters, where ``orbit[i_equiv]``, is the
        `i_equiv`-th symmetrically equivalent cluster in the orbit.
        The order of sites in the clusters may not be arbitrary, it must be
        consistent with the `cluster_site_index` of the :class:`Variable` used
        in the :class:`PolynomialFunction` returned in `orbit_functions`.

        This should generally be one orbit as output by
        :func:`~casm.bset.make_periodic_cluster_functions` or
        :func:`~casm.bset.make_local_cluster_functions`.

    orbit_functions: list[list[casm.bset.PolynomialFunction]]
        Polynomial functions, where ``functions[i_equiv][i_func]``,
        is the `i_func`-th function on the cluster given by `orbit[i_equiv]`.

        This should generally be the functions for one orbit as output by
        :func:`~casm.bset.make_periodic_cluster_functions` or
        :func:`~casm.bset.make_local_cluster_functions`.

    Returns
    -------
    point_functions: list[list[list[casm.bset.PolynomialFunction]]]
        Polynomial functions, where ``point_functions[i_func][nlist_index]`` is
        a list of PolynomialFunction that are symmetrically equivalent to the
        `i_func`-th function on the clusters and involve the `nlist_index`-th site
        in the neighbor list.

    """
    if len(orbit) != len(orbit_functions):
        raise Exception(
            "Error in make_periodic_point_functions: "
            "orbit size does not match orbit_functions size"
        )

    if not len(orbit):
        return [[[]]]

    points = []
    for sublattice_index in prim_neighbor_list.sublattice_indices():
        points.append(
            xtal.IntegralSiteCoordinate(
                sublattice=sublattice_index,
                unitcell=[0, 0, 0],
            )
        )

    # orbit_point_functions: list[list[list[PolynomialFunction]]]
    # orbit_point_functions[i_func][nlist_index][i_point_function]
    point_functions = []
    for i_func in range(len(orbit_functions[0])):
        equiv_functions = []
        for nlist_index, point in enumerate(points):
            equiv_functions_by_point = []
            for i_equiv, equiv in enumerate(orbit):
                # for each cluster site on same sublattice as point,
                for site in equiv:
                    if site.sublattice() != point.sublattice():
                        continue
                    # copy function
                    f = orbit_functions[i_equiv][i_func].copy()
                    # assign neighborhood_site_index with translation to point
                    assign_neighborhood_site_index(
                        cluster=equiv,
                        function=f,
                        prim_neighbor_list=prim_neighbor_list,
                        translation=-site.unitcell(),
                    )
                    # add to point functions
                    equiv_functions_by_point.append(f)
            equiv_functions.append(equiv_functions_by_point)
        point_functions.append(equiv_functions)

    return point_functions
