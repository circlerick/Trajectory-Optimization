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
#include "function_handle.h"
#include "objfun_S_fuel.h"
#include "objfun_S_fuel_data.h"
#include "objfun_S_fuel_emxutil.h"
#include "objfun_S_fuel_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo wc_emlrtRSI = {
    1451,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    1456,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    1461,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    1467,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    1473,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    1480,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    1486,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    1493,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = {
    1501,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo gd_emlrtRSI = {
    1510,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo hd_emlrtRSI = {
    1520,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo id_emlrtRSI = {
    1531,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo jd_emlrtRSI = {
    1543,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    1556,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ld_emlrtRSI = {
    1583,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo nd_emlrtRSI = {
    1260,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI = {
    1273,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI = {
    1287,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    1302,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    1318,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    1451,                 /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    1461,                 /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    1473,                 /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    1173,                 /* lineNo */
    24,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

/* Function Declarations */
static void e_binary_expand_op(real_T in1[11], const real_T in2[154],
                               const emxArray_real_T *in3);

/* Function Definitions */
static void e_binary_expand_op(real_T in1[11], const real_T in2[154],
                               const emxArray_real_T *in3)
{
  const real_T *in3_data;
  int32_T i;
  int32_T stride_0_0;
  in3_data = in3->data;
  stride_0_0 = (in3->size[0] != 1);
  for (i = 0; i < 11; i++) {
    in1[i] = ((((((((0.0057578137681889487 * in2[i] +
                     1.0675934530948108 * in2[i + 11]) +
                    -0.14099636134393978 * in2[i + 22]) +
                   -0.014411715396914925 * in2[i + 33]) +
                  0.030796961251883033 * in2[i + 44]) +
                 -1.1613152578179067 * in2[i + 55]) +
                0.32221113486118586 * in2[i + 66]) +
               -0.12948458791975614 * in2[i + 77]) +
              -0.029477447612619417 * in2[i + 88]) +
             0.04932600711506839 * in3_data[i * stride_0_0];
  }
}

void computeCEStages89(const emlrtStack *sp,
                       real_T c_df_workspace_ODEFunction_work,
                       real_T d_df_workspace_ODEFunction_work,
                       real_T e_df_workspace_ODEFunction_work,
                       real_T f_df_workspace_ODEFunction_work,
                       real_T g_df_workspace_ODEFunction_work,
                       real_T h_df_workspace_ODEFunction_work,
                       const real_T y[11], real_T h, real_T f[154],
                       int32_T *nfevals)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *r;
  real_T b_y[11];
  real_T *r1;
  int32_T i;
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
  st.site = &nd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  for (i = 0; i < 11; i++) {
    b_y[i] = y[i] + h * ((((((((0.014588852784055396 * f[i] +
                                0.0020241978878893325 * f[i + 11]) +
                               0.21780470845697167 * f[i + 22]) +
                              0.12748953408543898 * f[i + 33]) +
                             0.22446177454631319 * f[i + 44]) +
                            0.17872544912599031 * f[i + 55]) +
                           0.075943447580965578 * f[i + 66]) +
                          0.12948458791975614 * f[i + 77]) +
                         0.029477447612619417 * f[i + 88]);
  }
  emxInit_real_T(&d_st, &r, 1, &qb_emlrtRTEI);
  e_st.site = &u_emlrtRSI;
  objfun_S_fuel_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 11; i++) {
    f[i + 99] = r1[i];
  }
  st.site = &od_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  for (i = 0; i < 11; i++) {
    b_y[i] = y[i] + h * (((((((((0.015601405261088616 * f[i] +
                                 0.26811643933275847 * f[i + 11]) +
                                0.1883053124587791 * f[i + 22]) +
                               0.12491991374610308 * f[i + 33]) +
                              0.2302302127814522 * f[i + 44]) +
                             -0.13603122161327985 * f[i + 55]) +
                            0.074886599713069532 * f[i + 66]) +
                           -0.028128400297956289 * f[i + 77]) +
                          -0.023144557264819496 * f[i + 88]) +
                         0.027345304241113474 * f[i + 99]);
  }
  e_st.site = &u_emlrtRSI;
  objfun_S_fuel_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 11; i++) {
    f[i + 110] = r1[i];
  }
  st.site = &pd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  for (i = 0; i < 11; i++) {
    b_y[i] = y[i] + h * ((((((((((0.013111957218440684 * f[i] +
                                  -0.14640242659698269 * f[i + 11]) +
                                 0.2471264389666796 * f[i + 22]) +
                                0.13113752030800324 * f[i + 33]) +
                               0.21705603469825827 * f[i + 44]) +
                              0.286753671376032 * f[i + 55]) +
                             0.023233113391494219 * f[i + 66]) +
                            0.052506772641993958 * f[i + 77]) +
                           0.0028339515860099506 * f[i + 88]) +
                          -0.0085024038519957122 * f[i + 99]) +
                         0.069145370262066491 * f[i + 110]);
  }
  e_st.site = &u_emlrtRSI;
  objfun_S_fuel_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 11; i++) {
    f[i + 121] = r1[i];
  }
  st.site = &qd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  for (i = 0; i < 11; i++) {
    b_y[i] = y[i] + h * (((((((((((0.013989212133617684 * f[i] +
                                   -0.031574065179505 * f[i + 11]) +
                                  0.22718125132721581 * f[i + 22]) +
                                 0.12894864109967866 * f[i + 33]) +
                                0.2216682589135277 * f[i + 44]) +
                               0.19483682365424806 * f[i + 55]) +
                              0.05740088404417653 * f[i + 66]) +
                             0.090083665426759552 * f[i + 77]) +
                            0.015791532088442122 * f[i + 88]) +
                           -0.018991315059091858 * f[i + 99]) +
                          -0.08830926811918835 * f[i + 110]) +
                         -0.11502562032988092 * f[i + 121]);
  }
  e_st.site = &u_emlrtRSI;
  objfun_S_fuel_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 11; i++) {
    f[i + 132] = r1[i];
  }
  st.site = &rd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  for (i = 0; i < 11; i++) {
    b_y[i] = y[i] + h * ((((((((((((0.016151472919007624 * f[i] +
                                    0.080986850032429059 * f[i + 11]) +
                                   0.12769162943069304 * f[i + 22]) +
                                  0.12348143593834805 * f[i + 33]) +
                                 0.233985125914011 * f[i + 44]) +
                                -0.065959956833573682 * f[i + 55]) +
                               -0.025652768594064328 * f[i + 66]) +
                              -0.12589734638192471 * f[i + 77]) +
                             -0.043076724903648438 * f[i + 88]) +
                            0.04973042479196705 * f[i + 99]) +
                           0.10004735401793927 * f[i + 110]) +
                          0.13786588067636232 * f[i + 121]) +
                         -0.12235337700754625 * f[i + 132]);
  }
  e_st.site = &u_emlrtRSI;
  objfun_S_fuel_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 11; i++) {
    f[i + 143] = r1[i];
  }
  emxFree_real_T(sp, &r);
  *nfevals += 5;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void computeMainStages89(const emlrtStack *sp,
                         real_T c_df_workspace_ODEFunction_work,
                         real_T d_df_workspace_ODEFunction_work,
                         real_T e_df_workspace_ODEFunction_work,
                         real_T f_df_workspace_ODEFunction_work,
                         real_T g_df_workspace_ODEFunction_work,
                         real_T h_df_workspace_ODEFunction_work,
                         const real_T y[11], real_T h, real_T f[154],
                         int32_T *nfevals, real_T fC[11], real_T fE[11])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *f2;
  emxArray_real_T *f4;
  emxArray_real_T *f6;
  real_T b_y[11];
  real_T a;
  real_T *f2_data;
  real_T *f4_data;
  real_T *f6_data;
  int32_T i;
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
  st.site = &wc_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  for (i = 0; i < 11; i++) {
    b_y[i] = y[i] + a * f[i];
  }
  emxInit_real_T(&d_st, &f2, 1, &nb_emlrtRTEI);
  e_st.site = &u_emlrtRSI;
  objfun_S_fuel_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
      f2);
  f2_data = f2->data;
  st.site = &xc_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if (f2->size[0] == 11) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * (-0.01988527319182291 * f[i] +
                           0.11637263332969652 * f2_data[i]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f2);
    f2_data = f2->data;
  } else {
    e_st.site = &u_emlrtRSI;
    s_binary_expand_op(
        &e_st, f2, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f);
    f2_data = f2->data;
  }
  st.site = &yc_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  emxInit_real_T(&d_st, &f4, 1, &ob_emlrtRTEI);
  if (f2->size[0] == 11) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * (0.0361827600517026 * f[i] +
                           0.10854828015510781 * f2_data[i]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &u_emlrtRSI;
    r_binary_expand_op(
        &e_st, f4, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f2);
    f4_data = f4->data;
  }
  st.site = &ad_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f2->size[0] == 11) && (f4->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] =
          y[i] +
          h * ((2.2721142642901775 * f[i] + -8.5268864479763984 * f2_data[i]) +
               6.8307721836862214 * f4_data[i]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f2);
    f2_data = f2->data;
  } else {
    e_st.site = &u_emlrtRSI;
    q_binary_expand_op(
        &e_st, f2, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f4);
    f2_data = f2->data;
  }
  st.site = &bd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  emxInit_real_T(&d_st, &f6, 1, &pb_emlrtRTEI);
  if ((f4->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * ((0.050943855353893744 * f[i] +
                            0.17558650498090711 * f4_data[i]) +
                           0.00070229612707574678 * f2_data[i]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f6);
    f6_data = f6->data;
  } else {
    e_st.site = &u_emlrtRSI;
    p_binary_expand_op(
        &e_st, f6, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f4, f2);
    f6_data = f6->data;
  }
  st.site = &cd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f4->size[0] == 11) && (f2->size[0] == 11) && (f6->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * (((0.14247836686832849 * f[i] +
                             -0.35417994346686843 * f4_data[i]) +
                            0.075953154502951009 * f2_data[i]) +
                           0.6765157656337123 * f6_data[i]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f2);
    f2_data = f2->data;
  } else {
    e_st.site = &u_emlrtRSI;
    o_binary_expand_op(
        &e_st, f2, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f4, f6);
    f2_data = f2->data;
  }
  st.site = &dd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f6->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * ((0.071111111111111111 * f[i] +
                            0.32799092876058983 * f6_data[i]) +
                           0.24089796012829906 * f2_data[i]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &u_emlrtRSI;
    n_binary_expand_op(
        &e_st, f4, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 11; i++) {
    f[i + 11] = f4_data[i];
  }
  st.site = &ed_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f6->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] =
          y[i] + h * (((0.07125 * f[i] + 0.32688424515752457 * f6_data[i]) +
                       0.11561575484247544 * f2_data[i]) +
                      -0.03375 * f[i + 11]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &u_emlrtRSI;
    m_binary_expand_op(
        &e_st, f4, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 11; i++) {
    f[i + 22] = f4_data[i];
  }
  st.site = &fd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f6->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * ((((0.048226773224658105 * f[i] +
                              0.039485599804954 * f6_data[i]) +
                             0.10588511619346581 * f2_data[i]) +
                            -0.021520063204743093 * f[i + 11]) +
                           -0.10453742601833482 * f[i + 22]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &u_emlrtRSI;
    l_binary_expand_op(
        &e_st, f4, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 11; i++) {
    f[i + 33] = f4_data[i];
  }
  st.site = &gd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f6->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * (((((-0.026091134357549235 * f[i] +
                               0.033333333333333333 * f6_data[i]) +
                              -0.1652504006638105 * f2_data[i]) +
                             0.034346641183686168 * f[i + 11]) +
                            0.1595758283215209 * f[i + 22]) +
                           0.21408573218281934 * f[i + 33]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &u_emlrtRSI;
    k_binary_expand_op(
        &e_st, f4, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 11; i++) {
    f[i + 44] = f4_data[i];
  }
  st.site = &hd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f6->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * ((((((-0.036284233962556589 * f[i] +
                                -1.0961675974272087 * f6_data[i]) +
                               0.18260355043213311 * f2_data[i]) +
                              0.070822544441706839 * f[i + 11]) +
                             -0.023136470184824311 * f[i + 22]) +
                            0.27112047263209327 * f[i + 33]) +
                           1.3081337494229808 * f[i + 44]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &u_emlrtRSI;
    j_binary_expand_op(
        &e_st, f4, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 11; i++) {
    f[i + 55] = f4_data[i];
  }
  st.site = &id_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f6->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * (((((((-0.50746350564169751 * f[i] +
                                 -6.6313421986572374 * f6_data[i]) +
                                -0.2527480100908801 * f2_data[i]) +
                               -0.49526123800360955 * f[i + 11]) +
                              0.29325255452538868 * f[i + 22]) +
                             1.440108693768281 * f[i + 33]) +
                            6.2379344986470562 * f[i + 44]) +
                           0.72701920545269871 * f[i + 55]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &u_emlrtRSI;
    i_binary_expand_op(
        &e_st, f4, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 11; i++) {
    f[i + 66] = f4_data[i];
  }
  st.site = &jd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f6->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * ((((((((0.6130118256955932 * f[i] +
                                  9.0888038916404632 * f6_data[i]) +
                                 -0.40737881562934486 * f2_data[i]) +
                                1.7907333894903747 * f[i + 11]) +
                               0.714927166761755 * f[i + 22]) +
                              -1.438580857841723 * f[i + 33]) +
                             -8.26332931206474 * f[i + 44]) +
                            -1.5375705708088652 * f[i + 55]) +
                           0.34538328275648716 * f[i + 66]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &u_emlrtRSI;
    h_binary_expand_op(
        &e_st, f4, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 11; i++) {
    f[i + 77] = f4_data[i];
  }
  st.site = &kd_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f6->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * (((((((((-1.2116979103438739 * f[i] +
                                   -19.055818715595954 * f6_data[i]) +
                                  1.2630606753898752 * f2_data[i]) +
                                 -6.9139169691784579 * f[i + 11]) +
                                -0.676462266509498 * f[i + 22]) +
                               3.3678604450266079 * f[i + 33]) +
                              18.006751643125909 * f[i + 44]) +
                             6.83882892679428 * f[i + 55]) +
                            -1.0315164519219504 * f[i + 66]) +
                           0.41291062321306227 * f[i + 77]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &u_emlrtRSI;
    g_binary_expand_op(
        &e_st, f4, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  *nfevals += 14;
  for (i = 0; i < 11; i++) {
    f[i + 88] = f4_data[i];
    fC[i] = (((((((0.014588852784055396 * f[i] +
                   0.0020241978878893325 * f[i + 11]) +
                  0.21780470845697167 * f[i + 22]) +
                 0.12748953408543898 * f[i + 33]) +
                0.22446177454631319 * f[i + 44]) +
               0.17872544912599031 * f[i + 55]) +
              0.075943447580965578 * f[i + 66]) +
             0.12948458791975614 * f[i + 77]) +
            0.029477447612619417 * f4_data[i];
  }
  emxFree_real_T(sp, &f4);
  st.site = &ld_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  if ((f6->size[0] == 11) && (f2->size[0] == 11)) {
    for (i = 0; i < 11; i++) {
      b_y[i] = y[i] + h * ((((((((2.1573890074940536 * f[i] +
                                  23.807122198095804 * f6_data[i]) +
                                 0.88627792492165558 * f2_data[i]) +
                                13.139130397598764 * f[i + 11]) +
                               -2.6044157092877147 * f[i + 22]) +
                              -5.1938599497838727 * f[i + 33]) +
                             -20.412340711541507 * f[i + 44]) +
                            -12.300856252505723 * f[i + 55]) +
                           1.5215530950085394 * f[i + 66]);
    }
    e_st.site = &u_emlrtRSI;
    objfun_S_fuel_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f2);
    f2_data = f2->data;
  } else {
    e_st.site = &u_emlrtRSI;
    f_binary_expand_op(
        &e_st, f2, u_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6);
    f2_data = f2->data;
  }
  emxFree_real_T(&d_st, &f6);
  if (f2->size[0] == 11) {
    for (i = 0; i < 11; i++) {
      fE[i] = ((((((((0.0057578137681889487 * f[i] +
                      1.0675934530948108 * f[i + 11]) +
                     -0.14099636134393978 * f[i + 22]) +
                    -0.014411715396914925 * f[i + 33]) +
                   0.030796961251883033 * f[i + 44]) +
                  -1.1613152578179067 * f[i + 55]) +
                 0.32221113486118586 * f[i + 66]) +
                -0.12948458791975614 * f[i + 77]) +
               -0.029477447612619417 * f[i + 88]) +
              0.04932600711506839 * f2_data[i];
    }
  } else {
    e_binary_expand_op(fE, f, f2);
  }
  emxFree_real_T(sp, &f2);
  (*nfevals)++;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

real_T maxScaledError(const real_T fE[11], const real_T y[11],
                      const real_T ynew[11])
{
  real_T mxerr;
  int32_T k;
  mxerr = 0.0;
  for (k = 0; k < 11; k++) {
    real_T d1;
    real_T d2;
    real_T num;
    num = muDoubleScalarAbs(fE[k]);
    d1 = muDoubleScalarAbs(y[k]);
    d2 = muDoubleScalarAbs(ynew[k]);
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

/* End of code generation (explicitRungeKutta.c) */
