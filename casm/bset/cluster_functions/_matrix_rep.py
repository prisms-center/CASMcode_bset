from typing import Callable, Optional

import libcasm.configuration as casmconfig
import libcasm.sym_info as casmsyminfo
import libcasm.xtal as xtal
import numpy as np
import scipy
from libcasm.clusterography import (
    Cluster,
    make_cluster_group,
    make_integral_site_coordinate_symgroup_rep,
    make_local_equivalence_map,
    make_local_equivalence_map_indices,
    make_periodic_equivalence_map,
    make_periodic_equivalence_map_indices,
    make_periodic_orbit,
)
from libcasm.sym_info import (
    SymGroup,
)

from casm.bset.polynomial_functions import (
    Variable,
)

from ._discrete_functions import (
    get_occ_site_functions,
)
from ._misc import (
    make_equivalents_generators,
)


def make_global_dof_matrix_rep(
    prim: casmconfig.Prim,
    key: str,
):
    """Generate the group matrix representation for a global DoF

    Parameters
    ----------
    prim: :class:`~libcasm.configuration.Prim`
        The Prim
    key: str
        The name of the global DoF type. Must exist in `prim`.

    Returns
    -------
    matrix_rep: list[np.ndarray[np.float]]
        Matrix representation for the factor group acting on global DoF in
        the prim basis.
    """
    return prim.global_dof_matrix_rep(key)


def make_cluster_dof_info(
    cluster: Cluster,
    local_dof_matrix_rep: list[list[np.ndarray]],
):
    """Get cluster DoF information

    Parameters
    ----------
    cluster: Cluster
        The cluster of sites
    local_dof_matrix_rep: list[list[np.ndarray]]
        The local DoF matrix reps, `M`, for each operation in the head symmetry group,
        for each sublattice,
        ``M = local_dof_matrix_rep[head_group_index][sublattice_index]``.

    Returns
    -------
    (site_index_to_basis_index, total_dim):
        site_index_to_basis_index: dict[int, int]
            Specifies the beginning row or column, `basis_index`, in the cluster
            matrix rep for each site in the cluster,
            ``basis_index = site_index_to_basis_index[site_index]``.
        total_dim: int
            The total dimension of the resulting cluster DoF vector / and cluster
            matrix reps.

    """
    # Make a dict of site_index (index into the cluster) ->
    #   beginning row in cluster DoF space basis matrix for DoF from that site
    site_index_to_basis_index = {}
    total_dim = 0
    for site_index, integral_site_coordinate in enumerate(cluster.sites()):
        b = integral_site_coordinate.sublattice()
        site_dof_dim = local_dof_matrix_rep[0][b].shape[1]
        site_index_to_basis_index[site_index] = total_dim
        total_dim += site_dof_dim
    return (site_index_to_basis_index, total_dim)


def make_cluster_permutation_rep(
    prim: casmconfig.Prim,
    cluster: Cluster,
    cluster_group: SymGroup,
) -> list[list[int]]:
    """Make the cluster site permutation representation

    The cluster site permutation representation species how cluster sites map under
    application of cluster group operations, by index into the list of cluster sites.
    It satisfies:

    .. code-block:: Python

        from libcasm.xtal import IntegralSiteCoordinateRep
        from libcasm.sym_info import SymGroup
        from libcasm.clusterography import (
            Cluster,
            make_integral_site_coordinate_symgroup_rep,
            make_cluster_group,
        )
        from libcasm.configuration import Prim

        # prim: Prim
        # cluster: Cluster
        # cluster_group: SymGroup

        # Get the cluster group and permutation rep:
        factor_group_site_rep = make_integral_site_coordinate_symgroup_rep(
            group_elements=prim.factor_group.elements,
            xtal_prim=prim.xtal_prim,
        )
        cluster_group = make_cluster_group(
            cluster=cluster,
            group=prim.factor_group,
            lattice=prim.xtal_prim.lattice(),
            integral_site_coordinate_symgroup_rep=factor_group_site_rep,
        )
        # cluster_group_site_rep: list[IntegralSiteCoordinateRep]
        cluster_group_site_rep = make_integral_site_coordinate_symgroup_rep(
            group_elements=cluster_group.elements,
            xtal_prim=xtal_prim,
        )
        cluster_permutation_rep = make_cluster_permutation_rep(
            cluster=cluster,
            cluster_group=cluster_group,
            xtal_prim=prim.xtal_prim,
        )


        # assert
        for cluster_group_index in range(len(cluster_group_site_rep)):
            site_rep = cluster_site_rep[cluster_group_index]
            perm_rep = cluster_permutation_rep[cluster_group_index]
            for to_site_index, from_site_index in enumerate(perm_rep):
                assert cluster.site(to_site_index) == \
                    site_rep * cluster.site(from_site_index)


    Parameters
    ----------
    prim: casmconfig.Prim
        The prim.
    cluster: Cluster
        The cluster of sites
    cluster_group: SymGroup
        A group that maps the cluster onto itself. An exception is raised if an
        operation is not a cluster group operation.

    Returns
    -------
    cluster_permutation_rep: list[list[int]]
        The `cluster_permutation_rep` species how cluster sites map under application of
        cluster group operations, by index into the list of cluster sites, according to
        `from_site_index = cluster_permutation_rep[cluster_group_index][to_site_index]`,
        where `cluster_group_index` is an index into ``cluster_group.elements``, and
        `from_site_index` and `to_site_index` are indices into ``cluster.sites()``
        before and after application of the cluster group operation, respectively.

    """
    sites = cluster.sites()
    site_symgroup_rep = make_integral_site_coordinate_symgroup_rep(
        group_elements=cluster_group.elements,
        xtal_prim=prim.xtal_prim,
    )

    def find_site_index(site):
        for test_index, test_site in enumerate(sites):
            if test_site == site:
                return test_index
        raise Exception("Error in make_cluster_permutation_rep: Not a cluster group")

    # Get cluster permutation,
    #     from_site_index = cluster_perm[cluster_group_index][to_site_index]
    cluster_permutation_rep = []
    for site_rep in site_symgroup_rep:
        tperm = [None] * cluster.size()
        for from_site_index, site in enumerate(sites):
            to_site_index = find_site_index(site_rep * site)
            tperm[to_site_index] = from_site_index
        for x in tperm:
            if x is None:
                raise Exception("Error in make_cluster_permutation_rep: failed")
        cluster_permutation_rep.append(tperm)

    return cluster_permutation_rep


def make_equivalence_map_site_rep(
    xtal_prim: xtal.Prim,
    equivalence_map_ops: list[list[xtal.SymOp]],
) -> list[list[xtal.IntegralSiteCoordinateRep]]:
    """Make the :class:`~libcasm.xtal.IntegralSiteCoordinateRep` representation of an
    equivalence map

    Parameters
    ----------
    xtal_prim: xtal.Prim:
        The prim
    equivalence_map_ops: list[list[xtal.SymOp]]
        An orbit equivalence map

    Returns
    -------
    equivalence_map_site_rep: list[list[xtal.IntegralSiteCoordinateRep]]
        The :class:`~libcasm.xtal.IntegralSiteCoordinateRep` representation of an
        equivalence map
    """
    equivalence_map_site_rep = []
    for eq_map_ops in equivalence_map_ops:
        equivalence_map_site_rep.append(
            [xtal.IntegralSiteCoordinateRep(op, xtal_prim) for op in eq_map_ops]
        )
    return equivalence_map_site_rep


