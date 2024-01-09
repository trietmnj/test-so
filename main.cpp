/* #include "eurotop/Eurotop_r2p_q_Final.h" */
#include "eurotop/coder_array.h"
#include <dlfcn.h>
#include <iostream>
#include <map>

// https://www.mathworks.com/help/coder/ug/use-dynamically-allocated-cpps-arrays-in-generated-function-interfaces.html
coder::array<double, 1U> array1D(double val) {
  coder::array<double, 1U> arr;
  arr.set_size(1);
  arr[0] = val;
  return arr;
}

coder::array<double, 2U> array2D(double val) {
  coder::array<double, 2U> arr;
  arr.set_size(1, 1);
  arr[0] = val;
  return arr;
}

void test(const coder::array<double, 1U> &val) {
  std::cout << "Value: " << val[0] << std::endl;
}

typedef void (*Eurotop_r2p_q_Final)(
    const coder::array<double, 1U> &Hm0, const coder::array<double, 1U> &Tp,
    const coder::array<double, 1U> &SWL, const coder::array<double, 1U> &Rc,
    double slope, const coder::array<double, 1U> &gamma_f,
    const coder::array<double, 1U> &gamma_beta_r2p,
    const coder::array<double, 1U> &gamma_beta_OT,
    const coder::array<double, 1U> &gamma_star,
    const coder::array<double, 1U> &gamma_v,
    const coder::array<double, 1U> &gamma_b,
    const coder::array<double, 1U> &wall_toe,
    const coder::array<double, 1U> &berm_width, double structure_type,
    coder::array<double, 2U> &R2p, coder::array<double, 2U> &R2p_SWL,
    coder::array<double, 2U> &q, coder::array<double, 2U> &q_overflow,
    coder::array<double, 2U> &q_wave_ot);

int main() {

  void *handle = dlopen("./Eurotop_r2p_q_Final.so", RTLD_LAZY);
  if (!handle) {
    std::cerr << "Cannot load library: " << dlerror() << std::endl;
    return 1;
  }

  // Get the function pointer
  Eurotop_r2p_q_Final eurotop_r2p_q_Final = (Eurotop_r2p_q_Final)dlsym(
      handle, "_Z19Eurotop_r2p_q_FinalRKN5coder5arrayIdLi1EEES3_S3_S3_dS3_S3_"
              "S3_S3_S3_S3_S3_S3_dRNS0_IdLi2EEES5_S5_S5_S5_");

  if (!eurotop_r2p_q_Final) {
    std::cerr << "Cannot load symbol 'myFunction': " << dlerror() << std::endl;
    dlclose(handle);
    return 1;
  }

  coder::array<double, 1U> Hm0 = array1D(1.93);
  coder::array<double, 1U> Tp = array1D(5.4);
  coder::array<double, 1U> SWL = array1D(6);
  coder::array<double, 1U> Rc = array1D(1.38);
  coder::array<double, 1U> gamma_f = array1D(1.);
  coder::array<double, 1U> gamma_beta_r2p = array1D(1.);
  coder::array<double, 1U> gamma_beta_OT = array1D(1.);
  coder::array<double, 1U> gamma_star = array1D(1.);
  coder::array<double, 1U> gamma_v = array1D(1.);
  coder::array<double, 1U> gamma_b = array1D(1.);
  coder::array<double, 1U> wall_toe = array1D(4.);
  coder::array<double, 1U> berm_width = array1D(2.);

  double slope = 8.;
  double structure_type = 1.;

  coder::array<double, 2U> R2p = array2D(0.);
  coder::array<double, 2U> R2p_SWL = array2D(0.);
  coder::array<double, 2U> q = array2D(0.);
  coder::array<double, 2U> q_overflow = array2D(0.);
  coder::array<double, 2U> q_wave_ot = array2D(0.);

  eurotop_r2p_q_Final(Hm0, Tp, SWL, Rc, slope, gamma_f, gamma_beta_r2p,
                      gamma_beta_OT, gamma_star, gamma_v, gamma_b, wall_toe,
                      berm_width, structure_type, R2p, R2p_SWL, q, q_overflow,
                      q_wave_ot);

  std::cout << "R2p=" << R2p[0] << " R2p_SWL=" << R2p_SWL[0] << " q=" << q[0]
            << " q_overflow=" << q_overflow[0] << " q_wave_ot=" << q_wave_ot[0]
            << std::endl;

  dlclose(handle);
  return 0;
}
