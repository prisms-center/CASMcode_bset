import pathlib
from typing import Optional

import libcasm.xtal as xtal
import numpy as np


def print_factor_group(prim):
    factor_group_elements = prim.factor_group.elements
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
        _expected.append(
            {
                "coeff_coords": _data["coeff_coords"],
                "coeff_data": _data["coeff_data"],
            }
        )
    print(xtal.pretty_json(_expected))


def assert_expected_functions(functions, expected):
    assert len(functions) == len(expected)
    n_found = 0
    for g in expected:
        found = False
        expected_coords = np.array(g["coeff_coords"]).transpose()
        expected_data = np.array(g["coeff_data"])
        for f in functions:
            if (
                f.coeff.coords.shape == expected_coords.shape
                and np.allclose(f.coeff.coords.tolist(), expected_coords)
                and f.coeff.data.shape == expected_data.shape
                and np.allclose(f.coeff.data.tolist(), expected_data)
            ):
                found = True
                break
        if not found:
            print("expected function not found:\n", xtal.pretty_json(g))
            print("found functions:")
            for i, x in enumerate(functions):
                print(f"function {i}:\n", xtal.pretty_json(x.to_dict()))
        assert found
        n_found += 1
    assert n_found == len(functions)


def print_expected_cluster_functions(functions):
    """Print functions on the prototype clusters

    Parameters
    ----------
    functions: list[list[list[PolynomialFunction]]]
        Output from :func:`casm.best.make_cluster_functions`.

    """
    _expected_by_orbit = []
    for i_orbit, orbit_functions in enumerate(functions):
        _expected = []
        prototype_cluster_functions = orbit_functions[0]
        for i, f in enumerate(prototype_cluster_functions):
            # print(f"~~~ order: {f.order()}, function_index: {i} ~~~")
            # f._basic_print()
            _data = f.to_dict()
            _expected.append(
                {
                    "coeff_coords": _data["coeff_coords"],
                    "coeff_data": _data["coeff_data"],
                }
            )
        _expected_by_orbit.append(_expected)
    print(xtal.pretty_json(_expected_by_orbit))


def assert_expected_cluster_functions(
    functions,
    expected_by_orbit,
):
    assert len(functions) == len(expected_by_orbit)
    for i_orbit in range(len(functions)):
        prototype_cluster_functions = functions[i_orbit][0]
        assert_expected_functions(
            prototype_cluster_functions,
            expected_by_orbit[i_orbit],
        )


def print_expected_cluster_functions_detailed(
    functions, file: Optional[pathlib.Path] = None
):
    """Print functions on the prototype clusters

    Parameters
    ----------
    functions: list[list[list[PolynomialFunction]]]
        Output from :func:`casm.best.make_cluster_functions`.

    """

    data = {"functions": []}

    for i_orbit, orbit in enumerate(functions):
        orbit_data = []
        for i_equiv, equiv in enumerate(orbit):
            equiv_data = []
            for i_func, func in enumerate(equiv):
                d = func.to_dict()
                d["i_orbit"] = i_orbit
                d["i_equiv"] = i_equiv
                d["i_func"] = i_func
                orbit_data.append(d)
            orbit_data.append(equiv_data)
        data["functions"].append(orbit_data)

    if file is not None:
        with open(file, "w") as f:
            f.write(xtal.pretty_json(data))
    else:
        print(xtal.pretty_json(data))


def assert_expected_cluster_functions_detailed(
    functions,
    expected,
):
    exact_keys = [
        "coeff_coords",
        "coeff_shape",
        "monomial_exponents",
        "tex_coeff",
        "tex_prefactor",
        "variable_subsets",
        "variables",
    ]
    approx_keys = ["coeff_data"]

    assert "functions" in expected
    assert len(expected["functions"]) == len(functions)
    for i_orbit, orbit_expected in enumerate(expected["functions"]):
        assert len(functions[i_orbit]) == len(orbit_expected)
        for i_equiv, equiv_expected in enumerate(orbit_expected):
            assert len(functions[i_orbit][i_equiv]) == len(equiv_expected)
            for i_func, func_expected in enumerate(equiv_expected):
                func = functions[i_orbit][i_equiv][i_func].to_dict()
                for key in exact_keys:
                    assert func_expected[key] == func[key]
                for key in approx_keys:
                    assert np.allclose(func_expected[key], func[key])
