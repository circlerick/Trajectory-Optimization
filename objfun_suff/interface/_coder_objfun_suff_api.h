/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfun_suff_api.h
 *
 * Code generation for function '_coder_objfun_suff_api'
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
void MEXGlobalSyncInFunction(const emlrtStack *sp);

void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck);

void emlrt_synchGlobalsFromML(const emlrtStack *sp);

void emlrt_synchGlobalsToML(const emlrtStack *sp);

void objfun_suff_api(objfun_suffStackData *SD, const mxArray *const prhs[5],
                     int32_T nlhs, const mxArray *plhs[2]);

/* End of code generation (_coder_objfun_suff_api.h) */
