from typing import Callable, Iterable, Optional

import libcasm.clusterography as casmclust
import libcasm.configuration as casmconfig
import libcasm.sym_info as sym_info
import libcasm.xtal as xtal
import numpy as np
from libcasm.clexulator import (
    PrimNeighborList,
    make_default_prim_neighbor_list,
)

from casm.bset.cluster_functions._discrete_functions import (
    get_occ_site_functions,
)
from casm.bset.cluster_functions._matrix_rep import (
    OrbitMatrixRepBuilder,
)
from casm.bset.polynomial_functions import (
    ExponentSumConstraint,
    FunctionRep,
    PolynomialFunction,
    Variable,
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


def make_equivalent_cluster_basis_sets(
    prototype_cluster_basis_set: list[list[PolynomialFunction]],
    equivalence_map_clusters: list[list[casmclust.Cluster]],
    equivalence_map_inv_matrix_rep: list[list[np.ndarray]],
    prim_neighbor_list: PrimNeighborList,
    verbose: bool = False,
    prim: Optional[casmconfig.Prim] = None,
    i_orbit: Optional[int] = None,
) -> tuple[list[casmclust.Cluster], list[list[PolynomialFunction]]]:
    orbit = []
    orbit_basis_sets = []

    # generate basis sets on all equivalent clusters
    if verbose:
        print("Generating equivalents...")
        print()
    # i_equiv: index for equivalent clusters
    # M_list: sym rep matrices (1 for each sym op that prototype cluster to
    #     the equivalent cluster, only the first is needed here)
    for i_equiv, M_list in enumerate(equivalence_map_inv_matrix_rep):
        # add equivalent cluster to orbit of clusters
        equiv_cluster = equivalence_map_clusters[i_equiv][0]
        orbit.append(equiv_cluster)
        if verbose:
            print(f"~~~ i_orbit: {i_orbit}, i_equiv: {i_equiv} ~~~")
            print("Equivalent cluster:")
            print(xtal.pretty_json(equiv_cluster.to_dict(prim.xtal_prim)))
            print()

        # add basis set for equivalent cluster to orbit of basis sets
        equiv_basis_set = []
        for f_prototype in prototype_cluster_basis_set:
            M = M_list[0]
            S = FunctionRep(matrix_rep=M)
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
                print(f"~~~ order: {func.order()}, function_index: {i_func} ~~~")
                func._basic_print()
                print()
            print()

    return (orbit, orbit_basis_sets)


def make_constraints(
    prototype_cluster: casmclust.Cluster,
    prototype_variables: list[Variable],
    prototype_variable_subsets: list[set[int]],
    occ_site_functions: list[dict],
    local_discrete_dof: list[str],
):
    """Make constraints for constructing symmetry adapted polynomials

    Parameters
    ----------
    prototype_cluster: libcasm.clusterography.Cluster
        The prototype cluster.
    prototype_variables: list[casm.bset.polynomial_functions.Variable]
        The prototype cluster function variables, including global and local variables.
    prototype_variable_subsets: list[set[int]]
        The indices of Variable in `prototype_variables` which mix under application of
        symmetry, or permute as a group. A subset could be strain variables,
        displacement variables on a site, or occupant site basis functions on a site.
    occ_site_functions: list[dict]
        List of occupation site basis functions. For each sublattice with discrete
        site basis functions, must include:

        - `"sublattice_index"`: int, index of the sublattice
        - `"functions"`: list[list[float]], list of the site basis function values, by
          DoF key (i.e. "occ") as ``value = functions[function_index][occupant_index]``.
    local_discrete_dof: list[str]
            The types of local discrete degree of freedom (DoF).

    Returns
    -------
    constraints: list[casm.bset.polynomial_functions.ExponentSumConstraint]
        Constraints that set the exponent for constant discrete site functions to 0,
        and ensure one and only one of mutually exclusive discrete variables
        is included in any monomial.
    """
    constraints = []
    for subset in prototype_variable_subsets:
        var = prototype_variables[subset[0]]
        if var.cluster_site_index is None or var.key not in local_discrete_dof:
            continue

        # Find the constant site function and set constraint to exclude
        found_constant_function = False
        b = None
        for i_var in subset:
            var = prototype_variables[i_var]
            b = prototype_cluster[var.cluster_site_index].sublattice_index()
            site_function_index = var.site_basis_function_index
            phi = get_occ_site_functions(
                occ_site_functions=occ_site_functions,
                sublattice_index=b,
                site_function_index=site_function_index,
            )

            if (phi == 1.0).all():
                constraints.append(ExponentSumConstraint(variables=[i_var], sum=[0]))
                found_constant_function = True
        if not found_constant_function:
            raise Exception(
                "Error in make_constraints: "
                f"discrete DoF (sublattice={b}) has no constant site basis function"
            )

        # Set mutually exclusive discrete variable subset constraint
        constraints.append(ExponentSumConstraint(variables=subset, sum=[0, 1]))

    return constraints


class ClusterFunctionsBuilder:
    """Constructs cluster functions

    Notes
    -----

    Cluster functions are generated using the following steps:

    1. A cluster in each orbit for which cluster functions are to be generated is
       either:

       i. Specified explicitly using `clusters`, or
       ii. Generated using :class:`~libcasm.clusterography.ClusterSpecs` from
           the prim and the `max_length`, `phenomenal`, and `cutoff_radius` parameters.

    2. For each orbit,
       :func:`~casm.bset.polynomial_functions.make_symmetry_adapted_polynomials`
       is used to construct symmetry-adapted polynomial functions
       (:class:`~casm.bset.polynomial_functions.PolynomialFunction`) using matrix
       representations constructed by
       :class:`~casm.bset.cluster_functions.OrbitMatrixRepBuilder`.

       - For functions of discrete DoF, the polynomial functions include a single
         occupation site basis function on each site in a cluster.
       - For functions that include continuous DoF, by default, polynomials of order up
         to the cluster size are created. Higher order polynomials are requested either
         according to cluster size using the `orbit_branch_max_poly_order` parameter or
         globally using `global_max_poly_order`. For each orbit, the most specific
         level specified is used.
       - Functions are generated for all clusters in the orbit by default. If only
         functions on the prototype cluster are needed, then the `make_equivalents`
         parameter can be set to `False`.
       - The `prim_neighbor_list` is used to set the `neighborhood_site_index` for the
         :class:`~casm.bset.polynomial_functions.Variable` corresponding to local DoF
         used by each :class:`~casm.bset.polynomial_functions.PolynomialFunction`.

    3. If this is a local cluster expansion (if `phenomenal` is not None), then
       local cluster functions are generated for the orbits associated with each of the
       symmetrically equivalent phenomenal clusters.

       - The symmetrically equivalent, but distinct, local cluster expansions are
         found by using the prim factor group to generate equivalent phenomenal
         clusters and excluding those that are equivalent by `generating_group`
         symmetry.
       - For local cluster expansions, all local cluster expansions in the orbit are
         constructed by default. If only functions in the original orbits are needed,
         then the `make_all_local_basis_sets` parameter can be set to `False`.

    """

    def __init__(
        self,
        prim: casmconfig.Prim,
        generating_group: sym_info.SymGroup,
        dofs: Optional[Iterable[str]] = None,
        clusters: Optional[Iterable[casmclust.Cluster]] = None,
        max_length: Optional[list[float]] = None,
        phenomenal: Optional[casmclust.Cluster] = None,
        cutoff_radius: Optional[list[float]] = None,
        global_max_poly_order: Optional[int] = None,
        orbit_branch_max_poly_order: Optional[dict[int, int]] = None,
        occ_site_functions: Optional[list[dict]] = None,
        prim_neighbor_list: Optional[PrimNeighborList] = None,
        make_equivalents: bool = True,
        make_all_local_basis_sets: bool = True,
        make_variable_name_f: Optional[Callable] = None,
        verbose: bool = False,
    ):
        """

        .. rubric:: Constructor

        Parameters
        ----------
        prim: libcasm.configuration.Prim
            The Prim, with symmetry information
        generating_group: libcasm.sym_info.SymGroup
            The symmetry group used to generate clusters and functions
        dofs: Optional[Iterable[str]] = None
            An iterable of string of dof type names that should be used to construct
            basis functions. The default value is all DoF types included in the prim.
        clusters: Optional[Iterable[libcasm.clusterography.Cluster]] = None
            An iterable of :class:`~libcasm.clusterography.Cluster` containing the
            a single cluster from each orbit to generate functions for. If not provided,
            clusters are generated using the `max_length`, phenomenal`, and
            `cutoff_radius` parameters.
        max_length: Optional[list[float]] = None
            If `orbit_prototypes` is not provided, `max_length` must be given to specify
            which clusters to generate functions for, using a site-to-site distance
            cutoff. Clusters with `n_site` sites are included if the maximum
            site-to-site distance is less than ``max_length[n_site]``. Notes:

            - For null and point clusters, there are no site-to-site distances so
              ``max_length[0]`` and ``max_length[1]`` are always ignored.

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
        occ_site_functions: Optional[list[dict]] = None
            List of occupation site basis functions. For each sublattice with discrete
            site basis functions, must include:

            - `"sublattice_index"`: int, index of the sublattice
            - `"functions"`: list[list[float]], list of the site basis function values,
              by DoF key (i.e. "occ") as
              ``value = functions[function_index][occupant_index]``.

        phenomenal: Optional[libcasm.clusterography.Cluster] = None
            For local cluster functions, specifies the sites about which
            local-clusters orbits are generated. The phenomenal cluster must be chosen
            from one of the equivalents that is generated by
            :func:`~libcasm.clusterography.make_periodic_orbit` using the prim factor
            group.
        cutoff_radius: Optional[list[float]] = None
            For local clusters, if `orbit_prototypes` is not provided, the maximum
            distance of sites from any phenomenal cluster site to include in the local
            environment, by number of sites in the cluster. The null cluster value
            (element 0) is arbitrary.
        make_equivalents: bool = True
            If True, make all equivalent clusters and functions. Otherwise, only
            construct and return the prototype clusters and functions on the prototype
            cluster (i.e. ``i_equiv=0`` only).
        make_all_local_basis_sets: bool = True
            If True, make local clusters and functions for all phenomenal
            clusters in the primitive cell equivalent by prim factor group symmetry.
            Requires that `make_equivalents` is True.
        make_variable_name_f: Optional[Callable] = None
            Allows specifying a custom function to construct variable names. The default
            function used is :func:`make_variable_name`. Custom functions should have
            the same signature as :func:`make_variable_name`.
        prim_neighbor_list: Optional[libcasm.clexulator.PrimNeighborList] = None
            The :class:`PrimNeighborList` is used to uniquely index sites with local
            variables included in the cluster functions, relative to a reference unit
            cell. If not provided, a PrimNeighborList is constructed using default
            parameters that include all sites with degrees of freedom (DoF) and the
            default shape used by CASM projects. In most cases, this default should be
            used.
        verbose: bool = False
            Print progress statements

        """

        if max_length is None:
            max_length = []
        if orbit_branch_max_poly_order is None:
            orbit_branch_max_poly_order = {}
        if occ_site_functions is None:
            occ_site_functions = []
        if cutoff_radius is None:
            cutoff_radius = []

        if clusters is None:
            # generate cluster orbits
            cluster_specs = casmclust.ClusterSpecs(
                xtal_prim=prim.xtal_prim,
                generating_group=generating_group,
                max_length=max_length,
                phenomenal=phenomenal,
                cutoff_radius=cutoff_radius,
            )
            clusters = [orbit[0] for orbit in cluster_specs.make_orbits()]

        if prim_neighbor_list is None:
            prim_neighbor_list = make_default_prim_neighbor_list(
                xtal_prim=prim.xtal_prim
            )

        global_dof, local_continuous_dof, local_discrete_dof = _get_dof_types(
            prim.xtal_prim, dofs
        )

        only_discrete = len(global_dof) + len(local_continuous_dof) == 0

        # Data
        self._prim = prim
        """libcasm.configuration.Prim: The Prim, with symmetry information"""

        self._generating_group = generating_group
        """libcasm.sym_info.SymGroup: The symmetry group used to generate clusters and \
        functions."""

        self._global_dof = global_dof
        """list[str]: List of global continuous dof type names that should be used to \
        construct basis functions.
        """

        self._local_continuous_dof = local_continuous_dof
        """list[str]: List of local continuous dof type names that should be used to \
        construct basis functions.
        """

        self._local_discrete_dof = local_discrete_dof
        """list[str]:  List of local discrete dof type names that should be used to \
        construct basis functions.
        """

        self._only_discrete = only_discrete
        """bool: True if only discrete DoF are included in the cluster functions."""

        self._clusters = clusters
        """list[libcasm.clusterography.Cluster]: A list of clusters with a single \
        cluster from each orbit to generate functions for.
        """

        self._max_length = max_length
        """list[float]: If `clusters` was not provided explicitly, `max_length` is
        used to generate clusters.
        
        If `clusters` is not provided explicitly, `max_length` must be given to specify
        which clusters to generate functions for, using a site-to-site distance cutoff.
        Clusters with `n_site` sites are included if the maximum site-to-site distance
        is less than ``max_length[n_site]``. Notes:

        - For null and point clusters, there are no site-to-site distances so
          ``max_length[0]`` and ``max_length[1]`` are always ignored.
          
        """

        self._phenomenal = phenomenal
        """Optional[Cluster]: If provided, specifies the sites about which \
        local-clusters orbits are generated. 
        
        The phenomenal cluster must be chosen from one of the equivalents that is 
        generated by :func:`~libcasm.clusterography.make_periodic_orbit` using the prim
        factor group.
        """

        self._cutoff_radius = cutoff_radius
        """list[float]: If `clusters` was not provided explicitly, `cutoff_radius` is
        used to generate local clusters.
        
        For local clusters, if `clusters` is not provided, the maximum distance
        of sites from any phenomenal cluster site to include in the local environment,
        by number of sites in the cluster. The null cluster value (element 0) is
        arbitrary.
        """

        self._global_max_poly_order = global_max_poly_order
        """int: The default maximum polynomial order.
        
        The maximum order of polynomials of continuous DoF to generate, for any orbit
        not specified more specifically by `orbit_branch_max_poly_order`.
        """

        self._orbit_branch_max_poly_order = orbit_branch_max_poly_order
        """dict[int, int]: The per-orbit-branch maximum polynomial order.
        
        Specifies for continuous DoF the maximum polynomial order to generate by
        cluster size, according to
        ``orbit_branch_max_poly_order[cluster_size] = max_poly_order``. By default, for
        a given cluster orbit, polynomials of order up to the cluster size are created.
        Higher order polynomials are requested either according to cluster size
        using `orbit_branch_max_poly_order` or globally using `global_max_poly_order`.
        The most specific level specified is used.
        """

        self._occ_site_functions = occ_site_functions
        """list[dict]: List of occupation site basis functions.
        
        For each sublattice with discrete site basis functions, must include:

        - `"sublattice_index"`: int, index of the sublattice
        - `"functions"`: list[list[float]], list of the site basis function values, as
          ``value = functions[function_index][occupant_index]``.
       
        """

        self.prim_neighbor_list = prim_neighbor_list
        """libcasm.clexulator.PrimNeighborList: The PrimNeighborList, expanded as \
        necessary
        
        The :class:`~libcasm.clexulator.PrimNeighborList` used to uniquely index sites 
        with local variables included in the cluster functions, relative to a reference 
        unit cell.
        """

        self._make_equivalents = make_equivalents
        """bool: If True, make all equivalent clusters and functions. 
        
        Otherwise, only construct and return the prototype clusters and functions on 
        the prototype cluster only.
        """

        self._make_all_local_basis_sets = make_all_local_basis_sets
        """bool: If True, make all equivalent orbits of local clusters and local \
        functions. 

        If True, make local clusters and functions for all phenomenal clusters in the 
        primitive cell equivalent by prim factor group symmetry. Requires that 
        `make_equivalents` is True.
        """

        self._make_variable_name_f = make_variable_name_f
        """Callable: Function used to construct variable names.
        
        The default function used is
        :func:`~casm.bset.cluster_functions.make_variable_name`. Custom functions 
        have the same signature as :func:`make_variable_name`.
        """

        self._verbose = verbose
        """bool: If True, print progress statements"""

        ## Construct cluster functions on a prototype cluster for each orbit
        prototype_basis_sets = []
        orbit_matrix_rep_builders = []
        constraints = []
        for i_orbit, cluster in enumerate(self._clusters):
            _1, _2, _3 = self._build_prototype_basis_set(i_orbit, cluster)
            prototype_basis_sets.append(_1)
            orbit_matrix_rep_builders.append(_2)
            constraints.append(_3)
        self.prototype_basis_sets = prototype_basis_sets
        """list[list[PolynomialFunction]]: For each orbit, the symmetry adapted \
        polynomial cluster functions for the prototype cluster.
        
        The function ``prototype_basis_sets[i_orbit][i_func]`` is the `i_func`-th 
        function on the prototype cluster in the `i_orbit`-th orbit.
        
        The orbits are generated from the input clusters (stored in 
        :py:data:`~casm.bset.cluster_functions.ClusterFunctionBuilder._clusters`), and 
        stored in the same order. The prototype cluster is determined from sorting the 
        equivalent clusters in the orbit and may not be the input cluster.
        """

        self.orbit_matrix_rep_builders = orbit_matrix_rep_builders
        """list[casm.bset.cluster_functions.OrbitMatrixRepBuilder]: For each orbit, \
        the OrbitMatrixRepBuilder contains matrix representations of symmetry \
        operations for generating symmetry-adapted polynomial cluster functions on the \
        orbit prototype, coupling all local and global DoFs. 
                
        Also includes:

        - Matrix representations for generating equivalent functions on other \
          equivalent clusters in the same orbit.
        - Matrix representations for constructing local cluster functions for the \
          symmetrically equivalent orbits about symmetrically equivalent phenomenal \
          clusters (local cluster functions only).
        """

        self.constraints = constraints
        """list[list[ExponentSumConstraint]]: For each orbit, the constraints used \
        when constructing `prototype_basis_set` to ensure one and only one of \
        mutually exclusive discrete variables is included in any monomial.
         
        If a local cluster expansion, ``constraints[i_orbit]`` are also the correct
        constraints for the `i_orbit`-th orbit about each equivalent phenomenal cluster.
        """

        ## Construct equivalent cluster functions
        orbit_basis_sets = None
        orbit_clusters = None
        equivalent_orbit_basis_sets = None
        equivalent_orbit_clusters = None
        if make_equivalents:
            orbit_basis_sets = []
            orbit_clusters = []
            if self._phenomenal is not None and make_all_local_basis_sets:
                equivalent_orbit_basis_sets = []
                equivalent_orbit_clusters = []

            ## Transform cluster functions
            # from prototype clusters to equivalent clusters
            for i_orbit, orbit_matrix_rep_builder in enumerate(
                self.orbit_matrix_rep_builders
            ):
                _1, _2 = self._build_orbit_basis_sets(
                    i_orbit,
                    orbit_matrix_rep_builder,
                    self.prototype_basis_sets[i_orbit],
                )
                orbit_basis_sets.append(_1)
                orbit_clusters.append(_2)

                ## For local cluster expansions, transform cluster functions
                # from the local basis set around the original phenomenal cluster
                # to the local basis sets around equivalent phenomenal clusters
                if self._phenomenal is not None and make_all_local_basis_sets:
                    _3, _4 = self._build_equivalent_orbit_basis_sets(
                        i_orbit,
                        orbit_matrix_rep_builder,
                        _1,
                        _2,
                    )
                    n_clex = len(_3)
                    if equivalent_orbit_basis_sets is None:
                        equivalent_orbit_basis_sets = [[] * n_clex]
                        equivalent_orbit_clusters = [[] * n_clex]
                    for i_clex in range(n_clex):
                        equivalent_orbit_basis_sets.append(_3[i_clex])
                        equivalent_orbit_clusters.append(_4[i_clex])

        self.functions = orbit_basis_sets
        """list[list[list[PolynomialFunction]]]: The generated cluster functions

        Polynomial functions, where ``functions[i_orbit][i_equiv][i_func]``, is the 
        `i_func`-th function on the cluster given by `orbits[i_orbit][i_equiv]`.
        """

        self.orbits = orbit_clusters
        """list[list[libcasm.clusterography.Cluster]]: Orbits of clusters for which 
        cluster functions have been constructed
        
        The cluster ``orbits[i_orbit][i_equiv]`` is the `i_equiv`-th symmetrically 
        equivalent cluster in the `i_orbit`-th orbit.

        The order of sites in the clusters is not arbitrary, it is consistent with the 
        `cluster_site_index` of the :class:`~casm.bset.polynomial_functions.Variable`
        used in the :class:`~casm.bset.polynomial_functions.PolynomialFunction` stored 
        in :py:data:`~ClusterFunctionsBuilder.functions`.
        """

        self.equivalent_functions = equivalent_orbit_clusters
        """Optional[list[list[list[list[\
        casm.bset.polynomial_functions.PolynomialFunction]]]]]: \
        The generated cluster functions about all equivalent phenomenal clusters (if \
        a local cluster expansion).
        
        Symmetry adapted polynomial cluster functions for each cluster in each
        orbit about a symmetrically equivalent phenomenal cluster,
        where ``equivalent_functions[i_clex][i_orbit][i_equiv][i_func]``, is the
        `i_func`-th function on the `i_equiv`-th cluster in the `i_orbit`-th orbit about
        the `i_clex`-th equivalent phenomenal cluster.
        """

        self.equivalent_orbits = equivalent_orbit_basis_sets
        """Optional[list[list[list[libcasm.clusterography.Cluster]]]]]: Orbit of \
        clusters for which cluster functions have been constructed about all \
        equivalent phenomenal clusters (if a local cluster expansion).

        The cluster ``equivalent_orbit_clusters[i_clex][i_orbit][i_equiv]`` is the
        `i_equiv`-th symmetrically equivalent cluster in the `i_orbit`-th orbit about 
        the `i_clex`-th equivalent phenomenal cluster.

        The order of sites in the clusters is not arbitrary, it is consistent with the 
        `cluster_site_index` of the :class:`~casm.bset.polynomial_functions.Variable`
        used in the :class:`~casm.bset.polynomial_functions.PolynomialFunction` stored 
        in :py:data:`~ClusterFunctionsBuilder.equivalent_functions`.
        """

    def _min_poly_order(self, orbit_prototype):
        if self._only_discrete:
            return len(orbit_prototype)
        return 1

    def _max_poly_order(self, orbit_prototype):
        if self._only_discrete:
            return len(orbit_prototype)
        branch = len(orbit_prototype)
        if branch in self._orbit_branch_max_poly_order:
            return self._orbit_branch_max_poly_order[branch]
        elif self._global_max_poly_order is not None:
            return int(self._global_max_poly_order)
        else:
            return branch

    def _build_prototype_basis_set(
        self,
        i_orbit: int,
        cluster: casmclust.Cluster,
    ):
        """Build the prototype cluster basis set

        Parameters
        ---------
        i_orbit: int
            Orbit number, starting from 0, used for printing information when
            `verbose` is set to `True`.
        cluster: libcasm.clusterography.Cluster
            A cluster in the orbit on which to build the cluster functions.

        Returns
        -------
        (prototype_basis_set, orbit_matrix_rep_builder, constraints):
            prototype_basis_set: list[PolynomialFunction]
                Symmetry adapted polynomial cluster functions for the prototype
                cluster in the orbit generated from `cluster`.

            orbit_matrix_rep_builder: casm.bset.cluster_functions.OrbitMatrixRepBuilder
                The OrbitMatrixRepBuilder contains matrix representations for generating
                polynomial cluster functions on the orbit prototype, coupling all local
                and global DoFs.

                Also includes:

                - Matrix representations for generating equivalent functions on other
                  clusters in the orbit.
                - Matrix representations for constructing local cluster functions for
                  symmetrically equivalent phenomenal clusters (local cluster functions
                  only).

            constraints: list[ExponentSumConstraint]
                The constraints used when constructing `prototype_basis_set` to ensure
                one and only one of mutually exclusive discrete variables
                is included in any monomial.
        """

        if self._verbose:
            print(f"### i_orbit: {i_orbit} ###")
            print()

            if self._phenomenal is not None:
                print("Phenomenal cluster:")
                print(xtal.pretty_json(self._phenomenal.to_dict(self._prim.xtal_prim)))
                print()

            print("Initial cluster:")
            print(xtal.pretty_json(cluster.to_dict(self._prim.xtal_prim)))
            print()

        builder = OrbitMatrixRepBuilder(
            prim=self._prim,
            generating_group=self._generating_group,
            global_dof=self._global_dof,
            local_continuous_dof=self._local_continuous_dof,
            local_discrete_dof=self._local_discrete_dof,
            cluster=cluster,
            phenomenal=self._phenomenal,
            make_variable_name_f=self._make_variable_name_f,
            occ_site_functions=self._occ_site_functions,
        )
        constraints = make_constraints(
            prototype_cluster=cluster,
            prototype_variables=builder.prototype_variables,
            prototype_variable_subsets=builder.prototype_variable_subsets,
            occ_site_functions=self._occ_site_functions,
            local_discrete_dof=self._local_discrete_dof,
        )

        if len(builder.prototype_variables) == 0:
            # if no variables, no functions
            if self._verbose:
                print("No variables")
            prototype_basis_set = []

        elif builder.n_local_variables == 0 and cluster.size() != 0:
            # if no local variables, only generate functions on the null cluster
            if self._verbose:
                print("No local variables")
            prototype_basis_set = []

        else:
            if self._verbose:
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
                min_poly_order=self._min_poly_order(cluster),
                max_poly_order=self._max_poly_order(cluster),
                constraints=constraints,
                orthonormalize_in_place=False,
                verbose=self.verbose,
            )

        orbit_matrix_rep_builder = builder
        return (prototype_basis_set, orbit_matrix_rep_builder, constraints)

    def _build_orbit_basis_sets(
        self,
        i_orbit: int,
        orbit_matrix_rep_builder: OrbitMatrixRepBuilder,
        prototype_basis_set: list[PolynomialFunction],
    ):
        """Build basis sets for each cluster in an orbit

        Parameters
        ---------
        i_orbit: int
            Orbit number, starting from 0, used for printing information when
            `verbose` is set to `True`.
        orbit_matrix_rep_builder: casm.bset.cluster_functions.OrbitMatrixRepBuilder
            An OrbitMatrixRepBuilder which contains matrix representations of
            symmetry operations for generating symmetry-adapted polynomial cluster
            functions for the orbit from the orbit prototype, as output from
            :func:`~casm.bset.cluster_functions.ClusterFunctionsBuilder._build_prototype_basis_set`.
        prototype_basis_set: list[casm.bset.polynomial_functions.PolynomialFunction]
            Symmetry adapted polynomial cluster functions for the prototype
            cluster in the orbit, as output from
            :func:`~casm.bset.cluster_functions.ClusterFunctionsBuilder._build_prototype_basis_set`.

        Returns
        -------
        (orbit_basis_sets, orbit_clusters):

            orbit_basis_sets: list[list[\
            casm.bset.polynomial_functions.PolynomialFunction]]
                Symmetry adapted polynomial cluster functions for each cluster in
                the orbit, where ``orbit_basis_sets[i_equiv][i_func]``, is the
                `i_func`-th function on the `i_equiv`-th cluster in the orbit.

            orbit_clusters: list[libcasm.clusterography.Cluster]]:
                Orbit of clusters for which `orbit_basis_sets` has been constructed.

                The cluster ``orbit_clusters[i_equiv]`` is the `i_equiv`-th
                symmetrically equivalent cluster in the orbit.

                The order of sites in the clusters is not arbitrary, it is consistent
                with the `cluster_site_index` of the
                :class:`~casm.bset.polynomial_functions.Variable`
                used in the `orbit_basis_sets` functions.
        """
        builder = orbit_matrix_rep_builder

        orbit_basis_sets = []
        orbit_clusters = []

        # generate basis sets on all equivalent clusters
        if self._verbose:
            print("Generating equivalent cluster functions in orbit...")
            print()
        # i_equiv: index for equivalent clusters
        # M_list: sym rep matrices (1 for each sym op that prototype cluster to
        #     the equivalent cluster, only the first is needed here)
        for i_equiv, M_list in enumerate(builder.equivalence_map_inv_matrix_rep):
            # add equivalent cluster to orbit of clusters
            equiv_cluster = builder.equivalence_map_clusters[i_equiv][0]
            orbit_clusters.append(equiv_cluster)

            if self._verbose:
                print(f"~~~ i_orbit: {i_orbit}, i_equiv: {i_equiv} ~~~")
                print("Equivalent cluster:")
                print(xtal.pretty_json(equiv_cluster.to_dict(self._prim.xtal_prim)))
                print()

            # add basis set for equivalent cluster to orbit of basis sets
            equiv_basis_set = []
            for f_prototype in prototype_basis_set:
                M = M_list[0]
                S = FunctionRep(matrix_rep=M)
                f_equiv = S * f_prototype
                assign_neighborhood_site_index(
                    cluster=equiv_cluster,
                    function=f_equiv,
                    prim_neighbor_list=self.prim_neighbor_list,
                )
                assert f_equiv.variables is not f_prototype.variables
                for i in range(len(f_prototype.variables)):
                    assert f_equiv.variables[i] is not f_prototype.variables[i]
                equiv_basis_set.append(f_equiv)
            orbit_basis_sets.append(equiv_basis_set)

            if self._verbose:
                print("Equivalent cluster basis set:")
                if len(equiv_basis_set) == 0:
                    print("Empty")
                for i_func, func in enumerate(equiv_basis_set):
                    print(f"~~~ order: {func.order()}, function_index: {i_func} ~~~")
                    func._basic_print()
                    print()
                print()

        return (orbit_basis_sets, orbit_clusters)

    def _build_equivalent_orbit_basis_sets(
        self,
        i_orbit: int,
        orbit_matrix_rep_builder: OrbitMatrixRepBuilder,
        orbit_basis_sets: list[list[PolynomialFunction]],
        orbit_clusters: list[casmclust.Cluster],
    ):
        """Build basis sets for each cluster in the equivalent orbits around \
        equivalent phenomenal cluster.

        Parameters
        ----------
        i_orbit: int
            Orbit number, starting from 0, used for printing information when
            `verbose` is set to `True`.

        orbit_matrix_rep_builder: casm.bset.cluster_functions.OrbitMatrixRepBuilder
            An OrbitMatrixRepBuilder which contains matrix representations of
            symmetry operations for generating polynomial cluster functions for the
            orbit from the orbit prototype, as output from
            :func:`~casm.bset.cluster_functions.ClusterFunctionsBuilder._build_prototype_basis_set`.

        orbit_basis_sets: list[list[casm.bset.polynomial_functions.PolynomialFunction]]
            Symmetry adapted polynomial cluster functions for each cluster in
            the orbit, where ``orbit_basis_sets[i_equiv][i_func]``, is the
            `i_func`-th function on the `i_equiv`-th cluster in the orbit.

        orbit_clusters: list[libcasm.clusterography.Cluster]]:
            Orbit of clusters for which `orbit_basis_sets` has been constructed.

            The cluster ``orbit_clusters[i_equiv]`` is the `i_equiv`-th
            symmetrically equivalent cluster in the orbit.

            The order of sites in the clusters is not arbitrary, it is consistent
            with the `cluster_site_index` of the
            :class:`~casm.bset.polynomial_functions.Variable`
            used in the `orbit_basis_sets` functions.

        Returns
        -------
        (equivalent_orbit_basis_sets, equivalent_orbit_clusters):

            equivalent_orbit_basis_sets: list[list[list[\
            casm.bset.polynomial_functions.PolynomialFunction]]]
                Symmetry adapted polynomial cluster functions for each cluster in each
                equivalent orbit about a symmetrically equivalent phenomenal cluster,
                where ``equivalent_orbit_basis_sets[i_clex][i_equiv][i_func]``, is the
                `i_func`-th function on the `i_equiv`-th cluster in the orbit about
                the `i_clex`-th equivalent phenomenal cluster.

            equivalent_orbit_clusters: list[list[libcasm.clusterography.Cluster]]]:
                Orbit of clusters for which `orbit_basis_sets` has been constructed.

                The cluster ``equivalent_orbit_clusters[i_clex][i_equiv]`` is the
                `i_equiv`-th symmetrically equivalent cluster in the orbit about the
                `i_clex`-th equivalent phenomenal cluster.

                The order of sites in the clusters is not arbitrary, it is consistent
                with the `cluster_site_index` of the
                :class:`~casm.bset.polynomial_functions.Variable`
                used in the `orbit_basis_sets` functions.

        """
        builder = orbit_matrix_rep_builder

        equivalent_orbit_basis_sets = []
        equivalent_orbit_clusters = []

        # generate equivalent local basis sets
        if self._verbose:
            print(
                "Generating local cluster functions "
                "for equivalent phenomenal clusters..."
            )
            print()

        # i_clex: index for equivalent local cluster expansion
        for i_clex in range(len(builder.phenomenal_generating_ops)):
            if self._verbose:
                print(f"*** i_orbit: {i_orbit}, i_clex: {i_clex} ***")
                print("Equivalent phenomenal cluster:")
                site_rep = builder.phenomenal_generating_site_rep[i_clex]
                equiv_phenomenal = site_rep * self.phenomenal
                print(xtal.pretty_json(equiv_phenomenal.to_dict(self.prim.xtal_prim)))
                print()

            _equiv_orbit_basis_sets = []
            _equiv_orbit_clusters = []
            # i_clust: index for equivalent clusters
            # M: sym rep matrix for transforming functions on the `i_clust`-th cluster
            #    to the orbit around the `i_clex`-th equivalent phenomenal cluster
            for i_clust, M in enumerate(
                builder.phenomenal_generating_inv_matrix_rep[i_clex]
            ):
                # add equivalent cluster to orbit of clusters
                site_rep = builder.phenomenal_generating_site_rep[i_clex][i_clust]
                equiv_cluster = site_rep * orbit_clusters[i_clust]
                _equiv_orbit_clusters.append(equiv_cluster)

                if self._verbose:
                    print(
                        f"~~~ i_orbit: {i_orbit}, "
                        f"i_clex: {i_clex}, "
                        f"i_clust: {i_clust} ~~~"
                    )
                    print("Equivalent cluster:")
                    print(xtal.pretty_json(equiv_cluster.to_dict(self._prim.xtal_prim)))
                    print()

                # add basis set for equivalent cluster to orbit of basis sets
                equiv_basis_set = []
                for f_prototype in orbit_basis_sets[i_clust]:
                    S = FunctionRep(matrix_rep=M)
                    f_equiv = S * f_prototype
                    assign_neighborhood_site_index(
                        cluster=equiv_cluster,
                        function=f_equiv,
                        prim_neighbor_list=self.prim_neighbor_list,
                    )
                    assert f_equiv.variables is not f_prototype.variables
                    for i in range(len(f_prototype.variables)):
                        assert f_equiv.variables[i] is not f_prototype.variables[i]
                    equiv_basis_set.append(f_equiv)
                _equiv_orbit_basis_sets.append(equiv_basis_set)

                if self._verbose:
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

            equivalent_orbit_basis_sets.append(_equiv_orbit_basis_sets)
            equivalent_orbit_clusters.append(_equiv_orbit_clusters)

        return (equivalent_orbit_basis_sets, equivalent_orbit_clusters)


