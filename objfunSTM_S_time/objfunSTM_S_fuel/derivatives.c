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
#include "objfunSTM_S_fuel_emxutil.h"
#include "objfunSTM_S_fuel_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo oi_emlrtRSI = {
    12,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtRSInfo pi_emlrtRSI = {
    13,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtRSInfo qi_emlrtRSI = {
    28,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtBCInfo ge_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    12,                                                       /* lineNo */
    11,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = {
    12,                                                       /* lineNo */
    13,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    12,                                                       /* lineNo */
    13,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = {
    13,                                                       /* lineNo */
    11,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    13,                                                       /* lineNo */
    11,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = {
    13,                                                       /* lineNo */
    20,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    13,                                                       /* lineNo */
    20,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    30,                                                       /* lineNo */
    5,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = {
    30,                                                       /* lineNo */
    7,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    30,                                                       /* lineNo */
    7,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo l_emlrtECI = {
    -1,                                                      /* nDims */
    30,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtDCInfo mb_emlrtDCI = {
    32,                                                       /* lineNo */
    5,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    32,                                                       /* lineNo */
    5,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = {
    32,                                                       /* lineNo */
    14,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    32,                                                       /* lineNo */
    14,                                                       /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo m_emlrtECI = {
    -1,                                                      /* nDims */
    32,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtDCInfo ob_emlrtDCI = {
    27,                                                       /* lineNo */
    1,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = {
    27,                                                       /* lineNo */
    1,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    4                                                         /* checkKind */
};

static emlrtRTEInfo od_emlrtRTEI = {
    27,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    12,                                                      /* lineNo */
    6,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    13,                                                      /* lineNo */
    6,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = {
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
      emlrtDynamicBoundsCheckR2012b(1, 1, inp1->size[0], &ge_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (inp2_NSTATE != (int32_T)muDoubleScalarFloor(inp2_NSTATE)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE, &ib_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)inp2_NSTATE < 1) || ((int32_T)inp2_NSTATE > inp1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inp2_NSTATE, 1, inp1->size[0],
                                    &he_emlrtBCI, (emlrtConstCTX)sp);
    }
    loop_ub = (int32_T)inp2_NSTATE;
  }
  iv[0] = 1;
  iv[1] = loop_ub;
  st.site = &oi_emlrtRSI;
  indexShapeCheck(&st, inp1->size[0], iv);
  d = 2.0 * inp2_NSTATE;
  if (inp2_NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    if (inp2_NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(inp2_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE + 1.0, &jb_emlrtDCI,
                              (emlrtConstCTX)sp);
    }
    if (((int32_T)(inp2_NSTATE + 1.0) < 1) ||
        ((int32_T)(inp2_NSTATE + 1.0) > inp1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(inp2_NSTATE + 1.0), 1,
                                    inp1->size[0], &ie_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)(inp2_NSTATE + 1.0) - 1;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &kb_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > inp1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, inp1->size[0], &je_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)d;
  }
  iv[0] = 1;
  b_loop_ub = i1 - i;
  iv[1] = b_loop_ub;
  st.site = &pi_emlrtRSI;
  indexShapeCheck(&st, inp1->size[0], iv);
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &pb_emlrtDCI, (emlrtConstCTX)sp);
  }
  d1 = (int32_T)muDoubleScalarFloor(d);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &ob_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = xxd->size[0];
  xxd->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(sp, xxd, i1, &od_emlrtRTEI);
  xxd_data = xxd->data;
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &ob_emlrtDCI, (emlrtConstCTX)sp);
  }
  c_loop_ub = (int32_T)d;
  for (i1 = 0; i1 < c_loop_ub; i1++) {
    xxd_data[i1] = 0.0;
  }
  emxInit_real_T(sp, &b_inp1, 1, &pd_emlrtRTEI);
  i1 = b_inp1->size[0];
  b_inp1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_inp1, i1, &pd_emlrtRTEI);
  b_inp1_data = b_inp1->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_inp1_data[i1] = inp1_data[i1];
  }
  emxInit_real_T(sp, &c_inp1, 1, &qd_emlrtRTEI);
  i1 = c_inp1->size[0];
  c_inp1->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, c_inp1, i1, &qd_emlrtRTEI);
  b_inp1_data = c_inp1->data;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    b_inp1_data[i1] = inp1_data[i + i1];
  }
  emxInit_real_T(sp, &H_x, 1, &rd_emlrtRTEI);
  emxInit_real_T(sp, &H_p, 1, &rd_emlrtRTEI);
  st.site = &qi_emlrtRSI;
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
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &ke_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (inp2_NSTATE != (int32_T)muDoubleScalarFloor(inp2_NSTATE)) {
      emlrtIntegerCheckR2012b(inp2_NSTATE, &lb_emlrtDCI, (emlrtConstCTX)sp);
    }
    i = (int32_T)(2.0 * inp2_NSTATE);
    if (((int32_T)inp2_NSTATE < 1) || ((int32_T)inp2_NSTATE > i)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inp2_NSTATE, 1, i, &le_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)inp2_NSTATE;
  }
  if (i != 5) {
    emlrtSubAssignSizeCheck1dR2017a(i, 5, &l_emlrtECI, (emlrtConstCTX)sp);
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
      emlrtIntegerCheckR2012b(inp2_NSTATE + 1.0, &mb_emlrtDCI,
                              (emlrtConstCTX)sp);
    }
    if (((int32_T)(inp2_NSTATE + 1.0) < 1) ||
        ((int32_T)(inp2_NSTATE + 1.0) > xxd->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(inp2_NSTATE + 1.0), 1,
                                    xxd->size[0], &me_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = (int32_T)(inp2_NSTATE + 1.0) - 1;
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &nb_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)d < 1) || ((int32_T)d > xxd->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xxd->size[0], &ne_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = (int32_T)d;
  }
  loop_ub = i1 - i;
  if (loop_ub != 5) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 5, &m_emlrtECI, (emlrtConstCTX)sp);
  }
  for (i1 = 0; i1 < 5; i1++) {
    xxd_data[i + i1] = -H_x_data[i1];
  }
  emxFree_real_T(sp, &H_x);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (derivatives.c) */
