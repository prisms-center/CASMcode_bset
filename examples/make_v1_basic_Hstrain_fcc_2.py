"""Hstrain only, from a prim that includes occ DoF"""

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


import pathlib

# tmp_path = pathlib.Path(tempfile.mkdtemp())
tmp_path = pathlib.Path(".")

xtal_prim = xtal_prims.FCC(
    r=0.5,
    occ_dof=["A", "B", "C"],
    global_dof=[xtal.DoFSetBasis("Hstrain")],
)
prim = casmconfig.Prim(xtal_prim)

clex_basis_specs = make_clex_basis_specs(
    prim=prim,
    dofs=["Hstrain"],
    max_length=[0.0],
    # max_length=[0.0, 0.0, 1.01, 1.01],
    global_max_poly_order=4,
    # occ_site_basis_functions_specs="occupation",
)

if True:
    src_path, local_src_path, prim_neighbor_list = write_clexulator(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        bset_dir=tmp_path,
        project_name="TestProject",
        bset_name="default",
        version="v1.basic",
    )
else:
    src_path = tmp_path / "TestProject_Clexulator_default.cc"
    local_src_path = None
    prim_neighbor_list = casmclex.make_default_prim_neighbor_list(xtal_prim)

print("tmp_path:", tmp_path)
for x in os.listdir(tmp_path):
    print(x)

assert src_path == tmp_path / "TestProject_Clexulator_default.cc"
assert local_src_path is None

assert src_path.exists()
assert (tmp_path / "basis.json").exists()
# with open(tmp_path / "basis.json", "r") as f:
#     basis_data = json.load(f)
# assert "prim" in basis_data
# assert "bspecs" in basis_data
# assert "orbits" in basis_data
# assert len(basis_data["orbits"]) == 1
# assert len(basis_data["orbits"][0]["cluster_functions"]) == 22
# assert "site_functions" in basis_data
# assert len(basis_data["site_functions"]) == 1

clexulator = casmclex.make_clexulator(
    source=str(src_path),
    prim_neighbor_list=prim_neighbor_list,
)
assert isinstance(clexulator, casmclex.Clexulator)

assert clexulator.n_functions() == 22
assert clexulator.n_point_corr() == 0
assert clexulator.n_sublattices() == 1
assert clexulator.nlist_size() == 0
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
