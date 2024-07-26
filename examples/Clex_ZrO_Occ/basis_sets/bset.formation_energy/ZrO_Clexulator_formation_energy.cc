#include <cstddef>
#include "casm/clexulator/BaseClexulator.hh"
#include "casm/clexulator/BasicClexParamPack.hh"
#include "casm/global/eigen.hh"

namespace CASM {
namespace clexulator {

typedef ClexParamPack base_param_pack_type;
typedef BasicClexParamPack param_pack_type;

class ZrO_Clexulator_formation_energy
    : public clexulator::BaseClexulator {
 public:
  ZrO_Clexulator_formation_energy();

  ~ZrO_Clexulator_formation_energy();

  base_param_pack_type const &param_pack() const override { return m_params; }

  base_param_pack_type &param_pack() override { return m_params; }

 private:

  // Orbit functions (evaluate functions without duplication)
  // template<typename Scalar> Scalar eval_orbit_bfunc_{{ function_index }}() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_0() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_1() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_2() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_3() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_4() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_5() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_6() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_7() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_8() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_9() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_10() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_11() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_12() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_13() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_14() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_15() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_16() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_17() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_18() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_19() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_20() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_21() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_22() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_23() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_24() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_25() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_26() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_27() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_28() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_29() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_30() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_31() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_32() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_33() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_34() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_35() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_36() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_37() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_38() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_39() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_40() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_41() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_42() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_43() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_44() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_45() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_46() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_47() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_48() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_49() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_50() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_51() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_52() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_53() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_54() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_55() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_56() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_57() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_58() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_59() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_60() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_61() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_62() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_63() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_64() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_65() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_66() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_67() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_68() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_69() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_70() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_71() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_72() const;
  template<typename Scalar> Scalar eval_orbit_bfunc_73() const;

  // Site functions
  // template<typename Scalar> Scalar eval_site_bfunc_{{ function_index }}_at_{{ neighbor_list_index }}() const;
  template<typename Scalar> Scalar eval_site_bfunc_1_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_1_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_2_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_2_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_3_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_3_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_4_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_4_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_5_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_5_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_6_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_6_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_7_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_7_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_8_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_8_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_9_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_9_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_10_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_10_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_11_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_11_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_12_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_12_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_13_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_13_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_14_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_14_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_15_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_15_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_16_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_16_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_17_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_17_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_18_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_18_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_19_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_19_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_20_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_20_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_21_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_21_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_22_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_22_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_23_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_23_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_24_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_24_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_25_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_25_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_26_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_26_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_27_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_27_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_28_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_28_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_29_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_29_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_30_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_30_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_31_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_31_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_32_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_32_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_33_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_33_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_34_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_34_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_35_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_35_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_36_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_36_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_37_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_37_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_38_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_38_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_39_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_39_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_40_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_40_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_41_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_41_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_42_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_42_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_43_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_43_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_44_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_44_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_45_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_45_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_46_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_46_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_47_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_47_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_48_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_48_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_49_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_49_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_50_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_50_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_51_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_51_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_52_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_52_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_53_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_53_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_54_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_54_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_55_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_55_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_56_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_56_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_57_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_57_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_58_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_58_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_59_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_59_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_60_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_60_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_61_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_61_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_62_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_62_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_63_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_63_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_64_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_64_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_65_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_65_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_66_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_66_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_67_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_67_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_68_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_68_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_69_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_69_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_70_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_70_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_71_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_71_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_72_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_72_at_1() const;
  template<typename Scalar> Scalar eval_site_bfunc_73_at_0() const;
  template<typename Scalar> Scalar eval_site_bfunc_73_at_1() const;

  // Change in site functions due to an occupant change
  // template<typename Scalar> Scalar eval_occ_delta_site_bfunc_{{ function_index }}_at_{{ neighbor_list_index }}(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_1_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_1_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_2_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_2_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_3_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_3_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_4_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_4_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_5_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_5_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_6_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_6_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_7_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_7_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_8_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_8_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_9_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_9_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_10_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_10_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_11_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_11_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_12_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_12_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_13_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_13_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_14_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_14_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_15_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_15_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_16_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_16_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_17_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_17_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_18_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_18_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_19_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_19_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_20_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_20_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_21_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_21_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_22_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_22_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_23_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_23_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_24_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_24_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_25_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_25_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_26_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_26_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_27_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_27_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_28_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_28_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_29_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_29_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_30_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_30_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_31_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_31_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_32_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_32_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_33_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_33_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_34_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_34_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_35_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_35_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_36_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_36_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_37_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_37_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_38_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_38_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_39_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_39_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_40_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_40_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_41_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_41_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_42_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_42_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_43_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_43_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_44_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_44_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_45_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_45_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_46_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_46_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_47_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_47_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_48_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_48_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_49_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_49_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_50_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_50_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_51_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_51_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_52_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_52_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_53_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_53_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_54_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_54_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_55_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_55_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_56_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_56_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_57_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_57_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_58_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_58_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_59_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_59_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_60_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_60_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_61_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_61_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_62_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_62_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_63_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_63_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_64_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_64_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_65_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_65_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_66_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_66_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_67_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_67_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_68_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_68_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_69_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_69_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_70_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_70_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_71_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_71_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_72_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_72_at_1(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_73_at_0(int occ_i, int occ_f) const;
  template<typename Scalar> Scalar eval_occ_delta_site_bfunc_73_at_1(int occ_i, int occ_f) const;

  // param_pack_type object, which stores temporary data for calculations
  mutable param_pack_type m_params;

  // typedef for method pointers for basis functions and site functions
  typedef double (ZrO_Clexulator_formation_energy::*BasisFuncPtr)() const;

  // typedef for method pointers for change in site functions due to an occupant change
  typedef double (ZrO_Clexulator_formation_energy::*DeltaBasisFuncPtr)(int, int) const;

  // array of pointers to member functions for calculating basis functions
  // BasisFuncPtr m_orbit_func_table[{{ n_corr }}];
  BasisFuncPtr m_orbit_func_table[74];

  // array of pointers to member functions for calculating site functions
  // BasisFuncPtr m_site_func_table[{{ n_point_corr_sites }}][{{ n_corr }}];
  BasisFuncPtr m_site_func_table[2][74];

  // array of pointers to member functions for calculating change in site functions due to an occupant change
  // DeltaBasisFuncPtr m_occ_delta_site_func_table[{{ n_point_corr_sites }}][{{ n_corr }}];
  DeltaBasisFuncPtr m_occ_delta_site_func_table[2][74];

  // Occupation site basis functions
  // double m_occ_func_{{ sublattice_index }}_{{ site_function_index }}[{{ n_occupants }}];
  double m_occ_func_2_0[2];
  double m_occ_func_2_1[2];
  double m_occ_func_3_0[2];
  double m_occ_func_3_1[2];

  // Parameter packs
  // param_pack_type::Key m_{{ param.name }}_param_key;
  param_pack_type::Key m_corr_param_key;
  param_pack_type::Key m_occ_site_func_param_key;

  /// \brief Clone the ZrO_Clexulator_formation_energy
  BaseClexulator *_clone() const override {
    return new ZrO_Clexulator_formation_energy(*this);
  }

  // --- Standard method declarations --- //

  /// \brief Calculate contribution to global correlations from one unit cell
  /// Result is recorded in base_param_pack_type
  void _calc_global_corr_contribution() const override;

  /// \brief Calculate contribution to global correlations from one unit cell
  /// Result is recorded in double array starting at corr_begin
  void _calc_global_corr_contribution(double *corr_begin) const override;

  /// \brief Calculate contribution to select global correlations from one unit cell into base_param_pack_type
  /// Result is recorded in base_param_pack_type
  void _calc_restricted_global_corr_contribution(size_type const *ind_list_begin, size_type const *ind_list_end) const override;

  /// \brief Calculate contribution to select global correlations from one unit cell
  /// Result is recorded in double array starting at corr_begin
  void _calc_restricted_global_corr_contribution(double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

  /// \brief Calculate point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
  /// Result is recorded in base_param_pack_type
  void _calc_point_corr(int nlist_ind) const override;

  /// \brief Calculate point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
  /// Result is recorded in double array starting at corr_begin
  void _calc_point_corr(int nlist_ind, double *corr_begin) const override;

  /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
  /// Result is recorded in base_param_pack_type
  void _calc_restricted_point_corr(int nlist_ind, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

  /// \brief Calculate select point correlations about neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
  /// Result is recorded in double array starting at corr_begin
  void _calc_restricted_point_corr(int nlist_ind, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

  /// \brief Calculate the change in point correlations due to changing an occupant at neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
  /// Result is recorded in base_param_pack_type
  void _calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f) const override;

  /// \brief Calculate the change in point correlations due to changing an occupant at neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
  /// Result is recorded in double array starting at corr_begin
  void _calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin) const override;

  /// \brief Calculate the change in select point correlations due to changing an occupant at neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
  /// Result is recorded in base_param_pack_type
  void _calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

  /// \brief Calculate the change in select point correlations due to changing an occupant at neighbor site 'nlist_ind'
  /// For global clexulators, 'nlist_ind' only ranges over sites in the cell
  /// For local clexulators, 'nlist_ind' ranges over all sites in the neighborhood
  /// Result is recorded in double array starting at corr_begin
  void _calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const override;

  /// \brief Evaluate site basis functions and copy values to parameter packs
  /// for orbit function evaluation
  template<typename Scalar>
  void _global_prepare() const;

  /// \brief Evaluate site basis functions and copy values to parameter packs
  /// for site function evaluation
  template<typename Scalar>
  void _point_prepare(int nlist_ind) const;

  /// \brief Default zero function for orbit function evaluation
  template <typename Scalar>
  Scalar zero_func() const {
    return Scalar(0.0);
  }

  /// \brief Default zero function for site function evaluation
  template <typename Scalar>
  Scalar zero_func(int, int) const {
    return Scalar(0.0);
  }

  // --- Occupation function evaluators and accessors: --- //

  // double const &eval_occ_func_{{ sublattice_index }}_{{ site_function_index }}(const int &nlist_ind) const {
  //   return m_occ_func_{{ sublattice_index }}_{{ site_function_index }}[_occ(nlist_ind)];
  // }
  //
  // double const &occ_func_{{ sublattice_index }}_{{ site_function_index }}(const int &nlist_ind) const {
  //   return m_params.read(m_occ_site_func_param_key, {{ site_function_index }}, nlist_ind);
  // }

  double const &eval_occ_func_2_0(const int &nlist_ind) const {
    return m_occ_func_2_0[_occ(nlist_ind)];
  }

  double const &occ_func_2_0(const int &nlist_ind) const {
    return m_params.read(m_occ_site_func_param_key, 0, nlist_ind);
  }

  double const &eval_occ_func_2_1(const int &nlist_ind) const {
    return m_occ_func_2_1[_occ(nlist_ind)];
  }

  double const &occ_func_2_1(const int &nlist_ind) const {
    return m_params.read(m_occ_site_func_param_key, 1, nlist_ind);
  }

  double const &eval_occ_func_3_0(const int &nlist_ind) const {
    return m_occ_func_3_0[_occ(nlist_ind)];
  }

  double const &occ_func_3_0(const int &nlist_ind) const {
    return m_params.read(m_occ_site_func_param_key, 0, nlist_ind);
  }

  double const &eval_occ_func_3_1(const int &nlist_ind) const {
    return m_occ_func_3_1[_occ(nlist_ind)];
  }

  double const &occ_func_3_1(const int &nlist_ind) const {
    return m_params.read(m_occ_site_func_param_key, 1, nlist_ind);
  }

};

/// \brief Constructor
ZrO_Clexulator_formation_energy::ZrO_Clexulator_formation_energy()
    // BaseClexulator({{ nlist_size }}, {{ n_corr }}, {{ n_point_corr_sites }})
    : BaseClexulator(226, 74, 2) {

  // Occupation site basis functions
  // m_occ_func_{{ sublattice_index }}_{{ site_function_index }}[{{ occupant_index }}]] = {{ value }};
  m_occ_func_2_0[0] = 1.0;
  m_occ_func_2_0[1] = 1.0;
  m_occ_func_2_1[0] = 0.0;
  m_occ_func_2_1[1] = 1.0;
  m_occ_func_3_0[0] = 1.0;
  m_occ_func_3_0[1] = 1.0;
  m_occ_func_3_1[0] = 0.0;
  m_occ_func_3_1[1] = 1.0;

  // Parameter packs
  // m_{{ param.name }}_param_key = m_params.allocate("{{ param.name }}", {{ param.rows }}, {{ param.cols }}, {{ param.is_independent }});
  m_corr_param_key = m_params.allocate("corr", 74, 1, false);
  m_occ_site_func_param_key = m_params.allocate("occ_site_func", 2, 226, true);

  // Orbit functions (evaluate functions without duplication)
  // m_orbit_func_table[{{ function_index }}] = &{{ clexulator_name }}::eval_orbit_bfunc_{{ function_index }}<double>;
  m_orbit_func_table[0] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_0<double>;
  m_orbit_func_table[1] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_1<double>;
  m_orbit_func_table[2] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_2<double>;
  m_orbit_func_table[3] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_3<double>;
  m_orbit_func_table[4] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_4<double>;
  m_orbit_func_table[5] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_5<double>;
  m_orbit_func_table[6] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_6<double>;
  m_orbit_func_table[7] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_7<double>;
  m_orbit_func_table[8] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_8<double>;
  m_orbit_func_table[9] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_9<double>;
  m_orbit_func_table[10] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_10<double>;
  m_orbit_func_table[11] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_11<double>;
  m_orbit_func_table[12] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_12<double>;
  m_orbit_func_table[13] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_13<double>;
  m_orbit_func_table[14] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_14<double>;
  m_orbit_func_table[15] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_15<double>;
  m_orbit_func_table[16] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_16<double>;
  m_orbit_func_table[17] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_17<double>;
  m_orbit_func_table[18] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_18<double>;
  m_orbit_func_table[19] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_19<double>;
  m_orbit_func_table[20] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_20<double>;
  m_orbit_func_table[21] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_21<double>;
  m_orbit_func_table[22] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_22<double>;
  m_orbit_func_table[23] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_23<double>;
  m_orbit_func_table[24] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_24<double>;
  m_orbit_func_table[25] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_25<double>;
  m_orbit_func_table[26] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_26<double>;
  m_orbit_func_table[27] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_27<double>;
  m_orbit_func_table[28] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_28<double>;
  m_orbit_func_table[29] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_29<double>;
  m_orbit_func_table[30] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_30<double>;
  m_orbit_func_table[31] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_31<double>;
  m_orbit_func_table[32] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_32<double>;
  m_orbit_func_table[33] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_33<double>;
  m_orbit_func_table[34] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_34<double>;
  m_orbit_func_table[35] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_35<double>;
  m_orbit_func_table[36] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_36<double>;
  m_orbit_func_table[37] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_37<double>;
  m_orbit_func_table[38] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_38<double>;
  m_orbit_func_table[39] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_39<double>;
  m_orbit_func_table[40] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_40<double>;
  m_orbit_func_table[41] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_41<double>;
  m_orbit_func_table[42] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_42<double>;
  m_orbit_func_table[43] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_43<double>;
  m_orbit_func_table[44] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_44<double>;
  m_orbit_func_table[45] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_45<double>;
  m_orbit_func_table[46] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_46<double>;
  m_orbit_func_table[47] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_47<double>;
  m_orbit_func_table[48] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_48<double>;
  m_orbit_func_table[49] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_49<double>;
  m_orbit_func_table[50] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_50<double>;
  m_orbit_func_table[51] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_51<double>;
  m_orbit_func_table[52] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_52<double>;
  m_orbit_func_table[53] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_53<double>;
  m_orbit_func_table[54] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_54<double>;
  m_orbit_func_table[55] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_55<double>;
  m_orbit_func_table[56] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_56<double>;
  m_orbit_func_table[57] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_57<double>;
  m_orbit_func_table[58] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_58<double>;
  m_orbit_func_table[59] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_59<double>;
  m_orbit_func_table[60] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_60<double>;
  m_orbit_func_table[61] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_61<double>;
  m_orbit_func_table[62] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_62<double>;
  m_orbit_func_table[63] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_63<double>;
  m_orbit_func_table[64] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_64<double>;
  m_orbit_func_table[65] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_65<double>;
  m_orbit_func_table[66] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_66<double>;
  m_orbit_func_table[67] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_67<double>;
  m_orbit_func_table[68] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_68<double>;
  m_orbit_func_table[69] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_69<double>;
  m_orbit_func_table[70] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_70<double>;
  m_orbit_func_table[71] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_71<double>;
  m_orbit_func_table[72] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_72<double>;
  m_orbit_func_table[73] = &ZrO_Clexulator_formation_energy::eval_orbit_bfunc_73<double>;

  // Site functions
  // m_site_func_table[{{ neighbor_list_index }}][{{ function_index }}] =
  //     &{{ clexulator_name }}::eval_site_bfunc_{{ function_index }}_at_{{ neighbor_list_index }}<double>;
  m_site_func_table[0][0] = &ZrO_Clexulator_formation_energy::zero_func<double>;
  m_site_func_table[1][0] = &ZrO_Clexulator_formation_energy::zero_func<double>;
  m_site_func_table[0][1] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_1_at_0<double>;
  m_site_func_table[1][1] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_1_at_1<double>;
  m_site_func_table[0][2] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_2_at_0<double>;
  m_site_func_table[1][2] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_2_at_1<double>;
  m_site_func_table[0][3] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_3_at_0<double>;
  m_site_func_table[1][3] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_3_at_1<double>;
  m_site_func_table[0][4] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_4_at_0<double>;
  m_site_func_table[1][4] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_4_at_1<double>;
  m_site_func_table[0][5] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_5_at_0<double>;
  m_site_func_table[1][5] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_5_at_1<double>;
  m_site_func_table[0][6] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_6_at_0<double>;
  m_site_func_table[1][6] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_6_at_1<double>;
  m_site_func_table[0][7] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_7_at_0<double>;
  m_site_func_table[1][7] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_7_at_1<double>;
  m_site_func_table[0][8] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_8_at_0<double>;
  m_site_func_table[1][8] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_8_at_1<double>;
  m_site_func_table[0][9] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_9_at_0<double>;
  m_site_func_table[1][9] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_9_at_1<double>;
  m_site_func_table[0][10] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_10_at_0<double>;
  m_site_func_table[1][10] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_10_at_1<double>;
  m_site_func_table[0][11] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_11_at_0<double>;
  m_site_func_table[1][11] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_11_at_1<double>;
  m_site_func_table[0][12] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_12_at_0<double>;
  m_site_func_table[1][12] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_12_at_1<double>;
  m_site_func_table[0][13] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_13_at_0<double>;
  m_site_func_table[1][13] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_13_at_1<double>;
  m_site_func_table[0][14] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_14_at_0<double>;
  m_site_func_table[1][14] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_14_at_1<double>;
  m_site_func_table[0][15] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_15_at_0<double>;
  m_site_func_table[1][15] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_15_at_1<double>;
  m_site_func_table[0][16] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_16_at_0<double>;
  m_site_func_table[1][16] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_16_at_1<double>;
  m_site_func_table[0][17] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_17_at_0<double>;
  m_site_func_table[1][17] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_17_at_1<double>;
  m_site_func_table[0][18] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_18_at_0<double>;
  m_site_func_table[1][18] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_18_at_1<double>;
  m_site_func_table[0][19] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_19_at_0<double>;
  m_site_func_table[1][19] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_19_at_1<double>;
  m_site_func_table[0][20] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_20_at_0<double>;
  m_site_func_table[1][20] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_20_at_1<double>;
  m_site_func_table[0][21] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_21_at_0<double>;
  m_site_func_table[1][21] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_21_at_1<double>;
  m_site_func_table[0][22] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_22_at_0<double>;
  m_site_func_table[1][22] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_22_at_1<double>;
  m_site_func_table[0][23] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_23_at_0<double>;
  m_site_func_table[1][23] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_23_at_1<double>;
  m_site_func_table[0][24] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_24_at_0<double>;
  m_site_func_table[1][24] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_24_at_1<double>;
  m_site_func_table[0][25] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_25_at_0<double>;
  m_site_func_table[1][25] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_25_at_1<double>;
  m_site_func_table[0][26] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_26_at_0<double>;
  m_site_func_table[1][26] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_26_at_1<double>;
  m_site_func_table[0][27] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_27_at_0<double>;
  m_site_func_table[1][27] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_27_at_1<double>;
  m_site_func_table[0][28] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_28_at_0<double>;
  m_site_func_table[1][28] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_28_at_1<double>;
  m_site_func_table[0][29] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_29_at_0<double>;
  m_site_func_table[1][29] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_29_at_1<double>;
  m_site_func_table[0][30] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_30_at_0<double>;
  m_site_func_table[1][30] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_30_at_1<double>;
  m_site_func_table[0][31] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_31_at_0<double>;
  m_site_func_table[1][31] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_31_at_1<double>;
  m_site_func_table[0][32] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_32_at_0<double>;
  m_site_func_table[1][32] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_32_at_1<double>;
  m_site_func_table[0][33] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_33_at_0<double>;
  m_site_func_table[1][33] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_33_at_1<double>;
  m_site_func_table[0][34] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_34_at_0<double>;
  m_site_func_table[1][34] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_34_at_1<double>;
  m_site_func_table[0][35] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_35_at_0<double>;
  m_site_func_table[1][35] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_35_at_1<double>;
  m_site_func_table[0][36] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_36_at_0<double>;
  m_site_func_table[1][36] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_36_at_1<double>;
  m_site_func_table[0][37] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_37_at_0<double>;
  m_site_func_table[1][37] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_37_at_1<double>;
  m_site_func_table[0][38] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_38_at_0<double>;
  m_site_func_table[1][38] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_38_at_1<double>;
  m_site_func_table[0][39] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_39_at_0<double>;
  m_site_func_table[1][39] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_39_at_1<double>;
  m_site_func_table[0][40] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_40_at_0<double>;
  m_site_func_table[1][40] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_40_at_1<double>;
  m_site_func_table[0][41] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_41_at_0<double>;
  m_site_func_table[1][41] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_41_at_1<double>;
  m_site_func_table[0][42] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_42_at_0<double>;
  m_site_func_table[1][42] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_42_at_1<double>;
  m_site_func_table[0][43] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_43_at_0<double>;
  m_site_func_table[1][43] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_43_at_1<double>;
  m_site_func_table[0][44] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_44_at_0<double>;
  m_site_func_table[1][44] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_44_at_1<double>;
  m_site_func_table[0][45] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_45_at_0<double>;
  m_site_func_table[1][45] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_45_at_1<double>;
  m_site_func_table[0][46] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_46_at_0<double>;
  m_site_func_table[1][46] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_46_at_1<double>;
  m_site_func_table[0][47] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_47_at_0<double>;
  m_site_func_table[1][47] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_47_at_1<double>;
  m_site_func_table[0][48] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_48_at_0<double>;
  m_site_func_table[1][48] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_48_at_1<double>;
  m_site_func_table[0][49] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_49_at_0<double>;
  m_site_func_table[1][49] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_49_at_1<double>;
  m_site_func_table[0][50] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_50_at_0<double>;
  m_site_func_table[1][50] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_50_at_1<double>;
  m_site_func_table[0][51] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_51_at_0<double>;
  m_site_func_table[1][51] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_51_at_1<double>;
  m_site_func_table[0][52] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_52_at_0<double>;
  m_site_func_table[1][52] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_52_at_1<double>;
  m_site_func_table[0][53] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_53_at_0<double>;
  m_site_func_table[1][53] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_53_at_1<double>;
  m_site_func_table[0][54] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_54_at_0<double>;
  m_site_func_table[1][54] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_54_at_1<double>;
  m_site_func_table[0][55] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_55_at_0<double>;
  m_site_func_table[1][55] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_55_at_1<double>;
  m_site_func_table[0][56] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_56_at_0<double>;
  m_site_func_table[1][56] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_56_at_1<double>;
  m_site_func_table[0][57] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_57_at_0<double>;
  m_site_func_table[1][57] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_57_at_1<double>;
  m_site_func_table[0][58] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_58_at_0<double>;
  m_site_func_table[1][58] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_58_at_1<double>;
  m_site_func_table[0][59] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_59_at_0<double>;
  m_site_func_table[1][59] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_59_at_1<double>;
  m_site_func_table[0][60] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_60_at_0<double>;
  m_site_func_table[1][60] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_60_at_1<double>;
  m_site_func_table[0][61] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_61_at_0<double>;
  m_site_func_table[1][61] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_61_at_1<double>;
  m_site_func_table[0][62] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_62_at_0<double>;
  m_site_func_table[1][62] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_62_at_1<double>;
  m_site_func_table[0][63] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_63_at_0<double>;
  m_site_func_table[1][63] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_63_at_1<double>;
  m_site_func_table[0][64] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_64_at_0<double>;
  m_site_func_table[1][64] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_64_at_1<double>;
  m_site_func_table[0][65] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_65_at_0<double>;
  m_site_func_table[1][65] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_65_at_1<double>;
  m_site_func_table[0][66] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_66_at_0<double>;
  m_site_func_table[1][66] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_66_at_1<double>;
  m_site_func_table[0][67] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_67_at_0<double>;
  m_site_func_table[1][67] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_67_at_1<double>;
  m_site_func_table[0][68] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_68_at_0<double>;
  m_site_func_table[1][68] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_68_at_1<double>;
  m_site_func_table[0][69] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_69_at_0<double>;
  m_site_func_table[1][69] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_69_at_1<double>;
  m_site_func_table[0][70] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_70_at_0<double>;
  m_site_func_table[1][70] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_70_at_1<double>;
  m_site_func_table[0][71] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_71_at_0<double>;
  m_site_func_table[1][71] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_71_at_1<double>;
  m_site_func_table[0][72] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_72_at_0<double>;
  m_site_func_table[1][72] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_72_at_1<double>;
  m_site_func_table[0][73] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_73_at_0<double>;
  m_site_func_table[1][73] = &ZrO_Clexulator_formation_energy::eval_site_bfunc_73_at_1<double>;

  // Change in site functions due to an occupant change
  // m_occ_delta_site_func_table[{{ neighbor_list_index }}][{{ function_index }}] =
  //     &{{ clexulator_name }}::eval_occ_delta_site_bfunc_{{ function_index }}_at_{{ neighbor_list_index }}<double>;
  m_occ_delta_site_func_table[0][0] = &ZrO_Clexulator_formation_energy::zero_func<double>;
  m_occ_delta_site_func_table[1][0] = &ZrO_Clexulator_formation_energy::zero_func<double>;
  m_occ_delta_site_func_table[0][1] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_1_at_0<double>;
  m_occ_delta_site_func_table[1][1] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_1_at_1<double>;
  m_occ_delta_site_func_table[0][2] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_2_at_0<double>;
  m_occ_delta_site_func_table[1][2] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_2_at_1<double>;
  m_occ_delta_site_func_table[0][3] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_3_at_0<double>;
  m_occ_delta_site_func_table[1][3] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_3_at_1<double>;
  m_occ_delta_site_func_table[0][4] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_4_at_0<double>;
  m_occ_delta_site_func_table[1][4] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_4_at_1<double>;
  m_occ_delta_site_func_table[0][5] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_5_at_0<double>;
  m_occ_delta_site_func_table[1][5] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_5_at_1<double>;
  m_occ_delta_site_func_table[0][6] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_6_at_0<double>;
  m_occ_delta_site_func_table[1][6] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_6_at_1<double>;
  m_occ_delta_site_func_table[0][7] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_7_at_0<double>;
  m_occ_delta_site_func_table[1][7] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_7_at_1<double>;
  m_occ_delta_site_func_table[0][8] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_8_at_0<double>;
  m_occ_delta_site_func_table[1][8] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_8_at_1<double>;
  m_occ_delta_site_func_table[0][9] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_9_at_0<double>;
  m_occ_delta_site_func_table[1][9] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_9_at_1<double>;
  m_occ_delta_site_func_table[0][10] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_10_at_0<double>;
  m_occ_delta_site_func_table[1][10] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_10_at_1<double>;
  m_occ_delta_site_func_table[0][11] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_11_at_0<double>;
  m_occ_delta_site_func_table[1][11] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_11_at_1<double>;
  m_occ_delta_site_func_table[0][12] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_12_at_0<double>;
  m_occ_delta_site_func_table[1][12] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_12_at_1<double>;
  m_occ_delta_site_func_table[0][13] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_13_at_0<double>;
  m_occ_delta_site_func_table[1][13] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_13_at_1<double>;
  m_occ_delta_site_func_table[0][14] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_14_at_0<double>;
  m_occ_delta_site_func_table[1][14] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_14_at_1<double>;
  m_occ_delta_site_func_table[0][15] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_15_at_0<double>;
  m_occ_delta_site_func_table[1][15] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_15_at_1<double>;
  m_occ_delta_site_func_table[0][16] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_16_at_0<double>;
  m_occ_delta_site_func_table[1][16] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_16_at_1<double>;
  m_occ_delta_site_func_table[0][17] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_17_at_0<double>;
  m_occ_delta_site_func_table[1][17] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_17_at_1<double>;
  m_occ_delta_site_func_table[0][18] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_18_at_0<double>;
  m_occ_delta_site_func_table[1][18] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_18_at_1<double>;
  m_occ_delta_site_func_table[0][19] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_19_at_0<double>;
  m_occ_delta_site_func_table[1][19] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_19_at_1<double>;
  m_occ_delta_site_func_table[0][20] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_20_at_0<double>;
  m_occ_delta_site_func_table[1][20] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_20_at_1<double>;
  m_occ_delta_site_func_table[0][21] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_21_at_0<double>;
  m_occ_delta_site_func_table[1][21] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_21_at_1<double>;
  m_occ_delta_site_func_table[0][22] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_22_at_0<double>;
  m_occ_delta_site_func_table[1][22] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_22_at_1<double>;
  m_occ_delta_site_func_table[0][23] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_23_at_0<double>;
  m_occ_delta_site_func_table[1][23] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_23_at_1<double>;
  m_occ_delta_site_func_table[0][24] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_24_at_0<double>;
  m_occ_delta_site_func_table[1][24] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_24_at_1<double>;
  m_occ_delta_site_func_table[0][25] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_25_at_0<double>;
  m_occ_delta_site_func_table[1][25] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_25_at_1<double>;
  m_occ_delta_site_func_table[0][26] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_26_at_0<double>;
  m_occ_delta_site_func_table[1][26] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_26_at_1<double>;
  m_occ_delta_site_func_table[0][27] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_27_at_0<double>;
  m_occ_delta_site_func_table[1][27] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_27_at_1<double>;
  m_occ_delta_site_func_table[0][28] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_28_at_0<double>;
  m_occ_delta_site_func_table[1][28] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_28_at_1<double>;
  m_occ_delta_site_func_table[0][29] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_29_at_0<double>;
  m_occ_delta_site_func_table[1][29] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_29_at_1<double>;
  m_occ_delta_site_func_table[0][30] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_30_at_0<double>;
  m_occ_delta_site_func_table[1][30] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_30_at_1<double>;
  m_occ_delta_site_func_table[0][31] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_31_at_0<double>;
  m_occ_delta_site_func_table[1][31] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_31_at_1<double>;
  m_occ_delta_site_func_table[0][32] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_32_at_0<double>;
  m_occ_delta_site_func_table[1][32] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_32_at_1<double>;
  m_occ_delta_site_func_table[0][33] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_33_at_0<double>;
  m_occ_delta_site_func_table[1][33] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_33_at_1<double>;
  m_occ_delta_site_func_table[0][34] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_34_at_0<double>;
  m_occ_delta_site_func_table[1][34] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_34_at_1<double>;
  m_occ_delta_site_func_table[0][35] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_35_at_0<double>;
  m_occ_delta_site_func_table[1][35] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_35_at_1<double>;
  m_occ_delta_site_func_table[0][36] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_36_at_0<double>;
  m_occ_delta_site_func_table[1][36] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_36_at_1<double>;
  m_occ_delta_site_func_table[0][37] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_37_at_0<double>;
  m_occ_delta_site_func_table[1][37] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_37_at_1<double>;
  m_occ_delta_site_func_table[0][38] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_38_at_0<double>;
  m_occ_delta_site_func_table[1][38] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_38_at_1<double>;
  m_occ_delta_site_func_table[0][39] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_39_at_0<double>;
  m_occ_delta_site_func_table[1][39] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_39_at_1<double>;
  m_occ_delta_site_func_table[0][40] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_40_at_0<double>;
  m_occ_delta_site_func_table[1][40] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_40_at_1<double>;
  m_occ_delta_site_func_table[0][41] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_41_at_0<double>;
  m_occ_delta_site_func_table[1][41] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_41_at_1<double>;
  m_occ_delta_site_func_table[0][42] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_42_at_0<double>;
  m_occ_delta_site_func_table[1][42] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_42_at_1<double>;
  m_occ_delta_site_func_table[0][43] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_43_at_0<double>;
  m_occ_delta_site_func_table[1][43] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_43_at_1<double>;
  m_occ_delta_site_func_table[0][44] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_44_at_0<double>;
  m_occ_delta_site_func_table[1][44] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_44_at_1<double>;
  m_occ_delta_site_func_table[0][45] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_45_at_0<double>;
  m_occ_delta_site_func_table[1][45] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_45_at_1<double>;
  m_occ_delta_site_func_table[0][46] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_46_at_0<double>;
  m_occ_delta_site_func_table[1][46] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_46_at_1<double>;
  m_occ_delta_site_func_table[0][47] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_47_at_0<double>;
  m_occ_delta_site_func_table[1][47] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_47_at_1<double>;
  m_occ_delta_site_func_table[0][48] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_48_at_0<double>;
  m_occ_delta_site_func_table[1][48] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_48_at_1<double>;
  m_occ_delta_site_func_table[0][49] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_49_at_0<double>;
  m_occ_delta_site_func_table[1][49] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_49_at_1<double>;
  m_occ_delta_site_func_table[0][50] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_50_at_0<double>;
  m_occ_delta_site_func_table[1][50] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_50_at_1<double>;
  m_occ_delta_site_func_table[0][51] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_51_at_0<double>;
  m_occ_delta_site_func_table[1][51] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_51_at_1<double>;
  m_occ_delta_site_func_table[0][52] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_52_at_0<double>;
  m_occ_delta_site_func_table[1][52] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_52_at_1<double>;
  m_occ_delta_site_func_table[0][53] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_53_at_0<double>;
  m_occ_delta_site_func_table[1][53] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_53_at_1<double>;
  m_occ_delta_site_func_table[0][54] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_54_at_0<double>;
  m_occ_delta_site_func_table[1][54] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_54_at_1<double>;
  m_occ_delta_site_func_table[0][55] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_55_at_0<double>;
  m_occ_delta_site_func_table[1][55] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_55_at_1<double>;
  m_occ_delta_site_func_table[0][56] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_56_at_0<double>;
  m_occ_delta_site_func_table[1][56] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_56_at_1<double>;
  m_occ_delta_site_func_table[0][57] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_57_at_0<double>;
  m_occ_delta_site_func_table[1][57] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_57_at_1<double>;
  m_occ_delta_site_func_table[0][58] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_58_at_0<double>;
  m_occ_delta_site_func_table[1][58] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_58_at_1<double>;
  m_occ_delta_site_func_table[0][59] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_59_at_0<double>;
  m_occ_delta_site_func_table[1][59] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_59_at_1<double>;
  m_occ_delta_site_func_table[0][60] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_60_at_0<double>;
  m_occ_delta_site_func_table[1][60] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_60_at_1<double>;
  m_occ_delta_site_func_table[0][61] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_61_at_0<double>;
  m_occ_delta_site_func_table[1][61] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_61_at_1<double>;
  m_occ_delta_site_func_table[0][62] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_62_at_0<double>;
  m_occ_delta_site_func_table[1][62] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_62_at_1<double>;
  m_occ_delta_site_func_table[0][63] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_63_at_0<double>;
  m_occ_delta_site_func_table[1][63] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_63_at_1<double>;
  m_occ_delta_site_func_table[0][64] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_64_at_0<double>;
  m_occ_delta_site_func_table[1][64] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_64_at_1<double>;
  m_occ_delta_site_func_table[0][65] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_65_at_0<double>;
  m_occ_delta_site_func_table[1][65] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_65_at_1<double>;
  m_occ_delta_site_func_table[0][66] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_66_at_0<double>;
  m_occ_delta_site_func_table[1][66] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_66_at_1<double>;
  m_occ_delta_site_func_table[0][67] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_67_at_0<double>;
  m_occ_delta_site_func_table[1][67] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_67_at_1<double>;
  m_occ_delta_site_func_table[0][68] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_68_at_0<double>;
  m_occ_delta_site_func_table[1][68] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_68_at_1<double>;
  m_occ_delta_site_func_table[0][69] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_69_at_0<double>;
  m_occ_delta_site_func_table[1][69] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_69_at_1<double>;
  m_occ_delta_site_func_table[0][70] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_70_at_0<double>;
  m_occ_delta_site_func_table[1][70] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_70_at_1<double>;
  m_occ_delta_site_func_table[0][71] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_71_at_0<double>;
  m_occ_delta_site_func_table[1][71] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_71_at_1<double>;
  m_occ_delta_site_func_table[0][72] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_72_at_0<double>;
  m_occ_delta_site_func_table[1][72] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_72_at_1<double>;
  m_occ_delta_site_func_table[0][73] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_73_at_0<double>;
  m_occ_delta_site_func_table[1][73] = &ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_73_at_1<double>;

  // Neighbor list shape weight matrix
  m_weight_matrix.row(0) << 2, -1, 0;
  m_weight_matrix.row(1) << -1, 2, 0;
  m_weight_matrix.row(2) << 0, 0, 5;

  // Indices of sublattices included in functions
  m_sublat_indices = std::set<int>{ 2,3, };

  // Total number of sublattices in prim
  m_n_sublattices = 4;

  // Neighborhood of all basis functions
  m_neighborhood = std::set<xtal::UnitCell> {
    xtal::UnitCell(-3, -2, -1),
    xtal::UnitCell(-3, -2, 0),
    xtal::UnitCell(-3, -2, 1),
    xtal::UnitCell(-3, -1, -1),
    xtal::UnitCell(-3, -1, 0),
    xtal::UnitCell(-3, -1, 1),
    xtal::UnitCell(-2, -3, -1),
    xtal::UnitCell(-2, -3, 0),
    xtal::UnitCell(-2, -3, 1),
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(-2, 1, -1),
    xtal::UnitCell(-2, 1, 0),
    xtal::UnitCell(-2, 1, 1),
    xtal::UnitCell(-1, -3, -1),
    xtal::UnitCell(-1, -3, 0),
    xtal::UnitCell(-1, -3, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, -2),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, -1, 2),
    xtal::UnitCell(-1, 0, -2),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 0, 2),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(-1, 2, -1),
    xtal::UnitCell(-1, 2, 0),
    xtal::UnitCell(-1, 2, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, -1, -2),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, -1, 2),
    xtal::UnitCell(0, 0, -2),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 0, 2),
    xtal::UnitCell(0, 1, -2),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 1, 2),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(1, -2, -1),
    xtal::UnitCell(1, -2, 0),
    xtal::UnitCell(1, -2, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, -2),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 0, 2),
    xtal::UnitCell(1, 1, -2),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 1, 2),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(1, 3, -1),
    xtal::UnitCell(1, 3, 0),
    xtal::UnitCell(1, 3, 1),
    xtal::UnitCell(2, -1, -1),
    xtal::UnitCell(2, -1, 0),
    xtal::UnitCell(2, -1, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
    xtal::UnitCell(2, 3, -1),
    xtal::UnitCell(2, 3, 0),
    xtal::UnitCell(2, 3, 1),
    xtal::UnitCell(3, 1, -1),
    xtal::UnitCell(3, 1, 0),
    xtal::UnitCell(3, 1, 1),
    xtal::UnitCell(3, 2, -1),
    xtal::UnitCell(3, 2, 0),
    xtal::UnitCell(3, 2, 1),
  };

  // Neighborhood by linear function index
  m_orbit_neighborhood.resize(corr_size());
  m_orbit_site_neighborhood.resize(corr_size());

  m_orbit_neighborhood[0] = std::set<xtal::UnitCell> {
  };

  m_orbit_site_neighborhood[0] = std::set<xtal::UnitCellCoord> {
  };

  m_orbit_neighborhood[1] = std::set<xtal::UnitCell> {
    xtal::UnitCell(0, 0, 0),
  };

  m_orbit_site_neighborhood[1] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
  };

  m_orbit_neighborhood[2] = std::set<xtal::UnitCell> {
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
  };

  m_orbit_site_neighborhood[2] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
  };

  m_orbit_neighborhood[3] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 1, 0),
  };

  m_orbit_site_neighborhood[3] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[4] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[4] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[5] = std::set<xtal::UnitCell> {
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
  };

  m_orbit_site_neighborhood[5] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
  };

  m_orbit_neighborhood[6] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[6] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[7] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[7] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 1),
  };

  m_orbit_neighborhood[8] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[8] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[9] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 2, 0),
  };

  m_orbit_site_neighborhood[9] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[10] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[10] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[11] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[11] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, -1),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 1, -1, -1),
    xtal::UnitCellCoord(2, 1, 2, -1),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, 1),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -1, 1),
    xtal::UnitCellCoord(3, 1, 2, 1),
    xtal::UnitCellCoord(3, 2, 1, -1),
  };

  m_orbit_neighborhood[12] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[12] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, -1),
    xtal::UnitCellCoord(2, -1, 1, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, -1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -1, -2, 1),
    xtal::UnitCellCoord(3, -1, 1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 2, 1, 1),
  };

  m_orbit_neighborhood[13] = std::set<xtal::UnitCell> {
    xtal::UnitCell(0, 0, -2),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 0, 2),
  };

  m_orbit_site_neighborhood[13] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 2),
    xtal::UnitCellCoord(3, 0, 0, -2),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
  };

  m_orbit_neighborhood[14] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[14] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, -1),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, 0, -1),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, -1),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 2, -1),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, -1),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 2, -1),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 1),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 1),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 1),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 1),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 1),
  };

  m_orbit_neighborhood[15] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -2),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, -1, 2),
    xtal::UnitCell(-1, 0, -2),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 0, 2),
    xtal::UnitCell(0, -1, -2),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, -1, 2),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -2),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 1, 2),
    xtal::UnitCell(1, 0, -2),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 0, 2),
    xtal::UnitCell(1, 1, -2),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 1, 2),
  };

  m_orbit_site_neighborhood[15] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 2),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 2),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 2),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 2),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 2),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 2),
    xtal::UnitCellCoord(3, -1, -1, -2),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -2),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, 0, -1, -2),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -2),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, 0, -2),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -2),
    xtal::UnitCellCoord(3, 1, 1, 1),
  };

  m_orbit_neighborhood[16] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-3, -2, 0),
    xtal::UnitCell(-3, -1, 0),
    xtal::UnitCell(-2, -3, 0),
    xtal::UnitCell(-2, 1, 0),
    xtal::UnitCell(-1, -3, 0),
    xtal::UnitCell(-1, 2, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(1, -2, 0),
    xtal::UnitCell(1, 3, 0),
    xtal::UnitCell(2, -1, 0),
    xtal::UnitCell(2, 3, 0),
    xtal::UnitCell(3, 1, 0),
    xtal::UnitCell(3, 2, 0),
  };

  m_orbit_site_neighborhood[16] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -3, -2, 0),
    xtal::UnitCellCoord(2, -3, -1, 0),
    xtal::UnitCellCoord(2, -2, -3, 0),
    xtal::UnitCellCoord(2, -2, 1, 0),
    xtal::UnitCellCoord(2, -1, -3, 0),
    xtal::UnitCellCoord(2, -1, 2, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 1, -2, 0),
    xtal::UnitCellCoord(2, 1, 3, 0),
    xtal::UnitCellCoord(2, 2, -1, 0),
    xtal::UnitCellCoord(2, 2, 3, 0),
    xtal::UnitCellCoord(2, 3, 1, 0),
    xtal::UnitCellCoord(2, 3, 2, 0),
    xtal::UnitCellCoord(3, -3, -2, 0),
    xtal::UnitCellCoord(3, -3, -1, 0),
    xtal::UnitCellCoord(3, -2, -3, 0),
    xtal::UnitCellCoord(3, -2, 1, 0),
    xtal::UnitCellCoord(3, -1, -3, 0),
    xtal::UnitCellCoord(3, -1, 2, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -2, 0),
    xtal::UnitCellCoord(3, 1, 3, 0),
    xtal::UnitCellCoord(3, 2, -1, 0),
    xtal::UnitCellCoord(3, 2, 3, 0),
    xtal::UnitCellCoord(3, 3, 1, 0),
    xtal::UnitCellCoord(3, 3, 2, 0),
  };

  m_orbit_neighborhood[17] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-3, -2, -1),
    xtal::UnitCell(-3, -2, 0),
    xtal::UnitCell(-3, -2, 1),
    xtal::UnitCell(-3, -1, -1),
    xtal::UnitCell(-3, -1, 0),
    xtal::UnitCell(-3, -1, 1),
    xtal::UnitCell(-2, -3, -1),
    xtal::UnitCell(-2, -3, 0),
    xtal::UnitCell(-2, -3, 1),
    xtal::UnitCell(-2, 1, -1),
    xtal::UnitCell(-2, 1, 0),
    xtal::UnitCell(-2, 1, 1),
    xtal::UnitCell(-1, -3, -1),
    xtal::UnitCell(-1, -3, 0),
    xtal::UnitCell(-1, -3, 1),
    xtal::UnitCell(-1, 2, -1),
    xtal::UnitCell(-1, 2, 0),
    xtal::UnitCell(-1, 2, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(1, -2, -1),
    xtal::UnitCell(1, -2, 0),
    xtal::UnitCell(1, -2, 1),
    xtal::UnitCell(1, 3, -1),
    xtal::UnitCell(1, 3, 0),
    xtal::UnitCell(1, 3, 1),
    xtal::UnitCell(2, -1, -1),
    xtal::UnitCell(2, -1, 0),
    xtal::UnitCell(2, -1, 1),
    xtal::UnitCell(2, 3, -1),
    xtal::UnitCell(2, 3, 0),
    xtal::UnitCell(2, 3, 1),
    xtal::UnitCell(3, 1, -1),
    xtal::UnitCell(3, 1, 0),
    xtal::UnitCell(3, 1, 1),
    xtal::UnitCell(3, 2, -1),
    xtal::UnitCell(3, 2, 0),
    xtal::UnitCell(3, 2, 1),
  };

  m_orbit_site_neighborhood[17] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -3, -2, 0),
    xtal::UnitCellCoord(2, -3, -2, 1),
    xtal::UnitCellCoord(2, -3, -1, 0),
    xtal::UnitCellCoord(2, -3, -1, 1),
    xtal::UnitCellCoord(2, -2, -3, 0),
    xtal::UnitCellCoord(2, -2, -3, 1),
    xtal::UnitCellCoord(2, -2, 1, 0),
    xtal::UnitCellCoord(2, -2, 1, 1),
    xtal::UnitCellCoord(2, -1, -3, 0),
    xtal::UnitCellCoord(2, -1, -3, 1),
    xtal::UnitCellCoord(2, -1, 2, 0),
    xtal::UnitCellCoord(2, -1, 2, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 1, -2, 0),
    xtal::UnitCellCoord(2, 1, -2, 1),
    xtal::UnitCellCoord(2, 1, 3, 0),
    xtal::UnitCellCoord(2, 1, 3, 1),
    xtal::UnitCellCoord(2, 2, -1, 0),
    xtal::UnitCellCoord(2, 2, -1, 1),
    xtal::UnitCellCoord(2, 2, 3, 0),
    xtal::UnitCellCoord(2, 2, 3, 1),
    xtal::UnitCellCoord(2, 3, 1, 0),
    xtal::UnitCellCoord(2, 3, 1, 1),
    xtal::UnitCellCoord(2, 3, 2, 0),
    xtal::UnitCellCoord(2, 3, 2, 1),
    xtal::UnitCellCoord(3, -3, -2, -1),
    xtal::UnitCellCoord(3, -3, -2, 0),
    xtal::UnitCellCoord(3, -3, -1, -1),
    xtal::UnitCellCoord(3, -3, -1, 0),
    xtal::UnitCellCoord(3, -2, -3, -1),
    xtal::UnitCellCoord(3, -2, -3, 0),
    xtal::UnitCellCoord(3, -2, 1, -1),
    xtal::UnitCellCoord(3, -2, 1, 0),
    xtal::UnitCellCoord(3, -1, -3, -1),
    xtal::UnitCellCoord(3, -1, -3, 0),
    xtal::UnitCellCoord(3, -1, 2, -1),
    xtal::UnitCellCoord(3, -1, 2, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -2, -1),
    xtal::UnitCellCoord(3, 1, -2, 0),
    xtal::UnitCellCoord(3, 1, 3, -1),
    xtal::UnitCellCoord(3, 1, 3, 0),
    xtal::UnitCellCoord(3, 2, -1, -1),
    xtal::UnitCellCoord(3, 2, -1, 0),
    xtal::UnitCellCoord(3, 2, 3, -1),
    xtal::UnitCellCoord(3, 2, 3, 0),
    xtal::UnitCellCoord(3, 3, 1, -1),
    xtal::UnitCellCoord(3, 3, 1, 0),
    xtal::UnitCellCoord(3, 3, 2, -1),
    xtal::UnitCellCoord(3, 3, 2, 0),
  };

  m_orbit_neighborhood[18] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 1, 0),
  };

  m_orbit_site_neighborhood[18] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[19] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[19] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[20] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[20] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[21] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[21] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[22] = std::set<xtal::UnitCell> {
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
  };

  m_orbit_site_neighborhood[22] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
  };

  m_orbit_neighborhood[23] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[23] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[24] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[24] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[25] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[25] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[26] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[26] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[27] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[27] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 1, 1),
  };

  m_orbit_neighborhood[28] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[28] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 1, 1),
  };

  m_orbit_neighborhood[29] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[29] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 1, 1),
  };

  m_orbit_neighborhood[30] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[30] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 1, 1),
  };

  m_orbit_neighborhood[31] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[31] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 1, 1),
  };

  m_orbit_neighborhood[32] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[32] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[33] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[33] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[34] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[34] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[35] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[35] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[36] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[36] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[37] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[37] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 1, 1),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[38] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[38] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 1, 1),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[39] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[39] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[40] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
  };

  m_orbit_site_neighborhood[40] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[41] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 2, 0),
  };

  m_orbit_site_neighborhood[41] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[42] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 2, 0),
  };

  m_orbit_site_neighborhood[42] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[43] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 2, 0),
  };

  m_orbit_site_neighborhood[43] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[44] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 2, 0),
  };

  m_orbit_site_neighborhood[44] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[45] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
    xtal::UnitCell(2, 2, 0),
  };

  m_orbit_site_neighborhood[45] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[46] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
    xtal::UnitCell(2, 2, 0),
  };

  m_orbit_site_neighborhood[46] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[47] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 2, 0),
  };

  m_orbit_site_neighborhood[47] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[48] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[48] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[49] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[49] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[50] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[50] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[51] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[51] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 1, 1),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[52] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[52] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[53] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[53] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[54] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[54] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 1),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[55] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, -1, -1),
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-2, -1, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(-1, -2, -1),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -2, 1),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, -1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(-1, 1, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(1, -1, -1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, -1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, -1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(1, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 1, -1),
    xtal::UnitCell(2, 1, 0),
    xtal::UnitCell(2, 1, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[55] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -2, -1, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -2, 1),
    xtal::UnitCellCoord(2, -1, -1, -1),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, -1),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, -1, 1, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, -1, -1),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, -1),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, -1, 1),
    xtal::UnitCellCoord(2, 1, 0, -1),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, -1),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 1, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(2, 2, 1, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, -1, -1),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, -1, -2, -1),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 1),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 1),
    xtal::UnitCellCoord(3, -1, 1, -1),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 1),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 1, -1, -1),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 1),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 1),
    xtal::UnitCellCoord(3, 1, 2, -1),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 1, -1),
    xtal::UnitCellCoord(3, 2, 1, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[56] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[56] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[57] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[57] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[58] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[58] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[59] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -2, -1),
    xtal::UnitCell(-2, -2, 0),
    xtal::UnitCell(-2, -2, 1),
    xtal::UnitCell(-2, 0, -1),
    xtal::UnitCell(-2, 0, 0),
    xtal::UnitCell(-2, 0, 1),
    xtal::UnitCell(0, -2, -1),
    xtal::UnitCell(0, -2, 0),
    xtal::UnitCell(0, -2, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 2, -1),
    xtal::UnitCell(0, 2, 0),
    xtal::UnitCell(0, 2, 1),
    xtal::UnitCell(2, 0, -1),
    xtal::UnitCell(2, 0, 0),
    xtal::UnitCell(2, 0, 1),
    xtal::UnitCell(2, 2, -1),
    xtal::UnitCell(2, 2, 0),
    xtal::UnitCell(2, 2, 1),
  };

  m_orbit_site_neighborhood[59] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -2, 0),
    xtal::UnitCellCoord(2, -2, -2, 1),
    xtal::UnitCellCoord(2, -2, 0, 0),
    xtal::UnitCellCoord(2, -2, 0, 1),
    xtal::UnitCellCoord(2, 0, -2, 0),
    xtal::UnitCellCoord(2, 0, -2, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 2, 0),
    xtal::UnitCellCoord(2, 0, 2, 1),
    xtal::UnitCellCoord(2, 2, 0, 0),
    xtal::UnitCellCoord(2, 2, 0, 1),
    xtal::UnitCellCoord(2, 2, 2, 0),
    xtal::UnitCellCoord(2, 2, 2, 1),
    xtal::UnitCellCoord(3, -2, -2, -1),
    xtal::UnitCellCoord(3, -2, -2, 0),
    xtal::UnitCellCoord(3, -2, 0, -1),
    xtal::UnitCellCoord(3, -2, 0, 0),
    xtal::UnitCellCoord(3, 0, -2, -1),
    xtal::UnitCellCoord(3, 0, -2, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 2, -1),
    xtal::UnitCellCoord(3, 0, 2, 0),
    xtal::UnitCellCoord(3, 2, 0, -1),
    xtal::UnitCellCoord(3, 2, 0, 0),
    xtal::UnitCellCoord(3, 2, 2, -1),
    xtal::UnitCellCoord(3, 2, 2, 0),
  };

  m_orbit_neighborhood[60] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[60] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[61] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[61] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[62] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[62] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[63] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[63] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[64] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[64] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[65] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[65] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[66] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
  };

  m_orbit_site_neighborhood[66] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
  };

  m_orbit_neighborhood[67] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[67] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[68] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[68] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[69] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[69] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[70] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[70] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[71] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, -1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 0, 1),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[71] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, -1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 0, 1),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, -1),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 0, 1),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[72] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[72] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

  m_orbit_neighborhood[73] = std::set<xtal::UnitCell> {
    xtal::UnitCell(-2, -1, 0),
    xtal::UnitCell(-1, -2, 0),
    xtal::UnitCell(-1, -1, -1),
    xtal::UnitCell(-1, -1, 0),
    xtal::UnitCell(-1, -1, 1),
    xtal::UnitCell(-1, 0, -1),
    xtal::UnitCell(-1, 0, 0),
    xtal::UnitCell(-1, 0, 1),
    xtal::UnitCell(-1, 1, 0),
    xtal::UnitCell(0, -1, -1),
    xtal::UnitCell(0, -1, 0),
    xtal::UnitCell(0, -1, 1),
    xtal::UnitCell(0, 0, 0),
    xtal::UnitCell(0, 1, -1),
    xtal::UnitCell(0, 1, 0),
    xtal::UnitCell(0, 1, 1),
    xtal::UnitCell(1, -1, 0),
    xtal::UnitCell(1, 0, -1),
    xtal::UnitCell(1, 0, 0),
    xtal::UnitCell(1, 0, 1),
    xtal::UnitCell(1, 1, -1),
    xtal::UnitCell(1, 1, 0),
    xtal::UnitCell(1, 1, 1),
    xtal::UnitCell(1, 2, 0),
    xtal::UnitCell(2, 1, 0),
  };

  m_orbit_site_neighborhood[73] = std::set<xtal::UnitCellCoord> {
    xtal::UnitCellCoord(2, -2, -1, 0),
    xtal::UnitCellCoord(2, -1, -2, 0),
    xtal::UnitCellCoord(2, -1, -1, 0),
    xtal::UnitCellCoord(2, -1, -1, 1),
    xtal::UnitCellCoord(2, -1, 0, 0),
    xtal::UnitCellCoord(2, -1, 0, 1),
    xtal::UnitCellCoord(2, -1, 1, 0),
    xtal::UnitCellCoord(2, 0, -1, 0),
    xtal::UnitCellCoord(2, 0, -1, 1),
    xtal::UnitCellCoord(2, 0, 0, 0),
    xtal::UnitCellCoord(2, 0, 1, 0),
    xtal::UnitCellCoord(2, 0, 1, 1),
    xtal::UnitCellCoord(2, 1, -1, 0),
    xtal::UnitCellCoord(2, 1, 0, 0),
    xtal::UnitCellCoord(2, 1, 0, 1),
    xtal::UnitCellCoord(2, 1, 1, 0),
    xtal::UnitCellCoord(2, 1, 1, 1),
    xtal::UnitCellCoord(2, 1, 2, 0),
    xtal::UnitCellCoord(2, 2, 1, 0),
    xtal::UnitCellCoord(3, -2, -1, 0),
    xtal::UnitCellCoord(3, -1, -2, 0),
    xtal::UnitCellCoord(3, -1, -1, -1),
    xtal::UnitCellCoord(3, -1, -1, 0),
    xtal::UnitCellCoord(3, -1, 0, -1),
    xtal::UnitCellCoord(3, -1, 0, 0),
    xtal::UnitCellCoord(3, -1, 1, 0),
    xtal::UnitCellCoord(3, 0, -1, -1),
    xtal::UnitCellCoord(3, 0, -1, 0),
    xtal::UnitCellCoord(3, 0, 0, 0),
    xtal::UnitCellCoord(3, 0, 1, -1),
    xtal::UnitCellCoord(3, 0, 1, 0),
    xtal::UnitCellCoord(3, 1, -1, 0),
    xtal::UnitCellCoord(3, 1, 0, -1),
    xtal::UnitCellCoord(3, 1, 0, 0),
    xtal::UnitCellCoord(3, 1, 1, -1),
    xtal::UnitCellCoord(3, 1, 1, 0),
    xtal::UnitCellCoord(3, 1, 2, 0),
    xtal::UnitCellCoord(3, 2, 1, 0),
  };

}

ZrO_Clexulator_formation_energy::~ZrO_Clexulator_formation_energy() {
  //nothing here
}

/// \brief Calculate contribution to global correlations from one unit cell
void ZrO_Clexulator_formation_energy::_calc_global_corr_contribution(
    double *corr_begin) const {
  _calc_global_corr_contribution();
  for (size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) =
        param_pack_type::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate contribution to global correlations from one unit cell
void ZrO_Clexulator_formation_energy::_calc_global_corr_contribution() const {
  m_params.pre_eval();
  {
    _global_prepare<double>();
    for (size_type i = 0; i < corr_size(); i++) {
      param_pack_type::Val<double>::set(m_params, m_corr_param_key, i,
                                  (this->*m_orbit_func_table[i])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate contribution to select global correlations from one unit cell
void ZrO_Clexulator_formation_energy::_calc_restricted_global_corr_contribution(
    double *corr_begin,
    size_type const *ind_list_begin,
    size_type const *ind_list_end) const {
  _calc_restricted_global_corr_contribution(ind_list_begin, ind_list_end);
  for(; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = param_pack_type::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate contribution to select global correlations from one unit cell
void ZrO_Clexulator_formation_energy::_calc_restricted_global_corr_contribution(size_type const *ind_list_begin, size_type const *ind_list_end) const {
  m_params.pre_eval();
  {
    _global_prepare<double>();
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      param_pack_type::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_orbit_func_table[*ind_list_begin])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate point correlations about basis site 'nlist_ind'
void ZrO_Clexulator_formation_energy::_calc_point_corr(int nlist_ind, double *corr_begin) const {
  _calc_point_corr(nlist_ind);
  for(size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) = param_pack_type::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate point correlations about basis site 'nlist_ind'
void ZrO_Clexulator_formation_energy::_calc_point_corr(int nlist_ind) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for(size_type i = 0; i < corr_size(); i++) {
      param_pack_type::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_site_func_table[nlist_ind][i])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate select point correlations about basis site 'nlist_ind'
void ZrO_Clexulator_formation_energy::_calc_restricted_point_corr(int nlist_ind, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
  _calc_restricted_point_corr(nlist_ind, ind_list_begin, ind_list_end);
  for(; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = param_pack_type::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate select point correlations about basis site 'nlist_ind'
void ZrO_Clexulator_formation_energy::_calc_restricted_point_corr(int nlist_ind, size_type const *ind_list_begin, size_type const *ind_list_end) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      param_pack_type::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_site_func_table[nlist_ind][*ind_list_begin])());
    }
  }
  m_params.post_eval();
}

/// \brief Calculate the change in point correlations due to changing an occupant
void ZrO_Clexulator_formation_energy::_calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin) const {
  _calc_delta_point_corr(nlist_ind, occ_i, occ_f);
  for(size_type i = 0; i < corr_size(); i++) {
    *(corr_begin + i) = param_pack_type::Val<double>::get(m_params, m_corr_param_key, i);
  }
}

/// \brief Calculate the change in point correlations due to changing an occupant
void ZrO_Clexulator_formation_energy::_calc_delta_point_corr(int nlist_ind, int occ_i, int occ_f) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for(size_type i = 0; i < corr_size(); i++) {
      param_pack_type::Val<double>::set(m_params, m_corr_param_key, i, (this->*m_occ_delta_site_func_table[nlist_ind][i])(occ_i, occ_f));
    }
  }
  m_params.post_eval();
}

/// \brief Calculate the change in select point correlations due to changing an occupant
void ZrO_Clexulator_formation_energy::_calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, double *corr_begin, size_type const *ind_list_begin, size_type const *ind_list_end) const {
  _calc_restricted_delta_point_corr(nlist_ind, occ_i, occ_f, ind_list_begin, ind_list_end);
  for(; ind_list_begin < ind_list_end; ind_list_begin++) {
    *(corr_begin + *ind_list_begin) = param_pack_type::Val<double>::get(m_params, m_corr_param_key, *ind_list_begin);
  }
}

/// \brief Calculate the change in select point correlations due to changing an occupant
void ZrO_Clexulator_formation_energy::_calc_restricted_delta_point_corr(int nlist_ind, int occ_i, int occ_f, size_type const *ind_list_begin, size_type const *ind_list_end) const {
  m_params.pre_eval();
  {
    _point_prepare<double>(nlist_ind);
    for(; ind_list_begin < ind_list_end; ind_list_begin++) {
      param_pack_type::Val<double>::set(m_params, m_corr_param_key, *ind_list_begin, (this->*m_occ_delta_site_func_table[nlist_ind][*ind_list_begin])(occ_i, occ_f));
    }
  }
  m_params.post_eval();
}

/// --- Prepare variables for global corr evaluation  ---

template<typename Scalar>
void ZrO_Clexulator_formation_energy::_global_prepare() const {
  if(m_params.eval_mode(m_occ_site_func_param_key) != param_pack_type::READ) {
    // param_pack_type::Val<Scalar>::set(
    //     m_params, {{ param_key}}, {{ site_function_index }}, {{ neighbor_list_index }},
    //     eval_occ_func_{{ sublattice_index }}_{{ site_function_index }}({{ neighbor_list_index }}));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0, eval_occ_func_2_0(0));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 0, eval_occ_func_2_1(0));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 1, eval_occ_func_3_0(1));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 1, eval_occ_func_3_1(1));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16, eval_occ_func_2_0(16));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 16, eval_occ_func_2_1(16));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8, eval_occ_func_2_0(8));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 8, eval_occ_func_2_1(8));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10, eval_occ_func_2_0(10));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 10, eval_occ_func_2_1(10));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12, eval_occ_func_2_0(12));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 12, eval_occ_func_2_1(12));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9, eval_occ_func_3_0(9));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 9, eval_occ_func_3_1(9));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11, eval_occ_func_3_0(11));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 11, eval_occ_func_3_1(11));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13, eval_occ_func_3_0(13));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 13, eval_occ_func_3_1(13));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43, eval_occ_func_3_0(43));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 43, eval_occ_func_3_1(43));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47, eval_occ_func_3_0(47));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 47, eval_occ_func_3_1(47));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51, eval_occ_func_3_0(51));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 51, eval_occ_func_3_1(51));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44, eval_occ_func_2_0(44));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 44, eval_occ_func_2_1(44));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48, eval_occ_func_2_0(48));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 48, eval_occ_func_2_1(48));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52, eval_occ_func_2_0(52));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 52, eval_occ_func_2_1(52));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17, eval_occ_func_3_0(17));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 17, eval_occ_func_3_1(17));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24, eval_occ_func_2_0(24));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 24, eval_occ_func_2_1(24));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26, eval_occ_func_2_0(26));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 26, eval_occ_func_2_1(26));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28, eval_occ_func_2_0(28));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 28, eval_occ_func_2_1(28));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25, eval_occ_func_3_0(25));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 25, eval_occ_func_3_1(25));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27, eval_occ_func_3_0(27));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 27, eval_occ_func_3_1(27));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29, eval_occ_func_3_0(29));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 29, eval_occ_func_3_1(29));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 42, eval_occ_func_2_0(42));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 42, eval_occ_func_2_1(42));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 46, eval_occ_func_2_0(46));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 46, eval_occ_func_2_1(46));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 50, eval_occ_func_2_0(50));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 50, eval_occ_func_2_1(50));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 45, eval_occ_func_3_0(45));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 45, eval_occ_func_3_1(45));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 49, eval_occ_func_3_0(49));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 49, eval_occ_func_3_1(49));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 53, eval_occ_func_3_0(53));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 53, eval_occ_func_3_1(53));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 79, eval_occ_func_3_0(79));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 79, eval_occ_func_3_1(79));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 83, eval_occ_func_3_0(83));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 83, eval_occ_func_3_1(83));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 87, eval_occ_func_3_0(87));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 87, eval_occ_func_3_1(87));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 80, eval_occ_func_2_0(80));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 80, eval_occ_func_2_1(80));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 84, eval_occ_func_2_0(84));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 84, eval_occ_func_2_1(84));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 88, eval_occ_func_2_0(88));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 88, eval_occ_func_2_1(88));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 60, eval_occ_func_2_0(60));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 60, eval_occ_func_2_1(60));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 62, eval_occ_func_2_0(62));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 62, eval_occ_func_2_1(62));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 64, eval_occ_func_2_0(64));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 64, eval_occ_func_2_1(64));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 61, eval_occ_func_3_0(61));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 61, eval_occ_func_3_1(61));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 63, eval_occ_func_3_0(63));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 63, eval_occ_func_3_1(63));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 65, eval_occ_func_3_0(65));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 65, eval_occ_func_3_1(65));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 103, eval_occ_func_3_0(103));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 103, eval_occ_func_3_1(103));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 107, eval_occ_func_3_0(107));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 107, eval_occ_func_3_1(107));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 111, eval_occ_func_3_0(111));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 111, eval_occ_func_3_1(111));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 104, eval_occ_func_2_0(104));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 104, eval_occ_func_2_1(104));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 108, eval_occ_func_2_0(108));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 108, eval_occ_func_2_1(108));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 112, eval_occ_func_2_0(112));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 112, eval_occ_func_2_1(112));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 78, eval_occ_func_2_0(78));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 78, eval_occ_func_2_1(78));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 82, eval_occ_func_2_0(82));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 82, eval_occ_func_2_1(82));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 81, eval_occ_func_3_0(81));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 81, eval_occ_func_3_1(81));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 85, eval_occ_func_3_0(85));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 85, eval_occ_func_3_1(85));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 86, eval_occ_func_2_0(86));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 86, eval_occ_func_2_1(86));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 89, eval_occ_func_3_0(89));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 89, eval_occ_func_3_1(89));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 200, eval_occ_func_2_0(200));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 200, eval_occ_func_2_1(200));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 102, eval_occ_func_2_0(102));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 102, eval_occ_func_2_1(102));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 106, eval_occ_func_2_0(106));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 106, eval_occ_func_2_1(106));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 110, eval_occ_func_2_0(110));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 110, eval_occ_func_2_1(110));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 105, eval_occ_func_3_0(105));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 105, eval_occ_func_3_1(105));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 109, eval_occ_func_3_0(109));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 109, eval_occ_func_3_1(109));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 113, eval_occ_func_3_0(113));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 113, eval_occ_func_3_1(113));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 215, eval_occ_func_3_0(215));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 215, eval_occ_func_3_1(215));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 219, eval_occ_func_3_0(219));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 219, eval_occ_func_3_1(219));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 223, eval_occ_func_3_0(223));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 223, eval_occ_func_3_1(223));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 216, eval_occ_func_2_0(216));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 216, eval_occ_func_2_1(216));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 220, eval_occ_func_2_0(220));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 220, eval_occ_func_2_1(220));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 224, eval_occ_func_2_0(224));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 224, eval_occ_func_2_1(224));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 126, eval_occ_func_2_0(126));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 126, eval_occ_func_2_1(126));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 128, eval_occ_func_2_0(128));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 128, eval_occ_func_2_1(128));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 130, eval_occ_func_2_0(130));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 130, eval_occ_func_2_1(130));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 132, eval_occ_func_2_0(132));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 132, eval_occ_func_2_1(132));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 134, eval_occ_func_2_0(134));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 134, eval_occ_func_2_1(134));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 136, eval_occ_func_2_0(136));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 136, eval_occ_func_2_1(136));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 127, eval_occ_func_3_0(127));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 127, eval_occ_func_3_1(127));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 129, eval_occ_func_3_0(129));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 129, eval_occ_func_3_1(129));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 131, eval_occ_func_3_0(131));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 131, eval_occ_func_3_1(131));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 133, eval_occ_func_3_0(133));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 133, eval_occ_func_3_1(133));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 135, eval_occ_func_3_0(135));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 135, eval_occ_func_3_1(135));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 137, eval_occ_func_3_0(137));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 137, eval_occ_func_3_1(137));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 175, eval_occ_func_3_0(175));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 175, eval_occ_func_3_1(175));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 179, eval_occ_func_3_0(179));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 179, eval_occ_func_3_1(179));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 183, eval_occ_func_3_0(183));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 183, eval_occ_func_3_1(183));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 187, eval_occ_func_3_0(187));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 187, eval_occ_func_3_1(187));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 191, eval_occ_func_3_0(191));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 191, eval_occ_func_3_1(191));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 195, eval_occ_func_3_0(195));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 195, eval_occ_func_3_1(195));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 176, eval_occ_func_2_0(176));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 176, eval_occ_func_2_1(176));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 180, eval_occ_func_2_0(180));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 180, eval_occ_func_2_1(180));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 184, eval_occ_func_2_0(184));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 184, eval_occ_func_2_1(184));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 188, eval_occ_func_2_0(188));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 188, eval_occ_func_2_1(188));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 192, eval_occ_func_2_0(192));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 192, eval_occ_func_2_1(192));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 196, eval_occ_func_2_0(196));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 196, eval_occ_func_2_1(196));
  }
}

/// --- Global corr contributions ---

// template<typename Scalar>
// Scalar {{ clexulator_name }}::eval_bfunc_{{ function_index }}() const {
//   // orbit_index: {{ orbit_index }}
//   return {{ factored_orbit_prefix }}(
//     {{ factored_cluster_prefix_0 }}({{ factored_cluster_function_0 }})
//     + {{ factored_cluster_prefix_1 }}({{ factored_cluster_function_1 }})
//     ...
//     ) / {{ orbit_mult }};
// }

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_0() const {
  // orbit_index: 0
  // function_index: 0
  return 1;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_1() const {
  // orbit_index: 1
  // function_index: 1
  return (
    (occ_func_2_1(0))
     + (occ_func_3_1(1))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_2() const {
  // orbit_index: 2
  // function_index: 2
  return (
    (occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_3() const {
  // orbit_index: 3
  // function_index: 3
  return (
    (occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_4() const {
  // orbit_index: 4
  // function_index: 4
  return (
    (occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_2_1(52)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_5() const {
  // orbit_index: 5
  // function_index: 5
  return (
    (occ_func_2_1(0)*occ_func_2_1(16))
     + (occ_func_3_1(1)*occ_func_3_1(17))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_6() const {
  // orbit_index: 6
  // function_index: 6
  return (
    (occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(29))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_7() const {
  // orbit_index: 7
  // function_index: 7
  return (
    (occ_func_2_1(0)*occ_func_2_1(42))
     + (occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_2_1(46))
     + (occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_2_1(52)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_3_1(1))
     + (occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_3_1(49)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_3_1(1)*occ_func_3_1(53))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_8() const {
  // orbit_index: 8
  // function_index: 8
  return (
    (occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_2_1(88)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_9() const {
  // orbit_index: 9
  // function_index: 9
  return (
    (occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(65))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_10() const {
  // orbit_index: 10
  // function_index: 10
  return (
    (occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_2_1(112)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_11() const {
  // orbit_index: 11
  // function_index: 11
  return (
    (occ_func_2_1(0)*occ_func_2_1(78))
     + (occ_func_2_1(0)*occ_func_2_1(82))
     + (occ_func_2_1(88)*occ_func_2_1(0))
     + (occ_func_3_1(81)*occ_func_3_1(1))
     + (occ_func_3_1(85)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(87))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_12() const {
  // orbit_index: 12
  // function_index: 12
  return (
    (occ_func_2_1(0)*occ_func_2_1(80))
     + (occ_func_2_1(0)*occ_func_2_1(84))
     + (occ_func_2_1(86)*occ_func_2_1(0))
     + (occ_func_3_1(79)*occ_func_3_1(1))
     + (occ_func_3_1(83)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(89))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_13() const {
  // orbit_index: 13
  // function_index: 13
  return (
    (occ_func_2_1(0)*occ_func_3_1(17))
     + (occ_func_3_1(1)*occ_func_2_1(200))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_14() const {
  // orbit_index: 14
  // function_index: 14
  return (
    (occ_func_2_1(0)*occ_func_2_1(102))
     + (occ_func_2_1(0)*occ_func_2_1(104))
     + (occ_func_2_1(0)*occ_func_2_1(106))
     + (occ_func_2_1(0)*occ_func_2_1(108))
     + (occ_func_2_1(110)*occ_func_2_1(0))
     + (occ_func_2_1(112)*occ_func_2_1(0))
     + (occ_func_3_1(103)*occ_func_3_1(1))
     + (occ_func_3_1(105)*occ_func_3_1(1))
     + (occ_func_3_1(107)*occ_func_3_1(1))
     + (occ_func_3_1(109)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(111))
     + (occ_func_3_1(1)*occ_func_3_1(113))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_15() const {
  // orbit_index: 15
  // function_index: 15
  return (
    (occ_func_2_1(0)*occ_func_3_1(215))
     + (occ_func_2_1(0)*occ_func_3_1(45))
     + (occ_func_2_1(0)*occ_func_3_1(219))
     + (occ_func_3_1(49)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(223))
     + (occ_func_3_1(53)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(42))
     + (occ_func_2_1(216)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(46))
     + (occ_func_2_1(220)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(50))
     + (occ_func_2_1(224)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_16() const {
  // orbit_index: 16
  // function_index: 16
  return (
    (occ_func_2_1(0)*occ_func_2_1(126))
     + (occ_func_2_1(128)*occ_func_2_1(0))
     + (occ_func_2_1(130)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(132))
     + (occ_func_2_1(134)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(136))
     + (occ_func_3_1(127)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(129))
     + (occ_func_3_1(1)*occ_func_3_1(131))
     + (occ_func_3_1(133)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(135))
     + (occ_func_3_1(137)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_17() const {
  // orbit_index: 17
  // function_index: 17
  return (
    (occ_func_2_1(0)*occ_func_3_1(175))
     + (occ_func_3_1(127)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(179))
     + (occ_func_3_1(129)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(183))
     + (occ_func_3_1(131)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(187))
     + (occ_func_3_1(133)*occ_func_2_1(0))
     + (occ_func_3_1(191)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(135))
     + (occ_func_3_1(195)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(137))
     + (occ_func_2_1(126)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(176))
     + (occ_func_2_1(128)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(180))
     + (occ_func_2_1(130)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(184))
     + (occ_func_2_1(132)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(188))
     + (occ_func_3_1(1)*occ_func_2_1(134))
     + (occ_func_2_1(192)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(136))
     + (occ_func_2_1(196)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_18() const {
  // orbit_index: 18
  // function_index: 18
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(10)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(13))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_19() const {
  // orbit_index: 19
  // function_index: 19
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(0))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_20() const {
  // orbit_index: 20
  // function_index: 20
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(51))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(51)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(13))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(44)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(10))
     + (occ_func_2_1(10)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(11))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_21() const {
  // orbit_index: 21
  // function_index: 21
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(13))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_3_1(13)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(51))
     + (occ_func_2_1(8)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(8))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(48))
     + (occ_func_2_1(48)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_22() const {
  // orbit_index: 22
  // function_index: 22
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(17))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_23() const {
  // orbit_index: 23
  // function_index: 23
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_3_1(43)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(52))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_24() const {
  // orbit_index: 24
  // function_index: 24
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(10)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(12)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_3_1(9)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(13)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_3_1(29))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_25() const {
  // orbit_index: 25
  // function_index: 25
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(47))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_3_1(11)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_3_1(51)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(8))
     + (occ_func_2_1(8)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(48))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(10)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_2_1(48)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(52)*occ_func_3_1(29)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_26() const {
  // orbit_index: 26
  // function_index: 26
  return (
    (occ_func_2_1(0)*occ_func_2_1(24)*occ_func_2_1(28))
     + (occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_3_1(25)*occ_func_3_1(29))
     + (occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(27))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_27() const {
  // orbit_index: 27
  // function_index: 27
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(43))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(47))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(52))
     + (occ_func_3_1(43)*occ_func_2_1(42)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(46)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_3_1(45))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_2_1(10))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_3_1(49))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_2_1(12))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_3_1(53))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_3_1(1))
     + (occ_func_2_1(44)*occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(49)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(53)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_28() const {
  // orbit_index: 28
  // function_index: 28
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(51))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(43))
     + (occ_func_3_1(43)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_3_1(13)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(13))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_2_1(52)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_2_1(44)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(10))
     + (occ_func_2_1(10)*occ_func_2_1(52)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(52))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_29() const {
  // orbit_index: 29
  // function_index: 29
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_2_1(10))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_2_1(12))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_2_1(52))
     + (occ_func_2_1(8)*occ_func_2_1(42)*occ_func_2_1(0))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_2_1(0))
     + (occ_func_2_1(10)*occ_func_2_1(46)*occ_func_2_1(0))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_3_1(9))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_3_1(45))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_3_1(11))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_3_1(49))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_3_1(13))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_3_1(53))
     + (occ_func_3_1(9)*occ_func_3_1(43)*occ_func_3_1(1))
     + (occ_func_3_1(9)*occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_3_1(49)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_3_1(51)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_3_1(53)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_30() const {
  // orbit_index: 30
  // function_index: 30
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_2_1(50))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(44)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(46)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(51)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_3_1(45))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_3_1(47))
     + (occ_func_3_1(53)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_3_1(13))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_31() const {
  // orbit_index: 31
  // function_index: 31
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_2_1(12))
     + (occ_func_2_1(8)*occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_2_1(46))
     + (occ_func_2_1(10)*occ_func_2_1(52)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_2_1(12))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_3_1(9))
     + (occ_func_3_1(13)*occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_3_1(11))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_3_1(53))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_32() const {
  // orbit_index: 32
  // function_index: 32
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_2_1(46))
     + (occ_func_2_1(42)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_2_1(44))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(46)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_2_1(48)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(48)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_2_1(50)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(52)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_3_1(43))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_3_1(49))
     + (occ_func_3_1(45)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_3_1(49)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(47)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(51)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(53)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_3_1(29))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_33() const {
  // orbit_index: 33
  // function_index: 33
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(10))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_2_1(8))
     + (occ_func_2_1(8)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_2_1(10)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(10)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(9))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_3_1(11))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(11)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_3_1(11)*occ_func_2_1(88)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_3_1(13)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_2_1(88)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(84))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_34() const {
  // orbit_index: 34
  // function_index: 34
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(47))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(9))
     + (occ_func_3_1(9)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_3_1(11)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(51)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(13)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_2_1(8))
     + (occ_func_2_1(8)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_2_1(48))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_2_1(10)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_2_1(48)*occ_func_2_1(88)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_2_1(52)*occ_func_2_1(88)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_35() const {
  // orbit_index: 35
  // function_index: 35
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(24))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(26))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(27))
     + (occ_func_2_1(24)*occ_func_3_1(79)*occ_func_2_1(0))
     + (occ_func_2_1(26)*occ_func_3_1(83)*occ_func_2_1(0))
     + (occ_func_2_1(28)*occ_func_3_1(29)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(29))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(88))
     + (occ_func_3_1(25)*occ_func_2_1(80)*occ_func_3_1(1))
     + (occ_func_3_1(27)*occ_func_2_1(84)*occ_func_3_1(1))
     + (occ_func_3_1(29)*occ_func_2_1(28)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_36() const {
  // orbit_index: 36
  // function_index: 36
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_2_1(24)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(26)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_2_1(28)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(25))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(27))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(25)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(27)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(29)*occ_func_2_1(88)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_37() const {
  // orbit_index: 37
  // function_index: 37
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(83))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_3_1(27)*occ_func_3_1(43)*occ_func_2_1(0))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_3_1(79))
     + (occ_func_3_1(25)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(29))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(83))
     + (occ_func_3_1(27)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(29))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_2_1(26)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(84))
     + (occ_func_2_1(24)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(49)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(28))
     + (occ_func_2_1(88)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(28))
     + (occ_func_2_1(88)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_2_1(26)*occ_func_2_1(52)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(84))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_38() const {
  // orbit_index: 38
  // function_index: 38
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(9))
     + (occ_func_3_1(9)*occ_func_3_1(83)*occ_func_2_1(0))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(27))
     + (occ_func_3_1(11)*occ_func_3_1(79)*occ_func_2_1(0))
     + (occ_func_2_1(48)*occ_func_2_1(0)*occ_func_3_1(25))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(87))
     + (occ_func_3_1(47)*occ_func_3_1(29)*occ_func_2_1(0))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(87))
     + (occ_func_3_1(51)*occ_func_3_1(29)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_3_1(83)*occ_func_2_1(0))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_3_1(27))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(26))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(8))
     + (occ_func_2_1(8)*occ_func_2_1(84)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(48))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_2_1(24))
     + (occ_func_2_1(10)*occ_func_2_1(80)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_2_1(28)*occ_func_3_1(1))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(88))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_2_1(26))
     + (occ_func_2_1(12)*occ_func_2_1(84)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_2_1(28)*occ_func_3_1(1))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(88))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_39() const {
  // orbit_index: 39
  // function_index: 39
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(27))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(79)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_3_1(83)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(88))
     + (occ_func_2_1(80)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_2_1(84)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(88)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_40() const {
  // orbit_index: 40
  // function_index: 40
  return (
    (occ_func_2_1(0)*occ_func_3_1(79)*occ_func_3_1(87))
     + (occ_func_3_1(79)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_3_1(29)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_3_1(25)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(0)*occ_func_3_1(29)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_3_1(83)*occ_func_3_1(87))
     + (occ_func_3_1(83)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_3_1(29)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(27)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(0)*occ_func_3_1(29)*occ_func_3_1(27))
     + (occ_func_3_1(1)*occ_func_2_1(28)*occ_func_2_1(24))
     + (occ_func_2_1(24)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_2_1(28)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_2_1(80)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(80)*occ_func_2_1(88))
     + (occ_func_3_1(1)*occ_func_2_1(28)*occ_func_2_1(26))
     + (occ_func_2_1(26)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_2_1(28)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(84)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(84)*occ_func_2_1(88))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_41() const {
  // orbit_index: 41
  // function_index: 41
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(60))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(62))
     + (occ_func_2_1(64)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_3_1(61)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(63)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(65))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_42() const {
  // orbit_index: 42
  // function_index: 42
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(60))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_2_1(60))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_2_1(62))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_2_1(62))
     + (occ_func_2_1(64)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(64)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(61)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_3_1(61)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(63)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_3_1(63)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(65))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_3_1(65))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_43() const {
  // orbit_index: 43
  // function_index: 43
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(28))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_2_1(26)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_2_1(24))
     + (occ_func_2_1(24)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(26))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_2_1(26)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_2_1(28)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_2_1(28)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_3_1(29))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_3_1(27)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(25))
     + (occ_func_3_1(25)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_3_1(27))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_3_1(27)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_3_1(29)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(29)*occ_func_3_1(65)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_44() const {
  // orbit_index: 44
  // function_index: 44
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_2_1(60))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_2_1(60))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_2_1(62))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_2_1(62))
     + (occ_func_2_1(64)*occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_2_1(64)*occ_func_2_1(52)*occ_func_2_1(0))
     + (occ_func_3_1(61)*occ_func_3_1(43)*occ_func_3_1(1))
     + (occ_func_3_1(61)*occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_3_1(63)*occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_3_1(63)*occ_func_3_1(49)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_3_1(65))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_3_1(65))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_45() const {
  // orbit_index: 45
  // function_index: 45
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(87))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_3_1(83)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_3_1(79)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(27))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_3_1(83)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(88))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_2_1(84)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(24))
     + (occ_func_2_1(80)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(26))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_2_1(84)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_3_1(65)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_46() const {
  // orbit_index: 46
  // function_index: 46
  return (
    (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(29))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_3_1(27)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(79))
     + (occ_func_3_1(25)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(83))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_3_1(27)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(28))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_2_1(26)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_2_1(24)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(84))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_2_1(26)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_3_1(65)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_47() const {
  // orbit_index: 47
  // function_index: 47
  return (
    (occ_func_2_1(0)*occ_func_2_1(60)*occ_func_2_1(64))
     + (occ_func_2_1(62)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(65)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(63)*occ_func_3_1(1)*occ_func_3_1(65))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_48() const {
  // orbit_index: 48
  // function_index: 48
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(103))
     + (occ_func_3_1(103)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_3_1(61)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(107))
     + (occ_func_3_1(107)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(63)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(111))
     + (occ_func_3_1(111)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_3_1(65)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(65))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(60))
     + (occ_func_2_1(60)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_2_1(104)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(62))
     + (occ_func_2_1(62)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_2_1(108)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(64))
     + (occ_func_2_1(64)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_2_1(112)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(112))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_49() const {
  // orbit_index: 49
  // function_index: 49
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(28))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(26)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_2_1(24))
     + (occ_func_2_1(24)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_2_1(26))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_2_1(26)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_2_1(28)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(28)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_3_1(29))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_3_1(27)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(25))
     + (occ_func_3_1(25)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(27))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_3_1(27)*occ_func_2_1(112)*occ_func_3_1(1))
     + (occ_func_3_1(29)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(29)*occ_func_2_1(64)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_50() const {
  // orbit_index: 50
  // function_index: 50
  return (
    (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_2_1(28))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_2_1(26)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_2_1(24))
     + (occ_func_2_1(24)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_2_1(26))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_2_1(26)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_2_1(28)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(28)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(29))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_3_1(27)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_3_1(25))
     + (occ_func_3_1(25)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_3_1(27))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_3_1(27)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_3_1(29)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(29)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_51() const {
  // orbit_index: 51
  // function_index: 51
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(103))
     + (occ_func_3_1(61)*occ_func_3_1(43)*occ_func_2_1(0))
     + (occ_func_3_1(103)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_3_1(107))
     + (occ_func_3_1(63)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_3_1(107)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(111))
     + (occ_func_3_1(65)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_3_1(111)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(65))
     + (occ_func_3_1(1)*occ_func_3_1(43)*occ_func_2_1(60))
     + (occ_func_2_1(104)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_2_1(60)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(62))
     + (occ_func_2_1(108)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_2_1(62)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(49)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(64))
     + (occ_func_2_1(112)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_2_1(64)*occ_func_2_1(52)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(112))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_52() const {
  // orbit_index: 52
  // function_index: 52
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(87))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_3_1(83)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_3_1(79)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(27))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_3_1(83)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_2_1(88))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_2_1(84)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(24))
     + (occ_func_2_1(80)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_2_1(26))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_2_1(84)*occ_func_2_1(112)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(64)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_53() const {
  // orbit_index: 53
  // function_index: 53
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(29))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_3_1(27)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(79))
     + (occ_func_3_1(25)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(83))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_3_1(27)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_2_1(28))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_2_1(26)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_2_1(24)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_2_1(84))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_2_1(26)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_54() const {
  // orbit_index: 54
  // function_index: 54
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(87))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_3_1(83)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_3_1(79)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(25))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(27))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_3_1(83)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(88))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_2_1(84)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(24))
     + (occ_func_2_1(80)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(26))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_2_1(84)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_55() const {
  // orbit_index: 55
  // function_index: 55
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(111))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(103))
     + (occ_func_3_1(103)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_3_1(107)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(65))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(63))
     + (occ_func_3_1(111)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(63)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(65)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(112))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(104))
     + (occ_func_2_1(104)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_2_1(108)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(64))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(62))
     + (occ_func_2_1(112)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_2_1(62)*occ_func_2_1(88)*occ_func_3_1(1))
     + (occ_func_2_1(64)*occ_func_2_1(88)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_56() const {
  // orbit_index: 56
  // function_index: 56
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_2_1(60)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_2_1(60)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_2_1(62)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(62)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(64)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_2_1(64)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(61))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(63))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(65))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(61)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_3_1(61)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(63)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(63)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(65)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_3_1(65)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_57() const {
  // orbit_index: 57
  // function_index: 57
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(65))
     + (occ_func_3_1(103)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_3_1(107)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_3_1(111)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(112))
     + (occ_func_2_1(60)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_2_1(62)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_2_1(64)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_58() const {
  // orbit_index: 58
  // function_index: 58
  return (
    (occ_func_2_1(0)*occ_func_3_1(103)*occ_func_3_1(111))
     + (occ_func_3_1(103)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(111)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_3_1(65)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_3_1(63)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_2_1(0)*occ_func_3_1(63)*occ_func_3_1(65))
     + (occ_func_2_1(112)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_2_1(104)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(112)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_2_1(64)*occ_func_2_1(62))
     + (occ_func_2_1(62)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_2_1(64)*occ_func_3_1(1)*occ_func_3_1(63))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_59() const {
  // orbit_index: 59
  // function_index: 59
  return (
    (occ_func_2_1(0)*occ_func_2_1(60)*occ_func_3_1(65))
     + (occ_func_2_1(64)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_3_1(65)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_3_1(111)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(64)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_2_1(0)*occ_func_2_1(62)*occ_func_3_1(111))
     + (occ_func_2_1(60)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(65)*occ_func_2_1(60))
     + (occ_func_3_1(61)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(63)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(1)*occ_func_3_1(65)*occ_func_2_1(108))
     + (occ_func_2_1(108)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_60() const {
  // orbit_index: 60
  // function_index: 60
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(11))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44)*occ_func_3_1(9))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_2_1(16))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_2_1(52))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_61() const {
  // orbit_index: 61
  // function_index: 61
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(11))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(52))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(11)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_62() const {
  // orbit_index: 62
  // function_index: 62
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(11))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(11)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_63() const {
  // orbit_index: 63
  // function_index: 63
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(11))
     + (occ_func_3_1(43)*occ_func_2_1(8)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_2_1(44))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(10)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_64() const {
  // orbit_index: 64
  // function_index: 64
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(9))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_2_1(48))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(48))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_65() const {
  // orbit_index: 65
  // function_index: 65
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_3_1(43)*occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(17)*occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(52))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_66() const {
  // orbit_index: 66
  // function_index: 66
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(9)*occ_func_3_1(13))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(13))
     + (occ_func_3_1(9)*occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(13)*occ_func_3_1(51)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(52)*occ_func_2_1(48))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(48)*occ_func_2_1(10)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(11))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_67() const {
  // orbit_index: 67
  // function_index: 67
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(8))
     + (occ_func_2_1(12)*occ_func_2_1(28)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_3_1(13)*occ_func_3_1(11)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(9)*occ_func_3_1(27)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(13))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_68() const {
  // orbit_index: 68
  // function_index: 68
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(44))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(29))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_69() const {
  // orbit_index: 69
  // function_index: 69
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(47)*occ_func_3_1(51))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(12))
     + (occ_func_3_1(51)*occ_func_2_1(8)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(8))
     + (occ_func_3_1(13)*occ_func_2_1(26)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(9)*occ_func_3_1(13))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(47)*occ_func_2_1(28)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(51)*occ_func_2_1(28)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(28)*occ_func_2_1(10))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(28)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(8)*occ_func_3_1(27)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_2_1(12)*occ_func_3_1(11)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(9)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(27)*occ_func_3_1(9))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(27)*occ_func_3_1(13))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(13))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(11))
     + (occ_func_2_1(52)*occ_func_3_1(29)*occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_2_1(48)*occ_func_3_1(29)*occ_func_3_1(1)*occ_func_3_1(13))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_70() const {
  // orbit_index: 70
  // function_index: 70
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(47)*occ_func_2_1(12))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(26)*occ_func_3_1(51))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(9)*occ_func_2_1(12))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_3_1(47)*occ_func_2_1(28)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(28)*occ_func_3_1(13))
     + (occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_3_1(13)*occ_func_2_1(44)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(27)*occ_func_2_1(44))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(29)*occ_func_2_1(10))
     + (occ_func_2_1(52)*occ_func_3_1(29)*occ_func_3_1(1)*occ_func_2_1(48))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_71() const {
  // orbit_index: 71
  // function_index: 71
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_3_1(43)*occ_func_3_1(9)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(48))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(29)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_72() const {
  // orbit_index: 72
  // function_index: 72
  return (
    (occ_func_2_1(0)*occ_func_2_1(24)*occ_func_2_1(10)*occ_func_2_1(28))
     + (occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(12)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_3_1(25)*occ_func_3_1(11)*occ_func_3_1(29))
     + (occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(13)*occ_func_3_1(27))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_orbit_bfunc_73() const {
  // orbit_index: 73
  // function_index: 73
  return (
    (occ_func_2_1(0)*occ_func_2_1(24)*occ_func_3_1(47)*occ_func_2_1(28))
     + (occ_func_2_1(28)*occ_func_2_1(24)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(26)*occ_func_3_1(51)*occ_func_2_1(28))
     + (occ_func_2_1(26)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_2_1(28))
     + (occ_func_3_1(25)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(29))
     + (occ_func_3_1(1)*occ_func_3_1(25)*occ_func_2_1(48)*occ_func_3_1(29))
     + (occ_func_3_1(1)*occ_func_3_1(29)*occ_func_2_1(12)*occ_func_3_1(27))
     + (occ_func_3_1(27)*occ_func_3_1(29)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 8.0;
}

///  --- Prepare variables for point corr evaluation  ---

template<typename Scalar>
void ZrO_Clexulator_formation_energy::_point_prepare(int nlist_ind) const {
  switch(nlist_ind) {
  case 0:
   if(m_params.eval_mode(m_occ_site_func_param_key) != param_pack_type::READ) {
    // param_pack_type::Val<Scalar>::set(
    //     m_params, {{ param_key}}, {{ site_function_index }}, {{ neighbor_list_index }},
    //     eval_occ_func_{{ sublattice_index }}_{{ site_function_index }}({{ neighbor_list_index }}));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0, eval_occ_func_2_0(0));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 0, eval_occ_func_2_1(0));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 1, eval_occ_func_3_0(1));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 1, eval_occ_func_3_1(1));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15, eval_occ_func_3_0(15));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 15, eval_occ_func_3_1(15));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16, eval_occ_func_2_0(16));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 16, eval_occ_func_2_1(16));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8, eval_occ_func_2_0(8));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 8, eval_occ_func_2_1(8));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6, eval_occ_func_2_0(6));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 6, eval_occ_func_2_1(6));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10, eval_occ_func_2_0(10));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 10, eval_occ_func_2_1(10));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4, eval_occ_func_2_0(4));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 4, eval_occ_func_2_1(4));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2, eval_occ_func_2_0(2));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 2, eval_occ_func_2_1(2));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12, eval_occ_func_2_0(12));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 12, eval_occ_func_2_1(12));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7, eval_occ_func_3_0(7));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 7, eval_occ_func_3_1(7));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9, eval_occ_func_3_0(9));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 9, eval_occ_func_3_1(9));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5, eval_occ_func_3_0(5));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 5, eval_occ_func_3_1(5));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11, eval_occ_func_3_0(11));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 11, eval_occ_func_3_1(11));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13, eval_occ_func_3_0(13));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 13, eval_occ_func_3_1(13));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3, eval_occ_func_3_0(3));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 3, eval_occ_func_3_1(3));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43, eval_occ_func_3_0(43));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 43, eval_occ_func_3_1(43));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47, eval_occ_func_3_0(47));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 47, eval_occ_func_3_1(47));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51, eval_occ_func_3_0(51));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 51, eval_occ_func_3_1(51));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39, eval_occ_func_3_0(39));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 39, eval_occ_func_3_1(39));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35, eval_occ_func_3_0(35));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 35, eval_occ_func_3_1(35));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31, eval_occ_func_3_0(31));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 31, eval_occ_func_3_1(31));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40, eval_occ_func_2_0(40));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 40, eval_occ_func_2_1(40));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36, eval_occ_func_2_0(36));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 36, eval_occ_func_2_1(36));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32, eval_occ_func_2_0(32));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 32, eval_occ_func_2_1(32));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44, eval_occ_func_2_0(44));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 44, eval_occ_func_2_1(44));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48, eval_occ_func_2_0(48));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 48, eval_occ_func_2_1(48));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52, eval_occ_func_2_0(52));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 52, eval_occ_func_2_1(52));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14, eval_occ_func_2_0(14));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 14, eval_occ_func_2_1(14));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17, eval_occ_func_3_0(17));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 17, eval_occ_func_3_1(17));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24, eval_occ_func_2_0(24));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 24, eval_occ_func_2_1(24));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22, eval_occ_func_2_0(22));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 22, eval_occ_func_2_1(22));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26, eval_occ_func_2_0(26));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 26, eval_occ_func_2_1(26));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20, eval_occ_func_2_0(20));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 20, eval_occ_func_2_1(20));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18, eval_occ_func_2_0(18));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 18, eval_occ_func_2_1(18));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28, eval_occ_func_2_0(28));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 28, eval_occ_func_2_1(28));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23, eval_occ_func_3_0(23));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 23, eval_occ_func_3_1(23));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25, eval_occ_func_3_0(25));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 25, eval_occ_func_3_1(25));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21, eval_occ_func_3_0(21));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 21, eval_occ_func_3_1(21));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27, eval_occ_func_3_0(27));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 27, eval_occ_func_3_1(27));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29, eval_occ_func_3_0(29));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 29, eval_occ_func_3_1(29));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19, eval_occ_func_3_0(19));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 19, eval_occ_func_3_1(19));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 42, eval_occ_func_2_0(42));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 42, eval_occ_func_2_1(42));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 38, eval_occ_func_2_0(38));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 38, eval_occ_func_2_1(38));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 46, eval_occ_func_2_0(46));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 46, eval_occ_func_2_1(46));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 34, eval_occ_func_2_0(34));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 34, eval_occ_func_2_1(34));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 50, eval_occ_func_2_0(50));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 50, eval_occ_func_2_1(50));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 30, eval_occ_func_2_0(30));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 30, eval_occ_func_2_1(30));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 41, eval_occ_func_3_0(41));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 41, eval_occ_func_3_1(41));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 45, eval_occ_func_3_0(45));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 45, eval_occ_func_3_1(45));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 37, eval_occ_func_3_0(37));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 37, eval_occ_func_3_1(37));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 49, eval_occ_func_3_0(49));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 49, eval_occ_func_3_1(49));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 33, eval_occ_func_3_0(33));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 33, eval_occ_func_3_1(33));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 53, eval_occ_func_3_0(53));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 53, eval_occ_func_3_1(53));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 79, eval_occ_func_3_0(79));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 79, eval_occ_func_3_1(79));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 83, eval_occ_func_3_0(83));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 83, eval_occ_func_3_1(83));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 87, eval_occ_func_3_0(87));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 87, eval_occ_func_3_1(87));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 75, eval_occ_func_3_0(75));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 75, eval_occ_func_3_1(75));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 71, eval_occ_func_3_0(71));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 71, eval_occ_func_3_1(71));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 67, eval_occ_func_3_0(67));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 67, eval_occ_func_3_1(67));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 76, eval_occ_func_2_0(76));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 76, eval_occ_func_2_1(76));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 72, eval_occ_func_2_0(72));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 72, eval_occ_func_2_1(72));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 68, eval_occ_func_2_0(68));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 68, eval_occ_func_2_1(68));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 80, eval_occ_func_2_0(80));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 80, eval_occ_func_2_1(80));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 84, eval_occ_func_2_0(84));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 84, eval_occ_func_2_1(84));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 88, eval_occ_func_2_0(88));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 88, eval_occ_func_2_1(88));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 60, eval_occ_func_2_0(60));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 60, eval_occ_func_2_1(60));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 58, eval_occ_func_2_0(58));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 58, eval_occ_func_2_1(58));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 62, eval_occ_func_2_0(62));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 62, eval_occ_func_2_1(62));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 56, eval_occ_func_2_0(56));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 56, eval_occ_func_2_1(56));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 54, eval_occ_func_2_0(54));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 54, eval_occ_func_2_1(54));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 64, eval_occ_func_2_0(64));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 64, eval_occ_func_2_1(64));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 59, eval_occ_func_3_0(59));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 59, eval_occ_func_3_1(59));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 61, eval_occ_func_3_0(61));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 61, eval_occ_func_3_1(61));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 57, eval_occ_func_3_0(57));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 57, eval_occ_func_3_1(57));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 63, eval_occ_func_3_0(63));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 63, eval_occ_func_3_1(63));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 65, eval_occ_func_3_0(65));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 65, eval_occ_func_3_1(65));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 55, eval_occ_func_3_0(55));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 55, eval_occ_func_3_1(55));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 103, eval_occ_func_3_0(103));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 103, eval_occ_func_3_1(103));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 107, eval_occ_func_3_0(107));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 107, eval_occ_func_3_1(107));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 111, eval_occ_func_3_0(111));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 111, eval_occ_func_3_1(111));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 99, eval_occ_func_3_0(99));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 99, eval_occ_func_3_1(99));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 95, eval_occ_func_3_0(95));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 95, eval_occ_func_3_1(95));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 91, eval_occ_func_3_0(91));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 91, eval_occ_func_3_1(91));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 100, eval_occ_func_2_0(100));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 100, eval_occ_func_2_1(100));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 96, eval_occ_func_2_0(96));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 96, eval_occ_func_2_1(96));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 92, eval_occ_func_2_0(92));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 92, eval_occ_func_2_1(92));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 104, eval_occ_func_2_0(104));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 104, eval_occ_func_2_1(104));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 108, eval_occ_func_2_0(108));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 108, eval_occ_func_2_1(108));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 112, eval_occ_func_2_0(112));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 112, eval_occ_func_2_1(112));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 78, eval_occ_func_2_0(78));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 78, eval_occ_func_2_1(78));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 82, eval_occ_func_2_0(82));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 82, eval_occ_func_2_1(82));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 66, eval_occ_func_2_0(66));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 66, eval_occ_func_2_1(66));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 81, eval_occ_func_3_0(81));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 81, eval_occ_func_3_1(81));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 85, eval_occ_func_3_0(85));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 85, eval_occ_func_3_1(85));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 69, eval_occ_func_3_0(69));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 69, eval_occ_func_3_1(69));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 74, eval_occ_func_2_0(74));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 74, eval_occ_func_2_1(74));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 70, eval_occ_func_2_0(70));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 70, eval_occ_func_2_1(70));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 86, eval_occ_func_2_0(86));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 86, eval_occ_func_2_1(86));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 77, eval_occ_func_3_0(77));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 77, eval_occ_func_3_1(77));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 73, eval_occ_func_3_0(73));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 73, eval_occ_func_3_1(73));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 89, eval_occ_func_3_0(89));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 89, eval_occ_func_3_1(89));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 199, eval_occ_func_3_0(199));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 199, eval_occ_func_3_1(199));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 200, eval_occ_func_2_0(200));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 200, eval_occ_func_2_1(200));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 102, eval_occ_func_2_0(102));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 102, eval_occ_func_2_1(102));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 98, eval_occ_func_2_0(98));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 98, eval_occ_func_2_1(98));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 106, eval_occ_func_2_0(106));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 106, eval_occ_func_2_1(106));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 94, eval_occ_func_2_0(94));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 94, eval_occ_func_2_1(94));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 110, eval_occ_func_2_0(110));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 110, eval_occ_func_2_1(110));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 90, eval_occ_func_2_0(90));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 90, eval_occ_func_2_1(90));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 101, eval_occ_func_3_0(101));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 101, eval_occ_func_3_1(101));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 105, eval_occ_func_3_0(105));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 105, eval_occ_func_3_1(105));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 97, eval_occ_func_3_0(97));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 97, eval_occ_func_3_1(97));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 109, eval_occ_func_3_0(109));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 109, eval_occ_func_3_1(109));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 93, eval_occ_func_3_0(93));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 93, eval_occ_func_3_1(93));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 113, eval_occ_func_3_0(113));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 113, eval_occ_func_3_1(113));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 215, eval_occ_func_3_0(215));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 215, eval_occ_func_3_1(215));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 219, eval_occ_func_3_0(219));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 219, eval_occ_func_3_1(219));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 223, eval_occ_func_3_0(223));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 223, eval_occ_func_3_1(223));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 211, eval_occ_func_3_0(211));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 211, eval_occ_func_3_1(211));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 207, eval_occ_func_3_0(207));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 207, eval_occ_func_3_1(207));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 203, eval_occ_func_3_0(203));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 203, eval_occ_func_3_1(203));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 212, eval_occ_func_2_0(212));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 212, eval_occ_func_2_1(212));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 208, eval_occ_func_2_0(208));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 208, eval_occ_func_2_1(208));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 204, eval_occ_func_2_0(204));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 204, eval_occ_func_2_1(204));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 216, eval_occ_func_2_0(216));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 216, eval_occ_func_2_1(216));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 220, eval_occ_func_2_0(220));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 220, eval_occ_func_2_1(220));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 224, eval_occ_func_2_0(224));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 224, eval_occ_func_2_1(224));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 126, eval_occ_func_2_0(126));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 126, eval_occ_func_2_1(126));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 124, eval_occ_func_2_0(124));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 124, eval_occ_func_2_1(124));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 122, eval_occ_func_2_0(122));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 122, eval_occ_func_2_1(122));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 128, eval_occ_func_2_0(128));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 128, eval_occ_func_2_1(128));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 120, eval_occ_func_2_0(120));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 120, eval_occ_func_2_1(120));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 130, eval_occ_func_2_0(130));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 130, eval_occ_func_2_1(130));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 132, eval_occ_func_2_0(132));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 132, eval_occ_func_2_1(132));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 118, eval_occ_func_2_0(118));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 118, eval_occ_func_2_1(118));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 116, eval_occ_func_2_0(116));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 116, eval_occ_func_2_1(116));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 134, eval_occ_func_2_0(134));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 134, eval_occ_func_2_1(134));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 136, eval_occ_func_2_0(136));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 136, eval_occ_func_2_1(136));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 114, eval_occ_func_2_0(114));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 114, eval_occ_func_2_1(114));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 125, eval_occ_func_3_0(125));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 125, eval_occ_func_3_1(125));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 127, eval_occ_func_3_0(127));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 127, eval_occ_func_3_1(127));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 129, eval_occ_func_3_0(129));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 129, eval_occ_func_3_1(129));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 123, eval_occ_func_3_0(123));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 123, eval_occ_func_3_1(123));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 131, eval_occ_func_3_0(131));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 131, eval_occ_func_3_1(131));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 121, eval_occ_func_3_0(121));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 121, eval_occ_func_3_1(121));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 119, eval_occ_func_3_0(119));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 119, eval_occ_func_3_1(119));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 133, eval_occ_func_3_0(133));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 133, eval_occ_func_3_1(133));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 135, eval_occ_func_3_0(135));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 135, eval_occ_func_3_1(135));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 117, eval_occ_func_3_0(117));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 117, eval_occ_func_3_1(117));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 115, eval_occ_func_3_0(115));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 115, eval_occ_func_3_1(115));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 137, eval_occ_func_3_0(137));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 137, eval_occ_func_3_1(137));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 175, eval_occ_func_3_0(175));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 175, eval_occ_func_3_1(175));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 179, eval_occ_func_3_0(179));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 179, eval_occ_func_3_1(179));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 183, eval_occ_func_3_0(183));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 183, eval_occ_func_3_1(183));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 187, eval_occ_func_3_0(187));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 187, eval_occ_func_3_1(187));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 191, eval_occ_func_3_0(191));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 191, eval_occ_func_3_1(191));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 195, eval_occ_func_3_0(195));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 195, eval_occ_func_3_1(195));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 171, eval_occ_func_3_0(171));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 171, eval_occ_func_3_1(171));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 167, eval_occ_func_3_0(167));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 167, eval_occ_func_3_1(167));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 163, eval_occ_func_3_0(163));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 163, eval_occ_func_3_1(163));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 159, eval_occ_func_3_0(159));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 159, eval_occ_func_3_1(159));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 155, eval_occ_func_3_0(155));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 155, eval_occ_func_3_1(155));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 151, eval_occ_func_3_0(151));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 151, eval_occ_func_3_1(151));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 172, eval_occ_func_2_0(172));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 172, eval_occ_func_2_1(172));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 168, eval_occ_func_2_0(168));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 168, eval_occ_func_2_1(168));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 164, eval_occ_func_2_0(164));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 164, eval_occ_func_2_1(164));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 160, eval_occ_func_2_0(160));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 160, eval_occ_func_2_1(160));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 156, eval_occ_func_2_0(156));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 156, eval_occ_func_2_1(156));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 152, eval_occ_func_2_0(152));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 152, eval_occ_func_2_1(152));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 176, eval_occ_func_2_0(176));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 176, eval_occ_func_2_1(176));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 180, eval_occ_func_2_0(180));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 180, eval_occ_func_2_1(180));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 184, eval_occ_func_2_0(184));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 184, eval_occ_func_2_1(184));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 188, eval_occ_func_2_0(188));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 188, eval_occ_func_2_1(188));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 192, eval_occ_func_2_0(192));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 192, eval_occ_func_2_1(192));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 196, eval_occ_func_2_0(196));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 196, eval_occ_func_2_1(196));
  }
  case 1:
   if(m_params.eval_mode(m_occ_site_func_param_key) != param_pack_type::READ) {
    // param_pack_type::Val<Scalar>::set(
    //     m_params, {{ param_key}}, {{ site_function_index }}, {{ neighbor_list_index }},
    //     eval_occ_func_{{ sublattice_index }}_{{ site_function_index }}({{ neighbor_list_index }}));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 0, eval_occ_func_2_0(0));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 0, eval_occ_func_2_1(0));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 1, eval_occ_func_3_0(1));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 1, eval_occ_func_3_1(1));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 15, eval_occ_func_3_0(15));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 15, eval_occ_func_3_1(15));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 16, eval_occ_func_2_0(16));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 16, eval_occ_func_2_1(16));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 8, eval_occ_func_2_0(8));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 8, eval_occ_func_2_1(8));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 6, eval_occ_func_2_0(6));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 6, eval_occ_func_2_1(6));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 10, eval_occ_func_2_0(10));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 10, eval_occ_func_2_1(10));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 4, eval_occ_func_2_0(4));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 4, eval_occ_func_2_1(4));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 2, eval_occ_func_2_0(2));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 2, eval_occ_func_2_1(2));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 12, eval_occ_func_2_0(12));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 12, eval_occ_func_2_1(12));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 7, eval_occ_func_3_0(7));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 7, eval_occ_func_3_1(7));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 9, eval_occ_func_3_0(9));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 9, eval_occ_func_3_1(9));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 5, eval_occ_func_3_0(5));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 5, eval_occ_func_3_1(5));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 11, eval_occ_func_3_0(11));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 11, eval_occ_func_3_1(11));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 13, eval_occ_func_3_0(13));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 13, eval_occ_func_3_1(13));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 3, eval_occ_func_3_0(3));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 3, eval_occ_func_3_1(3));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 43, eval_occ_func_3_0(43));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 43, eval_occ_func_3_1(43));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 47, eval_occ_func_3_0(47));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 47, eval_occ_func_3_1(47));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 51, eval_occ_func_3_0(51));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 51, eval_occ_func_3_1(51));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 39, eval_occ_func_3_0(39));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 39, eval_occ_func_3_1(39));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 35, eval_occ_func_3_0(35));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 35, eval_occ_func_3_1(35));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 31, eval_occ_func_3_0(31));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 31, eval_occ_func_3_1(31));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 40, eval_occ_func_2_0(40));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 40, eval_occ_func_2_1(40));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 36, eval_occ_func_2_0(36));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 36, eval_occ_func_2_1(36));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 32, eval_occ_func_2_0(32));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 32, eval_occ_func_2_1(32));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 44, eval_occ_func_2_0(44));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 44, eval_occ_func_2_1(44));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 48, eval_occ_func_2_0(48));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 48, eval_occ_func_2_1(48));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 52, eval_occ_func_2_0(52));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 52, eval_occ_func_2_1(52));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 14, eval_occ_func_2_0(14));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 14, eval_occ_func_2_1(14));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 17, eval_occ_func_3_0(17));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 17, eval_occ_func_3_1(17));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 24, eval_occ_func_2_0(24));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 24, eval_occ_func_2_1(24));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 22, eval_occ_func_2_0(22));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 22, eval_occ_func_2_1(22));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 26, eval_occ_func_2_0(26));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 26, eval_occ_func_2_1(26));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 20, eval_occ_func_2_0(20));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 20, eval_occ_func_2_1(20));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 18, eval_occ_func_2_0(18));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 18, eval_occ_func_2_1(18));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 28, eval_occ_func_2_0(28));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 28, eval_occ_func_2_1(28));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 23, eval_occ_func_3_0(23));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 23, eval_occ_func_3_1(23));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 25, eval_occ_func_3_0(25));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 25, eval_occ_func_3_1(25));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 21, eval_occ_func_3_0(21));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 21, eval_occ_func_3_1(21));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 27, eval_occ_func_3_0(27));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 27, eval_occ_func_3_1(27));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 29, eval_occ_func_3_0(29));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 29, eval_occ_func_3_1(29));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 19, eval_occ_func_3_0(19));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 19, eval_occ_func_3_1(19));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 42, eval_occ_func_2_0(42));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 42, eval_occ_func_2_1(42));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 38, eval_occ_func_2_0(38));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 38, eval_occ_func_2_1(38));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 46, eval_occ_func_2_0(46));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 46, eval_occ_func_2_1(46));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 34, eval_occ_func_2_0(34));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 34, eval_occ_func_2_1(34));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 50, eval_occ_func_2_0(50));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 50, eval_occ_func_2_1(50));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 30, eval_occ_func_2_0(30));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 30, eval_occ_func_2_1(30));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 41, eval_occ_func_3_0(41));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 41, eval_occ_func_3_1(41));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 45, eval_occ_func_3_0(45));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 45, eval_occ_func_3_1(45));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 37, eval_occ_func_3_0(37));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 37, eval_occ_func_3_1(37));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 49, eval_occ_func_3_0(49));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 49, eval_occ_func_3_1(49));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 33, eval_occ_func_3_0(33));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 33, eval_occ_func_3_1(33));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 53, eval_occ_func_3_0(53));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 53, eval_occ_func_3_1(53));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 79, eval_occ_func_3_0(79));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 79, eval_occ_func_3_1(79));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 83, eval_occ_func_3_0(83));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 83, eval_occ_func_3_1(83));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 87, eval_occ_func_3_0(87));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 87, eval_occ_func_3_1(87));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 75, eval_occ_func_3_0(75));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 75, eval_occ_func_3_1(75));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 71, eval_occ_func_3_0(71));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 71, eval_occ_func_3_1(71));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 67, eval_occ_func_3_0(67));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 67, eval_occ_func_3_1(67));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 76, eval_occ_func_2_0(76));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 76, eval_occ_func_2_1(76));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 72, eval_occ_func_2_0(72));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 72, eval_occ_func_2_1(72));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 68, eval_occ_func_2_0(68));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 68, eval_occ_func_2_1(68));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 80, eval_occ_func_2_0(80));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 80, eval_occ_func_2_1(80));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 84, eval_occ_func_2_0(84));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 84, eval_occ_func_2_1(84));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 88, eval_occ_func_2_0(88));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 88, eval_occ_func_2_1(88));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 60, eval_occ_func_2_0(60));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 60, eval_occ_func_2_1(60));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 58, eval_occ_func_2_0(58));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 58, eval_occ_func_2_1(58));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 62, eval_occ_func_2_0(62));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 62, eval_occ_func_2_1(62));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 56, eval_occ_func_2_0(56));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 56, eval_occ_func_2_1(56));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 54, eval_occ_func_2_0(54));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 54, eval_occ_func_2_1(54));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 64, eval_occ_func_2_0(64));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 64, eval_occ_func_2_1(64));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 59, eval_occ_func_3_0(59));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 59, eval_occ_func_3_1(59));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 61, eval_occ_func_3_0(61));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 61, eval_occ_func_3_1(61));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 57, eval_occ_func_3_0(57));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 57, eval_occ_func_3_1(57));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 63, eval_occ_func_3_0(63));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 63, eval_occ_func_3_1(63));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 65, eval_occ_func_3_0(65));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 65, eval_occ_func_3_1(65));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 55, eval_occ_func_3_0(55));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 55, eval_occ_func_3_1(55));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 103, eval_occ_func_3_0(103));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 103, eval_occ_func_3_1(103));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 107, eval_occ_func_3_0(107));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 107, eval_occ_func_3_1(107));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 111, eval_occ_func_3_0(111));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 111, eval_occ_func_3_1(111));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 99, eval_occ_func_3_0(99));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 99, eval_occ_func_3_1(99));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 95, eval_occ_func_3_0(95));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 95, eval_occ_func_3_1(95));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 91, eval_occ_func_3_0(91));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 91, eval_occ_func_3_1(91));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 100, eval_occ_func_2_0(100));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 100, eval_occ_func_2_1(100));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 96, eval_occ_func_2_0(96));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 96, eval_occ_func_2_1(96));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 92, eval_occ_func_2_0(92));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 92, eval_occ_func_2_1(92));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 104, eval_occ_func_2_0(104));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 104, eval_occ_func_2_1(104));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 108, eval_occ_func_2_0(108));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 108, eval_occ_func_2_1(108));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 112, eval_occ_func_2_0(112));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 112, eval_occ_func_2_1(112));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 78, eval_occ_func_2_0(78));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 78, eval_occ_func_2_1(78));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 82, eval_occ_func_2_0(82));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 82, eval_occ_func_2_1(82));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 66, eval_occ_func_2_0(66));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 66, eval_occ_func_2_1(66));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 81, eval_occ_func_3_0(81));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 81, eval_occ_func_3_1(81));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 85, eval_occ_func_3_0(85));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 85, eval_occ_func_3_1(85));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 69, eval_occ_func_3_0(69));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 69, eval_occ_func_3_1(69));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 74, eval_occ_func_2_0(74));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 74, eval_occ_func_2_1(74));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 70, eval_occ_func_2_0(70));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 70, eval_occ_func_2_1(70));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 86, eval_occ_func_2_0(86));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 86, eval_occ_func_2_1(86));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 77, eval_occ_func_3_0(77));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 77, eval_occ_func_3_1(77));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 73, eval_occ_func_3_0(73));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 73, eval_occ_func_3_1(73));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 89, eval_occ_func_3_0(89));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 89, eval_occ_func_3_1(89));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 199, eval_occ_func_3_0(199));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 199, eval_occ_func_3_1(199));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 200, eval_occ_func_2_0(200));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 200, eval_occ_func_2_1(200));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 102, eval_occ_func_2_0(102));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 102, eval_occ_func_2_1(102));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 98, eval_occ_func_2_0(98));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 98, eval_occ_func_2_1(98));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 106, eval_occ_func_2_0(106));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 106, eval_occ_func_2_1(106));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 94, eval_occ_func_2_0(94));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 94, eval_occ_func_2_1(94));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 110, eval_occ_func_2_0(110));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 110, eval_occ_func_2_1(110));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 90, eval_occ_func_2_0(90));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 90, eval_occ_func_2_1(90));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 101, eval_occ_func_3_0(101));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 101, eval_occ_func_3_1(101));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 105, eval_occ_func_3_0(105));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 105, eval_occ_func_3_1(105));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 97, eval_occ_func_3_0(97));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 97, eval_occ_func_3_1(97));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 109, eval_occ_func_3_0(109));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 109, eval_occ_func_3_1(109));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 93, eval_occ_func_3_0(93));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 93, eval_occ_func_3_1(93));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 113, eval_occ_func_3_0(113));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 113, eval_occ_func_3_1(113));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 215, eval_occ_func_3_0(215));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 215, eval_occ_func_3_1(215));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 219, eval_occ_func_3_0(219));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 219, eval_occ_func_3_1(219));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 223, eval_occ_func_3_0(223));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 223, eval_occ_func_3_1(223));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 211, eval_occ_func_3_0(211));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 211, eval_occ_func_3_1(211));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 207, eval_occ_func_3_0(207));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 207, eval_occ_func_3_1(207));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 203, eval_occ_func_3_0(203));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 203, eval_occ_func_3_1(203));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 212, eval_occ_func_2_0(212));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 212, eval_occ_func_2_1(212));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 208, eval_occ_func_2_0(208));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 208, eval_occ_func_2_1(208));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 204, eval_occ_func_2_0(204));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 204, eval_occ_func_2_1(204));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 216, eval_occ_func_2_0(216));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 216, eval_occ_func_2_1(216));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 220, eval_occ_func_2_0(220));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 220, eval_occ_func_2_1(220));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 224, eval_occ_func_2_0(224));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 224, eval_occ_func_2_1(224));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 126, eval_occ_func_2_0(126));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 126, eval_occ_func_2_1(126));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 124, eval_occ_func_2_0(124));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 124, eval_occ_func_2_1(124));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 122, eval_occ_func_2_0(122));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 122, eval_occ_func_2_1(122));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 128, eval_occ_func_2_0(128));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 128, eval_occ_func_2_1(128));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 120, eval_occ_func_2_0(120));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 120, eval_occ_func_2_1(120));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 130, eval_occ_func_2_0(130));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 130, eval_occ_func_2_1(130));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 132, eval_occ_func_2_0(132));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 132, eval_occ_func_2_1(132));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 118, eval_occ_func_2_0(118));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 118, eval_occ_func_2_1(118));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 116, eval_occ_func_2_0(116));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 116, eval_occ_func_2_1(116));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 134, eval_occ_func_2_0(134));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 134, eval_occ_func_2_1(134));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 136, eval_occ_func_2_0(136));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 136, eval_occ_func_2_1(136));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 114, eval_occ_func_2_0(114));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 114, eval_occ_func_2_1(114));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 125, eval_occ_func_3_0(125));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 125, eval_occ_func_3_1(125));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 127, eval_occ_func_3_0(127));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 127, eval_occ_func_3_1(127));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 129, eval_occ_func_3_0(129));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 129, eval_occ_func_3_1(129));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 123, eval_occ_func_3_0(123));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 123, eval_occ_func_3_1(123));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 131, eval_occ_func_3_0(131));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 131, eval_occ_func_3_1(131));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 121, eval_occ_func_3_0(121));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 121, eval_occ_func_3_1(121));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 119, eval_occ_func_3_0(119));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 119, eval_occ_func_3_1(119));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 133, eval_occ_func_3_0(133));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 133, eval_occ_func_3_1(133));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 135, eval_occ_func_3_0(135));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 135, eval_occ_func_3_1(135));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 117, eval_occ_func_3_0(117));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 117, eval_occ_func_3_1(117));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 115, eval_occ_func_3_0(115));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 115, eval_occ_func_3_1(115));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 137, eval_occ_func_3_0(137));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 137, eval_occ_func_3_1(137));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 175, eval_occ_func_3_0(175));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 175, eval_occ_func_3_1(175));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 179, eval_occ_func_3_0(179));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 179, eval_occ_func_3_1(179));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 183, eval_occ_func_3_0(183));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 183, eval_occ_func_3_1(183));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 187, eval_occ_func_3_0(187));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 187, eval_occ_func_3_1(187));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 191, eval_occ_func_3_0(191));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 191, eval_occ_func_3_1(191));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 195, eval_occ_func_3_0(195));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 195, eval_occ_func_3_1(195));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 171, eval_occ_func_3_0(171));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 171, eval_occ_func_3_1(171));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 167, eval_occ_func_3_0(167));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 167, eval_occ_func_3_1(167));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 163, eval_occ_func_3_0(163));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 163, eval_occ_func_3_1(163));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 159, eval_occ_func_3_0(159));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 159, eval_occ_func_3_1(159));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 155, eval_occ_func_3_0(155));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 155, eval_occ_func_3_1(155));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 151, eval_occ_func_3_0(151));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 151, eval_occ_func_3_1(151));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 172, eval_occ_func_2_0(172));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 172, eval_occ_func_2_1(172));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 168, eval_occ_func_2_0(168));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 168, eval_occ_func_2_1(168));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 164, eval_occ_func_2_0(164));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 164, eval_occ_func_2_1(164));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 160, eval_occ_func_2_0(160));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 160, eval_occ_func_2_1(160));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 156, eval_occ_func_2_0(156));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 156, eval_occ_func_2_1(156));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 152, eval_occ_func_2_0(152));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 152, eval_occ_func_2_1(152));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 176, eval_occ_func_2_0(176));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 176, eval_occ_func_2_1(176));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 180, eval_occ_func_2_0(180));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 180, eval_occ_func_2_1(180));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 184, eval_occ_func_2_0(184));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 184, eval_occ_func_2_1(184));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 188, eval_occ_func_2_0(188));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 188, eval_occ_func_2_1(188));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 192, eval_occ_func_2_0(192));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 192, eval_occ_func_2_1(192));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 0, 196, eval_occ_func_2_0(196));
    param_pack_type::Val<Scalar>::set(m_params, m_occ_site_func_param_key, 1, 196, eval_occ_func_2_1(196));
  }
  } // switch
}

/// --- Point corr ---

// template<typename Scalar>
// Scalar {{ clexulator_name }}::eval_bfunc_{{ function_index }}_at_{{ neighbor_list_index }}() const {
//   // orbit_index: {{ orbit_index }}
//   // function_index: {{ function_index }}
//   return {{ factored_orbit_prefix }} * (
//     {{ factored_cluster_prefix_0 }}({{ factored_cluster_function_0 }})
//     + {{ factored_cluster_prefix_1 }}({{ factored_cluster_function_1 }})
//     ...
//     ) / {{ orbit_mult }};
// }

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_1_at_0() const {
  // orbit_index: 1
  // function_index: 1
  return (occ_func_2_1(0)) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_1_at_1() const {
  // orbit_index: 1
  // function_index: 1
  return (occ_func_3_1(1)) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_2_at_0() const {
  // orbit_index: 2
  // function_index: 2
  return (
    (occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_3_1(15)*occ_func_2_1(0))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_2_at_1() const {
  // orbit_index: 2
  // function_index: 2
  return (
    (occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_3_at_0() const {
  // orbit_index: 3
  // function_index: 3
  return (
    (occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_2_1(0))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_3_at_1() const {
  // orbit_index: 3
  // function_index: 3
  return (
    (occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_3_1(1))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_4_at_0() const {
  // orbit_index: 4
  // function_index: 4
  return (
    (occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_3_1(3)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_4_at_1() const {
  // orbit_index: 4
  // function_index: 4
  return (
    (occ_func_2_1(40)*occ_func_3_1(1))
     + (occ_func_2_1(6)*occ_func_3_1(1))
     + (occ_func_2_1(36)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_2_1(32)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_2_1(52)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_5_at_0() const {
  // orbit_index: 5
  // function_index: 5
  return (
    (occ_func_2_1(0)*occ_func_2_1(16))
     + (occ_func_2_1(14)*occ_func_2_1(0))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_5_at_1() const {
  // orbit_index: 5
  // function_index: 5
  return (
    (occ_func_3_1(1)*occ_func_3_1(17))
     + (occ_func_3_1(15)*occ_func_3_1(1))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_6_at_0() const {
  // orbit_index: 6
  // function_index: 6
  return (
    (occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_2_1(0))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_6_at_1() const {
  // orbit_index: 6
  // function_index: 6
  return (
    (occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_3_1(1))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_7_at_0() const {
  // orbit_index: 7
  // function_index: 7
  return (
    (occ_func_2_1(0)*occ_func_2_1(42))
     + (occ_func_2_1(40)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(38)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(46))
     + (occ_func_2_1(36)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_2_1(34)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(32))
     + (occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(30))
     + (occ_func_2_1(52)*occ_func_2_1(0))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_7_at_1() const {
  // orbit_index: 7
  // function_index: 7
  return (
    (occ_func_3_1(1)*occ_func_3_1(41))
     + (occ_func_3_1(43)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(39))
     + (occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(37))
     + (occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(35))
     + (occ_func_3_1(49)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_3_1(33)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53))
     + (occ_func_3_1(31)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_8_at_0() const {
  // orbit_index: 8
  // function_index: 8
  return (
    (occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_3_1(75)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_3_1(71)*occ_func_2_1(0))
     + (occ_func_3_1(19)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(67))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_8_at_1() const {
  // orbit_index: 8
  // function_index: 8
  return (
    (occ_func_2_1(76)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_2_1(72)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_3_1(1)*occ_func_2_1(68))
     + (occ_func_2_1(18)*occ_func_3_1(1))
     + (occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_2_1(88)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_9_at_0() const {
  // orbit_index: 9
  // function_index: 9
  return (
    (occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_2_1(58)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_2_1(56)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(54))
     + (occ_func_2_1(64)*occ_func_2_1(0))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_9_at_1() const {
  // orbit_index: 9
  // function_index: 9
  return (
    (occ_func_3_1(1)*occ_func_3_1(59))
     + (occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(57))
     + (occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_3_1(55)*occ_func_3_1(1))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_10_at_0() const {
  // orbit_index: 10
  // function_index: 10
  return (
    (occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(59)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(99))
     + (occ_func_3_1(57)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(95))
     + (occ_func_3_1(55)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(91))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_10_at_1() const {
  // orbit_index: 10
  // function_index: 10
  return (
    (occ_func_2_1(100)*occ_func_3_1(1))
     + (occ_func_2_1(58)*occ_func_3_1(1))
     + (occ_func_2_1(96)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_2_1(92)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_2_1(112)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_11_at_0() const {
  // orbit_index: 11
  // function_index: 11
  return (
    (occ_func_2_1(0)*occ_func_2_1(78))
     + (occ_func_2_1(76)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(82))
     + (occ_func_2_1(72)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(66))
     + (occ_func_2_1(88)*occ_func_2_1(0))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_11_at_1() const {
  // orbit_index: 11
  // function_index: 11
  return (
    (occ_func_3_1(1)*occ_func_3_1(75))
     + (occ_func_3_1(81)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(71))
     + (occ_func_3_1(85)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(87))
     + (occ_func_3_1(69)*occ_func_3_1(1))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_12_at_0() const {
  // orbit_index: 12
  // function_index: 12
  return (
    (occ_func_2_1(0)*occ_func_2_1(80))
     + (occ_func_2_1(74)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(84))
     + (occ_func_2_1(70)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(68))
     + (occ_func_2_1(86)*occ_func_2_1(0))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_12_at_1() const {
  // orbit_index: 12
  // function_index: 12
  return (
    (occ_func_3_1(1)*occ_func_3_1(77))
     + (occ_func_3_1(79)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(73))
     + (occ_func_3_1(83)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(89))
     + (occ_func_3_1(67)*occ_func_3_1(1))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_13_at_0() const {
  // orbit_index: 13
  // function_index: 13
  return (
    (occ_func_2_1(0)*occ_func_3_1(17))
     + (occ_func_3_1(199)*occ_func_2_1(0))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_13_at_1() const {
  // orbit_index: 13
  // function_index: 13
  return (
    (occ_func_2_1(14)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(200))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_14_at_0() const {
  // orbit_index: 14
  // function_index: 14
  return (
    (occ_func_2_1(0)*occ_func_2_1(102))
     + (occ_func_2_1(100)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(104))
     + (occ_func_2_1(98)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(106))
     + (occ_func_2_1(96)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(108))
     + (occ_func_2_1(94)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(92))
     + (occ_func_2_1(110)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(90))
     + (occ_func_2_1(112)*occ_func_2_1(0))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_14_at_1() const {
  // orbit_index: 14
  // function_index: 14
  return (
    (occ_func_3_1(1)*occ_func_3_1(101))
     + (occ_func_3_1(103)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(99))
     + (occ_func_3_1(105)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(97))
     + (occ_func_3_1(107)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(95))
     + (occ_func_3_1(109)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(111))
     + (occ_func_3_1(93)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(113))
     + (occ_func_3_1(91)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_15_at_0() const {
  // orbit_index: 15
  // function_index: 15
  return (
    (occ_func_2_1(0)*occ_func_3_1(215))
     + (occ_func_2_1(0)*occ_func_3_1(45))
     + (occ_func_2_1(0)*occ_func_3_1(219))
     + (occ_func_3_1(49)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(223))
     + (occ_func_3_1(53)*occ_func_2_1(0))
     + (occ_func_3_1(41)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(211))
     + (occ_func_3_1(37)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(207))
     + (occ_func_3_1(33)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(203))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_15_at_1() const {
  // orbit_index: 15
  // function_index: 15
  return (
    (occ_func_2_1(212)*occ_func_3_1(1))
     + (occ_func_2_1(38)*occ_func_3_1(1))
     + (occ_func_2_1(208)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(34))
     + (occ_func_2_1(204)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(30))
     + (occ_func_3_1(1)*occ_func_2_1(42))
     + (occ_func_2_1(216)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(46))
     + (occ_func_2_1(220)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(50))
     + (occ_func_2_1(224)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_16_at_0() const {
  // orbit_index: 16
  // function_index: 16
  return (
    (occ_func_2_1(0)*occ_func_2_1(126))
     + (occ_func_2_1(124)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(122))
     + (occ_func_2_1(128)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(120))
     + (occ_func_2_1(130)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(132))
     + (occ_func_2_1(118)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(116))
     + (occ_func_2_1(134)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(136))
     + (occ_func_2_1(114)*occ_func_2_1(0))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_16_at_1() const {
  // orbit_index: 16
  // function_index: 16
  return (
    (occ_func_3_1(1)*occ_func_3_1(125))
     + (occ_func_3_1(127)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(129))
     + (occ_func_3_1(123)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(131))
     + (occ_func_3_1(121)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(119))
     + (occ_func_3_1(133)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(135))
     + (occ_func_3_1(117)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(115))
     + (occ_func_3_1(137)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_17_at_0() const {
  // orbit_index: 17
  // function_index: 17
  return (
    (occ_func_2_1(0)*occ_func_3_1(175))
     + (occ_func_3_1(127)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(179))
     + (occ_func_3_1(129)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(183))
     + (occ_func_3_1(131)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(187))
     + (occ_func_3_1(133)*occ_func_2_1(0))
     + (occ_func_3_1(191)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(135))
     + (occ_func_3_1(195)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(137))
     + (occ_func_2_1(0)*occ_func_3_1(125))
     + (occ_func_3_1(171)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(123))
     + (occ_func_3_1(167)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(121))
     + (occ_func_3_1(163)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(119))
     + (occ_func_3_1(159)*occ_func_2_1(0))
     + (occ_func_3_1(117)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(155))
     + (occ_func_3_1(115)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(151))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_17_at_1() const {
  // orbit_index: 17
  // function_index: 17
  return (
    (occ_func_2_1(172)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(124))
     + (occ_func_2_1(168)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(122))
     + (occ_func_2_1(164)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(120))
     + (occ_func_2_1(160)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(118))
     + (occ_func_3_1(1)*occ_func_2_1(156))
     + (occ_func_2_1(116)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(152))
     + (occ_func_2_1(114)*occ_func_3_1(1))
     + (occ_func_2_1(126)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(176))
     + (occ_func_2_1(128)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(180))
     + (occ_func_2_1(130)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(184))
     + (occ_func_2_1(132)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(188))
     + (occ_func_3_1(1)*occ_func_2_1(134))
     + (occ_func_2_1(192)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(136))
     + (occ_func_2_1(196)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_18_at_0() const {
  // orbit_index: 18
  // function_index: 18
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(2)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(10)*occ_func_2_1(12)*occ_func_2_1(0))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_18_at_1() const {
  // orbit_index: 18
  // function_index: 18
  return (
    (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(13)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(9))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(7)*occ_func_3_1(3)*occ_func_3_1(1))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_19_at_0() const {
  // orbit_index: 19
  // function_index: 19
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(5))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(3))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(31))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_19_at_1() const {
  // orbit_index: 19
  // function_index: 19
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(4)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(2)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(40))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(36))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(32))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_20_at_0() const {
  // orbit_index: 20
  // function_index: 20
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(51))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(35)*occ_func_2_1(2)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_3_1(51)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(7)*occ_func_2_1(2)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(35))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(39))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_3_1(39)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_3_1(5)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(5))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(7))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_20_at_1() const {
  // orbit_index: 20
  // function_index: 20
  return (
    (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_2_1(32)*occ_func_3_1(5)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_2_1(32))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(8))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(2)*occ_func_3_1(7)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(48)*occ_func_3_1(7)*occ_func_3_1(1))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(3))
     + (occ_func_2_1(44)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(10))
     + (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_3_1(3))
     + (occ_func_2_1(10)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_2_1(8)*occ_func_3_1(5)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_21_at_0() const {
  // orbit_index: 21
  // function_index: 21
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(13))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(5))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_3_1(13)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(39))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(51))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(7))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_3_1(3))
     + (occ_func_3_1(7)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_3_1(5)*occ_func_3_1(3)*occ_func_2_1(0))
     + (occ_func_3_1(39)*occ_func_3_1(31)*occ_func_2_1(0))
     + (occ_func_3_1(35)*occ_func_3_1(43)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(35))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_21_at_1() const {
  // orbit_index: 21
  // function_index: 21
  return (
    (occ_func_2_1(2)*occ_func_2_1(4)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_2_1(6)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_2_1(2))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_2_1(32))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(36))
     + (occ_func_2_1(44)*occ_func_2_1(36)*occ_func_3_1(1))
     + (occ_func_2_1(32)*occ_func_2_1(40)*occ_func_3_1(1))
     + (occ_func_2_1(8)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(8))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_2_1(10))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_2_1(44))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(48))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_2_1(40))
     + (occ_func_2_1(48)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_22_at_0() const {
  // orbit_index: 22
  // function_index: 22
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_22_at_1() const {
  // orbit_index: 22
  // function_index: 22
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(17))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_23_at_0() const {
  // orbit_index: 23
  // function_index: 23
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_3_1(43)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_3_1(35)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_3_1(31)*occ_func_3_1(3)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(7))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(5))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(3))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_23_at_1() const {
  // orbit_index: 23
  // function_index: 23
  return (
    (occ_func_2_1(6)*occ_func_2_1(40)*occ_func_3_1(1))
     + (occ_func_2_1(4)*occ_func_2_1(36)*occ_func_3_1(1))
     + (occ_func_2_1(2)*occ_func_2_1(32)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(40))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(36))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(32))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(8))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(48))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(52))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_24_at_0() const {
  // orbit_index: 24
  // function_index: 24
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(4)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_2_1(12))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(2)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_2_1(6))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(8)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_2_1(4))
     + (occ_func_2_1(2)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_2_1(10)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_2_1(8))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(6)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(2))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_2_1(12)*occ_func_2_1(28)*occ_func_2_1(0))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_24_at_1() const {
  // orbit_index: 24
  // function_index: 24
  return (
    (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_3_1(5)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(7))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_3_1(9)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_3_1(5))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_3_1(11)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(13))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(3)*occ_func_3_1(19)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_3_1(3))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_3_1(13)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_3_1(11))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(5)*occ_func_3_1(19)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_25_at_0() const {
  // orbit_index: 25
  // function_index: 25
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(47))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_3_1(31)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_3_1(43)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_3_1(11)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_3_1(47)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(3)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_3_1(39)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_3_1(35)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_3_1(51)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_3_1(13)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(5)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_3_1(5)*occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_3_1(7)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(7))
     + (occ_func_3_1(39)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_3_1(35)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(39)*occ_func_3_1(51))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(5))
     + (occ_func_2_1(0)*occ_func_3_1(35)*occ_func_3_1(39))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(35))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(3))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(31))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_25_at_1() const {
  // orbit_index: 25
  // function_index: 25
  return (
    (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_2_1(36)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_2_1(52))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_2_1(6)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_2_1(40))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(4))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(36))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(32)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(32))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(8))
     + (occ_func_2_1(2)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_2_1(8)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(48))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(32)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_2_1(10)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_2_1(44)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_2_1(2)*occ_func_3_1(19)*occ_func_3_1(1))
     + (occ_func_2_1(32)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_2_1(48)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_2_1(4)*occ_func_3_1(19)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(40)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_2_1(52)*occ_func_3_1(29)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_26_at_0() const {
  // orbit_index: 26
  // function_index: 26
  return (
    (occ_func_2_1(0)*occ_func_2_1(24)*occ_func_2_1(28))
     + (occ_func_2_1(22)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(18)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(28))
     + (occ_func_2_1(20)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(18)*occ_func_2_1(22)*occ_func_2_1(0))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_26_at_1() const {
  // orbit_index: 26
  // function_index: 26
  return (
    (occ_func_3_1(1)*occ_func_3_1(25)*occ_func_3_1(29))
     + (occ_func_3_1(23)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_3_1(21)*occ_func_3_1(25)*occ_func_3_1(1))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_27_at_0() const {
  // orbit_index: 27
  // function_index: 27
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(43))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_3_1(39)*occ_func_2_1(38)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(47))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_3_1(35)*occ_func_2_1(34)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(52))
     + (occ_func_3_1(31)*occ_func_2_1(30)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(40))
     + (occ_func_3_1(43)*occ_func_2_1(42)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(38))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(36))
     + (occ_func_3_1(47)*occ_func_2_1(46)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(34))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(32))
     + (occ_func_3_1(51)*occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(30))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(42))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_3_1(9))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(46))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(50))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_3_1(7))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(39))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_3_1(5))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(35))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_3_1(3))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(31))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_27_at_1() const {
  // orbit_index: 27
  // function_index: 27
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(43))
     + (occ_func_2_1(40)*occ_func_3_1(41)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(47))
     + (occ_func_2_1(36)*occ_func_3_1(37)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_2_1(32)*occ_func_3_1(33)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(40))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(36))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_2_1(4))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_2_1(32))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_3_1(45))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_2_1(10))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_3_1(49))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_2_1(12))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_3_1(53))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_3_1(41))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(39))
     + (occ_func_2_1(44)*occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_3_1(37))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(35))
     + (occ_func_2_1(48)*occ_func_3_1(49)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_3_1(33))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_3_1(31))
     + (occ_func_2_1(52)*occ_func_3_1(53)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_28_at_0() const {
  // orbit_index: 28
  // function_index: 28
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(51))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(43))
     + (occ_func_2_1(32)*occ_func_2_1(0)*occ_func_3_1(5))
     + (occ_func_3_1(43)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_3_1(35))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_2_1(38)*occ_func_3_1(47))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_2_1(36)*occ_func_3_1(9))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_3_1(7))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_3_1(13)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(11))
     + (occ_func_2_1(30)*occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(13))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_3_1(35)*occ_func_3_1(3)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(7)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(34)*occ_func_3_1(31))
     + (occ_func_2_1(48)*occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_3_1(39))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_3_1(3))
     + (occ_func_3_1(39)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_3_1(31)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_3_1(3)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_3_1(5)*occ_func_3_1(43)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_3_1(5))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_3_1(31))
     + (occ_func_2_1(0)*occ_func_2_1(40)*occ_func_3_1(3))
     + (occ_func_2_1(42)*occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_3_1(9)*occ_func_3_1(35)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_3_1(31)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_28_at_1() const {
  // orbit_index: 28
  // function_index: 28
  return (
    (occ_func_2_1(32)*occ_func_2_1(4)*occ_func_3_1(1))
     + (occ_func_2_1(40)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(49)*occ_func_2_1(40))
     + (occ_func_3_1(35)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_2_1(32))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_2_1(48)*occ_func_2_1(6)*occ_func_3_1(1))
     + (occ_func_2_1(36)*occ_func_2_1(2)*occ_func_3_1(1))
     + (occ_func_2_1(6)*occ_func_2_1(32)*occ_func_3_1(1))
     + (occ_func_2_1(8)*occ_func_2_1(36)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_2_1(2))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_2_1(36))
     + (occ_func_3_1(1)*occ_func_3_1(43)*occ_func_2_1(4))
     + (occ_func_3_1(41)*occ_func_3_1(1)*occ_func_2_1(32))
     + (occ_func_2_1(4)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_2_1(2)*occ_func_2_1(40)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_2_1(48))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_3_1(33)*occ_func_2_1(36))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_2_1(52)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_2_1(44)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(44))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(52))
     + (occ_func_3_1(39)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(12))
     + (occ_func_3_1(37)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(10))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_2_1(40))
     + (occ_func_2_1(10)*occ_func_2_1(52)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(31)*occ_func_2_1(6))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_2_1(8))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(52))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_29_at_0() const {
  // orbit_index: 29
  // function_index: 29
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_2_1(8))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_2_1(42))
     + (occ_func_2_1(6)*occ_func_2_1(40)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(6)*occ_func_2_1(38)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_2_1(10))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_2_1(46))
     + (occ_func_2_1(4)*occ_func_2_1(36)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_2_1(10))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_2_1(4)*occ_func_2_1(34)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_2_1(12))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_2_1(50))
     + (occ_func_2_1(2)*occ_func_2_1(32)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_2_1(12))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_2_1(52))
     + (occ_func_2_1(2)*occ_func_2_1(30)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_2_1(6))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_2_1(40))
     + (occ_func_2_1(8)*occ_func_2_1(42)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_2_1(6))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_2_1(38))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_2_1(36))
     + (occ_func_2_1(10)*occ_func_2_1(46)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_2_1(4))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_2_1(34))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_2_1(2))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_2_1(32))
     + (occ_func_2_1(12)*occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_2_1(2))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_2_1(30))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_29_at_1() const {
  // orbit_index: 29
  // function_index: 29
  return (
    (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_3_1(9))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_3_1(43))
     + (occ_func_3_1(7)*occ_func_3_1(41)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_3_1(9))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_3_1(45))
     + (occ_func_3_1(7)*occ_func_3_1(39)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_3_1(47))
     + (occ_func_3_1(5)*occ_func_3_1(37)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_3_1(11))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_3_1(49))
     + (occ_func_3_1(5)*occ_func_3_1(35)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_3_1(13))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_3_1(3)*occ_func_3_1(33)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_3_1(13))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_3_1(53))
     + (occ_func_3_1(3)*occ_func_3_1(31)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_3_1(7))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_3_1(41))
     + (occ_func_3_1(9)*occ_func_3_1(43)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_3_1(39))
     + (occ_func_3_1(9)*occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_3_1(5))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_3_1(37))
     + (occ_func_3_1(11)*occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_3_1(5))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_3_1(35))
     + (occ_func_3_1(11)*occ_func_3_1(49)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_3_1(3))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_3_1(33))
     + (occ_func_3_1(13)*occ_func_3_1(51)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_3_1(3))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_3_1(31))
     + (occ_func_3_1(13)*occ_func_3_1(53)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_30_at_0() const {
  // orbit_index: 30
  // function_index: 30
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_2_1(50))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(32)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_2_1(34))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(48)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_2_1(38))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(44)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_2_1(36))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(46)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_2_1(40))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(42)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(30)*occ_func_2_1(6)*occ_func_2_1(0))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_30_at_1() const {
  // orbit_index: 30
  // function_index: 30
  return (
    (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_3_1(49))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(35)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_3_1(33))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(51)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_3_1(45))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(39)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_3_1(47))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(37)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_3_1(31))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(53)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_3_1(43))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(41)*occ_func_3_1(3)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_31_at_0() const {
  // orbit_index: 31
  // function_index: 31
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_2_1(12))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_2_1(2)*occ_func_2_1(34)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_2_1(6))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_2_1(32))
     + (occ_func_2_1(8)*occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_2_1(4))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(10)*occ_func_2_1(38)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_2_1(6))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_2_1(46))
     + (occ_func_2_1(8)*occ_func_2_1(36)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_2_1(4))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_2_1(30))
     + (occ_func_2_1(10)*occ_func_2_1(52)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_2_1(12))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_2_1(42))
     + (occ_func_2_1(2)*occ_func_2_1(40)*occ_func_2_1(0))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_31_at_1() const {
  // orbit_index: 31
  // function_index: 31
  return (
    (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_3_1(11))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_3_1(5)*occ_func_3_1(33)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_3_1(9))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_3_1(35))
     + (occ_func_3_1(7)*occ_func_3_1(49)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_3_1(3))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_3_1(39))
     + (occ_func_3_1(13)*occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_3_1(3))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_3_1(37))
     + (occ_func_3_1(13)*occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_3_1(11))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_3_1(41))
     + (occ_func_3_1(5)*occ_func_3_1(43)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_3_1(9))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_3_1(53))
     + (occ_func_3_1(7)*occ_func_3_1(31)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_32_at_0() const {
  // orbit_index: 32
  // function_index: 32
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_2_1(46))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(36)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_2_1(40))
     + (occ_func_2_1(30)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_2_1(42)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_2_1(44))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_2_1(38)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(38)*occ_func_2_1(50))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(32)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(40)*occ_func_2_1(36))
     + (occ_func_2_1(42)*occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_2_1(46)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(34)*occ_func_2_1(38))
     + (occ_func_2_1(48)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(44)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(36)*occ_func_2_1(52))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(30)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_2_1(34))
     + (occ_func_2_1(32)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_2_1(48)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_2_1(32))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_2_1(50)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_2_1(48))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(34)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_2_1(42))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(40)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_2_1(30))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_2_1(52)*occ_func_2_1(28)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_32_at_1() const {
  // orbit_index: 32
  // function_index: 32
  return (
    (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_3_1(43))
     + (occ_func_3_1(37)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_3_1(41)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_3_1(53))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(31)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_3_1(49))
     + (occ_func_3_1(39)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_3_1(35)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_3_1(39))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_3_1(45)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_3_1(41))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_3_1(43)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_3_1(35))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_3_1(49)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_3_1(37))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_3_1(47)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_3_1(51))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(33)*occ_func_3_1(19)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(33)*occ_func_3_1(45))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(39)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(49)*occ_func_3_1(33))
     + (occ_func_3_1(35)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_3_1(51)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(43)*occ_func_3_1(31))
     + (occ_func_3_1(41)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_3_1(53)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(31)*occ_func_3_1(47))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(37)*occ_func_3_1(19)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_33_at_0() const {
  // orbit_index: 33
  // function_index: 33
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(75)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(5)*occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_3_1(39)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_2_1(0)*occ_func_3_1(39)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(71)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_2_1(0)*occ_func_3_1(35)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(75)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(19)*occ_func_2_1(0))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_3_1(67))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(19)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_3_1(35)*occ_func_2_1(0)*occ_func_3_1(67))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(71)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_33_at_1() const {
  // orbit_index: 33
  // function_index: 33
  return (
    (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(72)*occ_func_3_1(1))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_2_1(2)*occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(76)*occ_func_3_1(1))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_2_1(32)*occ_func_3_1(1)*occ_func_2_1(68))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(18)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(32)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(72)*occ_func_3_1(1))
     + (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_2_1(68))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(18)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(76)*occ_func_3_1(1))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(88)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(88)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(84))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_34_at_0() const {
  // orbit_index: 34
  // function_index: 34
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(47))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_3_1(51))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(9))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_3_1(9)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_3_1(39))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_3_1(11)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_3_1(13))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(51)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(43))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(11))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(13)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(7))
     + (occ_func_2_1(2)*occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_3_1(35)*occ_func_3_1(75)*occ_func_2_1(0))
     + (occ_func_3_1(31)*occ_func_3_1(71)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_3_1(5))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_3_1(43)*occ_func_3_1(75)*occ_func_2_1(0))
     + (occ_func_3_1(3)*occ_func_3_1(19)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(35))
     + (occ_func_2_1(2)*occ_func_2_1(0)*occ_func_3_1(67))
     + (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(3))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_3_1(39)*occ_func_3_1(71)*occ_func_2_1(0))
     + (occ_func_3_1(5)*occ_func_3_1(19)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(31))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_3_1(67))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_34_at_1() const {
  // orbit_index: 34
  // function_index: 34
  return (
    (occ_func_2_1(36)*occ_func_2_1(76)*occ_func_3_1(1))
     + (occ_func_2_1(32)*occ_func_2_1(72)*occ_func_3_1(1))
     + (occ_func_2_1(6)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(6))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_2_1(44)*occ_func_2_1(76)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_2_1(4))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(36))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_2_1(68))
     + (occ_func_2_1(2)*occ_func_2_1(18)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_2_1(32))
     + (occ_func_3_1(5)*occ_func_3_1(1)*occ_func_2_1(68))
     + (occ_func_2_1(40)*occ_func_2_1(72)*occ_func_3_1(1))
     + (occ_func_2_1(4)*occ_func_2_1(18)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_2_1(2))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_2_1(8))
     + (occ_func_3_1(5)*occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_2_1(8)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_2_1(48))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_2_1(52))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_2_1(10)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_2_1(40))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_2_1(12))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_2_1(48)*occ_func_2_1(88)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_2_1(44))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_2_1(10))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_2_1(52)*occ_func_2_1(88)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_35_at_0() const {
  // orbit_index: 35
  // function_index: 35
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(23)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(21)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(27))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(79)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(83)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(29)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(87))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(67)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(75))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(71))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(19))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_35_at_1() const {
  // orbit_index: 35
  // function_index: 35
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(24))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(22)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(26))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(20)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(76))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(72))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(18))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(68)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(88))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(80)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(84)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(28)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_36_at_0() const {
  // orbit_index: 36
  // function_index: 36
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(19)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(75)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(71)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(67))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_36_at_1() const {
  // orbit_index: 36
  // function_index: 36
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(18)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(68))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(76)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(72)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(88)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_37_at_0() const {
  // orbit_index: 37
  // function_index: 37
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(83))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_2_1(36)*occ_func_3_1(23))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_3_1(27)*occ_func_3_1(43)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(38)*occ_func_3_1(79))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_3_1(79))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_3_1(25)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(29))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(83))
     + (occ_func_2_1(32)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_3_1(27)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(29))
     + (occ_func_2_1(30)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_3_1(75)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_3_1(25)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_3_1(21))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_3_1(71)*occ_func_3_1(3)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_3_1(23))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_3_1(75)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_3_1(19)*occ_func_3_1(31)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_3_1(67))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_3_1(5))
     + (occ_func_3_1(19)*occ_func_3_1(35)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(34)*occ_func_3_1(67))
     + (occ_func_2_1(48)*occ_func_2_1(0)*occ_func_3_1(3))
     + (occ_func_2_1(0)*occ_func_2_1(40)*occ_func_3_1(21))
     + (occ_func_2_1(42)*occ_func_2_1(0)*occ_func_3_1(31))
     + (occ_func_3_1(71)*occ_func_3_1(7)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_37_at_1() const {
  // orbit_index: 37
  // function_index: 37
  return (
    (occ_func_2_1(72)*occ_func_2_1(2)*occ_func_3_1(1))
     + (occ_func_2_1(24)*occ_func_2_1(40)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(31)*occ_func_2_1(20))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(40))
     + (occ_func_2_1(76)*occ_func_2_1(4)*occ_func_3_1(1))
     + (occ_func_2_1(76)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(43)*occ_func_2_1(22))
     + (occ_func_3_1(41)*occ_func_3_1(1)*occ_func_2_1(36))
     + (occ_func_3_1(1)*occ_func_3_1(33)*occ_func_2_1(68))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_2_1(18)*occ_func_2_1(32)*occ_func_3_1(1))
     + (occ_func_2_1(72)*occ_func_2_1(6)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_2_1(20))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_2_1(32))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_2_1(68))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_2_1(18)*occ_func_2_1(36)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_2_1(80))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_2_1(22))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_2_1(26)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(84))
     + (occ_func_3_1(39)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_2_1(24)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(49)*occ_func_2_1(80))
     + (occ_func_3_1(35)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(28))
     + (occ_func_3_1(37)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_2_1(88)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(28))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_2_1(88)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_2_1(26)*occ_func_2_1(52)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(84))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_2_1(8))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_38_at_0() const {
  // orbit_index: 38
  // function_index: 38
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(47))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(9))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_3_1(75))
     + (occ_func_3_1(9)*occ_func_3_1(83)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(38)*occ_func_3_1(51))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(27))
     + (occ_func_3_1(11)*occ_func_3_1(79)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(34)*occ_func_3_1(39))
     + (occ_func_2_1(48)*occ_func_2_1(0)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_2_1(36)*occ_func_3_1(13))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(87))
     + (occ_func_3_1(47)*occ_func_3_1(29)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_3_1(11))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(87))
     + (occ_func_3_1(51)*occ_func_3_1(29)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_3_1(83)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_3_1(43))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_3_1(27))
     + (occ_func_3_1(31)*occ_func_3_1(21)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_3_1(79)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(7))
     + (occ_func_2_1(30)*occ_func_2_1(0)*occ_func_3_1(71))
     + (occ_func_3_1(35)*occ_func_3_1(23)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_3_1(23)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(40)*occ_func_3_1(5))
     + (occ_func_2_1(42)*occ_func_2_1(0)*occ_func_3_1(75))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(35))
     + (occ_func_2_1(32)*occ_func_2_1(0)*occ_func_3_1(19))
     + (occ_func_3_1(3)*occ_func_3_1(67)*occ_func_2_1(0))
     + (occ_func_3_1(39)*occ_func_3_1(21)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_3_1(3))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_3_1(71))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_3_1(31))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_3_1(19))
     + (occ_func_3_1(5)*occ_func_3_1(67)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_38_at_1() const {
  // orbit_index: 38
  // function_index: 38
  return (
    (occ_func_2_1(36)*occ_func_2_1(22)*occ_func_3_1(1))
     + (occ_func_2_1(6)*occ_func_2_1(80)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(6))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_2_1(72))
     + (occ_func_2_1(32)*occ_func_2_1(20)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_2_1(4))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_2_1(76))
     + (occ_func_2_1(44)*occ_func_2_1(22)*occ_func_3_1(1))
     + (occ_func_2_1(2)*occ_func_2_1(68)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(36))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_2_1(18))
     + (occ_func_2_1(4)*occ_func_2_1(68)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(49)*occ_func_2_1(32))
     + (occ_func_3_1(35)*occ_func_3_1(1)*occ_func_2_1(18))
     + (occ_func_3_1(1)*occ_func_3_1(43)*occ_func_2_1(2))
     + (occ_func_3_1(41)*occ_func_3_1(1)*occ_func_2_1(72))
     + (occ_func_2_1(40)*occ_func_2_1(20)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_2_1(52))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(26))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(8))
     + (occ_func_3_1(37)*occ_func_3_1(1)*occ_func_2_1(76))
     + (occ_func_2_1(8)*occ_func_2_1(84)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(48))
     + (occ_func_3_1(39)*occ_func_3_1(1)*occ_func_2_1(24))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_2_1(40))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_2_1(24))
     + (occ_func_2_1(10)*occ_func_2_1(80)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_2_1(28)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_2_1(12))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(88))
     + (occ_func_3_1(1)*occ_func_3_1(33)*occ_func_2_1(44))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_2_1(26))
     + (occ_func_2_1(12)*occ_func_2_1(84)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_2_1(28)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(31)*occ_func_2_1(10))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(88))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_39_at_0() const {
  // orbit_index: 39
  // function_index: 39
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(25))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(27))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_3_1(87))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(79)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_3_1(83)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(23)*occ_func_3_1(75)*occ_func_2_1(0))
     + (occ_func_3_1(21)*occ_func_3_1(71)*occ_func_2_1(0))
     + (occ_func_3_1(67)*occ_func_3_1(19)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_3_1(75))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_3_1(71))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(19))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(67))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_39_at_1() const {
  // orbit_index: 39
  // function_index: 39
  return (
    (occ_func_2_1(22)*occ_func_2_1(76)*occ_func_3_1(1))
     + (occ_func_2_1(20)*occ_func_2_1(72)*occ_func_3_1(1))
     + (occ_func_2_1(68)*occ_func_2_1(18)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(76))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(72))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(18))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(68))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(24))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(26))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(88))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_2_1(80)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_2_1(84)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(88)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_40_at_0() const {
  // orbit_index: 40
  // function_index: 40
  return (
    (occ_func_2_1(0)*occ_func_3_1(79)*occ_func_3_1(87))
     + (occ_func_3_1(71)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_3_1(79)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_3_1(83)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_3_1(27)*occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_3_1(29)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_3_1(25)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(21)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(29)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_3_1(83)*occ_func_3_1(87))
     + (occ_func_3_1(75)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_3_1(83)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_3_1(79)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_3_1(25)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_3_1(29)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(27)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(23)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(29)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_3_1(23)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(23)*occ_func_3_1(27))
     + (occ_func_2_1(0)*occ_func_3_1(21)*occ_func_3_1(19))
     + (occ_func_2_1(0)*occ_func_3_1(67)*occ_func_3_1(71))
     + (occ_func_2_1(0)*occ_func_3_1(83)*occ_func_3_1(75))
     + (occ_func_3_1(75)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_3_1(67)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_3_1(19)*occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_3_1(21)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(21)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_3_1(23)*occ_func_3_1(19))
     + (occ_func_2_1(0)*occ_func_3_1(67)*occ_func_3_1(75))
     + (occ_func_2_1(0)*occ_func_3_1(79)*occ_func_3_1(71))
     + (occ_func_3_1(71)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_3_1(67)*occ_func_2_1(22)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_40_at_1() const {
  // orbit_index: 40
  // function_index: 40
  return (
    (occ_func_2_1(76)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(68)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(84)*occ_func_2_1(76))
     + (occ_func_3_1(1)*occ_func_2_1(68)*occ_func_2_1(72))
     + (occ_func_3_1(1)*occ_func_2_1(20)*occ_func_2_1(18))
     + (occ_func_3_1(1)*occ_func_2_1(22)*occ_func_2_1(26))
     + (occ_func_2_1(18)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_2_1(22)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_2_1(72)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_2_1(68)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(80)*occ_func_2_1(72))
     + (occ_func_3_1(1)*occ_func_2_1(68)*occ_func_2_1(76))
     + (occ_func_3_1(1)*occ_func_2_1(22)*occ_func_2_1(18))
     + (occ_func_3_1(1)*occ_func_2_1(20)*occ_func_2_1(24))
     + (occ_func_2_1(18)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_2_1(20)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(28)*occ_func_2_1(24))
     + (occ_func_2_1(24)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_2_1(20)*occ_func_3_1(19)*occ_func_3_1(1))
     + (occ_func_2_1(26)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_2_1(28)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_2_1(84)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_2_1(72)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_2_1(80)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(80)*occ_func_2_1(88))
     + (occ_func_3_1(1)*occ_func_2_1(28)*occ_func_2_1(26))
     + (occ_func_2_1(26)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_2_1(22)*occ_func_3_1(19)*occ_func_3_1(1))
     + (occ_func_2_1(24)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_2_1(28)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(80)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_2_1(76)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_2_1(84)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(84)*occ_func_2_1(88))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_41_at_0() const {
  // orbit_index: 41
  // function_index: 41
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(60))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(58)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(62))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(56)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_2_1(54))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(64)*occ_func_2_1(12)*occ_func_2_1(0))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_41_at_1() const {
  // orbit_index: 41
  // function_index: 41
  return (
    (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_3_1(59))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(61)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(57))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(63)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(65))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(55)*occ_func_3_1(3)*occ_func_3_1(1))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_42_at_0() const {
  // orbit_index: 42
  // function_index: 42
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(60))
     + (occ_func_2_1(58)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_2_1(60))
     + (occ_func_2_1(58)*occ_func_3_1(7)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_2_1(62))
     + (occ_func_2_1(56)*occ_func_3_1(35)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_2_1(62))
     + (occ_func_2_1(56)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_2_1(54))
     + (occ_func_2_1(64)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_2_1(54))
     + (occ_func_2_1(64)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(5))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_3_1(51))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_42_at_1() const {
  // orbit_index: 42
  // function_index: 42
  return (
    (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(32))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(59))
     + (occ_func_3_1(61)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_3_1(59))
     + (occ_func_3_1(61)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(57))
     + (occ_func_3_1(63)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_3_1(57))
     + (occ_func_3_1(63)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(65))
     + (occ_func_3_1(55)*occ_func_2_1(2)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_3_1(65))
     + (occ_func_3_1(55)*occ_func_2_1(32)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_43_at_0() const {
  // orbit_index: 43
  // function_index: 43
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(28))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_2_1(18)*occ_func_2_1(56)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_2_1(28))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_2_1(18)*occ_func_2_1(54)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_2_1(22))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_2_1(24)*occ_func_2_1(58)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_2_1(20))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_2_1(58))
     + (occ_func_2_1(26)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_2_1(24))
     + (occ_func_2_1(2)*occ_func_2_1(0)*occ_func_2_1(58))
     + (occ_func_2_1(22)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_2_1(22))
     + (occ_func_2_1(2)*occ_func_2_1(0)*occ_func_2_1(56))
     + (occ_func_2_1(24)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(26))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_2_1(20)*occ_func_2_1(58)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_2_1(26))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_2_1(20)*occ_func_2_1(54)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_2_1(24))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_2_1(22)*occ_func_2_1(56)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(20))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_2_1(54))
     + (occ_func_2_1(26)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_2_1(18))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_2_1(56))
     + (occ_func_2_1(28)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(18))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_2_1(54))
     + (occ_func_2_1(28)*occ_func_2_1(64)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_43_at_1() const {
  // orbit_index: 43
  // function_index: 43
  return (
    (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_3_1(29))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_3_1(19)*occ_func_3_1(57)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_3_1(29))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_3_1(19)*occ_func_3_1(55)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_3_1(23))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_3_1(25)*occ_func_3_1(59)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(21))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(59))
     + (occ_func_3_1(27)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(25))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_3_1(59))
     + (occ_func_3_1(23)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(23))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_3_1(57))
     + (occ_func_3_1(25)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_3_1(27))
     + (occ_func_3_1(5)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_3_1(21)*occ_func_3_1(59)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(27))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_3_1(21)*occ_func_3_1(55)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_3_1(25))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_3_1(23)*occ_func_3_1(57)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_3_1(21))
     + (occ_func_3_1(5)*occ_func_3_1(1)*occ_func_3_1(55))
     + (occ_func_3_1(27)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_3_1(19))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_3_1(57))
     + (occ_func_3_1(29)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_3_1(19))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_3_1(55))
     + (occ_func_3_1(29)*occ_func_3_1(65)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_44_at_0() const {
  // orbit_index: 44
  // function_index: 44
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_2_1(60))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(58)*occ_func_2_1(38)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_2_1(60))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_2_1(42))
     + (occ_func_2_1(58)*occ_func_2_1(40)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_2_1(62))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_2_1(56)*occ_func_2_1(34)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_2_1(62))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_2_1(46))
     + (occ_func_2_1(56)*occ_func_2_1(36)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_2_1(54))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_2_1(32))
     + (occ_func_2_1(64)*occ_func_2_1(50)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_2_1(54))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_2_1(30))
     + (occ_func_2_1(64)*occ_func_2_1(52)*occ_func_2_1(0))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_44_at_1() const {
  // orbit_index: 44
  // function_index: 44
  return (
    (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_3_1(59))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_3_1(41))
     + (occ_func_3_1(61)*occ_func_3_1(43)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_3_1(59))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_3_1(39))
     + (occ_func_3_1(61)*occ_func_3_1(45)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_3_1(57))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_3_1(37))
     + (occ_func_3_1(63)*occ_func_3_1(47)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_3_1(57))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_3_1(35))
     + (occ_func_3_1(63)*occ_func_3_1(49)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_3_1(65))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_3_1(53))
     + (occ_func_3_1(55)*occ_func_3_1(31)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_3_1(65))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_3_1(55)*occ_func_3_1(33)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_45_at_0() const {
  // orbit_index: 45
  // function_index: 45
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(87))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(67)*occ_func_2_1(54)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_3_1(79)*occ_func_2_1(58)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(58))
     + (occ_func_3_1(83)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_2_1(56))
     + (occ_func_3_1(79)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(27))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(21)*occ_func_2_1(54)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_3_1(23)*occ_func_2_1(56)*occ_func_2_1(0))
     + (occ_func_3_1(35)*occ_func_2_1(0)*occ_func_2_1(54))
     + (occ_func_3_1(83)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(56))
     + (occ_func_3_1(29)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_2_1(0)*occ_func_2_1(54))
     + (occ_func_3_1(29)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(39)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_3_1(67)*occ_func_2_1(56)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(39)*occ_func_3_1(87))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(75))
     + (occ_func_2_1(0)*occ_func_3_1(35)*occ_func_3_1(71))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(58))
     + (occ_func_3_1(23)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(75))
     + (occ_func_3_1(5)*occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_3_1(21)*occ_func_2_1(58)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(27))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(71))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(19))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(19))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_45_at_1() const {
  // orbit_index: 45
  // function_index: 45
  return (
    (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_2_1(68)*occ_func_3_1(57)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_2_1(88))
     + (occ_func_3_1(1)*occ_func_2_1(32)*occ_func_2_1(76))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_2_1(72))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(76))
     + (occ_func_2_1(2)*occ_func_3_1(1)*occ_func_3_1(59))
     + (occ_func_2_1(22)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_2_1(20)*occ_func_3_1(59)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(26))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(24))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(72))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(18))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(18))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(88))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_2_1(68)*occ_func_3_1(55)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_2_1(80)*occ_func_3_1(59)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(59))
     + (occ_func_2_1(84)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(24))
     + (occ_func_2_1(32)*occ_func_3_1(1)*occ_func_3_1(57))
     + (occ_func_2_1(80)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(26))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_2_1(20)*occ_func_3_1(55)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_2_1(22)*occ_func_3_1(57)*occ_func_3_1(1))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(55))
     + (occ_func_2_1(84)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(57))
     + (occ_func_2_1(28)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_3_1(55))
     + (occ_func_2_1(28)*occ_func_3_1(65)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_46_at_0() const {
  // orbit_index: 46
  // function_index: 46
  return (
    (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(29))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(19)*occ_func_2_1(54)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_3_1(25)*occ_func_2_1(58)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(58))
     + (occ_func_3_1(27)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(79))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(56))
     + (occ_func_3_1(25)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(83))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(71)*occ_func_2_1(54)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_3_1(75)*occ_func_2_1(56)*occ_func_2_1(0))
     + (occ_func_3_1(5)*occ_func_2_1(0)*occ_func_2_1(54))
     + (occ_func_3_1(27)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(56))
     + (occ_func_3_1(87)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_3_1(39)*occ_func_2_1(0)*occ_func_2_1(54))
     + (occ_func_3_1(87)*occ_func_2_1(64)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_3_1(19)*occ_func_2_1(56)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(29))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(23))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(21))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(23))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_2_1(58))
     + (occ_func_3_1(75)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_3_1(35)*occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_3_1(71)*occ_func_2_1(58)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(35)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(79))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(21))
     + (occ_func_2_1(0)*occ_func_3_1(39)*occ_func_3_1(67))
     + (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(67))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_46_at_1() const {
  // orbit_index: 46
  // function_index: 46
  return (
    (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_2_1(18)*occ_func_3_1(57)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(22))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(20))
     + (occ_func_2_1(32)*occ_func_3_1(1)*occ_func_3_1(59))
     + (occ_func_2_1(76)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(22))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_2_1(72)*occ_func_3_1(59)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_2_1(32)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(20))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_2_1(68))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(68))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(28))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_2_1(18)*occ_func_3_1(55)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_2_1(24)*occ_func_3_1(59)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(59))
     + (occ_func_2_1(26)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_2_1(2)*occ_func_3_1(1)*occ_func_3_1(57))
     + (occ_func_2_1(24)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(84))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_2_1(72)*occ_func_3_1(55)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_2_1(76)*occ_func_3_1(57)*occ_func_3_1(1))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_3_1(55))
     + (occ_func_2_1(26)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(57))
     + (occ_func_2_1(88)*occ_func_3_1(63)*occ_func_3_1(1))
     + (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(55))
     + (occ_func_2_1(88)*occ_func_3_1(65)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_47_at_0() const {
  // orbit_index: 47
  // function_index: 47
  return (
    (occ_func_2_1(0)*occ_func_2_1(60)*occ_func_2_1(64))
     + (occ_func_2_1(58)*occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_2_1(54)*occ_func_2_1(56)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(60)*occ_func_2_1(56))
     + (occ_func_2_1(58)*occ_func_2_1(0)*occ_func_2_1(54))
     + (occ_func_2_1(62)*occ_func_2_1(64)*occ_func_2_1(0))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_47_at_1() const {
  // orbit_index: 47
  // function_index: 47
  return (
    (occ_func_3_1(1)*occ_func_3_1(57)*occ_func_3_1(55))
     + (occ_func_3_1(63)*occ_func_3_1(1)*occ_func_3_1(59))
     + (occ_func_3_1(65)*occ_func_3_1(61)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(57)*occ_func_3_1(61))
     + (occ_func_3_1(63)*occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_3_1(59)*occ_func_3_1(55)*occ_func_3_1(1))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_48_at_0() const {
  // orbit_index: 48
  // function_index: 48
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(103))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_3_1(103)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_3_1(61)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(107))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_3_1(107)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_3_1(63)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(111))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_3_1(111)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_3_1(65)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(65))
     + (occ_func_3_1(7)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_3_1(59)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(59))
     + (occ_func_2_1(0)*occ_func_3_1(39)*occ_func_3_1(99))
     + (occ_func_3_1(39)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_3_1(99)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_3_1(5)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_3_1(57)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(57))
     + (occ_func_2_1(0)*occ_func_3_1(35)*occ_func_3_1(95))
     + (occ_func_3_1(35)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_3_1(95)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(55)*occ_func_2_1(2)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(55))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(91))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(91)*occ_func_2_1(2)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_48_at_1() const {
  // orbit_index: 48
  // function_index: 48
  return (
    (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(100)*occ_func_3_1(7)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_2_1(100))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(58))
     + (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(58)*occ_func_3_1(7)*occ_func_3_1(1))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_2_1(96)*occ_func_3_1(5)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_2_1(96))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(56))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_2_1(56)*occ_func_3_1(5)*occ_func_3_1(1))
     + (occ_func_2_1(32)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_2_1(92)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(32)*occ_func_2_1(92))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(54))
     + (occ_func_2_1(2)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_2_1(54)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(60))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_2_1(60)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_2_1(104)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(62))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_2_1(62)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_2_1(108)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(3))
     + (occ_func_2_1(64)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(3))
     + (occ_func_2_1(112)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(112))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_49_at_0() const {
  // orbit_index: 49
  // function_index: 49
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(95)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(0)*occ_func_3_1(35)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(59)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(39)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_2_1(0)*occ_func_3_1(39)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(91)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(99)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_3_1(99))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_3_1(59))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_3_1(95))
     + (occ_func_3_1(5)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(55)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(57)*occ_func_2_1(0))
     + (occ_func_3_1(35)*occ_func_2_1(0)*occ_func_3_1(91))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_3_1(57))
     + (occ_func_3_1(7)*occ_func_2_1(0)*occ_func_3_1(55))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_49_at_1() const {
  // orbit_index: 49
  // function_index: 49
  return (
    (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(92)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(32)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(100)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_2_1(100))
     + (occ_func_2_1(2)*occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_2_1(32)*occ_func_3_1(1)*occ_func_2_1(96))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(54)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(56)*occ_func_3_1(1))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_2_1(92))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(96)*occ_func_3_1(1))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(58)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(112)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(64)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_50_at_0() const {
  // orbit_index: 50
  // function_index: 50
  return (
    (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(57)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(99)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(39)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(55)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(59)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(59))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_3_1(99))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_3_1(57))
     + (occ_func_3_1(35)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(0)*occ_func_3_1(35)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(91)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(95)*occ_func_2_1(0))
     + (occ_func_3_1(5)*occ_func_2_1(0)*occ_func_3_1(55))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_3_1(95))
     + (occ_func_3_1(39)*occ_func_2_1(0)*occ_func_3_1(91))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_50_at_1() const {
  // orbit_index: 50
  // function_index: 50
  return (
    (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(54)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(58)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_2_1(32)*occ_func_3_1(1)*occ_func_2_1(100))
     + (occ_func_2_1(2)*occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(92)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(32)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(96)*occ_func_3_1(1))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_2_1(96))
     + (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_2_1(92))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(56)*occ_func_3_1(1))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(100)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_51_at_0() const {
  // orbit_index: 51
  // function_index: 51
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(103))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_3_1(61)*occ_func_3_1(43)*occ_func_2_1(0))
     + (occ_func_3_1(103)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_3_1(61))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_3_1(107))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_3_1(63)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_3_1(107)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(63))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(111))
     + (occ_func_2_1(32)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_3_1(65)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_3_1(111)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(65))
     + (occ_func_2_1(30)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_3_1(59)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(38)*occ_func_3_1(99))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_2_1(0)*occ_func_2_1(40)*occ_func_3_1(59))
     + (occ_func_2_1(42)*occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_3_1(99)*occ_func_3_1(7)*occ_func_2_1(0))
     + (occ_func_3_1(57)*occ_func_3_1(35)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(34)*occ_func_3_1(95))
     + (occ_func_2_1(48)*occ_func_2_1(0)*occ_func_3_1(5))
     + (occ_func_2_1(0)*occ_func_2_1(36)*occ_func_3_1(57))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_3_1(95)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_3_1(55)*occ_func_3_1(31)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_3_1(91))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_3_1(3))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_3_1(55))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(31))
     + (occ_func_3_1(91)*occ_func_3_1(3)*occ_func_2_1(0))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_51_at_1() const {
  // orbit_index: 51
  // function_index: 51
  return (
    (occ_func_2_1(100)*occ_func_2_1(6)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_2_1(58))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_2_1(40))
     + (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_2_1(100))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_2_1(58)*occ_func_2_1(40)*occ_func_3_1(1))
     + (occ_func_2_1(96)*occ_func_2_1(4)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_2_1(56))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(36))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_2_1(96))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_2_1(56)*occ_func_2_1(36)*occ_func_3_1(1))
     + (occ_func_2_1(92)*occ_func_2_1(2)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(31)*occ_func_2_1(54))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(32))
     + (occ_func_3_1(1)*occ_func_3_1(33)*occ_func_2_1(92))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_2_1(54)*occ_func_2_1(32)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(43)*occ_func_2_1(60))
     + (occ_func_3_1(41)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_2_1(104)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_2_1(60)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(104))
     + (occ_func_3_1(39)*occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(62))
     + (occ_func_3_1(37)*occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_2_1(108)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_2_1(62)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(49)*occ_func_2_1(108))
     + (occ_func_3_1(35)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(64))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_2_1(112)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_2_1(64)*occ_func_2_1(52)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(112))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_2_1(12))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_52_at_0() const {
  // orbit_index: 52
  // function_index: 52
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(87))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_3_1(87))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(75))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_3_1(83)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_3_1(79)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(25))
     + (occ_func_2_1(2)*occ_func_2_1(0)*occ_func_3_1(59))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(27))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_3_1(27))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(25))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_3_1(83)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(67)*occ_func_3_1(95)*occ_func_2_1(0))
     + (occ_func_3_1(67)*occ_func_3_1(91)*occ_func_2_1(0))
     + (occ_func_3_1(79)*occ_func_3_1(99)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_3_1(71))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(99))
     + (occ_func_3_1(23)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(75))
     + (occ_func_2_1(2)*occ_func_2_1(0)*occ_func_3_1(95))
     + (occ_func_3_1(21)*occ_func_3_1(59)*occ_func_2_1(0))
     + (occ_func_3_1(21)*occ_func_3_1(55)*occ_func_2_1(0))
     + (occ_func_3_1(23)*occ_func_3_1(57)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(71))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_3_1(91))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_3_1(19))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_3_1(57))
     + (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(19))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_3_1(55))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_52_at_1() const {
  // orbit_index: 52
  // function_index: 52
  return (
    (occ_func_2_1(68)*occ_func_2_1(96)*occ_func_3_1(1))
     + (occ_func_2_1(68)*occ_func_2_1(92)*occ_func_3_1(1))
     + (occ_func_2_1(80)*occ_func_2_1(100)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_2_1(72))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(100))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(76))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_2_1(96))
     + (occ_func_2_1(22)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_2_1(20)*occ_func_2_1(58)*occ_func_3_1(1))
     + (occ_func_2_1(20)*occ_func_2_1(54)*occ_func_3_1(1))
     + (occ_func_2_1(22)*occ_func_2_1(56)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_2_1(72))
     + (occ_func_3_1(5)*occ_func_3_1(1)*occ_func_2_1(92))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_2_1(18))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_2_1(18))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_2_1(88))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_2_1(88))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_2_1(76))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_2_1(84)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(24))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_2_1(80)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_2_1(26))
     + (occ_func_3_1(5)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_2_1(26))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_2_1(24))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_2_1(84)*occ_func_2_1(112)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(64)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_53_at_0() const {
  // orbit_index: 53
  // function_index: 53
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(29))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_3_1(29))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(23))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_3_1(27)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(79))
     + (occ_func_2_1(2)*occ_func_2_1(0)*occ_func_3_1(99))
     + (occ_func_3_1(25)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(83))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_3_1(83))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(79))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_3_1(27)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_3_1(87)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_3_1(19)*occ_func_3_1(57)*occ_func_2_1(0))
     + (occ_func_3_1(19)*occ_func_3_1(55)*occ_func_2_1(0))
     + (occ_func_3_1(25)*occ_func_3_1(59)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_3_1(21))
     + (occ_func_2_1(10)*occ_func_2_1(0)*occ_func_3_1(59))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(23))
     + (occ_func_2_1(2)*occ_func_2_1(0)*occ_func_3_1(57))
     + (occ_func_3_1(75)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_3_1(71)*occ_func_3_1(99)*occ_func_2_1(0))
     + (occ_func_3_1(71)*occ_func_3_1(91)*occ_func_2_1(0))
     + (occ_func_3_1(75)*occ_func_3_1(95)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(21))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_3_1(55))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_3_1(67))
     + (occ_func_2_1(8)*occ_func_2_1(0)*occ_func_3_1(95))
     + (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(67))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_3_1(91))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_53_at_1() const {
  // orbit_index: 53
  // function_index: 53
  return (
    (occ_func_2_1(18)*occ_func_2_1(56)*occ_func_3_1(1))
     + (occ_func_2_1(18)*occ_func_2_1(54)*occ_func_3_1(1))
     + (occ_func_2_1(24)*occ_func_2_1(58)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_2_1(20))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_2_1(76)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(22))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_2_1(72)*occ_func_2_1(100)*occ_func_3_1(1))
     + (occ_func_2_1(72)*occ_func_2_1(92)*occ_func_3_1(1))
     + (occ_func_2_1(76)*occ_func_2_1(96)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_2_1(20))
     + (occ_func_3_1(5)*occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_2_1(68))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(96))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_2_1(68))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_2_1(92))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_2_1(28))
     + (occ_func_3_1(7)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_2_1(28))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_2_1(22))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_2_1(26)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_2_1(24)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_2_1(80))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_2_1(100))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_2_1(84))
     + (occ_func_3_1(5)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_2_1(84))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_2_1(80))
     + (occ_func_3_1(13)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_2_1(26)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_2_1(88)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_54_at_0() const {
  // orbit_index: 54
  // function_index: 54
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(87))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_2_1(38)*occ_func_3_1(87))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_3_1(75))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_3_1(83)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_3_1(79)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(25))
     + (occ_func_2_1(30)*occ_func_2_1(0)*occ_func_3_1(99))
     + (occ_func_2_1(0)*occ_func_2_1(36)*occ_func_3_1(27))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(27))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_3_1(25))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_3_1(83)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_3_1(29)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_3_1(67)*occ_func_3_1(55)*occ_func_2_1(0))
     + (occ_func_3_1(67)*occ_func_3_1(57)*occ_func_2_1(0))
     + (occ_func_3_1(79)*occ_func_3_1(59)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(34)*occ_func_3_1(71))
     + (occ_func_2_1(48)*occ_func_2_1(0)*occ_func_3_1(59))
     + (occ_func_3_1(23)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(75))
     + (occ_func_2_1(32)*occ_func_2_1(0)*occ_func_3_1(57))
     + (occ_func_3_1(21)*occ_func_3_1(99)*occ_func_2_1(0))
     + (occ_func_3_1(21)*occ_func_3_1(91)*occ_func_2_1(0))
     + (occ_func_3_1(23)*occ_func_3_1(95)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_3_1(71))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_3_1(55))
     + (occ_func_2_1(0)*occ_func_2_1(40)*occ_func_3_1(19))
     + (occ_func_2_1(42)*occ_func_2_1(0)*occ_func_3_1(95))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_3_1(19))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_3_1(91))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_54_at_1() const {
  // orbit_index: 54
  // function_index: 54
  return (
    (occ_func_2_1(68)*occ_func_2_1(56)*occ_func_3_1(1))
     + (occ_func_2_1(68)*occ_func_2_1(54)*occ_func_3_1(1))
     + (occ_func_2_1(80)*occ_func_2_1(58)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_2_1(72))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(76))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_2_1(22)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_2_1(20)*occ_func_2_1(92)*occ_func_3_1(1))
     + (occ_func_2_1(20)*occ_func_2_1(100)*occ_func_3_1(1))
     + (occ_func_2_1(22)*occ_func_2_1(96)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(49)*occ_func_2_1(72))
     + (occ_func_3_1(35)*occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_2_1(18))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_2_1(96))
     + (occ_func_3_1(1)*occ_func_3_1(43)*occ_func_2_1(18))
     + (occ_func_3_1(41)*occ_func_3_1(1)*occ_func_2_1(92))
     + (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_2_1(88))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(88))
     + (occ_func_3_1(39)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_3_1(1)*occ_func_3_1(33)*occ_func_2_1(76))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_2_1(84)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(24))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_2_1(100))
     + (occ_func_2_1(80)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(26))
     + (occ_func_3_1(37)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_2_1(26))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(1)*occ_func_3_1(31)*occ_func_2_1(24))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_2_1(84)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_2_1(28)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_55_at_0() const {
  // orbit_index: 55
  // function_index: 55
  return (
    (occ_func_2_1(0)*occ_func_2_1(42)*occ_func_3_1(111))
     + (occ_func_2_1(40)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_2_1(0)*occ_func_2_1(38)*occ_func_3_1(107))
     + (occ_func_2_1(44)*occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_2_1(0)*occ_func_2_1(50)*occ_func_3_1(103))
     + (occ_func_2_1(32)*occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_3_1(103)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(32)*occ_func_3_1(59))
     + (occ_func_2_1(50)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_3_1(107)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(36)*occ_func_3_1(61))
     + (occ_func_2_1(46)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_2_1(48)*occ_func_3_1(65))
     + (occ_func_2_1(34)*occ_func_2_1(0)*occ_func_3_1(83))
     + (occ_func_2_1(0)*occ_func_2_1(52)*occ_func_3_1(63))
     + (occ_func_2_1(30)*occ_func_2_1(0)*occ_func_3_1(79))
     + (occ_func_3_1(111)*occ_func_3_1(27)*occ_func_2_1(0))
     + (occ_func_3_1(63)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(65)*occ_func_3_1(87)*occ_func_2_1(0))
     + (occ_func_3_1(95)*occ_func_3_1(19)*occ_func_2_1(0))
     + (occ_func_3_1(91)*occ_func_3_1(19)*occ_func_2_1(0))
     + (occ_func_3_1(99)*occ_func_3_1(25)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(46)*occ_func_3_1(99))
     + (occ_func_2_1(36)*occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_2_1(0)*occ_func_2_1(30)*occ_func_3_1(95))
     + (occ_func_2_1(52)*occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_3_1(61)*occ_func_3_1(75)*occ_func_2_1(0))
     + (occ_func_3_1(55)*occ_func_3_1(71)*occ_func_2_1(0))
     + (occ_func_3_1(59)*occ_func_3_1(71)*occ_func_2_1(0))
     + (occ_func_3_1(57)*occ_func_3_1(75)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(34)*occ_func_3_1(91))
     + (occ_func_2_1(48)*occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_2_1(0)*occ_func_2_1(44)*occ_func_3_1(57))
     + (occ_func_2_1(38)*occ_func_2_1(0)*occ_func_3_1(67))
     + (occ_func_2_1(0)*occ_func_2_1(40)*occ_func_3_1(55))
     + (occ_func_2_1(42)*occ_func_2_1(0)*occ_func_3_1(67))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_55_at_1() const {
  // orbit_index: 55
  // function_index: 55
  return (
    (occ_func_2_1(92)*occ_func_2_1(18)*occ_func_3_1(1))
     + (occ_func_2_1(96)*occ_func_2_1(18)*occ_func_3_1(1))
     + (occ_func_2_1(100)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(49)*occ_func_2_1(100))
     + (occ_func_3_1(35)*occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_2_1(60)*occ_func_2_1(76)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(33)*occ_func_2_1(96))
     + (occ_func_3_1(51)*occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_2_1(58)*occ_func_2_1(72)*occ_func_3_1(1))
     + (occ_func_2_1(54)*occ_func_2_1(72)*occ_func_3_1(1))
     + (occ_func_2_1(56)*occ_func_2_1(76)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(37)*occ_func_2_1(92))
     + (occ_func_3_1(47)*occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_3_1(1)*occ_func_3_1(43)*occ_func_2_1(56))
     + (occ_func_3_1(41)*occ_func_3_1(1)*occ_func_2_1(68))
     + (occ_func_3_1(1)*occ_func_3_1(39)*occ_func_2_1(54))
     + (occ_func_3_1(45)*occ_func_3_1(1)*occ_func_2_1(68))
     + (occ_func_3_1(1)*occ_func_3_1(41)*occ_func_2_1(108))
     + (occ_func_3_1(43)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_3_1(45)*occ_func_2_1(112))
     + (occ_func_3_1(39)*occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_3_1(1)*occ_func_3_1(53)*occ_func_2_1(104))
     + (occ_func_3_1(31)*occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_2_1(104)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_2_1(108)*occ_func_2_1(24)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(31)*occ_func_2_1(58))
     + (occ_func_3_1(53)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_3_1(1)*occ_func_3_1(47)*occ_func_2_1(64))
     + (occ_func_3_1(37)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_3_1(35)*occ_func_2_1(60))
     + (occ_func_3_1(49)*occ_func_3_1(1)*occ_func_2_1(84))
     + (occ_func_3_1(1)*occ_func_3_1(51)*occ_func_2_1(62))
     + (occ_func_3_1(33)*occ_func_3_1(1)*occ_func_2_1(80))
     + (occ_func_2_1(112)*occ_func_2_1(26)*occ_func_3_1(1))
     + (occ_func_2_1(62)*occ_func_2_1(88)*occ_func_3_1(1))
     + (occ_func_2_1(64)*occ_func_2_1(88)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_56_at_0() const {
  // orbit_index: 56
  // function_index: 56
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_2_1(58)*occ_func_3_1(59)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_2_1(56)*occ_func_3_1(57)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_2_1(54)*occ_func_3_1(55)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(58))
     + (occ_func_2_1(60)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_2_1(60)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(56))
     + (occ_func_2_1(62)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_2_1(62)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(54))
     + (occ_func_2_1(64)*occ_func_3_1(111)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_2_1(64)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(60))
     + (occ_func_2_1(58)*occ_func_3_1(99)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(62))
     + (occ_func_2_1(56)*occ_func_3_1(95)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(64))
     + (occ_func_2_1(54)*occ_func_3_1(91)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(59))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(99))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(57))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(95))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(55))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(91))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_56_at_1() const {
  // orbit_index: 56
  // function_index: 56
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_3_1(59)*occ_func_2_1(58)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_3_1(57)*occ_func_2_1(56)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_3_1(55)*occ_func_2_1(54)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(100))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(96))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(92))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(61))
     + (occ_func_3_1(59)*occ_func_2_1(100)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(63))
     + (occ_func_3_1(57)*occ_func_2_1(96)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(65))
     + (occ_func_3_1(55)*occ_func_2_1(92)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(59))
     + (occ_func_3_1(61)*occ_func_2_1(60)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(59))
     + (occ_func_3_1(61)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(57))
     + (occ_func_3_1(63)*occ_func_2_1(62)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(57))
     + (occ_func_3_1(63)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(55))
     + (occ_func_3_1(65)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(55))
     + (occ_func_3_1(65)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_57_at_0() const {
  // orbit_index: 57
  // function_index: 57
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(61))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(63))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(65))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(111))
     + (occ_func_3_1(103)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_3_1(107)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_3_1(111)*occ_func_3_1(65)*occ_func_2_1(0))
     + (occ_func_3_1(59)*occ_func_3_1(99)*occ_func_2_1(0))
     + (occ_func_3_1(95)*occ_func_3_1(57)*occ_func_2_1(0))
     + (occ_func_3_1(91)*occ_func_3_1(55)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(59))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(99))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(57))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(95))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(55))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(91))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_57_at_1() const {
  // orbit_index: 57
  // function_index: 57
  return (
    (occ_func_2_1(58)*occ_func_2_1(100)*occ_func_3_1(1))
     + (occ_func_2_1(56)*occ_func_2_1(96)*occ_func_3_1(1))
     + (occ_func_2_1(54)*occ_func_2_1(92)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(100))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(96))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(92))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(60))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(108))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(112))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_2_1(60)*occ_func_2_1(104)*occ_func_3_1(1))
     + (occ_func_2_1(62)*occ_func_2_1(108)*occ_func_3_1(1))
     + (occ_func_2_1(64)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_58_at_0() const {
  // orbit_index: 58
  // function_index: 58
  return (
    (occ_func_2_1(0)*occ_func_3_1(103)*occ_func_3_1(111))
     + (occ_func_3_1(103)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(95)*occ_func_2_1(54)*occ_func_2_1(0))
     + (occ_func_3_1(107)*occ_func_2_1(0)*occ_func_2_1(58))
     + (occ_func_3_1(111)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_3_1(61)*occ_func_2_1(0)*occ_func_2_1(56))
     + (occ_func_3_1(65)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_3_1(63)*occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_3_1(59)*occ_func_2_1(54)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(63)*occ_func_3_1(65))
     + (occ_func_2_1(0)*occ_func_3_1(91)*occ_func_3_1(95))
     + (occ_func_2_1(0)*occ_func_3_1(107)*occ_func_3_1(99))
     + (occ_func_3_1(91)*occ_func_2_1(0)*occ_func_2_1(56))
     + (occ_func_3_1(99)*occ_func_2_1(62)*occ_func_2_1(0))
     + (occ_func_3_1(55)*occ_func_2_1(0)*occ_func_2_1(58))
     + (occ_func_3_1(57)*occ_func_2_1(60)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(61)*occ_func_3_1(57))
     + (occ_func_2_1(0)*occ_func_3_1(55)*occ_func_3_1(59))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_58_at_1() const {
  // orbit_index: 58
  // function_index: 58
  return (
    (occ_func_2_1(100)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_2_1(92)*occ_func_3_1(57)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(100)*occ_func_2_1(108))
     + (occ_func_3_1(1)*occ_func_2_1(96)*occ_func_2_1(92))
     + (occ_func_3_1(1)*occ_func_2_1(58)*occ_func_2_1(54))
     + (occ_func_3_1(1)*occ_func_2_1(56)*occ_func_2_1(60))
     + (occ_func_2_1(56)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_2_1(54)*occ_func_3_1(59)*occ_func_3_1(1))
     + (occ_func_2_1(112)*occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_2_1(108)*occ_func_3_1(59)*occ_func_3_1(1))
     + (occ_func_2_1(96)*occ_func_3_1(1)*occ_func_3_1(55))
     + (occ_func_2_1(104)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(112)*occ_func_2_1(104))
     + (occ_func_3_1(1)*occ_func_2_1(64)*occ_func_2_1(62))
     + (occ_func_2_1(58)*occ_func_3_1(1)*occ_func_3_1(55))
     + (occ_func_2_1(62)*occ_func_3_1(65)*occ_func_3_1(1))
     + (occ_func_2_1(64)*occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_2_1(60)*occ_func_3_1(57)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_59_at_0() const {
  // orbit_index: 59
  // function_index: 59
  return (
    (occ_func_2_1(0)*occ_func_2_1(60)*occ_func_3_1(65))
     + (occ_func_2_1(58)*occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_2_1(0)*occ_func_2_1(54)*occ_func_3_1(57))
     + (occ_func_2_1(64)*occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_3_1(65)*occ_func_3_1(61)*occ_func_2_1(0))
     + (occ_func_3_1(111)*occ_func_3_1(107)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(54)*occ_func_3_1(99))
     + (occ_func_2_1(64)*occ_func_2_1(0)*occ_func_3_1(107))
     + (occ_func_2_1(0)*occ_func_2_1(62)*occ_func_3_1(111))
     + (occ_func_2_1(56)*occ_func_2_1(0)*occ_func_3_1(103))
     + (occ_func_2_1(0)*occ_func_2_1(62)*occ_func_3_1(59))
     + (occ_func_2_1(56)*occ_func_2_1(0)*occ_func_3_1(55))
     + (occ_func_3_1(59)*occ_func_3_1(63)*occ_func_2_1(0))
     + (occ_func_3_1(57)*occ_func_3_1(55)*occ_func_2_1(0))
     + (occ_func_3_1(99)*occ_func_3_1(91)*occ_func_2_1(0))
     + (occ_func_3_1(95)*occ_func_3_1(103)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(60)*occ_func_3_1(95))
     + (occ_func_2_1(58)*occ_func_2_1(0)*occ_func_3_1(91))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_59_at_1() const {
  // orbit_index: 59
  // function_index: 59
  return (
    (occ_func_2_1(54)*occ_func_2_1(56)*occ_func_3_1(1))
     + (occ_func_2_1(62)*occ_func_2_1(58)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(57)*occ_func_2_1(54))
     + (occ_func_3_1(63)*occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_3_1(1)*occ_func_3_1(59)*occ_func_2_1(92))
     + (occ_func_3_1(61)*occ_func_3_1(1)*occ_func_2_1(96))
     + (occ_func_2_1(104)*occ_func_2_1(96)*occ_func_3_1(1))
     + (occ_func_2_1(92)*occ_func_2_1(100)*occ_func_3_1(1))
     + (occ_func_2_1(60)*occ_func_2_1(64)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(65)*occ_func_2_1(60))
     + (occ_func_3_1(55)*occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_3_1(1)*occ_func_3_1(59)*occ_func_2_1(62))
     + (occ_func_3_1(61)*occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_3_1(1)*occ_func_3_1(57)*occ_func_2_1(104))
     + (occ_func_3_1(63)*occ_func_3_1(1)*occ_func_2_1(112))
     + (occ_func_3_1(1)*occ_func_3_1(65)*occ_func_2_1(108))
     + (occ_func_3_1(55)*occ_func_3_1(1)*occ_func_2_1(100))
     + (occ_func_2_1(108)*occ_func_2_1(112)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_60_at_0() const {
  // orbit_index: 60
  // function_index: 60
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(8)*occ_func_3_1(43))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(0)*occ_func_3_1(15))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(35)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(15)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(51)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(2)*occ_func_3_1(15)*occ_func_2_1(0))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_60_at_1() const {
  // orbit_index: 60
  // function_index: 60
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44)*occ_func_3_1(9))
     + (occ_func_2_1(40)*occ_func_3_1(7)*occ_func_2_1(16)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(5)*occ_func_2_1(36))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_2_1(16))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_2_1(52))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(1)*occ_func_2_1(16))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_61_at_0() const {
  // orbit_index: 61
  // function_index: 61
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(10)*occ_func_2_1(6))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(6))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(39)*occ_func_3_1(47))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(35)*occ_func_3_1(31))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(9))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(3))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_61_at_1() const {
  // orbit_index: 61
  // function_index: 61
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(11))
     + (occ_func_3_1(3)*occ_func_2_1(2)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(5)*occ_func_2_1(4)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(40))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(32)*occ_func_2_1(36))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(9))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(3))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(11)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_62_at_0() const {
  // orbit_index: 62
  // function_index: 62
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(6))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(2)*occ_func_2_1(6))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(35)*occ_func_3_1(43))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(39)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_62_at_1() const {
  // orbit_index: 62
  // function_index: 62
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(3)*occ_func_2_1(2)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(6))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(36))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(32)*occ_func_2_1(40))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(11))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(5)*occ_func_2_1(4)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(5)*occ_func_3_1(9))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(7)*occ_func_3_1(3))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(11)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_63_at_0() const {
  // orbit_index: 63
  // function_index: 63
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(13))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(11))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(47)*occ_func_2_1(6))
     + (occ_func_3_1(43)*occ_func_2_1(8)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(2)*occ_func_3_1(35))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(9))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(7))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(2)*occ_func_3_1(35)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(51)*occ_func_2_1(8))
     + (occ_func_3_1(39)*occ_func_2_1(6)*occ_func_3_1(47)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(39)*occ_func_2_1(10))
     + (occ_func_3_1(35)*occ_func_2_1(4)*occ_func_3_1(31)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(31)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(5))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(0)*occ_func_3_1(3))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(3))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(0)*occ_func_3_1(5))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_63_at_1() const {
  // orbit_index: 63
  // function_index: 63
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(13))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(6)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11)*occ_func_2_1(40))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(1)*occ_func_2_1(32))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(32)*occ_func_3_1(5))
     + (occ_func_2_1(48)*occ_func_3_1(11)*occ_func_2_1(40)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(2)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(7))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(4)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9)*occ_func_2_1(52))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_2_1(44))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(1)*occ_func_2_1(36))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(7)*occ_func_2_1(48))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(3)*occ_func_2_1(36))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(5))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(10)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_64_at_0() const {
  // orbit_index: 64
  // function_index: 64
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(13))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(9))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(0)*occ_func_3_1(5))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(11))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(5))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(2)*occ_func_3_1(39))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(47)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(2)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(51)*occ_func_2_1(10))
     + (occ_func_3_1(35)*occ_func_2_1(4)*occ_func_3_1(43)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(7))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0)*occ_func_3_1(3))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(3))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(35)*occ_func_2_1(8))
     + (occ_func_3_1(39)*occ_func_2_1(6)*occ_func_3_1(31)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(31)*occ_func_2_1(6))
     + (occ_func_3_1(43)*occ_func_2_1(8)*occ_func_3_1(35)*occ_func_2_1(0))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_64_at_1() const {
  // orbit_index: 64
  // function_index: 64
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(13))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(4)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(2)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(5))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(6)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9)*occ_func_2_1(36))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(1)*occ_func_2_1(32))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(32)*occ_func_3_1(7))
     + (occ_func_2_1(44)*occ_func_3_1(9)*occ_func_2_1(36)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11)*occ_func_2_1(52))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_2_1(48))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(1)*occ_func_2_1(40))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(7))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(12)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(5)*occ_func_2_1(44))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(3)*occ_func_2_1(40))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_2_1(48))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_65_at_0() const {
  // orbit_index: 65
  // function_index: 65
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_3_1(43)*occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_3_1(51)*occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(8))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(35)*occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(7))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(5))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(3))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_65_at_1() const {
  // orbit_index: 65
  // function_index: 65
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(40))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(36))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(32))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(8))
     + (occ_func_3_1(17)*occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(48))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(52))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(7))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(5))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_66_at_0() const {
  // orbit_index: 66
  // function_index: 66
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(9)*occ_func_3_1(13))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(51))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_3_1(47)*occ_func_3_1(51))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(13))
     + (occ_func_3_1(9)*occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(5)*occ_func_3_1(35)*occ_func_2_1(2)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_3_1(13)*occ_func_3_1(51)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(39)*occ_func_3_1(7)*occ_func_2_1(2)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(3)*occ_func_3_1(31)*occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_3_1(7)*occ_func_3_1(39)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(31)*occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_3_1(35)*occ_func_3_1(5)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(11)*occ_func_3_1(7))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(39))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(3)*occ_func_3_1(5))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(35))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_3_1(43)*occ_func_3_1(35))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(5))
     + (occ_func_2_1(0)*occ_func_2_1(14)*occ_func_3_1(31)*occ_func_3_1(39))
     + (occ_func_2_1(16)*occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(7))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_66_at_1() const {
  // orbit_index: 66
  // function_index: 66
  return (
    (occ_func_2_1(6)*occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_2_1(2)*occ_func_2_1(32)*occ_func_3_1(5)*occ_func_3_1(1))
     + (occ_func_2_1(36)*occ_func_2_1(4)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(32)*occ_func_2_1(2)*occ_func_3_1(7)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(6)*occ_func_2_1(10))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(40)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(4)*occ_func_2_1(2))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(36)*occ_func_2_1(32))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(36)*occ_func_2_1(44))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(8))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(40)*occ_func_2_1(32))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(12)*occ_func_2_1(8))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(52)*occ_func_2_1(48))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(3))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(7)*occ_func_3_1(1))
     + (occ_func_2_1(40)*occ_func_2_1(6)*occ_func_3_1(1)*occ_func_3_1(3))
     + (occ_func_2_1(48)*occ_func_2_1(10)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_2_1(44)*occ_func_2_1(8)*occ_func_3_1(5)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_67_at_0() const {
  // orbit_index: 67
  // function_index: 67
  return (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_2_1(6)*occ_func_2_1(0)*occ_func_2_1(24)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_2_1(22)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(2)*occ_func_2_1(4)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(12)*occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_2_1(20)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(10)*occ_func_2_1(6)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(2)*occ_func_2_1(6))
     + (occ_func_2_1(4)*occ_func_2_1(0)*occ_func_2_1(18)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_2_1(28)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(8)*occ_func_2_1(12)*occ_func_2_1(4)*occ_func_2_1(0))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_67_at_1() const {
  // orbit_index: 67
  // function_index: 67
  return (
    (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(9)*occ_func_3_1(1)*occ_func_3_1(23)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_3_1(25)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(13)*occ_func_3_1(11)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(3)*occ_func_3_1(1)*occ_func_3_1(21)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_3_1(27)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(5)*occ_func_3_1(9)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_3_1(19)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(7)*occ_func_3_1(3)*occ_func_3_1(11)*occ_func_3_1(1))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_68_at_0() const {
  // orbit_index: 68
  // function_index: 68
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(12)*occ_func_2_1(6))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(12))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(6)*occ_func_2_1(4))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(6))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(4)*occ_func_2_1(12))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(4))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(8)*occ_func_2_1(2))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(2)*occ_func_2_1(10))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(8))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(20)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(2))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(28)*occ_func_2_1(0))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(10)*occ_func_2_1(8))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(13))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(39))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(39)*occ_func_3_1(35))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(5))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(35)*occ_func_3_1(51))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(9))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(3))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(31))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(47))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_68_at_1() const {
  // orbit_index: 68
  // function_index: 68
  return (
    (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_3_1(5)*occ_func_2_1(4)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(40))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(12))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(40)*occ_func_2_1(36))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(6))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(36)*occ_func_2_1(52))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(32))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(32)*occ_func_2_1(48))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(8))
     + (occ_func_2_1(0)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_2_1(16)*occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(13))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(3)*occ_func_2_1(2)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(7))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(7))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(7)*occ_func_3_1(5))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(25)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(5))
     + (occ_func_3_1(3)*occ_func_2_1(2)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(5)*occ_func_3_1(13))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(19)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(9))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(3))
     + (occ_func_3_1(5)*occ_func_2_1(4)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9)*occ_func_3_1(3))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(27)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(3)*occ_func_3_1(11))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(19)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_69_at_0() const {
  // orbit_index: 69
  // function_index: 69
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(47)*occ_func_3_1(51))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(20)*occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_3_1(35)*occ_func_2_1(2)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(24)*occ_func_2_1(6))
     + (occ_func_3_1(43)*occ_func_2_1(22)*occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_3_1(51)*occ_func_2_1(8)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(22)*occ_func_2_1(4))
     + (occ_func_3_1(11)*occ_func_2_1(24)*occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(8)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(8))
     + (occ_func_3_1(39)*occ_func_2_1(20)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_3_1(47)*occ_func_2_1(6)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_2_1(0)*occ_func_2_1(20)*occ_func_2_1(2))
     + (occ_func_3_1(13)*occ_func_2_1(26)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_3_1(11)*occ_func_2_1(12)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(9)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(20)*occ_func_2_1(6))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(5)*occ_func_2_1(8)*occ_func_2_1(2)*occ_func_2_1(0))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_2_1(18)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(28)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_3_1(39)*occ_func_2_1(10)*occ_func_2_1(2)*occ_func_2_1(0))
     + (occ_func_3_1(35)*occ_func_2_1(0)*occ_func_2_1(18)*occ_func_2_1(2))
     + (occ_func_3_1(51)*occ_func_2_1(28)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_3_1(43)*occ_func_2_1(12)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(28)*occ_func_2_1(10))
     + (occ_func_3_1(5)*occ_func_2_1(18)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_3_1(9)*occ_func_2_1(4)*occ_func_2_1(12)*occ_func_2_1(0))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(28)*occ_func_2_1(12))
     + (occ_func_3_1(3)*occ_func_2_1(18)*occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_3_1(7)*occ_func_2_1(2)*occ_func_2_1(10)*occ_func_2_1(0))
     + (occ_func_3_1(5)*occ_func_2_1(0)*occ_func_2_1(22)*occ_func_2_1(8))
     + (occ_func_3_1(7)*occ_func_2_1(24)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_3_1(3)*occ_func_2_1(6)*occ_func_2_1(4)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_2_1(0)*occ_func_3_1(35)*occ_func_3_1(39)*occ_func_3_1(31))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(3)*occ_func_3_1(5))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(43)*occ_func_3_1(35))
     + (occ_func_3_1(39)*occ_func_2_1(0)*occ_func_2_1(24)*occ_func_2_1(10))
     + (occ_func_3_1(35)*occ_func_2_1(22)*occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_3_1(31)*occ_func_2_1(4)*occ_func_2_1(6)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(39)*occ_func_3_1(51)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(11)*occ_func_3_1(7))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(31)*occ_func_3_1(39))
     + (occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(35)*occ_func_3_1(43))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_69_at_1() const {
  // orbit_index: 69
  // function_index: 69
  return (
    (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(25)*occ_func_3_1(11))
     + (occ_func_2_1(36)*occ_func_3_1(23)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(32)*occ_func_3_1(5)*occ_func_3_1(7)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_2_1(52)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_2_1(40)*occ_func_2_1(32))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(4)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_2_1(32)*occ_func_2_1(44)*occ_func_2_1(36))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_3_1(23)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(25)*occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_2_1(2)*occ_func_3_1(7)*occ_func_3_1(5)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(6)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(36)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(48)*occ_func_2_1(32)*occ_func_2_1(40))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(10)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(12)*occ_func_2_1(8))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(1)*occ_func_3_1(21)*occ_func_3_1(7))
     + (occ_func_2_1(8)*occ_func_3_1(27)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_2_1(4)*occ_func_3_1(9)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_2_1(8)*occ_func_3_1(1)*occ_func_3_1(23)*occ_func_3_1(5))
     + (occ_func_2_1(10)*occ_func_3_1(25)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_2_1(12)*occ_func_3_1(11)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(25)*occ_func_3_1(7))
     + (occ_func_2_1(44)*occ_func_3_1(23)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_2_1(52)*occ_func_3_1(9)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_3_1(21)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_2_1(10)*occ_func_3_1(13)*occ_func_3_1(7)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(27)*occ_func_3_1(9))
     + (occ_func_2_1(40)*occ_func_3_1(21)*occ_func_3_1(1)*occ_func_3_1(3))
     + (occ_func_2_1(48)*occ_func_3_1(7)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(27)*occ_func_3_1(13))
     + (occ_func_2_1(32)*occ_func_3_1(21)*occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_2_1(36)*occ_func_3_1(3)*occ_func_3_1(9)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(13))
     + (occ_func_2_1(2)*occ_func_3_1(19)*occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_2_1(6)*occ_func_3_1(3)*occ_func_3_1(11)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(19)*occ_func_3_1(1)*occ_func_3_1(3))
     + (occ_func_2_1(8)*occ_func_3_1(5)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(19)*occ_func_3_1(3))
     + (occ_func_2_1(52)*occ_func_3_1(29)*occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_2_1(44)*occ_func_3_1(13)*occ_func_3_1(5)*occ_func_3_1(1))
     + (occ_func_2_1(32)*occ_func_3_1(1)*occ_func_3_1(19)*occ_func_3_1(5))
     + (occ_func_2_1(48)*occ_func_3_1(29)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_2_1(40)*occ_func_3_1(11)*occ_func_3_1(3)*occ_func_3_1(1))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_70_at_0() const {
  // orbit_index: 70
  // function_index: 70
  return (
    (occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(47)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(35)*occ_func_3_1(39)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_2_1(0)*occ_func_2_1(26)*occ_func_3_1(51))
     + (occ_func_3_1(31)*occ_func_2_1(20)*occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(9)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(7)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(20)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_3_1(31)*occ_func_2_1(0)*occ_func_2_1(18)*occ_func_3_1(35))
     + (occ_func_3_1(47)*occ_func_2_1(28)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(28)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(18)*occ_func_2_1(0)*occ_func_3_1(5))
     + (occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(22)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(24)*occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(3)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(13)*occ_func_3_1(7)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_2_1(0)*occ_func_2_1(24)*occ_func_3_1(39))
     + (occ_func_3_1(43)*occ_func_2_1(22)*occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(43)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(39)*occ_func_3_1(51)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(11)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(5)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(31)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(51)*occ_func_3_1(35)*occ_func_2_1(0))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_70_at_1() const {
  // orbit_index: 70
  // function_index: 70
  return (
    (occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(25)*occ_func_2_1(48))
     + (occ_func_2_1(36)*occ_func_3_1(23)*occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(40)*occ_func_2_1(52)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(32)*occ_func_2_1(44)*occ_func_3_1(1))
     + (occ_func_2_1(4)*occ_func_3_1(1)*occ_func_3_1(23)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(25)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(6)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(8)*occ_func_2_1(2)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(52)*occ_func_2_1(36)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(48)*occ_func_2_1(32)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(12)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(2)*occ_func_2_1(10)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(4)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(8)*occ_func_3_1(1))
     + (occ_func_2_1(6)*occ_func_3_1(1)*occ_func_3_1(21)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_3_1(1)*occ_func_2_1(36)*occ_func_2_1(40)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(44)*occ_func_2_1(48)*occ_func_3_1(1))
     + (occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(27)*occ_func_2_1(44))
     + (occ_func_2_1(40)*occ_func_3_1(21)*occ_func_3_1(1)*occ_func_2_1(32))
     + (occ_func_2_1(12)*occ_func_3_1(1)*occ_func_3_1(29)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(19)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(19)*occ_func_2_1(32))
     + (occ_func_2_1(52)*occ_func_3_1(29)*occ_func_3_1(1)*occ_func_2_1(48))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_71_at_0() const {
  // orbit_index: 71
  // function_index: 71
  return (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(43)*occ_func_3_1(47))
     + (occ_func_3_1(31)*occ_func_3_1(3)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_3_1(43)*occ_func_3_1(9)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(43)*occ_func_3_1(9)*occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(24)*occ_func_2_1(0))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(31)*occ_func_3_1(3)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_3_1(39)*occ_func_3_1(7)*occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(26)*occ_func_2_1(0))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_3_1(35)*occ_func_3_1(5)*occ_func_2_1(18)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_3_1(39)*occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_3_1(5)*occ_func_3_1(35)*occ_func_2_1(22)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(7)*occ_func_3_1(13))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(39)*occ_func_3_1(51))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(5)*occ_func_3_1(7))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(35)*occ_func_3_1(39))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(5))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(51)*occ_func_3_1(35))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(3)*occ_func_3_1(9))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(31)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(11)*occ_func_3_1(3))
     + (occ_func_2_1(14)*occ_func_2_1(0)*occ_func_3_1(47)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_71_at_1() const {
  // orbit_index: 71
  // function_index: 71
  return (
    (occ_func_2_1(6)*occ_func_2_1(40)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_2_1(4)*occ_func_2_1(36)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(52)*occ_func_2_1(40))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(40)*occ_func_2_1(36))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(4))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(36)*occ_func_2_1(52))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(44)*occ_func_2_1(32))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(2))
     + (occ_func_3_1(1)*occ_func_3_1(17)*occ_func_2_1(32)*occ_func_2_1(48))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_3_1(17)*occ_func_3_1(1)*occ_func_2_1(44)*occ_func_2_1(48))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(2)*occ_func_2_1(32)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(23)*occ_func_3_1(1))
     + (occ_func_2_1(2)*occ_func_2_1(32)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(29)*occ_func_3_1(1))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_2_1(6)*occ_func_2_1(40)*occ_func_3_1(21)*occ_func_3_1(1))
     + (occ_func_2_1(4)*occ_func_2_1(36)*occ_func_3_1(1)*occ_func_3_1(19))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(29)*occ_func_3_1(1))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_72_at_0() const {
  // orbit_index: 72
  // function_index: 72
  return (
    (occ_func_2_1(0)*occ_func_2_1(24)*occ_func_2_1(10)*occ_func_2_1(28))
     + (occ_func_2_1(22)*occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(26))
     + (occ_func_2_1(4)*occ_func_2_1(6)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_2_1(18)*occ_func_2_1(20)*occ_func_2_1(2)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(26)*occ_func_2_1(12)*occ_func_2_1(28))
     + (occ_func_2_1(20)*occ_func_2_1(0)*occ_func_2_1(6)*occ_func_2_1(24))
     + (occ_func_2_1(2)*occ_func_2_1(8)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(18)*occ_func_2_1(22)*occ_func_2_1(4)*occ_func_2_1(0))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_72_at_1() const {
  // orbit_index: 72
  // function_index: 72
  return (
    (occ_func_3_1(1)*occ_func_3_1(25)*occ_func_3_1(11)*occ_func_3_1(29))
     + (occ_func_3_1(23)*occ_func_3_1(1)*occ_func_3_1(9)*occ_func_3_1(27))
     + (occ_func_3_1(5)*occ_func_3_1(7)*occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(19)*occ_func_3_1(21)*occ_func_3_1(3)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(29)*occ_func_3_1(13)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(23))
     + (occ_func_3_1(3)*occ_func_3_1(11)*occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_3_1(21)*occ_func_3_1(25)*occ_func_3_1(7)*occ_func_3_1(1))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_73_at_0() const {
  // orbit_index: 73
  // function_index: 73
  return (
    (occ_func_2_1(0)*occ_func_2_1(24)*occ_func_3_1(47)*occ_func_2_1(28))
     + (occ_func_2_1(22)*occ_func_2_1(0)*occ_func_3_1(43)*occ_func_2_1(26))
     + (occ_func_2_1(18)*occ_func_2_1(20)*occ_func_3_1(31)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(20)*occ_func_3_1(3)*occ_func_2_1(18))
     + (occ_func_2_1(26)*occ_func_2_1(0)*occ_func_3_1(9)*occ_func_2_1(22))
     + (occ_func_2_1(28)*occ_func_2_1(24)*occ_func_3_1(11)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(26)*occ_func_3_1(51)*occ_func_2_1(28))
     + (occ_func_2_1(20)*occ_func_2_1(0)*occ_func_3_1(39)*occ_func_2_1(24))
     + (occ_func_2_1(18)*occ_func_2_1(22)*occ_func_3_1(35)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(20)*occ_func_3_1(7)*occ_func_2_1(24))
     + (occ_func_2_1(26)*occ_func_2_1(0)*occ_func_3_1(13)*occ_func_2_1(28))
     + (occ_func_2_1(22)*occ_func_2_1(18)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_3_1(7)*occ_func_3_1(5)*occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_3_1(35)*occ_func_3_1(39)*occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_3_1(3)*occ_func_3_1(11)*occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_3_1(43)*occ_func_3_1(47)*occ_func_2_1(0)*occ_func_3_1(31))
  ) / 8.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_site_bfunc_73_at_1() const {
  // orbit_index: 73
  // function_index: 73
  return (
    (occ_func_2_1(36)*occ_func_2_1(40)*occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_2_1(12)*occ_func_2_1(6)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_2_1(32)*occ_func_2_1(44)*occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_2_1(8)*occ_func_2_1(2)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(1)*occ_func_3_1(23)*occ_func_2_1(8)*occ_func_3_1(27))
     + (occ_func_3_1(25)*occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(29))
     + (occ_func_3_1(21)*occ_func_3_1(19)*occ_func_2_1(2)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(25)*occ_func_2_1(48)*occ_func_3_1(29))
     + (occ_func_3_1(23)*occ_func_3_1(1)*occ_func_2_1(44)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_3_1(21)*occ_func_2_1(32)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(29)*occ_func_2_1(12)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(23))
     + (occ_func_3_1(21)*occ_func_3_1(25)*occ_func_2_1(6)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_3_1(25)*occ_func_2_1(40)*occ_func_3_1(21))
     + (occ_func_3_1(23)*occ_func_3_1(1)*occ_func_2_1(36)*occ_func_3_1(19))
     + (occ_func_3_1(27)*occ_func_3_1(29)*occ_func_2_1(52)*occ_func_3_1(1))
  ) / 8.0;
}

/// --- Delta point corr ---

// template<typename Scalar>
// Scalar {{ clexulator_name }}::eval_occ_delta_site_bfunc_{{ function_index }}_at_{{ neighbor_list_index }}(int occ_i, int occ_f) const {
//   // orbit_index: {{ orbit_index }}
//   // function_index: {{ function_index }}
//   return (m_occ_func{{ sublattice_index }}_{{ site_function_index }}[occ_f] - m_occ_func{{ sublattice_index }}_{{ site_function_index }}[occ_i]) * {{ factored_orbit_prefix }} * (
//     {{ factored_cluster_prefix_0 }}({{ factored_cluster_function_0 }})
//     + {{ factored_cluster_prefix_1 }}({{ factored_cluster_function_1 }})
//     ...
//     ) / {{ orbit_mult }};
// }

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_1_at_0(int occ_i, int occ_f) const {
  // orbit_index: 1
  // function_index: 1
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (1) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_1_at_1(int occ_i, int occ_f) const {
  // orbit_index: 1
  // function_index: 1
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (1) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_2_at_0(int occ_i, int occ_f) const {
  // orbit_index: 2
  // function_index: 2
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1))
     + (occ_func_3_1(15))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_2_at_1(int occ_i, int occ_f) const {
  // orbit_index: 2
  // function_index: 2
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0))
     + (occ_func_2_1(16))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_3_at_0(int occ_i, int occ_f) const {
  // orbit_index: 3
  // function_index: 3
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8))
     + (occ_func_2_1(6))
     + (occ_func_2_1(10))
     + (occ_func_2_1(4))
     + (occ_func_2_1(2))
     + (occ_func_2_1(12))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_3_at_1(int occ_i, int occ_f) const {
  // orbit_index: 3
  // function_index: 3
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(7))
     + (occ_func_3_1(9))
     + (occ_func_3_1(5))
     + (occ_func_3_1(11))
     + (occ_func_3_1(13))
     + (occ_func_3_1(3))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_4_at_0(int occ_i, int occ_f) const {
  // orbit_index: 4
  // function_index: 4
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43))
     + (occ_func_3_1(9))
     + (occ_func_3_1(47))
     + (occ_func_3_1(11))
     + (occ_func_3_1(51))
     + (occ_func_3_1(13))
     + (occ_func_3_1(7))
     + (occ_func_3_1(39))
     + (occ_func_3_1(5))
     + (occ_func_3_1(35))
     + (occ_func_3_1(3))
     + (occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_4_at_1(int occ_i, int occ_f) const {
  // orbit_index: 4
  // function_index: 4
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40))
     + (occ_func_2_1(6))
     + (occ_func_2_1(36))
     + (occ_func_2_1(4))
     + (occ_func_2_1(32))
     + (occ_func_2_1(2))
     + (occ_func_2_1(8))
     + (occ_func_2_1(44))
     + (occ_func_2_1(10))
     + (occ_func_2_1(48))
     + (occ_func_2_1(12))
     + (occ_func_2_1(52))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_5_at_0(int occ_i, int occ_f) const {
  // orbit_index: 5
  // function_index: 5
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(16))
     + (occ_func_2_1(14))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_5_at_1(int occ_i, int occ_f) const {
  // orbit_index: 5
  // function_index: 5
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(17))
     + (occ_func_3_1(15))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_6_at_0(int occ_i, int occ_f) const {
  // orbit_index: 6
  // function_index: 6
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(24))
     + (occ_func_2_1(22))
     + (occ_func_2_1(26))
     + (occ_func_2_1(20))
     + (occ_func_2_1(18))
     + (occ_func_2_1(28))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_6_at_1(int occ_i, int occ_f) const {
  // orbit_index: 6
  // function_index: 6
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(23))
     + (occ_func_3_1(25))
     + (occ_func_3_1(21))
     + (occ_func_3_1(27))
     + (occ_func_3_1(29))
     + (occ_func_3_1(19))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_7_at_0(int occ_i, int occ_f) const {
  // orbit_index: 7
  // function_index: 7
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42))
     + (occ_func_2_1(40))
     + (occ_func_2_1(44))
     + (occ_func_2_1(38))
     + (occ_func_2_1(46))
     + (occ_func_2_1(36))
     + (occ_func_2_1(48))
     + (occ_func_2_1(34))
     + (occ_func_2_1(32))
     + (occ_func_2_1(50))
     + (occ_func_2_1(30))
     + (occ_func_2_1(52))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_7_at_1(int occ_i, int occ_f) const {
  // orbit_index: 7
  // function_index: 7
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(41))
     + (occ_func_3_1(43))
     + (occ_func_3_1(39))
     + (occ_func_3_1(45))
     + (occ_func_3_1(37))
     + (occ_func_3_1(47))
     + (occ_func_3_1(35))
     + (occ_func_3_1(49))
     + (occ_func_3_1(51))
     + (occ_func_3_1(33))
     + (occ_func_3_1(53))
     + (occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_8_at_0(int occ_i, int occ_f) const {
  // orbit_index: 8
  // function_index: 8
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(79))
     + (occ_func_3_1(25))
     + (occ_func_3_1(83))
     + (occ_func_3_1(27))
     + (occ_func_3_1(87))
     + (occ_func_3_1(29))
     + (occ_func_3_1(23))
     + (occ_func_3_1(75))
     + (occ_func_3_1(21))
     + (occ_func_3_1(71))
     + (occ_func_3_1(19))
     + (occ_func_3_1(67))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_8_at_1(int occ_i, int occ_f) const {
  // orbit_index: 8
  // function_index: 8
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(76))
     + (occ_func_2_1(22))
     + (occ_func_2_1(72))
     + (occ_func_2_1(20))
     + (occ_func_2_1(68))
     + (occ_func_2_1(18))
     + (occ_func_2_1(24))
     + (occ_func_2_1(80))
     + (occ_func_2_1(26))
     + (occ_func_2_1(84))
     + (occ_func_2_1(28))
     + (occ_func_2_1(88))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_9_at_0(int occ_i, int occ_f) const {
  // orbit_index: 9
  // function_index: 9
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(60))
     + (occ_func_2_1(58))
     + (occ_func_2_1(62))
     + (occ_func_2_1(56))
     + (occ_func_2_1(54))
     + (occ_func_2_1(64))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_9_at_1(int occ_i, int occ_f) const {
  // orbit_index: 9
  // function_index: 9
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(59))
     + (occ_func_3_1(61))
     + (occ_func_3_1(57))
     + (occ_func_3_1(63))
     + (occ_func_3_1(65))
     + (occ_func_3_1(55))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_10_at_0(int occ_i, int occ_f) const {
  // orbit_index: 10
  // function_index: 10
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(103))
     + (occ_func_3_1(61))
     + (occ_func_3_1(107))
     + (occ_func_3_1(63))
     + (occ_func_3_1(111))
     + (occ_func_3_1(65))
     + (occ_func_3_1(59))
     + (occ_func_3_1(99))
     + (occ_func_3_1(57))
     + (occ_func_3_1(95))
     + (occ_func_3_1(55))
     + (occ_func_3_1(91))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_10_at_1(int occ_i, int occ_f) const {
  // orbit_index: 10
  // function_index: 10
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(100))
     + (occ_func_2_1(58))
     + (occ_func_2_1(96))
     + (occ_func_2_1(56))
     + (occ_func_2_1(92))
     + (occ_func_2_1(54))
     + (occ_func_2_1(60))
     + (occ_func_2_1(104))
     + (occ_func_2_1(62))
     + (occ_func_2_1(108))
     + (occ_func_2_1(64))
     + (occ_func_2_1(112))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_11_at_0(int occ_i, int occ_f) const {
  // orbit_index: 11
  // function_index: 11
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(78))
     + (occ_func_2_1(76))
     + (occ_func_2_1(82))
     + (occ_func_2_1(72))
     + (occ_func_2_1(66))
     + (occ_func_2_1(88))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_11_at_1(int occ_i, int occ_f) const {
  // orbit_index: 11
  // function_index: 11
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(75))
     + (occ_func_3_1(81))
     + (occ_func_3_1(71))
     + (occ_func_3_1(85))
     + (occ_func_3_1(87))
     + (occ_func_3_1(69))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_12_at_0(int occ_i, int occ_f) const {
  // orbit_index: 12
  // function_index: 12
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(80))
     + (occ_func_2_1(74))
     + (occ_func_2_1(84))
     + (occ_func_2_1(70))
     + (occ_func_2_1(68))
     + (occ_func_2_1(86))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_12_at_1(int occ_i, int occ_f) const {
  // orbit_index: 12
  // function_index: 12
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(77))
     + (occ_func_3_1(79))
     + (occ_func_3_1(73))
     + (occ_func_3_1(83))
     + (occ_func_3_1(89))
     + (occ_func_3_1(67))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_13_at_0(int occ_i, int occ_f) const {
  // orbit_index: 13
  // function_index: 13
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(17))
     + (occ_func_3_1(199))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_13_at_1(int occ_i, int occ_f) const {
  // orbit_index: 13
  // function_index: 13
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(14))
     + (occ_func_2_1(200))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_14_at_0(int occ_i, int occ_f) const {
  // orbit_index: 14
  // function_index: 14
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(102))
     + (occ_func_2_1(100))
     + (occ_func_2_1(104))
     + (occ_func_2_1(98))
     + (occ_func_2_1(106))
     + (occ_func_2_1(96))
     + (occ_func_2_1(108))
     + (occ_func_2_1(94))
     + (occ_func_2_1(92))
     + (occ_func_2_1(110))
     + (occ_func_2_1(90))
     + (occ_func_2_1(112))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_14_at_1(int occ_i, int occ_f) const {
  // orbit_index: 14
  // function_index: 14
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(101))
     + (occ_func_3_1(103))
     + (occ_func_3_1(99))
     + (occ_func_3_1(105))
     + (occ_func_3_1(97))
     + (occ_func_3_1(107))
     + (occ_func_3_1(95))
     + (occ_func_3_1(109))
     + (occ_func_3_1(111))
     + (occ_func_3_1(93))
     + (occ_func_3_1(113))
     + (occ_func_3_1(91))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_15_at_0(int occ_i, int occ_f) const {
  // orbit_index: 15
  // function_index: 15
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(215))
     + (occ_func_3_1(45))
     + (occ_func_3_1(219))
     + (occ_func_3_1(49))
     + (occ_func_3_1(223))
     + (occ_func_3_1(53))
     + (occ_func_3_1(41))
     + (occ_func_3_1(211))
     + (occ_func_3_1(37))
     + (occ_func_3_1(207))
     + (occ_func_3_1(33))
     + (occ_func_3_1(203))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_15_at_1(int occ_i, int occ_f) const {
  // orbit_index: 15
  // function_index: 15
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(212))
     + (occ_func_2_1(38))
     + (occ_func_2_1(208))
     + (occ_func_2_1(34))
     + (occ_func_2_1(204))
     + (occ_func_2_1(30))
     + (occ_func_2_1(42))
     + (occ_func_2_1(216))
     + (occ_func_2_1(46))
     + (occ_func_2_1(220))
     + (occ_func_2_1(50))
     + (occ_func_2_1(224))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_16_at_0(int occ_i, int occ_f) const {
  // orbit_index: 16
  // function_index: 16
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(126))
     + (occ_func_2_1(124))
     + (occ_func_2_1(122))
     + (occ_func_2_1(128))
     + (occ_func_2_1(120))
     + (occ_func_2_1(130))
     + (occ_func_2_1(132))
     + (occ_func_2_1(118))
     + (occ_func_2_1(116))
     + (occ_func_2_1(134))
     + (occ_func_2_1(136))
     + (occ_func_2_1(114))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_16_at_1(int occ_i, int occ_f) const {
  // orbit_index: 16
  // function_index: 16
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(125))
     + (occ_func_3_1(127))
     + (occ_func_3_1(129))
     + (occ_func_3_1(123))
     + (occ_func_3_1(131))
     + (occ_func_3_1(121))
     + (occ_func_3_1(119))
     + (occ_func_3_1(133))
     + (occ_func_3_1(135))
     + (occ_func_3_1(117))
     + (occ_func_3_1(115))
     + (occ_func_3_1(137))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_17_at_0(int occ_i, int occ_f) const {
  // orbit_index: 17
  // function_index: 17
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(175))
     + (occ_func_3_1(127))
     + (occ_func_3_1(179))
     + (occ_func_3_1(129))
     + (occ_func_3_1(183))
     + (occ_func_3_1(131))
     + (occ_func_3_1(187))
     + (occ_func_3_1(133))
     + (occ_func_3_1(191))
     + (occ_func_3_1(135))
     + (occ_func_3_1(195))
     + (occ_func_3_1(137))
     + (occ_func_3_1(125))
     + (occ_func_3_1(171))
     + (occ_func_3_1(123))
     + (occ_func_3_1(167))
     + (occ_func_3_1(121))
     + (occ_func_3_1(163))
     + (occ_func_3_1(119))
     + (occ_func_3_1(159))
     + (occ_func_3_1(117))
     + (occ_func_3_1(155))
     + (occ_func_3_1(115))
     + (occ_func_3_1(151))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_17_at_1(int occ_i, int occ_f) const {
  // orbit_index: 17
  // function_index: 17
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(172))
     + (occ_func_2_1(124))
     + (occ_func_2_1(168))
     + (occ_func_2_1(122))
     + (occ_func_2_1(164))
     + (occ_func_2_1(120))
     + (occ_func_2_1(160))
     + (occ_func_2_1(118))
     + (occ_func_2_1(156))
     + (occ_func_2_1(116))
     + (occ_func_2_1(152))
     + (occ_func_2_1(114))
     + (occ_func_2_1(126))
     + (occ_func_2_1(176))
     + (occ_func_2_1(128))
     + (occ_func_2_1(180))
     + (occ_func_2_1(130))
     + (occ_func_2_1(184))
     + (occ_func_2_1(132))
     + (occ_func_2_1(188))
     + (occ_func_2_1(134))
     + (occ_func_2_1(192))
     + (occ_func_2_1(136))
     + (occ_func_2_1(196))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_18_at_0(int occ_i, int occ_f) const {
  // orbit_index: 18
  // function_index: 18
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(6)*occ_func_2_1(10))
     + (occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(6)*occ_func_2_1(2))
     + (occ_func_2_1(10)*occ_func_2_1(12))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_18_at_1(int occ_i, int occ_f) const {
  // orbit_index: 18
  // function_index: 18
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(11)*occ_func_3_1(7))
     + (occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(5)*occ_func_3_1(9))
     + (occ_func_3_1(11)*occ_func_3_1(13))
     + (occ_func_3_1(7)*occ_func_3_1(3))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_19_at_0(int occ_i, int occ_f) const {
  // orbit_index: 19
  // function_index: 19
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(7))
     + (occ_func_3_1(1)*occ_func_3_1(9))
     + (occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(5))
     + (occ_func_3_1(1)*occ_func_3_1(11))
     + (occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(3))
     + (occ_func_3_1(1)*occ_func_3_1(13))
     + (occ_func_3_1(15)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(43))
     + (occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(9))
     + (occ_func_3_1(15)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(47))
     + (occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(51))
     + (occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(13))
     + (occ_func_3_1(15)*occ_func_3_1(43))
     + (occ_func_3_1(15)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(39))
     + (occ_func_3_1(15)*occ_func_3_1(47))
     + (occ_func_3_1(15)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(35))
     + (occ_func_3_1(15)*occ_func_3_1(51))
     + (occ_func_3_1(15)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(31))
     + (occ_func_3_1(1)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_3_1(39))
     + (occ_func_3_1(1)*occ_func_3_1(5))
     + (occ_func_3_1(15)*occ_func_3_1(35))
     + (occ_func_3_1(1)*occ_func_3_1(3))
     + (occ_func_3_1(15)*occ_func_3_1(31))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_19_at_1(int occ_i, int occ_f) const {
  // orbit_index: 19
  // function_index: 19
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(8))
     + (occ_func_2_1(0)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(6))
     + (occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(0)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(4))
     + (occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_2_1(0)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(2))
     + (occ_func_2_1(16)*occ_func_2_1(40))
     + (occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_2_1(16)*occ_func_2_1(36))
     + (occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_2_1(32))
     + (occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(40))
     + (occ_func_2_1(16)*occ_func_2_1(44))
     + (occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(36))
     + (occ_func_2_1(16)*occ_func_2_1(48))
     + (occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(32))
     + (occ_func_2_1(16)*occ_func_2_1(52))
     + (occ_func_2_1(0)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(10))
     + (occ_func_2_1(16)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(48))
     + (occ_func_2_1(0)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(12))
     + (occ_func_2_1(16)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(52))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_20_at_0(int occ_i, int occ_f) const {
  // orbit_index: 20
  // function_index: 20
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43)*occ_func_3_1(51))
     + (occ_func_3_1(43)*occ_func_2_1(12))
     + (occ_func_3_1(35)*occ_func_2_1(2))
     + (occ_func_3_1(47)*occ_func_2_1(6))
     + (occ_func_3_1(51)*occ_func_2_1(8))
     + (occ_func_3_1(9)*occ_func_2_1(4))
     + (occ_func_3_1(13)*occ_func_2_1(10))
     + (occ_func_3_1(11)*occ_func_2_1(12))
     + (occ_func_3_1(7)*occ_func_2_1(2))
     + (occ_func_3_1(11)*occ_func_3_1(13))
     + (occ_func_3_1(31)*occ_func_3_1(35))
     + (occ_func_3_1(47)*occ_func_3_1(39))
     + (occ_func_3_1(31)*occ_func_2_1(4))
     + (occ_func_3_1(39)*occ_func_2_1(10))
     + (occ_func_3_1(3)*occ_func_2_1(6))
     + (occ_func_3_1(5)*occ_func_2_1(8))
     + (occ_func_3_1(9)*occ_func_3_1(5))
     + (occ_func_3_1(3)*occ_func_3_1(7))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_20_at_1(int occ_i, int occ_f) const {
  // orbit_index: 20
  // function_index: 20
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40)*occ_func_3_1(11))
     + (occ_func_2_1(32)*occ_func_3_1(5))
     + (occ_func_2_1(40)*occ_func_2_1(48))
     + (occ_func_2_1(36)*occ_func_2_1(32))
     + (occ_func_2_1(6)*occ_func_2_1(2))
     + (occ_func_2_1(4)*occ_func_2_1(8))
     + (occ_func_2_1(4)*occ_func_3_1(9))
     + (occ_func_2_1(2)*occ_func_3_1(7))
     + (occ_func_2_1(52)*occ_func_3_1(9))
     + (occ_func_2_1(48)*occ_func_3_1(7))
     + (occ_func_2_1(36)*occ_func_3_1(3))
     + (occ_func_2_1(44)*occ_func_3_1(13))
     + (occ_func_2_1(52)*occ_func_2_1(44))
     + (occ_func_2_1(12)*occ_func_2_1(10))
     + (occ_func_2_1(6)*occ_func_3_1(3))
     + (occ_func_2_1(10)*occ_func_3_1(13))
     + (occ_func_2_1(12)*occ_func_3_1(11))
     + (occ_func_2_1(8)*occ_func_3_1(5))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_21_at_0(int occ_i, int occ_f) const {
  // orbit_index: 21
  // function_index: 21
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8)*occ_func_3_1(13))
     + (occ_func_2_1(6)*occ_func_3_1(11))
     + (occ_func_2_1(2)*occ_func_3_1(5))
     + (occ_func_2_1(12)*occ_func_3_1(9))
     + (occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(51)*occ_func_3_1(47))
     + (occ_func_2_1(2)*occ_func_3_1(39))
     + (occ_func_2_1(12)*occ_func_3_1(47))
     + (occ_func_2_1(10)*occ_func_3_1(51))
     + (occ_func_2_1(4)*occ_func_3_1(43))
     + (occ_func_2_1(10)*occ_func_3_1(7))
     + (occ_func_2_1(4)*occ_func_3_1(3))
     + (occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(39)*occ_func_3_1(31))
     + (occ_func_3_1(35)*occ_func_3_1(43))
     + (occ_func_2_1(8)*occ_func_3_1(35))
     + (occ_func_2_1(6)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_21_at_1(int occ_i, int occ_f) const {
  // orbit_index: 21
  // function_index: 21
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_2_1(6))
     + (occ_func_3_1(5)*occ_func_2_1(2))
     + (occ_func_3_1(11)*occ_func_2_1(6))
     + (occ_func_3_1(7)*occ_func_2_1(32))
     + (occ_func_3_1(9)*occ_func_2_1(36))
     + (occ_func_2_1(44)*occ_func_2_1(36))
     + (occ_func_2_1(32)*occ_func_2_1(40))
     + (occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_3_1(13)*occ_func_2_1(8))
     + (occ_func_3_1(3)*occ_func_2_1(4))
     + (occ_func_3_1(7)*occ_func_2_1(10))
     + (occ_func_3_1(9)*occ_func_2_1(12))
     + (occ_func_3_1(5)*occ_func_2_1(44))
     + (occ_func_3_1(11)*occ_func_2_1(52))
     + (occ_func_3_1(13)*occ_func_2_1(48))
     + (occ_func_3_1(3)*occ_func_2_1(40))
     + (occ_func_2_1(48)*occ_func_2_1(52))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_22_at_0(int occ_i, int occ_f) const {
  // orbit_index: 22
  // function_index: 22
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(16))
     + (occ_func_2_1(14)*occ_func_3_1(15))
     + (occ_func_3_1(15)*occ_func_3_1(1))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_22_at_1(int occ_i, int occ_f) const {
  // orbit_index: 22
  // function_index: 22
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(16))
     + (occ_func_2_1(16)*occ_func_3_1(17))
     + (occ_func_3_1(15)*occ_func_2_1(0))
  ) / 2.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_23_at_0(int occ_i, int occ_f) const {
  // orbit_index: 23
  // function_index: 23
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_2_1(14)*occ_func_3_1(43))
     + (occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_2_1(14)*occ_func_3_1(47))
     + (occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_2_1(14)*occ_func_3_1(51))
     + (occ_func_3_1(43)*occ_func_3_1(9))
     + (occ_func_3_1(47)*occ_func_3_1(11))
     + (occ_func_3_1(51)*occ_func_3_1(13))
     + (occ_func_3_1(7)*occ_func_3_1(39))
     + (occ_func_3_1(35)*occ_func_3_1(5))
     + (occ_func_3_1(31)*occ_func_3_1(3))
     + (occ_func_2_1(16)*occ_func_3_1(7))
     + (occ_func_2_1(14)*occ_func_3_1(39))
     + (occ_func_2_1(16)*occ_func_3_1(5))
     + (occ_func_2_1(14)*occ_func_3_1(35))
     + (occ_func_2_1(16)*occ_func_3_1(3))
     + (occ_func_2_1(14)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_23_at_1(int occ_i, int occ_f) const {
  // orbit_index: 23
  // function_index: 23
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(6)*occ_func_2_1(40))
     + (occ_func_2_1(4)*occ_func_2_1(36))
     + (occ_func_2_1(2)*occ_func_2_1(32))
     + (occ_func_3_1(17)*occ_func_2_1(40))
     + (occ_func_3_1(15)*occ_func_2_1(6))
     + (occ_func_3_1(17)*occ_func_2_1(36))
     + (occ_func_3_1(15)*occ_func_2_1(4))
     + (occ_func_3_1(17)*occ_func_2_1(32))
     + (occ_func_3_1(15)*occ_func_2_1(2))
     + (occ_func_3_1(15)*occ_func_2_1(8))
     + (occ_func_3_1(17)*occ_func_2_1(44))
     + (occ_func_3_1(17)*occ_func_2_1(48))
     + (occ_func_3_1(15)*occ_func_2_1(10))
     + (occ_func_3_1(17)*occ_func_2_1(52))
     + (occ_func_3_1(15)*occ_func_2_1(12))
     + (occ_func_2_1(8)*occ_func_2_1(44))
     + (occ_func_2_1(10)*occ_func_2_1(48))
     + (occ_func_2_1(12)*occ_func_2_1(52))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_24_at_0(int occ_i, int occ_f) const {
  // orbit_index: 24
  // function_index: 24
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_2_1(6)*occ_func_2_1(24))
     + (occ_func_2_1(4)*occ_func_2_1(22))
     + (occ_func_2_1(6)*occ_func_2_1(12))
     + (occ_func_2_1(8)*occ_func_2_1(26))
     + (occ_func_2_1(2)*occ_func_2_1(20))
     + (occ_func_2_1(4)*occ_func_2_1(6))
     + (occ_func_2_1(10)*occ_func_2_1(24))
     + (occ_func_2_1(8)*occ_func_2_1(22))
     + (occ_func_2_1(12)*occ_func_2_1(4))
     + (occ_func_2_1(2)*occ_func_2_1(18))
     + (occ_func_2_1(10)*occ_func_2_1(28))
     + (occ_func_2_1(2)*occ_func_2_1(8))
     + (occ_func_2_1(12)*occ_func_2_1(26))
     + (occ_func_2_1(6)*occ_func_2_1(20))
     + (occ_func_2_1(10)*occ_func_2_1(2))
     + (occ_func_2_1(4)*occ_func_2_1(18))
     + (occ_func_2_1(12)*occ_func_2_1(28))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_24_at_1(int occ_i, int occ_f) const {
  // orbit_index: 24
  // function_index: 24
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_3_1(7)*occ_func_3_1(25))
     + (occ_func_3_1(5)*occ_func_3_1(23))
     + (occ_func_3_1(13)*occ_func_3_1(7))
     + (occ_func_3_1(3)*occ_func_3_1(21))
     + (occ_func_3_1(9)*occ_func_3_1(27))
     + (occ_func_3_1(7)*occ_func_3_1(5))
     + (occ_func_3_1(9)*occ_func_3_1(23))
     + (occ_func_3_1(11)*occ_func_3_1(25))
     + (occ_func_3_1(5)*occ_func_3_1(13))
     + (occ_func_3_1(11)*occ_func_3_1(29))
     + (occ_func_3_1(3)*occ_func_3_1(19))
     + (occ_func_3_1(9)*occ_func_3_1(3))
     + (occ_func_3_1(7)*occ_func_3_1(21))
     + (occ_func_3_1(13)*occ_func_3_1(27))
     + (occ_func_3_1(3)*occ_func_3_1(11))
     + (occ_func_3_1(13)*occ_func_3_1(29))
     + (occ_func_3_1(5)*occ_func_3_1(19))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_25_at_0(int occ_i, int occ_f) const {
  // orbit_index: 25
  // function_index: 25
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43)*occ_func_3_1(47))
     + (occ_func_3_1(43)*occ_func_2_1(26))
     + (occ_func_3_1(31)*occ_func_2_1(20))
     + (occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_3_1(3)*occ_func_2_1(20))
     + (occ_func_3_1(9)*occ_func_2_1(26))
     + (occ_func_3_1(47)*occ_func_2_1(24))
     + (occ_func_3_1(43)*occ_func_2_1(22))
     + (occ_func_3_1(9)*occ_func_2_1(22))
     + (occ_func_3_1(11)*occ_func_2_1(24))
     + (occ_func_3_1(31)*occ_func_2_1(18))
     + (occ_func_3_1(47)*occ_func_2_1(28))
     + (occ_func_3_1(11)*occ_func_2_1(28))
     + (occ_func_3_1(3)*occ_func_2_1(18))
     + (occ_func_3_1(51)*occ_func_2_1(26))
     + (occ_func_3_1(39)*occ_func_2_1(20))
     + (occ_func_3_1(35)*occ_func_2_1(18))
     + (occ_func_3_1(51)*occ_func_2_1(28))
     + (occ_func_3_1(7)*occ_func_2_1(20))
     + (occ_func_3_1(13)*occ_func_2_1(26))
     + (occ_func_3_1(13)*occ_func_2_1(28))
     + (occ_func_3_1(5)*occ_func_2_1(18))
     + (occ_func_3_1(5)*occ_func_2_1(22))
     + (occ_func_3_1(7)*occ_func_2_1(24))
     + (occ_func_3_1(13)*occ_func_3_1(7))
     + (occ_func_3_1(39)*occ_func_2_1(24))
     + (occ_func_3_1(35)*occ_func_2_1(22))
     + (occ_func_3_1(39)*occ_func_3_1(51))
     + (occ_func_3_1(7)*occ_func_3_1(5))
     + (occ_func_3_1(35)*occ_func_3_1(39))
     + (occ_func_3_1(5)*occ_func_3_1(13))
     + (occ_func_3_1(51)*occ_func_3_1(35))
     + (occ_func_3_1(9)*occ_func_3_1(3))
     + (occ_func_3_1(3)*occ_func_3_1(11))
     + (occ_func_3_1(31)*occ_func_3_1(43))
     + (occ_func_3_1(47)*occ_func_3_1(31))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_25_at_1(int occ_i, int occ_f) const {
  // orbit_index: 25
  // function_index: 25
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40)*occ_func_3_1(25))
     + (occ_func_2_1(36)*occ_func_3_1(23))
     + (occ_func_2_1(40)*occ_func_2_1(52))
     + (occ_func_2_1(4)*occ_func_3_1(23))
     + (occ_func_2_1(6)*occ_func_3_1(25))
     + (occ_func_2_1(12)*occ_func_2_1(6))
     + (occ_func_2_1(36)*occ_func_2_1(40))
     + (occ_func_2_1(6)*occ_func_2_1(4))
     + (occ_func_2_1(52)*occ_func_2_1(36))
     + (occ_func_2_1(4)*occ_func_2_1(12))
     + (occ_func_2_1(32)*occ_func_2_1(44))
     + (occ_func_2_1(48)*occ_func_2_1(32))
     + (occ_func_2_1(8)*occ_func_2_1(2))
     + (occ_func_2_1(2)*occ_func_2_1(10))
     + (occ_func_2_1(10)*occ_func_2_1(8))
     + (occ_func_2_1(2)*occ_func_3_1(21))
     + (occ_func_2_1(8)*occ_func_3_1(27))
     + (occ_func_2_1(44)*occ_func_2_1(48))
     + (occ_func_2_1(44)*occ_func_3_1(27))
     + (occ_func_2_1(32)*occ_func_3_1(21))
     + (occ_func_2_1(8)*occ_func_3_1(23))
     + (occ_func_2_1(10)*occ_func_3_1(25))
     + (occ_func_2_1(48)*occ_func_3_1(25))
     + (occ_func_2_1(44)*occ_func_3_1(23))
     + (occ_func_2_1(10)*occ_func_3_1(29))
     + (occ_func_2_1(2)*occ_func_3_1(19))
     + (occ_func_2_1(32)*occ_func_3_1(19))
     + (occ_func_2_1(48)*occ_func_3_1(29))
     + (occ_func_2_1(6)*occ_func_3_1(21))
     + (occ_func_2_1(12)*occ_func_3_1(27))
     + (occ_func_2_1(12)*occ_func_3_1(29))
     + (occ_func_2_1(4)*occ_func_3_1(19))
     + (occ_func_2_1(52)*occ_func_3_1(27))
     + (occ_func_2_1(40)*occ_func_3_1(21))
     + (occ_func_2_1(36)*occ_func_3_1(19))
     + (occ_func_2_1(52)*occ_func_3_1(29))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_26_at_0(int occ_i, int occ_f) const {
  // orbit_index: 26
  // function_index: 26
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(24)*occ_func_2_1(28))
     + (occ_func_2_1(22)*occ_func_2_1(26))
     + (occ_func_2_1(18)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_2_1(28))
     + (occ_func_2_1(20)*occ_func_2_1(24))
     + (occ_func_2_1(18)*occ_func_2_1(22))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_26_at_1(int occ_i, int occ_f) const {
  // orbit_index: 26
  // function_index: 26
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(25)*occ_func_3_1(29))
     + (occ_func_3_1(23)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_3_1(21))
     + (occ_func_3_1(29)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_3_1(23))
     + (occ_func_3_1(21)*occ_func_3_1(25))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_27_at_0(int occ_i, int occ_f) const {
  // orbit_index: 27
  // function_index: 27
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_3_1(43))
     + (occ_func_3_1(1)*occ_func_2_1(44))
     + (occ_func_3_1(39)*occ_func_2_1(38))
     + (occ_func_3_1(1)*occ_func_3_1(47))
     + (occ_func_3_1(1)*occ_func_2_1(48))
     + (occ_func_3_1(35)*occ_func_2_1(34))
     + (occ_func_3_1(1)*occ_func_3_1(51))
     + (occ_func_3_1(1)*occ_func_2_1(52))
     + (occ_func_3_1(31)*occ_func_2_1(30))
     + (occ_func_3_1(1)*occ_func_2_1(40))
     + (occ_func_3_1(43)*occ_func_2_1(42))
     + (occ_func_3_1(15)*occ_func_2_1(38))
     + (occ_func_3_1(9)*occ_func_2_1(44))
     + (occ_func_3_1(1)*occ_func_2_1(36))
     + (occ_func_3_1(47)*occ_func_2_1(46))
     + (occ_func_3_1(15)*occ_func_2_1(34))
     + (occ_func_3_1(11)*occ_func_2_1(48))
     + (occ_func_3_1(1)*occ_func_2_1(32))
     + (occ_func_3_1(51)*occ_func_2_1(50))
     + (occ_func_3_1(15)*occ_func_2_1(30))
     + (occ_func_3_1(13)*occ_func_2_1(52))
     + (occ_func_3_1(15)*occ_func_2_1(42))
     + (occ_func_3_1(7)*occ_func_2_1(40))
     + (occ_func_3_1(15)*occ_func_3_1(9))
     + (occ_func_3_1(15)*occ_func_2_1(46))
     + (occ_func_3_1(5)*occ_func_2_1(36))
     + (occ_func_3_1(15)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_2_1(50))
     + (occ_func_3_1(3)*occ_func_2_1(32))
     + (occ_func_3_1(15)*occ_func_3_1(13))
     + (occ_func_3_1(15)*occ_func_3_1(7))
     + (occ_func_3_1(1)*occ_func_3_1(39))
     + (occ_func_3_1(15)*occ_func_3_1(5))
     + (occ_func_3_1(1)*occ_func_3_1(35))
     + (occ_func_3_1(15)*occ_func_3_1(3))
     + (occ_func_3_1(1)*occ_func_3_1(31))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_27_at_1(int occ_i, int occ_f) const {
  // orbit_index: 27
  // function_index: 27
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_3_1(43))
     + (occ_func_2_1(40)*occ_func_3_1(41))
     + (occ_func_2_1(0)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_3_1(47))
     + (occ_func_2_1(36)*occ_func_3_1(37))
     + (occ_func_2_1(0)*occ_func_2_1(48))
     + (occ_func_2_1(0)*occ_func_3_1(51))
     + (occ_func_2_1(32)*occ_func_3_1(33))
     + (occ_func_2_1(0)*occ_func_2_1(52))
     + (occ_func_2_1(0)*occ_func_2_1(40))
     + (occ_func_2_1(16)*occ_func_2_1(6))
     + (occ_func_2_1(0)*occ_func_2_1(36))
     + (occ_func_2_1(16)*occ_func_2_1(4))
     + (occ_func_2_1(0)*occ_func_2_1(32))
     + (occ_func_2_1(16)*occ_func_2_1(2))
     + (occ_func_2_1(16)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_3_1(45))
     + (occ_func_2_1(6)*occ_func_3_1(39))
     + (occ_func_2_1(16)*occ_func_2_1(10))
     + (occ_func_2_1(16)*occ_func_3_1(49))
     + (occ_func_2_1(4)*occ_func_3_1(35))
     + (occ_func_2_1(16)*occ_func_2_1(12))
     + (occ_func_2_1(16)*occ_func_3_1(53))
     + (occ_func_2_1(2)*occ_func_3_1(31))
     + (occ_func_2_1(16)*occ_func_3_1(41))
     + (occ_func_2_1(8)*occ_func_3_1(43))
     + (occ_func_2_1(0)*occ_func_3_1(39))
     + (occ_func_2_1(44)*occ_func_3_1(45))
     + (occ_func_2_1(16)*occ_func_3_1(37))
     + (occ_func_2_1(10)*occ_func_3_1(47))
     + (occ_func_2_1(0)*occ_func_3_1(35))
     + (occ_func_2_1(48)*occ_func_3_1(49))
     + (occ_func_2_1(16)*occ_func_3_1(33))
     + (occ_func_2_1(12)*occ_func_3_1(51))
     + (occ_func_2_1(0)*occ_func_3_1(31))
     + (occ_func_2_1(52)*occ_func_3_1(53))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_28_at_0(int occ_i, int occ_f) const {
  // orbit_index: 28
  // function_index: 28
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_3_1(51))
     + (occ_func_2_1(40)*occ_func_3_1(11))
     + (occ_func_2_1(50)*occ_func_3_1(43))
     + (occ_func_2_1(32)*occ_func_3_1(5))
     + (occ_func_3_1(43)*occ_func_3_1(13))
     + (occ_func_3_1(51)*occ_func_3_1(9))
     + (occ_func_2_1(30)*occ_func_3_1(35))
     + (occ_func_2_1(52)*occ_func_3_1(9))
     + (occ_func_2_1(38)*occ_func_3_1(47))
     + (occ_func_2_1(44)*occ_func_3_1(13))
     + (occ_func_2_1(36)*occ_func_3_1(9))
     + (occ_func_2_1(46)*occ_func_3_1(51))
     + (occ_func_2_1(32)*occ_func_3_1(7))
     + (occ_func_2_1(50)*occ_func_3_1(47))
     + (occ_func_3_1(13)*occ_func_3_1(47))
     + (occ_func_3_1(11)*occ_func_3_1(51))
     + (occ_func_2_1(52)*occ_func_3_1(11))
     + (occ_func_2_1(30)*occ_func_3_1(39))
     + (occ_func_2_1(48)*occ_func_3_1(13))
     + (occ_func_2_1(34)*occ_func_3_1(43))
     + (occ_func_3_1(35)*occ_func_3_1(3))
     + (occ_func_3_1(47)*occ_func_3_1(7))
     + (occ_func_2_1(34)*occ_func_3_1(31))
     + (occ_func_2_1(48)*occ_func_3_1(7))
     + (occ_func_2_1(46)*occ_func_3_1(39))
     + (occ_func_2_1(36)*occ_func_3_1(3))
     + (occ_func_3_1(39)*occ_func_3_1(11))
     + (occ_func_3_1(31)*occ_func_3_1(5))
     + (occ_func_3_1(3)*occ_func_3_1(39))
     + (occ_func_3_1(5)*occ_func_3_1(43))
     + (occ_func_2_1(44)*occ_func_3_1(5))
     + (occ_func_2_1(38)*occ_func_3_1(31))
     + (occ_func_2_1(40)*occ_func_3_1(3))
     + (occ_func_2_1(42)*occ_func_3_1(35))
     + (occ_func_3_1(9)*occ_func_3_1(35))
     + (occ_func_3_1(7)*occ_func_3_1(31))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_28_at_1(int occ_i, int occ_f) const {
  // orbit_index: 28
  // function_index: 28
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(32)*occ_func_2_1(4))
     + (occ_func_2_1(40)*occ_func_2_1(10))
     + (occ_func_3_1(49)*occ_func_2_1(40))
     + (occ_func_3_1(35)*occ_func_2_1(2))
     + (occ_func_3_1(37)*occ_func_2_1(32))
     + (occ_func_3_1(47)*occ_func_2_1(6))
     + (occ_func_2_1(48)*occ_func_2_1(6))
     + (occ_func_2_1(36)*occ_func_2_1(2))
     + (occ_func_2_1(6)*occ_func_2_1(32))
     + (occ_func_2_1(8)*occ_func_2_1(36))
     + (occ_func_3_1(39)*occ_func_2_1(2))
     + (occ_func_3_1(45)*occ_func_2_1(36))
     + (occ_func_3_1(43)*occ_func_2_1(4))
     + (occ_func_3_1(41)*occ_func_2_1(32))
     + (occ_func_2_1(4)*occ_func_2_1(44))
     + (occ_func_2_1(2)*occ_func_2_1(40))
     + (occ_func_3_1(41)*occ_func_2_1(48))
     + (occ_func_3_1(43)*occ_func_2_1(12))
     + (occ_func_3_1(33)*occ_func_2_1(36))
     + (occ_func_3_1(51)*occ_func_2_1(8))
     + (occ_func_2_1(52)*occ_func_2_1(8))
     + (occ_func_2_1(44)*occ_func_2_1(12))
     + (occ_func_3_1(53)*occ_func_2_1(44))
     + (occ_func_3_1(31)*occ_func_2_1(4))
     + (occ_func_3_1(45)*occ_func_2_1(52))
     + (occ_func_3_1(39)*occ_func_2_1(10))
     + (occ_func_3_1(47)*occ_func_2_1(12))
     + (occ_func_3_1(37)*occ_func_2_1(44))
     + (occ_func_3_1(51)*occ_func_2_1(10))
     + (occ_func_3_1(33)*occ_func_2_1(40))
     + (occ_func_2_1(10)*occ_func_2_1(52))
     + (occ_func_2_1(12)*occ_func_2_1(48))
     + (occ_func_3_1(31)*occ_func_2_1(6))
     + (occ_func_3_1(53)*occ_func_2_1(48))
     + (occ_func_3_1(35)*occ_func_2_1(8))
     + (occ_func_3_1(49)*occ_func_2_1(52))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_29_at_0(int occ_i, int occ_f) const {
  // orbit_index: 29
  // function_index: 29
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(16)*occ_func_2_1(8))
     + (occ_func_2_1(14)*occ_func_2_1(42))
     + (occ_func_2_1(6)*occ_func_2_1(40))
     + (occ_func_2_1(14)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_2_1(44))
     + (occ_func_2_1(6)*occ_func_2_1(38))
     + (occ_func_2_1(16)*occ_func_2_1(10))
     + (occ_func_2_1(14)*occ_func_2_1(46))
     + (occ_func_2_1(4)*occ_func_2_1(36))
     + (occ_func_2_1(14)*occ_func_2_1(10))
     + (occ_func_2_1(16)*occ_func_2_1(48))
     + (occ_func_2_1(4)*occ_func_2_1(34))
     + (occ_func_2_1(16)*occ_func_2_1(12))
     + (occ_func_2_1(14)*occ_func_2_1(50))
     + (occ_func_2_1(2)*occ_func_2_1(32))
     + (occ_func_2_1(14)*occ_func_2_1(12))
     + (occ_func_2_1(16)*occ_func_2_1(52))
     + (occ_func_2_1(2)*occ_func_2_1(30))
     + (occ_func_2_1(14)*occ_func_2_1(6))
     + (occ_func_2_1(16)*occ_func_2_1(40))
     + (occ_func_2_1(8)*occ_func_2_1(42))
     + (occ_func_2_1(16)*occ_func_2_1(6))
     + (occ_func_2_1(14)*occ_func_2_1(38))
     + (occ_func_2_1(8)*occ_func_2_1(44))
     + (occ_func_2_1(14)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_2_1(36))
     + (occ_func_2_1(10)*occ_func_2_1(46))
     + (occ_func_2_1(16)*occ_func_2_1(4))
     + (occ_func_2_1(14)*occ_func_2_1(34))
     + (occ_func_2_1(10)*occ_func_2_1(48))
     + (occ_func_2_1(14)*occ_func_2_1(2))
     + (occ_func_2_1(16)*occ_func_2_1(32))
     + (occ_func_2_1(12)*occ_func_2_1(50))
     + (occ_func_2_1(16)*occ_func_2_1(2))
     + (occ_func_2_1(14)*occ_func_2_1(30))
     + (occ_func_2_1(12)*occ_func_2_1(52))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_29_at_1(int occ_i, int occ_f) const {
  // orbit_index: 29
  // function_index: 29
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(17)*occ_func_3_1(9))
     + (occ_func_3_1(15)*occ_func_3_1(43))
     + (occ_func_3_1(7)*occ_func_3_1(41))
     + (occ_func_3_1(15)*occ_func_3_1(9))
     + (occ_func_3_1(17)*occ_func_3_1(45))
     + (occ_func_3_1(7)*occ_func_3_1(39))
     + (occ_func_3_1(17)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_3_1(47))
     + (occ_func_3_1(5)*occ_func_3_1(37))
     + (occ_func_3_1(15)*occ_func_3_1(11))
     + (occ_func_3_1(17)*occ_func_3_1(49))
     + (occ_func_3_1(5)*occ_func_3_1(35))
     + (occ_func_3_1(17)*occ_func_3_1(13))
     + (occ_func_3_1(15)*occ_func_3_1(51))
     + (occ_func_3_1(3)*occ_func_3_1(33))
     + (occ_func_3_1(15)*occ_func_3_1(13))
     + (occ_func_3_1(17)*occ_func_3_1(53))
     + (occ_func_3_1(3)*occ_func_3_1(31))
     + (occ_func_3_1(15)*occ_func_3_1(7))
     + (occ_func_3_1(17)*occ_func_3_1(41))
     + (occ_func_3_1(9)*occ_func_3_1(43))
     + (occ_func_3_1(17)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_3_1(39))
     + (occ_func_3_1(9)*occ_func_3_1(45))
     + (occ_func_3_1(15)*occ_func_3_1(5))
     + (occ_func_3_1(17)*occ_func_3_1(37))
     + (occ_func_3_1(11)*occ_func_3_1(47))
     + (occ_func_3_1(17)*occ_func_3_1(5))
     + (occ_func_3_1(15)*occ_func_3_1(35))
     + (occ_func_3_1(11)*occ_func_3_1(49))
     + (occ_func_3_1(15)*occ_func_3_1(3))
     + (occ_func_3_1(17)*occ_func_3_1(33))
     + (occ_func_3_1(13)*occ_func_3_1(51))
     + (occ_func_3_1(17)*occ_func_3_1(3))
     + (occ_func_3_1(15)*occ_func_3_1(31))
     + (occ_func_3_1(13)*occ_func_3_1(53))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_30_at_0(int occ_i, int occ_f) const {
  // orbit_index: 30
  // function_index: 30
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_2_1(50))
     + (occ_func_2_1(40)*occ_func_2_1(10))
     + (occ_func_2_1(32)*occ_func_2_1(4))
     + (occ_func_2_1(30)*occ_func_2_1(34))
     + (occ_func_2_1(52)*occ_func_2_1(8))
     + (occ_func_2_1(48)*occ_func_2_1(6))
     + (occ_func_2_1(46)*occ_func_2_1(38))
     + (occ_func_2_1(36)*occ_func_2_1(2))
     + (occ_func_2_1(44)*occ_func_2_1(12))
     + (occ_func_2_1(44)*occ_func_2_1(36))
     + (occ_func_2_1(38)*occ_func_2_1(2))
     + (occ_func_2_1(46)*occ_func_2_1(12))
     + (occ_func_2_1(32)*occ_func_2_1(40))
     + (occ_func_2_1(50)*occ_func_2_1(10))
     + (occ_func_2_1(42)*occ_func_2_1(4))
     + (occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_2_1(34)*occ_func_2_1(8))
     + (occ_func_2_1(30)*occ_func_2_1(6))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_30_at_1(int occ_i, int occ_f) const {
  // orbit_index: 30
  // function_index: 30
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(41)*occ_func_3_1(49))
     + (occ_func_3_1(43)*occ_func_3_1(13))
     + (occ_func_3_1(35)*occ_func_3_1(3))
     + (occ_func_3_1(37)*occ_func_3_1(33))
     + (occ_func_3_1(47)*occ_func_3_1(7))
     + (occ_func_3_1(51)*occ_func_3_1(9))
     + (occ_func_3_1(53)*occ_func_3_1(45))
     + (occ_func_3_1(31)*occ_func_3_1(5))
     + (occ_func_3_1(39)*occ_func_3_1(11))
     + (occ_func_3_1(51)*occ_func_3_1(47))
     + (occ_func_3_1(33)*occ_func_3_1(7))
     + (occ_func_3_1(37)*occ_func_3_1(9))
     + (occ_func_3_1(39)*occ_func_3_1(31))
     + (occ_func_3_1(45)*occ_func_3_1(5))
     + (occ_func_3_1(53)*occ_func_3_1(11))
     + (occ_func_3_1(35)*occ_func_3_1(43))
     + (occ_func_3_1(49)*occ_func_3_1(13))
     + (occ_func_3_1(41)*occ_func_3_1(3))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_31_at_0(int occ_i, int occ_f) const {
  // orbit_index: 31
  // function_index: 31
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_2_1(12))
     + (occ_func_2_1(40)*occ_func_2_1(48))
     + (occ_func_2_1(2)*occ_func_2_1(34))
     + (occ_func_2_1(46)*occ_func_2_1(6))
     + (occ_func_2_1(36)*occ_func_2_1(32))
     + (occ_func_2_1(8)*occ_func_2_1(50))
     + (occ_func_2_1(30)*occ_func_2_1(4))
     + (occ_func_2_1(52)*occ_func_2_1(44))
     + (occ_func_2_1(10)*occ_func_2_1(38))
     + (occ_func_2_1(32)*occ_func_2_1(6))
     + (occ_func_2_1(50)*occ_func_2_1(46))
     + (occ_func_2_1(8)*occ_func_2_1(36))
     + (occ_func_2_1(44)*occ_func_2_1(4))
     + (occ_func_2_1(38)*occ_func_2_1(30))
     + (occ_func_2_1(10)*occ_func_2_1(52))
     + (occ_func_2_1(48)*occ_func_2_1(12))
     + (occ_func_2_1(34)*occ_func_2_1(42))
     + (occ_func_2_1(2)*occ_func_2_1(40))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_31_at_1(int occ_i, int occ_f) const {
  // orbit_index: 31
  // function_index: 31
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(41)*occ_func_3_1(11))
     + (occ_func_3_1(43)*occ_func_3_1(51))
     + (occ_func_3_1(5)*occ_func_3_1(33))
     + (occ_func_3_1(53)*occ_func_3_1(9))
     + (occ_func_3_1(31)*occ_func_3_1(35))
     + (occ_func_3_1(7)*occ_func_3_1(49))
     + (occ_func_3_1(37)*occ_func_3_1(3))
     + (occ_func_3_1(47)*occ_func_3_1(39))
     + (occ_func_3_1(13)*occ_func_3_1(45))
     + (occ_func_3_1(39)*occ_func_3_1(3))
     + (occ_func_3_1(45)*occ_func_3_1(37))
     + (occ_func_3_1(13)*occ_func_3_1(47))
     + (occ_func_3_1(51)*occ_func_3_1(11))
     + (occ_func_3_1(33)*occ_func_3_1(41))
     + (occ_func_3_1(5)*occ_func_3_1(43))
     + (occ_func_3_1(35)*occ_func_3_1(9))
     + (occ_func_3_1(49)*occ_func_3_1(53))
     + (occ_func_3_1(7)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_32_at_0(int occ_i, int occ_f) const {
  // orbit_index: 32
  // function_index: 32
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_2_1(46))
     + (occ_func_2_1(40)*occ_func_2_1(24))
     + (occ_func_2_1(36)*occ_func_2_1(22))
     + (occ_func_2_1(52)*occ_func_2_1(40))
     + (occ_func_2_1(30)*occ_func_2_1(20))
     + (occ_func_2_1(42)*occ_func_2_1(26))
     + (occ_func_2_1(48)*occ_func_2_1(44))
     + (occ_func_2_1(34)*occ_func_2_1(22))
     + (occ_func_2_1(38)*occ_func_2_1(24))
     + (occ_func_2_1(38)*occ_func_2_1(50))
     + (occ_func_2_1(44)*occ_func_2_1(26))
     + (occ_func_2_1(32)*occ_func_2_1(20))
     + (occ_func_2_1(40)*occ_func_2_1(36))
     + (occ_func_2_1(42)*occ_func_2_1(22))
     + (occ_func_2_1(46)*occ_func_2_1(24))
     + (occ_func_2_1(34)*occ_func_2_1(38))
     + (occ_func_2_1(48)*occ_func_2_1(24))
     + (occ_func_2_1(44)*occ_func_2_1(22))
     + (occ_func_2_1(36)*occ_func_2_1(52))
     + (occ_func_2_1(46)*occ_func_2_1(28))
     + (occ_func_2_1(30)*occ_func_2_1(18))
     + (occ_func_2_1(50)*occ_func_2_1(34))
     + (occ_func_2_1(32)*occ_func_2_1(18))
     + (occ_func_2_1(48)*occ_func_2_1(28))
     + (occ_func_2_1(44)*occ_func_2_1(32))
     + (occ_func_2_1(38)*occ_func_2_1(20))
     + (occ_func_2_1(50)*occ_func_2_1(26))
     + (occ_func_2_1(32)*occ_func_2_1(48))
     + (occ_func_2_1(50)*occ_func_2_1(28))
     + (occ_func_2_1(34)*occ_func_2_1(18))
     + (occ_func_2_1(30)*occ_func_2_1(42))
     + (occ_func_2_1(52)*occ_func_2_1(26))
     + (occ_func_2_1(40)*occ_func_2_1(20))
     + (occ_func_2_1(46)*occ_func_2_1(30))
     + (occ_func_2_1(36)*occ_func_2_1(18))
     + (occ_func_2_1(52)*occ_func_2_1(28))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_32_at_1(int occ_i, int occ_f) const {
  // orbit_index: 32
  // function_index: 32
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(47)*occ_func_3_1(43))
     + (occ_func_3_1(37)*occ_func_3_1(23))
     + (occ_func_3_1(41)*occ_func_3_1(25))
     + (occ_func_3_1(41)*occ_func_3_1(53))
     + (occ_func_3_1(43)*occ_func_3_1(27))
     + (occ_func_3_1(31)*occ_func_3_1(21))
     + (occ_func_3_1(45)*occ_func_3_1(49))
     + (occ_func_3_1(39)*occ_func_3_1(25))
     + (occ_func_3_1(35)*occ_func_3_1(23))
     + (occ_func_3_1(51)*occ_func_3_1(39))
     + (occ_func_3_1(33)*occ_func_3_1(21))
     + (occ_func_3_1(45)*occ_func_3_1(27))
     + (occ_func_3_1(37)*occ_func_3_1(41))
     + (occ_func_3_1(47)*occ_func_3_1(25))
     + (occ_func_3_1(43)*occ_func_3_1(23))
     + (occ_func_3_1(39)*occ_func_3_1(35))
     + (occ_func_3_1(45)*occ_func_3_1(23))
     + (occ_func_3_1(49)*occ_func_3_1(25))
     + (occ_func_3_1(53)*occ_func_3_1(37))
     + (occ_func_3_1(31)*occ_func_3_1(19))
     + (occ_func_3_1(47)*occ_func_3_1(29))
     + (occ_func_3_1(35)*occ_func_3_1(51))
     + (occ_func_3_1(49)*occ_func_3_1(29))
     + (occ_func_3_1(33)*occ_func_3_1(19))
     + (occ_func_3_1(33)*occ_func_3_1(45))
     + (occ_func_3_1(51)*occ_func_3_1(27))
     + (occ_func_3_1(39)*occ_func_3_1(21))
     + (occ_func_3_1(49)*occ_func_3_1(33))
     + (occ_func_3_1(35)*occ_func_3_1(19))
     + (occ_func_3_1(51)*occ_func_3_1(29))
     + (occ_func_3_1(43)*occ_func_3_1(31))
     + (occ_func_3_1(41)*occ_func_3_1(21))
     + (occ_func_3_1(53)*occ_func_3_1(27))
     + (occ_func_3_1(31)*occ_func_3_1(47))
     + (occ_func_3_1(53)*occ_func_3_1(29))
     + (occ_func_3_1(37)*occ_func_3_1(19))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_33_at_0(int occ_i, int occ_f) const {
  // orbit_index: 33
  // function_index: 33
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(75))
     + (occ_func_3_1(43)*occ_func_3_1(83))
     + (occ_func_3_1(11)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(25))
     + (occ_func_3_1(13)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(27))
     + (occ_func_3_1(47)*occ_func_3_1(79))
     + (occ_func_3_1(7)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(25))
     + (occ_func_3_1(51)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(87))
     + (occ_func_3_1(11)*occ_func_3_1(29))
     + (occ_func_3_1(51)*occ_func_3_1(83))
     + (occ_func_3_1(9)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(27))
     + (occ_func_3_1(47)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(87))
     + (occ_func_3_1(13)*occ_func_3_1(29))
     + (occ_func_3_1(5)*occ_func_3_1(23))
     + (occ_func_3_1(3)*occ_func_3_1(21))
     + (occ_func_3_1(39)*occ_func_3_1(79))
     + (occ_func_3_1(39)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(71))
     + (occ_func_3_1(9)*occ_func_3_1(23))
     + (occ_func_3_1(35)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(75))
     + (occ_func_3_1(5)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(19))
     + (occ_func_3_1(31)*occ_func_3_1(67))
     + (occ_func_3_1(3)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(19))
     + (occ_func_3_1(7)*occ_func_3_1(21))
     + (occ_func_3_1(35)*occ_func_3_1(67))
     + (occ_func_3_1(31)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(71))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_33_at_1(int occ_i, int occ_f) const {
  // orbit_index: 33
  // function_index: 33
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40)*occ_func_2_1(80))
     + (occ_func_2_1(40)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(72))
     + (occ_func_2_1(4)*occ_func_2_1(22))
     + (occ_func_2_1(2)*occ_func_2_1(20))
     + (occ_func_2_1(36)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(76))
     + (occ_func_2_1(8)*occ_func_2_1(22))
     + (occ_func_2_1(32)*occ_func_2_1(68))
     + (occ_func_2_1(4)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(18))
     + (occ_func_2_1(32)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(72))
     + (occ_func_2_1(6)*occ_func_2_1(20))
     + (occ_func_2_1(36)*occ_func_2_1(68))
     + (occ_func_2_1(2)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(18))
     + (occ_func_2_1(10)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(24))
     + (occ_func_2_1(12)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(26))
     + (occ_func_2_1(44)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(76))
     + (occ_func_2_1(44)*occ_func_2_1(84))
     + (occ_func_2_1(6)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(24))
     + (occ_func_2_1(48)*occ_func_2_1(80))
     + (occ_func_2_1(10)*occ_func_2_1(28))
     + (occ_func_2_1(52)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(88))
     + (occ_func_2_1(12)*occ_func_2_1(28))
     + (occ_func_2_1(8)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(26))
     + (occ_func_2_1(48)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(88))
     + (occ_func_2_1(52)*occ_func_2_1(84))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_34_at_0(int occ_i, int occ_f) const {
  // orbit_index: 34
  // function_index: 34
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8)*occ_func_3_1(47))
     + (occ_func_2_1(6)*occ_func_3_1(79))
     + (occ_func_2_1(6)*occ_func_3_1(51))
     + (occ_func_2_1(8)*occ_func_3_1(83))
     + (occ_func_2_1(10)*occ_func_3_1(9))
     + (occ_func_2_1(4)*occ_func_3_1(23))
     + (occ_func_3_1(9)*occ_func_3_1(27))
     + (occ_func_2_1(4)*occ_func_3_1(39))
     + (occ_func_2_1(10)*occ_func_3_1(79))
     + (occ_func_3_1(11)*occ_func_3_1(25))
     + (occ_func_3_1(47)*occ_func_3_1(87))
     + (occ_func_2_1(4)*occ_func_3_1(13))
     + (occ_func_2_1(10)*occ_func_3_1(29))
     + (occ_func_3_1(51)*occ_func_3_1(87))
     + (occ_func_2_1(2)*occ_func_3_1(43))
     + (occ_func_2_1(12)*occ_func_3_1(83))
     + (occ_func_2_1(2)*occ_func_3_1(11))
     + (occ_func_2_1(12)*occ_func_3_1(29))
     + (occ_func_3_1(13)*occ_func_3_1(27))
     + (occ_func_3_1(7)*occ_func_3_1(25))
     + (occ_func_2_1(12)*occ_func_3_1(7))
     + (occ_func_2_1(2)*occ_func_3_1(21))
     + (occ_func_3_1(35)*occ_func_3_1(75))
     + (occ_func_3_1(31)*occ_func_3_1(71))
     + (occ_func_2_1(6)*occ_func_3_1(5))
     + (occ_func_2_1(8)*occ_func_3_1(23))
     + (occ_func_3_1(43)*occ_func_3_1(75))
     + (occ_func_3_1(3)*occ_func_3_1(19))
     + (occ_func_2_1(12)*occ_func_3_1(35))
     + (occ_func_2_1(2)*occ_func_3_1(67))
     + (occ_func_2_1(8)*occ_func_3_1(3))
     + (occ_func_2_1(6)*occ_func_3_1(21))
     + (occ_func_3_1(39)*occ_func_3_1(71))
     + (occ_func_3_1(5)*occ_func_3_1(19))
     + (occ_func_2_1(10)*occ_func_3_1(31))
     + (occ_func_2_1(4)*occ_func_3_1(67))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_34_at_1(int occ_i, int occ_f) const {
  // orbit_index: 34
  // function_index: 34
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(36)*occ_func_2_1(76))
     + (occ_func_2_1(32)*occ_func_2_1(72))
     + (occ_func_2_1(6)*occ_func_2_1(24))
     + (occ_func_3_1(13)*occ_func_2_1(6))
     + (occ_func_3_1(3)*occ_func_2_1(20))
     + (occ_func_2_1(44)*occ_func_2_1(76))
     + (occ_func_3_1(7)*occ_func_2_1(4))
     + (occ_func_3_1(9)*occ_func_2_1(22))
     + (occ_func_3_1(13)*occ_func_2_1(36))
     + (occ_func_3_1(3)*occ_func_2_1(68))
     + (occ_func_2_1(2)*occ_func_2_1(18))
     + (occ_func_3_1(11)*occ_func_2_1(32))
     + (occ_func_3_1(5)*occ_func_2_1(68))
     + (occ_func_2_1(40)*occ_func_2_1(72))
     + (occ_func_2_1(4)*occ_func_2_1(18))
     + (occ_func_3_1(9)*occ_func_2_1(2))
     + (occ_func_3_1(7)*occ_func_2_1(20))
     + (occ_func_3_1(11)*occ_func_2_1(8))
     + (occ_func_3_1(5)*occ_func_2_1(22))
     + (occ_func_2_1(8)*occ_func_2_1(26))
     + (occ_func_3_1(9)*occ_func_2_1(48))
     + (occ_func_3_1(7)*occ_func_2_1(80))
     + (occ_func_3_1(7)*occ_func_2_1(52))
     + (occ_func_3_1(9)*occ_func_2_1(84))
     + (occ_func_2_1(10)*occ_func_2_1(24))
     + (occ_func_3_1(5)*occ_func_2_1(40))
     + (occ_func_3_1(11)*occ_func_2_1(80))
     + (occ_func_3_1(5)*occ_func_2_1(12))
     + (occ_func_3_1(11)*occ_func_2_1(28))
     + (occ_func_2_1(48)*occ_func_2_1(88))
     + (occ_func_2_1(12)*occ_func_2_1(26))
     + (occ_func_3_1(3)*occ_func_2_1(44))
     + (occ_func_3_1(13)*occ_func_2_1(84))
     + (occ_func_3_1(3)*occ_func_2_1(10))
     + (occ_func_3_1(13)*occ_func_2_1(28))
     + (occ_func_2_1(52)*occ_func_2_1(88))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_35_at_0(int occ_i, int occ_f) const {
  // orbit_index: 35
  // function_index: 35
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(23))
     + (occ_func_3_1(1)*occ_func_3_1(25))
     + (occ_func_3_1(1)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(21))
     + (occ_func_3_1(1)*occ_func_3_1(27))
     + (occ_func_3_1(15)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(79))
     + (occ_func_3_1(15)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(83))
     + (occ_func_3_1(1)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(29))
     + (occ_func_3_1(15)*occ_func_3_1(87))
     + (occ_func_3_1(15)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(67))
     + (occ_func_3_1(15)*occ_func_3_1(75))
     + (occ_func_3_1(15)*occ_func_3_1(71))
     + (occ_func_3_1(1)*occ_func_3_1(19))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_35_at_1(int occ_i, int occ_f) const {
  // orbit_index: 35
  // function_index: 35
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(24))
     + (occ_func_2_1(0)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(22))
     + (occ_func_2_1(0)*occ_func_2_1(26))
     + (occ_func_2_1(0)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(20))
     + (occ_func_2_1(16)*occ_func_2_1(76))
     + (occ_func_2_1(16)*occ_func_2_1(72))
     + (occ_func_2_1(0)*occ_func_2_1(18))
     + (occ_func_2_1(16)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(68))
     + (occ_func_2_1(16)*occ_func_2_1(88))
     + (occ_func_2_1(16)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(80))
     + (occ_func_2_1(16)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(84))
     + (occ_func_2_1(0)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(28))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_36_at_0(int occ_i, int occ_f) const {
  // orbit_index: 36
  // function_index: 36
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(19))
     + (occ_func_3_1(1)*occ_func_3_1(29))
     + (occ_func_3_1(1)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(25))
     + (occ_func_3_1(1)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(27))
     + (occ_func_3_1(15)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(87))
     + (occ_func_3_1(15)*occ_func_3_1(79))
     + (occ_func_3_1(15)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(75))
     + (occ_func_3_1(15)*occ_func_3_1(83))
     + (occ_func_3_1(15)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(71))
     + (occ_func_3_1(1)*occ_func_3_1(23))
     + (occ_func_3_1(1)*occ_func_3_1(21))
     + (occ_func_3_1(15)*occ_func_3_1(67))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_36_at_1(int occ_i, int occ_f) const {
  // orbit_index: 36
  // function_index: 36
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(28))
     + (occ_func_2_1(0)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(18))
     + (occ_func_2_1(0)*occ_func_2_1(22))
     + (occ_func_2_1(0)*occ_func_2_1(20))
     + (occ_func_2_1(16)*occ_func_2_1(68))
     + (occ_func_2_1(16)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(76))
     + (occ_func_2_1(16)*occ_func_2_1(80))
     + (occ_func_2_1(16)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(72))
     + (occ_func_2_1(16)*occ_func_2_1(84))
     + (occ_func_2_1(0)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(24))
     + (occ_func_2_1(0)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(26))
     + (occ_func_2_1(16)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(88))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_37_at_0(int occ_i, int occ_f) const {
  // orbit_index: 37
  // function_index: 37
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_3_1(83))
     + (occ_func_2_1(40)*occ_func_3_1(13))
     + (occ_func_2_1(36)*occ_func_3_1(23))
     + (occ_func_2_1(46)*occ_func_3_1(43))
     + (occ_func_3_1(27)*occ_func_3_1(43))
     + (occ_func_2_1(38)*occ_func_3_1(79))
     + (occ_func_2_1(44)*occ_func_3_1(11))
     + (occ_func_2_1(46)*occ_func_3_1(79))
     + (occ_func_2_1(36)*occ_func_3_1(7))
     + (occ_func_3_1(25)*occ_func_3_1(47))
     + (occ_func_3_1(87)*occ_func_3_1(11))
     + (occ_func_2_1(48)*occ_func_3_1(29))
     + (occ_func_2_1(34)*occ_func_3_1(51))
     + (occ_func_2_1(50)*occ_func_3_1(83))
     + (occ_func_2_1(32)*occ_func_3_1(9))
     + (occ_func_3_1(27)*occ_func_3_1(51))
     + (occ_func_3_1(87)*occ_func_3_1(13))
     + (occ_func_2_1(52)*occ_func_3_1(29))
     + (occ_func_2_1(30)*occ_func_3_1(47))
     + (occ_func_3_1(75)*occ_func_3_1(5))
     + (occ_func_3_1(25)*occ_func_3_1(39))
     + (occ_func_2_1(32)*occ_func_3_1(21))
     + (occ_func_2_1(50)*occ_func_3_1(39))
     + (occ_func_3_1(71)*occ_func_3_1(3))
     + (occ_func_2_1(44)*occ_func_3_1(23))
     + (occ_func_2_1(38)*occ_func_3_1(35))
     + (occ_func_3_1(75)*occ_func_3_1(9))
     + (occ_func_3_1(19)*occ_func_3_1(31))
     + (occ_func_2_1(30)*occ_func_3_1(67))
     + (occ_func_2_1(52)*occ_func_3_1(5))
     + (occ_func_3_1(19)*occ_func_3_1(35))
     + (occ_func_2_1(34)*occ_func_3_1(67))
     + (occ_func_2_1(48)*occ_func_3_1(3))
     + (occ_func_2_1(40)*occ_func_3_1(21))
     + (occ_func_2_1(42)*occ_func_3_1(31))
     + (occ_func_3_1(71)*occ_func_3_1(7))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_37_at_1(int occ_i, int occ_f) const {
  // orbit_index: 37
  // function_index: 37
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(72)*occ_func_2_1(2))
     + (occ_func_2_1(24)*occ_func_2_1(40))
     + (occ_func_3_1(31)*occ_func_2_1(20))
     + (occ_func_3_1(53)*occ_func_2_1(40))
     + (occ_func_2_1(76)*occ_func_2_1(4))
     + (occ_func_2_1(76)*occ_func_2_1(8))
     + (occ_func_3_1(43)*occ_func_2_1(22))
     + (occ_func_3_1(41)*occ_func_2_1(36))
     + (occ_func_3_1(33)*occ_func_2_1(68))
     + (occ_func_3_1(51)*occ_func_2_1(4))
     + (occ_func_2_1(18)*occ_func_2_1(32))
     + (occ_func_2_1(72)*occ_func_2_1(6))
     + (occ_func_3_1(39)*occ_func_2_1(20))
     + (occ_func_3_1(45)*occ_func_2_1(32))
     + (occ_func_3_1(37)*occ_func_2_1(68))
     + (occ_func_3_1(47)*occ_func_2_1(2))
     + (occ_func_2_1(18)*occ_func_2_1(36))
     + (occ_func_3_1(41)*occ_func_2_1(80))
     + (occ_func_3_1(43)*occ_func_2_1(10))
     + (occ_func_3_1(35)*occ_func_2_1(22))
     + (occ_func_3_1(49)*occ_func_2_1(44))
     + (occ_func_2_1(26)*occ_func_2_1(44))
     + (occ_func_3_1(45)*occ_func_2_1(84))
     + (occ_func_3_1(39)*occ_func_2_1(12))
     + (occ_func_2_1(24)*occ_func_2_1(48))
     + (occ_func_3_1(49)*occ_func_2_1(80))
     + (occ_func_3_1(35)*occ_func_2_1(6))
     + (occ_func_3_1(47)*occ_func_2_1(28))
     + (occ_func_3_1(37)*occ_func_2_1(52))
     + (occ_func_2_1(88)*occ_func_2_1(10))
     + (occ_func_3_1(51)*occ_func_2_1(28))
     + (occ_func_3_1(33)*occ_func_2_1(48))
     + (occ_func_2_1(88)*occ_func_2_1(12))
     + (occ_func_2_1(26)*occ_func_2_1(52))
     + (occ_func_3_1(53)*occ_func_2_1(84))
     + (occ_func_3_1(31)*occ_func_2_1(8))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_38_at_0(int occ_i, int occ_f) const {
  // orbit_index: 38
  // function_index: 38
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_3_1(47))
     + (occ_func_2_1(40)*occ_func_3_1(25))
     + (occ_func_2_1(48)*occ_func_3_1(9))
     + (occ_func_2_1(34)*occ_func_3_1(75))
     + (occ_func_3_1(9)*occ_func_3_1(83))
     + (occ_func_2_1(38)*occ_func_3_1(51))
     + (occ_func_2_1(44)*occ_func_3_1(27))
     + (occ_func_3_1(11)*occ_func_3_1(79))
     + (occ_func_2_1(34)*occ_func_3_1(39))
     + (occ_func_2_1(48)*occ_func_3_1(25))
     + (occ_func_2_1(36)*occ_func_3_1(13))
     + (occ_func_2_1(46)*occ_func_3_1(87))
     + (occ_func_3_1(47)*occ_func_3_1(29))
     + (occ_func_2_1(32)*occ_func_3_1(11))
     + (occ_func_2_1(50)*occ_func_3_1(87))
     + (occ_func_3_1(51)*occ_func_3_1(29))
     + (occ_func_3_1(13)*occ_func_3_1(83))
     + (occ_func_2_1(30)*occ_func_3_1(43))
     + (occ_func_2_1(52)*occ_func_3_1(27))
     + (occ_func_3_1(31)*occ_func_3_1(21))
     + (occ_func_3_1(7)*occ_func_3_1(79))
     + (occ_func_2_1(52)*occ_func_3_1(7))
     + (occ_func_2_1(30)*occ_func_3_1(71))
     + (occ_func_3_1(35)*occ_func_3_1(23))
     + (occ_func_3_1(43)*occ_func_3_1(23))
     + (occ_func_2_1(40)*occ_func_3_1(5))
     + (occ_func_2_1(42)*occ_func_3_1(75))
     + (occ_func_2_1(50)*occ_func_3_1(35))
     + (occ_func_2_1(32)*occ_func_3_1(19))
     + (occ_func_3_1(3)*occ_func_3_1(67))
     + (occ_func_3_1(39)*occ_func_3_1(21))
     + (occ_func_2_1(44)*occ_func_3_1(3))
     + (occ_func_2_1(38)*occ_func_3_1(71))
     + (occ_func_2_1(46)*occ_func_3_1(31))
     + (occ_func_2_1(36)*occ_func_3_1(19))
     + (occ_func_3_1(5)*occ_func_3_1(67))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_38_at_1(int occ_i, int occ_f) const {
  // orbit_index: 38
  // function_index: 38
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(36)*occ_func_2_1(22))
     + (occ_func_2_1(6)*occ_func_2_1(80))
     + (occ_func_3_1(51)*occ_func_2_1(6))
     + (occ_func_3_1(33)*occ_func_2_1(72))
     + (occ_func_2_1(32)*occ_func_2_1(20))
     + (occ_func_3_1(39)*occ_func_2_1(4))
     + (occ_func_3_1(45)*occ_func_2_1(76))
     + (occ_func_2_1(44)*occ_func_2_1(22))
     + (occ_func_2_1(2)*occ_func_2_1(68))
     + (occ_func_3_1(53)*occ_func_2_1(36))
     + (occ_func_3_1(31)*occ_func_2_1(18))
     + (occ_func_2_1(4)*occ_func_2_1(68))
     + (occ_func_3_1(49)*occ_func_2_1(32))
     + (occ_func_3_1(35)*occ_func_2_1(18))
     + (occ_func_3_1(43)*occ_func_2_1(2))
     + (occ_func_3_1(41)*occ_func_2_1(72))
     + (occ_func_2_1(40)*occ_func_2_1(20))
     + (occ_func_3_1(41)*occ_func_2_1(52))
     + (occ_func_3_1(43)*occ_func_2_1(26))
     + (occ_func_3_1(47)*occ_func_2_1(8))
     + (occ_func_3_1(37)*occ_func_2_1(76))
     + (occ_func_2_1(8)*occ_func_2_1(84))
     + (occ_func_3_1(45)*occ_func_2_1(48))
     + (occ_func_3_1(39)*occ_func_2_1(24))
     + (occ_func_3_1(37)*occ_func_2_1(40))
     + (occ_func_3_1(47)*occ_func_2_1(24))
     + (occ_func_2_1(10)*occ_func_2_1(80))
     + (occ_func_2_1(48)*occ_func_2_1(28))
     + (occ_func_3_1(35)*occ_func_2_1(12))
     + (occ_func_3_1(49)*occ_func_2_1(88))
     + (occ_func_3_1(33)*occ_func_2_1(44))
     + (occ_func_3_1(51)*occ_func_2_1(26))
     + (occ_func_2_1(12)*occ_func_2_1(84))
     + (occ_func_2_1(52)*occ_func_2_1(28))
     + (occ_func_3_1(31)*occ_func_2_1(10))
     + (occ_func_3_1(53)*occ_func_2_1(88))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_39_at_0(int occ_i, int occ_f) const {
  // orbit_index: 39
  // function_index: 39
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(16)*occ_func_3_1(25))
     + (occ_func_2_1(14)*occ_func_3_1(79))
     + (occ_func_2_1(16)*occ_func_3_1(27))
     + (occ_func_2_1(14)*occ_func_3_1(83))
     + (occ_func_2_1(14)*occ_func_3_1(87))
     + (occ_func_2_1(16)*occ_func_3_1(29))
     + (occ_func_3_1(79)*occ_func_3_1(25))
     + (occ_func_3_1(83)*occ_func_3_1(27))
     + (occ_func_3_1(29)*occ_func_3_1(87))
     + (occ_func_3_1(23)*occ_func_3_1(75))
     + (occ_func_3_1(21)*occ_func_3_1(71))
     + (occ_func_3_1(67)*occ_func_3_1(19))
     + (occ_func_2_1(14)*occ_func_3_1(75))
     + (occ_func_2_1(16)*occ_func_3_1(23))
     + (occ_func_2_1(14)*occ_func_3_1(71))
     + (occ_func_2_1(16)*occ_func_3_1(21))
     + (occ_func_2_1(16)*occ_func_3_1(19))
     + (occ_func_2_1(14)*occ_func_3_1(67))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_39_at_1(int occ_i, int occ_f) const {
  // orbit_index: 39
  // function_index: 39
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(22)*occ_func_2_1(76))
     + (occ_func_2_1(20)*occ_func_2_1(72))
     + (occ_func_2_1(68)*occ_func_2_1(18))
     + (occ_func_3_1(17)*occ_func_2_1(76))
     + (occ_func_3_1(15)*occ_func_2_1(22))
     + (occ_func_3_1(17)*occ_func_2_1(72))
     + (occ_func_3_1(15)*occ_func_2_1(20))
     + (occ_func_3_1(15)*occ_func_2_1(18))
     + (occ_func_3_1(17)*occ_func_2_1(68))
     + (occ_func_3_1(15)*occ_func_2_1(24))
     + (occ_func_3_1(17)*occ_func_2_1(80))
     + (occ_func_3_1(15)*occ_func_2_1(26))
     + (occ_func_3_1(17)*occ_func_2_1(84))
     + (occ_func_3_1(17)*occ_func_2_1(88))
     + (occ_func_3_1(15)*occ_func_2_1(28))
     + (occ_func_2_1(80)*occ_func_2_1(24))
     + (occ_func_2_1(84)*occ_func_2_1(26))
     + (occ_func_2_1(28)*occ_func_2_1(88))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_40_at_0(int occ_i, int occ_f) const {
  // orbit_index: 40
  // function_index: 40
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(79)*occ_func_3_1(87))
     + (occ_func_3_1(71)*occ_func_2_1(18))
     + (occ_func_3_1(79)*occ_func_2_1(28))
     + (occ_func_3_1(87)*occ_func_2_1(24))
     + (occ_func_3_1(83)*occ_func_2_1(22))
     + (occ_func_3_1(27)*occ_func_2_1(22))
     + (occ_func_3_1(29)*occ_func_2_1(24))
     + (occ_func_3_1(25)*occ_func_2_1(28))
     + (occ_func_3_1(21)*occ_func_2_1(18))
     + (occ_func_3_1(29)*occ_func_3_1(25))
     + (occ_func_3_1(83)*occ_func_3_1(87))
     + (occ_func_3_1(75)*occ_func_2_1(18))
     + (occ_func_3_1(83)*occ_func_2_1(28))
     + (occ_func_3_1(87)*occ_func_2_1(26))
     + (occ_func_3_1(79)*occ_func_2_1(20))
     + (occ_func_3_1(25)*occ_func_2_1(20))
     + (occ_func_3_1(29)*occ_func_2_1(26))
     + (occ_func_3_1(27)*occ_func_2_1(28))
     + (occ_func_3_1(23)*occ_func_2_1(18))
     + (occ_func_3_1(29)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_2_1(20))
     + (occ_func_3_1(23)*occ_func_2_1(26))
     + (occ_func_3_1(23)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_3_1(19))
     + (occ_func_3_1(67)*occ_func_3_1(71))
     + (occ_func_3_1(83)*occ_func_3_1(75))
     + (occ_func_3_1(75)*occ_func_2_1(26))
     + (occ_func_3_1(67)*occ_func_2_1(20))
     + (occ_func_3_1(19)*occ_func_2_1(22))
     + (occ_func_3_1(21)*occ_func_2_1(24))
     + (occ_func_3_1(21)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_3_1(19))
     + (occ_func_3_1(67)*occ_func_3_1(75))
     + (occ_func_3_1(79)*occ_func_3_1(71))
     + (occ_func_3_1(71)*occ_func_2_1(24))
     + (occ_func_3_1(67)*occ_func_2_1(22))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_40_at_1(int occ_i, int occ_f) const {
  // orbit_index: 40
  // function_index: 40
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(76)*occ_func_3_1(27))
     + (occ_func_2_1(68)*occ_func_3_1(21))
     + (occ_func_2_1(84)*occ_func_2_1(76))
     + (occ_func_2_1(68)*occ_func_2_1(72))
     + (occ_func_2_1(20)*occ_func_2_1(18))
     + (occ_func_2_1(22)*occ_func_2_1(26))
     + (occ_func_2_1(18)*occ_func_3_1(21))
     + (occ_func_2_1(22)*occ_func_3_1(27))
     + (occ_func_2_1(72)*occ_func_3_1(25))
     + (occ_func_2_1(68)*occ_func_3_1(23))
     + (occ_func_2_1(80)*occ_func_2_1(72))
     + (occ_func_2_1(68)*occ_func_2_1(76))
     + (occ_func_2_1(22)*occ_func_2_1(18))
     + (occ_func_2_1(20)*occ_func_2_1(24))
     + (occ_func_2_1(18)*occ_func_3_1(23))
     + (occ_func_2_1(20)*occ_func_3_1(25))
     + (occ_func_2_1(28)*occ_func_2_1(24))
     + (occ_func_2_1(24)*occ_func_3_1(29))
     + (occ_func_2_1(20)*occ_func_3_1(19))
     + (occ_func_2_1(26)*occ_func_3_1(23))
     + (occ_func_2_1(28)*occ_func_3_1(25))
     + (occ_func_2_1(88)*occ_func_3_1(25))
     + (occ_func_2_1(84)*occ_func_3_1(23))
     + (occ_func_2_1(72)*occ_func_3_1(19))
     + (occ_func_2_1(80)*occ_func_3_1(29))
     + (occ_func_2_1(80)*occ_func_2_1(88))
     + (occ_func_2_1(28)*occ_func_2_1(26))
     + (occ_func_2_1(26)*occ_func_3_1(29))
     + (occ_func_2_1(22)*occ_func_3_1(19))
     + (occ_func_2_1(24)*occ_func_3_1(21))
     + (occ_func_2_1(28)*occ_func_3_1(27))
     + (occ_func_2_1(88)*occ_func_3_1(27))
     + (occ_func_2_1(80)*occ_func_3_1(21))
     + (occ_func_2_1(76)*occ_func_3_1(19))
     + (occ_func_2_1(84)*occ_func_3_1(29))
     + (occ_func_2_1(84)*occ_func_2_1(88))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_41_at_0(int occ_i, int occ_f) const {
  // orbit_index: 41
  // function_index: 41
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8)*occ_func_2_1(60))
     + (occ_func_2_1(6)*occ_func_2_1(8))
     + (occ_func_2_1(58)*occ_func_2_1(6))
     + (occ_func_2_1(10)*occ_func_2_1(62))
     + (occ_func_2_1(4)*occ_func_2_1(10))
     + (occ_func_2_1(56)*occ_func_2_1(4))
     + (occ_func_2_1(2)*occ_func_2_1(54))
     + (occ_func_2_1(12)*occ_func_2_1(2))
     + (occ_func_2_1(64)*occ_func_2_1(12))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_41_at_1(int occ_i, int occ_f) const {
  // orbit_index: 41
  // function_index: 41
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(7)*occ_func_3_1(59))
     + (occ_func_3_1(9)*occ_func_3_1(7))
     + (occ_func_3_1(61)*occ_func_3_1(9))
     + (occ_func_3_1(5)*occ_func_3_1(57))
     + (occ_func_3_1(11)*occ_func_3_1(5))
     + (occ_func_3_1(63)*occ_func_3_1(11))
     + (occ_func_3_1(13)*occ_func_3_1(65))
     + (occ_func_3_1(3)*occ_func_3_1(13))
     + (occ_func_3_1(55)*occ_func_3_1(3))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_42_at_0(int occ_i, int occ_f) const {
  // orbit_index: 42
  // function_index: 42
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43)*occ_func_2_1(60))
     + (occ_func_2_1(58)*occ_func_3_1(39))
     + (occ_func_3_1(9)*occ_func_2_1(60))
     + (occ_func_2_1(58)*occ_func_3_1(7))
     + (occ_func_3_1(47)*occ_func_2_1(62))
     + (occ_func_2_1(56)*occ_func_3_1(35))
     + (occ_func_3_1(11)*occ_func_2_1(62))
     + (occ_func_2_1(56)*occ_func_3_1(5))
     + (occ_func_3_1(31)*occ_func_2_1(54))
     + (occ_func_2_1(64)*occ_func_3_1(51))
     + (occ_func_3_1(3)*occ_func_2_1(54))
     + (occ_func_2_1(64)*occ_func_3_1(13))
     + (occ_func_3_1(9)*occ_func_3_1(7))
     + (occ_func_3_1(43)*occ_func_3_1(39))
     + (occ_func_3_1(11)*occ_func_3_1(5))
     + (occ_func_3_1(47)*occ_func_3_1(35))
     + (occ_func_3_1(3)*occ_func_3_1(13))
     + (occ_func_3_1(31)*occ_func_3_1(51))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_42_at_1(int occ_i, int occ_f) const {
  // orbit_index: 42
  // function_index: 42
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40)*occ_func_2_1(44))
     + (occ_func_2_1(6)*occ_func_2_1(8))
     + (occ_func_2_1(36)*occ_func_2_1(48))
     + (occ_func_2_1(4)*occ_func_2_1(10))
     + (occ_func_2_1(52)*occ_func_2_1(32))
     + (occ_func_2_1(12)*occ_func_2_1(2))
     + (occ_func_2_1(6)*occ_func_3_1(59))
     + (occ_func_3_1(61)*occ_func_2_1(8))
     + (occ_func_2_1(40)*occ_func_3_1(59))
     + (occ_func_3_1(61)*occ_func_2_1(44))
     + (occ_func_2_1(4)*occ_func_3_1(57))
     + (occ_func_3_1(63)*occ_func_2_1(10))
     + (occ_func_2_1(36)*occ_func_3_1(57))
     + (occ_func_3_1(63)*occ_func_2_1(48))
     + (occ_func_2_1(12)*occ_func_3_1(65))
     + (occ_func_3_1(55)*occ_func_2_1(2))
     + (occ_func_2_1(52)*occ_func_3_1(65))
     + (occ_func_3_1(55)*occ_func_2_1(32))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_43_at_0(int occ_i, int occ_f) const {
  // orbit_index: 43
  // function_index: 43
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8)*occ_func_2_1(28))
     + (occ_func_2_1(6)*occ_func_2_1(62))
     + (occ_func_2_1(18)*occ_func_2_1(56))
     + (occ_func_2_1(6)*occ_func_2_1(28))
     + (occ_func_2_1(8)*occ_func_2_1(64))
     + (occ_func_2_1(18)*occ_func_2_1(54))
     + (occ_func_2_1(2)*occ_func_2_1(22))
     + (occ_func_2_1(12)*occ_func_2_1(60))
     + (occ_func_2_1(24)*occ_func_2_1(58))
     + (occ_func_2_1(4)*occ_func_2_1(20))
     + (occ_func_2_1(10)*occ_func_2_1(58))
     + (occ_func_2_1(26)*occ_func_2_1(60))
     + (occ_func_2_1(12)*occ_func_2_1(24))
     + (occ_func_2_1(2)*occ_func_2_1(58))
     + (occ_func_2_1(22)*occ_func_2_1(60))
     + (occ_func_2_1(12)*occ_func_2_1(22))
     + (occ_func_2_1(2)*occ_func_2_1(56))
     + (occ_func_2_1(24)*occ_func_2_1(62))
     + (occ_func_2_1(10)*occ_func_2_1(26))
     + (occ_func_2_1(4)*occ_func_2_1(60))
     + (occ_func_2_1(20)*occ_func_2_1(58))
     + (occ_func_2_1(4)*occ_func_2_1(26))
     + (occ_func_2_1(10)*occ_func_2_1(64))
     + (occ_func_2_1(20)*occ_func_2_1(54))
     + (occ_func_2_1(2)*occ_func_2_1(24))
     + (occ_func_2_1(12)*occ_func_2_1(62))
     + (occ_func_2_1(22)*occ_func_2_1(56))
     + (occ_func_2_1(10)*occ_func_2_1(20))
     + (occ_func_2_1(4)*occ_func_2_1(54))
     + (occ_func_2_1(26)*occ_func_2_1(64))
     + (occ_func_2_1(6)*occ_func_2_1(18))
     + (occ_func_2_1(8)*occ_func_2_1(56))
     + (occ_func_2_1(28)*occ_func_2_1(62))
     + (occ_func_2_1(8)*occ_func_2_1(18))
     + (occ_func_2_1(6)*occ_func_2_1(54))
     + (occ_func_2_1(28)*occ_func_2_1(64))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_43_at_1(int occ_i, int occ_f) const {
  // orbit_index: 43
  // function_index: 43
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(9)*occ_func_3_1(29))
     + (occ_func_3_1(7)*occ_func_3_1(63))
     + (occ_func_3_1(19)*occ_func_3_1(57))
     + (occ_func_3_1(7)*occ_func_3_1(29))
     + (occ_func_3_1(9)*occ_func_3_1(65))
     + (occ_func_3_1(19)*occ_func_3_1(55))
     + (occ_func_3_1(3)*occ_func_3_1(23))
     + (occ_func_3_1(13)*occ_func_3_1(61))
     + (occ_func_3_1(25)*occ_func_3_1(59))
     + (occ_func_3_1(5)*occ_func_3_1(21))
     + (occ_func_3_1(11)*occ_func_3_1(59))
     + (occ_func_3_1(27)*occ_func_3_1(61))
     + (occ_func_3_1(13)*occ_func_3_1(25))
     + (occ_func_3_1(3)*occ_func_3_1(59))
     + (occ_func_3_1(23)*occ_func_3_1(61))
     + (occ_func_3_1(13)*occ_func_3_1(23))
     + (occ_func_3_1(3)*occ_func_3_1(57))
     + (occ_func_3_1(25)*occ_func_3_1(63))
     + (occ_func_3_1(11)*occ_func_3_1(27))
     + (occ_func_3_1(5)*occ_func_3_1(61))
     + (occ_func_3_1(21)*occ_func_3_1(59))
     + (occ_func_3_1(5)*occ_func_3_1(27))
     + (occ_func_3_1(11)*occ_func_3_1(65))
     + (occ_func_3_1(21)*occ_func_3_1(55))
     + (occ_func_3_1(3)*occ_func_3_1(25))
     + (occ_func_3_1(13)*occ_func_3_1(63))
     + (occ_func_3_1(23)*occ_func_3_1(57))
     + (occ_func_3_1(11)*occ_func_3_1(21))
     + (occ_func_3_1(5)*occ_func_3_1(55))
     + (occ_func_3_1(27)*occ_func_3_1(65))
     + (occ_func_3_1(7)*occ_func_3_1(19))
     + (occ_func_3_1(9)*occ_func_3_1(57))
     + (occ_func_3_1(29)*occ_func_3_1(63))
     + (occ_func_3_1(9)*occ_func_3_1(19))
     + (occ_func_3_1(7)*occ_func_3_1(55))
     + (occ_func_3_1(29)*occ_func_3_1(65))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_44_at_0(int occ_i, int occ_f) const {
  // orbit_index: 44
  // function_index: 44
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_2_1(60))
     + (occ_func_2_1(40)*occ_func_2_1(44))
     + (occ_func_2_1(58)*occ_func_2_1(38))
     + (occ_func_2_1(44)*occ_func_2_1(60))
     + (occ_func_2_1(38)*occ_func_2_1(42))
     + (occ_func_2_1(58)*occ_func_2_1(40))
     + (occ_func_2_1(46)*occ_func_2_1(62))
     + (occ_func_2_1(36)*occ_func_2_1(48))
     + (occ_func_2_1(56)*occ_func_2_1(34))
     + (occ_func_2_1(48)*occ_func_2_1(62))
     + (occ_func_2_1(34)*occ_func_2_1(46))
     + (occ_func_2_1(56)*occ_func_2_1(36))
     + (occ_func_2_1(30)*occ_func_2_1(54))
     + (occ_func_2_1(52)*occ_func_2_1(32))
     + (occ_func_2_1(64)*occ_func_2_1(50))
     + (occ_func_2_1(32)*occ_func_2_1(54))
     + (occ_func_2_1(50)*occ_func_2_1(30))
     + (occ_func_2_1(64)*occ_func_2_1(52))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_44_at_1(int occ_i, int occ_f) const {
  // orbit_index: 44
  // function_index: 44
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(39)*occ_func_3_1(59))
     + (occ_func_3_1(45)*occ_func_3_1(41))
     + (occ_func_3_1(61)*occ_func_3_1(43))
     + (occ_func_3_1(41)*occ_func_3_1(59))
     + (occ_func_3_1(43)*occ_func_3_1(39))
     + (occ_func_3_1(61)*occ_func_3_1(45))
     + (occ_func_3_1(35)*occ_func_3_1(57))
     + (occ_func_3_1(49)*occ_func_3_1(37))
     + (occ_func_3_1(63)*occ_func_3_1(47))
     + (occ_func_3_1(37)*occ_func_3_1(57))
     + (occ_func_3_1(47)*occ_func_3_1(35))
     + (occ_func_3_1(63)*occ_func_3_1(49))
     + (occ_func_3_1(51)*occ_func_3_1(65))
     + (occ_func_3_1(33)*occ_func_3_1(53))
     + (occ_func_3_1(55)*occ_func_3_1(31))
     + (occ_func_3_1(53)*occ_func_3_1(65))
     + (occ_func_3_1(31)*occ_func_3_1(51))
     + (occ_func_3_1(55)*occ_func_3_1(33))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_45_at_0(int occ_i, int occ_f) const {
  // orbit_index: 45
  // function_index: 45
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43)*occ_func_3_1(87))
     + (occ_func_3_1(43)*occ_func_2_1(64))
     + (occ_func_3_1(67)*occ_func_2_1(54))
     + (occ_func_3_1(51)*occ_func_2_1(60))
     + (occ_func_3_1(79)*occ_func_2_1(58))
     + (occ_func_3_1(47)*occ_func_2_1(58))
     + (occ_func_3_1(83)*occ_func_2_1(60))
     + (occ_func_3_1(31)*occ_func_2_1(56))
     + (occ_func_3_1(79)*occ_func_2_1(62))
     + (occ_func_3_1(13)*occ_func_3_1(25))
     + (occ_func_3_1(11)*occ_func_3_1(27))
     + (occ_func_3_1(11)*occ_func_2_1(64))
     + (occ_func_3_1(21)*occ_func_2_1(54))
     + (occ_func_3_1(13)*occ_func_2_1(62))
     + (occ_func_3_1(23)*occ_func_2_1(56))
     + (occ_func_3_1(35)*occ_func_2_1(54))
     + (occ_func_3_1(83)*occ_func_2_1(64))
     + (occ_func_3_1(9)*occ_func_2_1(56))
     + (occ_func_3_1(29)*occ_func_2_1(62))
     + (occ_func_3_1(7)*occ_func_2_1(54))
     + (occ_func_3_1(29)*occ_func_2_1(64))
     + (occ_func_3_1(39)*occ_func_2_1(62))
     + (occ_func_3_1(67)*occ_func_2_1(56))
     + (occ_func_3_1(39)*occ_func_3_1(87))
     + (occ_func_3_1(31)*occ_func_3_1(75))
     + (occ_func_3_1(35)*occ_func_3_1(71))
     + (occ_func_3_1(3)*occ_func_2_1(58))
     + (occ_func_3_1(23)*occ_func_2_1(60))
     + (occ_func_3_1(51)*occ_func_3_1(75))
     + (occ_func_3_1(5)*occ_func_2_1(60))
     + (occ_func_3_1(21)*occ_func_2_1(58))
     + (occ_func_3_1(5)*occ_func_3_1(27))
     + (occ_func_3_1(3)*occ_func_3_1(25))
     + (occ_func_3_1(47)*occ_func_3_1(71))
     + (occ_func_3_1(7)*occ_func_3_1(19))
     + (occ_func_3_1(9)*occ_func_3_1(19))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_45_at_1(int occ_i, int occ_f) const {
  // orbit_index: 45
  // function_index: 45
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40)*occ_func_3_1(63))
     + (occ_func_2_1(68)*occ_func_3_1(57))
     + (occ_func_2_1(40)*occ_func_2_1(88))
     + (occ_func_2_1(32)*occ_func_2_1(76))
     + (occ_func_2_1(36)*occ_func_2_1(72))
     + (occ_func_2_1(52)*occ_func_2_1(76))
     + (occ_func_2_1(2)*occ_func_3_1(59))
     + (occ_func_2_1(22)*occ_func_3_1(61))
     + (occ_func_2_1(4)*occ_func_3_1(61))
     + (occ_func_2_1(20)*occ_func_3_1(59))
     + (occ_func_2_1(4)*occ_func_2_1(26))
     + (occ_func_2_1(2)*occ_func_2_1(24))
     + (occ_func_2_1(48)*occ_func_2_1(72))
     + (occ_func_2_1(6)*occ_func_2_1(18))
     + (occ_func_2_1(8)*occ_func_2_1(18))
     + (occ_func_2_1(44)*occ_func_2_1(88))
     + (occ_func_2_1(44)*occ_func_3_1(65))
     + (occ_func_2_1(68)*occ_func_3_1(55))
     + (occ_func_2_1(52)*occ_func_3_1(61))
     + (occ_func_2_1(80)*occ_func_3_1(59))
     + (occ_func_2_1(48)*occ_func_3_1(59))
     + (occ_func_2_1(84)*occ_func_3_1(61))
     + (occ_func_2_1(12)*occ_func_2_1(24))
     + (occ_func_2_1(32)*occ_func_3_1(57))
     + (occ_func_2_1(80)*occ_func_3_1(63))
     + (occ_func_2_1(10)*occ_func_2_1(26))
     + (occ_func_2_1(10)*occ_func_3_1(65))
     + (occ_func_2_1(20)*occ_func_3_1(55))
     + (occ_func_2_1(12)*occ_func_3_1(63))
     + (occ_func_2_1(22)*occ_func_3_1(57))
     + (occ_func_2_1(36)*occ_func_3_1(55))
     + (occ_func_2_1(84)*occ_func_3_1(65))
     + (occ_func_2_1(8)*occ_func_3_1(57))
     + (occ_func_2_1(28)*occ_func_3_1(63))
     + (occ_func_2_1(6)*occ_func_3_1(55))
     + (occ_func_2_1(28)*occ_func_3_1(65))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_46_at_0(int occ_i, int occ_f) const {
  // orbit_index: 46
  // function_index: 46
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(9)*occ_func_3_1(29))
     + (occ_func_3_1(9)*occ_func_2_1(64))
     + (occ_func_3_1(19)*occ_func_2_1(54))
     + (occ_func_3_1(13)*occ_func_2_1(60))
     + (occ_func_3_1(25)*occ_func_2_1(58))
     + (occ_func_3_1(11)*occ_func_2_1(58))
     + (occ_func_3_1(27)*occ_func_2_1(60))
     + (occ_func_3_1(51)*occ_func_3_1(79))
     + (occ_func_3_1(3)*occ_func_2_1(56))
     + (occ_func_3_1(25)*occ_func_2_1(62))
     + (occ_func_3_1(47)*occ_func_3_1(83))
     + (occ_func_3_1(47)*occ_func_2_1(64))
     + (occ_func_3_1(71)*occ_func_2_1(54))
     + (occ_func_3_1(51)*occ_func_2_1(62))
     + (occ_func_3_1(75)*occ_func_2_1(56))
     + (occ_func_3_1(5)*occ_func_2_1(54))
     + (occ_func_3_1(27)*occ_func_2_1(64))
     + (occ_func_3_1(43)*occ_func_2_1(56))
     + (occ_func_3_1(87)*occ_func_2_1(62))
     + (occ_func_3_1(39)*occ_func_2_1(54))
     + (occ_func_3_1(87)*occ_func_2_1(64))
     + (occ_func_3_1(7)*occ_func_2_1(62))
     + (occ_func_3_1(19)*occ_func_2_1(56))
     + (occ_func_3_1(7)*occ_func_3_1(29))
     + (occ_func_3_1(3)*occ_func_3_1(23))
     + (occ_func_3_1(5)*occ_func_3_1(21))
     + (occ_func_3_1(13)*occ_func_3_1(23))
     + (occ_func_3_1(31)*occ_func_2_1(58))
     + (occ_func_3_1(75)*occ_func_2_1(60))
     + (occ_func_3_1(35)*occ_func_2_1(60))
     + (occ_func_3_1(71)*occ_func_2_1(58))
     + (occ_func_3_1(35)*occ_func_3_1(83))
     + (occ_func_3_1(31)*occ_func_3_1(79))
     + (occ_func_3_1(11)*occ_func_3_1(21))
     + (occ_func_3_1(39)*occ_func_3_1(67))
     + (occ_func_3_1(43)*occ_func_3_1(67))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_46_at_1(int occ_i, int occ_f) const {
  // orbit_index: 46
  // function_index: 46
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(6)*occ_func_3_1(63))
     + (occ_func_2_1(18)*occ_func_3_1(57))
     + (occ_func_2_1(6)*occ_func_2_1(28))
     + (occ_func_2_1(2)*occ_func_2_1(22))
     + (occ_func_2_1(4)*occ_func_2_1(20))
     + (occ_func_2_1(32)*occ_func_3_1(59))
     + (occ_func_2_1(76)*occ_func_3_1(61))
     + (occ_func_2_1(12)*occ_func_2_1(22))
     + (occ_func_2_1(36)*occ_func_3_1(61))
     + (occ_func_2_1(72)*occ_func_3_1(59))
     + (occ_func_2_1(36)*occ_func_2_1(84))
     + (occ_func_2_1(32)*occ_func_2_1(80))
     + (occ_func_2_1(10)*occ_func_2_1(20))
     + (occ_func_2_1(40)*occ_func_2_1(68))
     + (occ_func_2_1(44)*occ_func_2_1(68))
     + (occ_func_2_1(8)*occ_func_2_1(28))
     + (occ_func_2_1(8)*occ_func_3_1(65))
     + (occ_func_2_1(18)*occ_func_3_1(55))
     + (occ_func_2_1(12)*occ_func_3_1(61))
     + (occ_func_2_1(24)*occ_func_3_1(59))
     + (occ_func_2_1(10)*occ_func_3_1(59))
     + (occ_func_2_1(26)*occ_func_3_1(61))
     + (occ_func_2_1(2)*occ_func_3_1(57))
     + (occ_func_2_1(24)*occ_func_3_1(63))
     + (occ_func_2_1(52)*occ_func_2_1(80))
     + (occ_func_2_1(48)*occ_func_2_1(84))
     + (occ_func_2_1(48)*occ_func_3_1(65))
     + (occ_func_2_1(72)*occ_func_3_1(55))
     + (occ_func_2_1(52)*occ_func_3_1(63))
     + (occ_func_2_1(76)*occ_func_3_1(57))
     + (occ_func_2_1(4)*occ_func_3_1(55))
     + (occ_func_2_1(26)*occ_func_3_1(65))
     + (occ_func_2_1(44)*occ_func_3_1(57))
     + (occ_func_2_1(88)*occ_func_3_1(63))
     + (occ_func_2_1(40)*occ_func_3_1(55))
     + (occ_func_2_1(88)*occ_func_3_1(65))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_47_at_0(int occ_i, int occ_f) const {
  // orbit_index: 47
  // function_index: 47
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(60)*occ_func_2_1(64))
     + (occ_func_2_1(58)*occ_func_2_1(62))
     + (occ_func_2_1(54)*occ_func_2_1(56))
     + (occ_func_2_1(60)*occ_func_2_1(56))
     + (occ_func_2_1(58)*occ_func_2_1(54))
     + (occ_func_2_1(62)*occ_func_2_1(64))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_47_at_1(int occ_i, int occ_f) const {
  // orbit_index: 47
  // function_index: 47
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(57)*occ_func_3_1(55))
     + (occ_func_3_1(63)*occ_func_3_1(59))
     + (occ_func_3_1(65)*occ_func_3_1(61))
     + (occ_func_3_1(57)*occ_func_3_1(61))
     + (occ_func_3_1(63)*occ_func_3_1(65))
     + (occ_func_3_1(59)*occ_func_3_1(55))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_48_at_0(int occ_i, int occ_f) const {
  // orbit_index: 48
  // function_index: 48
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43)*occ_func_3_1(103))
     + (occ_func_3_1(43)*occ_func_2_1(6))
     + (occ_func_3_1(103)*occ_func_2_1(8))
     + (occ_func_3_1(9)*occ_func_2_1(6))
     + (occ_func_3_1(61)*occ_func_2_1(8))
     + (occ_func_3_1(9)*occ_func_3_1(61))
     + (occ_func_3_1(47)*occ_func_3_1(107))
     + (occ_func_3_1(47)*occ_func_2_1(4))
     + (occ_func_3_1(107)*occ_func_2_1(10))
     + (occ_func_3_1(11)*occ_func_2_1(4))
     + (occ_func_3_1(63)*occ_func_2_1(10))
     + (occ_func_3_1(11)*occ_func_3_1(63))
     + (occ_func_3_1(51)*occ_func_3_1(111))
     + (occ_func_3_1(51)*occ_func_2_1(2))
     + (occ_func_3_1(111)*occ_func_2_1(12))
     + (occ_func_3_1(13)*occ_func_2_1(2))
     + (occ_func_3_1(65)*occ_func_2_1(12))
     + (occ_func_3_1(13)*occ_func_3_1(65))
     + (occ_func_3_1(7)*occ_func_2_1(8))
     + (occ_func_3_1(59)*occ_func_2_1(6))
     + (occ_func_3_1(7)*occ_func_3_1(59))
     + (occ_func_3_1(39)*occ_func_3_1(99))
     + (occ_func_3_1(39)*occ_func_2_1(8))
     + (occ_func_3_1(99)*occ_func_2_1(6))
     + (occ_func_3_1(5)*occ_func_2_1(10))
     + (occ_func_3_1(57)*occ_func_2_1(4))
     + (occ_func_3_1(5)*occ_func_3_1(57))
     + (occ_func_3_1(35)*occ_func_3_1(95))
     + (occ_func_3_1(35)*occ_func_2_1(10))
     + (occ_func_3_1(95)*occ_func_2_1(4))
     + (occ_func_3_1(3)*occ_func_2_1(12))
     + (occ_func_3_1(55)*occ_func_2_1(2))
     + (occ_func_3_1(3)*occ_func_3_1(55))
     + (occ_func_3_1(31)*occ_func_3_1(91))
     + (occ_func_3_1(31)*occ_func_2_1(12))
     + (occ_func_3_1(91)*occ_func_2_1(2))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_48_at_1(int occ_i, int occ_f) const {
  // orbit_index: 48
  // function_index: 48
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40)*occ_func_3_1(9))
     + (occ_func_2_1(100)*occ_func_3_1(7))
     + (occ_func_2_1(40)*occ_func_2_1(100))
     + (occ_func_2_1(6)*occ_func_2_1(58))
     + (occ_func_2_1(6)*occ_func_3_1(9))
     + (occ_func_2_1(58)*occ_func_3_1(7))
     + (occ_func_2_1(36)*occ_func_3_1(11))
     + (occ_func_2_1(96)*occ_func_3_1(5))
     + (occ_func_2_1(36)*occ_func_2_1(96))
     + (occ_func_2_1(4)*occ_func_2_1(56))
     + (occ_func_2_1(4)*occ_func_3_1(11))
     + (occ_func_2_1(56)*occ_func_3_1(5))
     + (occ_func_2_1(32)*occ_func_3_1(13))
     + (occ_func_2_1(92)*occ_func_3_1(3))
     + (occ_func_2_1(32)*occ_func_2_1(92))
     + (occ_func_2_1(2)*occ_func_2_1(54))
     + (occ_func_2_1(2)*occ_func_3_1(13))
     + (occ_func_2_1(54)*occ_func_3_1(3))
     + (occ_func_2_1(8)*occ_func_2_1(60))
     + (occ_func_2_1(8)*occ_func_3_1(7))
     + (occ_func_2_1(60)*occ_func_3_1(9))
     + (occ_func_2_1(44)*occ_func_3_1(7))
     + (occ_func_2_1(104)*occ_func_3_1(9))
     + (occ_func_2_1(44)*occ_func_2_1(104))
     + (occ_func_2_1(10)*occ_func_2_1(62))
     + (occ_func_2_1(10)*occ_func_3_1(5))
     + (occ_func_2_1(62)*occ_func_3_1(11))
     + (occ_func_2_1(48)*occ_func_3_1(5))
     + (occ_func_2_1(108)*occ_func_3_1(11))
     + (occ_func_2_1(48)*occ_func_2_1(108))
     + (occ_func_2_1(12)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_3_1(3))
     + (occ_func_2_1(64)*occ_func_3_1(13))
     + (occ_func_2_1(52)*occ_func_3_1(3))
     + (occ_func_2_1(112)*occ_func_3_1(13))
     + (occ_func_2_1(52)*occ_func_2_1(112))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_49_at_0(int occ_i, int occ_f) const {
  // orbit_index: 49
  // function_index: 49
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(95))
     + (occ_func_3_1(43)*occ_func_3_1(111))
     + (occ_func_3_1(51)*occ_func_3_1(103))
     + (occ_func_3_1(35)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(103))
     + (occ_func_3_1(13)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(61))
     + (occ_func_3_1(51)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(107))
     + (occ_func_3_1(11)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(59))
     + (occ_func_3_1(11)*occ_func_3_1(65))
     + (occ_func_3_1(13)*occ_func_3_1(63))
     + (occ_func_3_1(47)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(111))
     + (occ_func_3_1(7)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(63))
     + (occ_func_3_1(9)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(65))
     + (occ_func_3_1(39)*occ_func_3_1(107))
     + (occ_func_3_1(39)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(91))
     + (occ_func_3_1(31)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(99))
     + (occ_func_3_1(47)*occ_func_3_1(99))
     + (occ_func_3_1(3)*occ_func_3_1(59))
     + (occ_func_3_1(31)*occ_func_3_1(95))
     + (occ_func_3_1(5)*occ_func_3_1(61))
     + (occ_func_3_1(5)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(55))
     + (occ_func_3_1(3)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(57))
     + (occ_func_3_1(35)*occ_func_3_1(91))
     + (occ_func_3_1(9)*occ_func_3_1(57))
     + (occ_func_3_1(7)*occ_func_3_1(55))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_49_at_1(int occ_i, int occ_f) const {
  // orbit_index: 49
  // function_index: 49
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40)*occ_func_2_1(108))
     + (occ_func_2_1(40)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(92))
     + (occ_func_2_1(32)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(100))
     + (occ_func_2_1(48)*occ_func_2_1(100))
     + (occ_func_2_1(2)*occ_func_2_1(58))
     + (occ_func_2_1(32)*occ_func_2_1(96))
     + (occ_func_2_1(4)*occ_func_2_1(60))
     + (occ_func_2_1(4)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(54))
     + (occ_func_2_1(2)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(56))
     + (occ_func_2_1(36)*occ_func_2_1(92))
     + (occ_func_2_1(8)*occ_func_2_1(56))
     + (occ_func_2_1(6)*occ_func_2_1(54))
     + (occ_func_2_1(44)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(96))
     + (occ_func_2_1(44)*occ_func_2_1(112))
     + (occ_func_2_1(52)*occ_func_2_1(104))
     + (occ_func_2_1(36)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(104))
     + (occ_func_2_1(12)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(60))
     + (occ_func_2_1(52)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(108))
     + (occ_func_2_1(10)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(58))
     + (occ_func_2_1(10)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_2_1(62))
     + (occ_func_2_1(48)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(112))
     + (occ_func_2_1(6)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(62))
     + (occ_func_2_1(8)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(64))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_50_at_0(int occ_i, int occ_f) const {
  // orbit_index: 50
  // function_index: 50
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(9)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(57))
     + (occ_func_3_1(9)*occ_func_3_1(65))
     + (occ_func_3_1(13)*occ_func_3_1(61))
     + (occ_func_3_1(5)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(61))
     + (occ_func_3_1(51)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(103))
     + (occ_func_3_1(13)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(63))
     + (occ_func_3_1(47)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(99))
     + (occ_func_3_1(47)*occ_func_3_1(111))
     + (occ_func_3_1(51)*occ_func_3_1(107))
     + (occ_func_3_1(11)*occ_func_2_1(20))
     + (occ_func_2_1(26)*occ_func_3_1(65))
     + (occ_func_3_1(39)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(107))
     + (occ_func_3_1(43)*occ_func_2_1(18))
     + (occ_func_2_1(28)*occ_func_3_1(111))
     + (occ_func_3_1(7)*occ_func_3_1(63))
     + (occ_func_3_1(7)*occ_func_2_1(28))
     + (occ_func_2_1(18)*occ_func_3_1(55))
     + (occ_func_3_1(3)*occ_func_2_1(22))
     + (occ_func_2_1(24)*occ_func_3_1(59))
     + (occ_func_3_1(11)*occ_func_3_1(59))
     + (occ_func_3_1(31)*occ_func_3_1(99))
     + (occ_func_3_1(3)*occ_func_3_1(57))
     + (occ_func_3_1(35)*occ_func_3_1(103))
     + (occ_func_3_1(35)*occ_func_2_1(26))
     + (occ_func_2_1(20)*occ_func_3_1(91))
     + (occ_func_3_1(31)*occ_func_2_1(24))
     + (occ_func_2_1(22)*occ_func_3_1(95))
     + (occ_func_3_1(5)*occ_func_3_1(55))
     + (occ_func_3_1(43)*occ_func_3_1(95))
     + (occ_func_3_1(39)*occ_func_3_1(91))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_50_at_1(int occ_i, int occ_f) const {
  // orbit_index: 50
  // function_index: 50
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(6)*occ_func_2_1(62))
     + (occ_func_2_1(6)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(54))
     + (occ_func_2_1(2)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(58))
     + (occ_func_2_1(10)*occ_func_2_1(58))
     + (occ_func_2_1(32)*occ_func_2_1(100))
     + (occ_func_2_1(2)*occ_func_2_1(56))
     + (occ_func_2_1(36)*occ_func_2_1(104))
     + (occ_func_2_1(36)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(92))
     + (occ_func_2_1(32)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(96))
     + (occ_func_2_1(4)*occ_func_2_1(54))
     + (occ_func_2_1(44)*occ_func_2_1(96))
     + (occ_func_2_1(40)*occ_func_2_1(92))
     + (occ_func_2_1(8)*occ_func_3_1(29))
     + (occ_func_3_1(19)*occ_func_2_1(56))
     + (occ_func_2_1(8)*occ_func_2_1(64))
     + (occ_func_2_1(12)*occ_func_2_1(60))
     + (occ_func_2_1(4)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(60))
     + (occ_func_2_1(52)*occ_func_3_1(25))
     + (occ_func_3_1(23)*occ_func_2_1(104))
     + (occ_func_2_1(12)*occ_func_3_1(23))
     + (occ_func_3_1(25)*occ_func_2_1(62))
     + (occ_func_2_1(48)*occ_func_3_1(27))
     + (occ_func_3_1(21)*occ_func_2_1(100))
     + (occ_func_2_1(48)*occ_func_2_1(112))
     + (occ_func_2_1(52)*occ_func_2_1(108))
     + (occ_func_2_1(10)*occ_func_3_1(21))
     + (occ_func_3_1(27)*occ_func_2_1(64))
     + (occ_func_2_1(40)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(108))
     + (occ_func_2_1(44)*occ_func_3_1(19))
     + (occ_func_3_1(29)*occ_func_2_1(112))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_51_at_0(int occ_i, int occ_f) const {
  // orbit_index: 51
  // function_index: 51
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_3_1(103))
     + (occ_func_2_1(40)*occ_func_3_1(9))
     + (occ_func_3_1(61)*occ_func_3_1(43))
     + (occ_func_3_1(103)*occ_func_3_1(9))
     + (occ_func_2_1(44)*occ_func_3_1(61))
     + (occ_func_2_1(38)*occ_func_3_1(43))
     + (occ_func_2_1(46)*occ_func_3_1(107))
     + (occ_func_2_1(36)*occ_func_3_1(11))
     + (occ_func_3_1(63)*occ_func_3_1(47))
     + (occ_func_3_1(107)*occ_func_3_1(11))
     + (occ_func_2_1(48)*occ_func_3_1(63))
     + (occ_func_2_1(34)*occ_func_3_1(47))
     + (occ_func_2_1(50)*occ_func_3_1(111))
     + (occ_func_2_1(32)*occ_func_3_1(13))
     + (occ_func_3_1(65)*occ_func_3_1(51))
     + (occ_func_3_1(111)*occ_func_3_1(13))
     + (occ_func_2_1(52)*occ_func_3_1(65))
     + (occ_func_2_1(30)*occ_func_3_1(51))
     + (occ_func_3_1(59)*occ_func_3_1(39))
     + (occ_func_2_1(38)*occ_func_3_1(99))
     + (occ_func_2_1(44)*occ_func_3_1(7))
     + (occ_func_2_1(40)*occ_func_3_1(59))
     + (occ_func_2_1(42)*occ_func_3_1(39))
     + (occ_func_3_1(99)*occ_func_3_1(7))
     + (occ_func_3_1(57)*occ_func_3_1(35))
     + (occ_func_2_1(34)*occ_func_3_1(95))
     + (occ_func_2_1(48)*occ_func_3_1(5))
     + (occ_func_2_1(36)*occ_func_3_1(57))
     + (occ_func_2_1(46)*occ_func_3_1(35))
     + (occ_func_3_1(95)*occ_func_3_1(5))
     + (occ_func_3_1(55)*occ_func_3_1(31))
     + (occ_func_2_1(30)*occ_func_3_1(91))
     + (occ_func_2_1(52)*occ_func_3_1(3))
     + (occ_func_2_1(32)*occ_func_3_1(55))
     + (occ_func_2_1(50)*occ_func_3_1(31))
     + (occ_func_3_1(91)*occ_func_3_1(3))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_51_at_1(int occ_i, int occ_f) const {
  // orbit_index: 51
  // function_index: 51
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(100)*occ_func_2_1(6))
     + (occ_func_3_1(39)*occ_func_2_1(58))
     + (occ_func_3_1(45)*occ_func_2_1(40))
     + (occ_func_3_1(41)*occ_func_2_1(100))
     + (occ_func_3_1(43)*occ_func_2_1(6))
     + (occ_func_2_1(58)*occ_func_2_1(40))
     + (occ_func_2_1(96)*occ_func_2_1(4))
     + (occ_func_3_1(35)*occ_func_2_1(56))
     + (occ_func_3_1(49)*occ_func_2_1(36))
     + (occ_func_3_1(37)*occ_func_2_1(96))
     + (occ_func_3_1(47)*occ_func_2_1(4))
     + (occ_func_2_1(56)*occ_func_2_1(36))
     + (occ_func_2_1(92)*occ_func_2_1(2))
     + (occ_func_3_1(31)*occ_func_2_1(54))
     + (occ_func_3_1(53)*occ_func_2_1(32))
     + (occ_func_3_1(33)*occ_func_2_1(92))
     + (occ_func_3_1(51)*occ_func_2_1(2))
     + (occ_func_2_1(54)*occ_func_2_1(32))
     + (occ_func_3_1(43)*occ_func_2_1(60))
     + (occ_func_3_1(41)*occ_func_2_1(44))
     + (occ_func_2_1(104)*occ_func_2_1(8))
     + (occ_func_2_1(60)*occ_func_2_1(44))
     + (occ_func_3_1(45)*occ_func_2_1(104))
     + (occ_func_3_1(39)*occ_func_2_1(8))
     + (occ_func_3_1(47)*occ_func_2_1(62))
     + (occ_func_3_1(37)*occ_func_2_1(48))
     + (occ_func_2_1(108)*occ_func_2_1(10))
     + (occ_func_2_1(62)*occ_func_2_1(48))
     + (occ_func_3_1(49)*occ_func_2_1(108))
     + (occ_func_3_1(35)*occ_func_2_1(10))
     + (occ_func_3_1(51)*occ_func_2_1(64))
     + (occ_func_3_1(33)*occ_func_2_1(52))
     + (occ_func_2_1(112)*occ_func_2_1(12))
     + (occ_func_2_1(64)*occ_func_2_1(52))
     + (occ_func_3_1(53)*occ_func_2_1(112))
     + (occ_func_3_1(31)*occ_func_2_1(12))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_52_at_0(int occ_i, int occ_f) const {
  // orbit_index: 52
  // function_index: 52
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8)*occ_func_3_1(87))
     + (occ_func_2_1(6)*occ_func_3_1(107))
     + (occ_func_2_1(6)*occ_func_3_1(87))
     + (occ_func_2_1(8)*occ_func_3_1(111))
     + (occ_func_2_1(2)*occ_func_3_1(75))
     + (occ_func_2_1(12)*occ_func_3_1(103))
     + (occ_func_3_1(83)*occ_func_3_1(103))
     + (occ_func_3_1(79)*occ_func_3_1(107))
     + (occ_func_2_1(12)*occ_func_3_1(25))
     + (occ_func_2_1(2)*occ_func_3_1(59))
     + (occ_func_2_1(10)*occ_func_3_1(27))
     + (occ_func_2_1(4)*occ_func_3_1(61))
     + (occ_func_2_1(4)*occ_func_3_1(27))
     + (occ_func_2_1(10)*occ_func_3_1(65))
     + (occ_func_2_1(2)*occ_func_3_1(25))
     + (occ_func_2_1(12)*occ_func_3_1(63))
     + (occ_func_3_1(83)*occ_func_3_1(111))
     + (occ_func_3_1(29)*occ_func_3_1(63))
     + (occ_func_3_1(29)*occ_func_3_1(65))
     + (occ_func_3_1(67)*occ_func_3_1(95))
     + (occ_func_3_1(67)*occ_func_3_1(91))
     + (occ_func_3_1(79)*occ_func_3_1(99))
     + (occ_func_2_1(4)*occ_func_3_1(71))
     + (occ_func_2_1(10)*occ_func_3_1(99))
     + (occ_func_3_1(23)*occ_func_3_1(61))
     + (occ_func_2_1(12)*occ_func_3_1(75))
     + (occ_func_2_1(2)*occ_func_3_1(95))
     + (occ_func_3_1(21)*occ_func_3_1(59))
     + (occ_func_3_1(21)*occ_func_3_1(55))
     + (occ_func_3_1(23)*occ_func_3_1(57))
     + (occ_func_2_1(10)*occ_func_3_1(71))
     + (occ_func_2_1(4)*occ_func_3_1(91))
     + (occ_func_2_1(6)*occ_func_3_1(19))
     + (occ_func_2_1(8)*occ_func_3_1(57))
     + (occ_func_2_1(8)*occ_func_3_1(19))
     + (occ_func_2_1(6)*occ_func_3_1(55))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_52_at_1(int occ_i, int occ_f) const {
  // orbit_index: 52
  // function_index: 52
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(68)*occ_func_2_1(96))
     + (occ_func_2_1(68)*occ_func_2_1(92))
     + (occ_func_2_1(80)*occ_func_2_1(100))
     + (occ_func_3_1(5)*occ_func_2_1(72))
     + (occ_func_3_1(11)*occ_func_2_1(100))
     + (occ_func_3_1(13)*occ_func_2_1(76))
     + (occ_func_3_1(3)*occ_func_2_1(96))
     + (occ_func_2_1(22)*occ_func_2_1(60))
     + (occ_func_2_1(20)*occ_func_2_1(58))
     + (occ_func_2_1(20)*occ_func_2_1(54))
     + (occ_func_2_1(22)*occ_func_2_1(56))
     + (occ_func_3_1(11)*occ_func_2_1(72))
     + (occ_func_3_1(5)*occ_func_2_1(92))
     + (occ_func_3_1(7)*occ_func_2_1(18))
     + (occ_func_3_1(9)*occ_func_2_1(56))
     + (occ_func_3_1(9)*occ_func_2_1(18))
     + (occ_func_3_1(7)*occ_func_2_1(54))
     + (occ_func_3_1(9)*occ_func_2_1(88))
     + (occ_func_3_1(7)*occ_func_2_1(108))
     + (occ_func_3_1(7)*occ_func_2_1(88))
     + (occ_func_3_1(9)*occ_func_2_1(112))
     + (occ_func_3_1(3)*occ_func_2_1(76))
     + (occ_func_3_1(13)*occ_func_2_1(104))
     + (occ_func_2_1(84)*occ_func_2_1(104))
     + (occ_func_3_1(13)*occ_func_2_1(24))
     + (occ_func_3_1(3)*occ_func_2_1(58))
     + (occ_func_2_1(80)*occ_func_2_1(108))
     + (occ_func_3_1(11)*occ_func_2_1(26))
     + (occ_func_3_1(5)*occ_func_2_1(60))
     + (occ_func_3_1(5)*occ_func_2_1(26))
     + (occ_func_3_1(11)*occ_func_2_1(64))
     + (occ_func_3_1(3)*occ_func_2_1(24))
     + (occ_func_3_1(13)*occ_func_2_1(62))
     + (occ_func_2_1(84)*occ_func_2_1(112))
     + (occ_func_2_1(28)*occ_func_2_1(62))
     + (occ_func_2_1(28)*occ_func_2_1(64))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_53_at_0(int occ_i, int occ_f) const {
  // orbit_index: 53
  // function_index: 53
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8)*occ_func_3_1(29))
     + (occ_func_2_1(6)*occ_func_3_1(63))
     + (occ_func_2_1(6)*occ_func_3_1(29))
     + (occ_func_2_1(8)*occ_func_3_1(65))
     + (occ_func_2_1(2)*occ_func_3_1(23))
     + (occ_func_2_1(12)*occ_func_3_1(61))
     + (occ_func_3_1(27)*occ_func_3_1(61))
     + (occ_func_2_1(12)*occ_func_3_1(79))
     + (occ_func_2_1(2)*occ_func_3_1(99))
     + (occ_func_3_1(25)*occ_func_3_1(63))
     + (occ_func_2_1(10)*occ_func_3_1(83))
     + (occ_func_2_1(4)*occ_func_3_1(103))
     + (occ_func_2_1(4)*occ_func_3_1(83))
     + (occ_func_2_1(10)*occ_func_3_1(111))
     + (occ_func_2_1(2)*occ_func_3_1(79))
     + (occ_func_2_1(12)*occ_func_3_1(107))
     + (occ_func_3_1(27)*occ_func_3_1(65))
     + (occ_func_3_1(87)*occ_func_3_1(107))
     + (occ_func_3_1(87)*occ_func_3_1(111))
     + (occ_func_3_1(19)*occ_func_3_1(57))
     + (occ_func_3_1(19)*occ_func_3_1(55))
     + (occ_func_3_1(25)*occ_func_3_1(59))
     + (occ_func_2_1(4)*occ_func_3_1(21))
     + (occ_func_2_1(10)*occ_func_3_1(59))
     + (occ_func_2_1(12)*occ_func_3_1(23))
     + (occ_func_2_1(2)*occ_func_3_1(57))
     + (occ_func_3_1(75)*occ_func_3_1(103))
     + (occ_func_3_1(71)*occ_func_3_1(99))
     + (occ_func_3_1(71)*occ_func_3_1(91))
     + (occ_func_3_1(75)*occ_func_3_1(95))
     + (occ_func_2_1(10)*occ_func_3_1(21))
     + (occ_func_2_1(4)*occ_func_3_1(55))
     + (occ_func_2_1(6)*occ_func_3_1(67))
     + (occ_func_2_1(8)*occ_func_3_1(95))
     + (occ_func_2_1(8)*occ_func_3_1(67))
     + (occ_func_2_1(6)*occ_func_3_1(91))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_53_at_1(int occ_i, int occ_f) const {
  // orbit_index: 53
  // function_index: 53
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(18)*occ_func_2_1(56))
     + (occ_func_2_1(18)*occ_func_2_1(54))
     + (occ_func_2_1(24)*occ_func_2_1(58))
     + (occ_func_3_1(5)*occ_func_2_1(20))
     + (occ_func_3_1(11)*occ_func_2_1(58))
     + (occ_func_2_1(76)*occ_func_2_1(104))
     + (occ_func_3_1(13)*occ_func_2_1(22))
     + (occ_func_3_1(3)*occ_func_2_1(56))
     + (occ_func_2_1(72)*occ_func_2_1(100))
     + (occ_func_2_1(72)*occ_func_2_1(92))
     + (occ_func_2_1(76)*occ_func_2_1(96))
     + (occ_func_3_1(11)*occ_func_2_1(20))
     + (occ_func_3_1(5)*occ_func_2_1(54))
     + (occ_func_3_1(7)*occ_func_2_1(68))
     + (occ_func_3_1(9)*occ_func_2_1(96))
     + (occ_func_3_1(9)*occ_func_2_1(68))
     + (occ_func_3_1(7)*occ_func_2_1(92))
     + (occ_func_3_1(9)*occ_func_2_1(28))
     + (occ_func_3_1(7)*occ_func_2_1(62))
     + (occ_func_3_1(7)*occ_func_2_1(28))
     + (occ_func_3_1(9)*occ_func_2_1(64))
     + (occ_func_3_1(3)*occ_func_2_1(22))
     + (occ_func_3_1(13)*occ_func_2_1(60))
     + (occ_func_2_1(26)*occ_func_2_1(60))
     + (occ_func_2_1(24)*occ_func_2_1(62))
     + (occ_func_3_1(13)*occ_func_2_1(80))
     + (occ_func_3_1(3)*occ_func_2_1(100))
     + (occ_func_3_1(11)*occ_func_2_1(84))
     + (occ_func_3_1(5)*occ_func_2_1(104))
     + (occ_func_3_1(5)*occ_func_2_1(84))
     + (occ_func_3_1(11)*occ_func_2_1(112))
     + (occ_func_3_1(3)*occ_func_2_1(80))
     + (occ_func_3_1(13)*occ_func_2_1(108))
     + (occ_func_2_1(26)*occ_func_2_1(64))
     + (occ_func_2_1(88)*occ_func_2_1(108))
     + (occ_func_2_1(88)*occ_func_2_1(112))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_54_at_0(int occ_i, int occ_f) const {
  // orbit_index: 54
  // function_index: 54
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_3_1(87))
     + (occ_func_2_1(40)*occ_func_3_1(63))
     + (occ_func_2_1(38)*occ_func_3_1(87))
     + (occ_func_2_1(44)*occ_func_3_1(65))
     + (occ_func_2_1(30)*occ_func_3_1(75))
     + (occ_func_2_1(52)*occ_func_3_1(61))
     + (occ_func_3_1(83)*occ_func_3_1(61))
     + (occ_func_3_1(79)*occ_func_3_1(63))
     + (occ_func_2_1(52)*occ_func_3_1(25))
     + (occ_func_2_1(30)*occ_func_3_1(99))
     + (occ_func_2_1(36)*occ_func_3_1(27))
     + (occ_func_2_1(46)*occ_func_3_1(111))
     + (occ_func_2_1(48)*occ_func_3_1(27))
     + (occ_func_2_1(34)*occ_func_3_1(103))
     + (occ_func_2_1(32)*occ_func_3_1(25))
     + (occ_func_2_1(50)*occ_func_3_1(107))
     + (occ_func_3_1(83)*occ_func_3_1(65))
     + (occ_func_3_1(29)*occ_func_3_1(107))
     + (occ_func_3_1(29)*occ_func_3_1(111))
     + (occ_func_3_1(67)*occ_func_3_1(55))
     + (occ_func_3_1(67)*occ_func_3_1(57))
     + (occ_func_3_1(79)*occ_func_3_1(59))
     + (occ_func_2_1(34)*occ_func_3_1(71))
     + (occ_func_2_1(48)*occ_func_3_1(59))
     + (occ_func_3_1(23)*occ_func_3_1(103))
     + (occ_func_2_1(50)*occ_func_3_1(75))
     + (occ_func_2_1(32)*occ_func_3_1(57))
     + (occ_func_3_1(21)*occ_func_3_1(99))
     + (occ_func_3_1(21)*occ_func_3_1(91))
     + (occ_func_3_1(23)*occ_func_3_1(95))
     + (occ_func_2_1(46)*occ_func_3_1(71))
     + (occ_func_2_1(36)*occ_func_3_1(55))
     + (occ_func_2_1(40)*occ_func_3_1(19))
     + (occ_func_2_1(42)*occ_func_3_1(95))
     + (occ_func_2_1(44)*occ_func_3_1(19))
     + (occ_func_2_1(38)*occ_func_3_1(91))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_54_at_1(int occ_i, int occ_f) const {
  // orbit_index: 54
  // function_index: 54
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(68)*occ_func_2_1(56))
     + (occ_func_2_1(68)*occ_func_2_1(54))
     + (occ_func_2_1(80)*occ_func_2_1(58))
     + (occ_func_3_1(37)*occ_func_2_1(72))
     + (occ_func_3_1(47)*occ_func_2_1(58))
     + (occ_func_3_1(53)*occ_func_2_1(76))
     + (occ_func_3_1(31)*occ_func_2_1(56))
     + (occ_func_2_1(22)*occ_func_2_1(104))
     + (occ_func_2_1(20)*occ_func_2_1(92))
     + (occ_func_2_1(20)*occ_func_2_1(100))
     + (occ_func_2_1(22)*occ_func_2_1(96))
     + (occ_func_3_1(49)*occ_func_2_1(72))
     + (occ_func_3_1(35)*occ_func_2_1(54))
     + (occ_func_3_1(39)*occ_func_2_1(18))
     + (occ_func_3_1(45)*occ_func_2_1(96))
     + (occ_func_3_1(43)*occ_func_2_1(18))
     + (occ_func_3_1(41)*occ_func_2_1(92))
     + (occ_func_3_1(41)*occ_func_2_1(88))
     + (occ_func_3_1(43)*occ_func_2_1(64))
     + (occ_func_3_1(45)*occ_func_2_1(88))
     + (occ_func_3_1(39)*occ_func_2_1(62))
     + (occ_func_3_1(33)*occ_func_2_1(76))
     + (occ_func_3_1(51)*occ_func_2_1(60))
     + (occ_func_2_1(84)*occ_func_2_1(60))
     + (occ_func_3_1(51)*occ_func_2_1(24))
     + (occ_func_3_1(33)*occ_func_2_1(100))
     + (occ_func_2_1(80)*occ_func_2_1(62))
     + (occ_func_3_1(47)*occ_func_2_1(26))
     + (occ_func_3_1(37)*occ_func_2_1(104))
     + (occ_func_3_1(35)*occ_func_2_1(26))
     + (occ_func_3_1(49)*occ_func_2_1(112))
     + (occ_func_3_1(31)*occ_func_2_1(24))
     + (occ_func_3_1(53)*occ_func_2_1(108))
     + (occ_func_2_1(84)*occ_func_2_1(64))
     + (occ_func_2_1(28)*occ_func_2_1(108))
     + (occ_func_2_1(28)*occ_func_2_1(112))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_55_at_0(int occ_i, int occ_f) const {
  // orbit_index: 55
  // function_index: 55
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(42)*occ_func_3_1(111))
     + (occ_func_2_1(40)*occ_func_3_1(29))
     + (occ_func_2_1(38)*occ_func_3_1(107))
     + (occ_func_2_1(44)*occ_func_3_1(29))
     + (occ_func_2_1(50)*occ_func_3_1(103))
     + (occ_func_2_1(32)*occ_func_3_1(23))
     + (occ_func_3_1(103)*occ_func_3_1(27))
     + (occ_func_2_1(32)*occ_func_3_1(59))
     + (occ_func_2_1(50)*occ_func_3_1(79))
     + (occ_func_3_1(107)*occ_func_3_1(25))
     + (occ_func_2_1(36)*occ_func_3_1(61))
     + (occ_func_2_1(46)*occ_func_3_1(83))
     + (occ_func_2_1(48)*occ_func_3_1(65))
     + (occ_func_2_1(34)*occ_func_3_1(83))
     + (occ_func_2_1(52)*occ_func_3_1(63))
     + (occ_func_2_1(30)*occ_func_3_1(79))
     + (occ_func_3_1(111)*occ_func_3_1(27))
     + (occ_func_3_1(63)*occ_func_3_1(87))
     + (occ_func_3_1(65)*occ_func_3_1(87))
     + (occ_func_3_1(95)*occ_func_3_1(19))
     + (occ_func_3_1(91)*occ_func_3_1(19))
     + (occ_func_3_1(99)*occ_func_3_1(25))
     + (occ_func_2_1(46)*occ_func_3_1(99))
     + (occ_func_2_1(36)*occ_func_3_1(21))
     + (occ_func_2_1(30)*occ_func_3_1(95))
     + (occ_func_2_1(52)*occ_func_3_1(23))
     + (occ_func_3_1(61)*occ_func_3_1(75))
     + (occ_func_3_1(55)*occ_func_3_1(71))
     + (occ_func_3_1(59)*occ_func_3_1(71))
     + (occ_func_3_1(57)*occ_func_3_1(75))
     + (occ_func_2_1(34)*occ_func_3_1(91))
     + (occ_func_2_1(48)*occ_func_3_1(21))
     + (occ_func_2_1(44)*occ_func_3_1(57))
     + (occ_func_2_1(38)*occ_func_3_1(67))
     + (occ_func_2_1(40)*occ_func_3_1(55))
     + (occ_func_2_1(42)*occ_func_3_1(67))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_55_at_1(int occ_i, int occ_f) const {
  // orbit_index: 55
  // function_index: 55
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(92)*occ_func_2_1(18))
     + (occ_func_2_1(96)*occ_func_2_1(18))
     + (occ_func_2_1(100)*occ_func_2_1(24))
     + (occ_func_3_1(49)*occ_func_2_1(100))
     + (occ_func_3_1(35)*occ_func_2_1(20))
     + (occ_func_2_1(60)*occ_func_2_1(76))
     + (occ_func_3_1(33)*occ_func_2_1(96))
     + (occ_func_3_1(51)*occ_func_2_1(22))
     + (occ_func_2_1(58)*occ_func_2_1(72))
     + (occ_func_2_1(54)*occ_func_2_1(72))
     + (occ_func_2_1(56)*occ_func_2_1(76))
     + (occ_func_3_1(37)*occ_func_2_1(92))
     + (occ_func_3_1(47)*occ_func_2_1(20))
     + (occ_func_3_1(43)*occ_func_2_1(56))
     + (occ_func_3_1(41)*occ_func_2_1(68))
     + (occ_func_3_1(39)*occ_func_2_1(54))
     + (occ_func_3_1(45)*occ_func_2_1(68))
     + (occ_func_3_1(41)*occ_func_2_1(108))
     + (occ_func_3_1(43)*occ_func_2_1(28))
     + (occ_func_3_1(45)*occ_func_2_1(112))
     + (occ_func_3_1(39)*occ_func_2_1(28))
     + (occ_func_3_1(53)*occ_func_2_1(104))
     + (occ_func_3_1(31)*occ_func_2_1(22))
     + (occ_func_2_1(104)*occ_func_2_1(26))
     + (occ_func_2_1(108)*occ_func_2_1(24))
     + (occ_func_3_1(31)*occ_func_2_1(58))
     + (occ_func_3_1(53)*occ_func_2_1(80))
     + (occ_func_3_1(47)*occ_func_2_1(64))
     + (occ_func_3_1(37)*occ_func_2_1(84))
     + (occ_func_3_1(35)*occ_func_2_1(60))
     + (occ_func_3_1(49)*occ_func_2_1(84))
     + (occ_func_3_1(51)*occ_func_2_1(62))
     + (occ_func_3_1(33)*occ_func_2_1(80))
     + (occ_func_2_1(112)*occ_func_2_1(26))
     + (occ_func_2_1(62)*occ_func_2_1(88))
     + (occ_func_2_1(64)*occ_func_2_1(88))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_56_at_0(int occ_i, int occ_f) const {
  // orbit_index: 56
  // function_index: 56
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(60))
     + (occ_func_2_1(58)*occ_func_3_1(59))
     + (occ_func_3_1(1)*occ_func_3_1(61))
     + (occ_func_3_1(1)*occ_func_2_1(62))
     + (occ_func_2_1(56)*occ_func_3_1(57))
     + (occ_func_3_1(1)*occ_func_3_1(63))
     + (occ_func_3_1(1)*occ_func_2_1(64))
     + (occ_func_2_1(54)*occ_func_3_1(55))
     + (occ_func_3_1(1)*occ_func_3_1(65))
     + (occ_func_3_1(15)*occ_func_2_1(58))
     + (occ_func_2_1(60)*occ_func_3_1(103))
     + (occ_func_3_1(1)*occ_func_2_1(58))
     + (occ_func_2_1(60)*occ_func_3_1(61))
     + (occ_func_3_1(15)*occ_func_2_1(56))
     + (occ_func_2_1(62)*occ_func_3_1(107))
     + (occ_func_3_1(1)*occ_func_2_1(56))
     + (occ_func_2_1(62)*occ_func_3_1(63))
     + (occ_func_3_1(15)*occ_func_2_1(54))
     + (occ_func_2_1(64)*occ_func_3_1(111))
     + (occ_func_3_1(1)*occ_func_2_1(54))
     + (occ_func_2_1(64)*occ_func_3_1(65))
     + (occ_func_3_1(15)*occ_func_3_1(103))
     + (occ_func_3_1(15)*occ_func_2_1(60))
     + (occ_func_2_1(58)*occ_func_3_1(99))
     + (occ_func_3_1(15)*occ_func_3_1(107))
     + (occ_func_3_1(15)*occ_func_2_1(62))
     + (occ_func_2_1(56)*occ_func_3_1(95))
     + (occ_func_3_1(15)*occ_func_3_1(111))
     + (occ_func_3_1(15)*occ_func_2_1(64))
     + (occ_func_2_1(54)*occ_func_3_1(91))
     + (occ_func_3_1(1)*occ_func_3_1(59))
     + (occ_func_3_1(15)*occ_func_3_1(99))
     + (occ_func_3_1(1)*occ_func_3_1(57))
     + (occ_func_3_1(15)*occ_func_3_1(95))
     + (occ_func_3_1(1)*occ_func_3_1(55))
     + (occ_func_3_1(15)*occ_func_3_1(91))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_56_at_1(int occ_i, int occ_f) const {
  // orbit_index: 56
  // function_index: 56
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(60))
     + (occ_func_2_1(0)*occ_func_3_1(61))
     + (occ_func_3_1(59)*occ_func_2_1(58))
     + (occ_func_2_1(0)*occ_func_2_1(62))
     + (occ_func_2_1(0)*occ_func_3_1(63))
     + (occ_func_3_1(57)*occ_func_2_1(56))
     + (occ_func_2_1(0)*occ_func_2_1(64))
     + (occ_func_2_1(0)*occ_func_3_1(65))
     + (occ_func_3_1(55)*occ_func_2_1(54))
     + (occ_func_2_1(16)*occ_func_2_1(100))
     + (occ_func_2_1(0)*occ_func_2_1(58))
     + (occ_func_2_1(16)*occ_func_2_1(96))
     + (occ_func_2_1(0)*occ_func_2_1(56))
     + (occ_func_2_1(16)*occ_func_2_1(92))
     + (occ_func_2_1(0)*occ_func_2_1(54))
     + (occ_func_2_1(16)*occ_func_3_1(61))
     + (occ_func_3_1(59)*occ_func_2_1(100))
     + (occ_func_2_1(16)*occ_func_2_1(104))
     + (occ_func_2_1(16)*occ_func_3_1(63))
     + (occ_func_3_1(57)*occ_func_2_1(96))
     + (occ_func_2_1(16)*occ_func_2_1(108))
     + (occ_func_2_1(16)*occ_func_3_1(65))
     + (occ_func_3_1(55)*occ_func_2_1(92))
     + (occ_func_2_1(16)*occ_func_2_1(112))
     + (occ_func_2_1(0)*occ_func_3_1(59))
     + (occ_func_3_1(61)*occ_func_2_1(60))
     + (occ_func_2_1(16)*occ_func_3_1(59))
     + (occ_func_3_1(61)*occ_func_2_1(104))
     + (occ_func_2_1(0)*occ_func_3_1(57))
     + (occ_func_3_1(63)*occ_func_2_1(62))
     + (occ_func_2_1(16)*occ_func_3_1(57))
     + (occ_func_3_1(63)*occ_func_2_1(108))
     + (occ_func_2_1(0)*occ_func_3_1(55))
     + (occ_func_3_1(65)*occ_func_2_1(64))
     + (occ_func_2_1(16)*occ_func_3_1(55))
     + (occ_func_3_1(65)*occ_func_2_1(112))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_57_at_0(int occ_i, int occ_f) const {
  // orbit_index: 57
  // function_index: 57
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(16)*occ_func_3_1(61))
     + (occ_func_2_1(14)*occ_func_3_1(103))
     + (occ_func_2_1(16)*occ_func_3_1(63))
     + (occ_func_2_1(14)*occ_func_3_1(107))
     + (occ_func_2_1(16)*occ_func_3_1(65))
     + (occ_func_2_1(14)*occ_func_3_1(111))
     + (occ_func_3_1(103)*occ_func_3_1(61))
     + (occ_func_3_1(107)*occ_func_3_1(63))
     + (occ_func_3_1(111)*occ_func_3_1(65))
     + (occ_func_3_1(59)*occ_func_3_1(99))
     + (occ_func_3_1(95)*occ_func_3_1(57))
     + (occ_func_3_1(91)*occ_func_3_1(55))
     + (occ_func_2_1(16)*occ_func_3_1(59))
     + (occ_func_2_1(14)*occ_func_3_1(99))
     + (occ_func_2_1(16)*occ_func_3_1(57))
     + (occ_func_2_1(14)*occ_func_3_1(95))
     + (occ_func_2_1(16)*occ_func_3_1(55))
     + (occ_func_2_1(14)*occ_func_3_1(91))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_57_at_1(int occ_i, int occ_f) const {
  // orbit_index: 57
  // function_index: 57
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(58)*occ_func_2_1(100))
     + (occ_func_2_1(56)*occ_func_2_1(96))
     + (occ_func_2_1(54)*occ_func_2_1(92))
     + (occ_func_3_1(17)*occ_func_2_1(100))
     + (occ_func_3_1(15)*occ_func_2_1(58))
     + (occ_func_3_1(17)*occ_func_2_1(96))
     + (occ_func_3_1(15)*occ_func_2_1(56))
     + (occ_func_3_1(17)*occ_func_2_1(92))
     + (occ_func_3_1(15)*occ_func_2_1(54))
     + (occ_func_3_1(15)*occ_func_2_1(60))
     + (occ_func_3_1(17)*occ_func_2_1(104))
     + (occ_func_3_1(17)*occ_func_2_1(108))
     + (occ_func_3_1(15)*occ_func_2_1(62))
     + (occ_func_3_1(17)*occ_func_2_1(112))
     + (occ_func_3_1(15)*occ_func_2_1(64))
     + (occ_func_2_1(60)*occ_func_2_1(104))
     + (occ_func_2_1(62)*occ_func_2_1(108))
     + (occ_func_2_1(64)*occ_func_2_1(112))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_58_at_0(int occ_i, int occ_f) const {
  // orbit_index: 58
  // function_index: 58
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(103)*occ_func_3_1(111))
     + (occ_func_3_1(103)*occ_func_2_1(64))
     + (occ_func_3_1(95)*occ_func_2_1(54))
     + (occ_func_3_1(107)*occ_func_2_1(58))
     + (occ_func_3_1(111)*occ_func_2_1(60))
     + (occ_func_3_1(61)*occ_func_2_1(56))
     + (occ_func_3_1(65)*occ_func_2_1(62))
     + (occ_func_3_1(63)*occ_func_2_1(64))
     + (occ_func_3_1(59)*occ_func_2_1(54))
     + (occ_func_3_1(63)*occ_func_3_1(65))
     + (occ_func_3_1(91)*occ_func_3_1(95))
     + (occ_func_3_1(107)*occ_func_3_1(99))
     + (occ_func_3_1(91)*occ_func_2_1(56))
     + (occ_func_3_1(99)*occ_func_2_1(62))
     + (occ_func_3_1(55)*occ_func_2_1(58))
     + (occ_func_3_1(57)*occ_func_2_1(60))
     + (occ_func_3_1(61)*occ_func_3_1(57))
     + (occ_func_3_1(55)*occ_func_3_1(59))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_58_at_1(int occ_i, int occ_f) const {
  // orbit_index: 58
  // function_index: 58
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(100)*occ_func_3_1(63))
     + (occ_func_2_1(92)*occ_func_3_1(57))
     + (occ_func_2_1(100)*occ_func_2_1(108))
     + (occ_func_2_1(96)*occ_func_2_1(92))
     + (occ_func_2_1(58)*occ_func_2_1(54))
     + (occ_func_2_1(56)*occ_func_2_1(60))
     + (occ_func_2_1(56)*occ_func_3_1(61))
     + (occ_func_2_1(54)*occ_func_3_1(59))
     + (occ_func_2_1(112)*occ_func_3_1(61))
     + (occ_func_2_1(108)*occ_func_3_1(59))
     + (occ_func_2_1(96)*occ_func_3_1(55))
     + (occ_func_2_1(104)*occ_func_3_1(65))
     + (occ_func_2_1(112)*occ_func_2_1(104))
     + (occ_func_2_1(64)*occ_func_2_1(62))
     + (occ_func_2_1(58)*occ_func_3_1(55))
     + (occ_func_2_1(62)*occ_func_3_1(65))
     + (occ_func_2_1(64)*occ_func_3_1(63))
     + (occ_func_2_1(60)*occ_func_3_1(57))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_59_at_0(int occ_i, int occ_f) const {
  // orbit_index: 59
  // function_index: 59
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(60)*occ_func_3_1(65))
     + (occ_func_2_1(58)*occ_func_3_1(63))
     + (occ_func_2_1(54)*occ_func_3_1(57))
     + (occ_func_2_1(64)*occ_func_3_1(61))
     + (occ_func_3_1(65)*occ_func_3_1(61))
     + (occ_func_3_1(111)*occ_func_3_1(107))
     + (occ_func_2_1(54)*occ_func_3_1(99))
     + (occ_func_2_1(64)*occ_func_3_1(107))
     + (occ_func_2_1(62)*occ_func_3_1(111))
     + (occ_func_2_1(56)*occ_func_3_1(103))
     + (occ_func_2_1(62)*occ_func_3_1(59))
     + (occ_func_2_1(56)*occ_func_3_1(55))
     + (occ_func_3_1(59)*occ_func_3_1(63))
     + (occ_func_3_1(57)*occ_func_3_1(55))
     + (occ_func_3_1(99)*occ_func_3_1(91))
     + (occ_func_3_1(95)*occ_func_3_1(103))
     + (occ_func_2_1(60)*occ_func_3_1(95))
     + (occ_func_2_1(58)*occ_func_3_1(91))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_59_at_1(int occ_i, int occ_f) const {
  // orbit_index: 59
  // function_index: 59
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(54)*occ_func_2_1(56))
     + (occ_func_2_1(62)*occ_func_2_1(58))
     + (occ_func_3_1(57)*occ_func_2_1(54))
     + (occ_func_3_1(63)*occ_func_2_1(58))
     + (occ_func_3_1(59)*occ_func_2_1(92))
     + (occ_func_3_1(61)*occ_func_2_1(96))
     + (occ_func_2_1(104)*occ_func_2_1(96))
     + (occ_func_2_1(92)*occ_func_2_1(100))
     + (occ_func_2_1(60)*occ_func_2_1(64))
     + (occ_func_3_1(65)*occ_func_2_1(60))
     + (occ_func_3_1(55)*occ_func_2_1(56))
     + (occ_func_3_1(59)*occ_func_2_1(62))
     + (occ_func_3_1(61)*occ_func_2_1(64))
     + (occ_func_3_1(57)*occ_func_2_1(104))
     + (occ_func_3_1(63)*occ_func_2_1(112))
     + (occ_func_3_1(65)*occ_func_2_1(108))
     + (occ_func_3_1(55)*occ_func_2_1(100))
     + (occ_func_2_1(108)*occ_func_2_1(112))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_60_at_0(int occ_i, int occ_f) const {
  // orbit_index: 60
  // function_index: 60
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_3_1(1))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_3_1(1))
     + (occ_func_3_1(15)*occ_func_2_1(8)*occ_func_3_1(43))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_3_1(15))
     + (occ_func_3_1(15)*occ_func_3_1(35)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(15))
     + (occ_func_3_1(15)*occ_func_3_1(51)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(2)*occ_func_3_1(15))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_60_at_1(int occ_i, int occ_f) const {
  // orbit_index: 60
  // function_index: 60
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(0))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(0))
     + (occ_func_2_1(16)*occ_func_2_1(44)*occ_func_3_1(9))
     + (occ_func_2_1(40)*occ_func_3_1(7)*occ_func_2_1(16))
     + (occ_func_2_1(16)*occ_func_3_1(5)*occ_func_2_1(36))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_2_1(16))
     + (occ_func_2_1(16)*occ_func_3_1(13)*occ_func_2_1(52))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_2_1(16))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_61_at_0(int occ_i, int occ_f) const {
  // orbit_index: 61
  // function_index: 61
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(8))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_2_1(10)*occ_func_2_1(6))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_2_1(2))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(12))
     + (occ_func_3_1(15)*occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(8))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(2))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(6))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(10))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(4))
     + (occ_func_3_1(15)*occ_func_3_1(51)*occ_func_3_1(43))
     + (occ_func_3_1(15)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(10))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_2_1(4))
     + (occ_func_3_1(15)*occ_func_3_1(39)*occ_func_3_1(47))
     + (occ_func_3_1(15)*occ_func_3_1(35)*occ_func_3_1(31))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(9))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_3_1(3))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_61_at_1(int occ_i, int occ_f) const {
  // orbit_index: 61
  // function_index: 61
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(11))
     + (occ_func_3_1(3)*occ_func_2_1(2)*occ_func_3_1(7))
     + (occ_func_3_1(5)*occ_func_2_1(4)*occ_func_3_1(9))
     + (occ_func_2_1(16)*occ_func_2_1(48)*occ_func_2_1(40))
     + (occ_func_2_1(16)*occ_func_2_1(32)*occ_func_2_1(36))
     + (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_2_1(6))
     + (occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(5))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(11))
     + (occ_func_2_1(16)*occ_func_2_1(44)*occ_func_2_1(52))
     + (occ_func_2_1(16)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(13))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(3))
     + (occ_func_2_1(16)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(7))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(9))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(9))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(13))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(3))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(3))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(5))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(11))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_62_at_0(int occ_i, int occ_f) const {
  // orbit_index: 62
  // function_index: 62
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(10))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(4))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(6))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(2))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(12))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(8))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(6))
     + (occ_func_3_1(15)*occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(2))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(12))
     + (occ_func_3_1(15)*occ_func_2_1(2)*occ_func_2_1(6))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(10))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(4))
     + (occ_func_3_1(15)*occ_func_3_1(51)*occ_func_3_1(47))
     + (occ_func_3_1(15)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_2_1(8))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_2_1(6))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(15)*occ_func_3_1(35)*occ_func_3_1(43))
     + (occ_func_3_1(15)*occ_func_3_1(39)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_62_at_1(int occ_i, int occ_f) const {
  // orbit_index: 62
  // function_index: 62
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(3)*occ_func_2_1(2)*occ_func_3_1(5))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(11))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(6))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_2_1(44)*occ_func_2_1(36))
     + (occ_func_2_1(16)*occ_func_2_1(32)*occ_func_2_1(40))
     + (occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(11))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(7))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(9))
     + (occ_func_2_1(16)*occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(13))
     + (occ_func_3_1(5)*occ_func_2_1(4)*occ_func_3_1(3))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(7))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(9))
     + (occ_func_2_1(16)*occ_func_3_1(5)*occ_func_3_1(9))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(13))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(3))
     + (occ_func_2_1(16)*occ_func_3_1(7)*occ_func_3_1(3))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(5))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(11))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_63_at_0(int occ_i, int occ_f) const {
  // orbit_index: 63
  // function_index: 63
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(13))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_3_1(9))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(11))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_3_1(47)*occ_func_2_1(6))
     + (occ_func_3_1(43)*occ_func_2_1(8)*occ_func_3_1(51))
     + (occ_func_3_1(15)*occ_func_2_1(2)*occ_func_3_1(35))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_3_1(43))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(9))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_3_1(13))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(7))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_3_1(43)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(2)*occ_func_3_1(35))
     + (occ_func_3_1(15)*occ_func_3_1(51)*occ_func_2_1(8))
     + (occ_func_3_1(39)*occ_func_2_1(6)*occ_func_3_1(47))
     + (occ_func_3_1(15)*occ_func_3_1(39)*occ_func_2_1(10))
     + (occ_func_3_1(35)*occ_func_2_1(4)*occ_func_3_1(31))
     + (occ_func_3_1(15)*occ_func_3_1(31)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(39))
     + (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(5))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_3_1(3))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(3))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_3_1(5))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_63_at_1(int occ_i, int occ_f) const {
  // orbit_index: 63
  // function_index: 63
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(13))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(6))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_3_1(11)*occ_func_2_1(40))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_2_1(32))
     + (occ_func_2_1(16)*occ_func_2_1(32)*occ_func_3_1(5))
     + (occ_func_2_1(48)*occ_func_3_1(11)*occ_func_2_1(40))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(2))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(7))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_3_1(9)*occ_func_2_1(52))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_2_1(48))
     + (occ_func_2_1(16)*occ_func_3_1(13)*occ_func_2_1(44))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_2_1(36))
     + (occ_func_2_1(16)*occ_func_3_1(7)*occ_func_2_1(48))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_2_1(52))
     + (occ_func_2_1(16)*occ_func_3_1(3)*occ_func_2_1(36))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(5))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(12))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(10))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_64_at_0(int occ_i, int occ_f) const {
  // orbit_index: 64
  // function_index: 64
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_3_1(13))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_3_1(9))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_3_1(5))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_3_1(11))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_3_1(13))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_3_1(5))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(15)*occ_func_3_1(43)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(51))
     + (occ_func_3_1(15)*occ_func_2_1(2)*occ_func_3_1(39))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_3_1(47))
     + (occ_func_3_1(15)*occ_func_3_1(47)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(2)*occ_func_3_1(39))
     + (occ_func_3_1(15)*occ_func_3_1(51)*occ_func_2_1(10))
     + (occ_func_3_1(35)*occ_func_2_1(4)*occ_func_3_1(43))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_3_1(7))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_3_1(3))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_3_1(35)*occ_func_2_1(8))
     + (occ_func_3_1(39)*occ_func_2_1(6)*occ_func_3_1(31))
     + (occ_func_3_1(15)*occ_func_3_1(31)*occ_func_2_1(6))
     + (occ_func_3_1(43)*occ_func_2_1(8)*occ_func_3_1(35))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_64_at_1(int occ_i, int occ_f) const {
  // orbit_index: 64
  // function_index: 64
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_3_1(13))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(4))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(10))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(2))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_3_1(5))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(6))
     + (occ_func_2_1(16)*occ_func_3_1(9)*occ_func_2_1(36))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_2_1(32))
     + (occ_func_2_1(16)*occ_func_2_1(32)*occ_func_3_1(7))
     + (occ_func_2_1(44)*occ_func_3_1(9)*occ_func_2_1(36))
     + (occ_func_2_1(16)*occ_func_3_1(11)*occ_func_2_1(52))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_2_1(44))
     + (occ_func_2_1(16)*occ_func_3_1(13)*occ_func_2_1(48))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_2_1(40))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_3_1(7))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(12))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_3_1(5)*occ_func_2_1(44))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_2_1(16)*occ_func_3_1(3)*occ_func_2_1(40))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_2_1(48))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_65_at_0(int occ_i, int occ_f) const {
  // orbit_index: 65
  // function_index: 65
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_3_1(43))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_3_1(47))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_3_1(51))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(6))
     + (occ_func_3_1(43)*occ_func_2_1(8)*occ_func_3_1(9))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(10)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(2))
     + (occ_func_3_1(51)*occ_func_2_1(12)*occ_func_3_1(13))
     + (occ_func_3_1(1)*occ_func_3_1(15)*occ_func_2_1(8))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(39))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(10))
     + (occ_func_3_1(35)*occ_func_2_1(4)*occ_func_3_1(5))
     + (occ_func_3_1(15)*occ_func_3_1(1)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(2)*occ_func_3_1(3))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(7))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_3_1(39))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(5))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_3_1(35))
     + (occ_func_3_1(1)*occ_func_2_1(16)*occ_func_3_1(3))
     + (occ_func_2_1(14)*occ_func_3_1(15)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_65_at_1(int occ_i, int occ_f) const {
  // orbit_index: 65
  // function_index: 65
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(40))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(36))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(13))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(32))
     + (occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(40))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(6))
     + (occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(36))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(32))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(2))
     + (occ_func_2_1(0)*occ_func_3_1(15)*occ_func_2_1(8))
     + (occ_func_3_1(17)*occ_func_2_1(16)*occ_func_2_1(44))
     + (occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(48))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(10))
     + (occ_func_2_1(16)*occ_func_3_1(17)*occ_func_2_1(52))
     + (occ_func_3_1(15)*occ_func_2_1(0)*occ_func_2_1(12))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(7))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(5))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(48))
     + (occ_func_2_1(0)*occ_func_2_1(16)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(52))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_66_at_0(int occ_i, int occ_f) const {
  // orbit_index: 66
  // function_index: 66
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(16)*occ_func_3_1(9)*occ_func_3_1(13))
     + (occ_func_2_1(14)*occ_func_3_1(43)*occ_func_3_1(51))
     + (occ_func_2_1(14)*occ_func_3_1(47)*occ_func_3_1(51))
     + (occ_func_2_1(16)*occ_func_3_1(11)*occ_func_3_1(13))
     + (occ_func_3_1(9)*occ_func_3_1(43)*occ_func_2_1(12))
     + (occ_func_3_1(5)*occ_func_3_1(35)*occ_func_2_1(2))
     + (occ_func_3_1(11)*occ_func_3_1(47)*occ_func_2_1(6))
     + (occ_func_3_1(13)*occ_func_3_1(51)*occ_func_2_1(8))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(12))
     + (occ_func_3_1(39)*occ_func_3_1(7)*occ_func_2_1(2))
     + (occ_func_3_1(43)*occ_func_3_1(9)*occ_func_2_1(4))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(10))
     + (occ_func_3_1(3)*occ_func_3_1(31)*occ_func_2_1(4))
     + (occ_func_3_1(7)*occ_func_3_1(39)*occ_func_2_1(10))
     + (occ_func_3_1(31)*occ_func_3_1(3)*occ_func_2_1(6))
     + (occ_func_3_1(35)*occ_func_3_1(5)*occ_func_2_1(8))
     + (occ_func_2_1(16)*occ_func_3_1(11)*occ_func_3_1(7))
     + (occ_func_2_1(14)*occ_func_3_1(47)*occ_func_3_1(39))
     + (occ_func_2_1(16)*occ_func_3_1(3)*occ_func_3_1(5))
     + (occ_func_2_1(14)*occ_func_3_1(31)*occ_func_3_1(35))
     + (occ_func_2_1(14)*occ_func_3_1(43)*occ_func_3_1(35))
     + (occ_func_2_1(16)*occ_func_3_1(9)*occ_func_3_1(5))
     + (occ_func_2_1(14)*occ_func_3_1(31)*occ_func_3_1(39))
     + (occ_func_2_1(16)*occ_func_3_1(3)*occ_func_3_1(7))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_66_at_1(int occ_i, int occ_f) const {
  // orbit_index: 66
  // function_index: 66
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(6)*occ_func_2_1(40)*occ_func_3_1(11))
     + (occ_func_2_1(2)*occ_func_2_1(32)*occ_func_3_1(5))
     + (occ_func_2_1(36)*occ_func_2_1(4)*occ_func_3_1(9))
     + (occ_func_2_1(32)*occ_func_2_1(2)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_2_1(6)*occ_func_2_1(10))
     + (occ_func_3_1(17)*occ_func_2_1(40)*occ_func_2_1(48))
     + (occ_func_3_1(15)*occ_func_2_1(4)*occ_func_2_1(2))
     + (occ_func_3_1(17)*occ_func_2_1(36)*occ_func_2_1(32))
     + (occ_func_3_1(17)*occ_func_2_1(36)*occ_func_2_1(44))
     + (occ_func_3_1(15)*occ_func_2_1(4)*occ_func_2_1(8))
     + (occ_func_3_1(17)*occ_func_2_1(40)*occ_func_2_1(32))
     + (occ_func_3_1(15)*occ_func_2_1(6)*occ_func_2_1(2))
     + (occ_func_3_1(15)*occ_func_2_1(12)*occ_func_2_1(8))
     + (occ_func_3_1(17)*occ_func_2_1(52)*occ_func_2_1(44))
     + (occ_func_3_1(17)*occ_func_2_1(52)*occ_func_2_1(48))
     + (occ_func_3_1(15)*occ_func_2_1(12)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_2_1(36)*occ_func_3_1(3))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(13))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(9))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(7))
     + (occ_func_2_1(40)*occ_func_2_1(6)*occ_func_3_1(3))
     + (occ_func_2_1(48)*occ_func_2_1(10)*occ_func_3_1(13))
     + (occ_func_2_1(52)*occ_func_2_1(12)*occ_func_3_1(11))
     + (occ_func_2_1(44)*occ_func_2_1(8)*occ_func_3_1(5))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_67_at_0(int occ_i, int occ_f) const {
  // orbit_index: 67
  // function_index: 67
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(8)*occ_func_2_1(10)*occ_func_2_1(12))
     + (occ_func_2_1(6)*occ_func_2_1(24)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_2_1(22)*occ_func_2_1(8))
     + (occ_func_2_1(2)*occ_func_2_1(4)*occ_func_2_1(6))
     + (occ_func_2_1(2)*occ_func_2_1(8)*occ_func_2_1(4))
     + (occ_func_2_1(12)*occ_func_2_1(26)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_2_1(20)*occ_func_2_1(2))
     + (occ_func_2_1(10)*occ_func_2_1(6)*occ_func_2_1(12))
     + (occ_func_2_1(10)*occ_func_2_1(2)*occ_func_2_1(6))
     + (occ_func_2_1(4)*occ_func_2_1(18)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_2_1(28)*occ_func_2_1(10))
     + (occ_func_2_1(8)*occ_func_2_1(12)*occ_func_2_1(4))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_67_at_1(int occ_i, int occ_f) const {
  // orbit_index: 67
  // function_index: 67
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(7)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(9)*occ_func_3_1(23)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_3_1(25)*occ_func_3_1(7))
     + (occ_func_3_1(13)*occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_3_1(13)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(3)*occ_func_3_1(21)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_3_1(27)*occ_func_3_1(13))
     + (occ_func_3_1(5)*occ_func_3_1(9)*occ_func_3_1(3))
     + (occ_func_3_1(5)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(11)*occ_func_3_1(29)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_3_1(19)*occ_func_3_1(5))
     + (occ_func_3_1(7)*occ_func_3_1(3)*occ_func_3_1(11))
  ) / 6.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_68_at_0(int occ_i, int occ_f) const {
  // orbit_index: 68
  // function_index: 68
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(1)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(24))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(22))
     + (occ_func_3_1(1)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_3_1(15)*occ_func_2_1(12)*occ_func_2_1(6))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_2_1(20))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(26))
     + (occ_func_3_1(1)*occ_func_2_1(6)*occ_func_2_1(12))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(26))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(20))
     + (occ_func_3_1(15)*occ_func_2_1(6)*occ_func_2_1(4))
     + (occ_func_2_1(8)*occ_func_3_1(43)*occ_func_2_1(22))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(24))
     + (occ_func_3_1(1)*occ_func_2_1(4)*occ_func_2_1(6))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(24))
     + (occ_func_2_1(8)*occ_func_3_1(9)*occ_func_2_1(22))
     + (occ_func_3_1(15)*occ_func_2_1(4)*occ_func_2_1(12))
     + (occ_func_2_1(10)*occ_func_3_1(47)*occ_func_2_1(28))
     + (occ_func_2_1(2)*occ_func_3_1(31)*occ_func_2_1(18))
     + (occ_func_3_1(1)*occ_func_2_1(12)*occ_func_2_1(4))
     + (occ_func_2_1(2)*occ_func_3_1(3)*occ_func_2_1(18))
     + (occ_func_2_1(10)*occ_func_3_1(11)*occ_func_2_1(28))
     + (occ_func_3_1(15)*occ_func_2_1(8)*occ_func_2_1(2))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(20))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(26))
     + (occ_func_3_1(15)*occ_func_2_1(2)*occ_func_2_1(10))
     + (occ_func_2_1(12)*occ_func_3_1(51)*occ_func_2_1(28))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_2_1(18))
     + (occ_func_3_1(1)*occ_func_2_1(2)*occ_func_2_1(8))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(26))
     + (occ_func_2_1(6)*occ_func_3_1(7)*occ_func_2_1(20))
     + (occ_func_3_1(1)*occ_func_2_1(10)*occ_func_2_1(2))
     + (occ_func_2_1(4)*occ_func_3_1(5)*occ_func_2_1(18))
     + (occ_func_2_1(12)*occ_func_3_1(13)*occ_func_2_1(28))
     + (occ_func_3_1(15)*occ_func_3_1(47)*occ_func_3_1(43))
     + (occ_func_3_1(15)*occ_func_2_1(10)*occ_func_2_1(8))
     + (occ_func_2_1(4)*occ_func_3_1(35)*occ_func_2_1(22))
     + (occ_func_2_1(6)*occ_func_3_1(39)*occ_func_2_1(24))
     + (occ_func_3_1(1)*occ_func_3_1(7)*occ_func_3_1(13))
     + (occ_func_3_1(15)*occ_func_3_1(51)*occ_func_3_1(39))
     + (occ_func_3_1(1)*occ_func_3_1(5)*occ_func_3_1(7))
     + (occ_func_3_1(15)*occ_func_3_1(39)*occ_func_3_1(35))
     + (occ_func_3_1(1)*occ_func_3_1(13)*occ_func_3_1(5))
     + (occ_func_3_1(15)*occ_func_3_1(35)*occ_func_3_1(51))
     + (occ_func_3_1(1)*occ_func_3_1(3)*occ_func_3_1(9))
     + (occ_func_3_1(1)*occ_func_3_1(11)*occ_func_3_1(3))
     + (occ_func_3_1(15)*occ_func_3_1(43)*occ_func_3_1(31))
     + (occ_func_3_1(15)*occ_func_3_1(31)*occ_func_3_1(47))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_68_at_1(int occ_i, int occ_f) const {
  // orbit_index: 68
  // function_index: 68
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(0)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_2_1(0)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(25))
     + (occ_func_3_1(5)*occ_func_2_1(4)*occ_func_3_1(23))
     + (occ_func_2_1(16)*occ_func_2_1(52)*occ_func_2_1(40))
     + (occ_func_2_1(0)*occ_func_2_1(6)*occ_func_2_1(12))
     + (occ_func_2_1(16)*occ_func_2_1(40)*occ_func_2_1(36))
     + (occ_func_2_1(0)*occ_func_2_1(4)*occ_func_2_1(6))
     + (occ_func_2_1(16)*occ_func_2_1(36)*occ_func_2_1(52))
     + (occ_func_2_1(0)*occ_func_2_1(12)*occ_func_2_1(4))
     + (occ_func_2_1(16)*occ_func_2_1(44)*occ_func_2_1(32))
     + (occ_func_2_1(16)*occ_func_2_1(32)*occ_func_2_1(48))
     + (occ_func_2_1(0)*occ_func_2_1(2)*occ_func_2_1(8))
     + (occ_func_2_1(0)*occ_func_2_1(10)*occ_func_2_1(2))
     + (occ_func_2_1(16)*occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(23))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(25))
     + (occ_func_2_1(16)*occ_func_2_1(48)*occ_func_2_1(44))
     + (occ_func_2_1(0)*occ_func_3_1(7)*occ_func_3_1(13))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(27))
     + (occ_func_3_1(3)*occ_func_2_1(2)*occ_func_3_1(21))
     + (occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(7))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(21))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(27))
     + (occ_func_2_1(0)*occ_func_3_1(5)*occ_func_3_1(7))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(25))
     + (occ_func_3_1(9)*occ_func_2_1(8)*occ_func_3_1(23))
     + (occ_func_2_1(16)*occ_func_3_1(7)*occ_func_3_1(5))
     + (occ_func_3_1(9)*occ_func_2_1(44)*occ_func_3_1(23))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(25))
     + (occ_func_2_1(0)*occ_func_3_1(13)*occ_func_3_1(5))
     + (occ_func_3_1(3)*occ_func_2_1(2)*occ_func_3_1(19))
     + (occ_func_3_1(11)*occ_func_2_1(10)*occ_func_3_1(29))
     + (occ_func_2_1(16)*occ_func_3_1(5)*occ_func_3_1(13))
     + (occ_func_3_1(11)*occ_func_2_1(48)*occ_func_3_1(29))
     + (occ_func_3_1(3)*occ_func_2_1(32)*occ_func_3_1(19))
     + (occ_func_2_1(0)*occ_func_3_1(3)*occ_func_3_1(9))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(27))
     + (occ_func_3_1(7)*occ_func_2_1(6)*occ_func_3_1(21))
     + (occ_func_2_1(0)*occ_func_3_1(11)*occ_func_3_1(3))
     + (occ_func_3_1(5)*occ_func_2_1(4)*occ_func_3_1(19))
     + (occ_func_3_1(13)*occ_func_2_1(12)*occ_func_3_1(29))
     + (occ_func_2_1(16)*occ_func_3_1(9)*occ_func_3_1(3))
     + (occ_func_3_1(7)*occ_func_2_1(40)*occ_func_3_1(21))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(27))
     + (occ_func_2_1(16)*occ_func_3_1(3)*occ_func_3_1(11))
     + (occ_func_3_1(13)*occ_func_2_1(52)*occ_func_3_1(29))
     + (occ_func_3_1(5)*occ_func_2_1(36)*occ_func_3_1(19))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_69_at_0(int occ_i, int occ_f) const {
  // orbit_index: 69
  // function_index: 69
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43)*occ_func_3_1(47)*occ_func_3_1(51))
     + (occ_func_3_1(43)*occ_func_2_1(26)*occ_func_2_1(12))
     + (occ_func_3_1(31)*occ_func_2_1(20)*occ_func_2_1(6))
     + (occ_func_3_1(35)*occ_func_2_1(2)*occ_func_2_1(8))
     + (occ_func_3_1(47)*occ_func_2_1(24)*occ_func_2_1(6))
     + (occ_func_3_1(43)*occ_func_2_1(22)*occ_func_2_1(4))
     + (occ_func_3_1(51)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_3_1(9)*occ_func_2_1(22)*occ_func_2_1(4))
     + (occ_func_3_1(11)*occ_func_2_1(24)*occ_func_2_1(6))
     + (occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(8))
     + (occ_func_3_1(51)*occ_func_2_1(26)*occ_func_2_1(8))
     + (occ_func_3_1(39)*occ_func_2_1(20)*occ_func_2_1(2))
     + (occ_func_3_1(47)*occ_func_2_1(6)*occ_func_2_1(12))
     + (occ_func_3_1(7)*occ_func_2_1(20)*occ_func_2_1(2))
     + (occ_func_3_1(13)*occ_func_2_1(26)*occ_func_2_1(8))
     + (occ_func_3_1(11)*occ_func_2_1(12)*occ_func_2_1(6))
     + (occ_func_3_1(11)*occ_func_3_1(9)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(20)*occ_func_2_1(6))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_2_1(12))
     + (occ_func_3_1(5)*occ_func_2_1(8)*occ_func_2_1(2))
     + (occ_func_3_1(31)*occ_func_2_1(18)*occ_func_2_1(4))
     + (occ_func_3_1(47)*occ_func_2_1(28)*occ_func_2_1(12))
     + (occ_func_3_1(39)*occ_func_2_1(10)*occ_func_2_1(2))
     + (occ_func_3_1(35)*occ_func_2_1(18)*occ_func_2_1(2))
     + (occ_func_3_1(51)*occ_func_2_1(28)*occ_func_2_1(10))
     + (occ_func_3_1(43)*occ_func_2_1(12)*occ_func_2_1(4))
     + (occ_func_3_1(13)*occ_func_2_1(28)*occ_func_2_1(10))
     + (occ_func_3_1(5)*occ_func_2_1(18)*occ_func_2_1(2))
     + (occ_func_3_1(9)*occ_func_2_1(4)*occ_func_2_1(12))
     + (occ_func_3_1(11)*occ_func_2_1(28)*occ_func_2_1(12))
     + (occ_func_3_1(3)*occ_func_2_1(18)*occ_func_2_1(4))
     + (occ_func_3_1(7)*occ_func_2_1(2)*occ_func_2_1(10))
     + (occ_func_3_1(5)*occ_func_2_1(22)*occ_func_2_1(8))
     + (occ_func_3_1(7)*occ_func_2_1(24)*occ_func_2_1(10))
     + (occ_func_3_1(3)*occ_func_2_1(6)*occ_func_2_1(4))
     + (occ_func_3_1(13)*occ_func_3_1(7)*occ_func_3_1(11))
     + (occ_func_3_1(7)*occ_func_3_1(5)*occ_func_3_1(3))
     + (occ_func_3_1(35)*occ_func_3_1(39)*occ_func_3_1(31))
     + (occ_func_3_1(9)*occ_func_3_1(3)*occ_func_3_1(5))
     + (occ_func_3_1(31)*occ_func_3_1(43)*occ_func_3_1(35))
     + (occ_func_3_1(39)*occ_func_2_1(24)*occ_func_2_1(10))
     + (occ_func_3_1(35)*occ_func_2_1(22)*occ_func_2_1(8))
     + (occ_func_3_1(31)*occ_func_2_1(4)*occ_func_2_1(6))
     + (occ_func_3_1(39)*occ_func_3_1(51)*occ_func_3_1(47))
     + (occ_func_3_1(5)*occ_func_3_1(13)*occ_func_3_1(9))
     + (occ_func_3_1(3)*occ_func_3_1(11)*occ_func_3_1(7))
     + (occ_func_3_1(47)*occ_func_3_1(31)*occ_func_3_1(39))
     + (occ_func_3_1(51)*occ_func_3_1(35)*occ_func_3_1(43))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_69_at_1(int occ_i, int occ_f) const {
  // orbit_index: 69
  // function_index: 69
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40)*occ_func_3_1(25)*occ_func_3_1(11))
     + (occ_func_2_1(36)*occ_func_3_1(23)*occ_func_3_1(9))
     + (occ_func_2_1(32)*occ_func_3_1(5)*occ_func_3_1(7))
     + (occ_func_2_1(40)*occ_func_2_1(52)*occ_func_2_1(48))
     + (occ_func_2_1(36)*occ_func_2_1(40)*occ_func_2_1(32))
     + (occ_func_2_1(6)*occ_func_2_1(4)*occ_func_2_1(2))
     + (occ_func_2_1(32)*occ_func_2_1(44)*occ_func_2_1(36))
     + (occ_func_2_1(8)*occ_func_2_1(2)*occ_func_2_1(4))
     + (occ_func_2_1(4)*occ_func_3_1(23)*occ_func_3_1(9))
     + (occ_func_2_1(6)*occ_func_3_1(25)*occ_func_3_1(11))
     + (occ_func_2_1(2)*occ_func_3_1(7)*occ_func_3_1(5))
     + (occ_func_2_1(12)*occ_func_2_1(6)*occ_func_2_1(10))
     + (occ_func_2_1(52)*occ_func_2_1(36)*occ_func_2_1(44))
     + (occ_func_2_1(48)*occ_func_2_1(32)*occ_func_2_1(40))
     + (occ_func_2_1(2)*occ_func_2_1(10)*occ_func_2_1(6))
     + (occ_func_2_1(4)*occ_func_2_1(12)*occ_func_2_1(8))
     + (occ_func_2_1(10)*occ_func_2_1(8)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(21)*occ_func_3_1(7))
     + (occ_func_2_1(8)*occ_func_3_1(27)*occ_func_3_1(13))
     + (occ_func_2_1(4)*occ_func_3_1(9)*occ_func_3_1(3))
     + (occ_func_2_1(8)*occ_func_3_1(23)*occ_func_3_1(5))
     + (occ_func_2_1(10)*occ_func_3_1(25)*occ_func_3_1(7))
     + (occ_func_2_1(12)*occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_2_1(48)*occ_func_3_1(25)*occ_func_3_1(7))
     + (occ_func_2_1(44)*occ_func_3_1(23)*occ_func_3_1(5))
     + (occ_func_2_1(52)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_2_1(6)*occ_func_3_1(21)*occ_func_3_1(3))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_3_1(9))
     + (occ_func_2_1(10)*occ_func_3_1(13)*occ_func_3_1(7))
     + (occ_func_2_1(52)*occ_func_3_1(27)*occ_func_3_1(9))
     + (occ_func_2_1(40)*occ_func_3_1(21)*occ_func_3_1(3))
     + (occ_func_2_1(48)*occ_func_3_1(7)*occ_func_3_1(13))
     + (occ_func_2_1(44)*occ_func_2_1(48)*occ_func_2_1(52))
     + (occ_func_2_1(44)*occ_func_3_1(27)*occ_func_3_1(13))
     + (occ_func_2_1(32)*occ_func_3_1(21)*occ_func_3_1(7))
     + (occ_func_2_1(36)*occ_func_3_1(3)*occ_func_3_1(9))
     + (occ_func_2_1(10)*occ_func_3_1(29)*occ_func_3_1(13))
     + (occ_func_2_1(2)*occ_func_3_1(19)*occ_func_3_1(5))
     + (occ_func_2_1(6)*occ_func_3_1(3)*occ_func_3_1(11))
     + (occ_func_2_1(12)*occ_func_3_1(29)*occ_func_3_1(11))
     + (occ_func_2_1(4)*occ_func_3_1(19)*occ_func_3_1(3))
     + (occ_func_2_1(8)*occ_func_3_1(5)*occ_func_3_1(13))
     + (occ_func_2_1(36)*occ_func_3_1(19)*occ_func_3_1(3))
     + (occ_func_2_1(52)*occ_func_3_1(29)*occ_func_3_1(11))
     + (occ_func_2_1(44)*occ_func_3_1(13)*occ_func_3_1(5))
     + (occ_func_2_1(32)*occ_func_3_1(19)*occ_func_3_1(5))
     + (occ_func_2_1(48)*occ_func_3_1(29)*occ_func_3_1(13))
     + (occ_func_2_1(40)*occ_func_3_1(11)*occ_func_3_1(3))
  ) / 24.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_70_at_0(int occ_i, int occ_f) const {
  // orbit_index: 70
  // function_index: 70
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_3_1(43)*occ_func_3_1(47)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(35)*occ_func_3_1(39))
     + (occ_func_3_1(43)*occ_func_2_1(26)*occ_func_3_1(51))
     + (occ_func_3_1(31)*occ_func_2_1(20)*occ_func_3_1(39))
     + (occ_func_3_1(11)*occ_func_3_1(9)*occ_func_2_1(12))
     + (occ_func_2_1(2)*occ_func_3_1(7)*occ_func_3_1(5))
     + (occ_func_3_1(3)*occ_func_2_1(20)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_2_1(26)*occ_func_3_1(13))
     + (occ_func_3_1(31)*occ_func_2_1(18)*occ_func_3_1(35))
     + (occ_func_3_1(47)*occ_func_2_1(28)*occ_func_3_1(51))
     + (occ_func_3_1(11)*occ_func_2_1(28)*occ_func_3_1(13))
     + (occ_func_3_1(3)*occ_func_2_1(18)*occ_func_3_1(5))
     + (occ_func_3_1(9)*occ_func_2_1(22)*occ_func_3_1(5))
     + (occ_func_3_1(11)*occ_func_2_1(24)*occ_func_3_1(7))
     + (occ_func_3_1(9)*occ_func_3_1(3)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(13)*occ_func_3_1(7))
     + (occ_func_3_1(47)*occ_func_2_1(24)*occ_func_3_1(39))
     + (occ_func_3_1(43)*occ_func_2_1(22)*occ_func_3_1(35))
     + (occ_func_3_1(31)*occ_func_3_1(43)*occ_func_2_1(4))
     + (occ_func_2_1(10)*occ_func_3_1(39)*occ_func_3_1(51))
     + (occ_func_3_1(3)*occ_func_3_1(11)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(5)*occ_func_3_1(13))
     + (occ_func_3_1(47)*occ_func_3_1(31)*occ_func_2_1(6))
     + (occ_func_2_1(8)*occ_func_3_1(51)*occ_func_3_1(35))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_70_at_1(int occ_i, int occ_f) const {
  // orbit_index: 70
  // function_index: 70
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(40)*occ_func_3_1(25)*occ_func_2_1(48))
     + (occ_func_2_1(36)*occ_func_3_1(23)*occ_func_2_1(44))
     + (occ_func_2_1(40)*occ_func_2_1(52)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(32)*occ_func_2_1(44))
     + (occ_func_2_1(4)*occ_func_3_1(23)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(25)*occ_func_2_1(10))
     + (occ_func_2_1(12)*occ_func_2_1(6)*occ_func_3_1(11))
     + (occ_func_3_1(5)*occ_func_2_1(8)*occ_func_2_1(2))
     + (occ_func_2_1(52)*occ_func_2_1(36)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(48)*occ_func_2_1(32))
     + (occ_func_2_1(4)*occ_func_2_1(12)*occ_func_3_1(9))
     + (occ_func_3_1(7)*occ_func_2_1(2)*occ_func_2_1(10))
     + (occ_func_2_1(6)*occ_func_2_1(4)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(10)*occ_func_2_1(8))
     + (occ_func_2_1(6)*occ_func_3_1(21)*occ_func_2_1(2))
     + (occ_func_2_1(12)*occ_func_3_1(27)*occ_func_2_1(8))
     + (occ_func_2_1(36)*occ_func_2_1(40)*occ_func_3_1(3))
     + (occ_func_3_1(13)*occ_func_2_1(44)*occ_func_2_1(48))
     + (occ_func_2_1(52)*occ_func_3_1(27)*occ_func_2_1(44))
     + (occ_func_2_1(40)*occ_func_3_1(21)*occ_func_2_1(32))
     + (occ_func_2_1(12)*occ_func_3_1(29)*occ_func_2_1(10))
     + (occ_func_2_1(4)*occ_func_3_1(19)*occ_func_2_1(2))
     + (occ_func_2_1(36)*occ_func_3_1(19)*occ_func_2_1(32))
     + (occ_func_2_1(52)*occ_func_3_1(29)*occ_func_2_1(48))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_71_at_0(int occ_i, int occ_f) const {
  // orbit_index: 71
  // function_index: 71
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(16)*occ_func_3_1(9)*occ_func_3_1(11))
     + (occ_func_2_1(14)*occ_func_3_1(43)*occ_func_3_1(47))
     + (occ_func_3_1(31)*occ_func_3_1(3)*occ_func_2_1(20))
     + (occ_func_3_1(43)*occ_func_3_1(9)*occ_func_2_1(26))
     + (occ_func_3_1(43)*occ_func_3_1(9)*occ_func_2_1(22))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(24))
     + (occ_func_3_1(47)*occ_func_3_1(11)*occ_func_2_1(28))
     + (occ_func_3_1(31)*occ_func_3_1(3)*occ_func_2_1(18))
     + (occ_func_3_1(39)*occ_func_3_1(7)*occ_func_2_1(20))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(26))
     + (occ_func_3_1(51)*occ_func_3_1(13)*occ_func_2_1(28))
     + (occ_func_3_1(35)*occ_func_3_1(5)*occ_func_2_1(18))
     + (occ_func_3_1(7)*occ_func_3_1(39)*occ_func_2_1(24))
     + (occ_func_3_1(5)*occ_func_3_1(35)*occ_func_2_1(22))
     + (occ_func_2_1(16)*occ_func_3_1(7)*occ_func_3_1(13))
     + (occ_func_2_1(14)*occ_func_3_1(39)*occ_func_3_1(51))
     + (occ_func_2_1(16)*occ_func_3_1(5)*occ_func_3_1(7))
     + (occ_func_2_1(14)*occ_func_3_1(35)*occ_func_3_1(39))
     + (occ_func_2_1(16)*occ_func_3_1(13)*occ_func_3_1(5))
     + (occ_func_2_1(14)*occ_func_3_1(51)*occ_func_3_1(35))
     + (occ_func_2_1(16)*occ_func_3_1(3)*occ_func_3_1(9))
     + (occ_func_2_1(14)*occ_func_3_1(31)*occ_func_3_1(43))
     + (occ_func_2_1(16)*occ_func_3_1(11)*occ_func_3_1(3))
     + (occ_func_2_1(14)*occ_func_3_1(47)*occ_func_3_1(31))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_71_at_1(int occ_i, int occ_f) const {
  // orbit_index: 71
  // function_index: 71
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(6)*occ_func_2_1(40)*occ_func_3_1(25))
     + (occ_func_2_1(4)*occ_func_2_1(36)*occ_func_3_1(23))
     + (occ_func_3_1(17)*occ_func_2_1(52)*occ_func_2_1(40))
     + (occ_func_3_1(15)*occ_func_2_1(12)*occ_func_2_1(6))
     + (occ_func_3_1(17)*occ_func_2_1(40)*occ_func_2_1(36))
     + (occ_func_3_1(15)*occ_func_2_1(6)*occ_func_2_1(4))
     + (occ_func_3_1(17)*occ_func_2_1(36)*occ_func_2_1(52))
     + (occ_func_3_1(15)*occ_func_2_1(4)*occ_func_2_1(12))
     + (occ_func_3_1(17)*occ_func_2_1(44)*occ_func_2_1(32))
     + (occ_func_3_1(15)*occ_func_2_1(8)*occ_func_2_1(2))
     + (occ_func_3_1(17)*occ_func_2_1(32)*occ_func_2_1(48))
     + (occ_func_3_1(15)*occ_func_2_1(2)*occ_func_2_1(10))
     + (occ_func_3_1(15)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_3_1(17)*occ_func_2_1(44)*occ_func_2_1(48))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(27))
     + (occ_func_2_1(2)*occ_func_2_1(32)*occ_func_3_1(21))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(25))
     + (occ_func_2_1(8)*occ_func_2_1(44)*occ_func_3_1(23))
     + (occ_func_2_1(2)*occ_func_2_1(32)*occ_func_3_1(19))
     + (occ_func_2_1(10)*occ_func_2_1(48)*occ_func_3_1(29))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(27))
     + (occ_func_2_1(6)*occ_func_2_1(40)*occ_func_3_1(21))
     + (occ_func_2_1(4)*occ_func_2_1(36)*occ_func_3_1(19))
     + (occ_func_2_1(12)*occ_func_2_1(52)*occ_func_3_1(29))
  ) / 12.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_72_at_0(int occ_i, int occ_f) const {
  // orbit_index: 72
  // function_index: 72
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(24)*occ_func_2_1(10)*occ_func_2_1(28))
     + (occ_func_2_1(22)*occ_func_2_1(8)*occ_func_2_1(26))
     + (occ_func_2_1(4)*occ_func_2_1(6)*occ_func_2_1(12))
     + (occ_func_2_1(18)*occ_func_2_1(20)*occ_func_2_1(2))
     + (occ_func_2_1(26)*occ_func_2_1(12)*occ_func_2_1(28))
     + (occ_func_2_1(20)*occ_func_2_1(6)*occ_func_2_1(24))
     + (occ_func_2_1(2)*occ_func_2_1(8)*occ_func_2_1(10))
     + (occ_func_2_1(18)*occ_func_2_1(22)*occ_func_2_1(4))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_72_at_1(int occ_i, int occ_f) const {
  // orbit_index: 72
  // function_index: 72
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_3_1(25)*occ_func_3_1(11)*occ_func_3_1(29))
     + (occ_func_3_1(23)*occ_func_3_1(9)*occ_func_3_1(27))
     + (occ_func_3_1(5)*occ_func_3_1(7)*occ_func_3_1(13))
     + (occ_func_3_1(19)*occ_func_3_1(21)*occ_func_3_1(3))
     + (occ_func_3_1(29)*occ_func_3_1(13)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_3_1(5)*occ_func_3_1(23))
     + (occ_func_3_1(3)*occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_3_1(21)*occ_func_3_1(25)*occ_func_3_1(7))
  ) / 4.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_73_at_0(int occ_i, int occ_f) const {
  // orbit_index: 73
  // function_index: 73
  return (m_occ_func_2_1[occ_f] - m_occ_func_2_1[occ_i]) * (
    (occ_func_2_1(24)*occ_func_3_1(47)*occ_func_2_1(28))
     + (occ_func_2_1(22)*occ_func_3_1(43)*occ_func_2_1(26))
     + (occ_func_2_1(18)*occ_func_2_1(20)*occ_func_3_1(31))
     + (occ_func_2_1(20)*occ_func_3_1(3)*occ_func_2_1(18))
     + (occ_func_2_1(26)*occ_func_3_1(9)*occ_func_2_1(22))
     + (occ_func_2_1(28)*occ_func_2_1(24)*occ_func_3_1(11))
     + (occ_func_2_1(26)*occ_func_3_1(51)*occ_func_2_1(28))
     + (occ_func_2_1(20)*occ_func_3_1(39)*occ_func_2_1(24))
     + (occ_func_2_1(18)*occ_func_2_1(22)*occ_func_3_1(35))
     + (occ_func_2_1(20)*occ_func_3_1(7)*occ_func_2_1(24))
     + (occ_func_2_1(26)*occ_func_3_1(13)*occ_func_2_1(28))
     + (occ_func_2_1(22)*occ_func_2_1(18)*occ_func_3_1(5))
     + (occ_func_3_1(7)*occ_func_3_1(5)*occ_func_3_1(13))
     + (occ_func_3_1(35)*occ_func_3_1(39)*occ_func_3_1(51))
     + (occ_func_3_1(3)*occ_func_3_1(11)*occ_func_3_1(9))
     + (occ_func_3_1(43)*occ_func_3_1(47)*occ_func_3_1(31))
  ) / 8.0;
}

template<typename Scalar>
Scalar ZrO_Clexulator_formation_energy::eval_occ_delta_site_bfunc_73_at_1(int occ_i, int occ_f) const {
  // orbit_index: 73
  // function_index: 73
  return (m_occ_func_3_1[occ_f] - m_occ_func_3_1[occ_i]) * (
    (occ_func_2_1(36)*occ_func_2_1(40)*occ_func_2_1(52))
     + (occ_func_2_1(12)*occ_func_2_1(6)*occ_func_2_1(4))
     + (occ_func_2_1(32)*occ_func_2_1(44)*occ_func_2_1(48))
     + (occ_func_2_1(8)*occ_func_2_1(2)*occ_func_2_1(10))
     + (occ_func_3_1(23)*occ_func_2_1(8)*occ_func_3_1(27))
     + (occ_func_3_1(25)*occ_func_2_1(10)*occ_func_3_1(29))
     + (occ_func_3_1(21)*occ_func_3_1(19)*occ_func_2_1(2))
     + (occ_func_3_1(25)*occ_func_2_1(48)*occ_func_3_1(29))
     + (occ_func_3_1(23)*occ_func_2_1(44)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_3_1(21)*occ_func_2_1(32))
     + (occ_func_3_1(29)*occ_func_2_1(12)*occ_func_3_1(27))
     + (occ_func_3_1(19)*occ_func_2_1(4)*occ_func_3_1(23))
     + (occ_func_3_1(21)*occ_func_3_1(25)*occ_func_2_1(6))
     + (occ_func_3_1(25)*occ_func_2_1(40)*occ_func_3_1(21))
     + (occ_func_3_1(23)*occ_func_2_1(36)*occ_func_3_1(19))
     + (occ_func_3_1(27)*occ_func_3_1(29)*occ_func_2_1(52))
  ) / 8.0;
}
}  // namespace clexulator
}  // namespace CASM

extern "C" {

/// \brief Returns a clexulator::BaseClexulator* owning a ZrO_Clexulator_formation_energy
CASM::clexulator::BaseClexulator *make_ZrO_Clexulator_formation_energy() {
  return new CASM::clexulator::ZrO_Clexulator_formation_energy();
}

}
