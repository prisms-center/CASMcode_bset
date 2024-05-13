import libcasm.xtal as xtal
import libcasm.xtal.prims as xtal_prims

from casm.bset import (
    make_cluster_functions,
)

xtal_prim = xtal_prims.FCC(
    r=0.5,
    occ_dof=["A"],
    local_dof=[xtal.DoFSetBasis("disp")],
    global_dof=[xtal.DoFSetBasis("Hstrain")],
)
# xtal_prim = xtal.Prim(
#     lattice=xtal.Lattice(
#         np.array(
#             [
#                 [1.0, 0.3, 0.4],  # a
#                 [0.0, 1.2, 0.5],  # b
#                 [0.0, 0.0, 1.4],  # c
#             ]
#         ).transpose()
#     ),
#     coordinate_frac=np.array(
#         [
#             [0.0, 0.0, 0.0],
#             [0.4, 0.5, 0.6],
#             [0.24, 0.25, 0.23],
#         ]
#     ).transpose(),
#     occ_dof=[["A"], ["A"], ["A"]],
#     local_dof=[
#         [xtal.DoFSetBasis("disp")],
#         [xtal.DoFSetBasis("disp")],
#         [xtal.DoFSetBasis("disp")],
#     ],
#     global_dof=[xtal.DoFSetBasis("Hstrain")],
# )
print(xtal.pretty_json(xtal_prim.to_dict()))

clusters, functions = make_cluster_functions(
    xtal_prim=xtal_prim,
    dofs=None,
    max_length=[0.0, 0.0, 1.01, 1.01],
    global_max_poly_order=4,
    verbose=True,
)

n_functions = 0
for i_orbit, orbit_functions in enumerate(functions):
    n_functions += len(orbit_functions[0])
print("Number of orthonormalized functions:", n_functions)
