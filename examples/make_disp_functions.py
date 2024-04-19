import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims
import numpy as np
from libcasm.clusterography import (
    Cluster,
)

from casm.bset import (
    ClusterMatrixRepBuilder,
    FunctionRep,
    PeriodicOrbitMatrixRepBuilder,
    PolynomialFunction,
    make_symmetry_adapted_polynomials,
)

disp_dof = xtal.DoFSetBasis(
    dofname="disp",
    # axis_names=["d_{x}", "d_{y}", "d_{z}"], basis=np.eye(3)
)
xtal_prim = xtal_prims.FCC(
    a=1.0,
    local_dof=[disp_dof],
    global_dof=[],
)
print("Prim:")
print(xtal.pretty_json(xtal_prim.to_dict()))
prim = casmconfig.Prim(xtal_prim)

# Make cluster & orbit
cluster = Cluster.from_list(
    [
        [0, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 1, 0],
    ]
)

print("Initial cluster:")
print(xtal.pretty_json(cluster.to_dict(xtal_prim)))
print()

print("Generate disp polynomials:")
print()

builder = PeriodicOrbitMatrixRepBuilder(
    prim=prim,
    generating_group=prim.factor_group,
    local_dof=["disp"],
    global_dof=[],
    cluster=cluster,
)

if True:
    print("Prototype cluster:")
    print(xtal.pretty_json(builder.local_prototype[0].cluster.to_dict(xtal_prim)))

if True:
    import copy

    matrix_rep = copy.deepcopy(builder.local_prototype[0].cluster_matrix_rep)

    # Remove entries which are approximately zero
    eps = 1e-14
    for i in range(len(matrix_rep)):
        matrix_rep[i][np.abs(matrix_rep[i]) < eps] = 0.0

    print("Prototype cluster group:")
    for i_op, op in enumerate(builder.local_prototype[0].cluster_group.elements):
        i_fg_op = builder.local_prototype[0].cluster_group.head_group_index[i_op]
        print(f"~~~ cg: {i_op}, fg: {i_fg_op} ~~~")
        print(xtal.pretty_json(op.to_dict()))
        info = xtal.SymInfo(op, xtal_prim.lattice())
        print(xtal.pretty_json(info.to_dict()))
        print(xtal.pretty_json(builder.local_prototype[0].cluster.to_dict(xtal_prim)))
        print()

    print("Prototype cluster group symmetry representation matrices:")
    for i, M in enumerate(matrix_rep):
        print(f"~~~ {i} ~~~")
        print(M)
        print()

max_poly_order = 4

prototype_basis_set = make_symmetry_adapted_polynomials(
    matrix_rep=builder.local_prototype[0].cluster_matrix_rep,
    variables=builder.local_prototype[0].variables,
    variable_subsets=builder.local_prototype[0].variable_subsets,
    min_poly_order=1,
    max_poly_order=max_poly_order,
    orthonormalize_in_place=True,
    verbose=True,
)

print("Variables:")
for i, var in enumerate(builder.local_prototype[0].variables):
    print(f"{i}: {var.name}")
print()

print("Prototype symmetry adapted polynomial functions:")
for i, f in enumerate(prototype_basis_set):
    print(f"~~~ order: {f.order()}, function_index: {i} ~~~")
    f._basic_print()

    if True:
        data = f.to_dict()
        print(xtal.pretty_json(data))
        f_check = PolynomialFunction.from_dict(data)
        assert f == f_check

    print()

if True:
    print("Equivalence map matrix reps:")
    for i_equiv, eq_map_matrix_rep in enumerate(builder.equivalence_map_matrix_rep):
        for matrix_rep in eq_map_matrix_rep:
            # Remove entries which are approximately zero
            eps = 1e-14
            for i in range(len(matrix_rep)):
                matrix_rep[i][np.abs(matrix_rep[i]) < eps] = 0.0
        for matrix_rep in builder.equivalence_map_inv_matrix_rep:
            # Remove entries which are approximately zero
            eps = 1e-14
            for i in range(len(matrix_rep)):
                matrix_rep[i][np.abs(matrix_rep[i]) < eps] = 0.0
        print(f"- {i_equiv}:")
        print("matrix_rep:")
        print(eq_map_matrix_rep[0])
        print("inv_matrix_rep:")
        print(builder.equivalence_map_inv_matrix_rep[i_equiv][0])
        print()

if True:
    print("Symmetry adapted polynomial function orbits:")
    for i, f_prototype in enumerate(prototype_basis_set):
        print(f"~~~ order: {f_prototype.order()}, function_index: {i} ~~~")
        for i_equiv, M_list in enumerate(builder.equivalence_map_inv_matrix_rep):
            print(f"- Equivalent: {i_equiv}")
            M = M_list[0]
            S = FunctionRep(
                matrix_rep=M,
                neighborhood_site_index_perm_rep=None,
            )
            f_equiv = S * f_prototype
            equiv_cluster = builder.equivalence_map_clusters[i_equiv][0]
            f_equiv._basic_print()
            print(xtal.pretty_json(equiv_cluster.to_dict(xtal_prim)))
            print()
        print()

if True:
    print("~~~ Check polynomial functions @ Equivalent cluster 1 ~~~")
    equiv_builder = ClusterMatrixRepBuilder(
        prim=prim,
        generating_group=prim.factor_group,
        key="disp",
        cluster=builder.equivalence_map_clusters[1][0],
    )

    equiv_basis_set = make_symmetry_adapted_polynomials(
        matrix_rep=equiv_builder.cluster_matrix_rep,
        variables=equiv_builder.variables,
        variable_subsets=equiv_builder.variable_subsets,
        min_poly_order=1,
        max_poly_order=max_poly_order,
        orthonormalize_in_place=True,
        verbose=True,
    )

    print("Prototype symmetry adapted polynomial functions @ Equivalent cluster 1 :")
    for i, f in enumerate(equiv_basis_set):
        print(f"~~~ order: {f.order()}, function_index: {i} ~~~")
        f._basic_print()
        print()
