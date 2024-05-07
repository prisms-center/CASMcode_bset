import libcasm.xtal as xtal
import libcasm.clusterography as casmclust
import libcasm.configuration as casmconfig


def orbits_to_dict(
    orbits: list[list[casmclust.Cluster]],
    prim: casmconfig.Prim,
) -> dict:
    """Represent a list of cluster orbits as a list of Python dict

    Parameters
    ----------
    orbits: list[list[casmclust.Cluster]]
        List of cluster orbits. Orbits may not be empty.
    prim: libcasm.configuration.Prim
        The prim, used to generate site distances.

    Returns
    -------
    data: list[dict]
        A list of Python dict, one per orbit, in the
        `Cluster Orbit format <https://prisms-center.github.io/CASMcode_docs/formats/casm/clusterography/ClusterOrbits/#cluster-orbit-json-object>`_.

    """
    orbits_data = []
    for i_orbit, orbit in enumerate(orbits):
        orbit_data = {
            "linear_orbit_index": i_orbit,
            "mult": len(orbit),
            "prototype": orbit[0].to_dict(xtal_prim=prim.xtal_prim),
            "elements": [],
        }

        element_data = orbit_data["elements"]
        for cluster in orbit:
            element_data.append(cluster.to_dict(xtal_prim=prim.xtal_prim))

        orbits_data.append(orbit_data)
    return orbits_data


def make_symop_inverse(
    op: xtal.SymOp,
) -> xtal.SymOp:
    """Make the inverse SymOp

    Parameters
    ----------
    op: xtal.SymOp
        A SymOp

    Returns
    -------
    op_inv: xtal.SymOp
        The inverse SymOp
    """
    return xtal.SymOp(
        matrix=op.matrix().T,
        translation=-(op.matrix().T @ op.translation()),
        time_reversal=op.time_reversal(),
    )


def make_equivalents_generators(
    cluster_specs: casmclust.ClusterSpecs,
    prim: casmconfig.Prim,
) -> tuple[list[xtal.SymOp], list[int]]:
    """Make symmetry operations that generate all the equivalent local orbits in \
    the primitive cell.

    Notes
    -----

    - If the `cluster_specs.generating_group()` is a subgroup of the phenomenal
      cluster group, then there will be >1 distinct sets of local orbits around the
      phenomenal cluster.
    - This method finds the cluster group operations that generate the distinct set of
      local orbits, then it uses the phenomenal cluster orbit equivalence map to
      find operations that transform the local orbits sets to the equivalent
      phenomenal clusters in the primitive cell.

    Returns
    -------
    (ops, indices, site_reps):

        ops: list[libcasm.xtal.SymOp]
            Symmetry operations that generate the equivalent local orbits in
            the primitive unit cell.

        indices: list[int]
            Indices of factor group operations corresponding to `ops`.

        site_reps: list[libcasm.xtal.IntegralSiteCoordinateRep]
            Symmetry group representation for transforming IntegralSiteCoordinate
            and Cluster corresponding to `ops`.
    """
    phenomenal = cluster_specs.phenomenal()

    # collect needed sym groups
    factor_grp = prim.factor_group
    generating_grp = cluster_specs.generating_group()
    site_rep = prim.integral_site_coordinate_symgroup_rep

    phenomenal_cluster_grp = casmclust.make_cluster_group(
        cluster=phenomenal,
        group=factor_grp,
        lattice=prim.xtal_prim.lattice(),
        integral_site_coordinate_symgroup_rep=site_rep,
    )

    # find indices of factor group operations
    # that generate equivalent (but rotated) local basis sets
    # about the phenomenal cluster.
    i_factor_grp_equiv_on_phenomenal = set()
    for i_cluster_grp in range(len(phenomenal_cluster_grp.elements)):
        i_factor_grp = phenomenal_cluster_grp.head_group_index[i_cluster_grp]

        i_factor_grp_min = i_factor_grp
        for j_generating_grp in range(len(generating_grp.elements)):
            j_factor_grp = generating_grp.head_group_index[j_generating_grp]

            k_product = factor_grp.mult(j_factor_grp, i_factor_grp)
            if k_product < i_factor_grp_min:
                i_factor_grp_min = k_product

        i_factor_grp_equiv_on_phenomenal.add(i_factor_grp_min)

    # generate the phenomenal cluster orbit and equivalence map
    phenomenal_orbit = casmclust.make_periodic_orbit(
        orbit_element=phenomenal,
        integral_site_coordinate_symgroup_rep=site_rep,
    )
    equivalence_map = casmclust.make_periodic_equivalence_map(
        orbit=phenomenal_orbit,
        symgroup=factor_grp,
        lattice=prim.xtal_prim.lattice(),
        integral_site_coordinate_symgroup_rep=site_rep,
    )
    equivalence_map_indices = casmclust.make_periodic_equivalence_map_indices(
        orbit=phenomenal_orbit,
        integral_site_coordinate_symgroup_rep=site_rep,
    )

    # find op and factor group index that transform phenomenal to orbit prototype
    to_prototype_op = None
    i_to_prototype = None
    sorted_phenomenal = phenomenal.sorted()
    for i_clust, clust in enumerate(phenomenal_orbit):
        sorted_clust = clust.sorted()
        if sorted_clust == sorted_phenomenal:
            to_prototype_op = make_symop_inverse(equivalence_map[i_clust][0])
            i_to_prototype = factor_grp.inv(equivalence_map_indices[i_clust][0])
            break
    if to_prototype_op is None:
        raise Exception(
            "Error in make_equivalents_generators: Failed to find to_prototype_op"
        )

    # equiv bset = to_equiv_op * (to_prototype_op * (cluster_grp_op * phenomenal bset))
    #                                              ^ distinct bset on phenomenal
    #                             ^ bset on prototype
    #              ^ bset on other phenomenal
    generating_ops = []
    generating_indices = []
    for i_factor_grp in i_factor_grp_equiv_on_phenomenal:
        i_cluster_grp = phenomenal_cluster_grp.head_group_index.index(i_factor_grp)
        cluster_grp_op = phenomenal_cluster_grp.element[i_cluster_grp]

        for i_equiv in range(len(equivalence_map)):
            to_equiv_op = equivalence_map[i_equiv][0]
            i_to_equiv = equivalence_map_indices[i_equiv][0]

            generating_op = to_equiv_op * to_prototype_op * cluster_grp_op
            i_generating_op = factor_grp.mult(
                i_to_equiv, factor_grp.mult(i_to_prototype, i_factor_grp)
            )

            generating_ops.append(generating_op)
            generating_indices.append(i_generating_op)

    generating_site_reps = casmclust.make_integral_site_coordinate_symgroup_rep(
        group_elements=generating_ops,
        xtal_prim=prim.xtal_prim,
    )

    return (generating_ops, generating_indices, generating_site_reps)
