/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * explicitRungeKutta.c
 *
 * Code generation for function 'explicitRungeKutta'
 *
 */

/* Include files */
#include "explicitRungeKutta.h"
#include "eml_int_forloop_overflow_check.h"
#include "function_handle.h"
#include "norm.h"
#include "objfun_S_NOG.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "objfun_S_fuel.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo uc_emlrtRSI = { 89, /* lineNo */
  "@(t,y)callODEFunctionNSM(ODEFunction,t,y,options,varargin{:})",/* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 11, /* lineNo */
  "callODEFunctionNSM",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\callODEFunctionNSM.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 1451,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 1456,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 1461,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 1467,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 1473,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 1480,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 1486,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 1493,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 1501,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 1510,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 1520,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 1531,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 1543,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 1556,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 1583,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 767,/* lineNo */
  "maxScaledError",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 1260,/* lineNo */
  "computeCEStages89",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 1273,/* lineNo */
  "computeCEStages89",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 1287,/* lineNo */
  "computeCEStages89",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 1302,/* lineNo */
  "computeCEStages89",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 1318,/* lineNo */
  "computeCEStages89",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

static emlrtRTEInfo ih_emlrtRTEI = { 1593,/* lineNo */
  5,                                   /* colNo */
  "explicitRungeKutta",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = { 1451,/* lineNo */
  1,                                   /* colNo */
  "explicitRungeKutta",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pName */
};

static emlrtRTEInfo kh_emlrtRTEI = { 1461,/* lineNo */
  1,                                   /* colNo */
  "explicitRungeKutta",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = { 1473,/* lineNo */
  1,                                   /* colNo */
  "explicitRungeKutta",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = { 1173,/* lineNo */
  24,                                  /* colNo */
  "explicitRungeKutta",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pName */
};

static emlrtRTEInfo sh_emlrtRTEI = { 1593,/* lineNo */
  10,                                  /* colNo */
  "explicitRungeKutta",                /* fName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pName */
};

static emlrtRSInfo ao_emlrtRSI = { 1593,/* lineNo */
  "computeMainStages89",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explicitRungeKutta.m"/* pathName */
};

/* Function Declarations */
static void eb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
  const real_T in2_data[], const int32_T in2_size[2]);

/* Function Definitions */
static void eb_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
  const real_T in2_data[], const int32_T in2_size[2])
{
  emxArray_real_T *r;
  real_T *in1_data;
  real_T *r1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &r, 1, &sh_emlrtRTEI);
  i = r->size[0];
  if (in1->size[0] == 1) {
    r->size[0] = in2_size[0];
  } else {
    r->size[0] = in1->size[0];
  }

  emxEnsureCapacity_real_T(sp, r, i, &sh_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (in2_size[0] != 1);
  stride_1_0 = (in1->size[0] != 1);
  if (in1->size[0] == 1) {
    loop_ub = in2_size[0];
  } else {
    loop_ub = in1->size[0];
  }

  for (i = 0; i < loop_ub; i++) {
    r1[i] = ((((((((0.0057578137681889487 * in2_data[i * stride_0_0] +
                    1.0675934530948108 * in2_data[i * stride_0_0 + in2_size[0]])
                   + -0.14099636134393978 * in2_data[i * stride_0_0 + in2_size[0]
                   * 2]) + -0.014411715396914925 * in2_data[i * stride_0_0 +
                  in2_size[0] * 3]) + 0.030796961251883033 * in2_data[i *
                 stride_0_0 + in2_size[0] * 4]) + -1.1613152578179067 *
                in2_data[i * stride_0_0 + in2_size[0] * 5]) +
               0.32221113486118586 * in2_data[i * stride_0_0 + in2_size[0] * 6])
              + -0.12948458791975614 * in2_data[i * stride_0_0 + in2_size[0] * 7])
             + -0.029477447612619417 * in2_data[i * stride_0_0 + in2_size[0] * 8])
      + 0.04932600711506839 * in1_data[i * stride_1_0];
  }

  i = in1->size[0];
  in1->size[0] = r->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &sh_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = r1[i];
  }

  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void b_computeCEStages89(const emlrtStack *sp, real_T
  c_df_workspace_ODEFunction_work, real_T d_df_workspace_ODEFunction_work,
  real_T e_df_workspace_ODEFunction_work, real_T f_df_workspace_ODEFunction_work,
  real_T g_df_workspace_ODEFunction_work, real_T h_df_workspace_ODEFunction_work,
  const real_T y_data[], int32_T y_size, real_T h, real_T f_data[], const
  int32_T f_size[2], int32_T *nfevals)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T c_y_data;
  emxArray_real_T d_y_data;
  emxArray_real_T e_y_data;
  emxArray_real_T f_y_data;
  emxArray_real_T g_y_data;
  emxArray_real_T *r;
  real_T b_y_data[121];
  real_T *r1;
  int32_T b_y_size;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &uk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &r, 1, &mh_emlrtRTEI);
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * ((((((((0.014588852784055396 * f_data[i] +
        0.0020241978878893325 * f_data[i + f_size[0]]) + 0.21780470845697167 *
        f_data[i + f_size[0] * 2]) + 0.12748953408543898 * f_data[i + f_size[0] *
        3]) + 0.22446177454631319 * f_data[i + f_size[0] * 4]) +
        0.17872544912599031 * f_data[i + f_size[0] * 5]) + 0.075943447580965578 *
        f_data[i + f_size[0] * 6]) + 0.12948458791975614 * f_data[i + f_size[0] *
        7]) + 0.029477447612619417 * f_data[i + f_size[0] * 8]);
    }

    c_y_data.data = &b_y_data[0];
    c_y_data.size = &b_y_size;
    c_y_data.allocatedSize = 121;
    c_y_data.numDimensions = 1;
    c_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, &c_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    tc_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 9] = r1[i];
  }

  st.site = &vk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * (((((((((0.015601405261088616 * f_data[i] +
        0.26811643933275847 * f_data[i + f_size[0]]) + 0.1883053124587791 *
        f_data[i + f_size[0] * 2]) + 0.12491991374610308 * f_data[i + f_size[0] *
        3]) + 0.2302302127814522 * f_data[i + f_size[0] * 4]) +
        -0.13603122161327985 * f_data[i + f_size[0] * 5]) + 0.074886599713069532
        * f_data[i + f_size[0] * 6]) + -0.028128400297956289 * f_data[i +
        f_size[0] * 7]) + -0.023144557264819496 * f_data[i + f_size[0] * 8]) +
        0.027345304241113474 * f_data[i + f_size[0] * 9]);
    }

    d_y_data.data = &b_y_data[0];
    d_y_data.size = &b_y_size;
    d_y_data.allocatedSize = 121;
    d_y_data.numDimensions = 1;
    d_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, &d_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    sc_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 10] = r1[i];
  }

  st.site = &wk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * ((((((((((0.013111957218440684 * f_data[i] +
        -0.14640242659698269 * f_data[i + f_size[0]]) + 0.2471264389666796 *
        f_data[i + f_size[0] * 2]) + 0.13113752030800324 * f_data[i + f_size[0] *
        3]) + 0.21705603469825827 * f_data[i + f_size[0] * 4]) +
        0.286753671376032 * f_data[i + f_size[0] * 5]) + 0.023233113391494219 *
        f_data[i + f_size[0] * 6]) + 0.052506772641993958 * f_data[i + f_size[0]
        * 7]) + 0.0028339515860099506 * f_data[i + f_size[0] * 8]) +
        -0.0085024038519957122 * f_data[i + f_size[0] * 9]) +
        0.069145370262066491 * f_data[i + f_size[0] * 10]);
    }

    e_y_data.data = &b_y_data[0];
    e_y_data.size = &b_y_size;
    e_y_data.allocatedSize = 121;
    e_y_data.numDimensions = 1;
    e_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, &e_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    rc_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 11] = r1[i];
  }

  st.site = &xk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * (((((((((((0.013989212133617684 * f_data[i]
        + -0.031574065179505 * f_data[i + f_size[0]]) + 0.22718125132721581 *
        f_data[i + f_size[0] * 2]) + 0.12894864109967866 * f_data[i + f_size[0] *
        3]) + 0.2216682589135277 * f_data[i + f_size[0] * 4]) +
        0.19483682365424806 * f_data[i + f_size[0] * 5]) + 0.05740088404417653 *
        f_data[i + f_size[0] * 6]) + 0.090083665426759552 * f_data[i + f_size[0]
        * 7]) + 0.015791532088442122 * f_data[i + f_size[0] * 8]) +
        -0.018991315059091858 * f_data[i + f_size[0] * 9]) +
        -0.08830926811918835 * f_data[i + f_size[0] * 10]) +
        -0.11502562032988092 * f_data[i + f_size[0] * 11]);
    }

    f_y_data.data = &b_y_data[0];
    f_y_data.size = &b_y_size;
    f_y_data.allocatedSize = 121;
    f_y_data.numDimensions = 1;
    f_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, &f_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    qc_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 12] = r1[i];
  }

  st.site = &yk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * ((((((((((((0.016151472919007624 * f_data[i]
        + 0.080986850032429059 * f_data[i + f_size[0]]) + 0.12769162943069304 *
        f_data[i + f_size[0] * 2]) + 0.12348143593834805 * f_data[i + f_size[0] *
        3]) + 0.233985125914011 * f_data[i + f_size[0] * 4]) +
        -0.065959956833573682 * f_data[i + f_size[0] * 5]) +
        -0.025652768594064328 * f_data[i + f_size[0] * 6]) +
        -0.12589734638192471 * f_data[i + f_size[0] * 7]) +
        -0.043076724903648438 * f_data[i + f_size[0] * 8]) + 0.04973042479196705
        * f_data[i + f_size[0] * 9]) + 0.10004735401793927 * f_data[i + f_size[0]
        * 10]) + 0.13786588067636232 * f_data[i + f_size[0] * 11]) +
        -0.12235337700754625 * f_data[i + f_size[0] * 12]);
    }

    g_y_data.data = &b_y_data[0];
    g_y_data.size = &b_y_size;
    g_y_data.allocatedSize = 121;
    g_y_data.numDimensions = 1;
    g_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, &g_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    pc_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 13] = r1[i];
  }

  emxFree_real_T(sp, &r);
  *nfevals += 5;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void b_computeMainStages89(const emlrtStack *sp, real_T
  c_df_workspace_ODEFunction_work, real_T d_df_workspace_ODEFunction_work,
  real_T e_df_workspace_ODEFunction_work, real_T f_df_workspace_ODEFunction_work,
  real_T g_df_workspace_ODEFunction_work, real_T h_df_workspace_ODEFunction_work,
  const real_T y_data[], int32_T y_size, real_T h, real_T f_data[], const
  int32_T f_size[2], int32_T *nfevals, real_T fC_data[], int32_T *fC_size,
  emxArray_real_T *fE)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T c_y_data;
  emxArray_real_T *f2;
  emxArray_real_T *f4;
  emxArray_real_T *f6;
  emxArray_real_T *y;
  real_T b_y_data[121];
  real_T a;
  real_T *d_y_data;
  real_T *f2_data;
  real_T *f4_data;
  real_T *f6_data;
  int32_T b_y_size;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  a = h * 0.04;
  st.site = &dk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &f2, 1, &jh_emlrtRTEI);
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + a * f_data[i];
    }

    c_y_data.data = &b_y_data[0];
    c_y_data.size = &b_y_size;
    c_y_data.allocatedSize = 121;
    c_y_data.numDimensions = 1;
    c_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, &c_y_data, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    oc_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, a,
                        f_data, f_size);
    f2_data = f2->data;
  }

  st.site = &ek_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &y, 1, &tg_emlrtRTEI);
  if ((f_size[0] == f2->size[0]) && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &tg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (-0.01988527319182291 * f_data[i] +
        0.11637263332969652 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    nc_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    f2_data = f2->data;
  }

  st.site = &fk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &f4, 1, &kh_emlrtRTEI);
  if ((f_size[0] == f2->size[0]) && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &ug_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (0.0361827600517026 * f_data[i] +
        0.10854828015510781 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    mc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f2);
    f4_data = f4->data;
  }

  st.site = &gk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f4->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f2->size[0]) && (f_size[0] == f4->size[0]) && (y_size == i))
  {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &vg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((2.2721142642901775 * f_data[i] +
        -8.5268864479763984 * f2_data[i]) + 6.8307721836862214 * f4_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    lc_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f4);
    f2_data = f2->data;
  }

  st.site = &hk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &f6, 1, &lh_emlrtRTEI);
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f4->size[0]) && (f_size[0] == f2->size[0]) && (y_size == i))
  {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &wg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((0.050943855353893744 * f_data[i] +
        0.17558650498090711 * f4_data[i]) + 0.00070229612707574678 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f6);
    f6_data = f6->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    kc_binary_expand_op(&e_st, f6, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f4, f2);
    f6_data = f6->data;
  }

  st.site = &ik_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    loop_ub = f2->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (loop_ub == 1) {
    loop_ub = f6->size[0];
  } else if (f_size[0] == 1) {
    loop_ub = f2->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if ((f_size[0] == f4->size[0]) && (f_size[0] == f2->size[0]) && (i == f6->
       size[0]) && (y_size == loop_ub)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &xg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((0.14247836686832849 * f_data[i] +
        -0.35417994346686843 * f4_data[i]) + 0.075953154502951009 * f2_data[i])
        + 0.6765157656337123 * f6_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    jc_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f4, f6);
    f2_data = f2->data;
  }

  st.site = &jk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (y_size == i))
  {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &yg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((0.071111111111111111 * f_data[i] +
        0.32799092876058983 * f6_data[i]) + 0.24089796012829906 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    ic_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0]] = f4_data[i];
  }

  st.site = &kk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &ah_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((0.07125 * f_data[i] + 0.32688424515752457
        * f6_data[i]) + 0.11561575484247544 * f2_data[i]) + -0.03375 * f_data[i
        + f_size[0]]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    hc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 2] = f4_data[i];
  }

  st.site = &lk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &bh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((((0.048226773224658105 * f_data[i] +
        0.039485599804954 * f6_data[i]) + 0.10588511619346581 * f2_data[i]) +
        -0.021520063204743093 * f_data[i + f_size[0]]) + -0.10453742601833482 *
        f_data[i + f_size[0] * 2]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    gc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 3] = f4_data[i];
  }

  st.site = &mk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &ch_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((((-0.026091134357549235 * f_data[i] +
        0.033333333333333333 * f6_data[i]) + -0.1652504006638105 * f2_data[i]) +
        0.034346641183686168 * f_data[i + f_size[0]]) + 0.1595758283215209 *
        f_data[i + f_size[0] * 2]) + 0.21408573218281934 * f_data[i + f_size[0] *
        3]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    fc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 4] = f4_data[i];
  }

  st.site = &nk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &dh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((((((-0.036284233962556589 * f_data[i] +
        -1.0961675974272087 * f6_data[i]) + 0.18260355043213311 * f2_data[i]) +
        0.070822544441706839 * f_data[i + f_size[0]]) + -0.023136470184824311 *
        f_data[i + f_size[0] * 2]) + 0.27112047263209327 * f_data[i + f_size[0] *
        3]) + 1.3081337494229808 * f_data[i + f_size[0] * 4]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    ec_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 5] = f4_data[i];
  }

  st.site = &ok_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &eh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((((((-0.50746350564169751 * f_data[i] +
        -6.6313421986572374 * f6_data[i]) + -0.2527480100908801 * f2_data[i]) +
        -0.49526123800360955 * f_data[i + f_size[0]]) + 0.29325255452538868 *
        f_data[i + f_size[0] * 2]) + 1.440108693768281 * f_data[i + f_size[0] *
        3]) + 6.2379344986470562 * f_data[i + f_size[0] * 4]) +
        0.72701920545269871 * f_data[i + f_size[0] * 5]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    dc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 6] = f4_data[i];
  }

  st.site = &pk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &fh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((((((((0.6130118256955932 * f_data[i] +
        9.0888038916404632 * f6_data[i]) + -0.40737881562934486 * f2_data[i]) +
        1.7907333894903747 * f_data[i + f_size[0]]) + 0.714927166761755 *
        f_data[i + f_size[0] * 2]) + -1.438580857841723 * f_data[i + f_size[0] *
        3]) + -8.26332931206474 * f_data[i + f_size[0] * 4]) +
        -1.5375705708088652 * f_data[i + f_size[0] * 5]) + 0.34538328275648716 *
        f_data[i + f_size[0] * 6]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    cc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 7] = f4_data[i];
  }

  st.site = &qk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &gh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((((((((-1.2116979103438739 * f_data[i] +
        -19.055818715595954 * f6_data[i]) + 1.2630606753898752 * f2_data[i]) +
        -6.9139169691784579 * f_data[i + f_size[0]]) + -0.676462266509498 *
        f_data[i + f_size[0] * 2]) + 3.3678604450266079 * f_data[i + f_size[0] *
        3]) + 18.006751643125909 * f_data[i + f_size[0] * 4]) + 6.83882892679428
        * f_data[i + f_size[0] * 5]) + -1.0315164519219504 * f_data[i + f_size[0]
        * 6]) + 0.41291062321306227 * f_data[i + f_size[0] * 7]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    bc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  emxFree_real_T(&d_st, &y);
  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 8] = f4_data[i];
  }

  emxFree_real_T(sp, &f4);
  *nfevals += 14;
  *fC_size = f_size[0];
  loop_ub = f_size[0];
  for (i = 0; i < loop_ub; i++) {
    fC_data[i] = (((((((0.014588852784055396 * f_data[i] + 0.0020241978878893325
                        * f_data[i + f_size[0]]) + 0.21780470845697167 *
                       f_data[i + f_size[0] * 2]) + 0.12748953408543898 *
                      f_data[i + f_size[0] * 3]) + 0.22446177454631319 *
                     f_data[i + f_size[0] * 4]) + 0.17872544912599031 * f_data[i
                    + f_size[0] * 5]) + 0.075943447580965578 * f_data[i +
                   f_size[0] * 6]) + 0.12948458791975614 * f_data[i + f_size[0] *
                  7]) + 0.029477447612619417 * f_data[i + f_size[0] * 8];
  }

  st.site = &rk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = f6->size[0];
    f6->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, f6, i, &hh_emlrtRTEI);
    f6_data = f6->data;
    for (i = 0; i < y_size; i++) {
      f6_data[i] = y_data[i] + h * ((((((((2.1573890074940536 * f_data[i] +
        23.807122198095804 * f6_data[i]) + 0.88627792492165558 * f2_data[i]) +
        13.139130397598764 * f_data[i + f_size[0]]) + -2.6044157092877147 *
        f_data[i + f_size[0] * 2]) + -5.1938599497838727 * f_data[i + f_size[0] *
        3]) + -20.412340711541507 * f_data[i + f_size[0] * 4]) +
        -12.300856252505723 * f_data[i + f_size[0] * 5]) + 1.5215530950085394 *
        f_data[i + f_size[0] * 6]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn4(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work, f6, fE);
  } else {
    e_st.site = &tc_emlrtRSI;
    ac_binary_expand_op(&e_st, fE, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
  }

  emxFree_real_T(&d_st, &f6);
  emxFree_real_T(&d_st, &f2);
  if (f_size[0] == fE->size[0]) {
    i = fE->size[0];
    fE->size[0] = f_size[0];
    emxEnsureCapacity_real_T(sp, fE, i, &ih_emlrtRTEI);
    f2_data = fE->data;
    loop_ub = f_size[0];
    for (i = 0; i < loop_ub; i++) {
      f2_data[i] = ((((((((0.0057578137681889487 * f_data[i] +
                           1.0675934530948108 * f_data[i + f_size[0]]) +
                          -0.14099636134393978 * f_data[i + f_size[0] * 2]) +
                         -0.014411715396914925 * f_data[i + f_size[0] * 3]) +
                        0.030796961251883033 * f_data[i + f_size[0] * 4]) +
                       -1.1613152578179067 * f_data[i + f_size[0] * 5]) +
                      0.32221113486118586 * f_data[i + f_size[0] * 6]) +
                     -0.12948458791975614 * f_data[i + f_size[0] * 7]) +
                    -0.029477447612619417 * f_data[i + f_size[0] * 8]) +
        0.04932600711506839 * f2_data[i];
    }
  } else {
    st.site = &ao_emlrtRSI;
    eb_binary_expand_op(&st, fE, f_data, f_size);
  }

  (*nfevals)++;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void b_explicitRungeKutta_anonFcn1(const emlrtStack *sp, real_T
  c_ODEFunction_workspace_physica, real_T d_ODEFunction_workspace_physica,
  real_T e_ODEFunction_workspace_physica, real_T f_ODEFunction_workspace_physica,
  real_T g_ODEFunction_workspace_physica, real_T ODEFunction_workspace_SIGN_nom,
  const emxArray_real_T *y, emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &vc_emlrtRSI;
  c_st.site = &tc_emlrtRSI;
  objfun_S_NOG_anonFcn4(&c_st, c_ODEFunction_workspace_physica,
                        d_ODEFunction_workspace_physica,
                        e_ODEFunction_workspace_physica,
                        f_ODEFunction_workspace_physica,
                        g_ODEFunction_workspace_physica,
                        ODEFunction_workspace_SIGN_nom, y, varargout_1);
}

real_T b_maxScaledError(const emlrtStack *sp, const emxArray_real_T *fE, const
  real_T y_data[])
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *fE_data;
  real_T mxerr;
  int32_T k;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  fE_data = fE->data;
  n = fE->size[0];
  mxerr = 0.0;
  st.site = &sk_emlrtRSI;
  if (fE->size[0] > 2147483646) {
    b_st.site = &ne_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 0; k < n; k++) {
    real_T d1;
    real_T num;
    num = muDoubleScalarAbs(fE_data[k]);
    d1 = muDoubleScalarAbs(y_data[k]);
    if (d1 > 1.0) {
      num /= d1;
    }

    if ((num > mxerr) || muDoubleScalarIsNaN(num)) {
      mxerr = num;
    }
  }

  return mxerr;
}

void c_computeCEStages89(const emlrtStack *sp, real_T
  c_df_workspace_ODEFunction_work, real_T d_df_workspace_ODEFunction_work,
  real_T e_df_workspace_ODEFunction_work, real_T f_df_workspace_ODEFunction_work,
  real_T g_df_workspace_ODEFunction_work, real_T h_df_workspace_ODEFunction_work,
  const real_T y_data[], int32_T y_size, real_T h, real_T f_data[], const
  int32_T f_size[2], int32_T *nfevals)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T c_y_data;
  emxArray_real_T d_y_data;
  emxArray_real_T e_y_data;
  emxArray_real_T f_y_data;
  emxArray_real_T g_y_data;
  emxArray_real_T *r;
  real_T b_y_data[243];
  real_T *r1;
  int32_T b_y_size;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &uk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &r, 1, &mh_emlrtRTEI);
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * ((((((((0.014588852784055396 * f_data[i] +
        0.0020241978878893325 * f_data[i + f_size[0]]) + 0.21780470845697167 *
        f_data[i + f_size[0] * 2]) + 0.12748953408543898 * f_data[i + f_size[0] *
        3]) + 0.22446177454631319 * f_data[i + f_size[0] * 4]) +
        0.17872544912599031 * f_data[i + f_size[0] * 5]) + 0.075943447580965578 *
        f_data[i + f_size[0] * 6]) + 0.12948458791975614 * f_data[i + f_size[0] *
        7]) + 0.029477447612619417 * f_data[i + f_size[0] * 8]);
    }

    c_y_data.data = &b_y_data[0];
    c_y_data.size = &b_y_size;
    c_y_data.allocatedSize = 243;
    c_y_data.numDimensions = 1;
    c_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, &c_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    od_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 9] = r1[i];
  }

  st.site = &vk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * (((((((((0.015601405261088616 * f_data[i] +
        0.26811643933275847 * f_data[i + f_size[0]]) + 0.1883053124587791 *
        f_data[i + f_size[0] * 2]) + 0.12491991374610308 * f_data[i + f_size[0] *
        3]) + 0.2302302127814522 * f_data[i + f_size[0] * 4]) +
        -0.13603122161327985 * f_data[i + f_size[0] * 5]) + 0.074886599713069532
        * f_data[i + f_size[0] * 6]) + -0.028128400297956289 * f_data[i +
        f_size[0] * 7]) + -0.023144557264819496 * f_data[i + f_size[0] * 8]) +
        0.027345304241113474 * f_data[i + f_size[0] * 9]);
    }

    d_y_data.data = &b_y_data[0];
    d_y_data.size = &b_y_size;
    d_y_data.allocatedSize = 243;
    d_y_data.numDimensions = 1;
    d_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, &d_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    nd_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 10] = r1[i];
  }

  st.site = &wk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * ((((((((((0.013111957218440684 * f_data[i] +
        -0.14640242659698269 * f_data[i + f_size[0]]) + 0.2471264389666796 *
        f_data[i + f_size[0] * 2]) + 0.13113752030800324 * f_data[i + f_size[0] *
        3]) + 0.21705603469825827 * f_data[i + f_size[0] * 4]) +
        0.286753671376032 * f_data[i + f_size[0] * 5]) + 0.023233113391494219 *
        f_data[i + f_size[0] * 6]) + 0.052506772641993958 * f_data[i + f_size[0]
        * 7]) + 0.0028339515860099506 * f_data[i + f_size[0] * 8]) +
        -0.0085024038519957122 * f_data[i + f_size[0] * 9]) +
        0.069145370262066491 * f_data[i + f_size[0] * 10]);
    }

    e_y_data.data = &b_y_data[0];
    e_y_data.size = &b_y_size;
    e_y_data.allocatedSize = 243;
    e_y_data.numDimensions = 1;
    e_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, &e_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    md_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 11] = r1[i];
  }

  st.site = &xk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * (((((((((((0.013989212133617684 * f_data[i]
        + -0.031574065179505 * f_data[i + f_size[0]]) + 0.22718125132721581 *
        f_data[i + f_size[0] * 2]) + 0.12894864109967866 * f_data[i + f_size[0] *
        3]) + 0.2216682589135277 * f_data[i + f_size[0] * 4]) +
        0.19483682365424806 * f_data[i + f_size[0] * 5]) + 0.05740088404417653 *
        f_data[i + f_size[0] * 6]) + 0.090083665426759552 * f_data[i + f_size[0]
        * 7]) + 0.015791532088442122 * f_data[i + f_size[0] * 8]) +
        -0.018991315059091858 * f_data[i + f_size[0] * 9]) +
        -0.08830926811918835 * f_data[i + f_size[0] * 10]) +
        -0.11502562032988092 * f_data[i + f_size[0] * 11]);
    }

    f_y_data.data = &b_y_data[0];
    f_y_data.size = &b_y_size;
    f_y_data.allocatedSize = 243;
    f_y_data.numDimensions = 1;
    f_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, &f_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    ld_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 12] = r1[i];
  }

  st.site = &yk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * ((((((((((((0.016151472919007624 * f_data[i]
        + 0.080986850032429059 * f_data[i + f_size[0]]) + 0.12769162943069304 *
        f_data[i + f_size[0] * 2]) + 0.12348143593834805 * f_data[i + f_size[0] *
        3]) + 0.233985125914011 * f_data[i + f_size[0] * 4]) +
        -0.065959956833573682 * f_data[i + f_size[0] * 5]) +
        -0.025652768594064328 * f_data[i + f_size[0] * 6]) +
        -0.12589734638192471 * f_data[i + f_size[0] * 7]) +
        -0.043076724903648438 * f_data[i + f_size[0] * 8]) + 0.04973042479196705
        * f_data[i + f_size[0] * 9]) + 0.10004735401793927 * f_data[i + f_size[0]
        * 10]) + 0.13786588067636232 * f_data[i + f_size[0] * 11]) +
        -0.12235337700754625 * f_data[i + f_size[0] * 12]);
    }

    g_y_data.data = &b_y_data[0];
    g_y_data.size = &b_y_size;
    g_y_data.allocatedSize = 243;
    g_y_data.numDimensions = 1;
    g_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, &g_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    kd_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 13] = r1[i];
  }

  emxFree_real_T(sp, &r);
  *nfevals += 5;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void c_computeMainStages89(const emlrtStack *sp, real_T
  c_df_workspace_ODEFunction_work, real_T d_df_workspace_ODEFunction_work,
  real_T e_df_workspace_ODEFunction_work, real_T f_df_workspace_ODEFunction_work,
  real_T g_df_workspace_ODEFunction_work, real_T h_df_workspace_ODEFunction_work,
  const real_T y_data[], int32_T y_size, real_T h, real_T f_data[], const
  int32_T f_size[2], int32_T *nfevals, real_T fC_data[], int32_T *fC_size,
  emxArray_real_T *fE)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T c_y_data;
  emxArray_real_T *f2;
  emxArray_real_T *f4;
  emxArray_real_T *f6;
  emxArray_real_T *y;
  real_T b_y_data[243];
  real_T a;
  real_T *d_y_data;
  real_T *f2_data;
  real_T *f4_data;
  real_T *f6_data;
  int32_T b_y_size;
  int32_T i;
  int32_T i1;
  int32_T i10;
  int32_T i11;
  int32_T i12;
  int32_T i13;
  int32_T i14;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  a = h * 0.04;
  st.site = &dk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &f2, 1, &jh_emlrtRTEI);
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + a * f_data[i];
    }

    c_y_data.data = &b_y_data[0];
    c_y_data.size = &b_y_size;
    c_y_data.allocatedSize = 243;
    c_y_data.numDimensions = 1;
    c_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, &c_y_data, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    jd_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, a,
                        f_data, f_size);
    f2_data = f2->data;
  }

  st.site = &ek_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &y, 1, &tg_emlrtRTEI);
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f2->size[0]) && (y_size == i)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &tg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (-0.01988527319182291 * f_data[i] +
        0.11637263332969652 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    id_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    f2_data = f2->data;
  }

  st.site = &fk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &f4, 1, &kh_emlrtRTEI);
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f2->size[0]) && (y_size == i)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &ug_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (0.0361827600517026 * f_data[i] +
        0.10854828015510781 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    hd_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f2);
    f4_data = f4->data;
  }

  st.site = &gk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f2->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f4->size[0];
  } else if (f_size[0] == 1) {
    i1 = f2->size[0];
  } else {
    i1 = f_size[0];
  }

  if ((f_size[0] == f2->size[0]) && (i == f4->size[0]) && (y_size == i1)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &vg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((2.2721142642901775 * f_data[i] +
        -8.5268864479763984 * f2_data[i]) + 6.8307721836862214 * f4_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    gd_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f4);
    f2_data = f2->data;
  }

  st.site = &hk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &f6, 1, &lh_emlrtRTEI);
  if (f_size[0] == 1) {
    i = f4->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f4->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f4->size[0];
  } else {
    i1 = f_size[0];
  }

  if ((f_size[0] == f4->size[0]) && (i == f2->size[0]) && (y_size == i1)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &wg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((0.050943855353893744 * f_data[i] +
        0.17558650498090711 * f4_data[i]) + 0.00070229612707574678 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f6);
    f6_data = f6->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    fd_binary_expand_op(&e_st, f6, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f4, f2);
    f6_data = f6->data;
  }

  st.site = &ik_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f4->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f4->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f4->size[0];
  } else {
    i1 = f_size[0];
  }

  if (f_size[0] == 1) {
    i2 = f4->size[0];
  } else {
    i2 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f4->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f4->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f6->size[0];
  } else if (i3 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f4->size[0];
  } else {
    i2 = f_size[0];
  }

  if ((f_size[0] == f4->size[0]) && (i == f2->size[0]) && (i1 == f6->size[0]) &&
      (y_size == i2)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &xg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((0.14247836686832849 * f_data[i] +
        -0.35417994346686843 * f4_data[i]) + 0.075953154502951009 * f2_data[i])
        + 0.6765157656337123 * f6_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    ed_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f4, f6);
    f2_data = f2->data;
  }

  st.site = &jk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f6->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (i == f2->size[0]) && (y_size == i1)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &yg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((0.071111111111111111 * f_data[i] +
        0.32799092876058983 * f6_data[i]) + 0.24089796012829906 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    dd_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0]] = f4_data[i];
  }

  st.site = &kk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f6->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f_size[0];
  } else if (i3 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (i == f2->size[0]) && (i1 == f_size[0]) &&
      (y_size == i2)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &ah_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((0.07125 * f_data[i] + 0.32688424515752457
        * f6_data[i]) + 0.11561575484247544 * f2_data[i]) + -0.03375 * f_data[i
        + f_size[0]]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    cd_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 2] = f4_data[i];
  }

  st.site = &lk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f6->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f_size[0];
  } else if (i3 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f_size[0];
  } else if (i5 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (i == f2->size[0]) && (i1 == f_size[0]) &&
      (i2 == f_size[0]) && (y_size == i3)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &bh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((((0.048226773224658105 * f_data[i] +
        0.039485599804954 * f6_data[i]) + 0.10588511619346581 * f2_data[i]) +
        -0.021520063204743093 * f_data[i + f_size[0]]) + -0.10453742601833482 *
        f_data[i + f_size[0] * 2]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    bd_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 3] = f4_data[i];
  }

  st.site = &mk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f6->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f_size[0];
  } else if (i3 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f_size[0];
  } else if (i5 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f_size[0];
  } else if (i7 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (i == f2->size[0]) && (i1 == f_size[0]) &&
      (i2 == f_size[0]) && (i3 == f_size[0]) && (y_size == i4)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &ch_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((((-0.026091134357549235 * f_data[i] +
        0.033333333333333333 * f6_data[i]) + -0.1652504006638105 * f2_data[i]) +
        0.034346641183686168 * f_data[i + f_size[0]]) + 0.1595758283215209 *
        f_data[i + f_size[0] * 2]) + 0.21408573218281934 * f_data[i + f_size[0] *
        3]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    ad_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 4] = f4_data[i];
  }

  st.site = &nk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f6->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f_size[0];
  } else if (i3 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f_size[0];
  } else if (i5 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f_size[0];
  } else if (i7 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f_size[0];
  } else if (i9 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (i == f2->size[0]) && (i1 == f_size[0]) &&
      (i2 == f_size[0]) && (i3 == f_size[0]) && (i4 == f_size[0]) && (y_size ==
       i5)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &dh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((((((-0.036284233962556589 * f_data[i] +
        -1.0961675974272087 * f6_data[i]) + 0.18260355043213311 * f2_data[i]) +
        0.070822544441706839 * f_data[i + f_size[0]]) + -0.023136470184824311 *
        f_data[i + f_size[0] * 2]) + 0.27112047263209327 * f_data[i + f_size[0] *
        3]) + 1.3081337494229808 * f_data[i + f_size[0] * 4]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    yc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 5] = f4_data[i];
  }

  st.site = &ok_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f6->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f_size[0];
  } else if (i3 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f_size[0];
  } else if (i5 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f_size[0];
  } else if (i7 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f_size[0];
  } else if (i9 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f_size[0];
  } else if (i10 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f_size[0];
  } else if (i10 == 1) {
    i6 = f_size[0];
  } else if (i11 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (i == f2->size[0]) && (i1 == f_size[0]) &&
      (i2 == f_size[0]) && (i3 == f_size[0]) && (i4 == f_size[0]) && (i5 ==
       f_size[0]) && (y_size == i6)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &eh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((((((-0.50746350564169751 * f_data[i] +
        -6.6313421986572374 * f6_data[i]) + -0.2527480100908801 * f2_data[i]) +
        -0.49526123800360955 * f_data[i + f_size[0]]) + 0.29325255452538868 *
        f_data[i + f_size[0] * 2]) + 1.440108693768281 * f_data[i + f_size[0] *
        3]) + 6.2379344986470562 * f_data[i + f_size[0] * 4]) +
        0.72701920545269871 * f_data[i + f_size[0] * 5]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    xc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 6] = f4_data[i];
  }

  st.site = &pk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f6->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f_size[0];
  } else if (i3 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f_size[0];
  } else if (i5 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f_size[0];
  } else if (i7 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f_size[0];
  } else if (i9 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f_size[0];
  } else if (i10 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f_size[0];
  } else if (i10 == 1) {
    i6 = f_size[0];
  } else if (i11 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f_size[0];
  } else if (i11 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f_size[0];
  } else if (i11 == 1) {
    i7 = f_size[0];
  } else if (i12 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f_size[0];
  } else if (i12 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f_size[0];
  } else if (i12 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f_size[0];
  } else if (i11 == 1) {
    i7 = f_size[0];
  } else if (i12 == 1) {
    i7 = f_size[0];
  } else if (i13 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (i == f2->size[0]) && (i1 == f_size[0]) &&
      (i2 == f_size[0]) && (i3 == f_size[0]) && (i4 == f_size[0]) && (i5 ==
       f_size[0]) && (i6 == f_size[0]) && (y_size == i7)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &fh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((((((((0.6130118256955932 * f_data[i] +
        9.0888038916404632 * f6_data[i]) + -0.40737881562934486 * f2_data[i]) +
        1.7907333894903747 * f_data[i + f_size[0]]) + 0.714927166761755 *
        f_data[i + f_size[0] * 2]) + -1.438580857841723 * f_data[i + f_size[0] *
        3]) + -8.26332931206474 * f_data[i + f_size[0] * 4]) +
        -1.5375705708088652 * f_data[i + f_size[0] * 5]) + 0.34538328275648716 *
        f_data[i + f_size[0] * 6]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    wc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 7] = f4_data[i];
  }

  st.site = &qk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f6->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f_size[0];
  } else if (i3 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f_size[0];
  } else if (i5 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f_size[0];
  } else if (i7 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f_size[0];
  } else if (i9 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f_size[0];
  } else if (i10 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f_size[0];
  } else if (i10 == 1) {
    i6 = f_size[0];
  } else if (i11 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f_size[0];
  } else if (i11 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f_size[0];
  } else if (i11 == 1) {
    i7 = f_size[0];
  } else if (i12 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f_size[0];
  } else if (i12 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f_size[0];
  } else if (i12 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f_size[0];
  } else if (i11 == 1) {
    i7 = f_size[0];
  } else if (i12 == 1) {
    i7 = f_size[0];
  } else if (i13 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f_size[0];
  } else if (i12 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f_size[0];
  } else if (i12 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f_size[0];
  } else if (i12 == 1) {
    i8 = f_size[0];
  } else if (i13 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f_size[0];
  } else if (i12 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f_size[0];
  } else if (i12 == 1) {
    i9 = f_size[0];
  } else if (i13 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f_size[0];
  } else if (i13 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f_size[0];
  } else if (i13 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f_size[0];
  } else if (i13 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i13 == 1) {
    i13 = f2->size[0];
  } else if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (f_size[0] == 1) {
    loop_ub = f6->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f_size[0];
  } else if (i12 == 1) {
    i8 = f_size[0];
  } else if (i13 == 1) {
    i8 = f_size[0];
  } else if (loop_ub == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f_size[0];
  } else if (i12 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f_size[0];
  } else if (i12 == 1) {
    i9 = f_size[0];
  } else if (i13 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f_size[0];
  } else if (i13 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f_size[0];
  } else if (i13 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f_size[0];
  } else if (i13 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i13 == 1) {
    i13 = f2->size[0];
  } else if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (f_size[0] == 1) {
    loop_ub = f6->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f_size[0];
  } else if (i12 == 1) {
    i9 = f_size[0];
  } else if (i13 == 1) {
    i9 = f_size[0];
  } else if (loop_ub == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f_size[0];
  } else if (i13 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f_size[0];
  } else if (i13 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f_size[0];
  } else if (i13 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i13 == 1) {
    i13 = f2->size[0];
  } else if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (f_size[0] == 1) {
    loop_ub = f6->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f_size[0];
  } else if (i13 == 1) {
    i10 = f_size[0];
  } else if (loop_ub == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f_size[0];
  } else if (i13 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f_size[0];
  } else if (i13 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i13 == 1) {
    i13 = f2->size[0];
  } else if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (f_size[0] == 1) {
    loop_ub = f6->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f_size[0];
  } else if (i13 == 1) {
    i11 = f_size[0];
  } else if (loop_ub == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f_size[0];
  } else if (i13 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i13 == 1) {
    i13 = f2->size[0];
  } else if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (f_size[0] == 1) {
    loop_ub = f6->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (i12 == 1) {
    i12 = f_size[0];
  } else if (i13 == 1) {
    i12 = f_size[0];
  } else if (loop_ub == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i13 == 1) {
    i13 = f2->size[0];
  } else if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (f_size[0] == 1) {
    loop_ub = f6->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (i13 == 1) {
    i13 = f_size[0];
  } else if (loop_ub == 1) {
    i13 = f2->size[0];
  } else if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (f_size[0] == 1) {
    loop_ub = f6->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (loop_ub == 1) {
    loop_ub = f2->size[0];
  } else if (f_size[0] == 1) {
    loop_ub = f6->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (f_size[0] == 1) {
    i14 = f6->size[0];
  } else {
    i14 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f_size[0];
  } else if (i12 == 1) {
    i8 = f_size[0];
  } else if (i13 == 1) {
    i8 = f_size[0];
  } else if (loop_ub == 1) {
    i8 = f_size[0];
  } else if (i14 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (i == f2->size[0]) && (i1 == f_size[0]) &&
      (i2 == f_size[0]) && (i3 == f_size[0]) && (i4 == f_size[0]) && (i5 ==
       f_size[0]) && (i6 == f_size[0]) && (i7 == f_size[0]) && (y_size == i8)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &gh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((((((((-1.2116979103438739 * f_data[i] +
        -19.055818715595954 * f6_data[i]) + 1.2630606753898752 * f2_data[i]) +
        -6.9139169691784579 * f_data[i + f_size[0]]) + -0.676462266509498 *
        f_data[i + f_size[0] * 2]) + 3.3678604450266079 * f_data[i + f_size[0] *
        3]) + 18.006751643125909 * f_data[i + f_size[0] * 4]) + 6.83882892679428
        * f_data[i + f_size[0] * 5]) + -1.0315164519219504 * f_data[i + f_size[0]
        * 6]) + 0.41291062321306227 * f_data[i + f_size[0] * 7]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    vc_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  emxFree_real_T(&d_st, &y);
  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 8] = f4_data[i];
  }

  emxFree_real_T(sp, &f4);
  *nfevals += 14;
  *fC_size = f_size[0];
  loop_ub = f_size[0];
  for (i = 0; i < loop_ub; i++) {
    fC_data[i] = (((((((0.014588852784055396 * f_data[i] + 0.0020241978878893325
                        * f_data[i + f_size[0]]) + 0.21780470845697167 *
                       f_data[i + f_size[0] * 2]) + 0.12748953408543898 *
                      f_data[i + f_size[0] * 3]) + 0.22446177454631319 *
                     f_data[i + f_size[0] * 4]) + 0.17872544912599031 * f_data[i
                    + f_size[0] * 5]) + 0.075943447580965578 * f_data[i +
                   f_size[0] * 6]) + 0.12948458791975614 * f_data[i + f_size[0] *
                  7]) + 0.029477447612619417 * f_data[i + f_size[0] * 8];
  }

  st.site = &rk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f6->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (i1 == 1) {
    i1 = f2->size[0];
  } else if (f_size[0] == 1) {
    i1 = f6->size[0];
  } else {
    i1 = f_size[0];
  }

  if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i2 == 1) {
    i2 = f_size[0];
  } else if (i3 == 1) {
    i2 = f2->size[0];
  } else if (f_size[0] == 1) {
    i2 = f6->size[0];
  } else {
    i2 = f_size[0];
  }

  if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i3 == 1) {
    i3 = f_size[0];
  } else if (i4 == 1) {
    i3 = f_size[0];
  } else if (i5 == 1) {
    i3 = f2->size[0];
  } else if (f_size[0] == 1) {
    i3 = f6->size[0];
  } else {
    i3 = f_size[0];
  }

  if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i4 == 1) {
    i4 = f_size[0];
  } else if (i5 == 1) {
    i4 = f_size[0];
  } else if (i6 == 1) {
    i4 = f_size[0];
  } else if (i7 == 1) {
    i4 = f2->size[0];
  } else if (f_size[0] == 1) {
    i4 = f6->size[0];
  } else {
    i4 = f_size[0];
  }

  if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i5 == 1) {
    i5 = f_size[0];
  } else if (i6 == 1) {
    i5 = f_size[0];
  } else if (i7 == 1) {
    i5 = f_size[0];
  } else if (i8 == 1) {
    i5 = f_size[0];
  } else if (i9 == 1) {
    i5 = f2->size[0];
  } else if (f_size[0] == 1) {
    i5 = f6->size[0];
  } else {
    i5 = f_size[0];
  }

  if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f_size[0];
  } else if (i10 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i6 == 1) {
    i6 = f_size[0];
  } else if (i7 == 1) {
    i6 = f_size[0];
  } else if (i8 == 1) {
    i6 = f_size[0];
  } else if (i9 == 1) {
    i6 = f_size[0];
  } else if (i10 == 1) {
    i6 = f_size[0];
  } else if (i11 == 1) {
    i6 = f2->size[0];
  } else if (f_size[0] == 1) {
    i6 = f6->size[0];
  } else {
    i6 = f_size[0];
  }

  if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f_size[0];
  } else if (i11 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f_size[0];
  } else if (i11 == 1) {
    i7 = f_size[0];
  } else if (i12 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i8 == 1) {
    i8 = f_size[0];
  } else if (i9 == 1) {
    i8 = f_size[0];
  } else if (i10 == 1) {
    i8 = f_size[0];
  } else if (i11 == 1) {
    i8 = f_size[0];
  } else if (i12 == 1) {
    i8 = f2->size[0];
  } else if (f_size[0] == 1) {
    i8 = f6->size[0];
  } else {
    i8 = f_size[0];
  }

  if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i9 == 1) {
    i9 = f_size[0];
  } else if (i10 == 1) {
    i9 = f_size[0];
  } else if (i11 == 1) {
    i9 = f_size[0];
  } else if (i12 == 1) {
    i9 = f2->size[0];
  } else if (f_size[0] == 1) {
    i9 = f6->size[0];
  } else {
    i9 = f_size[0];
  }

  if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i10 == 1) {
    i10 = f_size[0];
  } else if (i11 == 1) {
    i10 = f_size[0];
  } else if (i12 == 1) {
    i10 = f2->size[0];
  } else if (f_size[0] == 1) {
    i10 = f6->size[0];
  } else {
    i10 = f_size[0];
  }

  if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i11 == 1) {
    i11 = f_size[0];
  } else if (i12 == 1) {
    i11 = f2->size[0];
  } else if (f_size[0] == 1) {
    i11 = f6->size[0];
  } else {
    i11 = f_size[0];
  }

  if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (i12 == 1) {
    i12 = f2->size[0];
  } else if (f_size[0] == 1) {
    i12 = f6->size[0];
  } else {
    i12 = f_size[0];
  }

  if (f_size[0] == 1) {
    i13 = f6->size[0];
  } else {
    i13 = f_size[0];
  }

  if (i7 == 1) {
    i7 = f_size[0];
  } else if (i8 == 1) {
    i7 = f_size[0];
  } else if (i9 == 1) {
    i7 = f_size[0];
  } else if (i10 == 1) {
    i7 = f_size[0];
  } else if (i11 == 1) {
    i7 = f_size[0];
  } else if (i12 == 1) {
    i7 = f_size[0];
  } else if (i13 == 1) {
    i7 = f2->size[0];
  } else if (f_size[0] == 1) {
    i7 = f6->size[0];
  } else {
    i7 = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (i == f2->size[0]) && (i1 == f_size[0]) &&
      (i2 == f_size[0]) && (i3 == f_size[0]) && (i4 == f_size[0]) && (i5 ==
       f_size[0]) && (i6 == f_size[0]) && (y_size == i7)) {
    i = f6->size[0];
    f6->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, f6, i, &hh_emlrtRTEI);
    f6_data = f6->data;
    for (i = 0; i < y_size; i++) {
      f6_data[i] = y_data[i] + h * ((((((((2.1573890074940536 * f_data[i] +
        23.807122198095804 * f6_data[i]) + 0.88627792492165558 * f2_data[i]) +
        13.139130397598764 * f_data[i + f_size[0]]) + -2.6044157092877147 *
        f_data[i + f_size[0] * 2]) + -5.1938599497838727 * f_data[i + f_size[0] *
        3]) + -20.412340711541507 * f_data[i + f_size[0] * 4]) +
        -12.300856252505723 * f_data[i + f_size[0] * 5]) + 1.5215530950085394 *
        f_data[i + f_size[0] * 6]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_fuel_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
      d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
      f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
      h_df_workspace_ODEFunction_work, f6, fE);
  } else {
    e_st.site = &tc_emlrtRSI;
    uc_binary_expand_op(&e_st, fE, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
  }

  emxFree_real_T(&d_st, &f6);
  emxFree_real_T(&d_st, &f2);
  if (f_size[0] == fE->size[0]) {
    i = fE->size[0];
    fE->size[0] = f_size[0];
    emxEnsureCapacity_real_T(sp, fE, i, &ih_emlrtRTEI);
    f2_data = fE->data;
    loop_ub = f_size[0];
    for (i = 0; i < loop_ub; i++) {
      f2_data[i] = ((((((((0.0057578137681889487 * f_data[i] +
                           1.0675934530948108 * f_data[i + f_size[0]]) +
                          -0.14099636134393978 * f_data[i + f_size[0] * 2]) +
                         -0.014411715396914925 * f_data[i + f_size[0] * 3]) +
                        0.030796961251883033 * f_data[i + f_size[0] * 4]) +
                       -1.1613152578179067 * f_data[i + f_size[0] * 5]) +
                      0.32221113486118586 * f_data[i + f_size[0] * 6]) +
                     -0.12948458791975614 * f_data[i + f_size[0] * 7]) +
                    -0.029477447612619417 * f_data[i + f_size[0] * 8]) +
        0.04932600711506839 * f2_data[i];
    }
  } else {
    st.site = &ao_emlrtRSI;
    eb_binary_expand_op(&st, fE, f_data, f_size);
  }

  (*nfevals)++;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void c_explicitRungeKutta_anonFcn1(const emlrtStack *sp, real_T
  c_ODEFunction_workspace_physica, real_T d_ODEFunction_workspace_physica,
  real_T e_ODEFunction_workspace_physica, real_T f_ODEFunction_workspace_physica,
  real_T g_ODEFunction_workspace_physica, real_T ODEFunction_workspace_SIGN,
  const emxArray_real_T *y, emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &vc_emlrtRSI;
  c_st.site = &tc_emlrtRSI;
  objfun_S_fuel_anonFcn2(&c_st, c_ODEFunction_workspace_physica,
    d_ODEFunction_workspace_physica, e_ODEFunction_workspace_physica,
    f_ODEFunction_workspace_physica, g_ODEFunction_workspace_physica,
    ODEFunction_workspace_SIGN, y, varargout_1);
}

void computeCEStages89(const emlrtStack *sp, real_T
  c_df_workspace_ODEFunction_work, real_T d_df_workspace_ODEFunction_work,
  real_T e_df_workspace_ODEFunction_work, real_T f_df_workspace_ODEFunction_work,
  real_T g_df_workspace_ODEFunction_work, real_T h_df_workspace_ODEFunction_work,
  const real_T i_df_workspace_ODEFunction_work[20], const real_T y_data[],
  int32_T y_size, real_T h, real_T f_data[], const int32_T f_size[2], int32_T
  *nfevals)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T c_y_data;
  emxArray_real_T d_y_data;
  emxArray_real_T e_y_data;
  emxArray_real_T f_y_data;
  emxArray_real_T g_y_data;
  emxArray_real_T *r;
  real_T b_y_data[121];
  real_T *r1;
  int32_T b_y_size;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &uk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &r, 1, &mh_emlrtRTEI);
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * ((((((((0.014588852784055396 * f_data[i] +
        0.0020241978878893325 * f_data[i + f_size[0]]) + 0.21780470845697167 *
        f_data[i + f_size[0] * 2]) + 0.12748953408543898 * f_data[i + f_size[0] *
        3]) + 0.22446177454631319 * f_data[i + f_size[0] * 4]) +
        0.17872544912599031 * f_data[i + f_size[0] * 5]) + 0.075943447580965578 *
        f_data[i + f_size[0] * 6]) + 0.12948458791975614 * f_data[i + f_size[0] *
        7]) + 0.029477447612619417 * f_data[i + f_size[0] * 8]);
    }

    c_y_data.data = &b_y_data[0];
    c_y_data.size = &b_y_size;
    c_y_data.allocatedSize = 121;
    c_y_data.numDimensions = 1;
    c_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, &c_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    yb_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 9] = r1[i];
  }

  st.site = &vk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * (((((((((0.015601405261088616 * f_data[i] +
        0.26811643933275847 * f_data[i + f_size[0]]) + 0.1883053124587791 *
        f_data[i + f_size[0] * 2]) + 0.12491991374610308 * f_data[i + f_size[0] *
        3]) + 0.2302302127814522 * f_data[i + f_size[0] * 4]) +
        -0.13603122161327985 * f_data[i + f_size[0] * 5]) + 0.074886599713069532
        * f_data[i + f_size[0] * 6]) + -0.028128400297956289 * f_data[i +
        f_size[0] * 7]) + -0.023144557264819496 * f_data[i + f_size[0] * 8]) +
        0.027345304241113474 * f_data[i + f_size[0] * 9]);
    }

    d_y_data.data = &b_y_data[0];
    d_y_data.size = &b_y_size;
    d_y_data.allocatedSize = 121;
    d_y_data.numDimensions = 1;
    d_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, &d_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    xb_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 10] = r1[i];
  }

  st.site = &wk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * ((((((((((0.013111957218440684 * f_data[i] +
        -0.14640242659698269 * f_data[i + f_size[0]]) + 0.2471264389666796 *
        f_data[i + f_size[0] * 2]) + 0.13113752030800324 * f_data[i + f_size[0] *
        3]) + 0.21705603469825827 * f_data[i + f_size[0] * 4]) +
        0.286753671376032 * f_data[i + f_size[0] * 5]) + 0.023233113391494219 *
        f_data[i + f_size[0] * 6]) + 0.052506772641993958 * f_data[i + f_size[0]
        * 7]) + 0.0028339515860099506 * f_data[i + f_size[0] * 8]) +
        -0.0085024038519957122 * f_data[i + f_size[0] * 9]) +
        0.069145370262066491 * f_data[i + f_size[0] * 10]);
    }

    e_y_data.data = &b_y_data[0];
    e_y_data.size = &b_y_size;
    e_y_data.allocatedSize = 121;
    e_y_data.numDimensions = 1;
    e_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, &e_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    wb_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 11] = r1[i];
  }

  st.site = &xk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * (((((((((((0.013989212133617684 * f_data[i]
        + -0.031574065179505 * f_data[i + f_size[0]]) + 0.22718125132721581 *
        f_data[i + f_size[0] * 2]) + 0.12894864109967866 * f_data[i + f_size[0] *
        3]) + 0.2216682589135277 * f_data[i + f_size[0] * 4]) +
        0.19483682365424806 * f_data[i + f_size[0] * 5]) + 0.05740088404417653 *
        f_data[i + f_size[0] * 6]) + 0.090083665426759552 * f_data[i + f_size[0]
        * 7]) + 0.015791532088442122 * f_data[i + f_size[0] * 8]) +
        -0.018991315059091858 * f_data[i + f_size[0] * 9]) +
        -0.08830926811918835 * f_data[i + f_size[0] * 10]) +
        -0.11502562032988092 * f_data[i + f_size[0] * 11]);
    }

    f_y_data.data = &b_y_data[0];
    f_y_data.size = &b_y_size;
    f_y_data.allocatedSize = 121;
    f_y_data.numDimensions = 1;
    f_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, &f_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    vb_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 12] = r1[i];
  }

  st.site = &yk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + h * ((((((((((((0.016151472919007624 * f_data[i]
        + 0.080986850032429059 * f_data[i + f_size[0]]) + 0.12769162943069304 *
        f_data[i + f_size[0] * 2]) + 0.12348143593834805 * f_data[i + f_size[0] *
        3]) + 0.233985125914011 * f_data[i + f_size[0] * 4]) +
        -0.065959956833573682 * f_data[i + f_size[0] * 5]) +
        -0.025652768594064328 * f_data[i + f_size[0] * 6]) +
        -0.12589734638192471 * f_data[i + f_size[0] * 7]) +
        -0.043076724903648438 * f_data[i + f_size[0] * 8]) + 0.04973042479196705
        * f_data[i + f_size[0] * 9]) + 0.10004735401793927 * f_data[i + f_size[0]
        * 10]) + 0.13786588067636232 * f_data[i + f_size[0] * 11]) +
        -0.12235337700754625 * f_data[i + f_size[0] * 12]);
    }

    g_y_data.data = &b_y_data[0];
    g_y_data.size = &b_y_size;
    g_y_data.allocatedSize = 121;
    g_y_data.numDimensions = 1;
    g_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, &g_y_data, r);
    r1 = r->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    ub_binary_expand_op(&e_st, r, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    r1 = r->data;
  }

  loop_ub = r->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 13] = r1[i];
  }

  emxFree_real_T(sp, &r);
  *nfevals += 5;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void computeMainStages89(const emlrtStack *sp, real_T
  c_df_workspace_ODEFunction_work, real_T d_df_workspace_ODEFunction_work,
  real_T e_df_workspace_ODEFunction_work, real_T f_df_workspace_ODEFunction_work,
  real_T g_df_workspace_ODEFunction_work, real_T h_df_workspace_ODEFunction_work,
  const real_T i_df_workspace_ODEFunction_work[20], const real_T y_data[],
  int32_T y_size, real_T h, real_T f_data[], const int32_T f_size[2], int32_T
  *nfevals, real_T fC_data[], int32_T *fC_size, emxArray_real_T *fE)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T c_y_data;
  emxArray_real_T *f2;
  emxArray_real_T *f4;
  emxArray_real_T *f6;
  emxArray_real_T *y;
  real_T b_y_data[121];
  real_T a;
  real_T *d_y_data;
  real_T *f2_data;
  real_T *f4_data;
  real_T *f6_data;
  int32_T b_y_size;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  a = h * 0.04;
  st.site = &dk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &f2, 1, &jh_emlrtRTEI);
  if (y_size == f_size[0]) {
    b_y_size = y_size;
    for (i = 0; i < y_size; i++) {
      b_y_data[i] = y_data[i] + a * f_data[i];
    }

    c_y_data.data = &b_y_data[0];
    c_y_data.size = &b_y_size;
    c_y_data.allocatedSize = 121;
    c_y_data.numDimensions = 1;
    c_y_data.canFreeData = false;
    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, &c_y_data, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    tb_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, a,
                        f_data, f_size);
    f2_data = f2->data;
  }

  st.site = &ek_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &y, 1, &tg_emlrtRTEI);
  if ((f_size[0] == f2->size[0]) && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &tg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (-0.01988527319182291 * f_data[i] +
        0.11637263332969652 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    sb_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size);
    f2_data = f2->data;
  }

  st.site = &fk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &f4, 1, &kh_emlrtRTEI);
  if ((f_size[0] == f2->size[0]) && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &ug_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (0.0361827600517026 * f_data[i] +
        0.10854828015510781 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    rb_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f2);
    f4_data = f4->data;
  }

  st.site = &gk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f4->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f2->size[0]) && (f_size[0] == f4->size[0]) && (y_size == i))
  {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &vg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((2.2721142642901775 * f_data[i] +
        -8.5268864479763984 * f2_data[i]) + 6.8307721836862214 * f4_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    qb_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f4);
    f2_data = f2->data;
  }

  st.site = &hk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  emxInit_real_T(&d_st, &f6, 1, &lh_emlrtRTEI);
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f4->size[0]) && (f_size[0] == f2->size[0]) && (y_size == i))
  {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &wg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((0.050943855353893744 * f_data[i] +
        0.17558650498090711 * f4_data[i]) + 0.00070229612707574678 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f6);
    f6_data = f6->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    pb_binary_expand_op(&e_st, f6, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f4, f2);
    f6_data = f6->data;
  }

  st.site = &ik_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if (f_size[0] == 1) {
    loop_ub = f2->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if (loop_ub == 1) {
    loop_ub = f6->size[0];
  } else if (f_size[0] == 1) {
    loop_ub = f2->size[0];
  } else {
    loop_ub = f_size[0];
  }

  if ((f_size[0] == f4->size[0]) && (f_size[0] == f2->size[0]) && (i == f6->
       size[0]) && (y_size == loop_ub)) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &xg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((0.14247836686832849 * f_data[i] +
        -0.35417994346686843 * f4_data[i]) + 0.075953154502951009 * f2_data[i])
        + 0.6765157656337123 * f6_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f2);
    f2_data = f2->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    ob_binary_expand_op(&e_st, f2, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f4, f6);
    f2_data = f2->data;
  }

  st.site = &jk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (y_size == i))
  {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &yg_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((0.071111111111111111 * f_data[i] +
        0.32799092876058983 * f6_data[i]) + 0.24089796012829906 * f2_data[i]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    nb_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0]] = f4_data[i];
  }

  st.site = &kk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &ah_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((0.07125 * f_data[i] + 0.32688424515752457
        * f6_data[i]) + 0.11561575484247544 * f2_data[i]) + -0.03375 * f_data[i
        + f_size[0]]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    mb_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 2] = f4_data[i];
  }

  st.site = &lk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &bh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((((0.048226773224658105 * f_data[i] +
        0.039485599804954 * f6_data[i]) + 0.10588511619346581 * f2_data[i]) +
        -0.021520063204743093 * f_data[i + f_size[0]]) + -0.10453742601833482 *
        f_data[i + f_size[0] * 2]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    lb_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 3] = f4_data[i];
  }

  st.site = &mk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &ch_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((((-0.026091134357549235 * f_data[i] +
        0.033333333333333333 * f6_data[i]) + -0.1652504006638105 * f2_data[i]) +
        0.034346641183686168 * f_data[i + f_size[0]]) + 0.1595758283215209 *
        f_data[i + f_size[0] * 2]) + 0.21408573218281934 * f_data[i + f_size[0] *
        3]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    kb_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 4] = f4_data[i];
  }

  st.site = &nk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &dh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((((((-0.036284233962556589 * f_data[i] +
        -1.0961675974272087 * f6_data[i]) + 0.18260355043213311 * f2_data[i]) +
        0.070822544441706839 * f_data[i + f_size[0]]) + -0.023136470184824311 *
        f_data[i + f_size[0] * 2]) + 0.27112047263209327 * f_data[i + f_size[0] *
        3]) + 1.3081337494229808 * f_data[i + f_size[0] * 4]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    jb_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 5] = f4_data[i];
  }

  st.site = &ok_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &eh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((((((-0.50746350564169751 * f_data[i] +
        -6.6313421986572374 * f6_data[i]) + -0.2527480100908801 * f2_data[i]) +
        -0.49526123800360955 * f_data[i + f_size[0]]) + 0.29325255452538868 *
        f_data[i + f_size[0] * 2]) + 1.440108693768281 * f_data[i + f_size[0] *
        3]) + 6.2379344986470562 * f_data[i + f_size[0] * 4]) +
        0.72701920545269871 * f_data[i + f_size[0] * 5]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    ib_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 6] = f4_data[i];
  }

  st.site = &pk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &fh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * ((((((((0.6130118256955932 * f_data[i] +
        9.0888038916404632 * f6_data[i]) + -0.40737881562934486 * f2_data[i]) +
        1.7907333894903747 * f_data[i + f_size[0]]) + 0.714927166761755 *
        f_data[i + f_size[0] * 2]) + -1.438580857841723 * f_data[i + f_size[0] *
        3]) + -8.26332931206474 * f_data[i + f_size[0] * 4]) +
        -1.5375705708088652 * f_data[i + f_size[0] * 5]) + 0.34538328275648716 *
        f_data[i + f_size[0] * 6]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    hb_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 7] = f4_data[i];
  }

  st.site = &qk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = y->size[0];
    y->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, y, i, &gh_emlrtRTEI);
    d_y_data = y->data;
    for (i = 0; i < y_size; i++) {
      d_y_data[i] = y_data[i] + h * (((((((((-1.2116979103438739 * f_data[i] +
        -19.055818715595954 * f6_data[i]) + 1.2630606753898752 * f2_data[i]) +
        -6.9139169691784579 * f_data[i + f_size[0]]) + -0.676462266509498 *
        f_data[i + f_size[0] * 2]) + 3.3678604450266079 * f_data[i + f_size[0] *
        3]) + 18.006751643125909 * f_data[i + f_size[0] * 4]) + 6.83882892679428
        * f_data[i + f_size[0] * 5]) + -1.0315164519219504 * f_data[i + f_size[0]
        * 6]) + 0.41291062321306227 * f_data[i + f_size[0] * 7]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, y, f4);
    f4_data = f4->data;
  } else {
    e_st.site = &tc_emlrtRSI;
    gb_binary_expand_op(&e_st, f4, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
    f4_data = f4->data;
  }

  emxFree_real_T(&d_st, &y);
  loop_ub = f4->size[0];
  for (i = 0; i < loop_ub; i++) {
    f_data[i + f_size[0] * 8] = f4_data[i];
  }

  emxFree_real_T(sp, &f4);
  *nfevals += 14;
  *fC_size = f_size[0];
  loop_ub = f_size[0];
  for (i = 0; i < loop_ub; i++) {
    fC_data[i] = (((((((0.014588852784055396 * f_data[i] + 0.0020241978878893325
                        * f_data[i + f_size[0]]) + 0.21780470845697167 *
                       f_data[i + f_size[0] * 2]) + 0.12748953408543898 *
                      f_data[i + f_size[0] * 3]) + 0.22446177454631319 *
                     f_data[i + f_size[0] * 4]) + 0.17872544912599031 * f_data[i
                    + f_size[0] * 5]) + 0.075943447580965578 * f_data[i +
                   f_size[0] * 6]) + 0.12948458791975614 * f_data[i + f_size[0] *
                  7]) + 0.029477447612619417 * f_data[i + f_size[0] * 8];
  }

  st.site = &rk_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  c_st.site = &uc_emlrtRSI;
  d_st.site = &vc_emlrtRSI;
  if (f_size[0] == 1) {
    i = f2->size[0];
  } else {
    i = f_size[0];
  }

  if ((f_size[0] == f6->size[0]) && (f_size[0] == f2->size[0]) && (i == f_size[0])
      && (y_size == f_size[0])) {
    i = f6->size[0];
    f6->size[0] = y_size;
    emxEnsureCapacity_real_T(&d_st, f6, i, &hh_emlrtRTEI);
    f6_data = f6->data;
    for (i = 0; i < y_size; i++) {
      f6_data[i] = y_data[i] + h * ((((((((2.1573890074940536 * f_data[i] +
        23.807122198095804 * f6_data[i]) + 0.88627792492165558 * f2_data[i]) +
        13.139130397598764 * f_data[i + f_size[0]]) + -2.6044157092877147 *
        f_data[i + f_size[0] * 2]) + -5.1938599497838727 * f_data[i + f_size[0] *
        3]) + -20.412340711541507 * f_data[i + f_size[0] * 4]) +
        -12.300856252505723 * f_data[i + f_size[0] * 5]) + 1.5215530950085394 *
        f_data[i + f_size[0] * 6]);
    }

    e_st.site = &tc_emlrtRSI;
    objfun_S_NOG_anonFcn2(&e_st, c_df_workspace_ODEFunction_work,
                          d_df_workspace_ODEFunction_work,
                          e_df_workspace_ODEFunction_work,
                          f_df_workspace_ODEFunction_work,
                          g_df_workspace_ODEFunction_work,
                          h_df_workspace_ODEFunction_work,
                          i_df_workspace_ODEFunction_work, f6, fE);
  } else {
    e_st.site = &tc_emlrtRSI;
    fb_binary_expand_op(&e_st, fE, tc_emlrtRSI, c_df_workspace_ODEFunction_work,
                        d_df_workspace_ODEFunction_work,
                        e_df_workspace_ODEFunction_work,
                        f_df_workspace_ODEFunction_work,
                        g_df_workspace_ODEFunction_work,
                        h_df_workspace_ODEFunction_work,
                        i_df_workspace_ODEFunction_work, y_data, &y_size, h,
                        f_data, f_size, f6, f2);
  }

  emxFree_real_T(&d_st, &f6);
  emxFree_real_T(&d_st, &f2);
  if (f_size[0] == fE->size[0]) {
    i = fE->size[0];
    fE->size[0] = f_size[0];
    emxEnsureCapacity_real_T(sp, fE, i, &ih_emlrtRTEI);
    f2_data = fE->data;
    loop_ub = f_size[0];
    for (i = 0; i < loop_ub; i++) {
      f2_data[i] = ((((((((0.0057578137681889487 * f_data[i] +
                           1.0675934530948108 * f_data[i + f_size[0]]) +
                          -0.14099636134393978 * f_data[i + f_size[0] * 2]) +
                         -0.014411715396914925 * f_data[i + f_size[0] * 3]) +
                        0.030796961251883033 * f_data[i + f_size[0] * 4]) +
                       -1.1613152578179067 * f_data[i + f_size[0] * 5]) +
                      0.32221113486118586 * f_data[i + f_size[0] * 6]) +
                     -0.12948458791975614 * f_data[i + f_size[0] * 7]) +
                    -0.029477447612619417 * f_data[i + f_size[0] * 8]) +
        0.04932600711506839 * f2_data[i];
    }
  } else {
    st.site = &ao_emlrtRSI;
    eb_binary_expand_op(&st, fE, f_data, f_size);
  }

  (*nfevals)++;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void db_binary_expand_op(real_T in1_data[], int32_T *in1_size, const real_T
  in2_data[], const int32_T *in2_size, real_T in3)
{
  real_T b_in2_data[243];
  int32_T b_in2_size;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in1_size == 1) {
    b_in2_size = *in2_size;
  } else {
    b_in2_size = *in1_size;
  }

  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (*in1_size != 1);
  if (*in1_size == 1) {
    *in1_size = *in2_size;
  }

  for (i = 0; i < *in1_size; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] + in3 * in1_data[i * stride_1_0];
  }

  *in1_size = b_in2_size;
  if (b_in2_size - 1 >= 0) {
    memcpy(&in1_data[0], &b_in2_data[0], (uint32_T)b_in2_size * sizeof(real_T));
  }
}

