/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfunSTM_S_fuel.h
 *
 * Code generation for function 'objfunSTM_S_fuel'
 *
 */

#pragma once

/* Include files */
#include "objfunSTM_S_fuel_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void emlrt_checkEscapedGlobals(void);

void objfunSTM_S_fuel(const emlrtStack *sp, const real_T lam0[5],
                      const real_T X0[5], const struct0_T *b_physical,
                      const struct1_T *boundary, real_T obj_data[],
                      int32_T obj_size[1], emxArray_real_T *grad);

void objfunSTM_S_fuel_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                               real_T physical_c, real_T physical_NSTATE,
                               real_T physical_shoot, real_T physical_EPS,
                               real_T SIGN, const emxArray_real_T *s,
                               emxArray_real_T *varargout_1);

/* End of code generation (objfunSTM_S_fuel.h) */
