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
#include "objfun_suff.h"
#include "objfun_suff_data.h"
#include "objfun_suff_emxutil.h"
#include "objfun_suff_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo vg_emlrtRSI = {
    1451,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo wg_emlrtRSI = {
    1456,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo xg_emlrtRSI = {
    1461,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo yg_emlrtRSI = {
    1467,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ah_emlrtRSI = {
    1473,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo bh_emlrtRSI = {
    1480,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ch_emlrtRSI = {
    1486,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo dh_emlrtRSI = {
    1493,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo eh_emlrtRSI = {
    1501,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo fh_emlrtRSI = {
    1510,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo gh_emlrtRSI = {
    1520,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo hh_emlrtRSI = {
    1531,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ih_emlrtRSI = {
    1543,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo jh_emlrtRSI = {
    1556,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo kh_emlrtRSI = {
    1583,                  /* lineNo */
    "computeMainStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo mh_emlrtRSI = {
    1260,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo nh_emlrtRSI = {
    1273,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo oh_emlrtRSI = {
    1287,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo ph_emlrtRSI = {
    1302,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRSInfo qh_emlrtRSI = {
    1318,                /* lineNo */
    "computeCEStages89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    1451,                 /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    1461,                 /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    1473,                 /* lineNo */
    1,                    /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    1173,                 /* lineNo */
    24,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

/* Function Declarations */
static void h_binary_expand_op(real_T in1[111], const real_T in2[1554],
                               const emxArray_real_T *in3);

/* Function Definitions */
static void h_binary_expand_op(real_T in1[111], const real_T in2[1554],
                               const emxArray_real_T *in3)
{
  const real_T *in3_data;
  int32_T i;
  int32_T stride_0_0;
  in3_data = in3->data;
  stride_0_0 = (in3->size[0] != 1);
  for (i = 0; i < 111; i++) {
    in1[i] = ((((((((0.0057578137681889487 * in2[i] +
                     1.0675934530948108 * in2[i + 111]) +
                    -0.14099636134393978 * in2[i + 222]) +
                   -0.014411715396914925 * in2[i + 333]) +
                  0.030796961251883033 * in2[i + 444]) +
                 -1.1613152578179067 * in2[i + 555]) +
                0.32221113486118586 * in2[i + 666]) +
               -0.12948458791975614 * in2[i + 777]) +
              -0.029477447612619417 * in2[i + 888]) +
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
                       const real_T y[111], real_T h, real_T f[1554],
                       int32_T *nfevals)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *r;
  real_T b_y[111];
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
  st.site = &mh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  for (i = 0; i < 111; i++) {
    b_y[i] = y[i] + h * ((((((((0.014588852784055396 * f[i] +
                                0.0020241978878893325 * f[i + 111]) +
                               0.21780470845697167 * f[i + 222]) +
                              0.12748953408543898 * f[i + 333]) +
                             0.22446177454631319 * f[i + 444]) +
                            0.17872544912599031 * f[i + 555]) +
                           0.075943447580965578 * f[i + 666]) +
                          0.12948458791975614 * f[i + 777]) +
                         0.029477447612619417 * f[i + 888]);
  }
  emxInit_real_T(&d_st, &r, 1, &tc_emlrtRTEI);
  e_st.site = &nb_emlrtRSI;
  objfun_suff_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 111; i++) {
    f[i + 999] = r1[i];
  }
  st.site = &nh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  for (i = 0; i < 111; i++) {
    b_y[i] = y[i] + h * (((((((((0.015601405261088616 * f[i] +
                                 0.26811643933275847 * f[i + 111]) +
                                0.1883053124587791 * f[i + 222]) +
                               0.12491991374610308 * f[i + 333]) +
                              0.2302302127814522 * f[i + 444]) +
                             -0.13603122161327985 * f[i + 555]) +
                            0.074886599713069532 * f[i + 666]) +
                           -0.028128400297956289 * f[i + 777]) +
                          -0.023144557264819496 * f[i + 888]) +
                         0.027345304241113474 * f[i + 999]);
  }
  e_st.site = &nb_emlrtRSI;
  objfun_suff_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 111; i++) {
    f[i + 1110] = r1[i];
  }
  st.site = &oh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  for (i = 0; i < 111; i++) {
    b_y[i] = y[i] + h * ((((((((((0.013111957218440684 * f[i] +
                                  -0.14640242659698269 * f[i + 111]) +
                                 0.2471264389666796 * f[i + 222]) +
                                0.13113752030800324 * f[i + 333]) +
                               0.21705603469825827 * f[i + 444]) +
                              0.286753671376032 * f[i + 555]) +
                             0.023233113391494219 * f[i + 666]) +
                            0.052506772641993958 * f[i + 777]) +
                           0.0028339515860099506 * f[i + 888]) +
                          -0.0085024038519957122 * f[i + 999]) +
                         0.069145370262066491 * f[i + 1110]);
  }
  e_st.site = &nb_emlrtRSI;
  objfun_suff_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 111; i++) {
    f[i + 1221] = r1[i];
  }
  st.site = &ph_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  for (i = 0; i < 111; i++) {
    b_y[i] = y[i] + h * (((((((((((0.013989212133617684 * f[i] +
                                   -0.031574065179505 * f[i + 111]) +
                                  0.22718125132721581 * f[i + 222]) +
                                 0.12894864109967866 * f[i + 333]) +
                                0.2216682589135277 * f[i + 444]) +
                               0.19483682365424806 * f[i + 555]) +
                              0.05740088404417653 * f[i + 666]) +
                             0.090083665426759552 * f[i + 777]) +
                            0.015791532088442122 * f[i + 888]) +
                           -0.018991315059091858 * f[i + 999]) +
                          -0.08830926811918835 * f[i + 1110]) +
                         -0.11502562032988092 * f[i + 1221]);
  }
  e_st.site = &nb_emlrtRSI;
  objfun_suff_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 111; i++) {
    f[i + 1332] = r1[i];
  }
  st.site = &qh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  for (i = 0; i < 111; i++) {
    b_y[i] = y[i] + h * ((((((((((((0.016151472919007624 * f[i] +
                                    0.080986850032429059 * f[i + 111]) +
                                   0.12769162943069304 * f[i + 222]) +
                                  0.12348143593834805 * f[i + 333]) +
                                 0.233985125914011 * f[i + 444]) +
                                -0.065959956833573682 * f[i + 555]) +
                               -0.025652768594064328 * f[i + 666]) +
                              -0.12589734638192471 * f[i + 777]) +
                             -0.043076724903648438 * f[i + 888]) +
                            0.04973042479196705 * f[i + 999]) +
                           0.10004735401793927 * f[i + 1110]) +
                          0.13786588067636232 * f[i + 1221]) +
                         -0.12235337700754625 * f[i + 1332]);
  }
  e_st.site = &nb_emlrtRSI;
  objfun_suff_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y, r);
  r1 = r->data;
  for (i = 0; i < 111; i++) {
    f[i + 1443] = r1[i];
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
                         const real_T y[111], real_T h, real_T f[1554],
                         int32_T *nfevals, real_T fC[111], real_T fE[111])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *f2;
  emxArray_real_T *f4;
  emxArray_real_T *f6;
  real_T b_y[111];
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
  st.site = &vg_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  for (i = 0; i < 111; i++) {
    b_y[i] = y[i] + a * f[i];
  }
  emxInit_real_T(&d_st, &f2, 1, &qc_emlrtRTEI);
  e_st.site = &nb_emlrtRSI;
  objfun_suff_anonFcn2(
      &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
      e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
      g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
      f2);
  f2_data = f2->data;
  st.site = &wg_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if (f2->size[0] == 111) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * (-0.01988527319182291 * f[i] +
                           0.11637263332969652 * f2_data[i]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f2);
    f2_data = f2->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    v_binary_expand_op(
        &e_st, f2, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f);
    f2_data = f2->data;
  }
  st.site = &xg_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  emxInit_real_T(&d_st, &f4, 1, &rc_emlrtRTEI);
  if (f2->size[0] == 111) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * (0.0361827600517026 * f[i] +
                           0.10854828015510781 * f2_data[i]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    u_binary_expand_op(
        &e_st, f4, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f2);
    f4_data = f4->data;
  }
  st.site = &yg_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f2->size[0] == 111) && (f4->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] =
          y[i] +
          h * ((2.2721142642901775 * f[i] + -8.5268864479763984 * f2_data[i]) +
               6.8307721836862214 * f4_data[i]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f2);
    f2_data = f2->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    t_binary_expand_op(
        &e_st, f2, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f4);
    f2_data = f2->data;
  }
  st.site = &ah_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  emxInit_real_T(&d_st, &f6, 1, &sc_emlrtRTEI);
  if ((f4->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * ((0.050943855353893744 * f[i] +
                            0.17558650498090711 * f4_data[i]) +
                           0.00070229612707574678 * f2_data[i]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f6);
    f6_data = f6->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    s_binary_expand_op(
        &e_st, f6, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f4, f2);
    f6_data = f6->data;
  }
  st.site = &bh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f4->size[0] == 111) && (f2->size[0] == 111) && (f6->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * (((0.14247836686832849 * f[i] +
                             -0.35417994346686843 * f4_data[i]) +
                            0.075953154502951009 * f2_data[i]) +
                           0.6765157656337123 * f6_data[i]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f2);
    f2_data = f2->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    r_binary_expand_op(
        &e_st, f2, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f4, f6);
    f2_data = f2->data;
  }
  st.site = &ch_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f6->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * ((0.071111111111111111 * f[i] +
                            0.32799092876058983 * f6_data[i]) +
                           0.24089796012829906 * f2_data[i]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    q_binary_expand_op(
        &e_st, f4, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 111; i++) {
    f[i + 111] = f4_data[i];
  }
  st.site = &dh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f6->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] =
          y[i] + h * (((0.07125 * f[i] + 0.32688424515752457 * f6_data[i]) +
                       0.11561575484247544 * f2_data[i]) +
                      -0.03375 * f[i + 111]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    p_binary_expand_op(
        &e_st, f4, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 111; i++) {
    f[i + 222] = f4_data[i];
  }
  st.site = &eh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f6->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * ((((0.048226773224658105 * f[i] +
                              0.039485599804954 * f6_data[i]) +
                             0.10588511619346581 * f2_data[i]) +
                            -0.021520063204743093 * f[i + 111]) +
                           -0.10453742601833482 * f[i + 222]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    o_binary_expand_op(
        &e_st, f4, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 111; i++) {
    f[i + 333] = f4_data[i];
  }
  st.site = &fh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f6->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * (((((-0.026091134357549235 * f[i] +
                               0.033333333333333333 * f6_data[i]) +
                              -0.1652504006638105 * f2_data[i]) +
                             0.034346641183686168 * f[i + 111]) +
                            0.1595758283215209 * f[i + 222]) +
                           0.21408573218281934 * f[i + 333]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    n_binary_expand_op(
        &e_st, f4, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 111; i++) {
    f[i + 444] = f4_data[i];
  }
  st.site = &gh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f6->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * ((((((-0.036284233962556589 * f[i] +
                                -1.0961675974272087 * f6_data[i]) +
                               0.18260355043213311 * f2_data[i]) +
                              0.070822544441706839 * f[i + 111]) +
                             -0.023136470184824311 * f[i + 222]) +
                            0.27112047263209327 * f[i + 333]) +
                           1.3081337494229808 * f[i + 444]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    m_binary_expand_op(
        &e_st, f4, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 111; i++) {
    f[i + 555] = f4_data[i];
  }
  st.site = &hh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f6->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * (((((((-0.50746350564169751 * f[i] +
                                 -6.6313421986572374 * f6_data[i]) +
                                -0.2527480100908801 * f2_data[i]) +
                               -0.49526123800360955 * f[i + 111]) +
                              0.29325255452538868 * f[i + 222]) +
                             1.440108693768281 * f[i + 333]) +
                            6.2379344986470562 * f[i + 444]) +
                           0.72701920545269871 * f[i + 555]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    l_binary_expand_op(
        &e_st, f4, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 111; i++) {
    f[i + 666] = f4_data[i];
  }
  st.site = &ih_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f6->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * ((((((((0.6130118256955932 * f[i] +
                                  9.0888038916404632 * f6_data[i]) +
                                 -0.40737881562934486 * f2_data[i]) +
                                1.7907333894903747 * f[i + 111]) +
                               0.714927166761755 * f[i + 222]) +
                              -1.438580857841723 * f[i + 333]) +
                             -8.26332931206474 * f[i + 444]) +
                            -1.5375705708088652 * f[i + 555]) +
                           0.34538328275648716 * f[i + 666]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    k_binary_expand_op(
        &e_st, f4, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  for (i = 0; i < 111; i++) {
    f[i + 777] = f4_data[i];
  }
  st.site = &jh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f6->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * (((((((((-1.2116979103438739 * f[i] +
                                   -19.055818715595954 * f6_data[i]) +
                                  1.2630606753898752 * f2_data[i]) +
                                 -6.9139169691784579 * f[i + 111]) +
                                -0.676462266509498 * f[i + 222]) +
                               3.3678604450266079 * f[i + 333]) +
                              18.006751643125909 * f[i + 444]) +
                             6.83882892679428 * f[i + 555]) +
                            -1.0315164519219504 * f[i + 666]) +
                           0.41291062321306227 * f[i + 777]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f4);
    f4_data = f4->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    j_binary_expand_op(
        &e_st, f4, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6, f2);
    f4_data = f4->data;
  }
  *nfevals += 14;
  for (i = 0; i < 111; i++) {
    f[i + 888] = f4_data[i];
    fC[i] = (((((((0.014588852784055396 * f[i] +
                   0.0020241978878893325 * f[i + 111]) +
                  0.21780470845697167 * f[i + 222]) +
                 0.12748953408543898 * f[i + 333]) +
                0.22446177454631319 * f[i + 444]) +
               0.17872544912599031 * f[i + 555]) +
              0.075943447580965578 * f[i + 666]) +
             0.12948458791975614 * f[i + 777]) +
            0.029477447612619417 * f4_data[i];
  }
  emxFree_real_T(sp, &f4);
  st.site = &kh_emlrtRSI;
  b_st.site = &nb_emlrtRSI;
  c_st.site = &pb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  if ((f6->size[0] == 111) && (f2->size[0] == 111)) {
    for (i = 0; i < 111; i++) {
      b_y[i] = y[i] + h * ((((((((2.1573890074940536 * f[i] +
                                  23.807122198095804 * f6_data[i]) +
                                 0.88627792492165558 * f2_data[i]) +
                                13.139130397598764 * f[i + 111]) +
                               -2.6044157092877147 * f[i + 222]) +
                              -5.1938599497838727 * f[i + 333]) +
                             -20.412340711541507 * f[i + 444]) +
                            -12.300856252505723 * f[i + 555]) +
                           1.5215530950085394 * f[i + 666]);
    }
    e_st.site = &nb_emlrtRSI;
    objfun_suff_anonFcn2(
        &e_st, c_df_workspace_ODEFunction_work, d_df_workspace_ODEFunction_work,
        e_df_workspace_ODEFunction_work, f_df_workspace_ODEFunction_work,
        g_df_workspace_ODEFunction_work, h_df_workspace_ODEFunction_work, b_y,
        f2);
    f2_data = f2->data;
  } else {
    e_st.site = &nb_emlrtRSI;
    i_binary_expand_op(
        &e_st, f2, nb_emlrtRSI, c_df_workspace_ODEFunction_work,
        d_df_workspace_ODEFunction_work, e_df_workspace_ODEFunction_work,
        f_df_workspace_ODEFunction_work, g_df_workspace_ODEFunction_work,
        h_df_workspace_ODEFunction_work, y, h, f, f6);
    f2_data = f2->data;
  }
  emxFree_real_T(&d_st, &f6);
  if (f2->size[0] == 111) {
    for (i = 0; i < 111; i++) {
      fE[i] = ((((((((0.0057578137681889487 * f[i] +
                      1.0675934530948108 * f[i + 111]) +
                     -0.14099636134393978 * f[i + 222]) +
                    -0.014411715396914925 * f[i + 333]) +
                   0.030796961251883033 * f[i + 444]) +
                  -1.1613152578179067 * f[i + 555]) +
                 0.32221113486118586 * f[i + 666]) +
                -0.12948458791975614 * f[i + 777]) +
               -0.029477447612619417 * f[i + 888]) +
              0.04932600711506839 * f2_data[i];
    }
  } else {
    h_binary_expand_op(fE, f, f2);
  }
  emxFree_real_T(sp, &f2);
  (*nfevals)++;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

real_T maxScaledError(const real_T fE[111], const real_T y[111],
                      const real_T ynew[111])
{
  real_T mxerr;
  int32_T k;
  mxerr = 0.0;
  for (k = 0; k < 111; k++) {
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
