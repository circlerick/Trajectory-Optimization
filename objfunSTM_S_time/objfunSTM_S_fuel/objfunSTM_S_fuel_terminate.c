/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfunSTM_S_fuel_terminate.c
 *
 * Code generation for function 'objfunSTM_S_fuel_terminate'
 *
 */

/* Include files */
#include "objfunSTM_S_fuel_terminate.h"
#include "_coder_objfunSTM_S_fuel_api.h"
#include "_coder_objfunSTM_S_fuel_mex.h"
#include "objfunSTM_S_fuel_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void objfunSTM_S_fuel_atexit(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrt_synchGlobalsFromML(&st);
  emlrt_synchGlobalsToML(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void objfunSTM_S_fuel_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (objfunSTM_S_fuel_terminate.c) */
