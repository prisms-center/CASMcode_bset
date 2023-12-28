import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims
import libcasm.clusterography as casmclust
import libcasm.configuration as casmconfig

from casm.bset import (
    PeriodicOrbitMatrixRepBuilder,
    make_symmetry_adapted_polynomials,
)
from utils.helpers import (
    assert_expected_prototype_functions_by_orbit,
    print_expected_prototype_functions_by_orbit,
)
from utils.expected_disp_functions import (
    expected_disp_functions_fcc_1,
    expected_disp_functions_hcp_1,
    expected_disp_functions_lowsym_1,
)


def make_prototype_functions_by_orbit(
    xtal_prim: xtal.Prim,
    max_length: list[float],
    max_poly_order: int,
):
    prim = casmconfig.Prim(xtal_prim)
    cluster_specs = casmclust.ClusterSpecs(
        xtal_prim=prim.xtal_prim(),
        generating_group=prim.factor_group(),
        max_length=max_length,
    )
    orbits = cluster_specs.make_orbits()

    prototype_functions_by_orbit = [None] * len(orbits)
    for i_orbit, orbit in enumerate(orbits):
        print(f"~~~ i_orbit: {i_orbit} ~~~")

        print("Prototype cluster:")
        print(xtal.pretty_json(orbit[0].to_dict(prim.xtal_prim())))
        print()

        if orbit[0].size() == 0:
            prototype_functions_by_orbit[i_orbit] = []
            continue

        builder = PeriodicOrbitMatrixRepBuilder(
            prim=prim,
            key="disp",
            cluster=orbit[0],
        )

        prototype_basis_set = make_symmetry_adapted_polynomials(
            matrix_rep=builder.prototype.cluster_matrix_rep,
            variables=builder.prototype.variables,
            variable_subsets=builder.prototype.variable_subsets,
            min_poly_order=1,
            max_poly_order=max_poly_order,
            orthonormalize_in_place=True,
            verbose=True,
        )

        prototype_functions_by_orbit[i_orbit] = prototype_basis_set
    return (orbits, prototype_functions_by_orbit)


def test_disp_fcc_1():
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A"],
        local_dof=[xtal.DoFSetBasis("disp")],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    orbits, prototype_functions_by_orbit = make_prototype_functions_by_orbit(
        xtal_prim=xtal_prim,
        max_length=[0.0, 0.0, 1.01, 1.01],
        max_poly_order=4,
    )

    assert len(orbits) == 4
    assert len(prototype_functions_by_orbit) == 4

    assert len(prototype_functions_by_orbit[0]) == 0
    assert len(prototype_functions_by_orbit[1]) == 3
    assert len(prototype_functions_by_orbit[2]) == 26
    assert len(prototype_functions_by_orbit[3]) == 37

    # print_expected_prototype_functions_by_orbit(prototype_functions_by_orbit)
    expected_prototype_functions_by_orbit = expected_disp_functions_fcc_1()

    assert_expected_prototype_functions_by_orbit(
        prototype_functions_by_orbit,
        expected_prototype_functions_by_orbit,
    )


def test_disp_hcp_1():
    xtal_prim = xtal_prims.HCP(
        r=0.5,
        occ_dof=["A"],
        local_dof=[xtal.DoFSetBasis("disp")],
    )
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    orbits, prototype_functions_by_orbit = make_prototype_functions_by_orbit(
        xtal_prim=xtal_prim,
        max_length=[0.0, 0.0, 1.01, 1.01],
        max_poly_order=4,
    )

    assert len(orbits) == 7
    assert len(prototype_functions_by_orbit) == 7

    assert len(prototype_functions_by_orbit[0]) == 0
    assert len(prototype_functions_by_orbit[1]) == 6
    assert len(prototype_functions_by_orbit[2]) == 43
    assert len(prototype_functions_by_orbit[3]) == 43
    assert len(prototype_functions_by_orbit[4]) == 20
    assert len(prototype_functions_by_orbit[5]) == 20
    assert len(prototype_functions_by_orbit[6]) == 99

    # print_expected_prototype_functions_by_orbit(prototype_functions_by_orbit)
    expected_prototype_functions_by_orbit = expected_disp_functions_hcp_1()

    assert_expected_prototype_functions_by_orbit(
        prototype_functions_by_orbit,
        expected_prototype_functions_by_orbit,
    )


def test_disp_lowsym_1(lowsym_disp_prim):
    xtal_prim = lowsym_disp_prim
    # print(xtal.pretty_json(xtal_prim.to_dict()))

    orbits, prototype_functions_by_orbit = make_prototype_functions_by_orbit(
        xtal_prim=xtal_prim,
        max_length=[0.0, 0.0, 1.01, 1.01],
        max_poly_order=4,
    )

    assert len(orbits) == 24
    assert len(prototype_functions_by_orbit) == 24

    assert len(prototype_functions_by_orbit[0]) == 0
    assert len(prototype_functions_by_orbit[1]) == 34
    assert len(prototype_functions_by_orbit[2]) == 34
    assert len(prototype_functions_by_orbit[3]) == 34
    assert len(prototype_functions_by_orbit[4]) == 141
    assert len(prototype_functions_by_orbit[5]) == 141
    assert len(prototype_functions_by_orbit[6]) == 141
    assert len(prototype_functions_by_orbit[7]) == 141
    assert len(prototype_functions_by_orbit[8]) == 141
    assert len(prototype_functions_by_orbit[9]) == 141
    assert len(prototype_functions_by_orbit[10]) == 141
    assert len(prototype_functions_by_orbit[11]) == 141
    assert len(prototype_functions_by_orbit[12]) == 141
    assert len(prototype_functions_by_orbit[13]) == 141
    assert len(prototype_functions_by_orbit[14]) == 141
    assert len(prototype_functions_by_orbit[15]) == 141
    assert len(prototype_functions_by_orbit[16]) == 189
    assert len(prototype_functions_by_orbit[17]) == 189
    assert len(prototype_functions_by_orbit[18]) == 189
    assert len(prototype_functions_by_orbit[19]) == 189
    assert len(prototype_functions_by_orbit[20]) == 189
    assert len(prototype_functions_by_orbit[21]) == 189
    assert len(prototype_functions_by_orbit[22]) == 189
    assert len(prototype_functions_by_orbit[23]) == 189

    # print_expected_prototype_functions_by_orbit(prototype_functions_by_orbit)
    expected_prototype_functions_by_orbit = expected_disp_functions_lowsym_1()

    assert_expected_prototype_functions_by_orbit(
        prototype_functions_by_orbit,
        expected_prototype_functions_by_orbit,
    )
