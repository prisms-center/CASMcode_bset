import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims
from utils.expected_Hstrain_functions import (
    expected_Hstrain_functions_fcc_1,
    expected_Hstrain_functions_hcp_1,
    expected_Hstrain_functions_lowsym_1,
)
from utils.helpers import (
    assert_expected_functions,
)

from casm.bset import (
    Variable,
    make_global_dof_matrix_rep,
    make_symmetry_adapted_polynomials,
)


def test_Hstrain_fcc_1():
    key = "Hstrain"
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A"],
        global_dof=[xtal.DoFSetBasis(key)],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    prim = casmconfig.Prim(xtal_prim)
    matrix_rep = make_global_dof_matrix_rep(
        prim=prim,
        key=key,
    )
    basis_set = make_symmetry_adapted_polynomials(
        matrix_rep=matrix_rep,
        variables=[
            Variable(name="{E_{xx}}", key=key),
            Variable(name="{E_{yy}}", key=key),
            Variable(name="{E_{zz}}", key=key),
            Variable(name="{\\sqrt{2}E_{yz}}", key=key),
            Variable(name="{\\sqrt{2}E_{xz}}", key=key),
            Variable(name="{\\sqrt{2}E_{xy}}", key=key),
        ],
        variable_subsets=[[0, 1, 2, 3, 4, 5]],
        min_poly_order=1,
        max_poly_order=3,
    )
    assert len(basis_set) == 10

    # print_expected_functions(basis_set)
    expected = expected_Hstrain_functions_fcc_1()
    assert_expected_functions(basis_set, expected)


def test_Hstrain_hcp_1():
    key = "Hstrain"
    xtal_prim = xtal_prims.HCP(
        r=0.5,
        occ_dof=["A"],
        global_dof=[xtal.DoFSetBasis(key)],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    prim = casmconfig.Prim(xtal_prim)
    matrix_rep = make_global_dof_matrix_rep(
        prim=prim,
        key=key,
    )
    basis_set = make_symmetry_adapted_polynomials(
        matrix_rep=matrix_rep,
        variables=[
            Variable(name="{E_{xx}}", key=key),
            Variable(name="{E_{yy}}", key=key),
            Variable(name="{E_{zz}}", key=key),
            Variable(name="{\\sqrt{2}E_{yz}}", key=key),
            Variable(name="{\\sqrt{2}E_{xz}}", key=key),
            Variable(name="{\\sqrt{2}E_{xy}}", key=key),
        ],
        variable_subsets=[[0, 1, 2, 3, 4, 5]],
        min_poly_order=1,
        max_poly_order=3,
    )
    assert len(basis_set) == 17

    # print_expected_functions(basis_set)
    expected = expected_Hstrain_functions_hcp_1()
    assert_expected_functions(basis_set, expected)


def test_Hstrain_lowsym_1(lowsym_Hstrain_prim):
    key = "Hstrain"
    xtal_prim = lowsym_Hstrain_prim
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    prim = casmconfig.Prim(xtal_prim)
    factor_group_elements = prim.factor_group().elements()
    assert len(factor_group_elements) == 1
    matrix_rep = make_global_dof_matrix_rep(
        prim=prim,
        key=key,
    )
    basis_set = make_symmetry_adapted_polynomials(
        matrix_rep=matrix_rep,
        variables=[
            Variable(name="{E_{xx}}", key=key),
            Variable(name="{E_{yy}}", key=key),
            Variable(name="{E_{zz}}", key=key),
            Variable(name="{\\sqrt{2}E_{yz}}", key=key),
            Variable(name="{\\sqrt{2}E_{xz}}", key=key),
            Variable(name="{\\sqrt{2}E_{xy}}", key=key),
        ],
        variable_subsets=[[0, 1, 2, 3, 4, 5]],
        min_poly_order=1,
        max_poly_order=3,
    )
    assert len(basis_set) == 83

    # print_expected_functions(basis_set)
    expected = expected_Hstrain_functions_lowsym_1()
    assert_expected_functions(basis_set, expected)
