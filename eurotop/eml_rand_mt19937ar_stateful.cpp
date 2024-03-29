//
// eml_rand_mt19937ar_stateful.cpp
//
// Code generation for function 'eml_rand_mt19937ar_stateful'
//

// Include files
#include "eml_rand_mt19937ar_stateful.h"
#include "Eurotop_r2p_q_Final_data.h"
#include "rt_nonfinite.h"
#include <cstring>

// Function Definitions
void eml_rand_mt19937ar_stateful_init()
{
  unsigned int r;
  std::memset(&state[0], 0, 625U * sizeof(unsigned int));
  r = 5489U;
  state[0] = 5489U;
  for (int mti{0}; mti < 623; mti++) {
    r = ((r ^ r >> 30U) * 1812433253U + mti) + 1U;
    state[mti + 1] = r;
  }
  state[624] = 624U;
}

// End of code generation (eml_rand_mt19937ar_stateful.cpp)
