/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * derivatives.c
 *
 * Code generation for function 'derivatives'
 *
 */

/* Include files */
#include "derivatives.h"
#include "HamiltonianFirstDerivatives.h"
#include "indexShapeCheck.h"
#include "objfunSTM_S_time_emxutil.h"
#include "objfunSTM_S_time_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo dj_emlrtRSI = {
    12,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtRSInfo ej_emlrtRSI = {
    13,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtRSInfo fj_emlrtRSI = {
    28,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtBCInfo mf_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    12,                                                       /* lineNo */
    11,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = {
    12,                                                       /* lineNo */
    13,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo nf_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    12,                                                       /* lineNo */
    13,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = {
    13,                                                       /* lineNo */
    11,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo of_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    13,                                                       /* lineNo */
    11,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo jc_emlrtDCI = {
    13,                                                       /* lineNo */
    20,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo pf_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    13,                                                       /* lineNo */
    20,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo qf_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    30,                                                       /* lineNo */
    5,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo kc_emlrtDCI = {
    30,                                                       /* lineNo */
    7,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo rf_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    30,                                                       /* lineNo */
    7,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo t_emlrtECI = {
    -1,                                                      /* nDims */
    30,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtDCInfo lc_emlrtDCI = {
    32,                                                       /* lineNo */
    5,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo sf_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    32,                                                       /* lineNo */
    5,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo mc_emlrtDCI = {
    32,                                                       /* lineNo */
    14,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo tf_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    32,                                                       /* lineNo */
    14,                                                       /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo u_emlrtECI = {
    -1,                                                      /* nDims */
    32,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtDCInfo nc_emlrtDCI = {
    27,                                                       /* lineNo */
    1,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtDCInfo oc_emlrtDCI = {
    27,                                                       /* lineNo */
    1,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    4                                                         /* checkKind */
};

static emlrtRTEInfo se_emlrtRTEI = {
    27,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtRTEInfo te_emlrtRTEI = {
    12,                                                      /* lineNo */
    6,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    13,                                                      /* lineNo */
    6,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    2,                                                       /* lineNo */
    16,                                                      /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

/* Function Definitions */
void derivatives(const emlrtStack *sp, const emxArray_real_T *inp1,
                 real_T inp2_Tmax, real_T inp2_c, real_T inp2_NSTATE,
                 real_T inp2_shoot, real_T inp2_EPS, real_T inp3,
                 emxArray_real_T *xxd)
{
  emlrtStack st;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *b_inp1;
  emxArray_real_T *c_inp1;
  const real_T *inp1_data;
  real_T d;
  real_T d1;
  real_T *H_x_data;
  real_T *b_inp1_data;
  real_T *xxd_data;
  int32_T iv[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  inp1_data = inp1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  computation of equations of motion */
  /*  Output: */
  /*  xxd: state and costate derivatives [2*NSTATEx1] */
  /*  3 inputs case:  */
  /*  inp1: state and costate vector [NSTATEx1], inp2: structure for physical
   * variables */
  /*  and functions, inp3: switching function */
  if (inp2_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (inp1->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, inp1->size[0], &mf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (inp2_NSTATE != (int32_T)muDoubleScalarFloor(inp2_NSTATE)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE, &hc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)inp2_NSTATE < 1) || ((int32_T)inp2_NSTATE > inp1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inp2_NSTATE, 1, inp1->size[0],
                                    &nf_emlrtBCI, (emlrtConstCTX)sp);
    }
    loop_ub = (int32_T)inp2_NSTATE;
  }
  iv[0] = 1;
  iv[1] = loop_ub;
  st.site = &dj_emlrtRSI;
  indexShapeCheck(&st, inp1->size[0], iv);
  d = 2.0 * inp2_NSTATE;
  if (inp2_NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    if (inp2_NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(inp2_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE + 1.0, &ic_emlrtDCI,
                              (emlrtConstCTX)sp);
    }
    if (((int32_T)(inp2_NSTATE + 1.0) < 1) ||
        ((int32_T)(inp2_NSTATE + 1.0) > inp1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(inp2_NSTATE + 1.0), 1,
                                    inp1->size[0], &of_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)(inp2_NSTATE + 1.0) - 1;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &jc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > inp1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, inp1->size[0], &pf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)d;
  }
  iv[0] = 1;
  b_loop_ub = i1 - i;
  iv[1] = b_loop_ub;
  st.site = &ej_emlrtRSI;
  indexShapeCheck(&st, inp1->size[0], iv);
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &oc_emlrtDCI, (emlrtConstCTX)sp);
  }
  d1 = (int32_T)muDoubleScalarFloor(d);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &nc_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = xxd->size[0];
  xxd->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, xxd, i1, &se_emlrtRTEI);
  xxd_data = xxd->data;
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &nc_emlrtDCI, (emlrtConstCTX)sp);
  }
  c_loop_ub = (int32_T)d;
  for (i1 = 0; i1 < c_loop_ub; i1++) {
    xxd_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &b_inp1, 1, &te_emlrtRTEI);
  i1 = b_inp1->size[0];
  b_inp1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_inp1, i1, &te_emlrtRTEI);
  b_inp1_data = b_inp1->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_inp1_data[i1] = inp1_data[i1];
  }
  emxInit_real_T(sp, &c_inp1, 1, &ue_emlrtRTEI);
  i1 = c_inp1->size[0];
  c_inp1->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, c_inp1, i1, &ue_emlrtRTEI);
  b_inp1_data = c_inp1->data;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    b_inp1_data[i1] = inp1_data[i + i1];
  }
  emxInit_real_T(sp, &H_x, 1, &ve_emlrtRTEI);
  emxInit_real_T(sp, &H_p, 1, &ve_emlrtRTEI);
  st.site = &fj_emlrtRSI;
  HamiltonianFirstDerivatives(&st, b_inp1, c_inp1, inp3, inp2_Tmax, inp2_c,
                              inp2_NSTATE, inp2_shoot, inp2_EPS, H_x, H_p);
  b_inp1_data = H_p->data;
  H_x_data = H_x->data;
  emxFree_real_T(sp, &c_inp1);
  emxFree_real_T(sp, &b_inp1);
  /*  state derivatives */
  if (inp2_NSTATE < 1.0) {
    i = 0;
  } else {
    i = (int32_T)(2.0 * inp2_NSTATE);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &qf_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (inp2_NSTATE != (int32_T)muDoubleScalarFloor(inp2_NSTATE)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE, &kc_emlrtDCI, (emlrtConstCTX)sp);
    }
    i = (int32_T)(2.0 * inp2_NSTATE);
    if (((int32_T)inp2_NSTATE < 1) || ((int32_T)inp2_NSTATE > i)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inp2_NSTATE, 1, i, &rf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)inp2_NSTATE;
  }
  if (i != 5) {
    emlrtSubAssignSizeCheck1dR2017a(i, 5, &t_emlrtECI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < 5; i++) {
    xxd_data[i] = b_inp1_data[i];
  }
  emxFree_real_T(sp, &H_p);
  /*  costate derivatives */
  if (inp2_NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    if (inp2_NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(inp2_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE + 1.0, &lc_emlrtDCI,
                              (emlrtConstCTX)sp);
    }
    if (((int32_T)(inp2_NSTATE + 1.0) < 1) ||
        ((int32_T)(inp2_NSTATE + 1.0) > xxd->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(inp2_NSTATE + 1.0), 1,
                                    xxd->size[0], &sf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)(inp2_NSTATE + 1.0) - 1;
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &mc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > xxd->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xxd->size[0], &tf_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)d;
  }
  loop_ub = i1 - i;
  if (loop_ub != 5) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 5, &u_emlrtECI, (emlrtConstCTX)sp);
  }
  for (i1 = 0; i1 < 5; i1++) {
    xxd_data[i + i1] = -H_x_data[i1];
  }
  emxFree_real_T(sp, &H_x);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (derivatives.c) */
