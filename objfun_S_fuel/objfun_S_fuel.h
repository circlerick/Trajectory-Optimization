/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_fuel.h
 *
 * Code generation for function 'objfun_S_fuel'
 *
 */

#pragma once

/* Include files */
#include "objfun_S_fuel_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void c_binary_expand_op(real_T in1[2], const struct0_T *in2,
                        const real_T in3[11], int32_T in4);

void d_binary_expand_op(real_T in1[2], const struct0_T *in2,
                        const real_T in3[11], int32_T in4);

void emlrt_checkEscapedGlobals(void);

void objfun_S_fuel(objfun_S_fuelStackData *SD, const emlrtStack *sp,
                   const real_T lam0[5], const real_T X0[5],
                   const struct0_T *b_physical, const struct1_T *boundary,
                   real_T *obj, emxArray_real_T *states,
                   emxArray_real_T *times);

void objfun_S_fuel_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                            real_T physical_c, real_T physical_NSTATE,
                            real_T physical_shoot, real_T physical_EPS,
                            real_T SIGN, const real_T s[11],
                            emxArray_real_T *varargout_1);

/* End of code generation (objfun_S_fuel.h) */
