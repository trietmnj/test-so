//
// minOrMax.cpp
//
// Code generation for function 'minOrMax'
//

// Include files
#include "minOrMax.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <cmath>

// Function Definitions
void binary_expand_op(coder::array<double, 1U> &in1, const int in2[2],
                      const coder::array<double, 1U> &in3,
                      const coder::array<double, 1U> &in4,
                      const coder::array<double, 1U> &in5)
{
  coder::array<double, 2U> r1;
  coder::array<double, 1U> r;
  int i;
  int in2_idx_0;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  in2_idx_0 = in2[0];
  if (in5.size(0) == 1) {
    i = in4.size(0);
  } else {
    i = in5.size(0);
  }
  if (i == 1) {
    i = in3.size(0);
  } else if (in5.size(0) == 1) {
    i = in4.size(0);
  } else {
    i = in5.size(0);
  }
  r.set_size(i);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  stride_2_0 = (in5.size(0) != 1);
  if (in5.size(0) == 1) {
    i = in4.size(0);
  } else {
    i = in5.size(0);
  }
  if (i == 1) {
    loop_ub = in3.size(0);
  } else if (in5.size(0) == 1) {
    loop_ub = in4.size(0);
  } else {
    loop_ub = in5.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = (0.68 - 4.1 * in3[i * stride_0_0]) -
           0.05 * in4[i * stride_1_0] / in5[i * stride_2_0];
  }
  r1.set_size(in2_idx_0, 2);
  for (i = 0; i < in2_idx_0; i++) {
    r1[i] = 0.6;
  }
  loop_ub = r.size(0);
  for (i = 0; i < loop_ub; i++) {
    r1[i + r1.size(0)] = r[i];
  }
  coder::internal::maximum(r1, in1);
}

void binary_expand_op(coder::array<double, 1U> &in1,
                      const coder::array<double, 1U> &in2,
                      const coder::array<double, 1U> &in3, double in4,
                      const coder::array<double, 1U> &in5,
                      const coder::array<double, 1U> &in6)
{
  coder::array<double, 2U> d_in2;
  coder::array<double, 1U> b_in2;
  coder::array<double, 1U> c_in2;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  if (in3.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(0);
  }
  b_in2.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2[i * stride_0_0] * 0.09 * in3[i * stride_1_0];
  }
  if (in1.size(0) == 1) {
    if (in6.size(0) == 1) {
      if (in5.size(0) == 1) {
        i = in2.size(0);
      } else {
        i = in5.size(0);
      }
    } else {
      i = in6.size(0);
    }
  } else {
    i = in1.size(0);
  }
  c_in2.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in5.size(0) != 1);
  stride_2_0 = (in6.size(0) != 1);
  stride_3_0 = (in1.size(0) != 1);
  if (in1.size(0) == 1) {
    if (in6.size(0) == 1) {
      if (in5.size(0) == 1) {
        loop_ub = in2.size(0);
      } else {
        loop_ub = in5.size(0);
      }
    } else {
      loop_ub = in6.size(0);
    }
  } else {
    loop_ub = in1.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    c_in2[i] = in2[i * stride_0_0] * 0.023 / in4 * in5[i * stride_1_0] *
               in6[i * stride_2_0] * in1[i * stride_3_0];
  }
  d_in2.set_size(b_in2.size(0), 2);
  loop_ub = b_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    d_in2[i] = b_in2[i];
  }
  loop_ub = c_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    d_in2[i + d_in2.size(0)] = c_in2[i];
  }
  coder::internal::minimum(d_in2, in1);
}

namespace coder {
namespace internal {
void maximum(const ::coder::array<double, 2U> &x,
             ::coder::array<double, 1U> &ex)
{
  int m;
  m = x.size(0) - 1;
  ex.set_size(x.size(0));
  if (x.size(0) >= 1) {
    for (int i{0}; i <= m; i++) {
      double b;
      double d;
      boolean_T p;
      d = x[i];
      ex[i] = d;
      b = x[i + x.size(0)];
      if (std::isnan(b)) {
        p = false;
      } else if (std::isnan(d)) {
        p = true;
      } else {
        p = (d < b);
      }
      if (p) {
        ex[i] = b;
      }
    }
  }
}

void minimum(const ::coder::array<double, 2U> &x,
             ::coder::array<double, 1U> &ex)
{
  int m;
  m = x.size(0) - 1;
  ex.set_size(x.size(0));
  if (x.size(0) >= 1) {
    for (int i{0}; i <= m; i++) {
      double b;
      double d;
      boolean_T p;
      d = x[i];
      ex[i] = d;
      b = x[i + x.size(0)];
      if (std::isnan(b)) {
        p = false;
      } else if (std::isnan(d)) {
        p = true;
      } else {
        p = (d > b);
      }
      if (p) {
        ex[i] = b;
      }
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (minOrMax.cpp)
