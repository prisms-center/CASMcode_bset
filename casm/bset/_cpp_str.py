from typing import Optional

import numpy as np
from libcasm.clexulator import (
    PrimNeighborList,
)

from ._misc import (
    almost_equal,
    factor_by_mode,
)
from ._polynomial_function import (
    PolynomialFunction,
    Variable,
)


class CppFormatProperties:
    def __init__(
        self,
        coeff_fmt_spec: str = ".10f",
        coeff_atol: float = 1e-10,
    ):
        self.coeff_fmt_spec = coeff_fmt_spec
        """str: Format specification for coefficient printing."""

        self.coeff_atol = coeff_atol
        """float: Tolerance for checking for zeros and ones."""


def is_one(x, atol: float = 1e-10):
    return almost_equal(x, 1.0, abs_tol=atol)


def variable_cpp_str(
    var: Variable,
    prim_neighbor_list: PrimNeighborList,
) -> str:
    nlist_sublat_indices = prim_neighbor_list.sublattice_indices()
    if var.key == "occ":
        # occ DoF / site basis function
        i = var.neighborhood_site_index % len(nlist_sublat_indices)
        b = nlist_sublat_indices[i]
        m = var.site_basis_function_index
        n = var.neighborhood_site_index
        return f"occ_func_{b}_{m}({n})"
    elif var.neighborhood_site_index is not None:
        # local continuous DoF
        c = var.component_index
        n = var.neighborhood_site_index
        return f"{var.key}_var_{c}<Scalar>({n})"
    else:
        # global continuous DoF
        c = var.component_index
        return f"{var.key}_var_{c}<Scalar>()"


def monomial_cpp_str(
    variables: list[Variable],
    coeff: float,
    monomial_exponents: np.ndarray,
    prim_neighbor_list: PrimNeighborList,
    cpp_fmt: CppFormatProperties,
) -> str:
    if (monomial_exponents == np.zeros(monomial_exponents.shape)).all():
        return "1"

    use_mul = False
    cpp_str = ""
    if not is_one(coeff, atol=cpp_fmt.coeff_atol):
        cpp_str += f"{coeff:{cpp_fmt.coeff_fmt_spec}}"
        use_mul = True
    for i_var, x in enumerate(monomial_exponents):
        if x == 0:
            continue
        v = variable_cpp_str(variables[i_var], prim_neighbor_list)
        if use_mul:
            op = "*"
        else:
            op = ""
            use_mul = True
        if x == 1:
            cpp_str += f"{op}{v}"
        else:
            cpp_str += f"{op}pow({v},{x})"
    return cpp_str


def polynomial_sum_cpp_str(
    functions: list[PolynomialFunction],
    normalization: float,
    prim_neighbor_list: PrimNeighborList,
    cpp_fmt: CppFormatProperties,
) -> str:
    if len(functions) == 0:
        return "0."

    prefix_coeff = []
    factored_coeff = []
    for function in functions:
        _prefix_coeff, _factored_coeff = factor_by_mode(function.coeff.data)
        prefix_coeff.append(_prefix_coeff)
        factored_coeff.append(_factored_coeff)

    common_prefix, factored_prefixes = factor_by_mode(np.array(prefix_coeff))

    cpp_str = ""
    if len(functions) > 1:
        if not is_one(common_prefix, atol=cpp_fmt.coeff_atol):
            cpp_str += f"{common_prefix:{cpp_fmt.coeff_fmt_spec}} * "
        cpp_str += "(\n"

    indent = "  "
    orbit_use_plus = False
    for i_func, function in enumerate(functions):
        if len(functions) > 1:
            cpp_str += indent * 2
        if orbit_use_plus:
            cpp_str += " + "
        else:
            orbit_use_plus = True
        if not is_one(factored_prefixes[i_func], atol=cpp_fmt.coeff_atol):
            cpp_str += f"{factored_prefixes[i_func]:{cpp_fmt.coeff_fmt_spec}} * "
        cpp_str += "("
        cluster_use_plus = False
        for i_monomial, _monomial_exponents in enumerate(function.monomial_exponents):
            if cluster_use_plus:
                op = " + "
            else:
                op = ""
                cluster_use_plus = True
            cpp_str += op + monomial_cpp_str(
                variables=function.variables,
                coeff=factored_coeff[i_func][i_monomial],
                monomial_exponents=_monomial_exponents,
                prim_neighbor_list=prim_neighbor_list,
                cpp_fmt=cpp_fmt,
            )
        cpp_str += ")"
        if len(functions) > 1:
            cpp_str += "\n"

    if len(functions) > 1:
        cpp_str += indent * 1 + ")"
    if not is_one(normalization, atol=cpp_fmt.coeff_atol):
        cpp_str += f" / {normalization}"
    return cpp_str


def orbit_bfunc_cpp_str(
    orbit_functions: list[PolynomialFunction],
    orbit_size: int,
    prim_neighbor_list: PrimNeighborList,
    cpp_fmt: CppFormatProperties,
) -> str:
    return polynomial_sum_cpp_str(
        functions=orbit_functions,
        normalization=float(orbit_size),
        prim_neighbor_list=prim_neighbor_list,
        cpp_fmt=cpp_fmt,
    )


def site_bfunc_cpp_str(
    point_functions: list[PolynomialFunction],
    orbit_size: int,
    prim_neighbor_list: PrimNeighborList,
    cpp_fmt: CppFormatProperties,
) -> Optional[str]:
    if len(point_functions) == 0:
        return None
    return polynomial_sum_cpp_str(
        functions=point_functions,
        normalization=float(orbit_size),
        prim_neighbor_list=prim_neighbor_list,
        cpp_fmt=cpp_fmt,
    )
