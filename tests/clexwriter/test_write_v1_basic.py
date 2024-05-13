from io import StringIO

import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims

from casm.bset import (
    make_cluster_functions,
    write_clexulator,
)


def test_v1_basic_occ_fcc_1(session_shared_datadir):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A", "B", "C"],
        # local_dof=[xtal.DoFSetBasis("disp")],
        # global_dof=[xtal.DoFSetBasis("Hstrain")],
    )

    clusters, functions, prim_neighbor_list, params = make_cluster_functions(
        xtal_prim=xtal_prim, max_length=[0.0, 0.0, 1.01, 1.01], global_max_poly_order=4
    )

    n_corr = 1  # include constant term
    for i_orbit, orbit in enumerate(functions):
        n_corr += len(orbit[0])

    occ_site_functions = [
        {
            "sublattice_index": 0,
            "n_occupants": 3,
            "functions": [
                [1.0, 1.0, 1.0],
                [-1.2247448714, 0.0, 1.2247448714],
                [-0.7071067812, 1.4142135624, -0.7071067812],
            ],
        }
    ]

    continuous_dof = [
        # {
        #     "is_global": False,
        #     "key": "disp",
        #     "max_n_components": 3,
        #     "sites": [
        #         {
        #             "sublattice_index": 0,
        #             "n_components": 3,
        #         },
        #         {
        #             "sublattice_index": 1,
        #             "n_components": 3,
        #         },
        #     ],
        # },
        # {
        #     "is_global": True,
        #     "key": "Hstrain",
        # },
    ]

    params = [
        {
            "name": "occ_site_func",
            "rows": 2,
            "cols": prim_neighbor_list.n_neighborhood_sites(),
            "is_independent": "true",
        },
        # {
        #     "name": "Hstrain_var",
        #     "rows": 6,
        #     "cols": 1,
        #     "is_independent": "true",
        # },
        # {
        #     "name": "disp_var",
        #     "rows": 3,
        #     "cols": prim_neighbor_list.n_neighborhood_sites(),
        #     "is_independent": "true",
        # },
        {
            "name": "corr",
            "rows": n_corr,
            "cols": 1,
            "is_independent": "false",
        },
    ]

    with StringIO() as f:
        write_clexulator(
            f,
            version="v1.basic",
            project_name="MyProject",
            bset_name="default",
            is_periodic=True,
            clusters=clusters,
            functions=functions,
            prim_neighbor_list=prim_neighbor_list,
            occ_site_functions=occ_site_functions,
            continuous_dof=continuous_dof,
            params=params,
            linear_function_indices=None,
        )
        print(f.getvalue())

    assert False


def test_v1_basic_Hstrain_fcc_1(session_shared_datadir):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A"],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )

    clusters, functions, prim_neighbor_list, params = make_cluster_functions(
        xtal_prim=xtal_prim, max_length=[0.0], global_max_poly_order=4
    )

    n_corr = 1  # include constant term
    for i_orbit, orbit in enumerate(functions):
        n_corr += len(orbit[0])

    occ_site_functions = []

    continuous_dof = [
        {
            "is_global": True,
            "key": "Hstrain",
        },
    ]

    params = [
        {
            "name": "Hstrain_var",
            "rows": 6,
            "cols": 1,
            "is_independent": "true",
        },
        {
            "name": "corr",
            "rows": n_corr,
            "cols": 1,
            "is_independent": "false",
        },
    ]

    with StringIO() as f:
        write_clexulator(
            f,
            version="v1.basic",
            project_name="MyProject",
            bset_name="default",
            is_periodic=True,
            clusters=clusters,
            functions=functions,
            prim_neighbor_list=prim_neighbor_list,
            occ_site_functions=occ_site_functions,
            continuous_dof=continuous_dof,
            params=params,
            linear_function_indices=None,
        )
        print(f.getvalue())

    assert False


def test_v1_basic_Hstrain_occ_fcc_1(session_shared_datadir):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A", "B", "C"],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )

    clusters, functions, prim_neighbor_list, params = make_cluster_functions(
        xtal_prim=xtal_prim, max_length=[0.0, 0.0, 1.01, 1.01], global_max_poly_order=3
    )

    n_corr = 1  # include constant term
    for i_orbit, orbit in enumerate(functions):
        n_corr += len(orbit[0])

    occ_site_functions = [
        {
            "sublattice_index": 0,
            "n_occupants": 3,
            "functions": [
                [1.0, 1.0, 1.0],
                [-1.2247448714, 0.0, 1.2247448714],
                [-0.7071067812, 1.4142135624, -0.7071067812],
            ],
        }
    ]

    continuous_dof = []

    continuous_dof = [
        {
            "is_global": True,
            "key": "Hstrain",
        },
    ]

    params = [
        {
            "name": "occ_site_func",
            "rows": 2,
            "cols": prim_neighbor_list.n_neighborhood_sites(),
            "is_independent": "true",
        },
        {
            "name": "Hstrain_var",
            "rows": 6,
            "cols": 1,
            "is_independent": "true",
        },
        {
            "name": "corr",
            "rows": n_corr,
            "cols": 1,
            "is_independent": "false",
        },
    ]

    with StringIO() as f:
        write_clexulator(
            f,
            version="v1.basic",
            project_name="MyProject",
            bset_name="default",
            is_periodic=True,
            clusters=clusters,
            functions=functions,
            prim_neighbor_list=prim_neighbor_list,
            occ_site_functions=occ_site_functions,
            continuous_dof=continuous_dof,
            params=params,
            linear_function_indices=None,
        )
        print(f.getvalue())

    assert False
