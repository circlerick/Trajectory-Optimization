/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfunSTM_S_fuel.c
 *
 * Code generation for function 'objfunSTM_S_fuel'
 *
 */

/* Include files */
#include "objfunSTM_S_fuel.h"
#include "HamiltonianFirstDerivatives.h"
#include "HamiltonianSecondDerivatives.h"
#include "S_fun.h"
#include "S_p_fun.h"
#include "S_x_fun.h"
#include "Switching_Function.h"
#include "assertValidSizeArg.h"
#include "derivatives.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "norm.h"
#include "objfunSTM_S_fuel_data.h"
#include "objfunSTM_S_fuel_emxutil.h"
#include "objfunSTM_S_fuel_types.h"
#include "ode89.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    36,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    44,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    45,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    49,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    52,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    54,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    60,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    61,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    62,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    63,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    65,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    66,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    67,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    68,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    69,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    89,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    90,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    91,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    40,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    52,                                                           /* lineNo */
    "@(t,s)derivativesSTM_S(s,physical,SIGN)",                    /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo cc_emlrtRSI = {
    11,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo dc_emlrtRSI = {
    12,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo ec_emlrtRSI = {
    13,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo fc_emlrtRSI = {
    27,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    28,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    36,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    37,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    38,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo kg_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    20,                                                           /* lineNo */
    5,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    28,                                                            /* lineNo */
    14,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    4 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    28,                                                            /* lineNo */
    14,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    49,                                                            /* lineNo */
    40,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    49,                                                            /* lineNo */
    40,                                                            /* colNo */
    "s0",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    1,                                                            /* nDims */
    49,                                                           /* lineNo */
    28,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtDCInfo d_emlrtDCI = {
    49,                                                            /* lineNo */
    85,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    49,                                                            /* lineNo */
    85,                                                            /* colNo */
    "s0",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    1,                                                            /* nDims */
    49,                                                           /* lineNo */
    73,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    54,                                                            /* lineNo */
    23,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    54,                                                            /* lineNo */
    27,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    54,                                                            /* lineNo */
    27,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    54,                                                            /* lineNo */
    38,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    58,                                                            /* lineNo */
    19,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    58,                                                            /* lineNo */
    25,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    58,                                                            /* lineNo */
    25,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    59,                                                            /* lineNo */
    22,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    59,                                                            /* lineNo */
    26,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    59,                                                            /* lineNo */
    26,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    59,                                                            /* lineNo */
    35,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    59,                                                            /* lineNo */
    35,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    63,                                                            /* lineNo */
    35,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    63,                                                            /* lineNo */
    41,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    63,                                                            /* lineNo */
    41,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    65,                                                            /* lineNo */
    36,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    65,                                                            /* lineNo */
    42,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    65,                                                            /* lineNo */
    42,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    1,                                                            /* nDims */
    66,                                                           /* lineNo */
    32,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    1,                                                            /* nDims */
    66,                                                           /* lineNo */
    15,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    2,                                                            /* nDims */
    66,                                                           /* lineNo */
    15,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    68,                                                            /* lineNo */
    35,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    68,                                                            /* lineNo */
    41,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    68,                                                            /* lineNo */
    41,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    68,                                                            /* lineNo */
    57,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    68,                                                            /* lineNo */
    57,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    68,                                                            /* lineNo */
    66,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    68,                                                            /* lineNo */
    66,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    69,                                                            /* lineNo */
    18,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    69,                                                            /* lineNo */
    24,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    69,                                                            /* lineNo */
    24,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    80,                                                            /* lineNo */
    9,                                                             /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    80,                                                            /* lineNo */
    13,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    80,                                                            /* lineNo */
    15,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    80,                                                            /* lineNo */
    15,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    81,                                                            /* lineNo */
    9,                                                             /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    81,                                                            /* lineNo */
    13,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    81,                                                            /* lineNo */
    13,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    81,                                                            /* lineNo */
    22,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    81,                                                            /* lineNo */
    22,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    1,                                                            /* nDims */
    82,                                                           /* lineNo */
    20,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    1,                                                            /* nDims */
    83,                                                           /* lineNo */
    18,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    89,                                                            /* lineNo */
    27,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    89,                                                            /* lineNo */
    29,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    89,                                                            /* lineNo */
    29,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    89,                                                            /* lineNo */
    37,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    89,                                                            /* lineNo */
    37,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    89,                                                            /* lineNo */
    47,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    89,                                                            /* lineNo */
    47,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    90,                                                            /* lineNo */
    26,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    90,                                                            /* lineNo */
    26,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    90,                                                            /* lineNo */
    36,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    90,                                                            /* lineNo */
    36,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    90,                                                            /* lineNo */
    46,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    90,                                                            /* lineNo */
    46,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = {
    90,                                                            /* lineNo */
    56,                                                            /* colNo */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    90,                                                            /* lineNo */
    56,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = {
    74,                  /* lineNo */
    13,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    79,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    81,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    57,                                                            /* lineNo */
    11,                                                            /* colNo */
    "tt",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    72,                                                            /* lineNo */
    15,                                                            /* colNo */
    "tt",                                                          /* aName */
    "objfunSTM_S_fuel",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo h_emlrtECI = {
    -1,                                                           /* nDims */
    34,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    9,                                                             /* colNo */
    "xd",                                                          /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo i_emlrtECI = {
    -1,                                                           /* nDims */
    35,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    35,                                                            /* lineNo */
    9,                                                             /* colNo */
    "pd",                                                          /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    25,                                                            /* colNo */
    "H_p",                                                         /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    13,                                                            /* lineNo */
    34,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    13,                                                            /* lineNo */
    23,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    13,                                                            /* lineNo */
    23,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    12,                                                            /* lineNo */
    20,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    12,                                                            /* lineNo */
    20,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    12,                                                            /* lineNo */
    11,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = {
    12,                                                            /* lineNo */
    11,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    11,                                                            /* lineNo */
    13,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = {
    11,                                                            /* lineNo */
    13,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    11,                                                            /* lineNo */
    11,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = {
    52,                                                            /* lineNo */
    21,                                                            /* colNo */
    "@(t,s)derivativesSTM_S(s,physical,SIGN)",                     /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = {
    52,                                                            /* lineNo */
    21,                                                            /* colNo */
    "@(t,s)derivativesSTM_S(s,physical,SIGN)",                     /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m", /* pName */
    4 /* checkKind */
};

static emlrtRTEInfo t_emlrtRTEI = {
    17,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    28,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    46,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    80,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    81,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    54,                                                           /* lineNo */
    20,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    89,                                                           /* lineNo */
    22,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    90,                                                           /* lineNo */
    20,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    54,                                                           /* lineNo */
    5,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    58,                                                           /* lineNo */
    9,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    91,                                                           /* lineNo */
    5,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    59,                                                           /* lineNo */
    9,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    63,                                                           /* lineNo */
    32,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    65,                                                           /* lineNo */
    33,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    68,                                                           /* lineNo */
    32,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    68,                                                           /* lineNo */
    50,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    69,                                                           /* lineNo */
    9,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    26,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    44,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    89,                                                           /* lineNo */
    5,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    90,                                                           /* lineNo */
    5,                                                            /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    3,                                                            /* lineNo */
    23,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    67,                                                           /* lineNo */
    15,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    11,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    12,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    13,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    52,                                                           /* lineNo */
    21,                                                           /* colNo */
    "objfunSTM_S_fuel",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    26,                                                           /* lineNo */
    20,                                                           /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    36,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    3,                                                            /* lineNo */
    14,                                                           /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRSInfo ri_emlrtRSI = {
    20,                                                           /* lineNo */
    "objfunSTM_S_fuel",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_fuel.m" /* pathName */
};

static emlrtRSInfo ui_emlrtRSI =
    {
        88,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

/* Function Declarations */
static void c_binary_expand_op(real_T in1_data[], int32_T *in1_size,
                               const struct1_T *in2, const emxArray_real_T *in3,
                               real_T in4);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[51]);

/* Function Definitions */
static void c_binary_expand_op(real_T in1_data[], int32_T *in1_size,
                               const struct1_T *in2, const emxArray_real_T *in3,
                               real_T in4)
{
  real_T b_in3[5];
  const real_T *in3_data;
  int32_T i;
  int32_T stride_0_0;
  in3_data = in3->data;
  stride_0_0 = (in3->size[0] != 1);
  for (i = 0; i < 5; i++) {
    b_in3[i] = in3_data[i * stride_0_0] - in2->Xf[i];
  }
  *in1_size = 5;
  for (i = 0; i < 4; i++) {
    real_T d;
    d = 0.0;
    for (stride_0_0 = 0; stride_0_0 < 5; stride_0_0++) {
      d += in2->Pigreco[stride_0_0 + 5 * i] * b_in3[stride_0_0];
    }
    in1_data[i] = d;
  }
  in1_data[4] = in4;
}

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 1, &pArray, "disp", true,
                        location);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[51])
{
  static const int32_T iv[2] = {1, 51};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 51, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void emlrt_checkEscapedGlobals(void)
{
  physical_dirty |= physical_dirty >> 1U;
}

void objfunSTM_S_fuel(const emlrtStack *sp, const real_T lam0[5],
                      const real_T X0[5], const struct0_T *b_physical,
                      const struct1_T *boundary, real_T obj_data[],
                      int32_T obj_size[1], emxArray_real_T *grad)
{
  static const char_T cv[51] = {
      'E', 'r', 'r', 'o', 'r', ':', ' ', 'E', 'P', 'S', ' ', 'm', 'u',
      's', 't', ' ', 'b', 'e', ' ', 's', 'e', 't', ' ', 't', 'o', ' ',
      '0', ' ', 'i', 'n', ' ', 'm', 'i', 'n', 'i', 'm', 'u', 'm', ' ',
      'f', 'u', 'e', 'l', ' ', 'p', 'r', 'o', 'b', 'l', 'e', 'm'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T b_gradP;
  emxArray_real_T *b_phi;
  emxArray_real_T *b_xx;
  emxArray_real_T *c_xx;
  emxArray_real_T *gradP;
  emxArray_real_T *gradX;
  emxArray_real_T *pf;
  emxArray_real_T *phi;
  emxArray_real_T *phif;
  emxArray_real_T *r;
  emxArray_real_T *s0;
  emxArray_real_T *tt;
  emxArray_real_T *xx;
  emxArray_real_T *y;
  real_T S;
  real_T told;
  real_T *gradX_data;
  real_T *grad_data;
  real_T *phi_data;
  real_T *phif_data;
  real_T *s0_data;
  real_T *tt_data;
  real_T *xx_data;
  int32_T b_sizes[2];
  int32_T c_sizes[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T maxdimlen;
  int32_T sizes_tmp_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  compute the objective function and its gradient for a minimum fuel */
  /*  problem. */
  /*  Inputs: */
  /*  lam0: initial costates vector [NSTATEx1] */
  /*  X0: initial states vector [NSTATEx1] */
  /*  physical: structure for physical variables */
  /*  boundary: structure for control problem inputs */
  /*  Output: */
  /*  obj: objective function residual */
  /*  grad: gradient of the shooting function */
  /*  initialize outputs and constants */
  obj_size[0] = 1;
  obj_data[0] = 1000.0;
  i = grad->size[0] * grad->size[1];
  grad->size[0] = 1;
  grad->size[1] = 1;
  emxEnsureCapacity_real_T(sp, grad, i, &t_emlrtRTEI);
  grad_data = grad->data;
  grad_data[0] = 0.0;
  if (b_physical->EPS != 0.0) {
    st.site = &ri_emlrtRSI;
    disp(&st, emlrt_marshallOut(&st, cv), &emlrtMCI);
  } else {
    real_T S_x[5];
    real_T b_told[2];
    real_T NSTATE;
    real_T SIGN;
    real_T Tfin;
    real_T Tmax;
    real_T a;
    real_T d;
    int32_T sizes[2];
    int32_T loop_ub;
    int32_T nx;
    int8_T input_sizes_idx_0;
    boolean_T empty_non_axis_sizes;
    boolean_T exitg1;
    NSTATE = b_physical->NSTATE;
    Tmax = b_physical->Tmax;
    emxInit_real_T(sp, &xx, 2, &nb_emlrtRTEI);
    xx_data = xx->data;
    xx->size[0] = 0;
    xx->size[1] = 0;
    a = 2.0 * b_physical->NSTATE;
    if (!(a >= 0.0)) {
      emlrtNonNegativeCheckR2012b(a, &emlrtDCI, (emlrtConstCTX)sp);
    }
    d = (int32_T)muDoubleScalarFloor(a);
    if (a != d) {
      emlrtIntegerCheckR2012b(a, &b_emlrtDCI, (emlrtConstCTX)sp);
    }
    emxInit_real_T(sp, &phif, 2, &u_emlrtRTEI);
    i = phif->size[0] * phif->size[1];
    phif->size[0] = (int32_T)a;
    phif->size[1] = (int32_T)a;
    emxEnsureCapacity_real_T(sp, phif, i, &u_emlrtRTEI);
    phif_data = phif->data;
    loop_ub = (int32_T)a * (int32_T)a;
    for (i = 0; i < loop_ub; i++) {
      phif_data[i] = 0.0;
    }
    told = boundary->T0;
    Tfin = boundary->Tfin;
    st.site = &emlrtRSI;
    S = Switching_Function(&st, X0, lam0, b_physical->Tmax, b_physical->c);
    /*  compute initial switch */
    if (muDoubleScalarSign(S) != b_physical->shoot) {
      i = -1;
    } else {
      i = 1;
    }
    SIGN = b_physical->shoot * (real_T)i;
    emxInit_real_T(sp, &phi, 2, &ob_emlrtRTEI);
    st.site = &b_emlrtRSI;
    eye(&st, 2.0 * b_physical->NSTATE, phi);
    phi_data = phi->data;
    st.site = &c_emlrtRSI;
    b_st.site = &ab_emlrtRSI;
    b_told[0] = 4.0 * (b_physical->NSTATE * b_physical->NSTATE);
    b_told[1] = 1.0;
    st.site = &c_emlrtRSI;
    nx = phi->size[0] * phi->size[1];
    b_st.site = &bb_emlrtRSI;
    assertValidSizeArg(&b_st, b_told);
    sizes_tmp_tmp = (int32_T)b_told[0];
    maxdimlen = phi->size[0];
    if (phi->size[1] > phi->size[0]) {
      maxdimlen = phi->size[1];
    }
    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)b_told[0] > maxdimlen) {
      emlrtErrorWithMessageIdR2018a(
          &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    if (maxdimlen < 1) {
      emlrtErrorWithMessageIdR2018a(
          &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    if ((int32_T)b_told[0] < 0) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                    "MATLAB:checkDimCommon:nonnegativeSize",
                                    "MATLAB:checkDimCommon:nonnegativeSize", 0);
    }
    if ((int32_T)b_told[0] != nx) {
      emlrtErrorWithMessageIdR2018a(
          &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
          "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }
    emxInit_real_T(sp, &s0, 1, &v_emlrtRTEI);
    i = s0->size[0];
    s0->size[0] = (int32_T)b_told[0] + 11;
    emxEnsureCapacity_real_T(sp, s0, i, &v_emlrtRTEI);
    s0_data = s0->data;
    for (i = 0; i < 5; i++) {
      s0_data[i] = X0[i];
      s0_data[i + 5] = lam0[i];
    }
    for (i = 0; i < sizes_tmp_tmp; i++) {
      s0_data[i + 10] = phi_data[i];
    }
    s0_data[(int32_T)b_told[0] + 10] = S;
    /*  initial state, costate, STM matrix and switching function */
    /*  integration loop */
    emxInit_real_T(sp, &pf, 1, &x_emlrtRTEI);
    emxInit_real_T(sp, &gradP, 2, &qb_emlrtRTEI);
    emxInit_real_T(sp, &tt, 1, &rb_emlrtRTEI);
    emxInit_real_T(sp, &r, 2, &rb_emlrtRTEI);
    emxInit_real_T(sp, &y, 2, &sb_emlrtRTEI);
    emxInit_real_T(sp, &b_xx, 2, &y_emlrtRTEI);
    emxInit_real_T(sp, &c_xx, 1, &gb_emlrtRTEI);
    emxInit_real_T(sp, &b_phi, 2, &jb_emlrtRTEI);
    exitg1 = false;
    while ((!exitg1) && (told != Tfin)) {
      S = muDoubleScalarRound(NSTATE / 2.0);
      if (S - 1.0 < 1.0) {
        i = 0;
      } else {
        if (S - 1.0 != (int32_T)(S - 1.0)) {
          emlrtIntegerCheckR2012b(S - 1.0, &c_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)(S - 1.0) < 1) || ((int32_T)(S - 1.0) > s0->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(S - 1.0), 1, s0->size[0],
                                        &emlrtBCI, (emlrtConstCTX)sp);
        }
        i = (int32_T)(S - 1.0);
      }
      sizes[0] = 1;
      sizes[1] = i;
      st.site = &d_emlrtRSI;
      indexShapeCheck(&st, s0->size[0], sizes);
      if ((i != 2) && (i != 1)) {
        emlrtDimSizeImpxCheckR2021b(2, i, &emlrtECI, (emlrtConstCTX)sp);
      }
      b_told[0] = b_physical->Earth[0] - s0_data[0];
      b_told[1] = b_physical->Earth[1] - s0_data[i != 1];
      if (b_norm(b_told) > b_physical->RE) {
        if (S - 1.0 < 1.0) {
          i = 0;
        } else {
          if (S - 1.0 != (int32_T)(S - 1.0)) {
            emlrtIntegerCheckR2012b(S - 1.0, &d_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)(S - 1.0) < 1) || ((int32_T)(S - 1.0) > s0->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(S - 1.0), 1, s0->size[0],
                                          &b_emlrtBCI, (emlrtConstCTX)sp);
          }
          i = (int32_T)(S - 1.0);
        }
        sizes[0] = 1;
        sizes[1] = i;
        st.site = &d_emlrtRSI;
        indexShapeCheck(&st, s0->size[0], sizes);
        if ((i != 2) && (i != 1)) {
          emlrtDimSizeImpxCheckR2021b(2, i, &b_emlrtECI, (emlrtConstCTX)sp);
        }
        b_told[0] = b_physical->Moon[0] - s0_data[0];
        b_told[1] = b_physical->Moon[1] - s0_data[i != 1];
        if (b_norm(b_told) > b_physical->RM) {
          /*  integration with switching time detection */
          b_told[0] = told;
          b_told[1] = Tfin;
          st.site = &e_emlrtRSI;
          ode89(&st, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
                b_physical->shoot, b_physical->EPS, SIGN, b_told, s0, tt, xx);
          xx_data = xx->data;
          tt_data = tt->data;
          /*  extrapolate final state transition matrix */
          told = 2.0 * NSTATE + 1.0;
          if (told > (real_T)xx->size[1] - 1.0) {
            i = 0;
            i1 = 0;
          } else {
            if (told != (int32_T)muDoubleScalarFloor(told)) {
              emlrtIntegerCheckR2012b(told, &e_emlrtDCI, (emlrtConstCTX)sp);
            }
            if (((int32_T)told < 1) || ((int32_T)told > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)told, 1, xx->size[1],
                                            &d_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = (int32_T)told - 1;
            if ((xx->size[1] - 1 < 1) || (xx->size[1] - 1 > xx->size[1])) {
              emlrtDynamicBoundsCheckR2012b(xx->size[1] - 1, 1, xx->size[1],
                                            &e_emlrtBCI, (emlrtConstCTX)sp);
            }
            i1 = xx->size[1] - 1;
          }
          if (xx->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                          &c_emlrtBCI, (emlrtConstCTX)sp);
          }
          maxdimlen = gradP->size[0] * gradP->size[1];
          gradP->size[0] = 1;
          loop_ub = i1 - i;
          gradP->size[1] = loop_ub;
          emxEnsureCapacity_real_T(sp, gradP, maxdimlen, &y_emlrtRTEI);
          phi_data = gradP->data;
          for (i1 = 0; i1 < loop_ub; i1++) {
            phi_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
          }
          b_told[0] = 2.0 * NSTATE;
          b_told[1] = 2.0 * NSTATE;
          st.site = &f_emlrtRSI;
          b_st.site = &bb_emlrtRSI;
          assertValidSizeArg(&b_st, b_told);
          maxdimlen = 1;
          if (loop_ub > 1) {
            maxdimlen = loop_ub;
          }
          maxdimlen = muIntScalarMax_sint32(loop_ub, maxdimlen);
          if ((int32_T)b_told[0] > maxdimlen) {
            emlrtErrorWithMessageIdR2018a(
                &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }
          if ((int32_T)b_told[1] > maxdimlen) {
            emlrtErrorWithMessageIdR2018a(
                &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                "Coder:toolbox:reshape_emptyReshapeLimit", 0);
          }
          empty_non_axis_sizes = ((int32_T)b_told[0] >= 0);
          if ((!empty_non_axis_sizes) || ((int32_T)b_told[1] < 0)) {
            empty_non_axis_sizes = false;
          }
          if (!empty_non_axis_sizes) {
            emlrtErrorWithMessageIdR2018a(
                &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
                "MATLAB:checkDimCommon:nonnegativeSize", 0);
          }
          nx = (int32_T)b_told[0] * (int32_T)b_told[1];
          if (nx != loop_ub) {
            emlrtErrorWithMessageIdR2018a(
                &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
                "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
          }
          i1 = b_xx->size[0] * b_xx->size[1];
          b_xx->size[0] = 1;
          b_xx->size[1] = loop_ub;
          emxEnsureCapacity_real_T(sp, b_xx, i1, &y_emlrtRTEI);
          grad_data = b_xx->data;
          for (i1 = 0; i1 < loop_ub; i1++) {
            grad_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
          }
          i = phif->size[0] * phif->size[1];
          phif->size[0] = (int32_T)b_told[0];
          phif->size[1] = (int32_T)b_told[1];
          emxEnsureCapacity_real_T(sp, phif, i, &cb_emlrtRTEI);
          phif_data = phif->data;
          for (i = 0; i < nx; i++) {
            phif_data[i] = grad_data[i];
          }
          /*  computes jump discontinuity */
          if (tt->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0],
                                          &jb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (tt_data[tt->size[0] - 1] != Tfin) {
            real_T S_p[5];
            if (NSTATE < 1.0) {
              loop_ub = 0;
            } else {
              if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
                emlrtIntegerCheckR2012b(NSTATE, &f_emlrtDCI, (emlrtConstCTX)sp);
              }
              if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, xx->size[1],
                                              &g_emlrtBCI, (emlrtConstCTX)sp);
              }
              loop_ub = (int32_T)NSTATE;
            }
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &f_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = s0->size[0];
            s0->size[0] = loop_ub;
            emxEnsureCapacity_real_T(sp, s0, i, &db_emlrtRTEI);
            s0_data = s0->data;
            for (i = 0; i < loop_ub; i++) {
              s0_data[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
            }
            if (NSTATE + 1.0 > a) {
              i = 0;
              i1 = 0;
            } else {
              if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
                emlrtIntegerCheckR2012b(NSTATE + 1.0, &g_emlrtDCI,
                                        (emlrtConstCTX)sp);
              }
              if (((int32_T)(NSTATE + 1.0) < 1) ||
                  ((int32_T)(NSTATE + 1.0) > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1,
                                              xx->size[1], &i_emlrtBCI,
                                              (emlrtConstCTX)sp);
              }
              i = (int32_T)(NSTATE + 1.0) - 1;
              if (a != d) {
                emlrtIntegerCheckR2012b(a, &h_emlrtDCI, (emlrtConstCTX)sp);
              }
              if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                              &j_emlrtBCI, (emlrtConstCTX)sp);
              }
              i1 = (int32_T)a;
            }
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &h_emlrtBCI, (emlrtConstCTX)sp);
            }
            loop_ub = i1 - i;
            i1 = pf->size[0];
            pf->size[0] = loop_ub;
            emxEnsureCapacity_real_T(sp, pf, i1, &fb_emlrtRTEI);
            grad_data = pf->data;
            for (i1 = 0; i1 < loop_ub; i1++) {
              grad_data[i1] =
                  xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
            }
            st.site = &g_emlrtRSI;
            S_x_fun(&st, s0, pf, Tmax, S_x);
            st.site = &h_emlrtRSI;
            S_p_fun(&st, s0, pf, Tmax, b_physical->c, S_p);
            st.site = &i_emlrtRSI;
            b_Switching_Function(&st, s0, pf, b_physical->Tmax, b_physical->c,
                                 b_physical->NSTATE, b_physical->shoot,
                                 b_physical->EPS, &S, &told);
            if (a < 1.0) {
              loop_ub = 0;
            } else {
              if (a != d) {
                emlrtIntegerCheckR2012b(a, &i_emlrtDCI, (emlrtConstCTX)sp);
              }
              if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                              &l_emlrtBCI, (emlrtConstCTX)sp);
              }
              loop_ub = (int32_T)a;
            }
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &k_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = c_xx->size[0];
            c_xx->size[0] = loop_ub;
            emxEnsureCapacity_real_T(sp, c_xx, i, &gb_emlrtRTEI);
            grad_data = c_xx->data;
            for (i = 0; i < loop_ub; i++) {
              grad_data[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
            }
            st.site = &j_emlrtRSI;
            derivatives(&st, c_xx, b_physical->Tmax, b_physical->c,
                        b_physical->NSTATE, b_physical->shoot, b_physical->EPS,
                        SIGN, s0);
            s0_data = s0->data;
            SIGN = told;
            if (a < 1.0) {
              loop_ub = 0;
            } else {
              if (a != d) {
                emlrtIntegerCheckR2012b(a, &j_emlrtDCI, (emlrtConstCTX)sp);
              }
              if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                              &n_emlrtBCI, (emlrtConstCTX)sp);
              }
              loop_ub = (int32_T)a;
            }
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &m_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = c_xx->size[0];
            c_xx->size[0] = loop_ub;
            emxEnsureCapacity_real_T(sp, c_xx, i, &hb_emlrtRTEI);
            grad_data = c_xx->data;
            for (i = 0; i < loop_ub; i++) {
              grad_data[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
            }
            st.site = &k_emlrtRSI;
            derivatives(&st, c_xx, b_physical->Tmax, b_physical->c,
                        b_physical->NSTATE, b_physical->shoot, b_physical->EPS,
                        told, pf);
            grad_data = pf->data;
            if ((pf->size[0] != s0->size[0]) &&
                ((pf->size[0] != 1) && (s0->size[0] != 1))) {
              emlrtDimSizeImpxCheckR2021b(pf->size[0], s0->size[0], &c_emlrtECI,
                                          (emlrtConstCTX)sp);
            }
            st.site = &l_emlrtRSI;
            eye(&st, 2.0 * NSTATE, phi);
            phi_data = phi->data;
            if (pf->size[0] == s0->size[0]) {
              real_T b_S_x[10];
              loop_ub = pf->size[0];
              for (i = 0; i < loop_ub; i++) {
                grad_data[i] -= s0_data[i];
              }
              for (i = 0; i < 5; i++) {
                b_S_x[i] = S_x[i] / told;
                b_S_x[i + 5] = S_p[i] / told;
              }
              i = r->size[0] * r->size[1];
              r->size[0] = pf->size[0];
              r->size[1] = 10;
              emxEnsureCapacity_real_T(sp, r, i, &ib_emlrtRTEI);
              gradX_data = r->data;
              loop_ub = pf->size[0];
              for (i = 0; i < 10; i++) {
                for (i1 = 0; i1 < loop_ub; i1++) {
                  gradX_data[i1 + r->size[0] * i] = grad_data[i1] * b_S_x[i];
                }
              }
            } else {
              st.site = &ui_emlrtRSI;
              b_binary_expand_op(&st, r, pf, s0, S_x, told, S_p);
              gradX_data = r->data;
            }
            if ((phi->size[0] != r->size[0]) &&
                ((phi->size[0] != 1) && (r->size[0] != 1))) {
              emlrtDimSizeImpxCheckR2021b(phi->size[0], r->size[0], &d_emlrtECI,
                                          (emlrtConstCTX)sp);
            }
            if ((phi->size[1] != 10) && (phi->size[1] != 1)) {
              emlrtDimSizeImpxCheckR2021b(phi->size[1], 10, &e_emlrtECI,
                                          (emlrtConstCTX)sp);
            }
            st.site = &m_emlrtRSI;
            b_gradP = *gradP;
            b_sizes[0] = (int32_T)b_told[0];
            b_sizes[1] = (int32_T)b_told[1];
            b_gradP.size = &b_sizes[0];
            b_gradP.numDimensions = 2;
            b_st.site = &kg_emlrtRSI;
            dynamic_size_checks(&b_st, &b_gradP, phif->size[0]);
            if ((phi->size[0] == r->size[0]) && (phi->size[1] == 10)) {
              i = b_phi->size[0] * b_phi->size[1];
              b_phi->size[0] = phi->size[0];
              b_phi->size[1] = 10;
              emxEnsureCapacity_real_T(&st, b_phi, i, &jb_emlrtRTEI);
              grad_data = b_phi->data;
              loop_ub = phi->size[0] * 10;
              for (i = 0; i < loop_ub; i++) {
                grad_data[i] = phi_data[i] + gradX_data[i];
              }
              b_gradP = *gradP;
              c_sizes[0] = (int32_T)b_told[0];
              c_sizes[1] = (int32_T)b_told[1];
              b_gradP.size = &c_sizes[0];
              b_gradP.numDimensions = 2;
              b_st.site = &jg_emlrtRSI;
              b_mtimes(&b_st, b_phi, &b_gradP, y);
              gradX_data = y->data;
            } else {
              b_st.site = &jg_emlrtRSI;
              binary_expand_op(&b_st, y, jg_emlrtRSI, phi, r, gradP, b_told);
              gradX_data = y->data;
            }
            if (NSTATE < 1.0) {
              loop_ub = 0;
            } else {
              if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
                emlrtIntegerCheckR2012b(NSTATE, &k_emlrtDCI, (emlrtConstCTX)sp);
              }
              if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, xx->size[1],
                                              &p_emlrtBCI, (emlrtConstCTX)sp);
              }
              loop_ub = (int32_T)NSTATE;
            }
            if (NSTATE + 1.0 > a) {
              i = 0;
              i1 = 0;
            } else {
              if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
                emlrtIntegerCheckR2012b(NSTATE + 1.0, &l_emlrtDCI,
                                        (emlrtConstCTX)sp);
              }
              if (((int32_T)(NSTATE + 1.0) < 1) ||
                  ((int32_T)(NSTATE + 1.0) > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1,
                                              xx->size[1], &q_emlrtBCI,
                                              (emlrtConstCTX)sp);
              }
              i = (int32_T)(NSTATE + 1.0) - 1;
              if (a != d) {
                emlrtIntegerCheckR2012b(a, &m_emlrtDCI, (emlrtConstCTX)sp);
              }
              if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                              &r_emlrtBCI, (emlrtConstCTX)sp);
              }
              i1 = (int32_T)a;
            }
            st.site = &n_emlrtRSI;
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &o_emlrtBCI, &st);
            }
            /*  Computes switching Function and its derivatives */
            /*  Definition of the Switching function and its derivatives with
             * evaluation of the */
            /*  matlabFunction S_fun, S_x_fun, S_p_fun, S_xx_fun, S_pp_fun,
             * S_xp_fun */
            /*  Input: */
            /*  x: state vector [NSTATEx1] */
            /*  p: costate vector [NSTATEx1] */
            /*  physical: structure of physical variables and functions */
            /*  Output: */
            /*  S: switching function */
            /*  Sd: switching function first derivatives */
            /*  Sdd: switching function second derivatives */
            maxdimlen = c_xx->size[0];
            c_xx->size[0] = loop_ub;
            emxEnsureCapacity_real_T(&st, c_xx, maxdimlen, &kb_emlrtRTEI);
            grad_data = c_xx->data;
            for (maxdimlen = 0; maxdimlen < loop_ub; maxdimlen++) {
              grad_data[maxdimlen] =
                  xx_data[(xx->size[0] + xx->size[0] * maxdimlen) - 1];
            }
            loop_ub = i1 - i;
            i1 = s0->size[0];
            s0->size[0] = loop_ub;
            emxEnsureCapacity_real_T(&st, s0, i1, &lb_emlrtRTEI);
            s0_data = s0->data;
            for (i1 = 0; i1 < loop_ub; i1++) {
              s0_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
            }
            b_st.site = &s_emlrtRSI;
            S = S_fun(&b_st, c_xx, s0, b_physical->Tmax, b_physical->c);
            if (a < 1.0) {
              loop_ub = 0;
            } else {
              if (a != d) {
                emlrtIntegerCheckR2012b(a, &n_emlrtDCI, (emlrtConstCTX)sp);
              }
              if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                              &t_emlrtBCI, (emlrtConstCTX)sp);
              }
              loop_ub = (int32_T)a;
            }
            st.site = &o_emlrtRSI;
            b_st.site = &ab_emlrtRSI;
            b_told[0] = a * a;
            b_told[1] = 1.0;
            st.site = &o_emlrtRSI;
            nx = y->size[0] * y->size[1];
            b_st.site = &bb_emlrtRSI;
            assertValidSizeArg(&b_st, b_told);
            sizes_tmp_tmp = (int32_T)b_told[0];
            maxdimlen = y->size[0];
            if (y->size[1] > y->size[0]) {
              maxdimlen = y->size[1];
            }
            maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
            if ((int32_T)b_told[0] > maxdimlen) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
            }
            if (maxdimlen < 1) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
            }
            if ((int32_T)b_told[0] < 0) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
            }
            if ((int32_T)b_told[0] != nx) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
                  "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
            }
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &s_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = loop_ub + (int32_T)b_told[0];
            i1 = s0->size[0];
            s0->size[0] = i + 1;
            emxEnsureCapacity_real_T(sp, s0, i1, &mb_emlrtRTEI);
            s0_data = s0->data;
            for (i1 = 0; i1 < loop_ub; i1++) {
              s0_data[i1] = xx_data[(xx->size[0] + xx->size[0] * i1) - 1];
            }
            for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
              s0_data[i1 + loop_ub] = gradX_data[i1];
            }
            s0_data[i] = S;
          }
          if (tt->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0],
                                          &kb_emlrtBCI, (emlrtConstCTX)sp);
          }
          told = tt_data[tt->size[0] - 1];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        } else {
          exitg1 = true;
        }
      } else {
        exitg1 = true;
      }
    }
    emxFree_real_T(sp, &b_phi);
    emxFree_real_T(sp, &c_xx);
    emxFree_real_T(sp, &b_xx);
    emxFree_real_T(sp, &y);
    emxFree_real_T(sp, &r);
    emxFree_real_T(sp, &tt);
    /*  final values */
    if (b_physical->NSTATE < 1.0) {
      loop_ub = 0;
    } else {
      if (xx->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, xx->size[1], &v_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_physical->NSTATE !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE, &o_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)b_physical->NSTATE < 1) ||
          ((int32_T)b_physical->NSTATE > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                      xx->size[1], &w_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = (int32_T)b_physical->NSTATE;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &u_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = s0->size[0];
    s0->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, s0, i, &w_emlrtRTEI);
    s0_data = s0->data;
    for (i = 0; i < loop_ub; i++) {
      s0_data[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
    }
    if (b_physical->NSTATE + 1.0 > a) {
      i = 0;
      i1 = 0;
    } else {
      if (b_physical->NSTATE + 1.0 !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &p_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      xx->size[1], &y_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (a != d) {
        emlrtIntegerCheckR2012b(a, &q_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1], &ab_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = (int32_T)a;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &x_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = i1 - i;
    i1 = pf->size[0];
    pf->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, pf, i1, &x_emlrtRTEI);
    grad_data = pf->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      grad_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
    }
    emxFree_real_T(sp, &xx);
    if ((s0->size[0] != 5) && (s0->size[0] != 1)) {
      emlrtDimSizeImpxCheckR2021b(s0->size[0], 5, &f_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((pf->size[0] != 5) && (pf->size[0] != 1)) {
      emlrtDimSizeImpxCheckR2021b(pf->size[0], 5, &g_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (pf->size[0] == 5) {
      S = 0.0;
      for (i = 0; i < 5; i++) {
        S += boundary->Sigma[i] * (grad_data[i] + b_physical->g0_x[i]);
      }
    } else {
      S = d_binary_expand_op(boundary, pf, b_physical);
    }
    emxFree_real_T(sp, &pf);
    /*  objective function residual */
    if (s0->size[0] == 5) {
      for (i = 0; i < 5; i++) {
        S_x[i] = s0_data[i] - boundary->Xf[i];
      }
      obj_size[0] = 5;
      for (i = 0; i < 4; i++) {
        told = 0.0;
        for (i1 = 0; i1 < 5; i1++) {
          told += boundary->Pigreco[i1 + 5 * i] * S_x[i1];
        }
        obj_data[i] = told;
      }
      obj_data[4] = S;
    } else {
      c_binary_expand_op(obj_data, &obj_size[0], boundary, s0, S);
    }
    emxFree_real_T(sp, &s0);
    /*  compute gradient if requested */
    if (b_physical->NSTATE < 1.0) {
      loop_ub = 0;
    } else {
      if (phif->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, phif->size[0], &bb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_physical->NSTATE !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE, &r_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)b_physical->NSTATE < 1) ||
          ((int32_T)b_physical->NSTATE > phif->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                      phif->size[0], &cb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = (int32_T)b_physical->NSTATE;
    }
    if (b_physical->NSTATE + 1.0 > a) {
      i = 0;
      i1 = 0;
    } else {
      if (b_physical->NSTATE + 1.0 !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &s_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      phif->size[1], &db_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (a != d) {
        emlrtIntegerCheckR2012b(a, &t_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)a < 1) || ((int32_T)a > phif->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[1],
                                      &eb_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = (int32_T)a;
    }
    st.site = &p_emlrtRSI;
    maxdimlen = phi->size[0] * phi->size[1];
    phi->size[0] = loop_ub;
    nx = i1 - i;
    phi->size[1] = nx;
    emxEnsureCapacity_real_T(&st, phi, maxdimlen, &ab_emlrtRTEI);
    phi_data = phi->data;
    for (i1 = 0; i1 < nx; i1++) {
      for (maxdimlen = 0; maxdimlen < loop_ub; maxdimlen++) {
        phi_data[maxdimlen + phi->size[0] * i1] =
            phif_data[maxdimlen + phif->size[0] * (i + i1)];
      }
    }
    b_st.site = &kg_emlrtRSI;
    b_dynamic_size_checks(&b_st, phi, loop_ub);
    emxInit_real_T(&st, &gradX, 2, &pb_emlrtRTEI);
    b_st.site = &jg_emlrtRSI;
    c_mtimes(&b_st, boundary->Pigreco, phi, gradX);
    gradX_data = gradX->data;
    if (b_physical->NSTATE + 1.0 > a) {
      i = 0;
      i1 = 0;
      maxdimlen = 0;
      sizes_tmp_tmp = 0;
    } else {
      told = (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0);
      if (b_physical->NSTATE + 1.0 != told) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &u_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      phif->size[0], &fb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (a != d) {
        emlrtIntegerCheckR2012b(a, &v_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)a < 1) || ((int32_T)a > phif->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[0],
                                      &gb_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = (int32_T)a;
      if (b_physical->NSTATE + 1.0 != told) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &w_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      phif->size[1], &hb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      maxdimlen = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (a != d) {
        emlrtIntegerCheckR2012b(a, &x_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)a < 1) || ((int32_T)a > phif->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[1],
                                      &ib_emlrtBCI, (emlrtConstCTX)sp);
      }
      sizes_tmp_tmp = (int32_T)a;
    }
    st.site = &q_emlrtRSI;
    loop_ub = i1 - i;
    i2 = phi->size[0] * phi->size[1];
    phi->size[0] = loop_ub;
    nx = sizes_tmp_tmp - maxdimlen;
    phi->size[1] = nx;
    emxEnsureCapacity_real_T(&st, phi, i2, &bb_emlrtRTEI);
    phi_data = phi->data;
    for (sizes_tmp_tmp = 0; sizes_tmp_tmp < nx; sizes_tmp_tmp++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        phi_data[i2 + phi->size[0] * sizes_tmp_tmp] =
            phif_data[(i + i2) + phif->size[0] * (maxdimlen + sizes_tmp_tmp)];
      }
    }
    emxFree_real_T(&st, &phif);
    b_st.site = &kg_emlrtRSI;
    b_dynamic_size_checks(&b_st, phi, i1 - i);
    b_st.site = &jg_emlrtRSI;
    d_mtimes(&b_st, boundary->Sigma, phi, gradP);
    phi_data = gradP->data;
    emxFree_real_T(&st, &phi);
    st.site = &r_emlrtRSI;
    b_st.site = &mi_emlrtRSI;
    if (gradX->size[1] != 0) {
      nx = gradX->size[1];
    } else if (gradP->size[1] != 0) {
      nx = gradP->size[1];
    } else {
      nx = 0;
    }
    c_st.site = &ni_emlrtRSI;
    if ((gradX->size[1] != nx) && (gradX->size[1] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((gradP->size[1] != nx) && (gradP->size[1] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (nx == 0);
    if (empty_non_axis_sizes || (gradX->size[1] != 0)) {
      input_sizes_idx_0 = 4;
    } else {
      input_sizes_idx_0 = 0;
    }
    if (empty_non_axis_sizes || (gradP->size[1] != 0)) {
      sizes[0] = 1;
    } else {
      sizes[0] = 0;
    }
    maxdimlen = input_sizes_idx_0;
    sizes_tmp_tmp = sizes[0];
    i = grad->size[0] * grad->size[1];
    grad->size[0] = input_sizes_idx_0 + sizes[0];
    grad->size[1] = nx;
    emxEnsureCapacity_real_T(&b_st, grad, i, &eb_emlrtRTEI);
    grad_data = grad->data;
    for (i = 0; i < nx; i++) {
      for (i1 = 0; i1 < maxdimlen; i1++) {
        grad_data[i1 + grad->size[0] * i] =
            gradX_data[i1 + input_sizes_idx_0 * i];
      }
    }
    emxFree_real_T(&b_st, &gradX);
    for (i = 0; i < nx; i++) {
      for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
        grad_data[input_sizes_idx_0 + grad->size[0] * i] =
            phi_data[sizes_tmp_tmp * i];
      }
    }
    emxFree_real_T(&b_st, &gradP);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfunSTM_S_fuel_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                               real_T physical_c, real_T physical_NSTATE,
                               real_T physical_shoot, real_T physical_EPS,
                               real_T SIGN, const emxArray_real_T *s,
                               emxArray_real_T *varargout_1)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *dphi;
  emxArray_real_T *p;
  emxArray_real_T *pd;
  emxArray_real_T *phi;
  emxArray_real_T *x;
  real_T a[100];
  real_T H_pp[25];
  real_T H_xp[25];
  real_T H_xx[25];
  real_T S_p[5];
  real_T S_x[5];
  real_T b_dv[2];
  const real_T *s_data;
  real_T alpha1;
  real_T beta1;
  real_T *H_p_data;
  real_T *H_x_data;
  real_T *dphi_data;
  real_T *pd_data;
  real_T *phi_data;
  real_T *x_data;
  int32_T b_physical_NSTATE[2];
  int32_T i;
  int32_T i1;
  int32_T maxdimlen;
  int32_T n;
  int32_T physical_NSTATE_tmp;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T out;
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
  s_data = s->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &bc_emlrtRSI;
  /*  computation of equations of motion, state transtion matrix derivatives */
  /*  and switching function derivative */
  /*  3 input case:  */
  /*  inp1: states and costates vector [NSTATEx1], inp2: structure for physical
   * variables */
  /*  and functions, inp3: switching function */
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &tb_emlrtBCI, &st);
    }
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &cb_emlrtDCI, &st);
    }
    if (((int32_T)physical_NSTATE < 1) ||
        ((int32_T)physical_NSTATE > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, s->size[0],
                                    &sb_emlrtBCI, &st);
    }
    maxdimlen = (int32_T)physical_NSTATE;
  }
  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = maxdimlen;
  b_st.site = &cc_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x, 1, &kc_emlrtRTEI);
  i = x->size[0];
  x->size[0] = maxdimlen;
  emxEnsureCapacity_real_T(&st, x, i, &kc_emlrtRTEI);
  x_data = x->data;
  for (i = 0; i < maxdimlen; i++) {
    x_data[i] = s_data[i];
  }
  alpha1 = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > alpha1) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &bb_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1,
                                    s->size[0], &rb_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
      emlrtIntegerCheckR2012b(alpha1, &ab_emlrtDCI, &st);
    }
    if (((int32_T)alpha1 < 1) || ((int32_T)alpha1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)alpha1, 1, s->size[0],
                                    &qb_emlrtBCI, &st);
    }
    i1 = (int32_T)alpha1;
  }
  b_physical_NSTATE[0] = 1;
  physical_NSTATE_tmp = i1 - i;
  b_physical_NSTATE[1] = physical_NSTATE_tmp;
  b_st.site = &dc_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &p, 1, &lc_emlrtRTEI);
  i1 = p->size[0];
  p->size[0] = physical_NSTATE_tmp;
  emxEnsureCapacity_real_T(&st, p, i1, &lc_emlrtRTEI);
  x_data = p->data;
  for (i1 = 0; i1 < physical_NSTATE_tmp; i1++) {
    x_data[i1] = s_data[i + i1];
  }
  alpha1 = 2.0 * physical_NSTATE + 1.0;
  if (alpha1 > (real_T)s->size[0] - 1.0) {
    i = 0;
    i1 = 0;
  } else {
    if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
      emlrtIntegerCheckR2012b(alpha1, &y_emlrtDCI, &st);
    }
    if (((int32_T)alpha1 < 1) || ((int32_T)alpha1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)alpha1, 1, s->size[0],
                                    &pb_emlrtBCI, &st);
    }
    i = (int32_T)alpha1 - 1;
    if ((s->size[0] - 1 < 1) || (s->size[0] - 1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b(s->size[0] - 1, 1, s->size[0], &ob_emlrtBCI,
                                    &st);
    }
    i1 = s->size[0] - 1;
  }
  b_physical_NSTATE[0] = 1;
  physical_NSTATE_tmp = i1 - i;
  b_physical_NSTATE[1] = physical_NSTATE_tmp;
  b_st.site = &ec_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  b_dv[0] = 2.0 * physical_NSTATE;
  b_dv[1] = 2.0 * physical_NSTATE;
  b_st.site = &ec_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = physical_NSTATE_tmp;
  if (physical_NSTATE_tmp < 1) {
    n = 1;
  }
  maxdimlen = muIntScalarMax_sint32(physical_NSTATE_tmp, n);
  if ((int32_T)b_dv[0] > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)b_dv[1] > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)b_dv[0] >= 0);
  if ((!out) || ((int32_T)b_dv[1] < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  maxdimlen = (int32_T)b_dv[0] * (int32_T)b_dv[1];
  if (maxdimlen != physical_NSTATE_tmp) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  emxInit_real_T(&st, &phi, 2, &mc_emlrtRTEI);
  i1 = phi->size[0] * phi->size[1];
  phi->size[0] = (int32_T)b_dv[0];
  phi->size[1] = (int32_T)b_dv[1];
  emxEnsureCapacity_real_T(&st, phi, i1, &mc_emlrtRTEI);
  phi_data = phi->data;
  for (i1 = 0; i1 < maxdimlen; i1++) {
    phi_data[i1] = s_data[i + i1];
  }
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &eb_emlrtDCI, &st);
  }
  alpha1 = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != alpha1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &db_emlrtDCI, &st);
  }
  i = varargout_1->size[0];
  varargout_1->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &nc_emlrtRTEI);
  x_data = varargout_1->data;
  if (physical_NSTATE != alpha1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &db_emlrtDCI, &st);
  }
  maxdimlen = (int32_T)physical_NSTATE;
  for (i = 0; i < maxdimlen; i++) {
    x_data[i] = 0.0;
  }
  emxInit_real_T(&st, &pd, 1, &rc_emlrtRTEI);
  i = pd->size[0];
  pd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd, i, &oc_emlrtRTEI);
  pd_data = pd->data;
  maxdimlen = (int32_T)physical_NSTATE;
  for (i = 0; i < maxdimlen; i++) {
    pd_data[i] = 0.0;
  }
  emxInit_real_T(&st, &H_x, 1, &nc_emlrtRTEI);
  emxInit_real_T(&st, &H_p, 1, &nc_emlrtRTEI);
  b_st.site = &fc_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x, p, SIGN, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  b_st.site = &gc_emlrtRSI;
  HamiltonianSecondDerivatives(&b_st, x, p, SIGN, physical_Tmax, physical_c,
                               physical_shoot, physical_EPS, H_xx, H_xp, H_pp);
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
    i = 0;
  } else {
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5,
                                    &nb_emlrtBCI, &st);
    }
    maxdimlen = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &lb_emlrtBCI,
                                    &st);
    }
    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  emlrtSubAssignSizeCheckR2012b(&i, 1, &maxdimlen, 1, &h_emlrtECI, &st);
  for (i = 0; i < maxdimlen; i++) {
    x_data[i] = H_p_data[i];
  }
  /*  xd: states derivatives  [NSTATEx1] */
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
    i = 0;
  } else {
    maxdimlen = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &mb_emlrtBCI,
                                    &st);
    }
    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  for (i1 = 0; i1 < maxdimlen; i1++) {
    S_x[i1] = -H_x_data[i1];
  }
  emlrtSubAssignSizeCheckR2012b(&i, 1, &maxdimlen, 1, &i_emlrtECI, &st);
  for (i = 0; i < maxdimlen; i++) {
    pd_data[i] = S_x[i];
  }
  /*  pd: costates derivatives  [NSTATEx1] */
  b_st.site = &hc_emlrtRSI;
  for (i = 0; i < 5; i++) {
    for (i1 = 0; i1 < 5; i1++) {
      maxdimlen = i1 + 10 * i;
      a[maxdimlen] = H_xp[i + 5 * i1];
      n = i1 + 5 * i;
      physical_NSTATE_tmp = i1 + 10 * (i + 5);
      a[physical_NSTATE_tmp] = H_pp[n];
      a[maxdimlen + 5] = -H_xx[n];
      a[physical_NSTATE_tmp + 5] = -H_xp[n];
    }
  }
  c_st.site = &kg_emlrtRSI;
  if ((int32_T)b_dv[0] != 10) {
    if ((phi->size[0] == 1) && (phi->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &o_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &p_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  c_st.site = &jg_emlrtRSI;
  emxInit_real_T(&c_st, &dphi, 2, &pc_emlrtRTEI);
  if ((phi->size[0] == 0) || (phi->size[1] == 0)) {
    i = dphi->size[0] * dphi->size[1];
    dphi->size[0] = 10;
    dphi->size[1] = phi->size[1];
    emxEnsureCapacity_real_T(&c_st, dphi, i, &pc_emlrtRTEI);
    dphi_data = dphi->data;
    maxdimlen = 10 * phi->size[1];
    for (i = 0; i < maxdimlen; i++) {
      dphi_data[i] = 0.0;
    }
  } else {
    d_st.site = &lg_emlrtRSI;
    e_st.site = &mg_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)10;
    n_t = (ptrdiff_t)phi->size[1];
    k_t = (ptrdiff_t)10;
    lda_t = (ptrdiff_t)10;
    ldb_t = (ptrdiff_t)phi->size[0];
    ldc_t = (ptrdiff_t)10;
    i = dphi->size[0] * dphi->size[1];
    dphi->size[0] = 10;
    dphi->size[1] = phi->size[1];
    emxEnsureCapacity_real_T(&e_st, dphi, i, &qc_emlrtRTEI);
    dphi_data = dphi->data;
    emlrt_checkEscapedGlobals();
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &a[0], &lda_t,
          &phi_data[0], &ldb_t, &beta1, &dphi_data[0], &ldc_t);
  }
  emxFree_real_T(&c_st, &phi);
  /*  state transtion matrix derivatives [2NSTATEx2NSTATE] */
  b_st.site = &ic_emlrtRSI;
  maxdimlen = (int32_T)physical_NSTATE << 1;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &u_emlrtRSI;
  b_dv[0] = maxdimlen * maxdimlen;
  b_dv[1] = 1.0;
  b_st.site = &ic_emlrtRSI;
  maxdimlen = 10 * dphi->size[1];
  c_st.site = &bb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = 10;
  if (dphi->size[1] > 10) {
    n = dphi->size[1];
  }
  if ((int8_T)b_dv[0] > muIntScalarMax_sint32(maxdimlen, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int8_T)b_dv[0] != maxdimlen) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  /*  converstion of STM derivatives in vector */
  b_st.site = &jc_emlrtRSI;
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
  c_st.site = &s_emlrtRSI;
  alpha1 = S_fun(&c_st, x, p, physical_Tmax, physical_c);
  c_st.site = &ng_emlrtRSI;
  S_x_fun(&c_st, x, p, physical_Tmax, S_x);
  c_st.site = &og_emlrtRSI;
  S_p_fun(&c_st, x, p, physical_Tmax, physical_c, S_p);
  c_st.site = &pg_emlrtRSI;
  HamiltonianFirstDerivatives(&c_st, x, p, alpha1, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  emxFree_real_T(&b_st, &p);
  emxFree_real_T(&b_st, &x);
  /*  Switching function derivative */
  i = varargout_1->size[0];
  i1 = varargout_1->size[0];
  varargout_1->size[0] =
      ((varargout_1->size[0] + pd->size[0]) + (int32_T)b_dv[0]) + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i1, &nc_emlrtRTEI);
  x_data = varargout_1->data;
  alpha1 = 0.0;
  beta1 = 0.0;
  for (i1 = 0; i1 < 5; i1++) {
    alpha1 += S_x[i1] * H_p_data[i1];
    beta1 += S_p[i1] * H_x_data[i1];
  }
  emxFree_real_T(&st, &H_p);
  emxFree_real_T(&st, &H_x);
  maxdimlen = pd->size[0];
  for (i1 = 0; i1 < maxdimlen; i1++) {
    x_data[i + i1] = pd_data[i1];
  }
  maxdimlen = (int32_T)b_dv[0];
  for (i1 = 0; i1 < maxdimlen; i1++) {
    x_data[(i + i1) + pd->size[0]] = dphi_data[i1];
  }
  emxFree_real_T(&st, &dphi);
  x_data[(i + pd->size[0]) + (int32_T)b_dv[0]] = alpha1 - beta1;
  emxFree_real_T(&st, &pd);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (objfunSTM_S_fuel.c) */
