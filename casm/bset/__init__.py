from ._matrix_rep import (
    make_global_dof_matrix_rep,
)
from ._misc import (
    factor_by_mode,
    irrational_to_tex_string,
)
from ._polynomial_function import (
    FunctionRep,
    PolynomialFunction,
    Variable,
    gram_schmidt,
    is_canonical_coord,
    make_canonical_coord,
    make_symmetry_adapted_polynomials,
    monomial_exponents_to_tensor_coord,
    monomial_inner_product,
    tensor_coord_to_monomial_exponents,
)
