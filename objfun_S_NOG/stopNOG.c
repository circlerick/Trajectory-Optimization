/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * stopNOG.c
 *
 * Code generation for function 'stopNOG'
 *
 */

/* Include files */
#include "stopNOG.h"
#include "S_fun.h"
#include "Switching_Function.h"
#include "assertValidSizeArg.h"
#include "derivatives_NOG_update.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "inv.h"
#include "mtimes.h"
#include "norm.h"
#include "objfun_S_NOG.h"
#include "objfun_S_NOG_data.h"
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo lj_emlrtRSI = {
    11,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo mj_emlrtRSI = {
    12,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo nj_emlrtRSI = {
    13,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo oj_emlrtRSI = {
    14,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo pj_emlrtRSI = {
    15,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo qj_emlrtRSI = {
    16,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo rj_emlrtRSI = {
    17,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo sj_emlrtRSI = {
    18,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo tj_emlrtRSI = {
    19,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo uj_emlrtRSI = {
    21,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo vj_emlrtRSI = {
    22,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo wj_emlrtRSI = {
    28,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtRSInfo xj_emlrtRSI = {
    29,                                                  /* lineNo */
    "stopNOG",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pathName */
};

static emlrtECInfo kc_emlrtECI = {
    1,                                                   /* nDims */
    29,                                                  /* lineNo */
    17,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtBCInfo mi_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    29,                                                   /* lineNo */
    27,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtBCInfo ni_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    29,                                                   /* lineNo */
    25,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtECInfo lc_emlrtECI = {
    1,                                                   /* nDims */
    28,                                                  /* lineNo */
    17,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtBCInfo oi_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    28,                                                   /* lineNo */
    28,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo wd_emlrtDCI = {
    28,                                                   /* lineNo */
    28,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo pi_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    28,                                                   /* lineNo */
    26,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtECInfo mc_emlrtECI = {
    1,                                                   /* nDims */
    21,                                                  /* lineNo */
    13,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtECInfo nc_emlrtECI = {
    2,                                                   /* nDims */
    21,                                                  /* lineNo */
    22,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtECInfo oc_emlrtECI = {
    1,                                                   /* nDims */
    21,                                                  /* lineNo */
    22,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtECInfo pc_emlrtECI = {
    2,                                                   /* nDims */
    21,                                                  /* lineNo */
    29,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtECInfo qc_emlrtECI = {
    1,                                                   /* nDims */
    21,                                                  /* lineNo */
    29,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtECInfo rc_emlrtECI = {
    1,                                                   /* nDims */
    20,                                                  /* lineNo */
    14,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtBCInfo qi_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    18,                                                   /* lineNo */
    35,                                                   /* colNo */
    "phi",                                                /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo xd_emlrtDCI = {
    18,                                                   /* lineNo */
    35,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo ri_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    18,                                                   /* lineNo */
    22,                                                   /* colNo */
    "phi",                                                /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo yd_emlrtDCI = {
    18,                                                   /* lineNo */
    22,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo si_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    17,                                                   /* lineNo */
    35,                                                   /* colNo */
    "phi",                                                /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo ae_emlrtDCI = {
    17,                                                   /* lineNo */
    35,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo ti_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    17,                                                   /* lineNo */
    22,                                                   /* colNo */
    "phi",                                                /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo be_emlrtDCI = {
    17,                                                   /* lineNo */
    22,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo ui_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    16,                                                   /* lineNo */
    33,                                                   /* colNo */
    "phi",                                                /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo ce_emlrtDCI = {
    16,                                                   /* lineNo */
    33,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo vi_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    16,                                                   /* lineNo */
    22,                                                   /* colNo */
    "phi",                                                /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo de_emlrtDCI = {
    16,                                                   /* lineNo */
    22,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo wi_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    15,                                                   /* lineNo */
    24,                                                   /* colNo */
    "phi",                                                /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo ee_emlrtDCI = {
    15,                                                   /* lineNo */
    24,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo xi_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    15,                                                   /* lineNo */
    22,                                                   /* colNo */
    "phi",                                                /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtBCInfo yi_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    13,                                                   /* lineNo */
    26,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo fe_emlrtDCI = {
    13,                                                   /* lineNo */
    26,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo aj_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    13,                                                   /* lineNo */
    15,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo ge_emlrtDCI = {
    13,                                                   /* lineNo */
    15,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo bj_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    12,                                                   /* lineNo */
    24,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo he_emlrtDCI = {
    12,                                                   /* lineNo */
    24,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo cj_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    12,                                                   /* lineNo */
    15,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo ie_emlrtDCI = {
    12,                                                   /* lineNo */
    15,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo dj_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    11,                                                   /* lineNo */
    13,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo je_emlrtDCI = {
    11,                                                   /* lineNo */
    13,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo ej_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    11,                                                   /* lineNo */
    11,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtDCInfo ke_emlrtDCI = {
    14,                                                   /* lineNo */
    13,                                                   /* colNo */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    1                                                     /* checkKind */
};

static emlrtBCInfo fj_emlrtBCI = {
    -1,                                                   /* iFirst */
    -1,                                                   /* iLast */
    14,                                                   /* lineNo */
    13,                                                   /* colNo */
    "s",                                                  /* aName */
    "stopNOG",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m", /* pName */
    0                                                     /* checkKind */
};

static emlrtRTEInfo te_emlrtRTEI = {
    14,                                                  /* lineNo */
    13,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    14,                                                  /* lineNo */
    5,                                                   /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    15,                                                  /* lineNo */
    18,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo we_emlrtRTEI = {
    17,                                                  /* lineNo */
    18,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    19,                                                  /* lineNo */
    10,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    18,                                                  /* lineNo */
    18,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo af_emlrtRTEI = {
    21,                                                  /* lineNo */
    29,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    19,                                                  /* lineNo */
    5,                                                   /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo df_emlrtRTEI = {
    3,                                                   /* lineNo */
    43,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    19,                                                  /* lineNo */
    14,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = {
    21,                                                  /* lineNo */
    28,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    21,                                                  /* lineNo */
    53,                                                  /* colNo */
    "stopNOG",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\stopNOG.m" /* pName */
};

/* Function Declarations */
static void u_binary_expand_op(real_T in1_data[], int32_T *in1_size,
                               const real_T in2_data[], const int32_T *in2_size,
                               const real_T in3_data[], int32_T in4,
                               int32_T in5);

/* Function Definitions */
static void u_binary_expand_op(real_T in1_data[], int32_T *in1_size,
                               const real_T in2_data[], const int32_T *in2_size,
                               const real_T in3_data[], int32_T in4,
                               int32_T in5)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in5 - in4 == 1) {
    *in1_size = *in2_size;
  } else {
    *in1_size = in5 - in4;
  }
  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (in5 - in4 != 1);
  if (in5 - in4 == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = in5 - in4;
  }
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2_data[i * stride_0_0] + in3_data[in4 + i * stride_1_0];
  }
}

real_T stopNOG(const emlrtStack *sp, const real_T s_data[], int32_T s_size)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int8_T *r;
  emxArray_real_T b_deltaX_data;
  emxArray_real_T b_s;
  emxArray_real_T c_deltaX_data;
  emxArray_real_T d_s_data;
  emxArray_real_T *QN;
  emxArray_real_T *a;
  emxArray_real_T *b;
  emxArray_real_T *b_y;
  emxArray_real_T *c_y;
  emxArray_real_T *d_y;
  emxArray_real_T *f_y;
  emxArray_real_T *phi;
  emxArray_real_T *r2;
  emxArray_real_T *s;
  emxArray_real_T *y;
  real_T c_s_data[121];
  real_T deltaX_data[121];
  real_T Pigreco[20];
  real_T e_y[16];
  real_T b_dv[2];
  real_T NSTATE;
  real_T Tmax;
  real_T c;
  real_T d;
  real_T value;
  real_T *QN_data;
  real_T *b_s_data;
  real_T *phi_data;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T iv2[2];
  int32_T iv3[2];
  int32_T iv4[2];
  int32_T iv5[2];
  int32_T iv6[2];
  int32_T iv7[2];
  int32_T b_loop_ub;
  int32_T b_s_size;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T deltaX_size;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int32_T i7;
  int32_T loop_ub;
  int32_T maxdimlen;
  int8_T *r1;
  boolean_T out;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  Stop function used in the real-time NOG algorithm. Stops the integration
   */
  /*  when value is equal to 0 */
  /*  Inputs:  */
  /*  s: state and costate vector at the current ode step */
  memcpy(&Pigreco[0], &boundary.Pigreco[0], 20U * sizeof(real_T));
  NSTATE = physical.NSTATE;
  /*  Extrapolates state, costate, U, V */
  if (physical.NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (s_size < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s_size, &ej_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (physical.NSTATE != (int32_T)muDoubleScalarFloor(physical.NSTATE)) {
      emlrtIntegerCheckR2012b(physical.NSTATE, &je_emlrtDCI, (emlrtConstCTX)sp);
    }
    i = (int32_T)physical.NSTATE;
    if (((int32_T)physical.NSTATE < 1) || ((int32_T)physical.NSTATE > s_size)) {
      emlrtDynamicBoundsCheckR2012b(i, 1, s_size, &dj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = (int32_T)physical.NSTATE;
  }
  iv[0] = 1;
  iv[1] = loop_ub;
  st.site = &lj_emlrtRSI;
  indexShapeCheck(&st, s_size, iv);
  d = 2.0 * physical.NSTATE;
  if (physical.NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    Tmax = physical.NSTATE + 1.0;
    if (physical.NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical.NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(Tmax, &ie_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)(physical.NSTATE + 1.0) < 1) ||
        ((int32_T)(physical.NSTATE + 1.0) > s_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)Tmax, 1, s_size, &cj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)(physical.NSTATE + 1.0) - 1;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &he_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > s_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s_size, &bj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)d;
  }
  iv[0] = 1;
  b_loop_ub = i1 - i;
  iv[1] = b_loop_ub;
  st.site = &mj_emlrtRSI;
  indexShapeCheck(&st, s_size, iv);
  Tmax = 3.0 * physical.NSTATE;
  if (d + 1.0 > Tmax) {
    i2 = 0;
    i3 = 0;
  } else {
    if (d + 1.0 != (int32_T)muDoubleScalarFloor(d + 1.0)) {
      emlrtIntegerCheckR2012b(d + 1.0, &ge_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)(d + 1.0) < 1) || ((int32_T)(d + 1.0) > s_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1, s_size, &aj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i2 = (int32_T)(d + 1.0) - 1;
    if (Tmax != (int32_T)muDoubleScalarFloor(Tmax)) {
      emlrtIntegerCheckR2012b(Tmax, &fe_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)Tmax < 1) || ((int32_T)Tmax > s_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)Tmax, 1, s_size, &yi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i3 = (int32_T)Tmax;
  }
  iv[0] = 1;
  c_loop_ub = i3 - i2;
  iv[1] = c_loop_ub;
  st.site = &nj_emlrtRSI;
  indexShapeCheck(&st, s_size, iv);
  st.site = &oj_emlrtRSI;
  d = 4.0 * physical.NSTATE;
  Tmax = physical.NSTATE * physical.NSTATE;
  c = 4.0 * Tmax;
  emxInit_int8_T(sp, &r, &df_emlrtRTEI);
  i4 = r->size[0] * r->size[1];
  r->size[0] = 1;
  r->size[1] = (int32_T)(c - 1.0) + 1;
  emxEnsureCapacity_int8_T(sp, r, i4, &te_emlrtRTEI);
  r1 = r->data;
  d_loop_ub = (int32_T)(c - 1.0);
  for (i4 = 0; i4 <= d_loop_ub; i4++) {
    real_T d1;
    d1 = d + ((real_T)i4 + 1.0);
    if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
      emlrtIntegerCheckR2012b(d1, &ke_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int8_T)d1 < 1) || ((int8_T)d1 > s_size)) {
      emlrtDynamicBoundsCheckR2012b((int8_T)d1, 1, s_size, &fj_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    r1[i4] = (int8_T)d1;
  }
  st.site = &oj_emlrtRSI;
  indexShapeCheck(&st, s_size, r->size);
  emxInit_real_T(sp, &phi, 1, &ue_emlrtRTEI);
  i4 = phi->size[0];
  phi->size[0] = r->size[1];
  emxEnsureCapacity_real_T(sp, phi, i4, &ue_emlrtRTEI);
  phi_data = phi->data;
  d_loop_ub = r->size[1];
  for (i4 = 0; i4 < d_loop_ub; i4++) {
    phi_data[i4] = s_data[r1[i4] - 1];
  }
  st.site = &pj_emlrtRSI;
  if (Tmax < 1.0) {
    d_loop_ub = 0;
  } else {
    if (r->size[1] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, r->size[1], &xi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (Tmax != (int32_T)muDoubleScalarFloor(Tmax)) {
      emlrtIntegerCheckR2012b(Tmax, &ee_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)Tmax < 1) || ((int32_T)Tmax > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)Tmax, 1, r->size[1], &wi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d_loop_ub = (int32_T)Tmax;
  }
  iv[0] = 1;
  iv[1] = d_loop_ub;
  st.site = &pj_emlrtRSI;
  indexShapeCheck(&st, r->size[1], iv);
  emxInit_real_T(sp, &s, 1, &bf_emlrtRTEI);
  i4 = s->size[0];
  s->size[0] = d_loop_ub;
  emxEnsureCapacity_real_T(sp, s, i4, &ve_emlrtRTEI);
  b_s_data = s->data;
  for (i4 = 0; i4 < d_loop_ub; i4++) {
    b_s_data[i4] = phi_data[i4];
  }
  b_dv[0] = physical.NSTATE;
  b_dv[1] = physical.NSTATE;
  st.site = &pj_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&b_st, b_dv);
  maxdimlen = d_loop_ub;
  if (d_loop_ub < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(d_loop_ub, maxdimlen);
  if ((int32_T)physical.NSTATE > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)physical.NSTATE > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)physical.NSTATE >= 0);
  if ((!out) || ((int32_T)physical.NSTATE < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  i4 = (int32_T)physical.NSTATE * (int32_T)physical.NSTATE;
  if (i4 != d_loop_ub) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  st.site = &qj_emlrtRSI;
  st.site = &qj_emlrtRSI;
  d = 2.0 * Tmax;
  if (Tmax + 1.0 > d) {
    i5 = 0;
    i6 = 0;
  } else {
    if (Tmax + 1.0 != (int32_T)muDoubleScalarFloor(Tmax + 1.0)) {
      emlrtIntegerCheckR2012b(Tmax + 1.0, &de_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)(Tmax + 1.0) < 1) || ((int32_T)(Tmax + 1.0) > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(Tmax + 1.0), 1, r->size[1],
                                    &vi_emlrtBCI, (emlrtConstCTX)sp);
    }
    i5 = (int32_T)(Tmax + 1.0) - 1;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &ce_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, r->size[1], &ui_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i6 = (int32_T)d;
  }
  iv[0] = 1;
  i6 -= i5;
  iv[1] = i6;
  st.site = &qj_emlrtRSI;
  indexShapeCheck(&st, r->size[1], iv);
  st.site = &qj_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&b_st, b_dv);
  maxdimlen = i6;
  if (i6 < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(i6, maxdimlen);
  if ((int32_T)physical.NSTATE > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)physical.NSTATE > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)physical.NSTATE >= 0);
  if ((!out) || ((int32_T)physical.NSTATE < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if (i4 != i6) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  st.site = &rj_emlrtRSI;
  st.site = &rj_emlrtRSI;
  Tmax *= 3.0;
  if (d + 1.0 > Tmax) {
    i6 = 0;
    i7 = 0;
  } else {
    if (d + 1.0 != (int32_T)muDoubleScalarFloor(d + 1.0)) {
      emlrtIntegerCheckR2012b(d + 1.0, &be_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)(d + 1.0) < 1) || ((int32_T)(d + 1.0) > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(d + 1.0), 1, r->size[1],
                                    &ti_emlrtBCI, (emlrtConstCTX)sp);
    }
    i6 = (int32_T)(d + 1.0) - 1;
    if (Tmax != (int32_T)muDoubleScalarFloor(Tmax)) {
      emlrtIntegerCheckR2012b(Tmax, &ae_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)Tmax < 1) || ((int32_T)Tmax > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)Tmax, 1, r->size[1], &si_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i7 = (int32_T)Tmax;
  }
  iv[0] = 1;
  d_loop_ub = i7 - i6;
  iv[1] = d_loop_ub;
  st.site = &rj_emlrtRSI;
  indexShapeCheck(&st, r->size[1], iv);
  emxInit_real_T(sp, &r2, 1, &df_emlrtRTEI);
  i7 = r2->size[0];
  r2->size[0] = d_loop_ub;
  emxEnsureCapacity_real_T(sp, r2, i7, &we_emlrtRTEI);
  b_s_data = r2->data;
  for (i7 = 0; i7 < d_loop_ub; i7++) {
    b_s_data[i7] = phi_data[i6 + i7];
  }
  st.site = &rj_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&b_st, b_dv);
  maxdimlen = d_loop_ub;
  if (d_loop_ub < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(d_loop_ub, maxdimlen);
  if ((int32_T)physical.NSTATE > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)physical.NSTATE > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)physical.NSTATE >= 0);
  if ((!out) || ((int32_T)physical.NSTATE < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if (i4 != d_loop_ub) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  st.site = &sj_emlrtRSI;
  st.site = &sj_emlrtRSI;
  if (Tmax + 1.0 > c) {
    i6 = 0;
    i7 = 0;
  } else {
    if (Tmax + 1.0 != (int32_T)muDoubleScalarFloor(Tmax + 1.0)) {
      emlrtIntegerCheckR2012b(Tmax + 1.0, &yd_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)(Tmax + 1.0) < 1) || ((int32_T)(Tmax + 1.0) > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(Tmax + 1.0), 1, r->size[1],
                                    &ri_emlrtBCI, (emlrtConstCTX)sp);
    }
    i6 = (int32_T)(Tmax + 1.0) - 1;
    if (c != (int32_T)muDoubleScalarFloor(c)) {
      emlrtIntegerCheckR2012b(c, &xd_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)c < 1) || ((int32_T)c > r->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)c, 1, r->size[1], &qi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i7 = (int32_T)c;
  }
  iv[0] = 1;
  d_loop_ub = i7 - i6;
  iv[1] = d_loop_ub;
  st.site = &sj_emlrtRSI;
  indexShapeCheck(&st, r->size[1], iv);
  emxFree_int8_T(sp, &r);
  st.site = &sj_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  assertValidSizeArg(&b_st, b_dv);
  maxdimlen = d_loop_ub;
  if (d_loop_ub < 1) {
    maxdimlen = 1;
  }
  maxdimlen = muIntScalarMax_sint32(d_loop_ub, maxdimlen);
  if ((int32_T)physical.NSTATE > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)physical.NSTATE > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)physical.NSTATE >= 0);
  if ((!out) || ((int32_T)physical.NSTATE < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if (i4 != d_loop_ub) {
    emlrtErrorWithMessageIdR2018a(
        &st, &emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  st.site = &tj_emlrtRSI;
  emxInit_real_T(&st, &a, 2, &xe_emlrtRTEI);
  i4 = a->size[0] * a->size[1];
  a->size[0] = (int32_T)physical.NSTATE;
  a->size[1] = (int32_T)physical.NSTATE;
  emxEnsureCapacity_real_T(&st, a, i4, &xe_emlrtRTEI);
  b_s_data = a->data;
  maxdimlen = (int32_T)physical.NSTATE * (int32_T)physical.NSTATE;
  for (i4 = 0; i4 < maxdimlen; i4++) {
    b_s_data[i4] = -phi_data[i5 + i4];
  }
  b_s = *s;
  iv1[0] = (int32_T)physical.NSTATE;
  iv1[1] = (int32_T)physical.NSTATE;
  b_s.size = &iv1[0];
  b_s.numDimensions = 2;
  emxInit_real_T(&st, &b, 2, &ef_emlrtRTEI);
  b_st.site = &tj_emlrtRSI;
  inv(&b_st, &b_s, b);
  b_st.site = &bf_emlrtRSI;
  dynamic_size_checks(&b_st, a, b, a->size[1], b->size[0]);
  emxInit_real_T(&st, &QN, 2, &cf_emlrtRTEI);
  b_st.site = &af_emlrtRSI;
  mtimes(&b_st, a, b, QN);
  QN_data = QN->data;
  b_s_size = loop_ub;
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_s_data[i4] = -s_data[i4];
  }
  if ((b_s_size != c_loop_ub) && ((b_s_size != 1) && (c_loop_ub != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_s_size, c_loop_ub, &rc_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (b_s_size == c_loop_ub) {
    deltaX_size = b_s_size;
    loop_ub = b_s_size;
    for (i4 = 0; i4 < loop_ub; i4++) {
      deltaX_data[i4] = c_s_data[i4] + s_data[i2 + i4];
    }
  } else {
    u_binary_expand_op(deltaX_data, &deltaX_size, c_s_data, &b_s_size, s_data,
                       i2, i3);
  }
  st.site = &uj_emlrtRSI;
  b_s = *r2;
  iv2[0] = (int32_T)b_dv[0];
  iv2[1] = (int32_T)b_dv[1];
  b_s.size = &iv2[0];
  b_s.numDimensions = 2;
  b_st.site = &bf_emlrtRSI;
  dynamic_size_checks(&b_st, QN, &b_s, QN->size[1], (int32_T)b_dv[0]);
  b_s = *r2;
  iv3[0] = (int32_T)b_dv[0];
  iv3[1] = (int32_T)b_dv[1];
  b_s.size = &iv3[0];
  b_s.numDimensions = 2;
  b_st.site = &af_emlrtRSI;
  mtimes(&b_st, QN, &b_s, a);
  if (((int32_T)b_dv[0] != a->size[0]) &&
      (((int32_T)b_dv[0] != 1) && (a->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b((int32_T)b_dv[0], a->size[0], &qc_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (((int32_T)b_dv[1] != a->size[1]) &&
      (((int32_T)b_dv[1] != 1) && (a->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b((int32_T)b_dv[1], a->size[1], &pc_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  loop_ub = QN->size[0] * QN->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    QN_data[i4] = -QN_data[i4];
  }
  emxInit_real_T(sp, &y, 2, &ff_emlrtRTEI);
  st.site = &uj_emlrtRSI;
  if (((int32_T)b_dv[0] == a->size[0]) && ((int32_T)b_dv[1] == a->size[1])) {
    for (i4 = 0; i4 < d_loop_ub; i4++) {
      phi_data[i4] = phi_data[i6 + i4];
    }
    i4 = phi->size[0];
    phi->size[0] = d_loop_ub;
    emxEnsureCapacity_real_T(&st, phi, i4, &ye_emlrtRTEI);
    phi_data = phi->data;
    loop_ub = (int32_T)b_dv[0] * (int32_T)b_dv[1] - 1;
    i4 = a->size[0] * a->size[1];
    a->size[0] = (int32_T)b_dv[0];
    a->size[1] = (int32_T)b_dv[1];
    emxEnsureCapacity_real_T(&st, a, i4, &af_emlrtRTEI);
    b_s_data = a->data;
    for (i4 = 0; i4 <= loop_ub; i4++) {
      b_s_data[i4] += phi_data[i4];
    }
  } else {
    b_st.site = &uj_emlrtRSI;
    r_binary_expand_op(&b_st, a, phi, i6, i7, b_dv);
  }
  emxFree_real_T(&st, &phi);
  b_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&b_st, a, a->size[1]);
  b_st.site = &af_emlrtRSI;
  b_mtimes(&b_st, a, Pigreco, y);
  emxInit_real_T(sp, &b_y, 2, &gf_emlrtRTEI);
  st.site = &uj_emlrtRSI;
  b_s = *s;
  iv4[0] = (int32_T)b_dv[0];
  iv4[1] = (int32_T)b_dv[1];
  b_s.size = &iv4[0];
  b_s.numDimensions = 2;
  b_st.site = &uj_emlrtRSI;
  inv(&b_st, &b_s, b);
  b_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&b_st, b, b->size[0]);
  b_st.site = &af_emlrtRSI;
  c_mtimes(&b_st, Pigreco, b, b_y);
  emxInit_real_T(sp, &c_y, 2, &gf_emlrtRTEI);
  st.site = &uj_emlrtRSI;
  b_s = *r2;
  iv5[0] = (int32_T)b_dv[0];
  iv5[1] = (int32_T)b_dv[1];
  b_s.size = &iv5[0];
  b_s.numDimensions = 2;
  b_st.site = &bf_emlrtRSI;
  c_dynamic_size_checks(&b_st, &b_s, b_y->size[1], (int32_T)b_dv[0]);
  b_s = *r2;
  iv6[0] = (int32_T)b_dv[0];
  iv6[1] = (int32_T)b_dv[1];
  b_s.size = &iv6[0];
  b_s.numDimensions = 2;
  b_st.site = &af_emlrtRSI;
  d_mtimes(&b_st, b_y, &b_s, c_y);
  b_s_data = c_y->data;
  emxFree_real_T(&st, &b_y);
  emxFree_real_T(&st, &r2);
  st.site = &uj_emlrtRSI;
  b_st.site = &bf_emlrtRSI;
  if (c_y->size[1] != 5) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                  "MATLAB:innerdim", 0);
  }
  emxInit_real_T(sp, &d_y, 2, &ff_emlrtRTEI);
  st.site = &uj_emlrtRSI;
  for (i4 = 0; i4 < 4; i4++) {
    for (i5 = 0; i5 < 4; i5++) {
      d = 0.0;
      for (i6 = 0; i6 < 5; i6++) {
        d += b_s_data[i4 + (i6 << 2)] * Pigreco[i6 + 5 * i5];
      }
      e_y[i4 + (i5 << 2)] = d;
    }
  }
  real_T b_b[16];
  emxFree_real_T(&st, &c_y);
  b_st.site = &uj_emlrtRSI;
  b_inv(&b_st, e_y, b_b);
  b_st.site = &af_emlrtRSI;
  e_mtimes(&b_st, y, b_b, d_y);
  emxFree_real_T(&st, &y);
  emxInit_real_T(sp, &f_y, 2, &ff_emlrtRTEI);
  st.site = &uj_emlrtRSI;
  b_st.site = &af_emlrtRSI;
  f_mtimes(&b_st, d_y, Pigreco, f_y);
  emxFree_real_T(&st, &d_y);
  st.site = &uj_emlrtRSI;
  b_s = *s;
  iv7[0] = (int32_T)b_dv[0];
  iv7[1] = (int32_T)b_dv[1];
  b_s.size = &iv7[0];
  b_s.numDimensions = 2;
  b_st.site = &uj_emlrtRSI;
  inv(&b_st, &b_s, b);
  b_st.site = &bf_emlrtRSI;
  b_dynamic_size_checks(&b_st, b, b->size[0]);
  b_st.site = &af_emlrtRSI;
  g_mtimes(&b_st, f_y, b, a);
  b_s_data = a->data;
  emxFree_real_T(&st, &f_y);
  emxFree_real_T(&st, &b);
  if ((QN->size[0] != a->size[0]) &&
      ((QN->size[0] != 1) && (a->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(QN->size[0], a->size[0], &oc_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((QN->size[1] != a->size[1]) &&
      ((QN->size[1] != 1) && (a->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(QN->size[1], a->size[1], &nc_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  st.site = &uj_emlrtRSI;
  if ((QN->size[0] == a->size[0]) && (QN->size[1] == a->size[1])) {
    loop_ub = QN->size[0] * QN->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      QN_data[i4] += b_s_data[i4];
    }
  } else {
    b_st.site = &uj_emlrtRSI;
    plus(&b_st, QN, a);
  }
  emxFree_real_T(&st, &a);
  b_deltaX_data.data = &deltaX_data[0];
  b_deltaX_data.size = &deltaX_size;
  b_deltaX_data.allocatedSize = 121;
  b_deltaX_data.numDimensions = 1;
  b_deltaX_data.canFreeData = false;
  if (b_s_size == 1) {
    i4 = i3 - i2;
  } else {
    i4 = b_s_size;
  }
  b_st.site = &bf_emlrtRSI;
  d_dynamic_size_checks(&b_st, QN, &b_deltaX_data, QN->size[1], i4);
  c_deltaX_data.data = &deltaX_data[0];
  c_deltaX_data.size = &deltaX_size;
  c_deltaX_data.allocatedSize = 121;
  c_deltaX_data.numDimensions = 1;
  c_deltaX_data.canFreeData = false;
  b_st.site = &af_emlrtRSI;
  h_mtimes(&b_st, QN, &c_deltaX_data, s);
  emxFree_real_T(&st, &QN);
  if ((b_loop_ub != s->size[0]) && ((b_loop_ub != 1) && (s->size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(b_loop_ub, s->size[0], &mc_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  st.site = &vj_emlrtRSI;
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
  Tmax = physical.Tmax;
  c = physical.c;
  if (b_loop_ub == s->size[0]) {
    b_s_size = c_loop_ub;
    for (i1 = 0; i1 < c_loop_ub; i1++) {
      c_s_data[i1] = s_data[i2 + i1];
    }
    i1 = s->size[0];
    s->size[0] = b_loop_ub;
    emxEnsureCapacity_real_T(&st, s, i1, &bf_emlrtRTEI);
    b_s_data = s->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_s_data[i1] += s_data[i + i1];
    }
    d_s_data.data = &c_s_data[0];
    d_s_data.size = &b_s_size;
    d_s_data.allocatedSize = 121;
    d_s_data.numDimensions = 1;
    d_s_data.canFreeData = false;
    b_st.site = &tb_emlrtRSI;
    value = S_fun(&b_st, &d_s_data, s, Tmax, c);
  } else {
    b_st.site = &tb_emlrtRSI;
    value = t_binary_expand_op(&b_st, tb_emlrtRSI, s_data, i2, i3, i, i1, s,
                               physical.Tmax, physical.c);
  }
  emxFree_real_T(&st, &s);
  /*  stop integration when there is a switching time */
  /*  value = s(end); */
  /*  stops the integration ifthe spacecraft is too close to Earth or Moon */
  d = muDoubleScalarRound((NSTATE - 1.0) / 2.0);
  if (d < 1.0) {
    i = 0;
  } else {
    if (s_size < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s_size, &pi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (d != (int32_T)d) {
      emlrtIntegerCheckR2012b(d, &wd_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > s_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s_size, &oi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)d;
  }
  iv[0] = 1;
  iv[1] = i;
  st.site = &wj_emlrtRSI;
  indexShapeCheck(&st, s_size, iv);
  if ((i != 2) && (i != 1)) {
    emlrtDimSizeImpxCheckR2021b(2, i, &lc_emlrtECI, (emlrtConstCTX)sp);
  }
  if (d < 1.0) {
    i1 = 0;
  } else {
    if (s_size < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s_size, &ni_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > s_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s_size, &mi_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)d;
  }
  iv[0] = 1;
  iv[1] = i1;
  st.site = &xj_emlrtRSI;
  indexShapeCheck(&st, s_size, iv);
  if ((i1 != 2) && (i1 != 1)) {
    emlrtDimSizeImpxCheckR2021b(2, i1, &kc_emlrtECI, (emlrtConstCTX)sp);
  }
  b_dv[0] = physical.Earth[0] - s_data[0];
  b_dv[1] = physical.Earth[1] - s_data[i != 1];
  if (c_norm(b_dv) < physical.RE) {
    value = 0.0;
  } else {
    b_dv[0] = physical.Moon[0] - s_data[0];
    b_dv[1] = physical.Moon[1] - s_data[i1 != 1];
    if (c_norm(b_dv) < physical.RM) {
      value = 0.0;
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
  return value;
}

/* End of code generation (stopNOG.c) */
