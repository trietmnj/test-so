//
// minOrMax.h
//
// Code generation for function 'minOrMax'
//

#ifndef MINORMAX_H
#define MINORMAX_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
void binary_expand_op(coder::array<double, 1U> &in1, const int in2[2],
                      const coder::array<double, 1U> &in3,
                      const coder::array<double, 1U> &in4,
                      const coder::array<double, 1U> &in5);

void binary_expand_op(coder::array<double, 1U> &in1,
                      const coder::array<double, 1U> &in2,
                      const coder::array<double, 1U> &in3, double in4,
                      const coder::array<double, 1U> &in5,
                      const coder::array<double, 1U> &in6);

namespace coder {
namespace internal {
void maximum(const ::coder::array<double, 2U> &x,
             ::coder::array<double, 1U> &ex);

void minimum(const ::coder::array<double, 2U> &x,
             ::coder::array<double, 1U> &ex);

} // namespace internal
} // namespace coder

#endif
// End of code generation (minOrMax.h)
