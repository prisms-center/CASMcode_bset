/// \brief Calculate contribution to global correlations from one unit cell
void {{ clexulator_name }}::_calc_global_corr_contribution(
    double *corr_begin) const {
  _calc_global_corr_contribution();
  for (size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) =
        ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate contribution to global correlations from one unit cell
void {{ clexulator_name }}::_calc_global_corr_contribution() const {
  m_params.pre_eval();
  {
    _global_prepare<double>();
    for (size_type i = 0; i < corr_size(); i++) {
      ParamPack::Val<double>::set(m_params, m_corr_param_key, i,
                                  (this->*m_orbit_func_table[i])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate contribution to select global correlations from one unit cell
void {{ clexulator_name }}::_calc_restricted_global_corr_contribution(
    double *corr_begin,
    size_type const *ind_list_begin,
    size_type const *ind_list_end) const {
  _calc_restricted_global_corr_contribution(ind_list_begin, ind_list_end);
  for(; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate contribution to select global correlations from one unit cell
void {{ clexulator_name }}::_calc_restricted_global_corr_contribution(size_type const *ind_list_begin, size_type const *ind_list_end) const {
  m_params.pre_eval();
  {
    _global_prepare<double>();
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      ParamPack::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_orbit_func_table[*ind_list_begin])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate point correlations about basis site 'nlist_ind'
void {{ clexulator_name }}::_calc_point_corr(int nlist_ind, double *corr_begin) const {
  _calc_point_corr(nlist_ind);
  for(size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) = ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate point correlations about basis site 'nlist_ind'
void {{ clexulator_name }}::_calc_point_corr(int nlist_ind) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for(size_type i = 0; i < corr_size(); i++) {
      ParamPack::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_site_func_table[nlist_ind][i])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate select point correlations about basis site 'nlist_ind'
void {{ clexulator_name }}::_calc_restricted_point_corr(int nlist_ind, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
  _calc_restricted_point_corr(nlist_ind, ind_list_begin, ind_list_end);
  for(; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate select point correlations about basis site 'nlist_ind'
void {{ clexulator_name }}::_calc_restricted_point_corr(int nlist_ind, size_type const *ind_list_begin, size_type const *ind_list_end) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      ParamPack::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_site_func_table[nlist_ind][*ind_list_begin])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate the change in point correlations due to changing an occupant
void {{ clexulator_name }}::_calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin) const {
  _calc_delta_point_corr(nlist_ind, occ_i, occ_f);
  for(size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) = ParamPack::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate the change in point correlations due to changing an occupant
void {{ clexulator_name }}::_calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for(size_type i = 0; i < corr_size(); i++) {
      ParamPack::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_occ_delta_site_func_table[nlist_ind][i])(occ_i, occ_f));
    }
  }
  m_params.post_eval();
}

/// \brief Calculate the change in select point correlations due to changing an occupant
void {{ clexulator_name }}::_calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
  _calc_restricted_delta_point_corr(nlist_ind, occ_i, occ_f, ind_list_begin, ind_list_end);
  for(; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = ParamPack::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate the change in select point correlations due to changing an occupant
void {{ clexulator_name }}::_calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin, size_type const *ind_list_end) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      ParamPack::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_occ_delta_site_func_table[nlist_ind][*ind_list_begin])(occ_i, occ_f));
    }
  }
  m_params.post_eval();
}

// Prepare variables for global corr evaluation
template<typename Scalar>
void {{ clexulator_name }}::_global_prepare() const {
  if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
    {%- raw %}
    ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0, eval_occ_func_0_0(0));
    {% endraw %}
  }
}

// Prepare variables for point corr evaluation
template<typename Scalar>
void {{ clexulator_name }}::_point_prepare(int nlist_ind) const {
  switch(nlist_ind) {
  case 0:
  if(m_params.eval_mode(m_occ_site_func_param_key) != ParamPack::READ) {
    {%- raw %}
    // ParamPack::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0, eval_occ_func_0_0(0));
    {% endraw %}
  }
}

{% raw %}
// template<typename Scalar>
// Scalar {{ clexulator_name }}::eval_bfunc_{{ function_index }}() const {
//   // orbit_index: {{ orbit_index }}
//   return {{ factored_orbit_prefix }}(
//     {{ factored_cluster_prefix_0 }}({{ factored_cluster_function_0 }})
//     + {{ factored_cluster_prefix_1 }}({{ factored_cluster_function_1 }})
//     ...
//     ) / {{ orbit_mult }};
// }
{% endraw %}
{% for func in orbit_bfuncs %}
  {% set function_index = func.linear_function_index %}
  {% set orbit_index = func.linear_orbit_index %}
  {% set cpp = func.cpp %}
template<typename Scalar>
Scalar {{ clexulator_name }}::eval_orbit_bfunc_{{ function_index }}() const {
  // orbit_index: {{ orbit_index }}
  // function_index: {{ function_index }}
  return {{ cpp }};
}
{% endfor %}

