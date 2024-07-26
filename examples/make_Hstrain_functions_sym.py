import numpy as np

import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims
from casm.bset import (
    PolynomialFunction,
    Variable,
    make_global_dof_matrix_rep,
    make_symmetry_adapted_polynomials,
)

Hstrain_dof = xtal.DoFSetBasis(
    dofname="Hstrain",
    axis_names=["e_1", "e_2", "e_3", "e_4", "e_5", "e_6"],
    basis=np.array(
        [
            [1.0 / np.sqrt(3), 1.0 / np.sqrt(3), 1.0 / np.sqrt(3), 0.0, 0.0, 0.0],
            [1.0 / np.sqrt(2), -1.0 / np.sqrt(2), 0.0, 0.0, 0.0, 0.0],
            [-1.0 / np.sqrt(6), -1.0 / np.sqrt(6), 2.0 / np.sqrt(6), 0.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 1.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 1.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 0.0, 1.0],
        ]
    ).transpose(),
)

xtal_prim = xtal_prims.FCC(
    a=1.0,
    global_dof=[Hstrain_dof],
)

print("Prim:")
print(xtal.pretty_json(xtal_prim.to_dict()))
print()

prim = casmconfig.Prim(xtal_prim)
matrix_rep = make_global_dof_matrix_rep(
    prim=prim,
    key="Hstrain",
)

variables = [Variable(i) for i in Hstrain_dof.axis_names()]
variable_subsets = [[0, 1, 2, 3, 4, 5]]
basis_set = make_symmetry_adapted_polynomials(
    matrix_rep=matrix_rep,
    variables=variables,
    variable_subsets=variable_subsets,
    min_poly_order=1,
    max_poly_order=3,
    orthonormalize_in_place=True,
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

    print("Latex formula:")
    f._latex_print(variables)

    if False:
        data = f.to_dict()
        print(xtal.pretty_json(data))
        f_check = PolynomialFunction.from_dict(data)
        assert f == f_check

    print()
