import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims
import libcasm.configuration as casmconfig

from casm.bset import (
    Variable,
    make_global_dof_matrix_rep,
    make_symmetry_adapted_polynomials,
)

from utils.helpers import (
    assert_expected_functions,
    print_expected_functions,
)
from utils.expected_Hstrain_functions import (
    expected_Hstrain_functions_fcc_1,
    expected_Hstrain_functions_hcp_1,
    expected_Hstrain_functions_lowsym_1,
)


def test_Hstrain_fcc_1():
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A"],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    prim = casmconfig.Prim(xtal_prim)
    matrix_rep = make_global_dof_matrix_rep(
        prim=prim,
        key="Hstrain",
    )
    basis_set = make_symmetry_adapted_polynomials(
        matrix_rep=matrix_rep,
        variables=[
            Variable(name="{E_{xx}}"),
            Variable(name="{E_{yy}}"),
            Variable(name="{E_{zz}}"),
            Variable(name="{\\sqrt{2}E_{yz}}"),
            Variable(name="{\\sqrt{2}E_{xz}}"),
            Variable(name="{\\sqrt{2}E_{xy}}"),
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
    xtal_prim = xtal_prims.HCP(
        r=0.5,
        occ_dof=["A"],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    prim = casmconfig.Prim(xtal_prim)
    matrix_rep = make_global_dof_matrix_rep(
        prim=prim,
        key="Hstrain",
    )
    basis_set = make_symmetry_adapted_polynomials(
        matrix_rep=matrix_rep,
        variables=[
            Variable(name="{E_{xx}}"),
            Variable(name="{E_{yy}}"),
            Variable(name="{E_{zz}}"),
            Variable(name="{\\sqrt{2}E_{yz}}"),
            Variable(name="{\\sqrt{2}E_{xz}}"),
            Variable(name="{\\sqrt{2}E_{xy}}"),
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
    xtal_prim = lowsym_Hstrain_prim
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    prim = casmconfig.Prim(xtal_prim)
    factor_group_elements = prim.factor_group().elements()
    assert len(factor_group_elements) == 1
    matrix_rep = make_global_dof_matrix_rep(
        prim=prim,
        key="Hstrain",
    )
    basis_set = make_symmetry_adapted_polynomials(
        matrix_rep=matrix_rep,
        variables=[
            Variable(name="{E_{xx}}"),
            Variable(name="{E_{yy}}"),
            Variable(name="{E_{zz}}"),
            Variable(name="{\\sqrt{2}E_{yz}}"),
            Variable(name="{\\sqrt{2}E_{xz}}"),
            Variable(name="{\\sqrt{2}E_{xy}}"),
        ],
        variable_subsets=[[0, 1, 2, 3, 4, 5]],
        min_poly_order=1,
        max_poly_order=3,
    )
    assert len(basis_set) == 83

    # print_expected_functions(basis_set)
    expected = expected_Hstrain_functions_lowsym_1()
    assert_expected_functions(basis_set, expected)
