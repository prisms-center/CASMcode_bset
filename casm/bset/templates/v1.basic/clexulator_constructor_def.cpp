/// \brief Constructor
{{ clexulator_name }}::{{ clexulator_name }}()
    {%- raw %}
    // BaseClexulator({{ nlist_size }}, {{ n_corr }}, {{ n_point_corr_sites }})
    {% endraw %}
    : BaseClexulator({{ nlist_size }}, {{ n_corr }}, {{ n_point_corr_sites }}) {

  // Occupation site basis functions
  {%- raw %}
  // m_occ_func_{{ sublattice_index }}_{{ site_function_index }}[{{ occupant_index }}]] = {{ value }};
  {% endraw %}
  {% for site_funcs in occ_site_functions %}
    {% set sublattice_index = site_funcs.sublattice_index %}
    {% for func in site_funcs.functions %}
      {% set site_function_index  = loop.index0 %}
      {% for value in func %}
        {% set occupant_index = loop.index0 %}
  m_occ_func_{{ sublattice_index }}_{{ site_function_index }}[{{ occupant_index }}] = {{ value }};
      {% endfor %}
    {% endfor %}
  {% endfor %}

  // Parameter packs
  {%- raw %}
  // m_{{ param.name }}_param_key = m_params.allocate("{{ param.name }}", {{ param.rows }}, {{ param.cols }}, {{ param.is_independent }});
  {% endraw %}
  {% for param in params %}
  m_{{ param.name }}_param_key = m_params.allocate("{{ param.name }}", {{ param.rows }}, {{ param.cols }}, {{ param.is_independent }});
  {% endfor %}

  // Register continuous DoF
  {%- raw %}
  // _register_global_dof("{{ dof.key }}", m_{{ dof.paramname }}_param_key.index());
  // _register_local_dof("{{ dof.key }}", m_{{ dof.paramname }}_param_key.index());
  {% endraw %}
  {% if continuous_dof %}
    {% for dof in continuous_dof %}
      {% if dof.is_global %}
  _register_global_dof("{{ dof.key }}", m_{{ dof.paramname }}_param_key.index());
      {% else %}
  _register_local_dof("{{ dof.key }}", m_{{ dof.paramname }}_param_key.index());
      {% endif %}
    {% endfor %}
  {% else %}
  // (none)
  {% endif %}

  // Orbit functions (evaluate functions without duplication)
  {%- raw %}
  // m_orbit_func_table[{{ function_index }}] = &{{ clexulator_name }}::eval_orbit_bfunc_{{ function_index }}<double>;
  {% endraw %}
  {% for func in orbit_bfuncs %}
    {% set function_index = func.linear_function_index %}
  m_orbit_func_table[{{ function_index }}] = &{{ clexulator_name }}::eval_orbit_bfunc_{{ function_index }}<double>;
  {% endfor %}

  // Site functions
  {%- raw %}
  // m_site_func_table[{{ site_bfunc.neighbor_index }}][{{ function_index }}] =
  //     &{{ clexulator_name }}::eval_site_bfunc_{{ function_index }}_at_{{ site_bfunc.neighbor_index }}<double>;
  {% endraw %}
  {% for func in functions %}
    {% set function_index = loop.index0 %}
    {% for site_bfunc in func.site_bfunc %}
      {% if site_bfunc.cpp %}
  m_site_func_table[{{ site_bfunc.neighbor_index }}][{{ function_index }}] = &{{ clexulator_name }}::eval_site_bfunc_{{ function_index }}_at_{{ site_bfunc.neighbor_index }}<double>;
      {% else %}
  m_site_func_table[{{ site_bfunc.neighbor_index }}][{{ function_index }}] = &{{ clexulator_name }}::zero_func<double>;
      {% endif %}
    {% endfor %}
  {% endfor %}

  // Change in site functions due to an occupant change
  {%- raw %}
  // m_occ_delta_site_func_table[{{ site_bfunc.neighbor_index }}][{{ function_index }}] =
  //     &{{ clexulator_name }}::eval_occ_delta_site_bfunc_{{ function_index }}_at_{{ site_bfunc.neighbor_index }}<double>;
  {% endraw %}
  {% for func in functions %}
    {% set function_index = loop.index0 %}
    {% for site_bfunc in func.site_bfunc %}
      {% if site_bfunc.cpp %}
  m_occ_delta_site_func_table[{{ site_bfunc.neighbor_index }}][{{ function_index }}] = &{{ clexulator_name }}::eval_occ_delta_site_bfunc_{{ function_index }}_at_{{ site_bfunc.neighbor_index }}<double>;
      {% else %}
  m_occ_delta_site_func_table[{{ site_bfunc.neighbor_index }}][{{ function_index }}] = &{{ clexulator_name }}::zero_func<double>;
      {% endif %}
    {% endfor %}
  {% endfor %}

  // Neighbor list shape weight matrix
  m_weight_matrix.row(0) << {{ nlist_weight_matrix[0][0] }}, {{ nlist_weight_matrix[0][1] }}, {{ nlist_weight_matrix[0][2] }};
  m_weight_matrix.row(1) << {{ nlist_weight_matrix[1][0] }}, {{ nlist_weight_matrix[1][1] }}, {{ nlist_weight_matrix[1][2] }};
  m_weight_matrix.row(2) << {{ nlist_weight_matrix[2][0] }}, {{ nlist_weight_matrix[2][1] }}, {{ nlist_weight_matrix[2][2] }};

  // Indices of sublattices included in functions
  m_sublat_indices = std::set<int>{ {% if nlist_sublattice_indices %}
    {%- for i in nlist_sublattice_indices -%} {{ i }},{% endfor %}{% endif %} };

  // Total number of sublattices in prim
  m_n_sublattices = {{ nlist_total_n_sublattice }};
}

