/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_NOG_initialize.c
 *
 * Code generation for function 'objfun_S_NOG_initialize'
 *
 */

/* Include files */
#include "objfun_S_NOG_initialize.h"
#include "_coder_objfun_S_NOG_api.h"
#include "_coder_objfun_S_NOG_mex.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void objfun_S_NOG_once(const emlrtStack *sp);

/* Function Definitions */
static void objfun_S_NOG_once(const emlrtStack *sp)
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
  static const struct1_T r1 = {
      1.0000270232123276, /* T0 */
      2.7016124383443909, /* Tfin */
      {1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,
       0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0}, /* A */
      {0.9878493317, 0.231399371017172, 0.354042170150869, -0.0130096105758475,
       0.0}, /* Xf */
      {-0.0121506683, -0.042606105539730238, 4.8212302079368126, 0.0,
       1.0},                     /* X0 */
      {0.0, 0.0, 0.0, 0.0, 1.0}, /* Sigma */
      {1.0, -0.0, -0.0, -0.0, -0.0, 0.0, 1.0, -0.0, -0.0, -0.0,
       0.0, 0.0,  1.0,  -0.0, -0.0, 0.0, 0.0, 0.0,  1.0,  -0.0}, /* Pigreco */
      {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
       0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0} /* g0_xx */
  };
  mex_InitInfAndNan();
  physical = r;
  boundary = r1;
  physical_dirty = 1U;
  boundary_dirty = 1U;
  emlrtSetGlobalSyncFcn((emlrtCTX)sp, (void *)&emlrt_synchGlobalsToML);
}

void objfun_S_NOG_initialize(void)
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
    objfun_S_NOG_once(&st);
  }
}

/* End of code generation (objfun_S_NOG_initialize.c) */
