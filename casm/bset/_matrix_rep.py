import libcasm.clexulator as casmclex
import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
import numpy as np


def make_global_dof_matrix_rep(
    xtal_prim: xtal.Prim,
    dof_key: str,
    eps: float = 1e-14,
):
    """Generate the group matrix representation for a global DoF

    Parameters
    ----------
    xtal_prim: :class:`~libcasm.xtal.Prim`
        The Prim
    dof_key: str
        The name of the global DoF type. Must exist in `xtal_prim`.
    eps: float = 1e-14
        Tolerance used for identifying zeros in the matrix representations

    Returns
    -------
    matrix_rep: list[np.ndarray[np.float]]
        Matrix representation for the factor group acting on global DoF in
        the prim basis.
    """
    prim = casmconfig.Prim(xtal_prim)

    T_prim = np.eye(3, dtype=int)
    supercell = casmconfig.make_canonical_supercell(casmconfig.Supercell(prim, T_prim))
    configuration = casmconfig.Configuration(
        supercell=supercell,
    )
    supercell_factor_group = casmconfig.make_invariant_subgroup(
        configuration=configuration,
    )

    # construct Hstrain DoFSpace with default basis
    dof_space = casmclex.DoFSpace(
        dof_key=dof_key,
        xtal_prim=xtal_prim,
    )

    matrix_rep = casmconfig.make_dof_space_rep(
        group=supercell_factor_group,
        dof_space=dof_space,
    )

    for i in range(len(matrix_rep)):
        matrix_rep[i][np.abs(matrix_rep[i]) < eps] = 0.0
    return matrix_rep
