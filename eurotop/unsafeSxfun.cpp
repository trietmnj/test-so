//
// unsafeSxfun.cpp
//
// Code generation for function 'unsafeSxfun'
//

// Include files
#include "unsafeSxfun.h"
#include "Eurotop_r2p_q_Final_rtwutil.h"
#include "rt_nonfinite.h"
#include "coder_array.h"

// Function Definitions
void binary_expand_op(coder::array<double, 1U> &in1,
                      const coder::array<double, 1U> &in3,
                      const coder::array<double, 1U> &in4,
                      const coder::array<double, 1U> &in5,
                      const coder::array<double, 1U> &in6)
{
  coder::array<double, 1U> r;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  if (in6.size(0) == 1) {
    if (in5.size(0) == 1) {
      if (in4.size(0) == 1) {
        i = in3.size(0);
      } else {
        i = in4.size(0);
      }
    } else {
      i = in5.size(0);
    }
  } else {
    i = in6.size(0);
  }
  r.set_size(i);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  stride_2_0 = (in5.size(0) != 1);
  stride_3_0 = (in6.size(0) != 1);
  if (in6.size(0) == 1) {
    if (in5.size(0) == 1) {
      if (in4.size(0) == 1) {
        loop_ub = in3.size(0);
      } else {
        loop_ub = in4.size(0);
      }
    } else {
      loop_ub = in5.size(0);
    }
  } else {
    loop_ub = in6.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = 1.5 * in3[i * stride_0_0] / in4[i * stride_1_0] /
           in5[i * stride_2_0] / in6[i * stride_3_0];
  }
  in1.set_size(r.size(0));
  loop_ub = r.size(0);
  for (i = 0; i < loop_ub; i++) {
    double varargin_1;
    varargin_1 = r[i];
    in1[i] = rt_powd_snf(varargin_1, 1.3);
  }
}

void binary_expand_op(coder::array<double, 1U> &in1, double in3,
                      const coder::array<double, 1U> &in4,
                      const coder::array<double, 1U> &in5,
                      const coder::array<double, 1U> &in6)
{
  coder::array<double, 1U> b_in3;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  if (in6.size(0) == 1) {
    if (in5.size(0) == 1) {
      i = in4.size(0);
    } else {
      i = in5.size(0);
    }
  } else {
    i = in6.size(0);
  }
  b_in3.set_size(i);
  stride_0_0 = (in4.size(0) != 1);
  stride_1_0 = (in5.size(0) != 1);
  stride_2_0 = (in6.size(0) != 1);
  if (in6.size(0) == 1) {
    if (in5.size(0) == 1) {
      loop_ub = in4.size(0);
    } else {
      loop_ub = in5.size(0);
    }
  } else {
    loop_ub = in6.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in3[i] =
        in3 * in4[i * stride_0_0] / in5[i * stride_1_0] / in6[i * stride_2_0];
  }
  in1.set_size(b_in3.size(0));
  loop_ub = b_in3.size(0);
  for (i = 0; i < loop_ub; i++) {
    double varargin_1;
    varargin_1 = b_in3[i];
    in1[i] = rt_powd_snf(varargin_1, 1.3);
  }
}

