import libcasm.xtal as xtal
import numpy as np
import pytest

# Pytest will rewrite assertions in test modules, but not elsewhere.
# This tells pytest to also rewrite assertions in utils/helpers.py.
#
pytest.register_assert_rewrite("utils.helpers")


@pytest.fixture
def lowsym_Hstrain_prim():
    return xtal.Prim(
        lattice=xtal.Lattice(
            np.array(
                [
                    [
                        1.0,
                        0.3,
                        0.4,
                    ],  # a
                    [
                        0.0,
                        1.2,
                        0.5,
                    ],  # b
                    [
                        0.0,
                        0.0,
                        1.4,
                    ],  # c
                ]
            ).transpose()
        ),
        coordinate_frac=np.array(
            [
                [
                    0.0,
                    0.0,
                    0.0,
                ],
                [
                    0.4,
                    0.5,
                    0.6,
                ],
                [
                    0.24,
                    0.25,
                    0.23,
                ],
            ]
        ).transpose(),
        occ_dof=[["A"], ["A"], ["A"]],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )


@pytest.fixture
def lowsym_disp_prim():
    return xtal.Prim(
        lattice=xtal.Lattice(
            np.array(
                [
                    [
                        1.0,
                        0.3,
                        0.4,
                    ],  # a
                    [
                        0.0,
                        1.2,
                        0.5,
                    ],  # b
                    [
                        0.0,
                        0.0,
                        1.4,
                    ],  # c
                ]
            ).transpose()
        ),
        coordinate_frac=np.array(
            [
                [
                    0.0,
                    0.0,
                    0.0,
                ],
                [
                    0.4,
                    0.5,
                    0.6,
                ],
                [
                    0.24,
                    0.25,
                    0.23,
                ],
            ]
        ).transpose(),
        occ_dof=[["A"], ["A"], ["A"]],
        local_dof=[
            [xtal.DoFSetBasis("disp")],
            [xtal.DoFSetBasis("disp")],
            [xtal.DoFSetBasis("disp")],
        ],
    )
