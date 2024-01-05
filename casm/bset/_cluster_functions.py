from typing import Optional

import libcasm.clusterography as casmclust
import libcasm.configuration as casmconfig
import libcasm.xtal as xtal

from casm.bset import (
    FunctionRep,
    PeriodicOrbitMatrixRepBuilder,
    PolynomialFunction,
    make_symmetry_adapted_polynomials,
)


def make_periodic_cluster_functions(
    xtal_prim: xtal.Prim,
    key: str,
    max_poly_order: int,
    orbit_prototypes: Optional[list[casmclust.Cluster]] = None,
    max_length: Optional[list[float]] = None,
    min_poly_order: int = 1,
    make_equivalents: bool = True,
    verbose: bool = False,
) -> tuple[list[list[casmclust.Cluster]], list[list[list[PolynomialFunction]]]]:
    """Construct cluster functions

    Parameters
    ----------
    xtal_prim: xtal.Prim
        The Prim
    key: str
        The type of local degree of freedom (DoF) to build functions for
    max_poly_order: int
        The maximum order of polynomials to generate.
    orbit_prototypes: Optional[list[casmclust.Cluster]]
        A list of :class:`~casmclust.Cluster` containing the prototypes of orbits to
        generate functions for. If provided, `max_length` is ignored.
    max_length: list[float]
        If `orbit_prototypes` is not provided, `max_length` must be given to specify
        which clusters to generate functions for, using a site-to-site distance cutoff.
        Clusters with `n_site` sites are included if the maximum site-to-site distance
        is less than ``max_length[n_site]``. Notes:

        - For null and point clusters, there are no site-to-site distances so
          ``max_length[0]`` and ``max_length[1]`` are always ignored.

    min_poly_order: int = 1
        The minimum order of polynomials to generate.
    make_equivalents: bool = True
        If True, make all equivalent clusters and functions. Otherwise, only construct
        and return the prototype clusters and functions on the prototype cluster
        (i.e. ``i_equiv=0`` only).
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

        if orbit_prototype.size() == 0:
            orbit_clusters.append(orbit_prototype)
            orbit_basis_sets.append([])
            clusters.append(orbit_clusters)
            functions.append(orbit_basis_sets)
            continue

        builder = PeriodicOrbitMatrixRepBuilder(
            prim=prim,
            key=key,
            cluster=orbit_prototype,
        )

        prototype_basis_set = make_symmetry_adapted_polynomials(
            matrix_rep=builder.prototype.cluster_matrix_rep,
            variables=builder.prototype.variables,
            variable_subsets=builder.prototype.variable_subsets,
            min_poly_order=min_poly_order,
            max_poly_order=max_poly_order,
            orthonormalize_in_place=True,
            verbose=verbose,
        )
        if verbose:
            print("Prototype cluster basis set:")
            for i_func, func in enumerate(prototype_basis_set):
                print(f"~~~ order: {func.order()}, function_index: {i_func} ~~~")
                func._basic_print()
                print()
            print()

        if make_equivalents:
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
                    for i_func, func in enumerate(equiv_basis_set):
                        print(
                            f"~~~ order: {func.order()}, function_index: {i_func} ~~~"
                        )
                        func._basic_print()
                        print()
                    print()

        else:
            orbit_clusters.append(builder.equivalence_map_clusters[0][0])
            orbit_basis_sets.append(prototype_basis_set)

        clusters.append(orbit_clusters)
        functions.append(orbit_basis_sets)

    return clusters, functions
