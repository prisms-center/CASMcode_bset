import copy
import json
import pathlib
import shutil

import libcasm.clexmonte as clexmonte
import libcasm.configuration as casmconfig
import libcasm.enumerate as casmenum
import libcasm.monte.sampling as monte_sampling
import libcasm.xtal as xtal
from casm.bset import (
    make_clex_basis_specs,
    write_clexulator,
)

### Parameters ###

project_dir = pathlib.Path("Clex_ZrO_Occ")
project_name = "ZrO"
bset_name = "formation_energy"
system_dir = project_dir / "systems" / "system.1"
output_dir = pathlib.Path("output")
regenerate_clexulator = False


### Clean any existing files ###
bset_dir = project_dir / "basis_sets" / f"bset.{bset_name}"
clexulator_name = f"{project_name}_Clexulator_{bset_name}"

if regenerate_clexulator:
    for ext in [".cc", ".o", ".so"]:
        filepath = bset_dir / (clexulator_name + ext)
        filepath.unlink(missing_ok=True)

    if output_dir.exists():
        shutil.rmtree(output_dir)

if True:
    ### Read system data ###
    with open(system_dir / "system.json", "r") as f:
        system_data = json.load(f)

    ### Construct the prim ###
    prim = casmconfig.Prim.from_dict(
        system_data["prim"],
    )

    ### Write the Clexulator ###
    clexulator_src = bset_dir / (clexulator_name + ".cc")
    if clexulator_src.exists() is False:
        clex_basis_specs_path = bset_dir / "bspecs.json"
        clex_basis_specs = make_clex_basis_specs(prim)

        src_path, local_src_path, prim_neighbor_list = write_clexulator(
            prim=system_data["prim"],
            clex_basis_specs=clex_basis_specs_path,
            bset_dir=bset_dir,
            project_name=project_name,
            bset_name=bset_name,
            version="v1.basic",
        )

    ### Construct system ###
    # Note: will compile Clexulator if necessary
    system = clexmonte.System.from_dict(
        data=system_data,
        search_path=[str(project_dir), str(system_dir)],
    )

    # construct a MonteCalculator for semi-grand canonical sampling
    calculator = clexmonte.MonteCalculator(
        method="semigrand_canonical",
        system=system,
    )

    # construct default sampling fixture parameters
    thermo = calculator.make_default_sampling_fixture_params(
        label="thermo",
        output_dir=str(output_dir),
    )

    # customize some completion check parameters
    monte_sampling.converge(
        calculator.sampling_functions, thermo.completion_check_params
    ).set_precision("param_composition", abs=0.002)
    thermo.completion_check_params.check_begin = 1000
    thermo.completion_check_params.check_period = 1000
    print(xtal.pretty_json(thermo.to_dict()))

    # generate configurations to find the minimum potential initial state
    config_list = []
    config_enum = casmenum.ConfigEnumAllOccupations(prim)
    for config in config_enum.by_supercell(supercells={"max": 6}):
        config_list.append(copy.deepcopy(config))

    # Run 10 times and collect results
    for i in range(41):
        print(f"Run {i} ...")
        # construct the initial state (use default configuration)
        initial_state, motif, motif_id = clexmonte.make_initial_state(
            calculator=calculator,
            motifs=config_list,
            conditions={
                "temperature": 600.0,
                "param_chem_pot": [-2.0 + i * 0.1],
            },
            min_volume=1000,
        )
        print("Initial state motif:\n", xtal.pretty_json(motif.to_dict()))
        print(
            "Monte Carlo supercell:\n",
            xtal.pretty_json(initial_state.configuration.supercell.to_dict()),
        )

        # state_in = copy.deepcopy(initial_state)
        sampling_fixture = calculator.run_fixture(
            state=initial_state,
            sampling_fixture_params=thermo,
        )
        assert isinstance(sampling_fixture, clexmonte.SamplingFixture)


### Read and plot some of the results
import numpy as np
from bokeh.models import Whisker
from bokeh.plotting import ColumnDataSource, figure, show

summary_file = output_dir / "summary.json"
with open(summary_file, "r") as f:
    summary = json.load(f)
stats = summary["statistics"]

comp_a = stats["param_composition"]["a"]
potential_energy = stats["potential_energy"]["value"]


prec = np.array(comp_a["calculated_precision"])
mean = np.array(comp_a["mean"])
upper = mean + prec
lower = mean - prec
xi = list(range(len(mean)))

mean_mean = np.mean(mean)
y_min = np.min(lower)
y_max = np.max(upper)

results = ColumnDataSource(
    data=dict(
        x=xi,
        y=mean,
        upper=upper,
        lower=lower,
        mean_mean=[mean_mean] * len(mean),
    )
)


y_range = (mean_mean - 1 * (y_max - y_min), mean_mean + 1 * (y_max - y_min))

p = figure(
    width=1200,
    height=600,
    x_range=(-1, len(mean)),
    y_range=y_range,
    x_axis_label="Replication",
    y_axis_label="comp(a)",
)
p.scatter(x="x", y="y", source=results, size=4, color="navy")
# p.line(x="x", y="mean_mean", source=results, line_color="navy")

error = Whisker(
    base="x",
    upper="upper",
    lower="lower",
    source=results,
    # **additional_params,
)
p.add_layout(error)

# show the results
show(p)
