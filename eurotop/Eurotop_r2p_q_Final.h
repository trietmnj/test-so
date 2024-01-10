//
// Eurotop_r2p_q_Final.h
//
// Code generation for function 'Eurotop_r2p_q_Final'
//

#ifndef EUROTOP_R2P_Q_FINAL_H
#define EUROTOP_R2P_Q_FINAL_H

// Include files
#include "Eurotop_r2p_q_Final_spec.h"
#include "rtwtypes.h"
#include "coder_array.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
EUROTOP_R2P_Q_FINAL_DLL_EXPORT extern void Eurotop_r2p_q_Final(
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

#endif
// End of code generation (Eurotop_r2p_q_Final.h)
