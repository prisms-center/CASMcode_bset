from typing import Callable, Iterable, Optional

import libcasm.clusterography as casmclust
import libcasm.configuration as casmconfig
import libcasm.xtal as xtal

from ._matrix_rep import (
    PeriodicOrbitMatrixRepBuilder,
)
from ._polynomial_function import (
    FunctionRep,
    PolynomialFunction,
    make_symmetry_adapted_polynomials,
)


def make_periodic_cluster_functions(
    xtal_prim: xtal.Prim,
    global_max_poly_order: int,
    dofs: Optional[Iterable[str]] = None,
    orbit_prototypes: Optional[Iterable[casmclust.Cluster]] = None,
    max_length: Optional[list[float]] = None,
    orbit_branch_max_poly_order: Optional[list[int]] = None,
    make_equivalents: bool = True,
    make_variable_name_f: Optional[Callable] = None,
    verbose: bool = False,
) -> tuple[list[list[casmclust.Cluster]], list[list[list[PolynomialFunction]]]]:
    """Construct cluster functions

    Parameters
    ----------
    xtal_prim: xtal.Prim
        The Prim
    global_max_poly_order: int
        The maximum order of polynomials to generate, for any orbit.
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

    orbit_branch_max_poly_order: Optional[list[int]]
        The maximum order of polynomials to generate, by orbit branch (number of sites
        in the cluster). If not None, for clusters with `n_sites` sites the maximum
        polynomial order is set to the minimum of
        ``orbit_branch_max_poly_order[n_sites]`` and ``global_max_poly_order``.
    make_equivalents: bool = True
        If True, make all equivalent clusters and functions. Otherwise, only construct
        and return the prototype clusters and functions on the prototype cluster
        (i.e. ``i_equiv=0`` only).
    make_variable_name_f: Optional[Callable] = None
        Allows specifying a custom function to construct variable names. The default
        function used is :func:`make_variable_name`. Custom functions should have the
        same signature as :func:`make_variable_name`.
    verbose: bool = False
        Print progress statements

    Returns
    -------
    (clusters, functions):

        clusters: list[list[casmclust.Cluster]]
            Orbits of clusters, where ``orbits[i_orbit][i_equiv]``, is the
            `i_equiv`-th symmetrically equivalent cluster in the
            `i_orbit`-th orbit.

        functions: list[list[list[PolynomialFunction]]]
            Polynomial functions, where ``functions[i_orbit][i_equiv][i_func]``,
            is the `i_func`-th function on the cluster given by
            `clusters[i_orbit][i_equiv]`.
    """
    prim = casmconfig.Prim(xtal_prim)

    if orbit_prototypes is None:
        # generate cluster orbits
        cluster_specs = casmclust.ClusterSpecs(
            xtal_prim=prim.xtal_prim(),
            generating_group=prim.factor_group(),
            max_length=max_length,
        )
        orbit_prototypes = [orbit[0] for orbit in cluster_specs.make_orbits()]

    max_cluster_size = 0
    for orbit_prototype in orbit_prototypes:
        if len(orbit_prototype) > max_cluster_size:
            max_cluster_size = len(orbit_prototype)

    # determine max_poly_order[n_sites]
    i = 0
    max_poly_order = []
    while len(max_poly_order) < max_cluster_size + 1:
        if orbit_branch_max_poly_order is None or len(orbit_branch_max_poly_order) <= i:
            max_poly_order.append(global_max_poly_order)
        else:
            max_poly_order.append(
                min(orbit_branch_max_poly_order[i], global_max_poly_order)
            )
        i += 1

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
                raise Exception(
                    "Error in make_periodic_cluster_functions: "
                    f"Unknown dof '{_dofname}'"
                )
    print("global_dof:", global_dof)
    print("local_continuous_dof:", local_continuous_dof)
    print("local_discrete_dof:", local_discrete_dof)

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
            print(xtal.pretty_json(orbit_prototype.to_dict(prim.xtal_prim())))
            print()

        builder = PeriodicOrbitMatrixRepBuilder(
            prim=prim,
            generating_group=prim.factor_group(),
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
                min_poly_order=1,
                max_poly_order=max_poly_order[orbit_prototype.size()],
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
                    print(xtal.pretty_json(equiv_cluster.to_dict(prim.xtal_prim())))
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

    return clusters, functions
