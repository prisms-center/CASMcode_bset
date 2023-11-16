import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims

from casm.bset import (
    PolynomialFunction,
    Variable,
    make_global_dof_matrix_rep,
    make_symmetry_adapted_polynomials,
)

xtal_prim = xtal_prims.FCC(
    a=1.0,
    global_dof=[xtal.DoFSetBasis("Hstrain")],
)

print("Prim:")
print(xtal.pretty_json(xtal_prim.to_dict()))
print()

prim = casmconfig.Prim(xtal_prim)
matrix_rep = make_global_dof_matrix_rep(
    prim=prim,
    key="Hstrain",
)

print("Generate Hstrain polynomials:")
print()

variables = [
    Variable(name="{E_{xx}}"),
    Variable(name="{E_{yy}}"),
    Variable(name="{E_{zz}}"),
    Variable(name="{\\sqrt{2}E_{yz}}"),
    Variable(name="{\\sqrt{2}E_{xz}}"),
    Variable(name="{\\sqrt{2}E_{xy}}"),
]
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
    
    print('Latex formula:')
    f._latex_print(variables)

    if False:
        data = f.to_dict()
        print(xtal.pretty_json(data))
        f_check = PolynomialFunction.from_dict(data)
        assert f == f_check

    print()