def make_cluster_functions(
    prim: casmconfig.Prim,
    generating_group: sym_info.SymGroup,
    dofs: Optional[Iterable[str]] = None,
    clusters: Optional[Iterable[casmclust.Cluster]] = None,
    max_length: Optional[list[float]] = None,
    phenomenal: Optional[casmclust.Cluster] = None,
    cutoff_radius: Optional[list[float]] = None,
    global_max_poly_order: Optional[int] = None,
    orbit_branch_max_poly_order: dict[int, int] = None,
    occ_site_functions: Optional[list[dict]] = None,
    prim_neighbor_list: Optional[PrimNeighborList] = None,
    make_equivalents: bool = True,
    make_all_local_basis_sets: bool = True,
    make_variable_name_f: Optional[Callable] = None,
    verbose: bool = False,
) -> tuple[
    list[list[casmclust.Cluster]],
    list[list[list[PolynomialFunction]]],
    PrimNeighborList,
    dict,
]:
    """Temporary

    Returns
    -------
    (clusters, functions, prim_neighbor_list, params):

        clusters: list[list[libcasm.clusterography.Cluster]]
            Orbits of clusters, where ``orbits[i_orbit][i_equiv]``, is the
            `i_equiv`-th symmetrically equivalent cluster in the
            `i_orbit`-th orbit.

            The order of sites in the returned clusters is not arbitrary, it
            is consistent with the `cluster_site_index` of the :class:`Variable` used
            in the :class:`PolynomialFunction` returned in `functions`.

        functions: list[list[list[casm.bset.polynomial_functions.PolynomialFunction]]]
            Polynomial functions, where ``functions[i_orbit][i_equiv][i_func]``,
            is the `i_func`-th function on the cluster given by
            `clusters[i_orbit][i_equiv]`.

        prim_neighbor_list: libcasm.clexulator.PrimNeighborList
            The neighbor list corresponding to the `neighbor_list_index` of the
            :class:`Variable` used in the :class:`PolynomialFunction` returned in
            `functions`.

        params: dict
            Parameters used in clexulator writing

    """
    builder = ClusterFunctionsBuilder(
        prim=prim,
        dofs=dofs,
        generating_group=generating_group,
        clusters=clusters,
        max_length=max_length,
        phenomenal=phenomenal,
        cutoff_radius=cutoff_radius,
        global_max_poly_order=global_max_poly_order,
        orbit_branch_max_poly_order=orbit_branch_max_poly_order,
        occ_site_functions=occ_site_functions,
        prim_neighbor_list=prim_neighbor_list,
        make_equivalents=make_equivalents,
        make_all_local_basis_sets=make_all_local_basis_sets,
        make_variable_name_f=make_variable_name_f,
        verbose=verbose,
    )

    return (
        builder.clusters,
        builder.functions,
        builder.prim_neighbor_list,
        builder.params,
    )


def make_point_functions(
    prim_neighbor_list: PrimNeighborList,
    orbit: list[casmclust.Cluster],
    orbit_functions: list[list[PolynomialFunction]],
):
    """Construct point functions

    This method uses the results of :func:`~casm.bset.make_cluster_functions`
    and collects all the functions that involve each point. These functions are used
    by Clexulator methods that can calculate point correlations and changes in point
    correlations.

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
        :func:`~casm.bset.make_cluster_functions`.

    orbit_functions: list[list[casm.bset.PolynomialFunction]]
        Polynomial functions, where ``functions[i_equiv][i_func]``,
        is the `i_func`-th function on the cluster given by `orbit[i_equiv]`.

        This should generally be the functions for one orbit as output by
        :func:`~casm.bset.make_cluster_functions`.

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
            "Error in make_point_functions: "
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
