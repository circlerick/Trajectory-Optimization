/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfunSTM_S_energy_mex.c
 *
 * Code generation for function '_coder_objfunSTM_S_energy_mex'
 *
 */

/* Include files */
#include "_coder_objfunSTM_S_energy_mex.h"
#include "_coder_objfunSTM_S_energy_api.h"
#include "objfunSTM_S_energy_data.h"
#include "objfunSTM_S_energy_initialize.h"
#include "objfunSTM_S_energy_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&objfunSTM_S_energy_atexit);
  /* Module initialization. */
  objfunSTM_S_energy_initialize();
  /* Dispatch the entry-point. */
  objfunSTM_S_energy_mexFunction(nlhs, plhs, nrhs, prhs);
  /* Module termination. */
  objfunSTM_S_energy_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void objfunSTM_S_energy_mexFunction(int32_T nlhs, mxArray *plhs[2],
                                    int32_T nrhs, const mxArray *prhs[4])
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
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        18, "objfunSTM_S_energy");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "objfunSTM_S_energy");
  }
  /* Call the function. */
  objfunSTM_S_energy_api(prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_objfunSTM_S_energy_mex.c) */
