#include <cstddef>

#include "casm/clexulator/BaseClexulator.hh"
#include "casm/clexulator/BasicClexParamPack.hh"
#include "casm/global/eigen.hh"

/****** PROJECT SPECIFICATIONS ******

****** prim.json ******
{{ prim_json }}

****** bspecs.json ******
{{ bspecs_json }}

**/

/// \brief Returns a clexulator::BaseClexulator* owning a
/// {{ clexulator_name }}
extern "C" CASM::clexulator::BaseClexulator *
{{ clexulator_name }}();

namespace CASM {
namespace clexulator {

/****** GENERATED CLEXPARAMPACK DEFINITION ******/

typedef ClexParamPack base_param_pack_type;
typedef BasicClexParamPack param_pack_type;

/****** GENERATED CLEXULATOR DEFINITION ******/

class {{ clexulator_name }}
    : public clexulator::BaseClexulator {
 public:

  {{ clexulator_name }}();

  ~{{ clexulator_name }}();

  base_param_pack_type const &param_pack() const override {
    throw std::runtime_error("param_pack() const is not implemented");
  }

  base_param_pack_type &param_pack() override {
    throw std::runtime_error("param_pack() is not implemented");
  }

  {{ eval_bfunc_decl }}

  {{ site_eval_bfunc_decl }}

  {{ site_deval_bfunc_decl }}


 private:

  // TODO: data members

  /// \brief Clone the {{ clexulator_name }}
  BaseClexulator *_clone() const override {
    return new {{ clexulator_name }}(*this);
  }

  // Methods that write to double array starting at corr_begin:

  // void _calc_global_corr_contribution(double *corr_begin) const override;
  {{ calc_global_corr_contribution_decl }}

  // void _calc_restricted_global_corr_contribution(
  //    double *corr_begin, size_type const *ind_list_begin,
  //    size_type const *ind_list_end) const override;
  {{ calc_restricted_global_corr_contribution_decl }}

  // void _calc_point_corr(int nlist_ind, double *corr_begin) const override;
  {{ calc_point_corr_decl }}

  // void _calc_restricted_point_corr(
  //     int nlist_ind, double *corr_begin, size_type const *ind_list_begin,
  //     size_type const *ind_list_end) const override;
  {{ calc_restricted_point_corr_decl }}

  void _calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f,
                              double *corr_begin) const override;

  void _calc_restricted_delta_point_corr(
      int nlist_ind, int occ_i, int occ_f, double *corr_begin,
      size_type const *ind_list_begin,
      size_type const *ind_list_end) const override;
  {{ calc_delta_point_corr_decl }}

  {{ calc_restricted_delta_point_corr_def }}

  {{ member_decl }}

  // template <typename Scalar>
  // void _point_prepare(int nlist_ind) const;

  // template <typename Scalar>
  // void _global_prepare() const;

};

{{ member_def }}

}  // namespace clexulator
}  // namespace CASM

extern "C" {
/// \brief Returns a clexulator::BaseClexulator* owning a
/// {{ clexulator_name }}
CASM::clexulator::BaseClexulator *
make_{{ clexulator_name }}() {
  return new CASM::clexulator::{{ clexulator_name }}();
}
}
