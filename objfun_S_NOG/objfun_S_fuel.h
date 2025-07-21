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
#include "objfun_S_NOG_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void objfun_S_fuel(objfun_S_NOGStackData *SD, const emlrtStack *sp,
                   const real_T lam0_data[], int32_T lam0_size,
                   const real_T X0_data[], int32_T X0_size,
                   real_T physical_Tmax, real_T physical_RE, real_T physical_RM,
                   real_T physical_c, const real_T physical_Earth[2],
                   const real_T physical_Moon[2], real_T physical_NSTATE,
                   real_T physical_shoot, const real_T physical_g0_x[5],
                   real_T physical_EPS, real_T boundary_T0,
                   real_T boundary_Tfin, const real_T boundary_Xf[5],
                   const real_T boundary_Sigma[5],
                   const real_T boundary_Pigreco[20], real_T *obj,
                   emxArray_real_T *states, emxArray_real_T *times);

void objfun_S_fuel_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                            real_T physical_c, real_T physical_NSTATE,
                            real_T physical_shoot, real_T physical_EPS,
                            real_T SIGN, const emxArray_real_T *s,
                            emxArray_real_T *varargout_1);

/* End of code generation (objfun_S_fuel.h) */