def make_variable_name(
    xtal_prim: xtal.Prim,
    key: str,
    sublattice_index: Optional[int] = None,
    cluster_site_index: Optional[int] = None,
    component_index: Optional[int] = None,
    site_basis_function_index: Optional[int] = None,
    local_discrete_dof: list[str] = [],
):
    def make_variable_symbol(xtal_prim, key, sublattice_index):
        if sublattice_index is not None:
            dof = xtal_prim.local_dof()[sublattice_index]
        else:
            dof = xtal_prim.global_dof()
        axis_names = None
        for dof_basis_set in dof:
            if dof_basis_set.dofname() == key:
                axis_names = dof_basis_set.axis_names()
                break
        if axis_names is None:
            return "x"
        else:
            return axis_names[component_index]

    symbol = make_variable_symbol(xtal_prim, key, sublattice_index)

    if cluster_site_index is not None:
        if key == local_discrete_dof:
            return f"\\phi_{{{site_basis_function_index}}}(s_{cluster_site_index})"
        else:
            return f"{symbol}(s_{cluster_site_index})"
    else:
        return f"{symbol}"


def make_global_variables(
    prim: casmconfig.Prim,
    key: str,
    make_variable_name_f: Optional[Callable] = None,
):
    """Construct the variable list for a global degree of freedom (DoF)

    Parameters
    ----------
    prim: :class:`~libcasm.configuration.Prim`
        The Prim
    key: str
        The name of the global DoF type. Must exist in `prim`.
    make_variable_name_f: Optional[Callable] = None
        Allows specifying a custom function to construct variable names. The default
        function used is :func:`make_variable_name`. Custom functions should have the
        same signature as :func:`make_variable_name`.

    Returns
    -------
    (variables, variable_subsets):

        variables: list[Variable]
            A list of Variable for each component of DoF of type `key` from each site
            in `cluster`.
        variable_subsets: list[list[int]]
            Lists of variables (as indices into the `variables` list) which mix under
            application of symmetry. For example, if the variables are the 6
            strain components, then `var_subsets=[[0, 1, 2, 3, 4, 5]]`.
    """
    if make_variable_name_f is None:
        make_variable_name_f = make_variable_name

    def find_dof_basis_set(global_dof):
        for _dof_basis_set in global_dof:
            if _dof_basis_set.dofname() == key:
                return _dof_basis_set
        return None

    global_dof = prim.xtal_prim.global_dof()
    dof_basis_set = find_dof_basis_set(global_dof)
    if dof_basis_set is None:
        variables = []
        variable_subsets = [[]]
        return (variables, variable_subsets)

    variables = []
    for component_index, axis_name in enumerate(dof_basis_set.axis_names()):
        variables.append(
            Variable(
                name=make_variable_name_f(
                    xtal_prim=prim.xtal_prim,
                    key=key,
                    component_index=component_index,
                ),
                key=key,
                component_index=component_index,
            )
        )
    variable_subsets = [[i for i in range(len(variables))]]
    return (variables, variable_subsets)


def make_cluster_variables(
    prim: casmconfig.Prim,
    key: str,
    cluster: Cluster,
    make_variable_name_f: Optional[Callable] = None,
    local_discrete_dof: list[str] = [],
):
    """Construct the variable list for a cluster

    Parameters
    ----------
    prim: :class:`~libcasm.configuration.Prim`
        The Prim
    key: str
        The name of the local DoF type. Must exist in `prim`.
    cluster: Cluster
        The cluster of sites with DoF to be transformed by the matrix representations.
    make_variable_name_f: Optional[Callable] = None
        Allows specifying a custom function to construct variable names. The default
        function used is :func:`make_variable_name`. Custom functions should have the
        same signature as :func:`make_variable_name`.
    local_discrete_dof: list[str]
        The types of local discrete degree of freedom (DoF).

    Returns
    -------
    (variables, variable_subsets):

        variables: list[Variable]
            A list of Variable for each component of DoF of type `key` from each site
            in `cluster`.
        variable_subsets: list[list[int]]
            Lists of variables (as indices into the `variables` list) which mix under
            application of symmetry. For example, if the variables are the 3
            displacements on each site in a cluster of 2 sites, then
            `var_subsets=[[0, 1, 2], [3, 4, 5]]`.
    """
    if make_variable_name_f is None:
        make_variable_name_f = make_variable_name

    if key in local_discrete_dof:
        discrete_dof = prim.xtal_prim.occ_dof()
        # TODO: discrete_dof = prim.xtal_prim.discrete_dof(key)

        variables = []
        variable_subsets = []
        variable_index = 0
        for cluster_site_index, integral_site_coordinate in enumerate(cluster.sites()):
            b = integral_site_coordinate.sublattice()
            dof_basis_set = discrete_dof[b]
            site_variable_subset = []
            for site_basis_function_index in range(len(dof_basis_set)):
                variables.append(
                    Variable(
                        name=make_variable_name_f(
                            xtal_prim=prim.xtal_prim,
                            key=key,
                            site_basis_function_index=site_basis_function_index,
                            cluster_site_index=cluster_site_index,
                            sublattice_index=b,
                            local_discrete_dof=local_discrete_dof,
                        ),
                        key=key,
                        cluster_site_index=cluster_site_index,
                        site_basis_function_index=site_basis_function_index,
                    )
                )
                site_variable_subset.append(variable_index)
                variable_index += 1
            variable_subsets.append(site_variable_subset)
        return (variables, variable_subsets)

    else:

        def find_dof_basis_set(local_dof, b):
            for _dof_basis_set in local_dof[b]:
                if _dof_basis_set.dofname() == key:
                    return _dof_basis_set
            return None

        local_dof = prim.xtal_prim.local_dof()
        variables = []
        variable_subsets = []
        variable_index = 0
        for cluster_site_index, integral_site_coordinate in enumerate(cluster.sites()):
            b = integral_site_coordinate.sublattice()
            dof_basis_set = find_dof_basis_set(local_dof, b)
            if dof_basis_set is None:
                continue
            site_variable_subset = []
            for component_index in range(dof_basis_set.basis().shape[1]):
                variables.append(
                    Variable(
                        name=make_variable_name_f(
                            xtal_prim=prim.xtal_prim,
                            key=key,
                            component_index=component_index,
                            cluster_site_index=cluster_site_index,
                            sublattice_index=b,
                            local_discrete_dof=local_discrete_dof,
                        ),
                        key=key,
                        cluster_site_index=cluster_site_index,
                        component_index=component_index,
                    )
                )
                site_variable_subset.append(variable_index)
                variable_index += 1
            variable_subsets.append(site_variable_subset)
        return (variables, variable_subsets)


def make_equivalence_map_clusters(
    orbit: list[Cluster],
    equivalence_map_site_rep: list[list[xtal.IntegralSiteCoordinateRep]],
):
    """Generate the clusters that result from applying equivalence map operations to the
    prototype cluster, without permutation

    Parameters
    ----------
    orbit: list[Cluster]
        The orbit of clusters
    equivalence_map_site_rep: list[list[xtal.IntegralSiteCoordinateRep]]
        Site representations (xtal.IntegralSiteCoordinateRep) for each equivalence map
        operation.

    Returns
    -------
    equivalence_map_clusters: list[list[Cluster]]
        The clusters generated from applying equivalence map operations to the
        prototype cluster (``orbit[0]``), without any permutation. The generated
        clusters, ``equivalence_map_clusters[i][j]``, are equivalent to orbit
        element ``orbit[i]`` up to a permutation.


    """
    if len(orbit) == 0:
        raise Exception("Error in make_equivalence_map_matrix_rep: len(orbit)==0")
    prototype_cluster = orbit[0]
    equivalence_map_clusters = []
    for i_equiv, cluster in enumerate(orbit):
        clusters = []
        for site_rep in equivalence_map_site_rep[i_equiv]:
            # Make equivalence map cluster (no permutations)
            clusters.append(site_rep * prototype_cluster)
        equivalence_map_clusters.append(clusters)
    return equivalence_map_clusters


