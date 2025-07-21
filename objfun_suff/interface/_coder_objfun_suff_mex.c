/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfun_suff_mex.c
 *
 * Code generation for function '_coder_objfun_suff_mex'
 *
 */

/* Include files */
#include "_coder_objfun_suff_mex.h"
#include "_coder_objfun_suff_api.h"
#include "objfun_suff_data.h"
#include "objfun_suff_initialize.h"
#include "objfun_suff_terminate.h"
#include "objfun_suff_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  objfun_suffStackData *objfun_suffStackDataGlobal = NULL;
  objfun_suffStackDataGlobal = (objfun_suffStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(objfun_suffStackData));
  mexAtExit(&objfun_suff_atexit);
  /* Module initialization. */
  objfun_suff_initialize();
  /* Dispatch the entry-point. */
  objfun_suff_mexFunction(objfun_suffStackDataGlobal, nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  objfun_suff_terminate();
  emlrtMxFree(objfun_suffStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void objfun_suff_mexFunction(objfun_suffStackData *SD, int32_T nlhs,
                             mxArray *plhs[2], int32_T nrhs,
                             const mxArray *prhs[5])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[2];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4,
                        11, "objfun_suff");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "objfun_suff");
  }
  /* Call the function. */
  objfun_suff_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_objfun_suff_mex.c) */
