{#
blocks:
- global_includes (inherited from base.cpp)
- namespace_clexulator_decls (inherited from base.cpp)
- clexulator_public_decl (inherited from base.cpp)
- clexulator_private_decl (inherited from base.cpp)
- clexulator_def (inherited from base.cpp)

variables:
- clexulator_name
- clexulator_bfunc_decl
- n_functions
- n_point_corr_sites
- clexulator_constructor_def
- clexulator_destructor_def
- clexulator_bfunc_def
- clexulator_public_function_def
- clexulator_private_function_def
#}
{% extends "base.cpp" %}

{% block namespace_clexulator_decls %}
typedef ClexParamPack base_param_pack_type;
typedef BasicClexParamPack param_pack_type;
{% endblock %}

{% block clexulator_public_decl %}
  base_param_pack_type const &param_pack() const override { return m_params; }

  base_param_pack_type &param_pack() override { return m_params; }
{% endblock %}

{% block clexulator_private_decl %}
  {{ super() }}
  {{ clexulator_bfunc_decl }}

  // ParamPack object, which stores temporary data for calculations
  mutable ParamPack m_params;

  // typedef for method pointers of scalar type double
  typedef double (
      {{ clexulator_name }}::*BasisFuncPtr)() const;

  // typedef for method pointers
  typedef double (
      {{ clexulator_name }}::*DeltaBasisFuncPtr)(int, int) const;

  // array of pointers to member functions for calculating basis functions of
  // scalar type double
  BasisFuncPtr m_orbit_func_table[{{ n_functions }}];

  // array of pointers to member functions for calculating flower functions of
  // scalar type double
  BasisFuncPtr m_flower_func_table[{{ n_point_corr_sites }}][{{ n_functions }}];

  // array of pointers to member functions for calculating DELTA flower
  // functions of scalar type double
  DeltaBasisFuncPtr m_delta_func_table[{{ n_point_corr_sites }}][{{ n_functions }}];

  // Occupation site basis functions:
  // m_occ_site_basis[basis_site_index][function_index][occupant_index]
  std::vector<std::vector<std::vector<double>>> m_occ_func;

  // ClexParamPack allocation for evaluated correlations
  ParamPack::Key m_corr_param_key;
  // ClexParamPack allocation for DoF occ
  ParamPack::Key m_occ_site_func_param_key;

  /// \brief Calculate contribution to global correlations from one unit cell
  /// Result is recorded in ClexParamPack
  void _calc_global_corr_contribution() const override;

  /// \brief Calculate contribution to global correlations from one unit cell
  /// /// Result is recorded in double array starting at corr_begin
  void _calc_global_corr_contribution(double *corr_begin) const override;

  /// \brief Calculate contribution to select global correlations from one unit
  /// cell into ClexParamPack Result is recorded in ClexParamPack
  void _calc_restricted_global_corr_contribution(
      size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate contribution to select global correlations from one unit
  /// cell Result is recorded in double array starting at corr_begin
  void _calc_restricted_global_corr_contribution(
      double *corr_begin, size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the
  /// neighborhood Result is recorded in ClexParamPack
  void _calc_point_corr(int nlist_ind) const override;

  /// \brief Calculate point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the
  /// neighborhood Result is recorded in double array starting at corr_begin
  void _calc_point_corr(int nlist_ind, double *corr_begin) const override;

  /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the
  /// neighborhood Result is recorded in ClexParamPack
  void _calc_restricted_point_corr(
      int nlist_ind, size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the
  /// neighborhood Result is recorded in double array starting at corr_begin
  void _calc_restricted_point_corr(
      int nlist_ind, double *corr_begin, size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate the change in point correlations due to changing an
  /// occupant at neighbor site 'nlist_ind' For global clexulators, 'nlist_ind'
  /// only ranges over sites in the cell For local clexulators, 'nlist_ind'
  /// ranges over all sites in the neighborhood Result is recorded in
  /// ClexParamPack
  void _calc_delta_point_corr(int nlist_ind, int occ_i,
                              int occ_f) const override;

  /// \brief Calculate the change in point correlations due to changing an
  /// occupant at neighbor site 'nlist_ind' For global clexulators, 'nlist_ind'
  /// only ranges over sites in the cell For local clexulators, 'nlist_ind'
  /// ranges over all sites in the neighborhood Result is recorded in double
  /// array starting at corr_begin
  void _calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f,
                              double *corr_begin) const override;

  /// \brief Calculate the change in select point correlations due to changing
  /// an occupant at neighbor site 'nlist_ind' For global clexulators,
  /// 'nlist_ind' only ranges over sites in the cell For local clexulators,
  /// 'nlist_ind' ranges over all sites in the neighborhood Result is recorded
  /// in ClexParamPack
  void _calc_restricted_delta_point_corr(
      int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  /// \brief Calculate the change in select point correlations due to changing
  /// an occupant at neighbor site 'nlist_ind' For global clexulators,
  /// 'nlist_ind' only ranges over sites in the cell For local clexulators,
  /// 'nlist_ind' ranges over all sites in the neighborhood Result is recorded
  /// in double array starting at corr_begin
  void _calc_restricted_delta_point_corr(
      int nlist_ind, int occ_i, int occ_f, double *corr_begin,
      size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;

  template <typename Scalar>
  void _global_prepare() const;

  template <typename Scalar>
  void _point_prepare(int nlist_ind) const;

  // default functions for basis function evaluation
  template <typename Scalar>
  Scalar zero_func() const {
    return Scalar(0.0);
  }

  template <typename Scalar>
  Scalar zero_func(int, int) const {
    return Scalar(0.0);
  }
{% endblock %}

{% block clexulator_def %}
{{ clexulator_constructor_def }}
{{ clexulator_destructor_def }}
{{ clexulator_bfunc_def }}
{{ clexulator_private_def }}
{% endblock %}