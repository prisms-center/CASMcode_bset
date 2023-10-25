import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims

from casm.bset import (
    Variable,
    make_global_dof_matrix_rep,
    make_symmetry_adapted_polynomials,
)

xtal_prim = xtal_prims.FCC(
    a=1.0,
    global_dof=[xtal.DoFSetBasis("Hstrain")],
)
matrix_rep = make_global_dof_matrix_rep(
    xtal_prim=xtal_prim,
    dof_key="Hstrain",
)
variables = [
    Variable(name="{E_{xx}}"),
    Variable(name="{E_{yy}}"),
    Variable(name="{E_{zz}}"),
    Variable(name="{\\sqrt{2}E_{yz}}"),
    Variable(name="{\\sqrt{2}E_{xz}}"),
    Variable(name="{\\sqrt{2}E_{xy}}"),
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
    print()
