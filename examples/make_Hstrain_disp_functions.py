import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims

from casm.bset import (
    make_periodic_cluster_functions,
)

xtal_prim = xtal_prims.FCC(
    r=0.5,
    occ_dof=["A"],
    local_dof=[xtal.DoFSetBasis("disp")],
    global_dof=[xtal.DoFSetBasis("Hstrain")],
)
print(xtal.pretty_json(xtal_prim.to_dict()))

clusters, functions = make_periodic_cluster_functions(
    xtal_prim=xtal_prim,
    local_dof=["disp"],
    global_dof=["Hstrain"],
    max_length=[0.0, 0.0, 1.01, 1.01],
    max_poly_order=4,
    verbose=True,
)

n_functions = 0
for i_orbit, orbit_functions in enumerate(functions):
    n_functions += len(orbit_functions[0])
print("Number of orthonormalized functions:", n_functions)
