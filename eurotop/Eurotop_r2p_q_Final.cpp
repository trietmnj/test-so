//
// Eurotop_r2p_q_Final.cpp
//
// Code generation for function 'Eurotop_r2p_q_Final'
//

// Include files
#include "Eurotop_r2p_q_Final.h"
#include "Eurotop_r2p_q_Final_data.h"
#include "Eurotop_r2p_q_Final_initialize.h"
#include "Eurotop_r2p_q_Final_rtwutil.h"
#include "div.h"
#include "ifWhileCond.h"
#include "minOrMax.h"
#include "randn.h"
#include "rt_nonfinite.h"
#include "unsafeSxfun.h"
#include "coder_array.h"
#include <cmath>

// Function Declarations
static void b_binary_expand_op(coder::array<boolean_T, 1U> &in1,
                               const coder::array<double, 1U> &in2,
                               const coder::array<double, 1U> &in3,
                               const coder::array<double, 1U> &in4,
                               const coder::array<boolean_T, 1U> &in5,
                               const coder::array<boolean_T, 1U> &in6);

static void binary_expand_op(coder::array<double, 1U> &in1,
                             const coder::array<double, 1U> &in2,
                             const coder::array<int, 1U> &in3,
                             const coder::array<double, 1U> &in4);

static void binary_expand_op(coder::array<double, 1U> &in1,
                             const coder::array<double, 1U> &in2);

static void binary_expand_op(coder::array<double, 1U> &in1, double in2,
                             const coder::array<double, 1U> &in3);

static void binary_expand_op(coder::array<double, 1U> &in1,
                             const coder::array<double, 1U> &in2,
                             const coder::array<double, 1U> &in3,
                             const coder::array<double, 1U> &in4);

static void binary_expand_op(coder::array<double, 2U> &in1,
                             const coder::array<double, 1U> &in2,
                             const coder::array<double, 1U> &in3,
                             const unsigned int in4[2]);

static void c_binary_expand_op(coder::array<double, 1U> &in1,
                               const coder::array<double, 1U> &in2);

static void c_binary_expand_op(coder::array<double, 1U> &in1,
                               const coder::array<double, 1U> &in2,
                               const coder::array<double, 1U> &in3,
                               const coder::array<double, 1U> &in4);

static void c_binary_expand_op(coder::array<double, 1U> &in1,
                               const coder::array<double, 1U> &in2,
                               const coder::array<double, 1U> &in3,
                               const coder::array<double, 1U> &in4,
                               const coder::array<double, 1U> &in5,
                               const coder::array<double, 1U> &in6);

static void d_binary_expand_op(coder::array<double, 1U> &in1,
                               const coder::array<double, 1U> &in2);

static void e_binary_expand_op(coder::array<boolean_T, 1U> &in1,
                               const coder::array<double, 1U> &in2,
                               const coder::array<double, 1U> &in3,
                               const coder::array<double, 1U> &in4);

static void plus(coder::array<double, 1U> &in1,
                 const coder::array<double, 1U> &in2,
                 const coder::array<double, 1U> &in3);

static void times(coder::array<double, 1U> &in1,
                  const coder::array<double, 1U> &in2);

static void times(coder::array<double, 1U> &in1,
                  const coder::array<double, 1U> &in2,
                  const coder::array<double, 1U> &in3);

// Function Definitions
static void b_binary_expand_op(coder::array<boolean_T, 1U> &in1,
                               const coder::array<double, 1U> &in2,
                               const coder::array<double, 1U> &in3,
                               const coder::array<double, 1U> &in4,
                               const coder::array<boolean_T, 1U> &in5,
                               const coder::array<boolean_T, 1U> &in6)
{
  coder::array<boolean_T, 1U> b_in2;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  int stride_4_0;
  int stride_5_0;
  if (in6.size(0) == 1) {
    if (in5.size(0) == 1) {
      if (in1.size(0) == 1) {
        if (in4.size(0) == 1) {
          if (in3.size(0) == 1) {
            i = in2.size(0);
          } else {
            i = in3.size(0);
          }
        } else {
          i = in4.size(0);
        }
      } else {
        i = in1.size(0);
      }
    } else {
      i = in5.size(0);
    }
  } else {
    i = in6.size(0);
  }
  b_in2.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  stride_2_0 = (in4.size(0) != 1);
  stride_3_0 = (in1.size(0) != 1);
  stride_4_0 = (in5.size(0) != 1);
  stride_5_0 = (in6.size(0) != 1);
  if (in6.size(0) == 1) {
    if (in5.size(0) == 1) {
      if (in1.size(0) == 1) {
        if (in4.size(0) == 1) {
          if (in3.size(0) == 1) {
            loop_ub = in2.size(0);
          } else {
            loop_ub = in3.size(0);
          }
        } else {
          loop_ub = in4.size(0);
        }
      } else {
        loop_ub = in1.size(0);
      }
    } else {
      loop_ub = in5.size(0);
    }
  } else {
    loop_ub = in6.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = ((in2[i * stride_0_0] <= 0.0) || (in3[i * stride_1_0] <= 0.0) ||
                (in4[i * stride_2_0] <= -100.0) || in1[i * stride_3_0] ||
                in5[i * stride_4_0] || in6[i * stride_5_0]);
  }
  in1.set_size(b_in2.size(0));
  loop_ub = b_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
}

static void binary_expand_op(coder::array<double, 1U> &in1,
                             const coder::array<double, 1U> &in2,
                             const coder::array<int, 1U> &in3,
                             const coder::array<double, 1U> &in4)
{
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in4.size(0) == 1) {
    i = in3.size(0);
  } else {
    i = in4.size(0);
  }
  in1.set_size(i);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[in3[i * stride_0_0] - 1] + in4[i * stride_1_0];
  }
}

static void binary_expand_op(coder::array<double, 1U> &in1,
                             const coder::array<double, 1U> &in2)
{
  coder::array<double, 1U> b_in1;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in2.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in2.size(0);
  }
  b_in1.set_size(i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] * 0.09 * in2[i * stride_1_0];
  }
  in1.set_size(b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
}

static void binary_expand_op(coder::array<double, 1U> &in1, double in2,
                             const coder::array<double, 1U> &in3)
{
  coder::array<double, 1U> b_in1;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in3.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in3.size(0);
  }
  b_in1.set_size(i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] * in2 * in3[i * stride_1_0];
  }
  in1.set_size(b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
}

static void binary_expand_op(coder::array<double, 1U> &in1,
                             const coder::array<double, 1U> &in2,
                             const coder::array<double, 1U> &in3,
                             const coder::array<double, 1U> &in4)
{
  coder::array<double, 1U> b_in2;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  if (in1.size(0) == 1) {
    if (in4.size(0) == 1) {
      if (in3.size(0) == 1) {
        i = in2.size(0);
      } else {
        i = in3.size(0);
      }
    } else {
      i = in4.size(0);
    }
  } else {
    i = in1.size(0);
  }
  b_in2.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  stride_2_0 = (in4.size(0) != 1);
  stride_3_0 = (in1.size(0) != 1);
  if (in1.size(0) == 1) {
    if (in4.size(0) == 1) {
      if (in3.size(0) == 1) {
        loop_ub = in2.size(0);
      } else {
        loop_ub = in3.size(0);
      }
    } else {
      loop_ub = in4.size(0);
    }
  } else {
    loop_ub = in1.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2[i * stride_0_0] * in3[i * stride_1_0] * in4[i * stride_2_0] *
               (4.0 - 1.5 / in1[i * stride_3_0]);
  }
  in1.set_size(b_in2.size(0));
  loop_ub = b_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
}

static void binary_expand_op(coder::array<double, 2U> &in1,
                             const coder::array<double, 1U> &in2,
                             const coder::array<double, 1U> &in3,
                             const unsigned int in4[2])
{
  int in4_idx_0;
  int stride_0_0;
  int stride_1_0;
  in4_idx_0 = static_cast<int>(in4[0]);
  in1.set_size(in4_idx_0, 1);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int i{0}; i < in4_idx_0; i++) {
    in1[i] = in2[i * stride_0_0] + in3[i * stride_1_0];
  }
}

static void c_binary_expand_op(coder::array<double, 1U> &in1,
                               const coder::array<double, 1U> &in2)
{
  coder::array<double, 1U> b_in1;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in2.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in2.size(0);
  }
  b_in1.set_size(i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] * 0.05 * in2[i * stride_1_0];
  }
  in1.set_size(b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
}

