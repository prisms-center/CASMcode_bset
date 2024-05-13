from typing import Optional

import libcasm.casmglobal as casmglobal
import numpy as np

from casm.bset.misc import almost_equal, almost_int, signof


def make_composition_gram_matrix(
    occ_probs: np.ndarray,
) -> np.ndarray:
    """

    Notes
    -----

    - Method implemented originally by John C. Thomas in CASM v1

    Parameters
    ----------
    occ_probs: array_like, shape=(m,)
        Occupation probabilities, organized by occupation index on a site.

    Returns
    -------
    gram_matrix: numpy.ndarray[numpy.float64[m, m]]
        The Gram matrix, :math:`\pmb{G}`, is used to compute site basis functions,
        :math:`\pmb{B}`, that are orthogonalized according to
        :math:`\pmb{B}^{\top} \pmb{G} \pmb{B} = \pmb{I}`. This Gram
        matrix is constructed so that it should yield orthonormality of the Chebychev
        polynomials when the occupation probabilities are equal, and orthonormality of
        the occupation basis when only one probability is non-zero. It's value is:

        .. math::

            G_{i,i} = p_i + \sum_{j \neq i} (p_i - p_j)^{2}
            G_{i,j] = \sum_{j \neq i} -(p_i - p_j)^{2}

    """
    p = np.array(occ_probs)
    if len(p.shape) != 1:
        raise Exception(
            "Error in make_composition_gram_matrix: invalid occ_probs shape"
        )
    n_occupants = p.shape[0]
    G = np.zeros((n_occupants, n_occupants))
    if not almost_equal(np.sum(p), 1.0, abs_tol=casmglobal.TOL):
        raise Exception(
            "Error in _make_composition_gram_matrix: occ_probs does not sum to 1.0"
        )
    for i in range(n_occupants):
        G[i, i] += p[i]
        for j in range(n_occupants):
            G[i, i] += pow((p[i] - p[j]), 2)
            G[i, j] += -pow((p[i] - p[j]), 2)
    return G


