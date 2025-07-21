/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfun_S_fuel_mex.c
 *
 * Code generation for function '_coder_objfun_S_fuel_mex'
 *
 */

/* Include files */
#include "_coder_objfun_S_fuel_mex.h"
#include "_coder_objfun_S_fuel_api.h"
#include "objfun_S_fuel_data.h"
#include "objfun_S_fuel_initialize.h"
#include "objfun_S_fuel_terminate.h"
#include "objfun_S_fuel_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  objfun_S_fuelStackData *objfun_S_fuelStackDataGlobal = NULL;
  objfun_S_fuelStackDataGlobal = (objfun_S_fuelStackData *)emlrtMxCalloc(
      (size_t)1, (size_t)1U * sizeof(objfun_S_fuelStackData));
  mexAtExit(&objfun_S_fuel_atexit);
  /* Module initialization. */
  objfun_S_fuel_initialize();
  /* Dispatch the entry-point. */
  objfun_S_fuel_mexFunction(objfun_S_fuelStackDataGlobal, nlhs, plhs, nrhs,
                            prhs);
  /* Module termination. */
  objfun_S_fuel_terminate();
  emlrtMxFree(objfun_S_fuelStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

void objfun_S_fuel_mexFunction(objfun_S_fuelStackData *SD, int32_T nlhs,
                               mxArray *plhs[3], int32_T nrhs,
                               const mxArray *prhs[4])
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
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        13, "objfun_S_fuel");
  }
  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 13,
                        "objfun_S_fuel");
  }
  /* Call the function. */
  objfun_S_fuel_api(SD, prhs, nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

/* End of code generation (_coder_objfun_S_fuel_mex.c) */
