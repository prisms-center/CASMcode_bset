import numpy as np
import libcasm.xtal as xtal


def print_factor_group(prim):
    factor_group_elements = prim.factor_group().elements()
    i = 1
    for op in factor_group_elements:
        syminfo = xtal.SymInfo(op, prim.lattice())
        print(str(i) + ":", syminfo.brief_cart())
        i += 1


def print_expected_functions(functions):
    _expected = []
    for i, f in enumerate(functions):
        # print(f"~~~ order: {f.order()}, function_index: {i} ~~~")
        # f._basic_print()
        _data = f.to_dict()
        _expected.append({
            "coeff_coords": _data["coeff_coords"],
            "coeff_data": _data["coeff_data"],
        })
    print(xtal.pretty_json(_expected))

def assert_expected_functions(functions, expected):
    assert len(functions) == len(expected)
    n_found = 0
    for g in expected:
        found = False
        expected_coords = np.array(g["coeff_coords"]).transpose()
        expected_data = np.array(g["coeff_data"])
        for f in functions:
            if f.coeff.coords.shape == expected_coords.shape \
                and np.allclose(f.coeff.coords.tolist(), expected_coords) \
                and f.coeff.data.shape == expected_data.shape \
                and np.allclose(f.coeff.data.tolist(), expected_data):
                found = True
                break
        if not found:
            print("expected function not found:\n", xtal.pretty_json(g))
        assert found
        n_found += 1
    assert n_found == len(functions)

def print_expected_prototype_functions_by_orbit(prototype_functions_by_orbit):
    _expected_by_orbit = []
    for i_orbit, prototype_functions in enumerate(prototype_functions_by_orbit):
        _expected = []
        for i, f in enumerate(prototype_functions):
            # print(f"~~~ order: {f.order()}, function_index: {i} ~~~")
            # f._basic_print()
            _data = f.to_dict()
            _expected.append({
                "coeff_coords": _data["coeff_coords"],
                "coeff_data": _data["coeff_data"],
            })
        _expected_by_orbit.append(_expected)
    print(xtal.pretty_json(_expected_by_orbit))

def assert_expected_prototype_functions_by_orbit(
    prototype_functions_by_orbit,
    expected_by_orbit,
):
    assert len(prototype_functions_by_orbit) == len(expected_by_orbit)
    for i_orbit in range(len(prototype_functions_by_orbit)):
        assert_expected_functions(
            prototype_functions_by_orbit[i_orbit],
            expected_by_orbit[i_orbit],
        )

