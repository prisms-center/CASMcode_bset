import copy
import json
import os
import pathlib

import numpy as np

import libcasm.clexulator as casmclex
import libcasm.clusterography as casmclust
import libcasm.configuration as casmconfig
import libcasm.occ_events as occ_events
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


class SetupLocalCorr:
    def __init__(self, prim, prim_neighbor_list, local_clexulator):
        self.supercell = casmconfig.Supercell(
            prim=prim,
            transformation_matrix_to_super=np.array(
                [
                    [-1, 1, 1],
                    [1, -1, 1],
                    [1, 1, -1],
                ],
                dtype="int",
            )
            * 5,
        )
        self.supercell_neighbor_list = casmclex.SuperNeighborList(
            self.supercell.transformation_matrix_to_super,
            prim_neighbor_list,
        )

        self.config = casmconfig.Configuration(supercell=self.supercell)

        self.local_corr = casmclex.LocalCorrelations(
            supercell_neighbor_list=self.supercell_neighbor_list,
            clexulator=local_clexulator,
            config_dof_values=self.config.dof_values,
        )


xtal_prim = xtal_prims.FCC(
    r=0.5,
    occ_dof=["A", "B", "Va"],
)
prim = casmconfig.Prim(xtal_prim)

occ_system = occ_events.OccSystem(xtal_prim=prim.xtal_prim)

# 1NN A-Va exchange
occevent = occ_events.OccEvent.from_dict(
    data={
        "trajectories": [
            [
                {"coordinate": [0, 0, 0, 0], "occupant_index": 0},
                {"coordinate": [0, 1, 0, 0], "occupant_index": 0},
            ],
            [
                {"coordinate": [0, 1, 0, 0], "occupant_index": 2},
                {"coordinate": [0, 0, 0, 0], "occupant_index": 2},
            ],
        ]
    },
    system=occ_system,
)

clex_basis_specs = make_clex_basis_specs(
    prim=prim,
    max_length=[0.0, 0.0, 5.01],
    global_max_poly_order=3,
    occ_site_basis_functions_specs="occupation",
    phenomenal=occevent,
    cutoff_radius=[0.0, 1.01, 1.01],
)

tmp_path = pathlib.Path(".")
src_path, local_src_path, prim_neighbor_list = write_clexulator(
    prim=prim,
    clex_basis_specs=clex_basis_specs,
    bset_dir=tmp_path,
    project_name="TestProject",
    bset_name="default",
    version="v1.basic",
)

### Check generated files ###
print("tmp_path:", tmp_path)
for x in os.listdir(tmp_path):
    print(x)

assert src_path == tmp_path / "TestProject_Clexulator_default.cc"
assert local_src_path == [
    tmp_path / f"{i}" / f"TestProject_Clexulator_default_{i}.cc" for i in range(6)
]

assert src_path.exists()

### Check basis.json ###
assert (tmp_path / "basis.json").exists()
with open(tmp_path / "basis.json", "r") as f:
    basis_data = json.load(f)
assert "prim" in basis_data
assert "bspecs" in basis_data
assert "orbits" in basis_data
assert len(basis_data["orbits"]) == 12

assert len(basis_data["orbits"][0]["cluster_functions"]) == 1
# TODO: assert len(basis_data["orbits"][0]["prototype"]["invariant_group"]) == 8

assert len(basis_data["orbits"][1]["cluster_functions"]) == 2
# TODO: assert len(basis_data["orbits"][1]["prototype"]["invariant_group"]) == 2

assert len(basis_data["orbits"][2]["cluster_functions"]) == 2
# TODO: assert len(basis_data["orbits"][2]["prototype"]["invariant_group"]) == 2

assert len(basis_data["orbits"][3]["cluster_functions"]) == 2
# TODO: assert len(basis_data["orbits"][3]["prototype"]["invariant_group"]) == 1

assert len(basis_data["orbits"][4]["cluster_functions"]) == 2
# TODO: assert len(basis_data["orbits"][4]["prototype"]["invariant_group"]) == 4

assert len(basis_data["orbits"][5]["cluster_functions"]) == 3
# TODO: assert len(basis_data["orbits"][5]["prototype"]["invariant_group"]) == 4

assert len(basis_data["orbits"][6]["cluster_functions"]) == 4
# TODO: assert len(basis_data["orbits"][6]["prototype"]["invariant_group"]) == 1

