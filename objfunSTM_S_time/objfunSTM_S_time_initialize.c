/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfunSTM_S_time_initialize.c
 *
 * Code generation for function 'objfunSTM_S_time_initialize'
 *
 */

/* Include files */
#include "objfunSTM_S_time_initialize.h"
#include "_coder_objfunSTM_S_time_api.h"
#include "_coder_objfunSTM_S_time_mex.h"
#include "objfunSTM_S_time_data.h"
#include "objfunSTM_S_time_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void objfunSTM_S_time_once(const emlrtStack *sp);

/* Function Definitions */
static void objfunSTM_S_time_once(const emlrtStack *sp)
{
  static const struct0_T r = {
      2.2028826399394248,        /* Tmax */
      3600.48317349366,          /* g */
      0.0121506683,              /* mu */
      0.01685201805387547,       /* RE */
      0.00477985458045551,       /* RM */
      28.751961044449605,        /* c */
      {-0.0121506683, 0.0},      /* Earth */
      {0.9878493317, 0.0},       /* Moon */
      5.0,                       /* NSTATE */
      1.0,                       /* shoot */
      {0.0, 0.0, 0.0, 0.0, 0.0}, /* g0_x */
      0.0                        /* EPS */
  };
  mex_InitInfAndNan();
  physical = r;
  physical_dirty = 1U;
  emlrtSetGlobalSyncFcn((emlrtCTX)sp, (void *)&emlrt_synchGlobalsToML);
}

void objfunSTM_S_time_initialize(void)
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2022b(&st);
  emlrtClearAllocCountR2012b(&st, false, 0U, NULL);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    objfunSTM_S_time_once(&st);
  }
}

/* End of code generation (objfunSTM_S_time_initialize.c) */
