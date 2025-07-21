/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Switching_Function.c
 *
 * Code generation for function 'Switching_Function'
 *
 */

/* Include files */
#include "Switching_Function.h"
#include "HamiltonianFirstDerivatives.h"
#include "S_fun.h"
#include "S_p_fun.h"
#include "S_x_fun.h"
#include "objfun_S_time_data.h"
#include "objfun_S_time_emxutil.h"
#include "objfun_S_time_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo gd_emlrtRTEI = {
    2,                                                              /* lineNo */
    22,                                                             /* colNo */
    "Switching_Function",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pName */
};

/* Function Definitions */
void Switching_Function(const emlrtStack *sp, const emxArray_real_T *x,
                        const emxArray_real_T *p, real_T physical_Tmax,
                        real_T physical_c, real_T physical_NSTATE,
                        real_T physical_shoot, real_T physical_EPS, real_T *S,
                        real_T *Sd)
{
  emlrtStack st;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  real_T S_p[5];
  real_T S_x[5];
  real_T b_S_p;
  real_T b_S_x;
  real_T *H_p_data;
  real_T *H_x_data;
  int32_T i;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  Computes switching Function and its derivatives */
  /*  Definition of the Switching function and its derivatives with evaluation
   * of the */
  /*  matlabFunction S_fun, S_x_fun, S_p_fun, S_xx_fun, S_pp_fun, S_xp_fun */
  /*  Input: */
  /*  x: state vector [NSTATEx1] */
  /*  p: costate vector [NSTATEx1] */
  /*  physical: structure of physical variables and functions */
  /*  Output: */
  /*  S: switching function */
  /*  Sd: switching function first derivatives */
  /*  Sdd: switching function second derivatives */
  st.site = &s_emlrtRSI;
  *S = S_fun(&st, x, p, physical_Tmax, physical_c);
  st.site = &rf_emlrtRSI;
  S_x_fun(&st, x, p, physical_Tmax, S_x);
  st.site = &sf_emlrtRSI;
  S_p_fun(&st, x, p, physical_Tmax, physical_c, S_p);
  emxInit_real_T(sp, &H_x, 1, &gd_emlrtRTEI);
  emxInit_real_T(sp, &H_p, 1, &gd_emlrtRTEI);
  st.site = &tf_emlrtRSI;
  HamiltonianFirstDerivatives(&st, x, p, *S, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  b_S_x = 0.0;
  b_S_p = 0.0;
  for (i = 0; i < 5; i++) {
    b_S_x += S_x[i] * H_p_data[i];
    b_S_p += S_p[i] * H_x_data[i];
  }
  emxFree_real_T(sp, &H_p);
  emxFree_real_T(sp, &H_x);
  *Sd = b_S_x - b_S_p;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (Switching_Function.c) */
