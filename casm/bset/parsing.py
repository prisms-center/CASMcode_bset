import inspect
import typing

import numpy as np


def to_dict(
    value: typing.Any,
    data: dict,
    option: str,
    write_null: bool = False,
    write_empty: bool = False,
    **kwargs,
):
    """Helper for implementing `to_dict` methods

    Notes
    -----

    - Converts `np.ndarray`, `set`, and `tuple` to `list`.
    - By default, skips adding values which are None, or empty `set`, `list`, `tuple`,
      or `dict`.
    - Calls the `to_dict` method for `value` types for which it exists, and optionally
      passes through `kwargs`.

    Parameters
    ----------
    value: typing.Any
        Value to be added to the dict.
    data: dict
        The dict that `value` is being added to
    option: str
        The attribute that `value` is being assigned to
    write_null: bool = False
        If `write_null` is False, no attribute will be inserted if `value` is None.
        Otherwise, None will be assigned a the `option` attribute.
    write_empty: bool = False
        if `write_empty` is False, no attribute will be inserted if `value` is
        length 0. Applies only to `np.ndarray`, `list`, `set`, and `dict`. Otherwise,
        an empty list is added for `np.ndarray`, `list`, or `set` values, or an
        empty `dict` is added for `dict` values.
    **kwargs
         Arguments to be passed through to the `to_dict` method of the `value` type.

    """
    if value is None:
        if write_null:
            data[option] = None
        return

    if isinstance(value, np.ndarray):
        value = np.ndarray.tolist()

    if isinstance(value, (list, set, tuple)):
        if len(value) == 0:
            if write_empty is True:
                data[option] = []
            return
        data[option] = list(value)
        return

    if isinstance(value, (dict)):
        if len(value) == 0:
            if write_empty is True:
                data[option] = {}
            return
        data[option] = value
        return

    # all other types
    members = [x[0] for x in inspect.getmembers(value.__class__)]
    if "to_dict" in members:
        data[option] = value.to_dict(**kwargs)
    else:
        data[option] = value
    return


def required_from_dict(required_type: typing.Any, data: dict, option: str, **kwargs):
    if option not in data:
        raise Exception(
            f"Error parsing dict: missing required '{option}'"
            f"of type '{required_type.__name__}'"
        )
    try:
        members = [x[0] for x in inspect.getmembers(required_type)]
        if "from_dict" in members:
            value = required_type.from_dict(data.get(option), **kwargs)
        else:
            value = required_type(data.get(option))
    except Exception as e:
        print("what:", e)
        raise Exception(
            f"Error parsing dict: failed converting required '{option}'"
            f"to type '{required_type.__name__}'"
        )
    return value


def required_int_array_from_dict(data: dict, option: str):
    if option not in data:
        raise Exception(
            f"Error parsing dict: missing required '{option}'"
            f"of integer array-like type"
        )
    try:
        value = np.array(data.get(option), dtype="int")
    except Exception as e:
        print("what:", e)
        raise Exception(
            f"Error parsing dict: failed converting required '{option}'"
            f"to integer array"
        )
    return value


def required_array_from_dict(data: dict, option: str):
    if option not in data:
        raise Exception(
            f"Error parsing dict: missing required '{option}'" f"of array-like type"
        )
    try:
        value = np.array(data.get(option))
    except Exception as e:
        print("what:", e)
        raise Exception(
            f"Error parsing dict: failed converting required '{option}' to array"
        )
    return value


def optional_from_dict(
    required_type: typing.Any,
    data: dict,
    option: str,
    default_value: typing.Any = None,
    **kwargs,
):
    value = data.get(option)
    if value is not None:
        members = [x[0] for x in inspect.getmembers(required_type)]
        if "from_dict" in members:
            return required_type.from_dict(value, **kwargs)
        else:
            return required_type(value)
    return default_value