static void c_binary_expand_op(coder::array<double, 1U> &in1,
                               const coder::array<double, 1U> &in2,
                               const coder::array<double, 1U> &in3,
                               const coder::array<double, 1U> &in4)
{
  coder::array<double, 1U> b_in2;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  if (in4.size(0) == 1) {
    if (in3.size(0) == 1) {
      if (in1.size(0) == 1) {
        i = in2.size(0);
      } else {
        i = in1.size(0);
      }
    } else {
      i = in3.size(0);
    }
  } else {
    i = in4.size(0);
  }
  b_in2.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  stride_2_0 = (in3.size(0) != 1);
  stride_3_0 = (in4.size(0) != 1);
  if (in4.size(0) == 1) {
    if (in3.size(0) == 1) {
      if (in1.size(0) == 1) {
        loop_ub = in2.size(0);
      } else {
        loop_ub = in1.size(0);
      }
    } else {
      loop_ub = in3.size(0);
    }
  } else {
    loop_ub = in4.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2[i * stride_0_0] * in1[i * stride_1_0] * in3[i * stride_2_0] *
               (4.0 - 1.5 / in4[i * stride_3_0]);
  }
  in1.set_size(b_in2.size(0));
  loop_ub = b_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
}

static void c_binary_expand_op(coder::array<double, 1U> &in1,
                               const coder::array<double, 1U> &in2,
                               const coder::array<double, 1U> &in3,
                               const coder::array<double, 1U> &in4,
                               const coder::array<double, 1U> &in5,
                               const coder::array<double, 1U> &in6)
{
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  int stride_3_0;
  int stride_4_0;
  if (in6.size(0) == 1) {
    if (in5.size(0) == 1) {
      if (in4.size(0) == 1) {
        if (in3.size(0) == 1) {
          i = in2.size(0);
        } else {
          i = in3.size(0);
        }
      } else {
        i = in4.size(0);
      }
    } else {
      i = in5.size(0);
    }
  } else {
    i = in6.size(0);
  }
  in1.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  stride_2_0 = (in4.size(0) != 1);
  stride_3_0 = (in5.size(0) != 1);
  stride_4_0 = (in6.size(0) != 1);
  if (in6.size(0) == 1) {
    if (in5.size(0) == 1) {
      if (in4.size(0) == 1) {
        if (in3.size(0) == 1) {
          loop_ub = in2.size(0);
        } else {
          loop_ub = in3.size(0);
        }
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
    in1[i] = in2[i * stride_0_0] * 1.65 * in3[i * stride_1_0] *
             in4[i * stride_2_0] * in5[i * stride_3_0] * in6[i * stride_4_0];
  }
}

static void d_binary_expand_op(coder::array<double, 1U> &in1,
                               const coder::array<double, 1U> &in2)
{
  coder::array<double, 1U> b_in1;
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in2.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in2.size(0);
  }
  b_in1.set_size(i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] * 0.047 * in2[i * stride_1_0];
  }
  in1.set_size(b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
}

static void e_binary_expand_op(coder::array<boolean_T, 1U> &in1,
                               const coder::array<double, 1U> &in2,
                               const coder::array<double, 1U> &in3,
                               const coder::array<double, 1U> &in4)
{
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  int stride_2_0;
  if (in4.size(0) == 1) {
    if (in3.size(0) == 1) {
      i = in2.size(0);
    } else {
      i = in3.size(0);
    }
  } else {
    i = in4.size(0);
  }
  in1.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  stride_2_0 = (in4.size(0) != 1);
  if (in4.size(0) == 1) {
    if (in3.size(0) == 1) {
      loop_ub = in2.size(0);
    } else {
      loop_ub = in3.size(0);
    }
  } else {
    loop_ub = in4.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] =
        ((in2[i * stride_0_0] - in3[i * stride_1_0]) / in4[i * stride_2_0] >
         4.0);
  }
}

static void plus(coder::array<double, 1U> &in1,
                 const coder::array<double, 1U> &in2,
                 const coder::array<double, 1U> &in3)
{
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in3.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(0);
  }
  in1.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] + in3[i * stride_1_0];
  }
}

static void times(coder::array<double, 1U> &in1,
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
    b_in2[i] = in2[i * stride_0_0] * in1[i * stride_1_0];
  }
  in1.set_size(b_in2.size(0));
  loop_ub = b_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
}

static void times(coder::array<double, 1U> &in1,
                  const coder::array<double, 1U> &in2,
                  const coder::array<double, 1U> &in3)
{
  int i;
  int loop_ub;
  int stride_0_0;
  int stride_1_0;
  if (in3.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(0);
  }
  in1.set_size(i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] * in3[i * stride_1_0];
  }
}

