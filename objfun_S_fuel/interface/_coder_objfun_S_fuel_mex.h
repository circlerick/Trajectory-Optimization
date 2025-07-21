/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfun_S_fuel_mex.h
 *
 * Code generation for function '_coder_objfun_S_fuel_mex'
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
MEXFUNCTION_LINKAGE void mexFunction(int32_T nlhs, mxArray *plhs[],
                                     int32_T nrhs, const mxArray *prhs[]);

emlrtCTX mexFunctionCreateRootTLS(void);

void objfun_S_fuel_mexFunction(objfun_S_fuelStackData *SD, int32_T nlhs,
                               mxArray *plhs[3], int32_T nrhs,
                               const mxArray *prhs[4]);

/* End of code generation (_coder_objfun_S_fuel_mex.h) */