void explicitRungeKutta_anonFcn1(const emlrtStack *sp, real_T
  c_ODEFunction_workspace_physica, real_T d_ODEFunction_workspace_physica,
  real_T e_ODEFunction_workspace_physica, real_T f_ODEFunction_workspace_physica,
  real_T g_ODEFunction_workspace_physica, real_T ODEFunction_workspace_SIGN_nom,
  const real_T ODEFunction_workspace_Pigreco[20], const emxArray_real_T *y,
  emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &vc_emlrtRSI;
  c_st.site = &tc_emlrtRSI;
  objfun_S_NOG_anonFcn2(&c_st, c_ODEFunction_workspace_physica,
                        d_ODEFunction_workspace_physica,
                        e_ODEFunction_workspace_physica,
                        f_ODEFunction_workspace_physica,
                        g_ODEFunction_workspace_physica,
                        ODEFunction_workspace_SIGN_nom,
                        ODEFunction_workspace_Pigreco, y, varargout_1);
}

boolean_T ismonotonic(const real_T x[2])
{
  boolean_T p;
  p = true;
  if (!(x[1] > x[0])) {
    p = (x[0] > x[1]);
  }

  return p;
}

real_T maxScaledError(const emlrtStack *sp, const emxArray_real_T *fE, const
                      real_T y_data[], const real_T ynew_data[])
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *fE_data;
  real_T mxerr;
  int32_T k;
  int32_T n;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  fE_data = fE->data;
  n = fE->size[0];
  mxerr = 0.0;
  st.site = &sk_emlrtRSI;
  if (fE->size[0] > 2147483646) {
    b_st.site = &ne_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 0; k < n; k++) {
    real_T d1;
    real_T d2;
    real_T num;
    num = muDoubleScalarAbs(fE_data[k]);
    d1 = muDoubleScalarAbs(y_data[k]);
    d2 = muDoubleScalarAbs(ynew_data[k]);
    if ((d1 > d2) || muDoubleScalarIsNaN(d2)) {
      if (d1 > 1.0) {
        num /= d1;
      }
    } else if (d2 > 1.0) {
      num /= d2;
    }

    if ((num > mxerr) || muDoubleScalarIsNaN(num)) {
      mxerr = num;
    }
  }

  return mxerr;
}

