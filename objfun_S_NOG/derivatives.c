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
#include "objfun_S_NOG_emxutil.h"
#include "objfun_S_NOG_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo wm_emlrtRSI = {
    12,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtRSInfo xm_emlrtRSI = {
    13,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtRSInfo ym_emlrtRSI = {
    28,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtBCInfo gk_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    12,                                                       /* lineNo */
    11,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo ef_emlrtDCI = {
    12,                                                       /* lineNo */
    13,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo hk_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    12,                                                       /* lineNo */
    13,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo ff_emlrtDCI = {
    13,                                                       /* lineNo */
    11,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo ik_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    13,                                                       /* lineNo */
    11,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo gf_emlrtDCI = {
    13,                                                       /* lineNo */
    20,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo jk_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    13,                                                       /* lineNo */
    20,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo hf_emlrtDCI = {
    30,                                                       /* lineNo */
    7,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo kk_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    30,                                                       /* lineNo */
    7,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo bd_emlrtECI = {
    -1,                                                      /* nDims */
    30,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtDCInfo if_emlrtDCI = {
    32,                                                       /* lineNo */
    5,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo lk_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    32,                                                       /* lineNo */
    5,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo jf_emlrtDCI = {
    32,                                                       /* lineNo */
    14,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo mk_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    32,                                                       /* lineNo */
    14,                                                       /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo cd_emlrtECI = {
    -1,                                                      /* nDims */
    32,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtDCInfo kf_emlrtDCI = {
    27,                                                       /* lineNo */
    1,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtDCInfo lf_emlrtDCI = {
    27,                                                       /* lineNo */
    1,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    4                                                         /* checkKind */
};

static emlrtRTEInfo eg_emlrtRTEI = {
    27,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = {
    2,                                                       /* lineNo */
    16,                                                      /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

/* Function Definitions */
void derivatives(const emlrtStack *sp, const real_T inp1_data[],
                 int32_T inp1_size, real_T inp2_Tmax, real_T inp2_c,
                 real_T inp2_NSTATE, real_T inp2_shoot, real_T inp2_EPS,
                 real_T inp3, emxArray_real_T *xxd)
{
  emlrtStack st;
  emxArray_real_T d_inp1_data;
  emxArray_real_T e_inp1_data;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  real_T b_inp1_data[121];
  real_T c_inp1_data[121];
  real_T d;
  real_T d1;
  real_T *H_p_data;
  real_T *H_x_data;
  real_T *xxd_data;
  int32_T iv[2];
  int32_T b_inp1_size;
  int32_T b_loop_ub;
  int32_T c_inp1_size;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
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
    if (inp1_size < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, inp1_size, &gk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (inp2_NSTATE != (int32_T)muDoubleScalarFloor(inp2_NSTATE)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE, &ef_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)inp2_NSTATE < 1) || ((int32_T)inp2_NSTATE > inp1_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inp2_NSTATE, 1, inp1_size,
                                    &hk_emlrtBCI, (emlrtConstCTX)sp);
    }
    loop_ub = (int32_T)inp2_NSTATE;
  }
  iv[0] = 1;
  iv[1] = loop_ub;
  st.site = &wm_emlrtRSI;
  indexShapeCheck(&st, inp1_size, iv);
  d = 2.0 * inp2_NSTATE;
  if (inp2_NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    if (inp2_NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(inp2_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE + 1.0, &ff_emlrtDCI,
                              (emlrtConstCTX)sp);
    }
    if (((int32_T)(inp2_NSTATE + 1.0) < 1) ||
        ((int32_T)(inp2_NSTATE + 1.0) > inp1_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(inp2_NSTATE + 1.0), 1, inp1_size,
                                    &ik_emlrtBCI, (emlrtConstCTX)sp);
    }
    i = (int32_T)(inp2_NSTATE + 1.0) - 1;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &gf_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > inp1_size)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, inp1_size, &jk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)d;
  }
  iv[0] = 1;
  b_loop_ub = i1 - i;
  iv[1] = b_loop_ub;
  st.site = &xm_emlrtRSI;
  indexShapeCheck(&st, inp1_size, iv);
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &lf_emlrtDCI, (emlrtConstCTX)sp);
  }
  d1 = (int32_T)muDoubleScalarFloor(d);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &kf_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = xxd->size[0];
  xxd->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, xxd, i1, &eg_emlrtRTEI);
  xxd_data = xxd->data;
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &kf_emlrtDCI, (emlrtConstCTX)sp);
  }
  c_loop_ub = (int32_T)d;
  for (i1 = 0; i1 < c_loop_ub; i1++) {
    xxd_data[i1] = 0.0;
  }
  b_inp1_size = loop_ub;
  if (loop_ub - 1 >= 0) {
    memcpy(&b_inp1_data[0], &inp1_data[0], (uint32_T)loop_ub * sizeof(real_T));
  }
  c_inp1_size = b_loop_ub;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    c_inp1_data[i1] = inp1_data[i + i1];
  }
  d_inp1_data.data = &b_inp1_data[0];
  d_inp1_data.size = &b_inp1_size;
  d_inp1_data.allocatedSize = 121;
  d_inp1_data.numDimensions = 1;
  d_inp1_data.canFreeData = false;
  e_inp1_data.data = &c_inp1_data[0];
  e_inp1_data.size = &c_inp1_size;
  e_inp1_data.allocatedSize = 121;
  e_inp1_data.numDimensions = 1;
  e_inp1_data.canFreeData = false;
  emxInit_real_T(sp, &H_x, 1, &fg_emlrtRTEI);
  emxInit_real_T(sp, &H_p, 1, &fg_emlrtRTEI);
  st.site = &ym_emlrtRSI;
  HamiltonianFirstDerivatives(&st, &d_inp1_data, &e_inp1_data, inp3, inp2_Tmax,
                              inp2_c, inp2_NSTATE, inp2_shoot, inp2_EPS, H_x,
                              H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  /*  state derivatives */
  if (inp2_NSTATE < 1.0) {
    i = 0;
  } else {
    if (inp2_NSTATE != (int32_T)muDoubleScalarFloor(inp2_NSTATE)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE, &hf_emlrtDCI, (emlrtConstCTX)sp);
    }
    i = (int32_T)(2.0 * inp2_NSTATE);
    if (((int32_T)inp2_NSTATE < 1) || ((int32_T)inp2_NSTATE > i)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inp2_NSTATE, 1, i, &kk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)inp2_NSTATE;
  }
  if (i != 5) {
    emlrtSubAssignSizeCheck1dR2017a(i, 5, &bd_emlrtECI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < 5; i++) {
    xxd_data[i] = H_p_data[i];
  }
  emxFree_real_T(sp, &H_p);
  /*  costate derivatives */
  if (inp2_NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    if (inp2_NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(inp2_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE + 1.0, &if_emlrtDCI,
                              (emlrtConstCTX)sp);
    }
    if (((int32_T)(inp2_NSTATE + 1.0) < 1) ||
        ((int32_T)(inp2_NSTATE + 1.0) > xxd->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(inp2_NSTATE + 1.0), 1,
                                    xxd->size[0], &lk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)(inp2_NSTATE + 1.0) - 1;
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &jf_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > xxd->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xxd->size[0], &mk_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)d;
  }
  loop_ub = i1 - i;
  if (loop_ub != 5) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 5, &cd_emlrtECI,
                                    (emlrtConstCTX)sp);
  }
  for (i1 = 0; i1 < 5; i1++) {
    xxd_data[i + i1] = -H_x_data[i1];
  }
  emxFree_real_T(sp, &H_x);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (derivatives.c) */
