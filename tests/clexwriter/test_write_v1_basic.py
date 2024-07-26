import os

import numpy as np

import libcasm.clexulator as casmclex
import libcasm.configuration as casmconfig
import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims
from casm.bset import (
    make_clex_basis_specs,
    write_clexulator,
)


class SetupCorr:
    def __init__(self, prim, prim_neighbor_list, clexulator):
        self.supercell = casmconfig.Supercell(
            prim=prim,
            transformation_matrix_to_super=np.array(
                [
                    [-1, 1, 1],
                    [1, -1, 1],
                    [1, 1, -1],
                ],
                dtype="int",
            ),
        )
        self.supercell_neighbor_list = casmclex.SuperNeighborList(
            self.supercell.transformation_matrix_to_super,
            prim_neighbor_list,
        )

        self.config = casmconfig.Configuration(supercell=self.supercell)

        self.corr = casmclex.Correlations(
            supercell_neighbor_list=self.supercell_neighbor_list,
            clexulator=clexulator,
            config_dof_values=self.config.dof_values,
        )


def test_v1_basic_occ_fcc_1(session_shared_datadir, tmp_path):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A", "B", "C"],
    )
    prim = casmconfig.Prim(xtal_prim)

    clex_basis_specs = make_clex_basis_specs(
        prim=prim,
        max_length=[0.0, 0.0, 1.01, 1.01],
        global_max_poly_order=4,
        occ_site_basis_functions_specs="occupation",
    )

    src_path, local_src_path, prim_neighbor_list = write_clexulator(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        bset_dir=tmp_path,
        project_name="TestProject",
        bset_name="default",
        version="v1.basic",
    )

    print("tmp_path:", tmp_path)
    for x in os.listdir(tmp_path):
        print(x)

    assert src_path == tmp_path / "TestProject_Clexulator_default.cc"
    assert local_src_path is None

    assert src_path.exists()
    assert (tmp_path / "basis.json").exists()

    clexulator = casmclex.make_clexulator(
        source=str(src_path),
        prim_neighbor_list=prim_neighbor_list,
    )
    assert isinstance(clexulator, casmclex.Clexulator)

    assert clexulator.n_functions() == 10
    assert clexulator.n_point_corr() == 1
    assert clexulator.n_sublattices() == 1
    assert clexulator.nlist_size() == 13
    assert clexulator.sublat_indices() == set([0])
    assert (
        clexulator.weight_matrix()
        == np.array(
            [
                [2, 1, 1],
                [1, 2, 1],
                [1, 1, 2],
            ],
            dtype="int",
        )
    ).all()

    test = SetupCorr(prim, prim_neighbor_list, clexulator)
    config = test.config
    corr = test.corr

    ### Test correlations ###

    # FCC:
    # expected per unitcell correlations example: [
    #     0.0, # constant
    #     2.0 / 4.0,  # B point; (count / total)
    #     2.0 / 4.0,  # C point
    #     4.0 / 24.0,  # (B,B) pair
    #     4.0 / 24.0,  # (C,C) pair
    #     (np.sqrt(2.0) / 2.0) * 16.0 / 24.0,  # (B, C) pair; (norm * count / total)
    #     0.0,  # (B,B,B) triplet
    #     0.0,  # (C,C,C) triplet
    #     (np.sqrt(3.0) / 3.0) * (16.0 / 32.0),  # (B,B,C) triplet
    #     (np.sqrt(3.0) / 3.0) * (16.0 / 32.0),  # (B,C,C) triplet
    # ]

    config.set_occupation([0, 0, 0, 0])
    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (10,)
    assert np.allclose(x, [1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])

    config.set_occupation([1, 1, 1, 1])
    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (10,)
    assert np.allclose(x, [1.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0])

    config.set_occupation([2, 2, 2, 2])
    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (10,)
    assert np.allclose(x, [1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 1.0, 0.0, 0.0])

    occupation = [
        [1, 0, 0, 0],
        [0, 1, 0, 0],
        [0, 0, 1, 0],
        [0, 0, 0, 1],
    ]
    for _occupation in occupation:
        config.set_occupation(_occupation)
        x = corr.per_unitcell(corr.per_supercell())
        print(x)
        assert x.shape == (10,)
        assert np.allclose(x, [1.0, 0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])

    occupation = [
        [2, 0, 0, 0],
        [0, 2, 0, 0],
        [0, 0, 2, 0],
        [0, 0, 0, 2],
    ]
    for _occupation in occupation:
        config.set_occupation(_occupation)
        x = corr.per_unitcell(corr.per_supercell())
        print(x)
        assert x.shape == (10,)
        assert np.allclose(x, [1.0, 0.0, 0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])

    occupation = [
        [1, 1, 0, 0],
        [1, 0, 1, 0],
        [1, 0, 0, 1],
        [0, 1, 1, 0],
        [0, 1, 0, 1],
        [0, 0, 1, 1],
    ]
    for _occupation in occupation:
        config.set_occupation(_occupation)
        x = corr.per_unitcell(corr.per_supercell())
        print(x)
        assert x.shape == (10,)
        assert np.allclose(
            x, [1.0, 2.0 / 4.0, 0.0, 4.0 / 24.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        )

    occupation = [
        [1, 1, 2, 2],
        [1, 2, 1, 2],
        [1, 2, 2, 1],
        [2, 1, 1, 2],
        [2, 1, 2, 1],
        [2, 2, 1, 1],
    ]
    for _occupation in occupation:
        config.set_occupation(_occupation)
        x = corr.per_unitcell(corr.per_supercell())
        print(x)
        assert x.shape == (10,)
        assert np.allclose(
            x,
            [
                1.0,
                2.0 / 4.0,
                2.0 / 4.0,
                4.0 / 24.0,
                4.0 / 24.0,
                (np.sqrt(2.0) / 2.0) * 16.0 / 24.0,  # norm * count / total
                0.0,
                0.0,
                (np.sqrt(3.0) / 3.0) * (16.0 / 32.0),
                (np.sqrt(3.0) / 3.0) * (16.0 / 32.0),
            ],
        )

    ### Test point correlations ###
    def check_point_corr(config, corr, expected_X_point):
        print("occupation:", config.occupation)
        print("expected:")
        print(expected_X_point)
        X_point = corr.all_points(include_all_sites=True)
        print("result:")
        print(X_point)
        assert X_point.shape == expected_X_point.shape
        assert np.allclose(X_point, expected_X_point)
        print()

        print("x_point:")
        print("occupation:", config.occupation)
        for i in range(4):
            x_point = corr.point(i, skip_if_unnecessary_for_occ_delta=False)
            print(x_point)
            assert x_point.shape == (expected_X_point.shape[1],)
            assert np.allclose(x_point, expected_X_point[i, :])
        print()

    print("### CHECK POINT CORRELATIONS ###\n")
    config.set_occupation([0, 0, 0, 0])
    expected_X_point = np.array(
        [
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
        ]
    )
    check_point_corr(config, corr, expected_X_point)

    config.set_occupation([1, 0, 0, 0])
    expected_X_point = np.array(
        [
            [0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
        ]
    )
    check_point_corr(config, corr, expected_X_point)

    config.set_occupation([0, 2, 0, 0])
    expected_X_point = np.array(
        [
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            [0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
            [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0],
        ]
    )
    check_point_corr(config, corr, expected_X_point)

    config.set_occupation([1, 1, 2, 2])
    # Note: normalization orbit multiplicity (same as global)
    # To sum point corr and compare to global corr, need to divide by cluster size
    # FCC, with '+' and '0' in alternating planes:
    # + 0 +
    # 0 + 0
    # + 0 +
    # for a '+' point:
    # - point: 1x (+)
    # - pair: 4x (+,+); 8x (+,0)
    # - triplet: 8x (0,0,+); 16x (+,+,0)
    expected_x1 = [
        0.0,
        1.0,  # + point
        0.0,  # 0 point
        4.0 / 6.0,  # (+,+) pair
        0.0,  # (0,0) pair
        (np.sqrt(2.0) / 2.0) * 8.0 / 6.0,  # (+, 0) pair; (norm * count / mult)
        0.0,  # (+,+,+) triplet
        0.0,  # (0,0,0) triplet
        (np.sqrt(3.0) / 3.0) * (16.0 / 8.0),  # (+,+,0) triplet
        (np.sqrt(3.0) / 3.0) * (8.0 / 8.0),  # (+,0,0) triplet
    ]
    expected_x2 = [
        0.0,
        0.0,
        1.0,
        0.0,
        4.0 / 6.0,
        (np.sqrt(2.0) / 2.0) * 8.0 / 6.0,
        0.0,
        0.0,
        (np.sqrt(3.0) / 3.0) * (8.0 / 8.0),
        (np.sqrt(3.0) / 3.0) * (16.0 / 8.0),
    ]
    expected_X_point = np.array([expected_x1, expected_x1, expected_x2, expected_x2])
    check_point_corr(config, corr, expected_X_point)

    ### Test required_update_neighborhood ###
    print("### CHECK NEIGHBORHOOD INFO ###\n")
    neighbors = corr.required_update_neighborhood()
    print(neighbors)
    assert len(neighbors) == 13


def test_v1_basic_Hstrain_fcc_1(session_shared_datadir, tmp_path):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A"],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )
    prim = casmconfig.Prim(xtal_prim)

    clex_basis_specs = make_clex_basis_specs(
        prim=prim,
        max_length=[0.0],
        global_max_poly_order=4,
    )

    src_path, local_src_path, prim_neighbor_list = write_clexulator(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        bset_dir=tmp_path,
        project_name="TestProject",
        bset_name="default",
        version="v1.basic",
    )

    print("tmp_path:", tmp_path)
    for x in os.listdir(tmp_path):
        print(x)

    assert src_path == tmp_path / "TestProject_Clexulator_default.cc"
    assert local_src_path is None

    assert src_path.exists()
    assert (tmp_path / "basis.json").exists()

    clexulator = casmclex.make_clexulator(
        source=str(src_path),
        prim_neighbor_list=prim_neighbor_list,
    )
    assert isinstance(clexulator, casmclex.Clexulator)

    assert clexulator.n_functions() == 22
    assert clexulator.n_point_corr() == 0
    assert clexulator.n_sublattices() == 1
    assert clexulator.nlist_size() == 0
    assert clexulator.sublat_indices() == set([])
    assert (
        clexulator.weight_matrix()
        == np.array(
            [
                [2, 1, 1],
                [1, 2, 1],
                [1, 1, 2],
            ],
            dtype="int",
        )
    ).all()

    test = SetupCorr(prim, prim_neighbor_list, clexulator)
    config = test.config
    corr = test.corr
    n_func = clexulator.n_functions()

    ### Test correlations ###

    config.set_global_dof_values(
        key="Hstrain", dof_values=np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    )
    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (n_func,)
    assert np.allclose(x, [1.0] + [0.0] * (n_func - 1))

    e = 0.01
    config.set_global_dof_values(
        key="Hstrain", dof_values=np.array([e, 0.0, 0.0, 0.0, 0.0, 0.0])
    )
    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (n_func,)
    expected = np.array([1.0] + [0.0] * (n_func - 1))
    expected[1] = 0.5773502692 * pow(e, 1)
    expected[2] = 0.5773502692 * pow(e, 2)
    expected[7] = 0.5773502692 * pow(e, 3)
    expected[11] = 0.5773502692 * pow(e, 4)
    assert np.allclose(x, expected)

    ### Test required_update_neighborhood ###
    print("### CHECK NEIGHBORHOOD INFO ###\n")
    neighbors = corr.required_update_neighborhood()
    print(neighbors)
    assert len(neighbors) == 0


def test_v1_basic_Hstrain_occ_fcc_1(session_shared_datadir, tmp_path):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A", "B", "C"],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )
    prim = casmconfig.Prim(xtal_prim)

    clex_basis_specs = make_clex_basis_specs(
        prim=prim,
        max_length=[0.0, 0.0, 1.01, 1.01],
        global_max_poly_order=3,
        occ_site_basis_functions_specs="occupation",
    )

    src_path, local_src_path, prim_neighbor_list = write_clexulator(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        bset_dir=tmp_path,
        project_name="TestProject",
        bset_name="default",
        version="v1.basic",
    )

    print("tmp_path:", tmp_path)
    for x in os.listdir(tmp_path):
        print(x)

    assert src_path == tmp_path / "TestProject_Clexulator_default.cc"
    assert local_src_path is None

    assert src_path.exists()
    assert (tmp_path / "basis.json").exists()

    clexulator = casmclex.make_clexulator(
        source=str(src_path),
        prim_neighbor_list=prim_neighbor_list,
    )
    assert isinstance(clexulator, casmclex.Clexulator)

    assert clexulator.n_functions() == 37
    assert clexulator.n_point_corr() == 1
    assert clexulator.n_sublattices() == 1
    assert clexulator.nlist_size() == 13
    assert clexulator.sublat_indices() == set([0])
    assert (
        clexulator.weight_matrix()
        == np.array(
            [
                [2, 1, 1],
                [1, 2, 1],
                [1, 1, 2],
            ],
            dtype="int",
        )
    ).all()

    test = SetupCorr(prim, prim_neighbor_list, clexulator)
    config = test.config
    corr = test.corr
    n_func = clexulator.n_functions()

    ### Test correlations ###

    config.set_global_dof_values(
        key="Hstrain", dof_values=np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    )
    config.set_occupation([0, 0, 0, 0])
    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (n_func,)
    assert np.allclose(x, [1.0] + [0.0] * (n_func - 1))

    ### Test required_update_neighborhood ###
    print("### CHECK NEIGHBORHOOD INFO ###\n")
    neighbors = corr.required_update_neighborhood()
    print(neighbors)
    assert len(neighbors) == 13


def test_v1_basic_disp_fcc_1(session_shared_datadir, tmp_path):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A"],
        local_dof=[xtal.DoFSetBasis("disp")],
    )
    prim = casmconfig.Prim(xtal_prim)

    clex_basis_specs = make_clex_basis_specs(
        prim=prim,
        max_length=[0.0, 0.0, 1.01, 1.01],
        global_max_poly_order=3,
    )

    src_path, local_src_path, prim_neighbor_list = write_clexulator(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        bset_dir=tmp_path,
        project_name="TestProject",
        bset_name="default",
        version="v1.basic",
    )

    print("tmp_path:", tmp_path)
    for x in os.listdir(tmp_path):
        print(x)

    assert src_path == tmp_path / "TestProject_Clexulator_default.cc"
    assert local_src_path is None

    assert src_path.exists()
    assert (tmp_path / "basis.json").exists()

    clexulator = casmclex.make_clexulator(
        source=str(src_path),
        prim_neighbor_list=prim_neighbor_list,
    )
    assert isinstance(clexulator, casmclex.Clexulator)

    assert clexulator.n_functions() == 17
    assert clexulator.n_point_corr() == 1
    assert clexulator.n_sublattices() == 1
    assert clexulator.nlist_size() == 13
    assert clexulator.sublat_indices() == set([0])
    assert (
        clexulator.weight_matrix()
        == np.array(
            [
                [2, 1, 1],
                [1, 2, 1],
                [1, 1, 2],
            ],
            dtype="int",
        )
    ).all()

    test = SetupCorr(prim, prim_neighbor_list, clexulator)
    config = test.config
    corr = test.corr
    n_func = clexulator.n_functions()

    ### Test correlations ###

    config.set_local_dof_values(
        key="disp",
        dof_values=np.array(
            [
                [0.0, 0.0, 0.0, 0.0],
                [0.0, 0.0, 0.0, 0.0],
                [0.0, 0.0, 0.0, 0.0],
            ]
        ),
    )

    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (n_func,)
    assert np.allclose(x, [1.0] + [0.0] * (n_func - 1))

    ### Test required_update_neighborhood ###
    print("### CHECK NEIGHBORHOOD INFO ###\n")
    neighbors = corr.required_update_neighborhood()
    print(neighbors)
    assert len(neighbors) == 13


def test_v1_basic_occ_disp_fcc_1(session_shared_datadir, tmp_path):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A", "B", "C"],
        local_dof=[xtal.DoFSetBasis("disp")],
    )
    prim = casmconfig.Prim(xtal_prim)

    clex_basis_specs = make_clex_basis_specs(
        prim=prim,
        max_length=[0.0, 0.0, 1.01, 1.01],
        global_max_poly_order=3,
        occ_site_basis_functions_specs="occupation",
    )

    src_path, local_src_path, prim_neighbor_list = write_clexulator(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        bset_dir=tmp_path,
        project_name="TestProject",
        bset_name="default",
        version="v1.basic",
    )

    print("tmp_path:", tmp_path)
    for x in os.listdir(tmp_path):
        print(x)

    assert src_path == tmp_path / "TestProject_Clexulator_default.cc"
    assert local_src_path is None

    assert src_path.exists()
    assert (tmp_path / "basis.json").exists()

    clexulator = casmclex.make_clexulator(
        source=str(src_path),
        prim_neighbor_list=prim_neighbor_list,
    )
    assert isinstance(clexulator, casmclex.Clexulator)

    assert clexulator.n_functions() == 65
    assert clexulator.n_point_corr() == 1
    assert clexulator.n_sublattices() == 1
    assert clexulator.nlist_size() == 13
    assert clexulator.sublat_indices() == set([0])
    assert (
        clexulator.weight_matrix()
        == np.array(
            [
                [2, 1, 1],
                [1, 2, 1],
                [1, 1, 2],
            ],
            dtype="int",
        )
    ).all()

    test = SetupCorr(prim, prim_neighbor_list, clexulator)
    config = test.config
    corr = test.corr
    n_func = clexulator.n_functions()

    ### Test correlations ###

    config.set_occupation([0, 0, 0, 0])
    config.set_local_dof_values(
        key="disp",
        dof_values=np.array(
            [
                [0.0, 0.0, 0.0, 0.0],
                [0.0, 0.0, 0.0, 0.0],
                [0.0, 0.0, 0.0, 0.0],
            ]
        ),
    )

    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (n_func,)
    assert np.allclose(x, [1.0] + [0.0] * (n_func - 1))

    ### Test required_update_neighborhood ###
    print("### CHECK NEIGHBORHOOD INFO ###\n")
    neighbors = corr.required_update_neighborhood()
    print(neighbors)
    assert len(neighbors) == 13


def test_v1_basic_Hstrain_disp_fcc_1(session_shared_datadir, tmp_path):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A"],
        local_dof=[xtal.DoFSetBasis("disp")],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )
    prim = casmconfig.Prim(xtal_prim)

    clex_basis_specs = make_clex_basis_specs(
        prim=prim,
        max_length=[0.0, 0.0, 1.01, 1.01],
        global_max_poly_order=3,
    )

    src_path, local_src_path, prim_neighbor_list = write_clexulator(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        bset_dir=tmp_path,
        project_name="TestProject",
        bset_name="default",
        version="v1.basic",
    )

    print("tmp_path:", tmp_path)
    for x in os.listdir(tmp_path):
        print(x)

    assert src_path == tmp_path / "TestProject_Clexulator_default.cc"
    assert local_src_path is None

    assert src_path.exists()
    assert (tmp_path / "basis.json").exists()

    clexulator = casmclex.make_clexulator(
        source=str(src_path),
        prim_neighbor_list=prim_neighbor_list,
    )
    assert isinstance(clexulator, casmclex.Clexulator)

    assert clexulator.n_functions() == 42
    assert clexulator.n_point_corr() == 1
    assert clexulator.n_sublattices() == 1
    assert clexulator.nlist_size() == 13
    assert clexulator.sublat_indices() == set([0])
    assert (
        clexulator.weight_matrix()
        == np.array(
            [
                [2, 1, 1],
                [1, 2, 1],
                [1, 1, 2],
            ],
            dtype="int",
        )
    ).all()

    test = SetupCorr(prim, prim_neighbor_list, clexulator)
    config = test.config
    corr = test.corr
    n_func = clexulator.n_functions()

    ### Test correlations ###

    config.set_global_dof_values(
        key="Hstrain", dof_values=np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    )
    config.set_local_dof_values(
        key="disp",
        dof_values=np.array(
            [
                [0.0, 0.0, 0.0, 0.0],
                [0.0, 0.0, 0.0, 0.0],
                [0.0, 0.0, 0.0, 0.0],
            ]
        ),
    )

    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (n_func,)
    assert np.allclose(x, [1.0] + [0.0] * (n_func - 1))

    ### Test required_update_neighborhood ###
    print("### CHECK NEIGHBORHOOD INFO ###\n")
    neighbors = corr.required_update_neighborhood()
    print(neighbors)
    assert len(neighbors) == 13


