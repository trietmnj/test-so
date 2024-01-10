//
// div.cpp
//
// Code generation for function 'div'
//

// Include files
#include "div.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
void binary_expand_op(coder::array<double, 1U> &in1,
                      const coder::array<double, 1U> &in2,
                      const coder::array<int, 1U> &in3,
                      const coder::array<double, 1U> &in4,
                      const coder::array<int, 1U> &in5,
                      const coder::array<double, 1U> &in6)
{
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  if (in5.size(0) == 1) {
    i = in3.size(0);
  } else {
    i = in5.size(0);
  }
  in1.set_size(i);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in5.size(0) != 1);
  stride_2_0 = (in5.size(0) != 1);
  if (in5.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in5.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = -(2.78 / in2[in3[i * stride_0_0] - 1]) *
             in4[in5[i * stride_1_0] - 1] / in6[in5[i * stride_2_0] - 1];
  }
}

void f_binary_expand_op(coder::array<double, 1U> &in1,
                        const coder::array<double, 1U> &in2)
{
  coder::array<double, 1U> b_in2;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in1.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in1.size(0);
  }
  b_in2.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  if (in1.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2[i * stride_0_0] /
               (9.80665 * in1[i * stride_1_0] / 6.2831853071795862);
  }
  in1.set_size(b_in2.size(0));
  loop_ub = b_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
}

// End of code generation (div.cpp)