def make_cluster_matrix_rep_no_permutation(
    local_dof_matrix_rep: list[list[np.ndarray]],
    cluster: Cluster,
    head_group: SymGroup,
    head_group_index: int,
    site_rep: xtal.IntegralSiteCoordinateRep,
    total_dim: int,
    site_index_to_basis_index: dict[int, int],
):
    """Generate the cluster matrix representation, for a single DoF, for a single
    symmetry operation, without permutation amongst the cluster.

    Notes
    -----
    This function is used to make matrix reps that can transform polynomial functions
    that have already been generated.

    It doesn't include permutations amongst sites on the same cluster, so it can't
    be used in generating the polynomial functions on the prototype cluster in the
    first place.

    Instead, the transformed cluster, with sites transformed but not permuted is also
    generated to allow proper DoF indexing.

    Parameters
    ----------
    local_dof_matrix_rep: list[list[np.ndarray]]
        The local DoF matrix reps, `M`, for each operation in the head symmetry group,
        for each sublattice,
        ``M = local_dof_matrix_rep[head_group_index][sublattice_index]``.
    cluster: Cluster
        The initial cluster, before applying the symmetry operation
    head_group: SymGroup
        The head symmetry group
    head_group_index: int
        The head group index of the symmetry operation to make the matrix
        representation for.
    site_rep: xtal.IntegralSiteCoordinateRep
        Site representation for the symmetry operation.
    total_dim: int
        The total dimension of the resulting cluster matrix reps.
    site_index_to_basis_index: dict[int, int]
        Specifies the beginning row or column, `basis_index`, in the cluster matrix rep
        for each site in the cluster,
        ``basis_index = site_index_to_basis_index[site_index]``.

    Returns
    -------
    (matrix_rep, inv_matrix_rep, equiv_cluster):

        matrix_rep: np.ndarray[np.float64[total_dim,total_dim]]
            Matrix representations for the symmetry operation.

        inv_matrix_rep: np.ndarray[np.float64[total_dim,total_dim]]
            Matrix representations for the inverse operation of the symmetry operation.

        equiv_cluster: Cluster
            The cluster generated from the symmetry operation to
            `prototype_cluster`, without any permutation.

    """
    # Make equivalence map matrix rep (no permutations)
    matrix_rep = np.zeros((total_dim, total_dim))
    for site_index in range(cluster.size()):
        b = cluster.site(site_index).sublattice()
        U = local_dof_matrix_rep[head_group_index][b]
        pos = site_index_to_basis_index[site_index]
        dim = U.shape[0]
        matrix_rep[pos : pos + dim, pos : pos + dim] = U

    # Make equivalence map inverse matrix rep (no permutations)
    inv_head_group_index = head_group.inv(head_group_index)
    inv_matrix_rep = np.zeros((total_dim, total_dim))
    for site_index in range(cluster.size()):
        b = cluster.site(site_index).sublattice()
        U = local_dof_matrix_rep[inv_head_group_index][b]
        pos = site_index_to_basis_index[site_index]
        dim = U.shape[0]
        inv_matrix_rep[pos : pos + dim, pos : pos + dim] = U

    # Make equivalence map cluster (no permutations)
    equiv_cluster = site_rep * cluster

    return (matrix_rep, inv_matrix_rep, equiv_cluster)


def make_equivalence_map_matrix_rep(
    local_dof_matrix_rep: list[list[np.ndarray]],
    prototype_cluster: Cluster,
    symgroup: SymGroup,
    equivalence_map_indices: list[list[int]],
    equivalence_map_site_rep: list[list[xtal.IntegralSiteCoordinateRep]],
    total_dim: int,
    site_index_to_basis_index: dict[int, int],
):
    """Generate the cluster matrix representation and cluster for each equivalence map
    operation, for a single DoF

    Parameters
    ----------
    local_dof_matrix_rep: list[list[np.ndarray]]
        The local DoF matrix reps, `M`, for each operation in the head symmetry group,
        for each sublattice,
        ``M = local_dof_matrix_rep[head_group_index][sublattice_index]``.
    prototype_cluster: Cluster
        The prototype cluster
    symgroup: SymGroup
        The symmetry group used to generate the orbit. May be a subgroup.
    equivalence_map_indices: list[list[int]]
        The indices of elements in `symgroup` elements list associated with each
        equivalence map operation.
    equivalence_map_site_rep: list[list[xtal.IntegralSiteCoordinateRep]]
        Site representations (xtal.IntegralSiteCoordinateRep) for each equivalence map
        operation.
    total_dim: int
        The total dimension of the resulting cluster matrix reps.
    site_index_to_basis_index: dict[int, int]
        Specifies the beginning row or column, `basis_index`, in the cluster matrix rep
        for each site in the cluster,
        ``basis_index = site_index_to_basis_index[site_index]``.

    Returns
    -------
    (equivalence_map_matrix_rep, \
    equivalence_map_inv_matrix_rep, \
    equivalence_map_clusters):

        equivalence_map_matrix_rep: \
        list[list[np.ndarray[np.float64[total_dim,total_dim]]]]
            Matrix representations for equivalence map operations.

        equivalence_map_inv_matrix_rep: \
        list[list[np.ndarray[np.float64[total_dim,total_dim]]]]
            Matrix representations for the inverse operation of equivalence map
            operations.

        equivalence_map_clusters: list[list[Cluster]]
            The clusters generated from applying equivalence map operations to the
            prototype cluster without any permutation. The generated
            clusters, ``equivalence_map_clusters[i][j]``, are equivalent to orbit
            element ``orbit[i]`` up to a permutation.


    """
    ## Build equivalence map op matrix reps, without permutation
    equivalence_map_matrix_rep = []
    equivalence_map_inv_matrix_rep = []
    equivalence_map_clusters = []
    head_group = symgroup.head_group
    if head_group is None:
        head_group = symgroup
    head_group_index_list = symgroup.head_group_index
    for i_equiv in range(len(equivalence_map_indices)):
        matrix_rep = []
        inv_matrix_rep = []
        clusters = []
        for i_op in range(len(equivalence_map_indices[i_equiv])):
            # Make equivalence map matrix rep (no permutations)
            symgroup_index = equivalence_map_indices[i_equiv][i_op]
            head_group_index = head_group_index_list[symgroup_index]
            site_rep = equivalence_map_site_rep[i_equiv][i_op]

            (
                _matrix_rep,
                _inv_matrix_rep,
                _equiv_cluster,
            ) = make_cluster_matrix_rep_no_permutation(
                local_dof_matrix_rep=local_dof_matrix_rep,
                cluster=prototype_cluster,
                head_group=head_group,
                head_group_index=head_group_index,
                site_rep=site_rep,
                total_dim=total_dim,
                site_index_to_basis_index=site_index_to_basis_index,
            )

            matrix_rep.append(_matrix_rep)
            inv_matrix_rep.append(_inv_matrix_rep)
            clusters.append(_equiv_cluster)

        equivalence_map_matrix_rep.append(matrix_rep)
        equivalence_map_inv_matrix_rep.append(inv_matrix_rep)
        equivalence_map_clusters.append(clusters)
    return (
        equivalence_map_matrix_rep,
        equivalence_map_inv_matrix_rep,
        equivalence_map_clusters,
    )


