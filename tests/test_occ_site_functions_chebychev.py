import json

import numpy as np
from utils.helpers import (
    assert_expected_cluster_functions_detailed,
    make_discrete_magnetic_atom,
)

import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
from casm.bset import (
    build_cluster_functions,
)


def test_chebychev_occ_fcc_1a(session_shared_datadir):
    """Baseline test - chebychev basis functions

    To be compared with test_occ_fcc_1b,
    where the occupants on i_sublat=2 are ordered differently.
    """

    xtal_prim = xtal.Prim(
        lattice=xtal.Lattice(
            column_vector_matrix=np.eye(3),
        ),
        coordinate_frac=np.array(
            [
                [0.0, 0.0, 0.0],
                [0.0, 0.5, 0.5],
                [0.5, 0.0, 0.5],
                [0.5, 0.5, 0.0],
            ]
        ).T,
        occ_dof=[
            ["A", "B"],
            ["B", "C"],
            ["B", "C"],
            ["B", "C"],
        ],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    builder = build_cluster_functions(
        prim=xtal_prim,
        clex_basis_specs={
            "cluster_specs": {
                "orbit_branch_specs": {
                    "2": {"max_length": 1.01},
                    "3": {"max_length": 1.01},
                },
            },
            "basis_function_specs": {
                "dof_specs": {"occ": {"site_basis_functions": "chebychev"}}
            },
        },
        verbose=False,
    )
    functions, clusters = (builder.functions, builder.clusters)

    _occ_site_functions = builder.occ_site_functions.copy()
    print(xtal.pretty_json(_occ_site_functions))

    for b in [0, 1, 2, 3]:
        expected = np.array(
            [
                [1.0, 1.0],
                [-1.0, 1.0],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    # import os
    # import pathlib
    # from utils.helpers import print_expected_cluster_functions_detailed
    #
    # print_expected_cluster_functions_detailed(
    #     functions,
    #     file=pathlib.Path(os.path.realpath(__file__)).parent
    #     / "data"
    #     / "expected_occ_site_functions_fcc_1_chebychev.json",
    # )
    with open(
        session_shared_datadir / "expected_occ_site_functions_fcc_1_chebychev.json"
    ) as f:
        assert_expected_cluster_functions_detailed(functions, clusters, json.load(f))


def test_chebychev_occ_fcc_1b(session_shared_datadir):
    """Change order of occupants on i_sublat=2

    This affects the site basis function (phi) values on that sublattice,
    but the generated functions are the same
    (because they are functions of the phi which remain in the same order).
    """
    xtal_prim = xtal.Prim(
        lattice=xtal.Lattice(
            column_vector_matrix=np.eye(3),
        ),
        coordinate_frac=np.array(
            [
                [0.0, 0.0, 0.0],
                [0.0, 0.5, 0.5],
                [0.5, 0.0, 0.5],
                [0.5, 0.5, 0.0],
            ]
        ).T,
        occ_dof=[
            ["A", "B"],
            ["B", "C"],
            ["C", "B"],
            ["B", "C"],
        ],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    builder = build_cluster_functions(
        prim=xtal_prim,
        clex_basis_specs={
            "cluster_specs": {
                "orbit_branch_specs": {
                    "2": {"max_length": 1.01},
                    "3": {"max_length": 1.01},
                },
            },
            "basis_function_specs": {
                "dof_specs": {"occ": {"site_basis_functions": "chebychev"}}
            },
        },
        verbose=False,
    )
    functions, clusters = (builder.functions, builder.clusters)

    _occ_site_functions = builder.occ_site_functions.copy()
    print(xtal.pretty_json(_occ_site_functions))

    for b in [0, 1, 3]:
        expected = np.array(
            [
                [1.0, 1.0],
                [-1.0, 1.0],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    for b in [2]:
        expected = np.array(
            [
                [1.0, 1.0],
                [1.0, -1.0],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    ## Compare to functions generated in test 1a ##

    # import os
    # import pathlib
    # from utils.helpers import print_expected_cluster_functions_detailed
    #
    # print_expected_cluster_functions_detailed(
    #     functions,
    #     file=pathlib.Path(os.path.realpath(__file__)).parent
    #     / "data"
    #     / "expected_occ_site_functions_fcc_1b_chebychev.json",
    # )
    with open(
        session_shared_datadir / "expected_occ_site_functions_fcc_1_chebychev.json"
    ) as f:
        assert_expected_cluster_functions_detailed(functions, clusters, json.load(f))


def test_chebychev_occ_fcc_2a(session_shared_datadir):
    """Baseline test - ternary chebychev basis functions

    To be compared with test_occ_fcc_2b,
    where the occupants on i_sublat=2 are ordered differently.
    """

    xtal_prim = xtal.Prim(
        lattice=xtal.Lattice(
            column_vector_matrix=np.eye(3),
        ),
        coordinate_frac=np.array(
            [
                [0.0, 0.0, 0.0],
                [0.0, 0.5, 0.5],
                [0.5, 0.0, 0.5],
                [0.5, 0.5, 0.0],
            ]
        ).T,
        occ_dof=[
            ["A", "B"],
            ["B", "C", "D"],
            ["B", "C", "D"],
            ["B", "C", "D"],
        ],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    builder = build_cluster_functions(
        prim=xtal_prim,
        clex_basis_specs={
            "cluster_specs": {
                "orbit_branch_specs": {
                    "2": {"max_length": 1.01},
                    "3": {"max_length": 1.01},
                },
            },
            "basis_function_specs": {
                "dof_specs": {"occ": {"site_basis_functions": "chebychev"}}
            },
        },
        verbose=False,
    )
    functions, clusters = (builder.functions, builder.clusters)

    _occ_site_functions = builder.occ_site_functions.copy()
    print(xtal.pretty_json(_occ_site_functions))

    for b in [0]:
        expected = np.array(
            [
                [1.0, 1.0],
                [-1.0, 1.0],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    for b in [1, 2, 3]:
        expected = np.array(
            [
                [1.0, 1.0, 1.0],
                [-1.2247448713915892, 0.0, 1.2247448713915892],
                [-0.7071067811865479, 1.414213562373095, -0.7071067811865472],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    # import os
    # import pathlib
    # from utils.helpers import print_expected_cluster_functions_detailed
    #
    # print_expected_cluster_functions_detailed(
    #     functions,
    #     file=pathlib.Path(os.path.realpath(__file__)).parent
    #     / "data"
    #     / "expected_occ_site_functions_fcc_2_chebychev.json",
    # )
    with open(
        session_shared_datadir / "expected_occ_site_functions_fcc_2_chebychev.json"
    ) as f:
        assert_expected_cluster_functions_detailed(functions, clusters, json.load(f))


def test_chebychev_occ_fcc_2b(session_shared_datadir):
    """Change order of occupants

    This affects the site basis function (phi) values on that sublattice,
    but the generated functions are the same as test_occ_fcc_2a
    (because they are functions of the phi which remain in the same order).
    """

    occ_dof = [
        ["A", "B"],
        ["B", "C", "D"],
        ["B", "D", "C"],
        ["C", "D", "B"],
    ]
    xtal_prim = xtal.Prim(
        lattice=xtal.Lattice(
            column_vector_matrix=np.eye(3),
        ),
        coordinate_frac=np.array(
            [
                [0.0, 0.0, 0.0],
                [0.0, 0.5, 0.5],
                [0.5, 0.0, 0.5],
                [0.5, 0.5, 0.0],
            ]
        ).T,
        occ_dof=occ_dof,
    )
    prim = casmconfig.Prim(xtal_prim)
    occ_symgroup_rep = prim.occ_symgroup_rep

    for i_factor_group, occ_op_rep in enumerate(occ_symgroup_rep):
        site_rep = prim.integral_site_coordinate_symgroup_rep[i_factor_group]
        for i_sublat_before, occ_sublat_rep in enumerate(occ_op_rep):
            site_before = xtal.IntegralSiteCoordinate(i_sublat_before, [0, 0, 0])
            site_after = site_rep * site_before
            i_sublat_after = site_after.sublattice()
            for i_occ_before in range(len(occ_sublat_rep)):
                i_occ_after = occ_sublat_rep[i_occ_before]
                assert (
                    occ_dof[i_sublat_before][i_occ_before]
                    == occ_dof[i_sublat_after][i_occ_after]
                )

    # print(xtal.pretty_json(xtal_prim.to_dict()))

    builder = build_cluster_functions(
        prim=xtal_prim,
        clex_basis_specs={
            "cluster_specs": {
                "orbit_branch_specs": {
                    "2": {"max_length": 1.01},
                    "3": {"max_length": 1.01},
                },
            },
            "basis_function_specs": {
                "dof_specs": {"occ": {"site_basis_functions": "chebychev"}}
            },
        },
        verbose=False,
    )
    functions, clusters = (builder.functions, builder.clusters)

    _occ_site_functions = builder.occ_site_functions.copy()
    print(xtal.pretty_json(_occ_site_functions))

    for b in [0]:
        expected = np.array(
            [
                [1.0, 1.0],
                [-1.0, 1.0],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    for b in [1]:
        # B, C, D
        expected = np.array(
            [
                [1.0, 1.0, 1.0],
                [-1.2247448713915892, 0.0, 1.2247448713915892],
                [-0.7071067811865479, 1.414213562373095, -0.7071067811865472],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    for b in [2]:
        # B, D, C
        expected = np.array(
            [
                [1.0, 1.0, 1.0],
                [-1.2247448713915892, 1.2247448713915892, 0.0],
                [-0.7071067811865479, -0.7071067811865472, 1.414213562373095],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    for b in [3]:
        # C, D, B
        expected = np.array(
            [
                [1.0, 1.0, 1.0],
                [0.0, 1.2247448713915892, -1.2247448713915892],
                [1.414213562373095, -0.7071067811865472, -0.7071067811865479],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    # import os
    # import pathlib
    # from utils.helpers import print_expected_cluster_functions_detailed
    #
    # print_expected_cluster_functions_detailed(
    #     functions,
    #     file=pathlib.Path(os.path.realpath(__file__)).parent
    #     / "data"
    #     / "expected_occ_site_functions_fcc_2_chebychev.json",
    # )
    with open(
        session_shared_datadir / "expected_occ_site_functions_fcc_2_chebychev.json"
    ) as f:
        assert_expected_cluster_functions_detailed(functions, clusters, json.load(f))


def test_chebychev_occ_fcc_3a(session_shared_datadir):
    """Baseline - prim with chebychev DoF with chemistry and magspin

    To be compared with test_chebychev_occ_fcc_3b,
    where the occupants are ordered differently.
    """

    # Lattice vectors
    lattice = xtal.Lattice(np.eye(3))

    # Basis sites positions, as columns of a matrix,
    # in fractional coordinates with respect to the lattice vectors
    coordinate_frac = np.array(
        [
            [0.0, 0.0, 0.0],
            [0.0, 0.5, 0.5],
            [0.5, 0.0, 0.5],
            [0.5, 0.5, 0.0],
        ]
    ).transpose()

    # Occupation degrees of freedom (DoF)
    occupants = {
        "A.up": make_discrete_magnetic_atom(name="A", value=1, flavor="C"),
        "A.down": make_discrete_magnetic_atom(name="A", value=-1, flavor="C"),
        "B.up": make_discrete_magnetic_atom(name="B", value=1, flavor="C"),
        "B.down": make_discrete_magnetic_atom(name="B", value=-1, flavor="C"),
    }
    occ_dof = [
        ["A.up", "A.down"],
        ["A.up", "A.down", "B.up", "B.down"],
        ["A.up", "A.down", "B.up", "B.down"],
        ["A.up", "A.down", "B.up", "B.down"],
    ]

    xtal_prim = xtal.Prim(
        lattice=lattice,
        coordinate_frac=coordinate_frac,
        occ_dof=occ_dof,
        occupants=occupants,
    )
    prim = casmconfig.Prim(xtal_prim)
    assert len(prim.factor_group.elements) == 96
    occ_symgroup_rep = prim.occ_symgroup_rep

    for i_factor_group, occ_op_rep in enumerate(occ_symgroup_rep):
        site_rep = prim.integral_site_coordinate_symgroup_rep[i_factor_group]
        for i_sublat_before, occ_sublat_rep in enumerate(occ_op_rep):
            site_before = xtal.IntegralSiteCoordinate(i_sublat_before, [0, 0, 0])
            site_after = site_rep * site_before
            i_sublat_after = site_after.sublattice()
            for i_occ_before in range(len(occ_sublat_rep)):
                i_occ_after = occ_sublat_rep[i_occ_before]

                orientation_name_before = occ_dof[i_sublat_before][i_occ_before]
                orientation_name_after = occ_dof[i_sublat_after][i_occ_after]

                # assert occupants map (chemical name match)
                assert (
                    occupants[orientation_name_before].name()
                    == occupants[orientation_name_after].name()
                )

    # print(xtal.pretty_json(xtal_prim.to_dict()))

    builder = build_cluster_functions(
        prim=xtal_prim,
        clex_basis_specs={
            "cluster_specs": {
                "orbit_branch_specs": {
                    "2": {"max_length": 1.01},
                    "3": {"max_length": 1.01},
                },
            },
            "basis_function_specs": {
                "dof_specs": {"occ": {"site_basis_functions": "chebychev"}}
            },
        },
        verbose=False,
    )
    functions, clusters = (builder.functions, builder.clusters)

    _occ_site_functions = builder.occ_site_functions.copy()
    print(xtal.pretty_json(_occ_site_functions))

    for b in [0]:
        # "A.up", "A.down"
        expected = np.array(
            [
                [1.0, 1.0],
                [-1.0, 1.0],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    for b in [1, 2, 3]:
        # "A.up", "A.down", "B.up", "B.down"
        expected = np.array(
            [
                [1.0, 1.0, 1.0, 1.0],
                [
                    -1.3065629648763761,
                    -0.5411961001461969,
                    0.5411961001461968,
                    1.3065629648763764,
                ],
                [1.0, -1.0, -1.0, 1.0],
                [
                    0.5411961001461976,
                    -1.3065629648763766,
                    1.306562964876376,
                    -0.5411961001461969,
                ],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    # import os
    # import pathlib
    # from utils.helpers import print_expected_cluster_functions_detailed
    #
    # print_expected_cluster_functions_detailed(
    #     functions,
    #     file=pathlib.Path(os.path.realpath(__file__)).parent
    #     / "data"
    #     / "expected_occ_site_functions_fcc_3_chebychev.json",
    # )
    with open(
        session_shared_datadir / "expected_occ_site_functions_fcc_3_chebychev.json"
    ) as f:
        assert_expected_cluster_functions_detailed(functions, clusters, json.load(f))


def test_chebychev_occ_fcc_3b(session_shared_datadir):
    """Change order of occupants

    This affects the site basis function (phi) values on that sublattice,
    but the generated functions are the same as test_chebychev_occ_fcc_3a
    (because they are functions of the phi which remain in the same order).
    """

    # Lattice vectors
    lattice = xtal.Lattice(np.eye(3))

    # Basis sites positions, as columns of a matrix,
    # in fractional coordinates with respect to the lattice vectors
    coordinate_frac = np.array(
        [
            [0.0, 0.0, 0.0],
            [0.0, 0.5, 0.5],
            [0.5, 0.0, 0.5],
            [0.5, 0.5, 0.0],
        ]
    ).transpose()

    # Occupation degrees of freedom (DoF)
    occupants = {
        "A.up": make_discrete_magnetic_atom(name="A", value=1, flavor="C"),
        "A.down": make_discrete_magnetic_atom(name="A", value=-1, flavor="C"),
        "B.up": make_discrete_magnetic_atom(name="B", value=1, flavor="C"),
        "B.down": make_discrete_magnetic_atom(name="B", value=-1, flavor="C"),
    }
    occ_dof = [
        ["A.up", "A.down"],
        ["A.up", "A.down", "B.up", "B.down"],
        ["B.up", "B.down", "A.up", "A.down"],
        ["A.up", "A.down", "B.up", "B.down"],
    ]

    xtal_prim = xtal.Prim(
        lattice=lattice,
        coordinate_frac=coordinate_frac,
        occ_dof=occ_dof,
        occupants=occupants,
    )
    prim = casmconfig.Prim(xtal_prim)
    assert len(prim.factor_group.elements) == 96

    occ_symgroup_rep = prim.occ_symgroup_rep

    for i_factor_group, occ_op_rep in enumerate(occ_symgroup_rep):
        site_rep = prim.integral_site_coordinate_symgroup_rep[i_factor_group]
        for i_sublat_before, occ_sublat_rep in enumerate(occ_op_rep):
            site_before = xtal.IntegralSiteCoordinate(i_sublat_before, [0, 0, 0])
            site_after = site_rep * site_before
            i_sublat_after = site_after.sublattice()
            for i_occ_before in range(len(occ_sublat_rep)):
                i_occ_after = occ_sublat_rep[i_occ_before]

                orientation_name_before = occ_dof[i_sublat_before][i_occ_before]
                orientation_name_after = occ_dof[i_sublat_after][i_occ_after]

                # assert occupants map (chemical name match)
                assert (
                    occupants[orientation_name_before].name()
                    == occupants[orientation_name_after].name()
                )

    # print(xtal.pretty_json(xtal_prim.to_dict()))

    builder = build_cluster_functions(
        prim=xtal_prim,
        clex_basis_specs={
            "cluster_specs": {
                "orbit_branch_specs": {
                    "2": {"max_length": 1.01},
                    "3": {"max_length": 1.01},
                },
            },
            "basis_function_specs": {
                "dof_specs": {"occ": {"site_basis_functions": "chebychev"}}
            },
        },
        verbose=False,
    )
    functions, clusters = (builder.functions, builder.clusters)

    _occ_site_functions = builder.occ_site_functions.copy()
    print(xtal.pretty_json(_occ_site_functions))

    for b in [0]:
        # "A.up", "A.down"
        expected = np.array(
            [
                [1.0, 1.0],
                [-1.0, 1.0],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    for b in [1]:
        # "A.up", "A.down", "B.up", "B.down"
        expected = np.array(
            [
                [1.0, 1.0, 1.0, 1.0],
                [
                    -1.3065629648763761,
                    -0.5411961001461969,
                    0.5411961001461968,
                    1.3065629648763764,
                ],
                [1.0, -1.0, -1.0, 1.0],
                [
                    0.5411961001461976,
                    -1.3065629648763766,
                    1.306562964876376,
                    -0.5411961001461969,
                ],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    for b in [2]:
        # "A.up", "A.down", "B.up", "B.down"
        expected = np.array(
            [
                [1.0, 1.0, 1.0, 1.0],
                [
                    0.5411961001461968,
                    1.3065629648763764,
                    -1.3065629648763761,
                    -0.5411961001461969,
                ],
                [-1.0, 1.0, 1.0, -1.0],
                [
                    1.306562964876376,
                    -0.5411961001461969,
                    0.5411961001461976,
                    -1.3065629648763766,
                ],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    for b in [3]:
        # "A.up", "A.down", "B.up", "B.down"
        expected = np.array(
            [
                [1.0, 1.0, 1.0, 1.0],
                [
                    -1.3065629648763761,
                    -0.5411961001461969,
                    0.5411961001461968,
                    1.3065629648763764,
                ],
                [1.0, -1.0, -1.0, 1.0],
                [
                    0.5411961001461976,
                    -1.3065629648763766,
                    1.306562964876376,
                    -0.5411961001461969,
                ],
            ]
        )
        assert np.allclose(builder.occ_site_functions[b]["value"], expected)

    # import os
    # import pathlib
    # from utils.helpers import print_expected_cluster_functions_detailed
    #
    # print_expected_cluster_functions_detailed(
    #     functions,
    #     file=pathlib.Path(os.path.realpath(__file__)).parent
    #     / "data"
    #     / "expected_occ_site_functions_fcc_3_chebychev.json",
    # )
    with open(
        session_shared_datadir / "expected_occ_site_functions_fcc_3_chebychev.json"
    ) as f:
        assert_expected_cluster_functions_detailed(functions, clusters, json.load(f))
