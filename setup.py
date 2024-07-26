__version__ = "2.0a1"

# Available at setup time due to pyproject.toml
from setuptools import setup

setup(
    name="casm-bset",
    version=__version__,
    packages=["casm", "casm.bset"],
    install_requires=[],
)