def make_basis_set_generating_matrix_rep(
    local_dof_matrix_rep: list[list[np.ndarray]],
    symgroup: SymGroup,
    equivalence_map_clusters: list[list[Cluster]],
    basis_set_generating_indices: list[int],
    basis_set_generating_site_rep: list[xtal.IntegralSiteCoordinateRep],
    total_dim: int,
    site_index_to_basis_index: dict[int, int],
):
    """Generate the cluster matrix representation and cluster for each symmetry 
    operation that generates a distinct local cluster expansion, for a single DoF

    Notes
    -----

    Proper usage of the results of this method to construct equivalent local cluster
    expansions depends on the following sequence:

    1. Cluster functions are constructed on the prototype local cluster
    2. Cluster functions and equivalent local clusters are generated for the equivalent
       local clusters in the prototype local cluster expansion using
       equivalence_map_inv_matrix_rep
    3. Cluster functions and equivalent local clusters are generated for each
       equivalent local cluster expansions by applying
       basis_set_generating_inv_matrix_rep to the results of step 2.

    Parameters
    ----------
    local_dof_matrix_rep: list[list[np.ndarray]]
        The local DoF matrix reps, `M`, for each operation in the head symmetry group,
        for each sublattice,
        ``M = local_dof_matrix_rep[head_group_index][sublattice_index]``.
    symgroup: SymGroup
        The symmetry group used to generate the equivalent local basis sets. May be a
        subgroup.
    equivalence_map_clusters: list[list[Cluster]]
        The clusters generated from applying equivalence map operations to the
        prototype cluster without any permutation.
    basis_set_generating_indices: list[int]
        The indices of elements in `symgroup` elements list for each local basis
        set generating operation.
    basis_set_generating_site_rep: list[xtal.IntegralSiteCoordinateRep]
        Site representations (xtal.IntegralSiteCoordinateRep) for each local basis
        set generating operation.
    total_dim: int
        The total dimension of the resulting cluster matrix reps.
    site_index_to_basis_index: dict[int, int]
        Specifies the beginning row or column, `basis_index`, in the cluster matrix rep
        for each site in the cluster,
        ``basis_index = site_index_to_basis_index[site_index]``.

    Returns
    -------
    (basis_set_generating_matrix_rep, \
    basis_set_generating_inv_matrix_rep, \
    basis_set_clusters):

        basis_set_generating_matrix_rep: \
        list[list[np.ndarray[np.float64[total_dim,total_dim]]]]
            Matrix representations for equivalence map operations. Indexing is
            ``basis_set_generating_matrix_rep[i_clex][i_cluster]`.

        basis_set_generating_inv_matrix_rep: \
        list[list[np.ndarray[np.float64[total_dim,total_dim]]]]
            Matrix representations for the inverse operation of equivalence map
            operations. Indexing is
            ``basis_set_generating_inv_matrix_rep[i_clex][i_cluster]`.

        basis_set_clusters: list[list[Cluster]]
            The clusters generated from applying generating operations to the
            prototype cluster, without any permutation. Indexing is
            ``basis_set_clusters[i_clex][i_cluster]`.


    """
    ## Build equivalence map op matrix reps, without permutation
    basis_set_generating_matrix_rep = []
    basis_set_generating_inv_matrix_rep = []
    basis_set_clusters = []
    head_group = symgroup.head_group
    if head_group is None:
        head_group = symgroup
    head_group_index_list = symgroup.head_group_index
    for i_clex in range(len(basis_set_generating_indices)):
        matrix_rep = []
        inv_matrix_rep = []
        clusters = []

        # Make basis set generating matrix rep (no permutations)
        symgroup_index = basis_set_generating_indices[i_clex]
        head_group_index = head_group_index_list[symgroup_index]
        site_rep = basis_set_generating_site_rep[i_clex]

        for i_clust in range(len(equivalence_map_clusters)):
            (
                _matrix_rep,
                _inv_matrix_rep,
                _equiv_cluster,
            ) = make_cluster_matrix_rep_no_permutation(
                local_dof_matrix_rep=local_dof_matrix_rep,
                cluster=equivalence_map_clusters[i_clust][0],
                head_group=head_group,
                head_group_index=head_group_index,
                site_rep=site_rep,
                total_dim=total_dim,
                site_index_to_basis_index=site_index_to_basis_index,
            )

            matrix_rep.append(_matrix_rep)
            inv_matrix_rep.append(_inv_matrix_rep)
            clusters.append(_equiv_cluster)

        basis_set_generating_matrix_rep.append(matrix_rep)
        basis_set_generating_inv_matrix_rep.append(inv_matrix_rep)
        basis_set_clusters.append(clusters)
    return (
        basis_set_generating_matrix_rep,
        basis_set_generating_inv_matrix_rep,
        basis_set_clusters,
    )


def make_cluster_matrix_rep(
    local_dof_matrix_rep: list[list[np.ndarray]],
    cluster: Cluster,
    cluster_group: SymGroup,
    cluster_perm_rep: list[list[int]],
    total_dim: int,
    site_index_to_basis_index: dict[int, int],
):
    """Make the matrix representation for the cluster group, for a single DoF

    Parameters
    ----------
    local_dof_matrix_rep: list[list[np.ndarray]]
        The local DoF matrix reps, `M`, for each factor group operation, for each
        sublattice, ``M = local_dof_matrix_rep[factor_group_index][sublattice_index]``.
    cluster: Cluster
        The cluster
    cluster_group: SymGroup
        The cluster group
    cluster_perm_rep: list[list[int]]
        The cluster permute representation,
        `from_site_index = cluster_permutation_rep[cluster_group_index][to_site_index]`.
    total_dim: int
        The total dimension of the resulting cluster matrix reps.
    site_index_to_basis_index: dict[int, int]
        Specifies the beginning row or column, `basis_index`, in the cluster matrix rep
        for each site in the cluster,
        ``basis_index = site_index_to_basis_index[site_index]``.
    occ_site_functions: list[dict]
        List of occupation site basis functions. For each sublattice with discrete
        site basis functions, must include:

        - `"sublattice_index"`: int, index of the sublattice
        - `"functions"`: list[list[float]], list of the site basis function values, by
          DoF key (i.e. "occ") as ``value = functions[function_index][occupant_index]``.

    Returns
    -------
    cluster_matrix_rep: list[np.ndarray[np.float64[total_dim, total_dim]]]
        The matrix representation for each element of the cluster group, including
        proper permutation.
    """

    # Make matrix rep, by filling in blocks with site matrix reps
    cluster_matrix_rep = []
    for cluster_group_index, factor_group_index in enumerate(
        cluster_group.head_group_index
    ):
        trep = np.zeros((total_dim, total_dim))
        perm_rep = cluster_perm_rep[cluster_group_index]
        for to_site_index in range(cluster.size()):
            from_site_index = perm_rep[to_site_index]
            from_site_b = cluster.site(from_site_index).sublattice()
            U = local_dof_matrix_rep[factor_group_index][from_site_b]

            row = site_index_to_basis_index[to_site_index]
            col = site_index_to_basis_index[from_site_index]
            dim = U.shape[0]
            trep[row : row + dim, col : col + dim] = U

        cluster_matrix_rep.append(trep)

    return cluster_matrix_rep


def make_occ_site_functions_matrix_rep(
    prim: casmconfig.Prim,
    key: str,
    occ_site_functions: list[dict],
) -> list[list[np.ndarray]]:
    """Returns the symmetry group representation that describes how occupation site \
    functions transform under symmetry.

    Parameters
    ----------
    prim: casmconfig.Prim
        The prim, with symmetry information.
    key: str
        The DoF key (i.e. "occ").
    occ_site_functions: list[dict]
        List of occupation site basis functions. For each sublattice with discrete
        site basis functions, must include:

        - `"sublattice_index"`: int, index of the sublattice
        - `"functions"`: list[list[float]], list of the site basis function values, by
          DoF key (i.e. "occ") as ``value = functions[function_index][occupant_index]``.
        
    Returns
    -------
    occ_site_functions_matrix_rep: list[list[np.ndarray]]
        The array `local_dof_matrix_rep[factor_group_index][sublattice_index]` is the
        matrix representation for transforming occupation site basis functions,
        on the sublattice_index-th sublattice, by the factor_group_index-th prim
        factor group operation.
    """
    indicator_matrix_rep = prim.local_dof_matrix_rep(key)

    phi = []
    phi_inv = []
    for sublattice_index, indicator_rep in enumerate(indicator_matrix_rep[0]):
        site_functions = get_occ_site_functions(occ_site_functions, sublattice_index)
        phi.append(site_functions)
        phi_inv.append(np.linalg.inv(site_functions))

    occ_site_functions_matrix_rep = []
    for prim_factor_group_index, indicator_op_rep in enumerate(
        prim.indicator_matrix_rep
    ):
        site_functions_op_rep = []
        for sublattice_index, indicator_rep in enumerate(indicator_op_rep):
            b = sublattice_index
            site_function_rep = phi[b] @ indicator_rep @ phi_inv[b]
            site_functions_op_rep.append(site_function_rep)
        occ_site_functions_matrix_rep.append(site_functions_op_rep)

    return occ_site_functions_matrix_rep