void Eurotop_r2p_q_Final(
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
    coder::array<double, 2U> &q_wave_ot)
{
  coder::array<double, 2U> b_R2p_a;
  coder::array<double, 1U> R2p_a;
  coder::array<double, 1U> Rc_corrt;
  coder::array<double, 1U> b_q_overflow;
  coder::array<double, 1U> b_q_wave_ot;
  coder::array<double, 1U> breaker_m10;
  coder::array<double, 1U> gamma_f_surge;
  coder::array<double, 1U> r1;
  coder::array<double, 1U> r5;
  coder::array<double, 1U> s_m10;
  coder::array<int, 1U> r;
  coder::array<int, 1U> r10;
  coder::array<int, 1U> r2;
  coder::array<int, 1U> r3;
  coder::array<int, 1U> r4;
  coder::array<int, 1U> r8;
  coder::array<int, 1U> r9;
  coder::array<boolean_T, 1U> r6;
  coder::array<boolean_T, 1U> r7;
  coder::array<boolean_T, 1U> rIndx;
  double a_a;
  double varargin_1;
  unsigned int data_dims[2];
  int outsize[2];
  int b_i;
  int i;
  int i1;
  int i2;
  int k;
  int nx;
  if (!isInitialized_Eurotop_r2p_q_Final) {
    Eurotop_r2p_q_Final_initialize();
  }
  // {
  //  LICENSING:
  //     This code is part of StormSim software suite developed by the U.S. Army
  //     Engineer Research and Development Center Coastal and Hydraulics
  //     Laboratory (hereinafter “ERDC-CHL”). This material is distributed in
  //     accordance with DoD Instruction 5230.24. Recipient agrees to abide by
  //     all notices, and distribution and license markings. The controlling DOD
  //     office is the U.S. Army Engineer Research and Development Center
  //     (hereinafter, "ERDC"). This material shall be handled and maintained in
  //     accordance with For Official Use Only, Export Control, and AR 380-19
  //     requirements. ERDC-CHL retains all right, title and interest in
  //     StormSim and any portion thereof and in all copies, modifications and
  //     derivative works of StormSim and any portions thereof including,
  //     without limitation, all rights to patent, copyright, trade secret,
  //     trademark and other proprietary or intellectual property rights.
  //     Recipient has no rights, by license or otherwise, to use, disclose or
  //     disseminate StormSim, in whole or in part.
  //
  // DISCLAIMER:
  //     STORMSIM IS PROVIDED “AS IS” BY ERDC-CHL AND THE RESPECTIVE COPYRIGHT
  //     HOLDERS. ERDC-CHL MAKES NO OTHER WARRANTIES WHATSOEVER EITHER EXPRESS
  //     OR IMPLIED WITH RESPECT TO STORMSIM OR ANYTHING PROVIDED BY ERDC-CHL,
  //     AND EXPRESSLY DISCLAIMS ALL WARRANTIES OF ANY KIND, EITHER EXPRESSED OR
  //     IMPLIED, INCLUDING WITHOUT LIMITATION, WARRANTIES OF MERCHANTABILITY,
  //     NON-INFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, FREEDOM FROM BUGS,
  //     CORRECTNESS, ACCURACY, RELIABILITY, AND RESULTS, AND REGARDING THE USE
  //     AND RESULTS OF THE USE, AND THAT THE ASSOCIATED SOFTWARE’S USE WILL BE
  //     UNINTERRUPTED. ERDC-CHL DISCLAIMS ALL WARRANTIES AND LIABILITIES
  //     REGARDING THIRD PARTY SOFTWARE, IF PRESENT IN STORMSIM, AND DISTRIBUTES
  //     IT “AS IS.” RECIPIENT AGREES TO WAIVE ANY AND ALL CLAIMS AGAINST
  //     ERDC-CHL, THE UNITED STATES GOVERNMENT AND ITS CONTRACTORS AND
  //     SUBCONTRACTORS, AND SHALL INDEMNIFY AND HOLD HARMLESS ERDC-CHL, THE
  //     UNITED STATES GOVERNMENT AND ITS CONTRACTORS AND SUBCONTRACTORS FOR ANY
  //     LIABILITIES, DEMANDS, DAMAGES.
  //
  //  SCRIPT NAME:
  //     Eurotop_r2p_q_Final.m
  //
  // PURPOSE:
  //     Calculates overtopping and runup on levees, and
  //     overtopping on floodwalls
  //
  // INPUTS:
  // |   Vars Name   |  Vars Type  |               Description                |
  // |---------------|-------------|------------------------------------------|
  // |      Hm0      |    Double   |  Zero moment significant wave height [m] |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |      Tp       |    Double   |  Peak wave period                    [s] |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |      SWL      |    Double   |  Storm water level            [m, datum] |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |       h       |    Double   |  Water depth                         [m] |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |      Rc       |    Double   |  Freeboard                           [m] |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |    slope      |    Double   |  cot(alpha)                              |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |    gamma_f    |    Double   |  Influence of surface friction           |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // | gamma_beta_r2p|    Double   |  Influence of wave direction on runup    |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // | gamma_beta_OT |    Double   |  Influence of wave direction on          |
  // |               |             |  overtopping (Nstm.*Ndsrt x 1)            |
  // |---------------|-------------|------------------------------------------|
  // |  gamma_star   |    Double   |  Influence of wall on a levee            |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |   gamma_v     |    Double   |  Influence of wall on a slope            |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |   wall_toe    |    Double   |  Elevation of wall toe        [m, datum] |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |   BermWidth   |    Double   |  Structure berm width                [m] |
  // |               |             |  (Nstm.*Ndsrt x 1)                        |
  // |---------------|-------------|------------------------------------------|
  // |  strucType    |    Double   |  Switch (1 for levees, 2 for floodwalls, |
  // |               |             |  3 for rubble mound) (Nstm.*Ndsrt x 1)    |
  // |---------------|-------------|------------------------------------------|
  //
  // OUTPUTS:
  // |   Vars Name   |  Vars Type  |               Description                |
  // |---------------|-------------|------------------------------------------|
  // |   R2p_final   |    Double   |  Runup calculation for levees + Rubble   |
  // |               |             |  Mound (Nstm.*Ndsrt x 1)              [m] |
  // |---------------|-------------|------------------------------------------|
  // |    q_final    |    Double   |  Overtopping calculation for levees +    |
  // |               |             |  Rubble Mound (Nstm.*Ndsrt x 1)  [cm./s./m]
  // |
  // |---------------|-------------|------------------------------------------|
  //
  // AUTHORS:
  //     Abigail L. Stehno and Jeffrey A. Melby, PhD
  //
  // MODIFICATIONS:
  // |  DATE (mm./dd./yyy) |  EDITOR          |          Description |
  // |-------------------|------------------|----------------------------------|
  // |    04./04./19       |  Abigail Stehno  |  Created code from | | | |
  // Eurotop_r2p_q_v4.m              |
  // |-------------------|------------------|----------------------------------|
  // |    04./08./19       |  Abigail Stehno  |  Updated capabilites, usability
  // | |       to          |                  |  and added rubble mound calcs. |
  // |    09./03./20       |                  |  Updated comments |
  // |-------------------|------------------|----------------------------------|
  // |    03./03./21       |  Abigail Stehno  |  Updated for distribution |
  // |-------------------|------------------|----------------------------------|
  // |    05./28./21       |  Abigail Stehno  |  Updated for distribution more |
  // |-------------------|------------------|----------------------------------|
  // |    06./14./21       |  Abigail Stehno  |  Corrected rubble mound calc |
  // |-------------------|------------------|----------------------------------|
  // NOTES:
  // If there is a foreshore influence: no significant mound is considered,non-
  //     impulsive is assumed, and no composite structures are considered.
  // Does not include battered wall types
  // Emergent toe of wall is considered a wall on embankment
  // Cr value is not considered for armored crests. See EurOtop Eq 6.8 for info.
  // Assume no berm influence
  //
  // REFERENCES:
  //    EurOtop - Wave Overtopping of Sea Defences and Related Structures:
  //         Assessment Manual, August 2018.
  //         http:././www.overtopping-manual.com./eurotop.pdf
  // }
  //  VECTORIZE INPUTS
  data_dims[0] = static_cast<unsigned int>(SWL.size(0));
  data_dims[1] = 1U;
  //  Define variables
  //  gravitational acceleration
  //  neg zero moment period tm_1,0
  //  Zero moment wave length
  s_m10.set_size(Tp.size(0));
  nx = Tp.size(0);
  for (k = 0; k < nx; k++) {
    varargin_1 = Tp[k] / 1.1;
    s_m10[k] = varargin_1 * varargin_1;
  }
  if (Hm0.size(0) == s_m10.size(0)) {
    s_m10.set_size(Hm0.size(0));
    nx = Hm0.size(0);
    for (k = 0; k < nx; k++) {
      s_m10[k] = Hm0[k] / (9.80665 * s_m10[k] / 6.2831853071795862);
    }
  } else {
    f_binary_expand_op(s_m10, Hm0);
  }
  //  Wave steepness
  a_a = 1.0 / slope;
  breaker_m10.set_size(s_m10.size(0));
  nx = s_m10.size(0);
  for (k = 0; k < nx; k++) {
    breaker_m10[k] = s_m10[k];
  }
  nx = s_m10.size(0);
  for (k = 0; k < nx; k++) {
    breaker_m10[k] = std::sqrt(breaker_m10[k]);
  }
  nx = breaker_m10.size(0);
  for (k = 0; k < nx; k++) {
    breaker_m10[k] = a_a / breaker_m10[k];
  }
  //  Breaker parameter
  //  Assume no berm!
  //      gamma_b = 1;
  //  Negative freeboard influence
  //  Initialize Variables
  b_q_overflow.set_size(Rc.size(0));
  nx = Rc.size(0);
  for (k = 0; k < nx; k++) {
    b_q_overflow[k] = 0.0;
  }
  Rc_corrt.set_size(Rc.size(0));
  nx = Rc.size(0);
  for (k = 0; k < nx; k++) {
    Rc_corrt[k] = 0.0;
  }
  //  Compute Overflow When Strcuture Is Submerged
  k = Rc.size(0) - 1;
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (Rc[i] <= 0.0) {
      nx++;
    }
  }
  r.set_size(nx);
  nx = 0;
  for (i = 0; i <= k; i++) {
    if (Rc[i] <= 0.0) {
      r[nx] = i + 1;
      nx++;
    }
  }
  nx = r.size(0);
  R2p_a.set_size(r.size(0));
  for (k = 0; k < nx; k++) {
    R2p_a[k] = std::abs(Rc[r[k] - 1]);
  }
  nx = R2p_a.size(0);
  for (k = 0; k < nx; k++) {
    varargin_1 = R2p_a[k];
    R2p_a[k] = rt_powd_snf(varargin_1, 3.0);
  }
  nx = R2p_a.size(0);
  for (k = 0; k < nx; k++) {
    R2p_a[k] = 9.80665 * R2p_a[k];
  }
  nx = R2p_a.size(0);
  for (k = 0; k < nx; k++) {
    R2p_a[k] = std::sqrt(R2p_a[k]);
  }
  nx = R2p_a.size(0);
  for (k = 0; k < nx; k++) {
    R2p_a[k] = 0.54 * R2p_a[k];
  }
  k = Rc.size(0);
  nx = 0;
  for (i = 0; i < k; i++) {
    if (Rc[i] <= 0.0) {
      b_q_overflow[i] = R2p_a[nx];
      nx++;
    }
  }
  //  EurOtop Eq 5.20
  //
  k = Rc.size(0);
  for (i = 0; i < k; i++) {
    if (Rc[i] > 0.0) {
      Rc_corrt[i] = Rc[i];
    }
  }
  //  Runup and overtopping loop
  if ((slope > 0.1) && (structure_type == 1.0)) {
    //  slope cota > 1 ->  (levee)
    //      disp('      Calculating Levee Overtopping and Runup...')
    //  Embankment coefficients
    //  EurOtop Eq 5.1
    //  EurOtop Eq 5.2
    //  EurOtop Eq 5.6
    //  EurOtop Eq 5.10
    //  EurOtop Eq 5.11
    if (slope > 2.0) {
      int i3;
      int i4;
      //  EurOtop Runup Eq 5.1 and 5.2
      if (Hm0.size(0) == 1) {
        nx = gamma_b.size(0);
        k = gamma_b.size(0);
      } else {
        nx = Hm0.size(0);
        k = Hm0.size(0);
      }
      if (k == 1) {
        k = gamma_f.size(0);
      } else if (Hm0.size(0) == 1) {
        k = gamma_b.size(0);
      } else {
        k = Hm0.size(0);
      }
      if (Hm0.size(0) == 1) {
        i = gamma_b.size(0);
      } else {
        i = Hm0.size(0);
      }
      if (i == 1) {
        i = gamma_f.size(0);
      } else if (Hm0.size(0) == 1) {
        i = gamma_b.size(0);
      } else {
        i = Hm0.size(0);
      }
      if (Hm0.size(0) == 1) {
        b_i = gamma_b.size(0);
      } else {
        b_i = Hm0.size(0);
      }
      if (i == 1) {
        i = gamma_beta_r2p.size(0);
      } else if (b_i == 1) {
        i = gamma_f.size(0);
      } else if (Hm0.size(0) == 1) {
        i = gamma_b.size(0);
      } else {
        i = Hm0.size(0);
      }
      if ((Hm0.size(0) == gamma_b.size(0)) && (nx == gamma_f.size(0)) &&
          (k == gamma_beta_r2p.size(0)) && (i == breaker_m10.size(0))) {
        R2p_a.set_size(Hm0.size(0));
        nx = Hm0.size(0);
        for (k = 0; k < nx; k++) {
          R2p_a[k] = Hm0[k] * 1.65 * gamma_b[k] * gamma_f[k] *
                     gamma_beta_r2p[k] * breaker_m10[k];
        }
      } else {
        c_binary_expand_op(R2p_a, Hm0, gamma_b, gamma_f, gamma_beta_r2p,
                           breaker_m10);
      }
      if (gamma_b.size(0) == breaker_m10.size(0)) {
        gamma_f_surge.set_size(gamma_b.size(0));
        nx = gamma_b.size(0);
        for (k = 0; k < nx; k++) {
          gamma_f_surge[k] = gamma_b[k] * breaker_m10[k];
        }
      } else {
        times(gamma_f_surge, gamma_b, breaker_m10);
      }
      nx = gamma_f_surge.size(0);
      for (k = 0; k < nx; k++) {
        gamma_f_surge[k] = std::sqrt(gamma_f_surge[k]);
      }
      if (Hm0.size(0) == 1) {
        nx = gamma_f.size(0);
        k = gamma_f.size(0);
      } else {
        nx = Hm0.size(0);
        k = Hm0.size(0);
      }
      if (k == 1) {
        k = gamma_beta_r2p.size(0);
      } else if (Hm0.size(0) == 1) {
        k = gamma_f.size(0);
      } else {
        k = Hm0.size(0);
      }
      if ((Hm0.size(0) == gamma_f.size(0)) && (nx == gamma_beta_r2p.size(0)) &&
          (k == gamma_f_surge.size(0))) {
        gamma_f_surge.set_size(Hm0.size(0));
        nx = Hm0.size(0);
        for (k = 0; k < nx; k++) {
          gamma_f_surge[k] = Hm0[k] * gamma_f[k] * gamma_beta_r2p[k] *
                             (4.0 - 1.5 / gamma_f_surge[k]);
        }
      } else {
        binary_expand_op(gamma_f_surge, Hm0, gamma_f, gamma_beta_r2p);
      }
      s_m10.set_size(SWL.size(0));
      nx = SWL.size(0);
      for (k = 0; k < nx; k++) {
        s_m10[k] = 0.0;
      }
      k = gamma_f_surge.size(0) - 1;
      nx = 0;
      for (i = 0; i <= k; i++) {
        if (gamma_f_surge[i] > 0.0) {
          nx++;
        }
      }
      r2.set_size(nx);
      nx = 0;
      for (i = 0; i <= k; i++) {
        if (gamma_f_surge[i] > 0.0) {
          r2[nx] = i + 1;
          nx++;
        }
      }
      b_R2p_a.set_size(r2.size(0), 2);
      nx = r2.size(0);
      for (k = 0; k < nx; k++) {
        b_R2p_a[k] = R2p_a[r2[k] - 1];
      }
      nx = r2.size(0);
      for (k = 0; k < nx; k++) {
        b_R2p_a[k + b_R2p_a.size(0)] = gamma_f_surge[r2[k] - 1];
      }
      coder::internal::minimum(b_R2p_a, r1);
      k = gamma_f_surge.size(0);
      nx = 0;
      for (i = 0; i < k; i++) {
        if (gamma_f_surge[i] > 0.0) {
          s_m10[i] = r1[nx];
          nx++;
        }
      }
      k = gamma_f_surge.size(0);
      for (i = 0; i < k; i++) {
        if (gamma_f_surge[i] <= 0.0) {
          s_m10[i] = R2p_a[i];
        }
      }
      //  EurOtop Overtopping Eq 5.10 and 5.11
      a_a = std::sqrt(1.0 / slope);
      r1.set_size(Hm0.size(0));
      nx = Hm0.size(0);
      for (k = 0; k < nx; k++) {
        varargin_1 = Hm0[k];
        r1[k] = rt_powd_snf(varargin_1, 3.0);
      }
      nx = r1.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = 9.80665 * r1[k];
      }
      nx = r1.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = std::sqrt(r1[k]);
      }
      if (Rc_corrt.size(0) == 1) {
        nx = breaker_m10.size(0);
      } else {
        nx = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        k = breaker_m10.size(0);
      } else {
        k = Rc_corrt.size(0);
      }
      if (k == 1) {
        k = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        k = breaker_m10.size(0);
      } else {
        k = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i = breaker_m10.size(0);
      } else {
        i = Rc_corrt.size(0);
      }
      if (i == 1) {
        i = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i = breaker_m10.size(0);
      } else {
        i = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        b_i = breaker_m10.size(0);
      } else {
        b_i = Rc_corrt.size(0);
      }
      if (i == 1) {
        i = gamma_b.size(0);
      } else if (b_i == 1) {
        i = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i = breaker_m10.size(0);
      } else {
        i = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        b_i = breaker_m10.size(0);
      } else {
        b_i = Rc_corrt.size(0);
      }
      if (b_i == 1) {
        b_i = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        b_i = breaker_m10.size(0);
      } else {
        b_i = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i1 = breaker_m10.size(0);
      } else {
        i1 = Rc_corrt.size(0);
      }
      if (b_i == 1) {
        b_i = gamma_b.size(0);
      } else if (i1 == 1) {
        b_i = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        b_i = breaker_m10.size(0);
      } else {
        b_i = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i1 = breaker_m10.size(0);
      } else {
        i1 = Rc_corrt.size(0);
      }
      if (i1 == 1) {
        i1 = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i1 = breaker_m10.size(0);
      } else {
        i1 = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i2 = breaker_m10.size(0);
      } else {
        i2 = Rc_corrt.size(0);
      }
      if (b_i == 1) {
        b_i = gamma_f.size(0);
      } else if (i1 == 1) {
        b_i = gamma_b.size(0);
      } else if (i2 == 1) {
        b_i = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        b_i = breaker_m10.size(0);
      } else {
        b_i = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i1 = breaker_m10.size(0);
      } else {
        i1 = Rc_corrt.size(0);
      }
      if (i1 == 1) {
        i1 = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i1 = breaker_m10.size(0);
      } else {
        i1 = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i2 = breaker_m10.size(0);
      } else {
        i2 = Rc_corrt.size(0);
      }
      if (i1 == 1) {
        i1 = gamma_b.size(0);
      } else if (i2 == 1) {
        i1 = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i1 = breaker_m10.size(0);
      } else {
        i1 = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i2 = breaker_m10.size(0);
      } else {
        i2 = Rc_corrt.size(0);
      }
      if (i2 == 1) {
        i2 = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i2 = breaker_m10.size(0);
      } else {
        i2 = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i3 = breaker_m10.size(0);
      } else {
        i3 = Rc_corrt.size(0);
      }
      if (i1 == 1) {
        i1 = gamma_f.size(0);
      } else if (i2 == 1) {
        i1 = gamma_b.size(0);
      } else if (i3 == 1) {
        i1 = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i1 = breaker_m10.size(0);
      } else {
        i1 = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i2 = breaker_m10.size(0);
      } else {
        i2 = Rc_corrt.size(0);
      }
      if (i2 == 1) {
        i2 = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i2 = breaker_m10.size(0);
      } else {
        i2 = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i3 = breaker_m10.size(0);
      } else {
        i3 = Rc_corrt.size(0);
      }
      if (i2 == 1) {
        i2 = gamma_b.size(0);
      } else if (i3 == 1) {
        i2 = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i2 = breaker_m10.size(0);
      } else {
        i2 = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i3 = breaker_m10.size(0);
      } else {
        i3 = Rc_corrt.size(0);
      }
      if (i3 == 1) {
        i3 = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i3 = breaker_m10.size(0);
      } else {
        i3 = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i4 = breaker_m10.size(0);
      } else {
        i4 = Rc_corrt.size(0);
      }
      if (i1 == 1) {
        i1 = gamma_beta_OT.size(0);
      } else if (i2 == 1) {
        i1 = gamma_f.size(0);
      } else if (i3 == 1) {
        i1 = gamma_b.size(0);
      } else if (i4 == 1) {
        i1 = Hm0.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i1 = breaker_m10.size(0);
      } else {
        i1 = Rc_corrt.size(0);
      }
      if ((Rc_corrt.size(0) == breaker_m10.size(0)) && (nx == Hm0.size(0)) &&
          (k == gamma_b.size(0)) && (i == gamma_f.size(0)) &&
          (b_i == gamma_beta_OT.size(0)) && (i1 == gamma_v.size(0))) {
        b_q_wave_ot.set_size(Rc_corrt.size(0));
        nx = Rc_corrt.size(0);
        for (k = 0; k < nx; k++) {
          varargin_1 = 2.7 * Rc_corrt[k] / breaker_m10[k] / Hm0[k] /
                       gamma_b[k] / gamma_f[k] / gamma_beta_OT[k] / gamma_v[k];
          b_q_wave_ot[k] = rt_powd_snf(varargin_1, 1.3);
        }
      } else {
        binary_expand_op(b_q_wave_ot, Rc_corrt, breaker_m10, Hm0, gamma_b,
                         gamma_f, gamma_beta_OT, gamma_v);
      }
      nx = b_q_wave_ot.size(0);
      for (k = 0; k < nx; k++) {
        b_q_wave_ot[k] = -b_q_wave_ot[k];
      }
      nx = b_q_wave_ot.size(0);
      for (k = 0; k < nx; k++) {
        b_q_wave_ot[k] = std::exp(b_q_wave_ot[k]);
      }
      if (Rc_corrt.size(0) == 1) {
        nx = Hm0.size(0);
      } else {
        nx = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        k = Hm0.size(0);
      } else {
        k = Rc_corrt.size(0);
      }
      if (k == 1) {
        k = gamma_f.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        k = Hm0.size(0);
      } else {
        k = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        i = Hm0.size(0);
      } else {
        i = Rc_corrt.size(0);
      }
      if (i == 1) {
        i = gamma_f.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i = Hm0.size(0);
      } else {
        i = Rc_corrt.size(0);
      }
      if (Rc_corrt.size(0) == 1) {
        b_i = Hm0.size(0);
      } else {
        b_i = Rc_corrt.size(0);
      }
      if (i == 1) {
        i = gamma_beta_OT.size(0);
      } else if (b_i == 1) {
        i = gamma_f.size(0);
      } else if (Rc_corrt.size(0) == 1) {
        i = Hm0.size(0);
      } else {
        i = Rc_corrt.size(0);
      }
      if ((Rc_corrt.size(0) == Hm0.size(0)) && (nx == gamma_f.size(0)) &&
          (k == gamma_beta_OT.size(0)) && (i == gamma_star.size(0))) {
        r5.set_size(Rc_corrt.size(0));
        nx = Rc_corrt.size(0);
        for (k = 0; k < nx; k++) {
          varargin_1 = 1.5 * Rc_corrt[k] / Hm0[k] / gamma_f[k] /
                       gamma_beta_OT[k] / gamma_star[k];
          r5[k] = rt_powd_snf(varargin_1, 1.3);
        }
      } else {
        binary_expand_op(r5, Rc_corrt, Hm0, gamma_f, gamma_beta_OT, gamma_star);
      }
      nx = r5.size(0);
      for (k = 0; k < nx; k++) {
        r5[k] = -r5[k];
      }
      nx = r5.size(0);
      for (k = 0; k < nx; k++) {
        r5[k] = std::exp(r5[k]);
      }
      //
      if (r1.size(0) == 1) {
        nx = gamma_b.size(0);
      } else {
        nx = r1.size(0);
      }
      if (r1.size(0) == 1) {
        k = gamma_b.size(0);
      } else {
        k = r1.size(0);
      }
      if (k == 1) {
        k = breaker_m10.size(0);
      } else if (r1.size(0) == 1) {
        k = gamma_b.size(0);
      } else {
        k = r1.size(0);
      }
      if ((r1.size(0) == r5.size(0)) && (r1.size(0) == gamma_b.size(0)) &&
          (nx == breaker_m10.size(0)) && (k == b_q_wave_ot.size(0))) {
        b_R2p_a.set_size(r1.size(0), 2);
        nx = r1.size(0);
        for (k = 0; k < nx; k++) {
          b_R2p_a[k] = r1[k] * 0.09 * r5[k];
        }
        nx = r1.size(0);
        for (k = 0; k < nx; k++) {
          b_R2p_a[k + b_R2p_a.size(0)] = r1[k] * 0.023 / a_a * gamma_b[k] *
                                         breaker_m10[k] * b_q_wave_ot[k];
        }
        coder::internal::minimum(b_R2p_a, b_q_wave_ot);
      } else {
        binary_expand_op(b_q_wave_ot, r1, r5, a_a, gamma_b, breaker_m10);
      }
    } else {
      double a;
      //  cota between 1:2 and 1:1 - embankment to vertical wall
      //  EurOtop Runup Eq 5.6
      b_R2p_a.set_size(Hm0.size(0), 2);
      nx = Hm0.size(0);
      for (k = 0; k < nx; k++) {
        b_R2p_a[k] = Hm0[k] * 0.8 / a_a + 1.6;
      }
      nx = Hm0.size(0);
      for (k = 0; k < nx; k++) {
        b_R2p_a[k + b_R2p_a.size(0)] = 3.0 * Hm0[k];
      }
      coder::internal::minimum(b_R2p_a, r1);
      b_R2p_a.set_size(r1.size(0), 2);
      nx = r1.size(0);
      for (k = 0; k < nx; k++) {
        b_R2p_a[k] = r1[k];
      }
      nx = Hm0.size(0);
      for (k = 0; k < nx; k++) {
        b_R2p_a[k + b_R2p_a.size(0)] = 1.8 * Hm0[k];
      }
      coder::internal::maximum(b_R2p_a, r1);
      b_R2p_a.set_size(SWL.size(0), 2);
      nx = SWL.size(0);
      for (k = 0; k < nx; k++) {
        b_R2p_a[k] = 0.0;
      }
      nx = r1.size(0);
      for (k = 0; k < nx; k++) {
        b_R2p_a[k + b_R2p_a.size(0)] = r1[k];
      }
      coder::internal::maximum(b_R2p_a, s_m10);
      //  EurOtop Overtopping eq 5.18- assumes only smooth slopes
      varargin_1 = 2.0 - 1.0 / slope;
      a_a = 0.09 - 0.01 * rt_powd_snf(varargin_1, 2.1);
      a = a_a + a_a * 0.15 * coder::randn();
      a_a = std::fmin(0.42 * rt_powd_snf(varargin_1, 1.5) + 1.5, 2.35);
      a_a += a_a * 0.1 * coder::randn();
      if (Rc_corrt.size(0) == 1) {
        nx = Hm0.size(0);
      } else {
        nx = Rc_corrt.size(0);
      }
      if ((Rc_corrt.size(0) == Hm0.size(0)) && (nx == gamma_beta_OT.size(0))) {
        r1.set_size(Rc_corrt.size(0));
        nx = Rc_corrt.size(0);
        for (k = 0; k < nx; k++) {
          varargin_1 = a_a * Rc_corrt[k] / Hm0[k] / gamma_beta_OT[k];
          r1[k] = rt_powd_snf(varargin_1, 1.3);
        }
      } else {
        binary_expand_op(r1, a_a, Rc_corrt, Hm0, gamma_beta_OT);
      }
      nx = r1.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = -r1[k];
      }
      nx = r1.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = std::exp(r1[k]);
      }
      b_q_wave_ot.set_size(Hm0.size(0));
      nx = Hm0.size(0);
      for (k = 0; k < nx; k++) {
        varargin_1 = Hm0[k];
        b_q_wave_ot[k] = rt_powd_snf(varargin_1, 3.0);
      }
      nx = b_q_wave_ot.size(0);
      for (k = 0; k < nx; k++) {
        b_q_wave_ot[k] = 9.80665 * b_q_wave_ot[k];
      }
      nx = b_q_wave_ot.size(0);
      for (k = 0; k < nx; k++) {
        b_q_wave_ot[k] = std::sqrt(b_q_wave_ot[k]);
      }
      if (b_q_wave_ot.size(0) == r1.size(0)) {
        nx = b_q_wave_ot.size(0);
        for (k = 0; k < nx; k++) {
          b_q_wave_ot[k] = b_q_wave_ot[k] * a * r1[k];
        }
      } else {
        binary_expand_op(b_q_wave_ot, a, r1);
      }
    }
  } else if ((slope > 0.1) && (structure_type == 3.0)) {
    //  rubble mound
    //      disp('      Calculating Rubble Mound Overtopping and Runup...')
    //  Embankment coefficients
    //  EurOtop Eq 6.1
    //  EurOtop Eq 6.5
    //  gamma_f modifications
    gamma_f_surge.set_size(gamma_f.size(0));
    nx = gamma_f.size(0);
    for (k = 0; k < nx; k++) {
      gamma_f_surge[k] = gamma_f[k];
    }
    //  May need to include a switch for user to turn on./off
    rIndx.set_size(breaker_m10.size(0));
    nx = breaker_m10.size(0);
    for (k = 0; k < nx; k++) {
      rIndx[k] = ((breaker_m10[k] > 1.8) && (breaker_m10[k] < 10.0));
    }
    //  EurOtop Eq. 6.1
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        nx++;
      }
    }
    r1.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        r1[nx] = (breaker_m10[i] - 1.8) * (1.0 - gamma_f[i]) / 8.2;
        nx++;
      }
    }
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        nx++;
      }
    }
    r2.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        r2[nx] = i + 1;
        nx++;
      }
    }
    if (r2.size(0) == r1.size(0)) {
      b_q_wave_ot.set_size(r2.size(0));
      nx = r2.size(0);
      for (k = 0; k < nx; k++) {
        b_q_wave_ot[k] = gamma_f[r2[k] - 1] + r1[k];
      }
    } else {
      binary_expand_op(b_q_wave_ot, gamma_f, r2, r1);
    }
    k = rIndx.size(0);
    nx = 0;
    for (i = 0; i < k; i++) {
      if (rIndx[i]) {
        gamma_f_surge[i] = b_q_wave_ot[nx];
        nx++;
      }
    }
    //  For overtopping, if there is a berm gamma_f is changed to gamma_BB in
    //  the equations- assume hardly and partly reshaping berm breakwaters Will
    //  also take care of instances where structure has steep slopes
    rIndx.set_size(berm_width.size(0));
    nx = berm_width.size(0);
    for (k = 0; k < nx; k++) {
      rIndx[k] = (berm_width[k] > 0.0);
    }
    if (coder::internal::ifWhileCond(rIndx)) {
      //  EurOtop Eq 6.11 - gamma_f is not used for berm structures
      outsize[0] = SWL.size(0);
      if (berm_width.size(0) == 1) {
        nx = Hm0.size(0);
      } else {
        nx = berm_width.size(0);
      }
      if ((berm_width.size(0) == Hm0.size(0)) && (s_m10.size(0) == nx)) {
        b_R2p_a.set_size(SWL.size(0), 2);
        nx = SWL.size(0);
        for (k = 0; k < nx; k++) {
          b_R2p_a[k] = 0.6;
        }
        nx = s_m10.size(0);
        for (k = 0; k < nx; k++) {
          b_R2p_a[k + b_R2p_a.size(0)] =
              (0.68 - 4.1 * s_m10[k]) - 0.05 * berm_width[k] / Hm0[k];
        }
        coder::internal::maximum(b_R2p_a, b_q_wave_ot);
      } else {
        binary_expand_op(b_q_wave_ot, outsize, s_m10, berm_width, Hm0);
      }
      //  Max influence is 0.6
    } else {
      b_q_wave_ot.set_size(SWL.size(0));
      nx = SWL.size(0);
      for (k = 0; k < nx; k++) {
        b_q_wave_ot[k] = 1.0;
      }
    }
    //  EurOtop Eq. 6.7 - gamma_f
    rIndx.set_size(breaker_m10.size(0));
    nx = breaker_m10.size(0);
    for (k = 0; k < nx; k++) {
      rIndx[k] = ((breaker_m10[k] > 5.0) && (breaker_m10[k] < 10.0));
    }
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        nx++;
      }
    }
    r5.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        r5[nx] = (breaker_m10[i] - 5.0) * (1.0 - gamma_f[i]) / 5.0;
        nx++;
      }
    }
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        nx++;
      }
    }
    r3.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        r3[nx] = i + 1;
        nx++;
      }
    }
    if (r3.size(0) == r5.size(0)) {
      r1.set_size(r3.size(0));
      nx = r3.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = gamma_f[r3[k] - 1] + r5[k];
      }
    } else {
      binary_expand_op(r1, gamma_f, r3, r5);
    }
    k = rIndx.size(0);
    nx = 0;
    for (i = 0; i < k; i++) {
      if (rIndx[i]) {
        b_q_wave_ot[i] = r1[nx];
        nx++;
      }
    }
    //  EurOtop Runup Eq 6.1
    // %% Maximum Ru2%./Hm0 = 3 for impermeable and 2.0 for permeable
    if (Hm0.size(0) == 1) {
      nx = gamma_b.size(0);
      k = gamma_b.size(0);
    } else {
      nx = Hm0.size(0);
      k = Hm0.size(0);
    }
    if (k == 1) {
      k = gamma_f_surge.size(0);
    } else if (Hm0.size(0) == 1) {
      k = gamma_b.size(0);
    } else {
      k = Hm0.size(0);
    }
    if (Hm0.size(0) == 1) {
      i = gamma_b.size(0);
    } else {
      i = Hm0.size(0);
    }
    if (i == 1) {
      i = gamma_f_surge.size(0);
    } else if (Hm0.size(0) == 1) {
      i = gamma_b.size(0);
    } else {
      i = Hm0.size(0);
    }
    if (Hm0.size(0) == 1) {
      b_i = gamma_b.size(0);
    } else {
      b_i = Hm0.size(0);
    }
    if (i == 1) {
      i = gamma_beta_r2p.size(0);
    } else if (b_i == 1) {
      i = gamma_f_surge.size(0);
    } else if (Hm0.size(0) == 1) {
      i = gamma_b.size(0);
    } else {
      i = Hm0.size(0);
    }
    if ((Hm0.size(0) == gamma_b.size(0)) && (nx == gamma_f_surge.size(0)) &&
        (k == gamma_beta_r2p.size(0)) && (i == breaker_m10.size(0))) {
      R2p_a.set_size(Hm0.size(0));
      nx = Hm0.size(0);
      for (k = 0; k < nx; k++) {
        R2p_a[k] = Hm0[k] * 1.65 * gamma_b[k] * gamma_f_surge[k] *
                   gamma_beta_r2p[k] * breaker_m10[k];
      }
    } else {
      c_binary_expand_op(R2p_a, Hm0, gamma_b, gamma_f_surge, gamma_beta_r2p,
                         breaker_m10);
    }
    if (gamma_b.size(0) == breaker_m10.size(0)) {
      breaker_m10.set_size(gamma_b.size(0));
      nx = gamma_b.size(0);
      for (k = 0; k < nx; k++) {
        breaker_m10[k] = gamma_b[k] * breaker_m10[k];
      }
    } else {
      times(breaker_m10, gamma_b);
    }
    nx = breaker_m10.size(0);
    for (k = 0; k < nx; k++) {
      breaker_m10[k] = std::sqrt(breaker_m10[k]);
    }
    if (Hm0.size(0) == 1) {
      nx = gamma_f_surge.size(0);
      k = gamma_f_surge.size(0);
    } else {
      nx = Hm0.size(0);
      k = Hm0.size(0);
    }
    if (k == 1) {
      k = gamma_beta_r2p.size(0);
    } else if (Hm0.size(0) == 1) {
      k = gamma_f_surge.size(0);
    } else {
      k = Hm0.size(0);
    }
    if ((Hm0.size(0) == gamma_f_surge.size(0)) &&
        (nx == gamma_beta_r2p.size(0)) && (k == breaker_m10.size(0))) {
      gamma_f_surge.set_size(Hm0.size(0));
      nx = Hm0.size(0);
      for (k = 0; k < nx; k++) {
        gamma_f_surge[k] = Hm0[k] * gamma_f_surge[k] * gamma_beta_r2p[k] *
                           (4.0 - 1.5 / breaker_m10[k]);
      }
    } else {
      c_binary_expand_op(gamma_f_surge, Hm0, gamma_beta_r2p, breaker_m10);
    }
    s_m10.set_size(SWL.size(0));
    nx = SWL.size(0);
    for (k = 0; k < nx; k++) {
      s_m10[k] = 0.0;
    }
    k = gamma_f_surge.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (gamma_f_surge[i] > 0.0) {
        nx++;
      }
    }
    r4.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (gamma_f_surge[i] > 0.0) {
        r4[nx] = i + 1;
        nx++;
      }
    }
    b_R2p_a.set_size(r4.size(0), 2);
    nx = r4.size(0);
    for (k = 0; k < nx; k++) {
      b_R2p_a[k] = R2p_a[r4[k] - 1];
    }
    nx = r4.size(0);
    for (k = 0; k < nx; k++) {
      b_R2p_a[k + b_R2p_a.size(0)] = gamma_f_surge[r4[k] - 1];
    }
    coder::internal::minimum(b_R2p_a, r1);
    k = gamma_f_surge.size(0);
    nx = 0;
    for (i = 0; i < k; i++) {
      if (gamma_f_surge[i] > 0.0) {
        s_m10[i] = r1[nx];
        nx++;
      }
    }
    k = gamma_f_surge.size(0);
    for (i = 0; i < k; i++) {
      if (gamma_f_surge[i] <= 0.0) {
        s_m10[i] = R2p_a[i];
      }
    }
    if (Rc_corrt.size(0) == 1) {
      nx = Hm0.size(0);
    } else {
      nx = Rc_corrt.size(0);
    }
    if (Rc_corrt.size(0) == 1) {
      k = Hm0.size(0);
    } else {
      k = Rc_corrt.size(0);
    }
    if (k == 1) {
      k = b_q_wave_ot.size(0);
    } else if (Rc_corrt.size(0) == 1) {
      k = Hm0.size(0);
    } else {
      k = Rc_corrt.size(0);
    }
    if ((Rc_corrt.size(0) == Hm0.size(0)) && (nx == b_q_wave_ot.size(0)) &&
        (k == gamma_beta_OT.size(0))) {
      r1.set_size(Rc_corrt.size(0));
      nx = Rc_corrt.size(0);
      for (k = 0; k < nx; k++) {
        varargin_1 =
            1.5 * Rc_corrt[k] / Hm0[k] / b_q_wave_ot[k] / gamma_beta_OT[k];
        r1[k] = rt_powd_snf(varargin_1, 1.3);
      }
    } else {
      binary_expand_op(r1, Rc_corrt, Hm0, b_q_wave_ot, gamma_beta_OT);
    }
    nx = r1.size(0);
    for (k = 0; k < nx; k++) {
      r1[k] = -r1[k];
    }
    nx = r1.size(0);
    for (k = 0; k < nx; k++) {
      r1[k] = std::exp(r1[k]);
    }
    b_q_wave_ot.set_size(Hm0.size(0));
    nx = Hm0.size(0);
    for (k = 0; k < nx; k++) {
      varargin_1 = Hm0[k];
      b_q_wave_ot[k] = rt_powd_snf(varargin_1, 3.0);
    }
    nx = b_q_wave_ot.size(0);
    for (k = 0; k < nx; k++) {
      b_q_wave_ot[k] = 9.80665 * b_q_wave_ot[k];
    }
    nx = b_q_wave_ot.size(0);
    for (k = 0; k < nx; k++) {
      b_q_wave_ot[k] = std::sqrt(b_q_wave_ot[k]);
    }
    if (b_q_wave_ot.size(0) == r1.size(0)) {
      nx = b_q_wave_ot.size(0);
      for (k = 0; k < nx; k++) {
        b_q_wave_ot[k] = b_q_wave_ot[k] * 0.09 * r1[k];
      }
    } else {
      binary_expand_op(b_q_wave_ot, r1);
    }
  } else {
    //  If the slope cota = 1 ------> Vertical walls
    //      disp('      Calculating Floodwall Overtopping...')
    s_m10.set_size(SWL.size(0));
    nx = SWL.size(0);
    for (k = 0; k < nx; k++) {
      s_m10[k] = rtNaN;
    }
    //  Vertical wall coefficients
    // + 0.007;    % EurOtop Eq 7.1
    // + 0.230;    % EurOtop Eq 7.1
    // + 0.012;    % EurOtop Eq 7.5
    // + 0.170;    % EurOtop Eq 7.5
    // + 0.0045;   % EurOtop Eq 7.7 and 7.15
    // + 0.0006;  % EurOtop Eq 7.8 and 7.14
    //  Franco equation (for reference)
    //  q = sqrt(g.*Hm0.^3).*0.2.*exp(-4.7.*Rc_corrt./Hm0);
    //  Sumberged depth of wall
    //  depth above toe mound./berm in front of vertical wall
    //  Initialize
    b_q_wave_ot.set_size(SWL.size(0));
    nx = SWL.size(0);
    for (k = 0; k < nx; k++) {
      b_q_wave_ot[k] = 0.0;
    }
    if (SWL.size(0) == 1) {
      nx = wall_toe.size(0);
    } else {
      nx = SWL.size(0);
    }
    if ((SWL.size(0) == wall_toe.size(0)) && (nx == Hm0.size(0))) {
      rIndx.set_size(SWL.size(0));
      nx = SWL.size(0);
      for (k = 0; k < nx; k++) {
        rIndx[k] = ((SWL[k] - wall_toe[k]) / Hm0[k] > 4.0);
      }
    } else {
      e_binary_expand_op(rIndx, SWL, wall_toe, Hm0);
    }
    //  no foreshore influence
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        nx++;
      }
    }
    r2.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        r2[nx] = i + 1;
        nx++;
      }
    }
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        nx++;
      }
    }
    r3.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        r3[nx] = i + 1;
        nx++;
      }
    }
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        nx++;
      }
    }
    r4.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (rIndx[i]) {
        r4[nx] = i + 1;
        nx++;
      }
    }
    if (r2.size(0) == 1) {
      nx = r4.size(0);
    } else {
      nx = r2.size(0);
    }
    if ((r2.size(0) == r4.size(0)) && (nx == r4.size(0))) {
      r1.set_size(r2.size(0));
      nx = r2.size(0);
      for (k = 0; k < nx; k++) {
        varargin_1 = 2.35 / gamma_beta_OT[r2[k] - 1] * Rc_corrt[r4[k] - 1] /
                     Hm0[r4[k] - 1];
        r1[k] = rt_powd_snf(varargin_1, 1.3);
      }
    } else {
      c_binary_expand_op(r1, gamma_beta_OT, r2, Rc_corrt, r4, Hm0);
    }
    nx = r1.size(0);
    for (k = 0; k < nx; k++) {
      r1[k] = -r1[k];
    }
    nx = r1.size(0);
    for (k = 0; k < nx; k++) {
      r1[k] = std::exp(r1[k]);
    }
    R2p_a.set_size(r3.size(0));
    nx = r3.size(0);
    for (k = 0; k < nx; k++) {
      varargin_1 = Hm0[r3[k] - 1];
      R2p_a[k] = rt_powd_snf(varargin_1, 3.0);
    }
    nx = R2p_a.size(0);
    for (k = 0; k < nx; k++) {
      R2p_a[k] = 9.80665 * R2p_a[k];
    }
    nx = R2p_a.size(0);
    for (k = 0; k < nx; k++) {
      R2p_a[k] = std::sqrt(R2p_a[k]);
    }
    if (R2p_a.size(0) == r1.size(0)) {
      nx = R2p_a.size(0);
      for (k = 0; k < nx; k++) {
        R2p_a[k] = R2p_a[k] * 0.047 * r1[k];
      }
    } else {
      d_binary_expand_op(R2p_a, r1);
    }
    k = rIndx.size(0);
    nx = 0;
    for (i = 0; i < k; i++) {
      if (rIndx[i]) {
        b_q_wave_ot[i] = R2p_a[nx];
        nx++;
      }
    }
    //  EurOtop Overtopping Eq 7.1
    //  foreshore influence
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (!rIndx[i]) {
        nx++;
      }
    }
    r8.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (!rIndx[i]) {
        r8[nx] = i + 1;
        nx++;
      }
    }
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (!rIndx[i]) {
        nx++;
      }
    }
    r9.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (!rIndx[i]) {
        r9[nx] = i + 1;
        nx++;
      }
    }
    k = rIndx.size(0) - 1;
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (!rIndx[i]) {
        nx++;
      }
    }
    r10.set_size(nx);
    nx = 0;
    for (i = 0; i <= k; i++) {
      if (!rIndx[i]) {
        r10[nx] = i + 1;
        nx++;
      }
    }
    if (r8.size(0) == 1) {
      nx = r10.size(0);
    } else {
      nx = r8.size(0);
    }
    if ((r8.size(0) == r10.size(0)) && (nx == r10.size(0))) {
      r1.set_size(r8.size(0));
      nx = r8.size(0);
      for (k = 0; k < nx; k++) {
        r1[k] = -(2.78 / gamma_beta_OT[r8[k] - 1]) * Rc_corrt[r10[k] - 1] /
                Hm0[r10[k] - 1];
      }
    } else {
      binary_expand_op(r1, gamma_beta_OT, r8, Rc_corrt, r10, Hm0);
    }
    nx = r1.size(0);
    for (k = 0; k < nx; k++) {
      r1[k] = std::exp(r1[k]);
    }
    R2p_a.set_size(r9.size(0));
    nx = r9.size(0);
    for (k = 0; k < nx; k++) {
      varargin_1 = Hm0[r9[k] - 1];
      R2p_a[k] = rt_powd_snf(varargin_1, 3.0);
    }
    nx = R2p_a.size(0);
    for (k = 0; k < nx; k++) {
      R2p_a[k] = 9.80665 * R2p_a[k];
    }
    nx = R2p_a.size(0);
    for (k = 0; k < nx; k++) {
      R2p_a[k] = std::sqrt(R2p_a[k]);
    }
    if (R2p_a.size(0) == r1.size(0)) {
      nx = R2p_a.size(0);
      for (k = 0; k < nx; k++) {
        R2p_a[k] = R2p_a[k] * 0.05 * r1[k];
      }
    } else {
      c_binary_expand_op(R2p_a, r1);
    }
    k = rIndx.size(0);
    nx = 0;
    for (i = 0; i < k; i++) {
      if (!rIndx[i]) {
        b_q_wave_ot[i] = R2p_a[nx];
        nx++;
      }
    }
  }
  //
  //  q Overflow
  if (b_q_wave_ot.size(0) == b_q_overflow.size(0)) {
    R2p_a.set_size(b_q_wave_ot.size(0));
    nx = b_q_wave_ot.size(0);
    for (k = 0; k < nx; k++) {
      R2p_a[k] = b_q_wave_ot[k] + b_q_overflow[k];
    }
  } else {
    plus(R2p_a, b_q_wave_ot, b_q_overflow);
  }
  //  Define NaN Index
  rIndx.set_size(Hm0.size(0));
  nx = Hm0.size(0);
  for (k = 0; k < nx; k++) {
    rIndx[k] = std::isnan(Hm0[k]);
  }
  r6.set_size(Tp.size(0));
  nx = Tp.size(0);
  for (k = 0; k < nx; k++) {
    r6[k] = std::isnan(Tp[k]);
  }
  r7.set_size(SWL.size(0));
  nx = SWL.size(0);
  for (k = 0; k < nx; k++) {
    r7[k] = std::isnan(SWL[k]);
  }
  if (Hm0.size(0) == 1) {
    nx = Tp.size(0);
    k = Tp.size(0);
  } else {
    nx = Hm0.size(0);
    k = Hm0.size(0);
  }
  if (k == 1) {
    k = SWL.size(0);
  } else if (Hm0.size(0) == 1) {
    k = Tp.size(0);
  } else {
    k = Hm0.size(0);
  }
  if (Hm0.size(0) == 1) {
    i = Tp.size(0);
  } else {
    i = Hm0.size(0);
  }
  if (i == 1) {
    i = SWL.size(0);
  } else if (Hm0.size(0) == 1) {
    i = Tp.size(0);
  } else {
    i = Hm0.size(0);
  }
  if (Hm0.size(0) == 1) {
    b_i = Tp.size(0);
  } else {
    b_i = Hm0.size(0);
  }
  if (i == 1) {
    i = rIndx.size(0);
  } else if (b_i == 1) {
    i = SWL.size(0);
  } else if (Hm0.size(0) == 1) {
    i = Tp.size(0);
  } else {
    i = Hm0.size(0);
  }
  if (Hm0.size(0) == 1) {
    b_i = Tp.size(0);
  } else {
    b_i = Hm0.size(0);
  }
  if (b_i == 1) {
    b_i = SWL.size(0);
  } else if (Hm0.size(0) == 1) {
    b_i = Tp.size(0);
  } else {
    b_i = Hm0.size(0);
  }
  if (Hm0.size(0) == 1) {
    i1 = Tp.size(0);
  } else {
    i1 = Hm0.size(0);
  }
  if (b_i == 1) {
    b_i = rIndx.size(0);
  } else if (i1 == 1) {
    b_i = SWL.size(0);
  } else if (Hm0.size(0) == 1) {
    b_i = Tp.size(0);
  } else {
    b_i = Hm0.size(0);
  }
  if (Hm0.size(0) == 1) {
    i1 = Tp.size(0);
  } else {
    i1 = Hm0.size(0);
  }
  if (i1 == 1) {
    i1 = SWL.size(0);
  } else if (Hm0.size(0) == 1) {
    i1 = Tp.size(0);
  } else {
    i1 = Hm0.size(0);
  }
  if (Hm0.size(0) == 1) {
    i2 = Tp.size(0);
  } else {
    i2 = Hm0.size(0);
  }
  if (b_i == 1) {
    b_i = r6.size(0);
  } else if (i1 == 1) {
    b_i = rIndx.size(0);
  } else if (i2 == 1) {
    b_i = SWL.size(0);
  } else if (Hm0.size(0) == 1) {
    b_i = Tp.size(0);
  } else {
    b_i = Hm0.size(0);
  }
  if ((Hm0.size(0) == Tp.size(0)) && (nx == SWL.size(0)) &&
      (k == rIndx.size(0)) && (i == r6.size(0)) && (b_i == r7.size(0))) {
    rIndx.set_size(Hm0.size(0));
    nx = Hm0.size(0);
    for (k = 0; k < nx; k++) {
      rIndx[k] = ((Hm0[k] <= 0.0) || (Tp[k] <= 0.0) || (SWL[k] <= -100.0) ||
                  rIndx[k] || r6[k] || r7[k]);
    }
  } else {
    b_binary_expand_op(rIndx, Hm0, Tp, SWL, r6, r7);
  }
  //  Do not calculate structure response if no storm forcing
  k = rIndx.size(0);
  for (i = 0; i < k; i++) {
    if (rIndx[i]) {
      R2p_a[i] = rtNaN;
    }
  }
  k = rIndx.size(0);
  for (i = 0; i < k; i++) {
    if (rIndx[i]) {
      b_q_wave_ot[i] = rtNaN;
    }
  }
  k = rIndx.size(0);
  for (i = 0; i < k; i++) {
    if (rIndx[i]) {
      b_q_overflow[i] = rtNaN;
    }
  }
  k = rIndx.size(0);
  for (i = 0; i < k; i++) {
    if (rIndx[i]) {
      s_m10[i] = rtNaN;
    }
  }
  //  Compute R2p + SWL
  //  Reshape
  q.set_size(SWL.size(0), 1);
  nx = SWL.size(0);
  for (k = 0; k < nx; k++) {
    q[k] = R2p_a[k];
  }
  q_wave_ot.set_size(SWL.size(0), 1);
  nx = SWL.size(0);
  for (k = 0; k < nx; k++) {
    q_wave_ot[k] = b_q_wave_ot[k];
  }
  q_overflow.set_size(SWL.size(0), 1);
  nx = SWL.size(0);
  for (k = 0; k < nx; k++) {
    q_overflow[k] = b_q_overflow[k];
  }
  R2p.set_size(SWL.size(0), 1);
  nx = SWL.size(0);
  for (k = 0; k < nx; k++) {
    R2p[k] = s_m10[k];
  }
  if (s_m10.size(0) == SWL.size(0)) {
    R2p_SWL.set_size(SWL.size(0), 1);
    nx = SWL.size(0);
    for (k = 0; k < nx; k++) {
      R2p_SWL[k] = s_m10[k] + SWL[k];
    }
  } else {
    binary_expand_op(R2p_SWL, s_m10, SWL, data_dims);
  }
}

// End of code generation (Eurotop_r2p_q_Final.cpp)
