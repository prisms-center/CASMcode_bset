import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims
import numpy as np
from libcasm.clusterography import (
    Cluster,
)

from casm.bset import (
    ExponentSumConstraint,
    PeriodicOrbitMatrixRepBuilder,
    PolynomialFunction,
    make_symmetry_adapted_polynomials,
)

xtal_prim = xtal_prims.FCC(
    a=1.0,
    occ_dof=["A", "B", "C"],
    local_dof=[],
    global_dof=[],
)
# xtal_prim = xtal.Prim(
#     lattice=xtal.Lattice(np.array(
#         [
#             [4.0, 0.0, 0.0],
#             [0.0, 4.0, 0.0],
#             [0.0, 0.0, 4.0],
#         ]
#     ).transpose()),
#     coordinate_frac=np.array(
#         [
#             [0.0, 0.0, 0.0],
#             [0.0, 0.5, 0.5],
#             [0.5, 0.0, 0.5],
#             [0.5, 0.5, 0.0],
#         ]
#     ).transpose(),
#     occ_dof=[
#         ["A", "B"],
#         ["C", "D", "E"],
#         ["C", "D", "E"],
#         ["C", "D", "E"],
#     ],
# )
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

print("Generate occ polynomials:")
print()

builder = PeriodicOrbitMatrixRepBuilder(
    prim=prim,
    generating_group=prim.factor_group,
    local_continuous_dof=[],
    local_discrete_dof=["occ"],
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

print("Variables:")
for i, var in enumerate(builder.local_prototype[0].variables):
    print(f"{i}: {var.name}")
print()

print("Variable subsets:")
print(xtal.pretty_json(builder.local_prototype[0].variable_subsets))

poly_order = cluster.size()
# skip_variables = [x[0] for x in builder.local_prototype[0].variable_subsets]
constraints = []
for subset in builder.local_prototype[0].variable_subsets:
    constraints.append(ExponentSumConstraint(variables=[subset[0]], sum=[0]))
    constraints.append(ExponentSumConstraint(variables=subset, sum=[0, 1]))
prototype_basis_set = make_symmetry_adapted_polynomials(
    matrix_rep=builder.local_prototype[0].cluster_matrix_rep,
    variables=builder.local_prototype[0].variables,
    variable_subsets=builder.local_prototype[0].variable_subsets,
    min_poly_order=poly_order,
    max_poly_order=poly_order,
    orthonormalize_in_place=True,
    constraints=constraints,
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