class ClusterMatrixRepBuilder:
    """Builds cluster matrix reps for generating symmetry adapted polynomial functions
    on a cluster, for a single local degree of freedom (DoF)

    Attributes
    ----------
    prim: casmconfig.Prim
        The prim.
    generating_group: casmsyminfo.SymGroup
        The symmetry group
    key: str
        The degree of freedom (DoF) to build the matrix representations for.
    cluster: Cluster
        The cluster on which to build the matrix representation
    cluster_group: SymGroup
        The subgroup of the phenomenal group that leaves `cluster` invariant,
        including proper translations.
    cluster_perm_rep: list[int[int]]
        The `cluster_perm_rep` species how `cluster` sites permute under application
        of cluster group operations, by index into the list of cluster sites, according
        to ``from_site_index = cluster_perm_rep[cluster_group_index][to_site_index]``,
        where `cluster_group_index` is an index into ``cluster_group.elements``, and
        `from_site_index` and `to_site_index` are indices into ``cluster.sites()``
        before and after application of the cluster group operation, respectively.
    cluster_matrix_rep: list[np.ndarray[np.float64[total_dim, total_dim]]]
        The matrix representations for transforming cluster site DoF under cluster
        group operations. The array ``cluster_matrix_rep[cluster_group_index]``
        specifies how a vector of cluster site DoF transforms under the application
        of the `cluster_group_index`-th cluster group operation.
    variables: list[Variable]
        The variables associated with each element of the vector of cluster site DoF
        that can be transformed by the cluster matrix representations.
    variable_subsets: list[list[int]]
        Lists of variables (as indices into the `variables` list) which mix under
        application of symmetry. For example, if all variables are the 6 strain
        variables, then `var_subsets=[[0,1,2,3,4,5]]`. If the variables are the 3
        displacements on each site in a cluster of 2 sites, then
        `variable_subsets=[[0, 1, 2], [3, 4, 5]]`.
    site_index_to_basis_index: dict[int, int]
        Specifies the beginning row or column, `basis_index`, in the cluster
        matrix rep for each site in the cluster,
        ``basis_index = site_index_to_basis_index[site_index]``.
    total_dim: int
        The total dimension of the resulting cluster DoF vector / and cluster
        matrix reps.

    """

    def __init__(
        self,
        prim: casmconfig.Prim,
        generating_group: casmsyminfo.SymGroup,
        key: str,
        cluster: Cluster,
        make_variable_name_f: Optional[Callable] = None,
        local_discrete_dof: list[str] = [],
        occ_site_functions: list[dict] = [],
    ):
        """

        .. rubric:: Constructor

        Parameters
        ----------
        prim: casmconfig.Prim
            The prim.
        generating_group: casmsyminfo.SymGroup
            The symmetry group
        key: str
            The degree of freedom (DoF) to build the matrix representations for.
        cluster: Cluster
            The cluster on which to build the matrix representation
        make_variable_name_f: Optional[Callable] = None
            Allows specifying a custom function to construct variable names. The default
            function used is :func:`make_variable_name`. Custom functions should have
            the same signature as :func:`make_variable_name`.
        local_discrete_dof: list[str]
            The types of local discrete degree of freedom (DoF).
        occ_site_functions: list[dict]
            List of occupation site basis functions. For each sublattice with discrete
            site basis functions, must include:

            - `"sublattice_index"`: int, index of the sublattice
            - `"functions"`: list[list[float]], list of the site basis function values,
              by DoF key (i.e. "occ") as
              ``value = functions[function_index][occupant_index]``.
        """
        ## Constructor parameters ##
        self.prim = prim
        self.generating_group = generating_group
        self.key = key
        self.cluster = cluster

        ## Build cluster matrix rep ##
        generating_group_site_rep = make_integral_site_coordinate_symgroup_rep(
            group_elements=generating_group.elements,
            xtal_prim=prim.xtal_prim,
        )
        if key in local_discrete_dof:
            # For discrete DoF, we need to construct the matrix rep for the
            # site basis functions actually being used from the matrix rep
            # for the indicator variables
            local_dof_matrix_rep = make_occ_site_functions_matrix_rep(
                prim=prim,
                key=key,
                occ_site_functions=occ_site_functions,
            )
        else:
            local_dof_matrix_rep = prim.local_dof_matrix_rep(key)

        cluster_group = make_cluster_group(
            cluster=cluster,
            group=generating_group,
            lattice=prim.xtal_prim.lattice(),
            integral_site_coordinate_symgroup_rep=generating_group_site_rep,
        )
        cluster_perm_rep = make_cluster_permutation_rep(
            prim=prim,
            cluster=cluster,
            cluster_group=cluster_group,
        )
        variables, variable_subsets = make_cluster_variables(
            prim=prim,
            key=key,
            cluster=cluster,
            make_variable_name_f=make_variable_name_f,
            local_discrete_dof=local_discrete_dof,
        )
        site_index_to_basis_index, total_dim = make_cluster_dof_info(
            cluster, local_dof_matrix_rep
        )

        cluster_matrix_rep = make_cluster_matrix_rep(
            local_dof_matrix_rep=local_dof_matrix_rep,
            cluster=cluster,
            cluster_group=cluster_group,
            cluster_perm_rep=cluster_perm_rep,
            total_dim=total_dim,
            site_index_to_basis_index=site_index_to_basis_index,
        )

        ## Generated data ##
        self.cluster_group = cluster_group
        self.cluster_perm_rep = cluster_perm_rep
        self.cluster_matrix_rep = cluster_matrix_rep
        self.variables = variables
        self.variable_subsets = variable_subsets
        self.site_index_to_basis_index = site_index_to_basis_index
        self.total_dim = total_dim