def test_v1_basic_Hstrain_occ_disp_fcc_1(session_shared_datadir, tmp_path):
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A", "B", "C"],
        local_dof=[xtal.DoFSetBasis("disp")],
        global_dof=[xtal.DoFSetBasis("Hstrain")],
    )
    prim = casmconfig.Prim(xtal_prim)

    clex_basis_specs = make_clex_basis_specs(
        prim=prim,
        max_length=[0.0, 0.0, 1.01, 1.01],
        global_max_poly_order=3,
        occ_site_basis_functions_specs="occupation",
    )

    src_path, local_src_path, prim_neighbor_list = write_clexulator(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        bset_dir=tmp_path,
        project_name="TestProject",
        bset_name="default",
        version="v1.basic",
    )

    print("tmp_path:", tmp_path)
    for x in os.listdir(tmp_path):
        print(x)

    assert src_path == tmp_path / "TestProject_Clexulator_default.cc"
    assert local_src_path is None

    assert src_path.exists()
    assert (tmp_path / "basis.json").exists()

    clexulator = casmclex.make_clexulator(
        source=str(src_path),
        prim_neighbor_list=prim_neighbor_list,
    )
    assert isinstance(clexulator, casmclex.Clexulator)

    assert clexulator.n_functions() == 117
    assert clexulator.n_point_corr() == 1
    assert clexulator.n_sublattices() == 1
    assert clexulator.nlist_size() == 13
    assert clexulator.sublat_indices() == set([0])
    assert (
        clexulator.weight_matrix()
        == np.array(
            [
                [2, 1, 1],
                [1, 2, 1],
                [1, 1, 2],
            ],
            dtype="int",
        )
    ).all()

    test = SetupCorr(prim, prim_neighbor_list, clexulator)
    config = test.config
    corr = test.corr
    n_func = clexulator.n_functions()

    ### Test correlations ###

    config.set_global_dof_values(
        key="Hstrain", dof_values=np.array([0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
    )
    config.set_occupation([0, 0, 0, 0])
    config.set_local_dof_values(
        key="disp",
        dof_values=np.array(
            [
                [0.0, 0.0, 0.0, 0.0],
                [0.0, 0.0, 0.0, 0.0],
                [0.0, 0.0, 0.0, 0.0],
            ]
        ),
    )

    x = corr.per_unitcell(corr.per_supercell())
    print(x)
    assert x.shape == (n_func,)
    assert np.allclose(x, [1.0] + [0.0] * (n_func - 1))

    ### Test required_update_neighborhood ###
    print("### CHECK NEIGHBORHOOD INFO ###\n")
    neighbors = corr.required_update_neighborhood()
    print(neighbors)
    assert len(neighbors) == 13