void binary_expand_op(
    coder::array<double, 1U> &in1, const coder::array<double, 1U> &in3,
    const coder::array<double, 1U> &in4, const coder::array<double, 1U> &in5,
    const coder::array<double, 1U> &in6, const coder::array<double, 1U> &in7,
    const coder::array<double, 1U> &in8, const coder::array<double, 1U> &in9)
{
  coder::array<double, 1U> r;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  int stride_4_0;
  int stride_5_0;
  int stride_6_0;
  if (in9.size(0) == 1) {
    if (in8.size(0) == 1) {
      if (in7.size(0) == 1) {
        if (in6.size(0) == 1) {
          if (in5.size(0) == 1) {
            if (in4.size(0) == 1) {
              i = in3.size(0);
            } else {
              i = in4.size(0);
            }
          } else {
            i = in5.size(0);
          }
        } else {
          i = in6.size(0);
        }
      } else {
        i = in7.size(0);
      }
    } else {
      i = in8.size(0);
    }
  } else {
    i = in9.size(0);
  }
  r.set_size(i);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  stride_2_0 = (in5.size(0) != 1);
  stride_3_0 = (in6.size(0) != 1);
  stride_4_0 = (in7.size(0) != 1);
  stride_5_0 = (in8.size(0) != 1);
  stride_6_0 = (in9.size(0) != 1);
  if (in9.size(0) == 1) {
    if (in8.size(0) == 1) {
      if (in7.size(0) == 1) {
        if (in6.size(0) == 1) {
          if (in5.size(0) == 1) {
            if (in4.size(0) == 1) {
              loop_ub = in3.size(0);
            } else {
              loop_ub = in4.size(0);
            }
          } else {
            loop_ub = in5.size(0);
          }
        } else {
          loop_ub = in6.size(0);
        }
      } else {
        loop_ub = in7.size(0);
      }
    } else {
      loop_ub = in8.size(0);
    }
  } else {
    loop_ub = in9.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = 2.7 * in3[i * stride_0_0] / in4[i * stride_1_0] /
           in5[i * stride_2_0] / in6[i * stride_3_0] / in7[i * stride_4_0] /
           in8[i * stride_5_0] / in9[i * stride_6_0];
  }
  in1.set_size(r.size(0));
  loop_ub = r.size(0);
  for (i = 0; i < loop_ub; i++) {
    double varargin_1;
    varargin_1 = r[i];
    in1[i] = rt_powd_snf(varargin_1, 1.3);
  }
}

void binary_expand_op(coder::array<double, 1U> &in1,
                      const coder::array<double, 1U> &in3,
                      const coder::array<double, 1U> &in4,
                      const coder::array<double, 1U> &in5,
                      const coder::array<double, 1U> &in6,
                      const coder::array<double, 1U> &in7)
{
  coder::array<double, 1U> r;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  int stride_4_0;
  if (in7.size(0) == 1) {
    if (in6.size(0) == 1) {
      if (in5.size(0) == 1) {
        if (in4.size(0) == 1) {
          i = in3.size(0);
        } else {
          i = in4.size(0);
        }
      } else {
        i = in5.size(0);
      }
    } else {
      i = in6.size(0);
    }
  } else {
    i = in7.size(0);
  }
  r.set_size(i);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  stride_2_0 = (in5.size(0) != 1);
  stride_3_0 = (in6.size(0) != 1);
  stride_4_0 = (in7.size(0) != 1);
  if (in7.size(0) == 1) {
    if (in6.size(0) == 1) {
      if (in5.size(0) == 1) {
        if (in4.size(0) == 1) {
          loop_ub = in3.size(0);
        } else {
          loop_ub = in4.size(0);
        }
      } else {
        loop_ub = in5.size(0);
      }
    } else {
      loop_ub = in6.size(0);
    }
  } else {
    loop_ub = in7.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = 1.5 * in3[i * stride_0_0] / in4[i * stride_1_0] /
           in5[i * stride_2_0] / in6[i * stride_3_0] / in7[i * stride_4_0];
  }
  in1.set_size(r.size(0));
  loop_ub = r.size(0);
  for (i = 0; i < loop_ub; i++) {
    double varargin_1;
    varargin_1 = r[i];
    in1[i] = rt_powd_snf(varargin_1, 1.3);
  }
}

void c_binary_expand_op(coder::array<double, 1U> &in1,
                        const coder::array<double, 1U> &in3,
                        const coder::array<int, 1U> &in4,
                        const coder::array<double, 1U> &in5,
                        const coder::array<int, 1U> &in6,
                        const coder::array<double, 1U> &in7)
{
  coder::array<double, 1U> r;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  if (in6.size(0) == 1) {
    i = in4.size(0);
  } else {
    i = in6.size(0);
  }
  r.set_size(i);
  stride_0_0 = (in4.size(0) != 1);
  stride_1_0 = (in6.size(0) != 1);
  stride_2_0 = (in6.size(0) != 1);
  if (in6.size(0) == 1) {
    loop_ub = in4.size(0);
  } else {
    loop_ub = in6.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    r[i] = 2.35 / in3[in4[i * stride_0_0] - 1] * in5[in6[i * stride_1_0] - 1] /
           in7[in6[i * stride_2_0] - 1];
  }
  in1.set_size(r.size(0));
  loop_ub = r.size(0);
  for (i = 0; i < loop_ub; i++) {
    double varargin_1;
    varargin_1 = r[i];
    in1[i] = rt_powd_snf(varargin_1, 1.3);
  }
}

// End of code generation (unsafeSxfun.cpp)