class OrbitMatrixRepBuilder:
    """Builds cluster matrix reps for generating polynomial functions \
    on an orbit of clusters, coupling all local and global DoFs

    Attributes
    ----------
    prim: casmconfig.Prim
        The prim.
    generating_group: casmsyminfo.SymGroup
        The symmetry group
    orbit: list[casmclust.Cluster]
        The generated orbit
    global_dof: list[str]
        The types of global degree of freedom (DoF) to include in the matrix
        representation. All global DoF are treated as continuous.
    local_dof: list[str]
        The types of local continuous and discrete degrees of freedom (DoF) to include
        in the matrix representation.
    local_continuous_dof: list[str]
        The types of local discrete degree of freedom (DoF) to include in the matrix
        representation.
    local_discrete_dof: list[str]
        The types of local discrete degree of freedom (DoF) to include in the matrix
        representation.
    equivalence_map_ops: list[list[xtal.SymOp]
        The list of SymOp `equivalence_map_ops[i]` all map ``prototype.cluster``
        onto the same `i`-th equivalent cluster, including proper translation, up to a
        permutation of sites.
    equivalence_map_indices: list[list[int]]
        Indices into the `generating_group` elements list of corresponding
        `equivalence_map_ops`.
    equivalence_map_site_rep: list[list[xtal.IntegralSiteCoordinateRep]]
        Site transformation representation of corresponding `equivalence_map_ops`.
    equivalence_map_clusters: list[list[Cluster]]
        The equivalent clusters that the corresponding `equivalence_map_ops` all map
        ``prototype.cluster`` onto, satisfying:

        .. code-block:: Python

            equivalence_map_clusters[i][j] == \
                equivalence_map_site_rep[i][j] * prototype.cluster

        The clusters in the list ``equivalence_map_clusters[i]`` all have the same
        sites, but the order of sites may be permuted.
    basis_set_generating_ops: list[xtal.SymOp]
        Symmetry operations that generate the equivalent local orbits in
        the primitive unit cell.
    basis_set_generating_indices: list[int]
        Indices of factor group operations corresponding to `basis_set_generating_ops`.
    basis_set_generating_site_rep: list[xtal.IntegralSiteCoordinateRep]
        Symmetry group representation for transforming IntegralSiteCoordinate
        and Cluster corresponding to `basis_set_generating_ops`.
    global_variables: list[list[Variable]]
        For each global DoF in `global_dof`, the variables used in functions.
    n_global_variables: int
        The total number of global variables.
    global_variable_subsets: list[list[list[int]]]
        For each global DoF in `global_dof`, the variable subsets.
    global_matrix_rep: list[list[np.ndarray]]
        For each global DoF in `global_dof`, the matrix rep of corresponding
        generating group ops. These are the matrix representations that
        should be used to transform global DoF values. Index using
        ``global_matrix_rep[i_global_dof][i_factor_group]``.
    global_inv_matrix_rep: list[list[np.ndarray]]
        For each global DoF in `global_dof`, the matrix rep of the inverse of
        corresponding generating group ops. These are the matrix representations that
        should be used to generate functions of single global DoF type. Index using
        ``global_inv_matrix_rep[i_global_dof][i_factor_group]``.
    local_prototype: list[ClusterMatrixRepBuilder]
        For each local DoF in `local_dof`, the cluster matrix representations and
        associated information for the canonical equivalent cluster.
    n_local_variables: int
        The total number of local variables.
    local_equivalence_map_matrix_rep: list[list[list[np.ndarray]]
        For each DoF in `local_dof` and `discrete_dof`, the cluster matrix rep of
        corresponding `equivalence_map_ops`. These are the matrix representations that
        should be used to transform local DoF values onto equivalent clusters. Index
        using ``local_equivalence_map_matrix_rep[i_local_dof][i_equiv][i_op]``.
    local_equivalence_map_inv_matrix_rep: list[list[list[np.ndarray]]
        For each local DoF in `local_dof` and `discrete_dof`, the cluster matrix rep of
        the inverse of corresponding `equivalence_map_ops`. These are the matrix
        representations that should be used to generate functions on the equivalent
        clusters from functions on the prototype cluster for a single local DoF type.
        Index using
        ``local_equivalence_map_inv_matrix_rep[i_local_dof][i_equiv][i_op]``.
    local_basis_set_generating_matrix_rep: list[list[list[np.ndarray]]
        For each DoF in `local_dof` and `discrete_dof`, the cluster matrix rep of
        corresponding `basis_set_generating_ops`. These are the matrix representations
        that should be used to transform local DoF values onto equivalent clusters in
        an equivalent local cluster expansion. Index using
        ``local_basis_set_generating_matrix_rep[i_local_dof][i_clex][i_cluster]``.
    local_basis_set_generating_inv_matrix_rep: list[list[list[np.ndarray]]
        For each local DoF in `local_dof` and `discrete_dof`, the cluster matrix rep of
        the inverse of corresponding `basis_set_generating_ops`. These are the matrix
        representations that should be used to generate functions on the equivalent
        clusters in a different local cluster expansion, for a single local DoF type.
        Index using
        ``local_basis_set_generating_inv_matrix_rep[i_local_dof][i_clex][i_cluster]``.
    prototype_matrix_rep: list[np.ndarray]
        The coupled matrix rep of corresponding generating group ops. These are the
        matrix representations that can be used to transform at the same time global
        DoF values and local DoF values on the prototype cluster. Index using
        ``prototype_matrix_rep[i_cluster_group]``. The components of the DoF value
        vectors these matrices transform are described by the corresponding elements of
        `prototype_variables`.
    prototype_variables: list[Variable]
        The variables associated with each element of the vector of global DoF values
        and prototype cluster site DoF values that can be transformed by the matrix
        representations in `prototype_matrix_rep` and `equivalence_map_matrix_rep`.
        Global variables are included first, in the order specified by `global_dof`,
        followed by cluster site variables, in the order specified by `local_dof`.
    prototype_variable_subsets: list[list[int]]
        Lists of variables (as indices into the `prototype_variables` list) which mix
        under application of symmetry. For example, if all variables are the 6 strain
        variables, then `var_subsets=[[0,1,2,3,4,5]]`. If the variables are the 3
        displacements on each site in a cluster of 2 sites, then
        `variable_subsets=[[0, 1, 2], [3, 4, 5]]`. If those strain and displacement
        variables are coupled, with strain variables included first, then
        `variable_subsets=[[0,1,2,3,4,5], [6, 7, 8], [9, 10, 11]]`
    equivalence_map_matrix_rep: list[list[np.ndarray]]
        The coupled matrix rep of corresponding `equivalence_map_ops`. These are the
        matrix representations that can be used to transform at the same time global
        DoF values and local DoF values from the prototype cluster onto equivalent
        clusters. Index using ``equivalence_map_matrix_rep[i_equiv][i_op]``.
    equivalence_map_inv_matrix_rep: list[list[np.ndarray]]
        The inverse of the coupled matrix rep of corresponding `equivalence_map_ops`.
        These are the matrix representations that should be used to generate coupled
        functions on the equivalent clusters from coupled functions on the prototype
        cluster. Index using ``equivalence_map_inv_matrix_rep[i_equiv][i_op]``.
    basis_set_generating_matrix_rep: list[list[np.ndarray]]
        The coupled matrix rep of corresponding `basis_set_generating_ops`. These are
        the matrix representations that can be used to transform at the same time global
        DoF values and local DoF values from the prototype cluster onto equivalent
        clusters. Index using ``equivalence_map_matrix_rep[i_equiv][i_op]``.
    basis_set_generating_inv_matrix_rep: list[list[np.ndarray]]
        The inverse of the coupled matrix rep of corresponding `equivalence_map_ops`.
        These are the matrix representations that should be used to generate coupled
        functions on the equivalent clusters from coupled functions on the prototype
        cluster. Index using ``equivalence_map_inv_matrix_rep[i_equiv][i_op]``.
    """

    def __init__(
        self,
        prim: casmconfig.Prim,
        generating_group: casmsyminfo.SymGroup,
        global_dof: list[str],
        local_continuous_dof: list[str],
        local_discrete_dof: list[str],
        cluster: Cluster,
        phenomenal: Optional[Cluster] = None,
        make_variable_name_f: Optional[Callable] = None,
        occ_site_functions: list[dict] = [],
    ):
        """

        Parameters
        ----------
        prim: casmconfig.Prim
            The prim.
        generating_group: casmsyminfo.SymGroup
            The symmetry group for generating cluster functions. For periodic cluster
            functions, this is the prim factor group (usually) or a subgroup. For
            local cluster functions, this is the cluster group of the phenomenal
            cluster or a subgroup (often the subgroup which leaves an
            :class:`~libcasm.occ_events.OccEvent` invariant).
        global_dof: list[str]
            The types of global degree of freedom (DoF) to include in the matrix
            representation.
        local_continuous_dof: list[str]
            The types of local continuous degree of freedom (DoF) to include in the
            matrix representation.
        local_discrete_dof: list[str]
            The types of local discrete degree of freedom (DoF) to include in the
            matrix representation.
        cluster: Cluster
            A cluster in the orbit of clusters on which to generate matrix
            representations.
        phenomenal: Optional[Cluster] = None
            For local cluster functions, specifies the sites about which
            local-clusters orbits are generated. The phenomenal cluster must be chosen
            from one of the equivalents that is generated by
            :func:`~libcasm.clusterography.make_periodic_orbit` using the prim factor
            group.
        make_variable_name_f: Optional[Callable] = None
            Allows specifying a custom function to construct variable names. The default
            function used is :func:`make_variable_name`. Custom functions should have
            the same signature as :func:`make_variable_name`.
        occ_site_functions: list[dict]
            List of occupation site basis functions. For each sublattice with discrete
            site basis functions, must include:

            - `"sublattice_index"`: int, index of the sublattice
            - `"functions"`: list[list[float]], list of the site basis function values,
              by DoF key (i.e. "occ") as
              ``value = functions[function_index][occupant_index]``.

        """
        ### Constructor parameters ###
        self.prim = prim
        self.generating_group = generating_group
        self.global_dof = global_dof
        self.local_continuous_dof = local_continuous_dof
        self.local_discrete_dof = local_discrete_dof
        self.cluster = cluster
        self.phenomenal = phenomenal
        self.make_variable_name_f = make_variable_name_f
        self.occ_site_functions = occ_site_functions

        local_dof = local_continuous_dof + local_discrete_dof
        self.local_dof = local_dof

        ## The following generate all the matrix reps needed for this orbit:

        ## Generate orbit, equivalence map, and cluster group
        self._make_orbit_and_equivalence_map()

        ## If a local cluster expansion,
        # make equivalent local basis set generating symmetry operations
        self._make_basis_set_generators()

        ## Make global DoF variables, variable subsets,
        # and matrix reps for individual DoF
        self._make_global_dof_info()

        ## Make local DoF variables, variable subsets,
        # and matrix reps for individual DoF, including cluster matrix reps
        self._make_local_dof_info()

        ## Combine individual DoF matrix reps
        # into a coupled matrix rep for the prototype cluster
        # Also, make variables and variable subsets for the coupled cluster functions
        self._make_coupled_prototype_matrix_rep_and_variables()

        ## Build equivalence map matrix reps
        # Build matrix reps which
        # transform cluster functions generated on the prototype cluster
        # to other clusters in the orbit
        self._make_equivalence_map_matrix_rep()

        ## If a local cluster expansion,
        # Build basis set generating matrix reps which
        # transform cluster functions on all local clusters in the orbit
        # to cluster functions on a different but equivalent orbit of local clusters
        self._make_basis_set_generating_matrix_rep()

    def _make_orbit_and_equivalence_map(self):
        # Data used
        phenomenal = self.phenomenal
        cluster = self.cluster
        generating_group = self.generating_group
        prim = self.prim

        ## Generate orbit, equivalence map, and cluster group
        generating_group_site_rep = make_integral_site_coordinate_symgroup_rep(
            group_elements=generating_group.elements,
            xtal_prim=prim.xtal_prim,
        )
        orbit = make_periodic_orbit(
            cluster,
            generating_group_site_rep,
        )
        cluster_group = make_cluster_group(
            cluster=orbit[0],
            group=generating_group,
            lattice=prim.xtal_prim.lattice(),
            integral_site_coordinate_symgroup_rep=generating_group_site_rep,
        )
        if phenomenal is None:
            equivalence_map_indices = make_periodic_equivalence_map_indices(
                orbit=orbit,
                integral_site_coordinate_symgroup_rep=generating_group_site_rep,
            )
            equivalence_map_ops = make_periodic_equivalence_map(
                orbit=orbit,
                symgroup=generating_group,
                lattice=prim.xtal_prim.lattice(),
                integral_site_coordinate_symgroup_rep=generating_group_site_rep,
            )

        else:
            equivalence_map_indices = make_local_equivalence_map_indices(
                orbit=orbit,
                integral_site_coordinate_symgroup_rep=generating_group_site_rep,
            )
            equivalence_map_ops = make_local_equivalence_map(
                orbit=orbit,
                phenomenal_group=generating_group,
                integral_site_coordinate_symgroup_rep=generating_group_site_rep,
            )
        equivalence_map_site_rep = make_equivalence_map_site_rep(
            xtal_prim=prim.xtal_prim,
            equivalence_map_ops=equivalence_map_ops,
        )
        equivalence_map_clusters = make_equivalence_map_clusters(
            orbit=orbit,
            equivalence_map_site_rep=equivalence_map_site_rep,
        )

        ## Generated data ##
        self.orbit = orbit
        self.cluster_group = cluster_group
        self.equivalence_map_ops = equivalence_map_ops
        self.equivalence_map_indices = equivalence_map_indices
        self.equivalence_map_site_rep = equivalence_map_site_rep
        self.equivalence_map_clusters = equivalence_map_clusters

    def _make_basis_set_generators(self):
        # Data used
        phenomenal = self.phenomenal
        generating_group = self.generating_group
        prim = self.prim

        ## If a local cluster expansion,
        # make equivalent local basis set generating symmetry operations
        basis_set_generating_ops = None
        basis_set_generating_indices = None
        basis_set_generating_site_rep = None
        if phenomenal is not None:
            (
                basis_set_generating_ops,
                basis_set_generating_indices,
                basis_set_generating_site_rep,
            ) = make_equivalents_generators(
                phenomenal=phenomenal,
                generating_group=generating_group,
                prim=prim,
            )

        # Data generated
        self.basis_set_generating_ops = basis_set_generating_ops
        self.basis_set_generating_indices = basis_set_generating_indices
        self.basis_set_generating_site_rep = basis_set_generating_site_rep

    def _make_global_dof_info(self):
        # Note: global DoF info could be factored out of each individual orbit

        # Data used
        generating_group = self.generating_group
        global_dof = self.global_dof
        prim = self.prim
        make_variable_name_f = self.make_variable_name_f

        ## Make global DoF variables, variable subsets,
        # and matrix reps for individual DoF
        global_variables = []
        global_variable_subsets = []
        global_matrix_rep = []
        global_inv_matrix_rep = []
        head_group = generating_group.head_group
        if head_group is None:
            head_group = generating_group
        for key in global_dof:
            _variables, _variable_subsets = make_global_variables(
                prim=prim,
                key=key,
                make_variable_name_f=make_variable_name_f,
            )
            global_variables.append(_variables)
            global_variable_subsets.append(_variable_subsets)

            head_group_matrix_rep = prim.global_dof_matrix_rep(key)
            head_group_inv_matrix_rep = []
            for head_group_index, op in enumerate(head_group.elements):
                head_group_inv_matrix_rep.append(
                    head_group_matrix_rep[head_group.inv(head_group_index)]
                )
            global_matrix_rep.append(head_group_matrix_rep)
            global_inv_matrix_rep.append(head_group_inv_matrix_rep)

        # Data generated
        # global DoF info (lists, by global DoF in same order as global_dof):
        self.global_variables = global_variables
        self.global_variable_subsets = global_variable_subsets
        self.global_matrix_rep = global_matrix_rep
        self.global_inv_matrix_rep = global_inv_matrix_rep

    def _make_local_dof_info(self):
        # Data used
        local_dof = self.local_dof
        prim = self.prim
        generating_group = self.generating_group
        phenomenal = self.phenomenal
        orbit = self.orbit
        make_variable_name_f = self.make_variable_name_f
        occ_site_functions = self.occ_site_functions
        local_discrete_dof = self.local_discrete_dof

        equivalence_map_indices = self.equivalence_map_indices
        equivalence_map_site_rep = self.equivalence_map_site_rep

        basis_set_generating_indices = self.basis_set_generating_indices
        basis_set_generating_site_rep = self.basis_set_generating_site_rep

        ## Make local DoF variables, variable subsets,
        # and matrix reps for individual DoF, including cluster matrix reps
        local_prototype = []
        local_equivalence_map_matrix_rep = []
        local_equivalence_map_inv_matrix_rep = []
        local_basis_set_generating_matrix_rep = []
        local_basis_set_generating_inv_matrix_rep = []
        for key in local_dof:
            _local_dof_matrix_rep = prim.local_dof_matrix_rep(key)

            ## Build local DoF prototype cluster matrix rep (with permutation)
            _local_prototype = ClusterMatrixRepBuilder(
                prim=prim,
                generating_group=generating_group,
                key=key,
                cluster=orbit[0],
                make_variable_name_f=make_variable_name_f,
                local_discrete_dof=local_discrete_dof,
                occ_site_functions=occ_site_functions,
            )
            local_prototype.append(_local_prototype)

            ## Build local DoF equivalence map matrix reps (no permutation)
            _1, _2, _3 = make_equivalence_map_matrix_rep(
                local_dof_matrix_rep=_local_dof_matrix_rep,
                prototype_cluster=_local_prototype.cluster,
                symgroup=generating_group,
                equivalence_map_indices=equivalence_map_indices,
                equivalence_map_site_rep=equivalence_map_site_rep,
                total_dim=_local_prototype.total_dim,
                site_index_to_basis_index=_local_prototype.site_index_to_basis_index,
            )
            local_equivalence_map_matrix_rep.append(_1)
            local_equivalence_map_inv_matrix_rep.append(_2)

            if phenomenal is not None:
                ## Build local DoF basis set generating matrix reps (no permutation)
                _4, _5, _6 = make_basis_set_generating_matrix_rep(
                    local_dof_matrix_rep=_local_dof_matrix_rep,
                    symgroup=generating_group,
                    equivalence_map_clusters=_3,
                    basis_set_generating_indices=basis_set_generating_indices,
                    basis_set_generating_site_rep=basis_set_generating_site_rep,
                    total_dim=_local_prototype.total_dim,
                    site_index_to_basis_index=_local_prototype.site_index_to_basis_index,
                )
                local_basis_set_generating_matrix_rep.append(_4)
                local_basis_set_generating_inv_matrix_rep.append(_5)

        # Data generated
        self.local_prototype = local_prototype
        self.local_equivalence_map_matrix_rep = local_equivalence_map_matrix_rep
        self.local_equivalence_map_inv_matrix_rep = local_equivalence_map_inv_matrix_rep
        self.local_basis_set_generating_matrix_rep = (
            local_basis_set_generating_matrix_rep
        )
        self.local_basis_set_generating_inv_matrix_rep = (
            local_basis_set_generating_inv_matrix_rep
        )

    def _make_coupled_prototype_matrix_rep_and_variables(self):
        # Data used
        cluster_group = self.cluster_group
        local_prototype = self.local_prototype
        global_matrix_rep = self.global_matrix_rep
        global_variables = self.global_variables
        global_variable_subsets = self.global_variable_subsets

        ## Combine individual DoF matrix reps
        # into a coupled matrix rep for the prototype cluster
        prototype_matrix_rep = []
        for cluster_group_index, head_group_index in enumerate(
            cluster_group.head_group_index
        ):
            _global_matrices = [x[head_group_index] for x in global_matrix_rep]
            _local_dof_matrices = [
                x.cluster_matrix_rep[cluster_group_index] for x in local_prototype
            ]
            _all_matrices = _global_matrices + _local_dof_matrices
            prototype_matrix_rep.append(scipy.linalg.block_diag(*_all_matrices))

        # Also, make variables and variable subsets for the coupled cluster functions
        n_global_variables = 0
        n_local_variables = 0
        prototype_variables = []
        prototype_variable_subsets = []
        for i, variables in enumerate(global_variables):
            offset = len(prototype_variables)
            n_global_variables += len(variables)
            prototype_variables += variables
            variable_subsets = global_variable_subsets[i]
            for subset in variable_subsets:
                prototype_variable_subsets.append([j + offset for j in subset])
        for i_local, x in enumerate(local_prototype):
            offset = len(prototype_variables)
            n_local_variables += len(x.variables)
            prototype_variables += x.variables
            for subset in x.variable_subsets:
                corrected_subset = []
                for j in subset:
                    corrected_subset.append(j + offset)
                prototype_variable_subsets.append(corrected_subset)

        # Data generated
        self.prototype_matrix_rep = prototype_matrix_rep
        self.n_global_variables = n_global_variables
        self.n_local_variables = n_local_variables
        self.prototype_variables = prototype_variables
        self.prototype_variable_subsets = prototype_variable_subsets

    def _make_equivalence_map_matrix_rep(self):
        # Data used
        generating_group = self.generating_group
        equivalence_map_ops = self.equivalence_map_ops
        equivalence_map_indices = self.equivalence_map_indices
        local_equivalence_map_matrix_rep = self.local_equivalence_map_matrix_rep
        local_equivalence_map_inv_matrix_rep = self.local_equivalence_map_inv_matrix_rep
        global_matrix_rep = self.global_matrix_rep
        global_inv_matrix_rep = self.global_inv_matrix_rep

        ## Build equivalence map matrix reps
        # Build matrix reps which
        # transform cluster functions generated on the prototype cluster
        # to other clusters in the orbit
        equivalence_map_matrix_rep = []  # transforms DoF
        equivalence_map_inv_matrix_rep = []  # transforms functions
        head_group_index_list = generating_group.head_group_index
        for i_equiv, ops in enumerate(equivalence_map_ops):
            _matrix_reps = []
            _inv_matrix_reps = []
            for i_op, op in enumerate(equivalence_map_ops[i_equiv]):
                generating_group_index = equivalence_map_indices[i_equiv][i_op]
                head_group_index = head_group_index_list[generating_group_index]

                _global_matrices = [x[head_group_index] for x in global_matrix_rep]
                _local_matrices = [
                    x[i_equiv][i_op] for x in local_equivalence_map_matrix_rep
                ]
                _all_matrices = _global_matrices + _local_matrices
                _matrix_reps.append(scipy.linalg.block_diag(*_all_matrices))

                _global_inv_matrices = [
                    x[head_group_index] for x in global_inv_matrix_rep
                ]
                _local_inv_matrices = [
                    x[i_equiv][i_op] for x in local_equivalence_map_inv_matrix_rep
                ]
                _all_inv_matrices = _global_inv_matrices + _local_inv_matrices
                _inv_matrix_reps.append(scipy.linalg.block_diag(*_all_inv_matrices))
            equivalence_map_matrix_rep.append(_matrix_reps)
            equivalence_map_inv_matrix_rep.append(_inv_matrix_reps)

        # Data generated
        self.equivalence_map_matrix_rep = equivalence_map_matrix_rep
        self.equivalence_map_inv_matrix_rep = equivalence_map_inv_matrix_rep

    def _make_basis_set_generating_matrix_rep(self):
        # Data used
        phenomenal = self.phenomenal
        equivalence_map_ops = self.equivalence_map_ops
        basis_set_generating_ops = self.basis_set_generating_ops
        global_matrix_rep = self.global_matrix_rep
        global_inv_matrix_rep = self.global_inv_matrix_rep
        local_basis_set_generating_matrix_rep = (
            self.local_basis_set_generating_matrix_rep
        )
        local_basis_set_generating_inv_matrix_rep = (
            self.local_basis_set_generating_inv_matrix_rep
        )

        ## If a local cluster expansion,
        # Build basis set generating matrix reps which
        # transform cluster functions on all local clusters in the orbit
        # to cluster functions on a different but equivalent orbit of local clusters
        basis_set_generating_matrix_rep = None
        basis_set_generating_inv_matrix_rep = None
        if phenomenal is not None:
            basis_set_generating_matrix_rep: list[list[np.ndarray]] = []
            basis_set_generating_inv_matrix_rep: list[list[np.ndarray]] = []
            for i_clex in enumerate(basis_set_generating_ops):
                _matrix_reps = []
                _inv_matrix_reps = []
                head_group_index = basis_set_generating_ops[i_clex]
                for i_clust in enumerate(equivalence_map_ops):
                    # get matrix rep
                    _global_matrices = [x[head_group_index] for x in global_matrix_rep]
                    _local_matrices = [
                        x[i_clex][i_clust]
                        for x in local_basis_set_generating_matrix_rep
                    ]
                    _all_matrices = _global_matrices + _local_matrices
                    _matrix_reps.append(scipy.linalg.block_diag(*_all_matrices))

                    # get inv matrix rep
                    _global_inv_matrices = [
                        x[head_group_index] for x in global_inv_matrix_rep
                    ]
                    _local_inv_matrices = [
                        x[i_clex][i_clust]
                        for x in local_basis_set_generating_inv_matrix_rep
                    ]
                    _all_inv_matrices = _global_inv_matrices + _local_inv_matrices
                    _inv_matrix_reps.append(scipy.linalg.block_diag(*_all_inv_matrices))
                basis_set_generating_matrix_rep.append(_matrix_reps)
                basis_set_generating_inv_matrix_rep.append(_inv_matrix_reps)

        # Data generated
        self.basis_set_generating_matrix_rep = basis_set_generating_matrix_rep
        self.basis_set_generating_inv_matrix_rep = basis_set_generating_inv_matrix_rep
