/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_NOG.h
 *
 * Code generation for function 'objfun_S_NOG'
 *
 */

#pragma once

/* Include files */
#include "objfun_S_NOG_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void emlrt_checkEscapedGlobals(void);

void objfun_S_NOG(objfun_S_NOGStackData *SD, const emlrtStack *sp,
                  const real_T lam0[5], const real_T X0[5],
                  const struct0_T *b_physical, const struct1_T *b_boundary,
                  const struct2_T *NOG, real_T *obj, emxArray_real_T *states,
                  emxArray_real_T *times);

void objfun_S_NOG_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                           real_T physical_c, real_T physical_NSTATE,
                           real_T physical_shoot, real_T physical_EPS,
                           real_T SIGN_nom, const real_T Pigreco[20],
                           const emxArray_real_T *s,
                           emxArray_real_T *varargout_1);

void objfun_S_NOG_anonFcn4(const emlrtStack *sp, real_T physical_Tmax,
                           real_T physical_c, real_T physical_NSTATE,
                           real_T physical_shoot, real_T physical_EPS,
                           real_T SIGN_nom, const emxArray_real_T *s,
                           emxArray_real_T *varargout_1);

void plus(const emlrtStack *sp, emxArray_real_T *in1,
          const emxArray_real_T *in2);

/* End of code generation (objfun_S_NOG.h) */
