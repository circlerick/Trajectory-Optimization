/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_energy_terminate.c
 *
 * Code generation for function 'objfun_S_energy_terminate'
 *
 */

/* Include files */
#include "objfun_S_energy_terminate.h"
#include "_coder_objfun_S_energy_api.h"
#include "_coder_objfun_S_energy_mex.h"
#include "objfun_S_energy_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void objfun_S_energy_atexit(void)
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

void objfun_S_energy_terminate(void)
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (objfun_S_energy_terminate.c) */
