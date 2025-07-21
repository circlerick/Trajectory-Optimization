/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_suff.h
 *
 * Code generation for function 'objfun_suff'
 *
 */

#pragma once

/* Include files */
#include "objfun_suff_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void emlrt_checkEscapedGlobals(void);

void objfun_suff(objfun_suffStackData *SD, const emlrtStack *sp,
                 const real_T lam0[5], const real_T X0[5],
                 const real_T STM0[100], const struct0_T *b_physical,
                 const struct1_T *boundary, emxArray_real_T *states,
                 emxArray_real_T *times);

void objfun_suff_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                          real_T physical_c, real_T physical_NSTATE,
                          real_T physical_shoot, real_T physical_EPS,
                          real_T SIGN, const real_T s[111],
                          emxArray_real_T *varargout_1);

/* End of code generation (objfun_suff.h) */
