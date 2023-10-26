import numpy as np

import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims

from casm.bset import (
    Variable,
    make_global_dof_matrix_rep,
    make_symmetry_adapted_polynomials,
)

Hstrain_dof = xtal.DoFSetBasis(
    dofname="Hstrain",
    axis_names=["e_1", "e_2", "e_3", "e_4", "e_5", "e_6"],
    basis=np.array([
        [1. / np.sqrt(3), 1. / np.sqrt(3), 1. / np.sqrt(3), 0.0, 0.0, 0.0],
        [1. / np.sqrt(2), -1. / np.sqrt(2), 0.0, 0.0, 0.0, 0.0],
        [-1. / np.sqrt(6), -1. / np.sqrt(6), 2. / np.sqrt(6), 0.0, 0.0, 0.0],
        [0.0, 0.0, 0.0, 1.0, 0.0, 0.0],
        [0.0, 0.0, 0.0, 0.0, 1.0, 0.0],
        [0.0, 0.0, 0.0, 0.0, 0.0, 1.0],
    ]).transpose())

xtal_prim = xtal_prims.FCC(
    a=1.0,
    global_dof=[Hstrain_dof],
)
matrix_rep = make_global_dof_matrix_rep(
    xtal_prim=xtal_prim,
    dof_key="Hstrain",
)
variables = [
    Variable(i) for i in Hstrain_dof.axis_names()
]
basis_set = make_symmetry_adapted_polynomials(
    matrix_rep=matrix_rep,
    variables=variables,
    min_poly_order=1,
    max_poly_order=3,
    verbose=True,
)

print("Variables:")
for i, var in enumerate(variables):
    print(f"x_{i}: {var.name}")
print()

print("Symmetry adapted polynomials functions:")
for i, f in enumerate(basis_set):
    print(f"~~~ order: {f.order()}, function_index: {i} ~~~")
    f._basic_print()
    print('Latex formula:')
    f._latex_print(variables)
    print()
