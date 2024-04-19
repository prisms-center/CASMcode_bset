import json

import libcasm.xtal.prims as xtal_prims

# from utils.expected_disp_functions import (
#     expected_occ_functions_fcc_1,
#     expected_occ_functions_hcp_1,
#     expected_occ_functions_lowsym_1,
# )
from utils.helpers import (
    assert_expected_cluster_functions_detailed,
)

from casm.bset import (
    make_periodic_cluster_functions,
)


def test_occ_fcc_1(session_shared_datadir):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A", "B", "C"],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    clusters, functions, prim_neighbor_list = make_periodic_cluster_functions(
        xtal_prim=xtal_prim, max_length=[0.0, 0.0, 1.01, 1.01], global_max_poly_order=4
    )

    # print_expected_cluster_functions(functions)

    assert len(clusters) == 4
    assert len(clusters[0]) == 1
    assert len(clusters[1]) == 1
    assert len(clusters[2]) == 6
    assert len(clusters[3]) == 8

    # functions: list[list[list[PolynomialFunction]]]
    #     Polynomial functions, where ``functions[i_orbit][i_equiv][i_func]``,
    #     is the `i_func`-th function on the cluster given by
    #     `clusters[i_orbit][i_equiv]`.
    assert len(functions) == 4
    assert len(functions[0]) == 1
    assert len(functions[0][0]) == 0
    assert len(functions[1]) == 1
    assert len(functions[1][0]) == 2  # 1
    assert len(functions[2]) == 6
    assert len(functions[2][0]) == 3  # 1
    assert len(functions[3]) == 8
    assert len(functions[3][0]) == 4  # 1

    # print_expected_cluster_functions_detailed(
    #     functions,
    #     file=pathlib.Path(os.path.realpath(__file__)).parent
    #     / "data"
    #     / "expected_occ_functions_fcc_1.json",
    # )
    with open(session_shared_datadir / "expected_occ_functions_fcc_1.json") as f:
        assert_expected_cluster_functions_detailed(functions, json.load(f))


def test_occ_hcp_1(session_shared_datadir):
    xtal_prim = xtal_prims.HCP(
        r=0.5,
        occ_dof=["A", "B", "C"],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    clusters, functions, prim_neighbor_list = make_periodic_cluster_functions(
        xtal_prim=xtal_prim, max_length=[0.0, 0.0, 1.01, 1.01], global_max_poly_order=4
    )

    # print_expected_cluster_functions(functions)

    assert len(clusters) == 7
    assert clusters[0][0].size() == 0  # null
    assert len(clusters[0]) == 1
    assert clusters[1][0].size() == 1  # point
    assert len(clusters[1]) == 2
    assert clusters[2][0].size() == 2  # pair (out of basal plane)
    assert len(clusters[2]) == 6
    assert clusters[3][0].size() == 2  # pair (in basal plane)
    assert len(clusters[3]) == 6
    assert clusters[4][0].size() == 3  # triplet (in basal plane)
    assert len(clusters[4]) == 2
    assert clusters[5][0].size() == 3  # triplet (in basal plane)
    assert len(clusters[5]) == 2
    assert clusters[6][0].size() == 3  # triplet (out of basal plane)
    assert len(clusters[6]) == 12

    assert len(functions) == 7
    assert len(functions[0]) == 1
    assert len(functions[0][0]) == 0
    assert len(functions[1]) == 2
    assert len(functions[1][0]) == 2
    assert len(functions[2]) == 6
    assert len(functions[2][0]) == 3
    assert len(functions[3]) == 6
    assert len(functions[3][0]) == 3
    assert len(functions[4]) == 2
    assert len(functions[4][0]) == 4
    assert len(functions[5]) == 2
    assert len(functions[5][0]) == 4
    assert len(functions[6]) == 12
    assert len(functions[6][0]) == 6

    # print_expected_cluster_functions_detailed(
    #     functions,
    #     file=pathlib.Path(os.path.realpath(__file__)).parent
    #     / "data"
    #     / "expected_occ_functions_hcp_1.json",
    # )
    with open(session_shared_datadir / "expected_occ_functions_hcp_1.json") as f:
        assert_expected_cluster_functions_detailed(functions, json.load(f))


def test_occ_lowsym_1(lowsym_occ_prim, session_shared_datadir):
    xtal_prim = lowsym_occ_prim
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    clusters, functions, prim_neighbor_list = make_periodic_cluster_functions(
        xtal_prim=xtal_prim, max_length=[0.0, 0.0, 1.01, 1.01], global_max_poly_order=4
    )

    # print_expected_cluster_functions(functions)

    assert len(clusters) == 24
    assert len(functions) == 24

    assert len(functions[0][0]) == 0
    assert len(functions[1][0]) == 1
    assert len(functions[2][0]) == 1
    assert len(functions[3][0]) == 1
    assert len(functions[4][0]) == 1
    assert len(functions[5][0]) == 1
    assert len(functions[6][0]) == 1
    assert len(functions[7][0]) == 1
    assert len(functions[8][0]) == 1
    assert len(functions[9][0]) == 1
    assert len(functions[10][0]) == 1
    assert len(functions[11][0]) == 1
    assert len(functions[12][0]) == 1
    assert len(functions[13][0]) == 1
    assert len(functions[14][0]) == 1
    assert len(functions[15][0]) == 1
    assert len(functions[16][0]) == 1
    assert len(functions[17][0]) == 1
    assert len(functions[18][0]) == 1
    assert len(functions[19][0]) == 1
    assert len(functions[20][0]) == 1
    assert len(functions[21][0]) == 1
    assert len(functions[22][0]) == 1
    assert len(functions[23][0]) == 1

    # print_expected_cluster_functions_detailed(
    #     functions,
    #     file=pathlib.Path(os.path.realpath(__file__)).parent
    #     / "data"
    #     / "expected_occ_functions_lowsym_1.json",
    # )
    with open(session_shared_datadir / "expected_occ_functions_lowsym_1.json") as f:
        assert_expected_cluster_functions_detailed(functions, json.load(f))