void o_binary_expand_op(real_T in1_data[], int32_T *in1_size, const real_T
  in2_data[], const int32_T *in2_size, real_T in3)
{
  real_T b_in2_data[121];
  int32_T b_in2_size;
  int32_T i;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in1_size == 1) {
    b_in2_size = *in2_size;
  } else {
    b_in2_size = *in1_size;
  }

  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (*in1_size != 1);
  if (*in1_size == 1) {
    *in1_size = *in2_size;
  }

  for (i = 0; i < *in1_size; i++) {
    b_in2_data[i] = in2_data[i * stride_0_0] + in3 * in1_data[i * stride_1_0];
  }

  *in1_size = b_in2_size;
  if (b_in2_size - 1 >= 0) {
    memcpy(&in1_data[0], &b_in2_data[0], (uint32_T)b_in2_size * sizeof(real_T));
  }
}

real_T p_binary_expand_op(const emlrtStack *sp, const emxArray_real_T *in1,
  const real_T in2_data[], const int32_T *in2_size)
{
  emxArray_real_T *b_in1;
  const real_T *in1_data;
  real_T out1;
  real_T *b_in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 1, &pc_emlrtRTEI);
  i = b_in1->size[0];
  if (*in2_size == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = *in2_size;
  }

  emxEnsureCapacity_real_T(sp, b_in1, i, &pc_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (*in2_size != 1);
  if (*in2_size == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = *in2_size;
  }

  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] / in2_data[i * stride_1_0];
  }

  out1 = d_norm(b_in1) / 0.026619369535913946;
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return out1;
}

/* End of code generation (explicitRungeKutta.c) */