def make_orthonormal_discrete_functions(
    occ_probs: np.ndarray,
    abs_tol: 1e-10,
):
    R"""Construct orthonormal discrete functions

    Notes
    -----

    - Method by John C. Thomas, as implemented in CASM v1
    - Constructs orthonormal discrete functions, as rows of a matrix,
      :math:`\pmb{\varphi}`, with the properties:

      - Row :math:`i` corresponds to the :math:`i`-th site basis function
      - Element :math:`\varphi_ij` is the value of the :math:`i`-th function when the
        site occupation index is the :math:`j`-th possible value.
      - The first row is all ones.
      - In the random alloy at a site composition equal to the input occupation
        probabilities, cluster functions evaluate to 0.
      - In the case of equal occupation probabilities, the discrete Chebychev functions
        are returned.
      - In the case of a single non-zero probability, the "occupation" site basis
        functions are returned.


    The Gram matrix, :math:`\pmb{G}`, is used to compute site basis functions,
    :math:`\pmb{\varphi}`, that are orthogonalized according to

    .. math::

        \pmb{\varphi} \pmb{G} \pmb{\varphi}^{\top} = \pmb{I}

    This Gram matrix is constructed so that it should yield orthonormality of the
    Chebychev polynomials when the occupation probabilities are equal, and
    orthonormality of the occupation basis when only one probability is non-zero.
    The value of the Gram matrix is

    .. math::

        \begin{align}
        G_{ii} &= p_i + \sum_{j \neq i} (p_i - p_j)^{2}, \\
        G_{ij} &= \sum_{j \neq i} -(p_i - p_j)^{2}.
        \end{align}

    Then :math:`\pmb{\varphi}` is calculated as:

    .. math::

        \begin{align}
        \pmb{G} &= \pmb{V} \pmb{S} \pmb{V}^{\top} \\
        \pmb{X} &= \pmb{V} \pmb{S}^{-1/2} \pmb{V}^{\top} \\
        \pmb{X}^{-1} \pmb{Y} &= \pmb{Q} \pmb{R} \\
        \pmb{\varphi} &= (\pmb{X} \pmb{Q})^{\top}
        \end{align}

    Here, :math:`\pmb{Y}` is a "seed" matrix, which is either the discrete Chebychev
    polynomials (if :math:`\mathrm{max}(p_i) < 0.75`), or the "occupation" site basis
    functions (otherwise).

    Finally, the convention for the sign for each basis function (row of
    :math:`\pmb{\varphi}`) is that the last occurrence of the maximum value should by
    positive.


    Parameters
    ----------
    occ_probs: array_like, shape=(m,)
        Occupation probabilities, organized by occupation index on a site.

    abs_tol: float = 1e-10
        A absolute tolerance for comparing values.

    Returns
    -------
    phi: np.ndarray[np.float64[m, m]]
        The orthonormal discrete function matrix, :math:`\pmb{\varphi}`, a
        :math:`m \times m` matrix, with :math:`m` being the number of occupants allowed
        on the site and element :math:`\varphi_ij` being the value of the
        :math:`i`-th function when the site occupation index is the :math:`j`-th
        possible value.

    """
    gram_matrix = make_composition_gram_matrix(occ_probs=occ_probs)

    if not np.allclose(gram_matrix, gram_matrix.T, atol=abs_tol):
        raise Exception(
            "Error in make_orthonormal_discrete_functions: gram_matrix is not symmetric"
        )
    c = np.diag(gram_matrix)
    n_occupants = c.shape[0]

    # ** step 1: find a generic 'phi' matrix
    S, V = np.linalg.eigh(gram_matrix)
    if np.min(S) < -np.abs(abs_tol):
        raise Exception(
            "Error in make_orthonormal_discrete_functions: "
            "gram_matrix is not positive definite"
        )

    phi = V @ np.diag(np.sqrt(1.0 / S)) @ V.T

    c_max = max(c)
    #  step 2: Make seed basis.
    #  This will be used to seed optimized orientation of 'phi'
    if c_max < 0.75:
        tcos_table = np.zeros((n_occupants, n_occupants))
        for i in range(n_occupants):
            tcos_table[i, 0] = 1.0
            x = np.cos(np.pi * (i + 0.5) / n_occupants)
            for j in range(1, n_occupants):
                tcos_table[i, j] = x * tcos_table[i, j - 1]

        # QR decomposition of tcos_table yields Q matrix that holds chebychev basis
        Q, R = np.linalg.qr(tcos_table)
        tseed = Q
    else:
        # there is an outlier probability --> set seed matrix to occupation basis,
        # with specis 'i==max_ind' as solvent
        curr_i = 0
        tseed = np.zeros((n_occupants, n_occupants))
        c_max_index = np.where(c == c_max)[0]
        for i in range(phi.shape[0]):
            tseed[i, 0] = 1.0
            if i == c_max_index:
                continue
            for j in range(i, phi.shape[1]):
                if curr_i + 1 == j:
                    tseed[i, j] = 1.0
            curr_i += 1

    # ** step 3: use seed matric to find a unitary matrix that rotates 'phi' a more
    # optimal form Assume: tseed = phi * Q, with unitary Q approximate Q by finding
    # QR decomposition of (phi.inverse() * tseed)
    # Eigen::MatrixXd Q = (phi.inverse() * tseed).householderQr().householderQ();

    Q, R = np.linalg.qr(np.linalg.inv(phi) @ tseed)

    # Rotate 'phi'
    phi = phi @ Q

    # Sign convention
    for i in range(phi.shape[1]):
        sign_change = 1
        max_abs = 0.0
        for j in range(phi.shape[0]):
            if np.abs(phi[j, i]) > (max_abs - abs_tol):
                max_abs = np.abs(phi[j, i])
                sign_change = signof(phi[j, i], abs_tol=abs_tol)
        phi[:, i] *= sign_change

    for i in range(phi.shape[0]):
        for j in range(phi.shape[1]):
            if almost_int(phi[i, j], abs_tol=abs_tol):
                phi[i, j] = round(phi[i, j])

    return phi.transpose()


def get_occ_site_functions(
    occ_site_functions: list[dict],
    sublattice_index: int,
    site_function_index: Optional[int],
):
    """Get a specified occupation site function

    Parameters
    ----------
    occ_site_functions: list[dict]
        List of occupation site basis functions. For each sublattice with discrete
        site basis functions, must include:

        - `"sublattice_index"`: int, index of the sublattice
        - `"functions"`: list[list[float]], list of the site basis function values, as
          ``value = functions[function_index][occupant_index]``.

    sublattice_index: int
        The sublattice to get a site function for.

    site_function_index: Optional[int] = None
        The particular site function to get. If None, get all site functions.

    Returns
    -------
    phi: Optional[np.ndarray]
        If `site_function_index` is None, returns the `shape=(n_occupants, n_occupants)`
        array with rows representing site functions and columns representing occupant
        index, if it exists for the specified sublattice; else returns None. If
        `site_function_index` is not None, returns the `shape=(n_occupants,)` array
        representing the `site_function_index`-th site function, with indices
        representing occupant index, on the specified sublattice.
    """
    for site_funcs in occ_site_functions:
        if site_funcs["sublattice_index"] == sublattice_index:
            site_functions = np.array(site_funcs["functions"])
            if sublattice_index is None:
                return site_functions
            elif site_function_index < 0:
                raise Exception(
                    "Error in get_occ_site_functions: "
                    f"invalid site_function_index={site_function_index}"
                )
            elif site_function_index < site_functions.shape[0]:
                return site_functions[site_function_index, :]
            else:
                raise Exception(
                    "Error in get_occ_site_functions: "
                    f"invalid site_function_index={site_function_index}"
                )
    return None