assert len(basis_data["orbits"][7]["cluster_functions"]) == 3
# TODO: assert len(basis_data["orbits"][7]["prototype"]["invariant_group"]) == 4

assert len(basis_data["orbits"][8]["cluster_functions"]) == 4
# TODO: assert len(basis_data["orbits"][8]["prototype"]["invariant_group"]) == 1

assert len(basis_data["orbits"][9]["cluster_functions"]) == 4
# TODO: assert len(basis_data["orbits"][9]["prototype"]["invariant_group"]) == 1

assert len(basis_data["orbits"][10]["cluster_functions"]) == 3
# TODO: assert len(basis_data["orbits"][10]["prototype"]["invariant_group"]) == 2

assert len(basis_data["orbits"][11]["cluster_functions"]) == 4
# TODO: assert len(basis_data["orbits"][11]["prototype"]["invariant_group"]) == 1

assert "site_functions" in basis_data
assert len(basis_data["site_functions"]) == 1

### Check equivalents_info.json ###
assert (tmp_path / "equivalents_info.json").exists()
with open(tmp_path / "equivalents_info.json", "r") as f:
    equivalents_info = json.load(f)
print(xtal.pretty_json(equivalents_info))

(
    phenomenal_clusters,
    equivalent_generating_op_indices,
) = casmclust.equivalents_info_from_dict(
    data=equivalents_info,
    prim=prim.xtal_prim,
)

translations = []
for i, generating_op_index in enumerate(equivalent_generating_op_indices):
    proto = copy.deepcopy(phenomenal_clusters[0])
    tclust = prim.integral_site_coordinate_symgroup_rep[generating_op_index] * proto
    tclust.sort()

    equiv = copy.deepcopy(phenomenal_clusters[i])
    equiv.sort()
    trans = equiv[0].unitcell() - tclust[0].unitcell()
    tclust += trans
    if tclust != equiv:
        raise Exception("Error getting equivalents info translation")
    translations.append(trans)

assert len(phenomenal_clusters) == 6
assert len(equivalent_generating_op_indices) == 6
print(xtal.pretty_json(occevent.cluster().to_dict(xtal_prim=prim.xtal_prim)))
print(xtal.pretty_json(phenomenal_clusters[0].to_dict(xtal_prim=prim.xtal_prim)))
assert occevent.cluster() == phenomenal_clusters[0]

### Generate phenomenal OccEvent consistent with local clexulator ###
occevent_symgroup_rep = occ_events.make_occevent_symgroup_rep(
    prim.factor_group.elements, prim.xtal_prim
)
phenomenal_occevent = []
for i, generating_op_index in enumerate(equivalent_generating_op_indices):
    tmp = (occevent_symgroup_rep[generating_op_index] * occevent).standardize()
    trans = (
        phenomenal_clusters[i].sorted()[0].unitcell()
        - tmp.cluster().sorted()[0].unitcell()
    )
    phenomenal_occevent.append(tmp + trans)

# Check that the clusters are consistent with equivalents_info
assert len(phenomenal_occevent) == 6
for i, equiv_occevent in enumerate(phenomenal_occevent):
    assert equiv_occevent.cluster().sorted() == phenomenal_clusters[i].sorted()

### Construct local clexulator ###
local_clexulator = casmclex.make_local_clexulator(
    source=str(src_path),
    prim_neighbor_list=prim_neighbor_list,
)
assert isinstance(local_clexulator, casmclex.LocalClexulator)

assert local_clexulator.n_equivalents() == 6
assert local_clexulator.n_functions() == 10

assert False

### Construct LocalCorrelations object and configuration in 5x5x5 supercell ###
test = SetupLocalCorr(prim, prim_neighbor_list, local_clexulator)
config = test.config
local_corr = test.local_corr
unitcell_index_converter = config.supercell.unitcell_index_converter

### Test local correlations ###

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

event = phenomenal_occevent[0]
unitcell_index, equivalent_index = occ_events.get_occevent_coordinate(
    occ_event=event,
    phenomenal_occevent=phenomenal_occevent,
    unitcell_index_converter=unitcell_index_converter,
)
assert unitcell_index == 0
assert equivalent_index == 0

config.set_occupation([0] * 125)
x = local_corr.value(
    unitcell_index=unitcell_index,
    equivalent_index=equivalent_index,
)
print(x)
assert x.shape == (10,)
assert np.allclose(x, [1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])
