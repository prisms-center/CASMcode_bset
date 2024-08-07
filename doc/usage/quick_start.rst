
Quick start
===========

Construct ClexBasisSpecs
-------------------------

A :class:`ClexBasisSpecs` object is used to define a cluster expansion basis set by specifying:

- :class:`ClusterSpecs`: the cluster orbits to include in the basis set, and
- :class:`BasisFunctionSpecs`: the type and order of basis functions to construct.

Given a :class:`~libcasm.configuration.Prim`, :class:`ClexBasisSpecs` can be constructed directly, or more conveniently by using one of the following methods:

- from a Python dict / JSON using the :func:`ClexBasisSpecs.from_dict` method, using the format described `here <https://prisms-center.github.io/CASMcode_docs/formats/casm/clex/ClexBasisSpecs/>`_, or
- using the :func:`casm.bset.make_clex_basis_specs` method.


Example 1: Construct a ClexBasisSpecs object from a Python dict

.. code-block:: Python

    import libcasm.configuration as casmconfig
    import libcasm.xtal.prims as xtal_prims
    from casm import ClexBasisSpecs

    # Construct a ternary FCC prim
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A", "B", "C"],
    )
    prim = casmconfig.Prim(xtal_prim)

    # Define a cluster expansion basis set using a Python dict
    clex_basis_specs = ClexBasisSpecs.from_dict(
        data ={
            "basis_function_specs": {
                "dof_specs": {
                    "occ": { "site_basis_functions": "occupation" }
                }
            },
            "cluster_specs": {
                "orbit_branch_specs": {
                    "0": { "max_length": 0.0 },
                    "1": { "max_length": 0.0 },
                    "2": { "max_length": 3.01 },
                    "3": { "max_length": 2.01 }
                },
            }
        },
        prim=prim,
    )


Example 2: Construct a ClexBasisSpecs object using the :func:`~libcasm.bset.make_clex_basis_specs` method

.. code-block:: Python

    import libcasm.configuration as casmconfig
    import libcasm.xtal.prims as xtal_prims
    from casm.bset import make_clex_basis_specs

    # Construct a ternary FCC prim
    xtal_prim = xtal_prims.FCC(
        r=0.5,
        occ_dof=["A", "B", "C"],
    )
    prim = casmconfig.Prim(xtal_prim)

    # Construct ClexBasisSpecs
    # max_length: maximum site-to-site distance
    #     for null, point, pair, triplet clusters
    # occ_site_basis_functions_specs: site basis
    #     function type for occupation DoFs
    clex_basis_specs = make_clex_basis_specs(
        prim=prim,
        max_length=[0.0, 0.0, 3.01, 2.01],
        occ_site_basis_functions_specs="occupation",
    )


Write a Clexulator source file
------------------------------

CASM generates custom code for very efficient calculation of basis functions given a particular :class:`~libcasm.configuration.Prim` and choice of cluster expansion basis functions. This source code is written to a file and then may be compiled, linked, and used at runtime via the class :class:`~libcasm.clexulator.Clexulator` (clexulator = CLuster EXpansion calcULATOR). For more details, see `The CASM Clexulator <https://prisms-center.github.io/CASMcode_pydocs/libcasm/clexulator/2.0/usage/cluster_expansion_details.html#the-casm-clexulator>`_.

The method :func:`casm.bset.write_clexulator` takes a :class:`ClexBasisSpecs` to specify the choice of cluster expansion basis functions, and writes the Clexulator source code to a file (or multiple files if a local cluster expansion). Once written, it can be compiled and used to calculate the average values of the cluster expansion basis functions (called "correlations") for a :class:`~libcasm.configuration.Configuration`.

Example: Writing and using a Clexulator to evaluate correlations

.. code-block:: Python

    import pathlib
    import libcasm.clexulator as casmclex
    from casm.bset import write_clexulator

    # Write the Clexulator source code to `src_path`
    # bset_dir: pathlib.Path
    #     The directory to write the Clexulator source file
    # src_path: pathlib.Path
    #    The path to the Clexulator source file (or a
    #    prototype Clexulator source file if a local cluster
    #    expansion).
    # local_src_path: Optional[list[pathlib.Path]]
    #    If a local cluster expansion, the paths to the local
    #    Clexulator source files.
    # prim_neighbor_list: libcasm.clexulator.PrimNeighborList
    #    The neighbor list for the prim
    src_path, local_src_path, prim_neighbor_list = write_clexulator(
        prim=prim,
        clex_basis_specs=clex_basis_specs,
        bset_dir=bset_dir,
        project_name="TestProject",
        bset_name="default",
    )

    # Compile and construct a Clexulator
    clexulator = casmclex.make_clexulator(
        source=str(src_path),
        prim_neighbor_list=prim_neighbor_list,
    )


    # Construct a Supercell (conventional FCC cubic cell)
    supercell = casmconfig.Supercell(
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

    # Construct a neighbor list for the supercell
    supercell_neighbor_list = casmclex.SuperNeighborList(
        supercell.transformation_matrix_to_super,
        prim_neighbor_list,
    )

    # Construct a default Configuration (with [A, B, B, C] occupation)
    config = casmconfig.Configuration(supercell)
    config.set_occupation([0, 1, 1, 2])

    # Construct a correlations calculator, pointed at `config`'s DoF values
    corr = casmclex.Correlations(
        supercell_neighbor_list=supercell_neighbor_list,
        clexulator=clexulator,
        config_dof_values=config.dof_values,
    )

    # Evaluate the correlations
    # correlation_values: np.ndarray, the correlation values
    correlation_values = corr.per_unitcell(corr.per_supercell())