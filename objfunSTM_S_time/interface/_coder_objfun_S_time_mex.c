/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfun_S_time_mex.c
 *
 * Code generation for function '_coder_objfun_S_time_mex'
 *
 */

/* Include files */
#include "_coder_objfun_S_time_mex.h"
#include "_coder_objfun_S_time_api.h"
#include "objfun_S_time_data.h"
#include "objfun_S_time_initialize.h"
#include "objfun_S_time_terminate.h"
#include "objfun_S_time_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  objfun_S_timeStackData *objfun_S_timeStackDataGlobal = NULL;
  objfun_S_timeStackDataGlobal = (objfun_S_timeStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(objfun_S_timeStackData));
  mexAtExit(&objfun_S_time_atexit);
  /* Module initialization. */
  objfun_S_time_initialize();
  /* Dispatch the entry-point. */
  objfun_S_time_mexFunction(objfun_S_timeStackDataGlobal, nlhs, plhs, nrhs,
                            prhs);
  /* Module termination. */
  objfun_S_time_terminate();
  emlrtMxFree(objfun_S_timeStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void objfun_S_time_mexFunction(objfun_S_timeStackData *SD, int32_T nlhs,
                               mxArray *plhs[3], int32_T nrhs,
                               const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[3];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        13, "objfun_S_time");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "objfun_S_time");
  }
  /* Call the function. */
  objfun_S_time_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_objfun_S_time_mex.c) */
