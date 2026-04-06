"""Tests for casm.bset.autoconfigure()"""

import os
from unittest.mock import MagicMock, patch

import pytest

import casm.bset


def _make_mock_run(returncode=0):
    """Return a mock subprocess.run that always returns the given returncode."""
    mock = MagicMock()
    mock.return_value = MagicMock(returncode=returncode)
    return mock


def test_autoconfigure_apply_results_sets_env_vars():
    """apply_results=True must write successful vars into os.environ."""
    user_vars = [
        dict(
            CASM_CXXFLAGS="-O3 -Wall -fPIC --std=c++17",
            CASM_SOFLAGS="-shared",
        )
    ]

    # Remove the keys so we can verify they get set
    for key in ("CASM_CXXFLAGS", "CASM_SOFLAGS", "CASM_PREFIX"):
        os.environ.pop(key, None)

    with patch("subprocess.run", _make_mock_run(returncode=0)):
        casm.bset.autoconfigure(
            apply_results=True,
            user_vars=user_vars,
        )

    assert os.environ.get("CASM_CXXFLAGS") == "-O3 -Wall -fPIC --std=c++17"
    assert os.environ.get("CASM_SOFLAGS") == "-shared"
    # CASM_PREFIX not in test_vars — must be set to the default prefix
    assert "CASM_PREFIX" in os.environ
    assert len(os.environ["CASM_PREFIX"]) > 0

    # Cleanup
    for key in ("CASM_CXXFLAGS", "CASM_SOFLAGS", "CASM_PREFIX"):
        os.environ.pop(key, None)


def test_autoconfigure_apply_results_sets_prefix_when_not_in_vars():
    """apply_results=True must set CASM_PREFIX to the default when not in test_vars."""
    user_vars = [
        dict(
            CASM_CXXFLAGS=None,
            CASM_SOFLAGS=None,
        )
    ]

    os.environ.pop("CASM_PREFIX", None)

    with patch("subprocess.run", _make_mock_run(returncode=0)):
        casm.bset.autoconfigure(
            apply_results=True,
            user_vars=user_vars,
        )

    assert "CASM_PREFIX" in os.environ
    assert len(os.environ["CASM_PREFIX"]) > 0

    # Cleanup
    os.environ.pop("CASM_PREFIX", None)


def test_autoconfigure_apply_results_removes_none_vars():
    """apply_results=True must remove vars whose successful value is None."""
    user_vars = [
        dict(
            CASM_CXXFLAGS=None,
            CASM_SOFLAGS=None,
        )
    ]

    # Pre-populate the environment with sentinel values
    os.environ["CASM_CXXFLAGS"] = "old_cxxflags"
    os.environ["CASM_SOFLAGS"] = "old_soflags"

    with patch("subprocess.run", _make_mock_run(returncode=0)):
        casm.bset.autoconfigure(
            apply_results=True,
            user_vars=user_vars,
        )

    assert "CASM_CXXFLAGS" not in os.environ
    assert "CASM_SOFLAGS" not in os.environ


def test_autoconfigure_no_apply_results_restores_env():
    """apply_results=False must leave os.environ unchanged after the call."""
    user_vars = [
        dict(
            CASM_CXXFLAGS="-O3 -Wall -fPIC --std=c++17",
            CASM_SOFLAGS="-shared",
        )
    ]

    os.environ["CASM_CXXFLAGS"] = "original_cxxflags"
    os.environ.pop("CASM_SOFLAGS", None)

    with patch("subprocess.run", _make_mock_run(returncode=0)):
        casm.bset.autoconfigure(
            apply_results=False,
            user_vars=user_vars,
        )

    assert os.environ.get("CASM_CXXFLAGS") == "original_cxxflags"
    assert "CASM_SOFLAGS" not in os.environ

    # Cleanup
    os.environ.pop("CASM_CXXFLAGS", None)


def test_autoconfigure_apply_results_raises_when_all_fail():
    """apply_results=True must raise when no configuration succeeds."""
    user_vars = [dict(CASM_CXXFLAGS="bad_flags", CASM_SOFLAGS="bad_soflags")]

    with patch("subprocess.run", _make_mock_run(returncode=1)):
        with pytest.raises(Exception, match="No successful configuration found"):
            casm.bset.autoconfigure(
                apply_results=True,
                user_vars=user_vars,
                # Avoid running the built-in sets to keep the test fast; pass only
                # the known-failing user_vars and rely on the built-in sets also
                # failing via the same mock.
            )
