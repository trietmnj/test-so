//
// unsafeSxfun.h
//
// Code generation for function 'unsafeSxfun'
//

#ifndef UNSAFESXFUN_H
#define UNSAFESXFUN_H

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
void binary_expand_op(coder::array<double, 1U> &in1,
                      const coder::array<double, 1U> &in3,
                      const coder::array<double, 1U> &in4,
                      const coder::array<double, 1U> &in5,
                      const coder::array<double, 1U> &in6);

void binary_expand_op(coder::array<double, 1U> &in1, double in3,
                      const coder::array<double, 1U> &in4,
                      const coder::array<double, 1U> &in5,
                      const coder::array<double, 1U> &in6);

void binary_expand_op(
    coder::array<double, 1U> &in1, const coder::array<double, 1U> &in3,
    const coder::array<double, 1U> &in4, const coder::array<double, 1U> &in5,
    const coder::array<double, 1U> &in6, const coder::array<double, 1U> &in7,
    const coder::array<double, 1U> &in8, const coder::array<double, 1U> &in9);

void binary_expand_op(coder::array<double, 1U> &in1,
                      const coder::array<double, 1U> &in3,
                      const coder::array<double, 1U> &in4,
                      const coder::array<double, 1U> &in5,
                      const coder::array<double, 1U> &in6,
                      const coder::array<double, 1U> &in7);

void c_binary_expand_op(coder::array<double, 1U> &in1,
                        const coder::array<double, 1U> &in3,
                        const coder::array<int, 1U> &in4,
                        const coder::array<double, 1U> &in5,
                        const coder::array<int, 1U> &in6,
                        const coder::array<double, 1U> &in7);

#endif
// End of code generation (unsafeSxfun.h)
