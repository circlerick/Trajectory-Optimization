/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfunSTM_S_energy.c
 *
 * Code generation for function 'objfunSTM_S_energy'
 *
 */

/* Include files */
#include "objfunSTM_S_energy.h"
#include "HamiltonianFirstDerivatives.h"
#include "HamiltonianSecondDerivatives.h"
#include "S_p_fun.h"
#include "S_x_fun.h"
#include "Switching_Function.h"
#include "assertValidSizeArg.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "norm.h"
#include "objfunSTM_S_energy_data.h"
#include "objfunSTM_S_energy_emxutil.h"
#include "objfunSTM_S_energy_types.h"
#include "ode89.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    36,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo b_emlrtRSI = {
    49,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo c_emlrtRSI = {
    50,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo d_emlrtRSI = {
    54,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo e_emlrtRSI = {
    57,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo f_emlrtRSI = {
    74,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo g_emlrtRSI = {
    90,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo h_emlrtRSI = {
    91,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo i_emlrtRSI = {
    92,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo r_emlrtRSI = {
    40,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    57,                                        /* lineNo */
    "@(t,s)derivativesSTM_S(s,physical,SIGN)", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

static emlrtRSInfo sb_emlrtRSI = {
    11,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    12,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    13,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    27,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    28,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo xb_emlrtRSI = {
    36,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI = {
    37,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    38,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo bg_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

static emlrtRSInfo eg_emlrtRSI = {
    22,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

static emlrtRSInfo fg_emlrtRSI = {
    23,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

static emlrtRSInfo gg_emlrtRSI = {
    24,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

static emlrtMCInfo emlrtMCI = {
    20,                                                             /* lineNo */
    5,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    54,                   /* lineNo */
    40,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    54,                   /* lineNo */
    40,                   /* colNo */
    "s0",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    1,                                                              /* nDims */
    54,                                                             /* lineNo */
    28,                                                             /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtDCInfo b_emlrtDCI = {
    54,                   /* lineNo */
    85,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    54,                   /* lineNo */
    85,                   /* colNo */
    "s0",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    1,                                                              /* nDims */
    54,                                                             /* lineNo */
    73,                                                             /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    60,                   /* lineNo */
    17,                   /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    64,                   /* lineNo */
    24,                   /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    64,                   /* lineNo */
    30,                   /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    74,                   /* lineNo */
    19,                   /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    74,                   /* lineNo */
    23,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    74,                   /* lineNo */
    23,                   /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    74,                   /* lineNo */
    34,                   /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    81,                   /* lineNo */
    9,                    /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    81,                   /* lineNo */
    15,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    81,                   /* lineNo */
    15,                   /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    82,                   /* lineNo */
    9,                    /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    82,                   /* lineNo */
    13,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    82,                   /* lineNo */
    13,                   /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    82,                   /* lineNo */
    22,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    82,                   /* lineNo */
    22,                   /* colNo */
    "xx",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    1,                                                              /* nDims */
    83,                                                             /* lineNo */
    20,                                                             /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    1,                                                              /* nDims */
    84,                                                             /* lineNo */
    18,                                                             /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    90,                   /* lineNo */
    27,                   /* colNo */
    "phif",               /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    90,                   /* lineNo */
    29,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    90,                   /* lineNo */
    29,                   /* colNo */
    "phif",               /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    90,                   /* lineNo */
    37,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    90,                   /* lineNo */
    37,                   /* colNo */
    "phif",               /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    90,                   /* lineNo */
    47,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    90,                   /* lineNo */
    47,                   /* colNo */
    "phif",               /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    91,                   /* lineNo */
    26,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    91,                   /* lineNo */
    26,                   /* colNo */
    "phif",               /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    91,                   /* lineNo */
    36,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    91,                   /* lineNo */
    36,                   /* colNo */
    "phif",               /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    91,                   /* lineNo */
    46,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    91,                   /* lineNo */
    46,                   /* colNo */
    "phif",               /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    91,                   /* lineNo */
    56,                   /* colNo */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    91,                   /* lineNo */
    56,                   /* colNo */
    "phif",               /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
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

static emlrtBCInfo v_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    59,                   /* lineNo */
    11,                   /* colNo */
    "tt",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                   /* iFirst */
    -1,                   /* iLast */
    71,                   /* lineNo */
    15,                   /* colNo */
    "tt",                 /* aName */
    "objfunSTM_S_energy", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    11,                                                 /* lineNo */
    10,                                                 /* colNo */
    "in1",                                              /* aName */
    "S_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    10,                                                 /* lineNo */
    10,                                                 /* colNo */
    "in2",                                              /* aName */
    "S_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    9,                                                  /* lineNo */
    10,                                                 /* colNo */
    "in2",                                              /* aName */
    "S_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    8,                                                  /* lineNo */
    10,                                                 /* colNo */
    "in2",                                              /* aName */
    "S_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                                                           /* nDims */
    34,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    9,                                                             /* colNo */
    "xd",                                                          /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,                                                           /* nDims */
    35,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    35,                                                            /* lineNo */
    9,                                                             /* colNo */
    "pd",                                                          /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    25,                                                            /* colNo */
    "H_p",                                                         /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    13,                                                            /* lineNo */
    34,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    13,                                                            /* lineNo */
    23,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    13,                                                            /* lineNo */
    23,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    12,                                                            /* lineNo */
    20,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    12,                                                            /* lineNo */
    20,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    12,                                                            /* lineNo */
    11,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    12,                                                            /* lineNo */
    11,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    11,                                                            /* lineNo */
    13,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    11,                                                            /* lineNo */
    13,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    11,                                                            /* lineNo */
    11,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    57,                                        /* lineNo */
    21,                                        /* colNo */
    "@(t,s)derivativesSTM_S(s,physical,SIGN)", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    57,                                        /* lineNo */
    21,                                        /* colNo */
    "@(t,s)derivativesSTM_S(s,physical,SIGN)", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m", /* pName */
    4 /* checkKind */
};

static emlrtRTEInfo t_emlrtRTEI = {
    17,                                                             /* lineNo */
    1,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    26,                                                             /* lineNo */
    1,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    51,                                                             /* lineNo */
    1,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    81,                                                             /* lineNo */
    1,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    60,                                                             /* lineNo */
    9,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    82,                                                             /* lineNo */
    1,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    74,                                                             /* lineNo */
    16,                                                             /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    90,                                                             /* lineNo */
    22,                                                             /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    91,                                                             /* lineNo */
    20,                                                             /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    92,                                                             /* lineNo */
    5,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    49,                                                             /* lineNo */
    1,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    90,                                                             /* lineNo */
    5,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    91,                                                             /* lineNo */
    5,                                                              /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    11,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    12,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = {
    57,                                                             /* lineNo */
    21,                                                             /* colNo */
    "objfunSTM_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    26,                                                           /* lineNo */
    20,                                                           /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    13,                                                           /* lineNo */
    10,                                                           /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    36,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    3,                                                            /* lineNo */
    14,                                                           /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRSInfo fi_emlrtRSI = {
    20,                   /* lineNo */
    "objfunSTM_S_energy", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_energy.m" /* pathName
                                                                     */
};

/* Function Declarations */
static void binary_expand_op(real_T in1_data[], int32_T *in1_size,
                             const struct1_T *in2, const emxArray_real_T *in3,
                             real_T in4);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

/* Function Definitions */
static void binary_expand_op(real_T in1_data[], int32_T *in1_size,
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

void emlrt_checkEscapedGlobals(void)
{
  physical_dirty |= physical_dirty >> 1U;
}

void objfunSTM_S_energy(const emlrtStack *sp, const real_T lam0[5],
                        const real_T X0[5], const struct0_T *b_physical,
                        const struct1_T *boundary, real_T obj_data[],
                        int32_T obj_size[1], emxArray_real_T *grad)
{
  static const int32_T iv[2] = {1, 52};
  static const char_T u[52] = {
      'E', 'r', 'r', 'o', 'r', ':', ' ', 'E', 'P', 'S', ' ', 'm', 'u',
      's', 't', ' ', 'b', 'e', ' ', '>', ' ', '0', ' ', 'i', 'n', ' ',
      't', 'h', 'e', ' ', 'm', 'i', 'n', 'i', 'm', 'u', 'm', ' ', 'e',
      'n', 'e', 'r', 'g', 'y', ' ', 'p', 'r', 'o', 'b', 'l', 'e', 'm'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *gradP;
  emxArray_real_T *gradX;
  emxArray_real_T *pf;
  emxArray_real_T *phi;
  emxArray_real_T *s0;
  emxArray_real_T *xx;
  const mxArray *m;
  const mxArray *y;
  real_T *gradX_data;
  real_T *grad_data;
  real_T *s0_data;
  real_T *xx_data;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T type;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  compute the objective function and its gradient for a minimum energy */
  /*  problem */
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
  if (b_physical->EPS == 0.0) {
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 52, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &fi_emlrtRSI;
    disp(&st, y, &emlrtMCI);
  } else {
    real_T b_told[2];
    real_T S;
    real_T SIGN;
    real_T Tfin;
    real_T told;
    int32_T sizes[2];
    int32_T nx;
    int32_T sizes_tmp_tmp;
    int8_T input_sizes_idx_0;
    boolean_T empty_non_axis_sizes;
    boolean_T exitg1;
    emxInit_real_T(sp, &xx, 2, &u_emlrtRTEI);
    i = xx->size[0] * xx->size[1];
    xx->size[0] = 1;
    xx->size[1] = 1;
    emxEnsureCapacity_real_T(sp, xx, i, &u_emlrtRTEI);
    xx_data = xx->data;
    xx_data[0] = 0.0;
    told = boundary->T0;
    Tfin = boundary->Tfin;
    st.site = &emlrtRSI;
    S = Switching_Function(&st, X0, lam0, b_physical->Tmax, b_physical->c);
    /*  compute initial switch */
    if ((S < b_physical->EPS * b_physical->Tmax / b_physical->c) &&
        (S > -b_physical->EPS * b_physical->Tmax / b_physical->c)) {
      type = 0;
    } else if (muDoubleScalarSign(S) != b_physical->shoot) {
      type = -1;
    } else {
      type = 1;
    }
    SIGN = b_physical->shoot * (real_T)type;
    emxInit_real_T(sp, &phi, 2, &eb_emlrtRTEI);
    st.site = &b_emlrtRSI;
    eye(&st, 2.0 * b_physical->NSTATE, phi);
    grad_data = phi->data;
    st.site = &c_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    b_told[0] = 4.0 * (b_physical->NSTATE * b_physical->NSTATE);
    b_told[1] = 1.0;
    st.site = &c_emlrtRSI;
    nx = phi->size[0] * phi->size[1];
    b_st.site = &r_emlrtRSI;
    assertValidSizeArg(&b_st, b_told);
    sizes_tmp_tmp = (int32_T)b_told[0];
    type = phi->size[0];
    if (phi->size[1] > phi->size[0]) {
      type = phi->size[1];
    }
    type = muIntScalarMax_sint32(nx, type);
    if ((int32_T)b_told[0] > type) {
      emlrtErrorWithMessageIdR2018a(
          &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    if (type < 1) {
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
      s0_data[i + 10] = grad_data[i];
    }
    s0_data[(int32_T)b_told[0] + 10] = S;
    /*  initial state, costate, STM matrix and switching function */
    /*  integration loop */
    emxInit_real_T(sp, &pf, 1, &y_emlrtRTEI);
    exitg1 = false;
    while ((!exitg1) && (told != Tfin)) {
      S = muDoubleScalarRound(b_physical->NSTATE / 2.0);
      if (S - 1.0 < 1.0) {
        i = 0;
      } else {
        if (S - 1.0 != (int32_T)(S - 1.0)) {
          emlrtIntegerCheckR2012b(S - 1.0, &emlrtDCI, (emlrtConstCTX)sp);
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
            emlrtIntegerCheckR2012b(S - 1.0, &b_emlrtDCI, (emlrtConstCTX)sp);
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
                b_physical->shoot, b_physical->EPS, SIGN, b_told, s0, pf, xx);
          xx_data = xx->data;
          grad_data = pf->data;
          /*  update switch type and initial state of ode */
          if (pf->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(pf->size[0], 1, pf->size[0],
                                          &v_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (grad_data[pf->size[0] - 1] != Tfin) {
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &c_emlrtBCI, (emlrtConstCTX)sp);
            }
            i = s0->size[0];
            s0->size[0] = xx->size[1];
            emxEnsureCapacity_real_T(sp, s0, i, &x_emlrtRTEI);
            s0_data = s0->data;
            type = xx->size[1];
            for (i = 0; i < type; i++) {
              s0_data[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
            }
            if (SIGN != 0.0) {
              SIGN = 0.0;
            } else {
              if ((xx->size[0] - 1 < 1) || (xx->size[0] - 1 > xx->size[0])) {
                emlrtDynamicBoundsCheckR2012b(xx->size[0] - 1, 1, xx->size[0],
                                              &d_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (xx->size[1] < 1) {
                emlrtDynamicBoundsCheckR2012b(xx->size[1], 1, xx->size[1],
                                              &e_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (muDoubleScalarSign(
                      xx_data[(xx->size[0] + xx->size[0] * (xx->size[1] - 1)) -
                              2]) == b_physical->shoot) {
                SIGN = b_physical->shoot;
              } else {
                SIGN = -b_physical->shoot;
              }
            }
          }
          if (pf->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(pf->size[0], 1, pf->size[0],
                                          &w_emlrtBCI, (emlrtConstCTX)sp);
          }
          told = grad_data[pf->size[0] - 1];
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
    /*  extrapolate final state transition matrix */
    told = 2.0 * b_physical->NSTATE;
    if (told + 1.0 > (real_T)xx->size[1] - 1.0) {
      i = 0;
      i1 = 0;
    } else {
      if (told + 1.0 != (int32_T)muDoubleScalarFloor(told + 1.0)) {
        emlrtIntegerCheckR2012b(told + 1.0, &c_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)(told + 1.0) < 1) ||
          ((int32_T)(told + 1.0) > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(told + 1.0), 1, xx->size[1],
                                      &g_emlrtBCI, (emlrtConstCTX)sp);
      }
      i = (int32_T)(told + 1.0) - 1;
      if ((xx->size[1] - 1 < 1) || (xx->size[1] - 1 > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b(xx->size[1] - 1, 1, xx->size[1],
                                      &h_emlrtBCI, (emlrtConstCTX)sp);
      }
      i1 = xx->size[1] - 1;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &f_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    b_told[0] = told;
    b_told[1] = told;
    st.site = &f_emlrtRSI;
    sizes_tmp_tmp = i1 - i;
    b_st.site = &r_emlrtRSI;
    assertValidSizeArg(&b_st, b_told);
    type = 1;
    if (sizes_tmp_tmp > 1) {
      type = sizes_tmp_tmp;
    }
    if ((int32_T)told > muIntScalarMax_sint32(sizes_tmp_tmp, type)) {
      emlrtErrorWithMessageIdR2018a(
          &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
          "Coder:toolbox:reshape_emptyReshapeLimit", 0);
    }
    empty_non_axis_sizes = ((int32_T)told >= 0);
    if ((!empty_non_axis_sizes) || ((int32_T)told < 0)) {
      empty_non_axis_sizes = false;
    }
    if (!empty_non_axis_sizes) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
                                    "MATLAB:checkDimCommon:nonnegativeSize",
                                    "MATLAB:checkDimCommon:nonnegativeSize", 0);
    }
    if ((int32_T)told * (int32_T)told != sizes_tmp_tmp) {
      emlrtErrorWithMessageIdR2018a(
          &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
          "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }
    /*  final values */
    if (b_physical->NSTATE < 1.0) {
      type = 0;
    } else {
      if (b_physical->NSTATE !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE, &d_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)b_physical->NSTATE < 1) ||
          ((int32_T)b_physical->NSTATE > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                      xx->size[1], &j_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      type = (int32_T)b_physical->NSTATE;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &i_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i1 = s0->size[0];
    s0->size[0] = type;
    emxEnsureCapacity_real_T(sp, s0, i1, &w_emlrtRTEI);
    s0_data = s0->data;
    for (i1 = 0; i1 < type; i1++) {
      s0_data[i1] = xx_data[(xx->size[0] + xx->size[0] * i1) - 1];
    }
    if (b_physical->NSTATE + 1.0 > told) {
      i1 = 0;
      i2 = 0;
    } else {
      if (b_physical->NSTATE + 1.0 !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &e_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      xx->size[1], &l_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (told != (int32_T)muDoubleScalarFloor(told)) {
        emlrtIntegerCheckR2012b(told, &f_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)told < 1) || ((int32_T)told > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)told, 1, xx->size[1],
                                      &m_emlrtBCI, (emlrtConstCTX)sp);
      }
      i2 = (int32_T)told;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &k_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    type = i2 - i1;
    i2 = pf->size[0];
    pf->size[0] = type;
    emxEnsureCapacity_real_T(sp, pf, i2, &y_emlrtRTEI);
    grad_data = pf->data;
    for (i2 = 0; i2 < type; i2++) {
      grad_data[i2] = xx_data[(xx->size[0] + xx->size[0] * (i1 + i2)) - 1];
    }
    if ((s0->size[0] != 5) && (s0->size[0] != 1)) {
      emlrtDimSizeImpxCheckR2021b(s0->size[0], 5, &c_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if ((pf->size[0] != 5) && (pf->size[0] != 1)) {
      emlrtDimSizeImpxCheckR2021b(pf->size[0], 5, &d_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (pf->size[0] == 5) {
      S = 0.0;
      for (i1 = 0; i1 < 5; i1++) {
        S += boundary->Sigma[i1] * (grad_data[i1] + b_physical->g0_x[i1]);
      }
    } else {
      S = b_binary_expand_op(boundary, pf, b_physical);
    }
    emxFree_real_T(sp, &pf);
    /*  objective function residual */
    if (s0->size[0] == 5) {
      real_T b_s0[5];
      for (i1 = 0; i1 < 5; i1++) {
        b_s0[i1] = s0_data[i1] - boundary->Xf[i1];
      }
      obj_size[0] = 5;
      for (i1 = 0; i1 < 4; i1++) {
        Tfin = 0.0;
        for (i2 = 0; i2 < 5; i2++) {
          Tfin += boundary->Pigreco[i2 + 5 * i1] * b_s0[i2];
        }
        obj_data[i1] = Tfin;
      }
      obj_data[4] = S;
    } else {
      binary_expand_op(obj_data, &obj_size[0], boundary, s0, S);
    }
    emxFree_real_T(sp, &s0);
    /*  compute gradient if requested */
    if (b_physical->NSTATE < 1.0) {
      type = 0;
    } else {
      if ((int32_T)told < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)told, &n_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_physical->NSTATE !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE, &g_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)b_physical->NSTATE < 1) ||
          ((int32_T)b_physical->NSTATE > (int32_T)told)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                      (int32_T)told, &o_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      type = (int32_T)b_physical->NSTATE;
    }
    if (b_physical->NSTATE + 1.0 > told) {
      i1 = 0;
      i2 = 0;
    } else {
      if (b_physical->NSTATE + 1.0 !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &h_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > (int32_T)told)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      (int32_T)told, &p_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (told != (int32_T)muDoubleScalarFloor(told)) {
        emlrtIntegerCheckR2012b(told, &i_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((int32_T)told < 1) {
        emlrtDynamicBoundsCheckR2012b((int32_T)told, 1, (int32_T)told,
                                      &q_emlrtBCI, (emlrtConstCTX)sp);
      }
      i2 = (int32_T)told;
    }
    st.site = &g_emlrtRSI;
    emxInit_real_T(&st, &gradP, 2, &gb_emlrtRTEI);
    i3 = gradP->size[0] * gradP->size[1];
    gradP->size[0] = 1;
    gradP->size[1] = sizes_tmp_tmp;
    emxEnsureCapacity_real_T(&st, gradP, i3, &ab_emlrtRTEI);
    s0_data = gradP->data;
    for (i3 = 0; i3 < sizes_tmp_tmp; i3++) {
      s0_data[i3] = xx_data[(xx->size[0] + xx->size[0] * (i + i3)) - 1];
    }
    i3 = phi->size[0] * phi->size[1];
    phi->size[0] = type;
    nx = i2 - i1;
    phi->size[1] = nx;
    emxEnsureCapacity_real_T(&st, phi, i3, &bb_emlrtRTEI);
    grad_data = phi->data;
    for (i2 = 0; i2 < nx; i2++) {
      for (i3 = 0; i3 < type; i3++) {
        grad_data[i3 + phi->size[0] * i2] =
            s0_data[i3 + (int32_T)told * (i1 + i2)];
      }
    }
    b_st.site = &bg_emlrtRSI;
    dynamic_size_checks(&b_st, phi, type);
    emxInit_real_T(&st, &gradX, 2, &fb_emlrtRTEI);
    b_st.site = &ag_emlrtRSI;
    b_mtimes(&b_st, boundary->Pigreco, phi, gradX);
    gradX_data = gradX->data;
    if (b_physical->NSTATE + 1.0 > told) {
      i1 = 0;
      i2 = 0;
      i3 = 0;
      i4 = 0;
    } else {
      Tfin = (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0);
      if (b_physical->NSTATE + 1.0 != Tfin) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &j_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > (int32_T)told)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      (int32_T)told, &r_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      S = (int32_T)muDoubleScalarFloor(told);
      if (told != S) {
        emlrtIntegerCheckR2012b(told, &k_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((int32_T)told < 1) {
        emlrtDynamicBoundsCheckR2012b((int32_T)told, 1, (int32_T)told,
                                      &s_emlrtBCI, (emlrtConstCTX)sp);
      }
      i2 = (int32_T)told;
      if (b_physical->NSTATE + 1.0 != Tfin) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &l_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > (int32_T)told)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      (int32_T)told, &t_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i3 = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (told != S) {
        emlrtIntegerCheckR2012b(told, &m_emlrtDCI, (emlrtConstCTX)sp);
      }
      if ((int32_T)told < 1) {
        emlrtDynamicBoundsCheckR2012b((int32_T)told, 1, (int32_T)told,
                                      &u_emlrtBCI, (emlrtConstCTX)sp);
      }
      i4 = (int32_T)told;
    }
    st.site = &h_emlrtRSI;
    type = gradP->size[0] * gradP->size[1];
    gradP->size[0] = 1;
    gradP->size[1] = sizes_tmp_tmp;
    emxEnsureCapacity_real_T(&st, gradP, type, &ab_emlrtRTEI);
    s0_data = gradP->data;
    for (type = 0; type < sizes_tmp_tmp; type++) {
      s0_data[type] = xx_data[(xx->size[0] + xx->size[0] * (i + type)) - 1];
    }
    emxFree_real_T(&st, &xx);
    type = i2 - i1;
    i = phi->size[0] * phi->size[1];
    phi->size[0] = type;
    nx = i4 - i3;
    phi->size[1] = nx;
    emxEnsureCapacity_real_T(&st, phi, i, &cb_emlrtRTEI);
    grad_data = phi->data;
    for (i = 0; i < nx; i++) {
      for (i4 = 0; i4 < type; i4++) {
        grad_data[i4 + phi->size[0] * i] =
            s0_data[(i1 + i4) + (int32_T)told * (i3 + i)];
      }
    }
    b_st.site = &bg_emlrtRSI;
    dynamic_size_checks(&b_st, phi, i2 - i1);
    b_st.site = &ag_emlrtRSI;
    c_mtimes(&b_st, boundary->Sigma, phi, gradP);
    s0_data = gradP->data;
    emxFree_real_T(&st, &phi);
    st.site = &i_emlrtRSI;
    b_st.site = &di_emlrtRSI;
    if (gradX->size[1] != 0) {
      type = gradX->size[1];
    } else if (gradP->size[1] != 0) {
      type = gradP->size[1];
    } else {
      type = 0;
    }
    c_st.site = &ei_emlrtRSI;
    if ((gradX->size[1] != type) && (gradX->size[1] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((gradP->size[1] != type) && (gradP->size[1] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &d_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (type == 0);
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
    nx = input_sizes_idx_0;
    sizes_tmp_tmp = sizes[0];
    i = grad->size[0] * grad->size[1];
    grad->size[0] = input_sizes_idx_0 + sizes[0];
    grad->size[1] = type;
    emxEnsureCapacity_real_T(&b_st, grad, i, &db_emlrtRTEI);
    grad_data = grad->data;
    for (i = 0; i < type; i++) {
      for (i1 = 0; i1 < nx; i1++) {
        grad_data[i1 + grad->size[0] * i] =
            gradX_data[i1 + input_sizes_idx_0 * i];
      }
    }
    emxFree_real_T(&b_st, &gradX);
    for (i = 0; i < type; i++) {
      for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
        grad_data[input_sizes_idx_0 + grad->size[0] * i] =
            s0_data[sizes_tmp_tmp * i];
      }
    }
    emxFree_real_T(&b_st, &gradP);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfunSTM_S_energy_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
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
  emxArray_real_T *B;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *dphi;
  emxArray_real_T *p;
  emxArray_real_T *pd;
  emxArray_real_T *x;
  real_T A[100];
  real_T H_pp[25];
  real_T H_xp[25];
  real_T H_xx[25];
  real_T S_p[5];
  real_T S_x[5];
  real_T b_dv[2];
  const real_T *s_data;
  real_T alpha1;
  real_T beta1;
  real_T t2;
  real_T *H_p_data;
  real_T *H_x_data;
  real_T *dphi_data;
  real_T *pd_data;
  real_T *x_data;
  int32_T b_physical_NSTATE[2];
  int32_T b_loop_ub;
  int32_T b_physical_NSTATE_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
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
  st.site = &rb_emlrtRSI;
  /*  computation of equations of motion, state transtion matrix derivatives */
  /*  and switching function derivative */
  /*  3 input case:  */
  /*  inp1: states and costates vector [NSTATEx1], inp2: structure for physical
   * variables */
  /*  and functions, inp3: switching function */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &kb_emlrtBCI, &st);
    }
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &q_emlrtDCI, &st);
    }
    if (((int32_T)physical_NSTATE < 1) ||
        ((int32_T)physical_NSTATE > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, s->size[0],
                                    &jb_emlrtBCI, &st);
    }
    loop_ub = (int32_T)physical_NSTATE;
  }
  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = loop_ub;
  b_st.site = &sb_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x, 1, &xb_emlrtRTEI);
  i = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, x, i, &xb_emlrtRTEI);
  x_data = x->data;
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = s_data[i];
  }
  alpha1 = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > alpha1) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &p_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1,
                                    s->size[0], &ib_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
      emlrtIntegerCheckR2012b(alpha1, &o_emlrtDCI, &st);
    }
    if (((int32_T)alpha1 < 1) || ((int32_T)alpha1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)alpha1, 1, s->size[0],
                                    &hb_emlrtBCI, &st);
    }
    i1 = (int32_T)alpha1;
  }
  b_physical_NSTATE[0] = 1;
  physical_NSTATE_tmp = i1 - i;
  b_physical_NSTATE[1] = physical_NSTATE_tmp;
  b_st.site = &tb_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &p, 1, &yb_emlrtRTEI);
  i1 = p->size[0];
  p->size[0] = physical_NSTATE_tmp;
  emxEnsureCapacity_real_T(&st, p, i1, &yb_emlrtRTEI);
  x_data = p->data;
  for (i1 = 0; i1 < physical_NSTATE_tmp; i1++) {
    x_data[i1] = s_data[i + i1];
  }
  alpha1 = 2.0 * physical_NSTATE + 1.0;
  if (alpha1 > (real_T)s->size[0] - 1.0) {
    i1 = 0;
    i2 = 0;
  } else {
    if (alpha1 != (int32_T)muDoubleScalarFloor(alpha1)) {
      emlrtIntegerCheckR2012b(alpha1, &n_emlrtDCI, &st);
    }
    if (((int32_T)alpha1 < 1) || ((int32_T)alpha1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)alpha1, 1, s->size[0],
                                    &gb_emlrtBCI, &st);
    }
    i1 = (int32_T)alpha1 - 1;
    if ((s->size[0] - 1 < 1) || (s->size[0] - 1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b(s->size[0] - 1, 1, s->size[0], &fb_emlrtBCI,
                                    &st);
    }
    i2 = s->size[0] - 1;
  }
  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE_tmp = i2 - i1;
  b_physical_NSTATE[1] = b_physical_NSTATE_tmp;
  b_st.site = &ub_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  b_dv[0] = 2.0 * physical_NSTATE;
  b_dv[1] = 2.0 * physical_NSTATE;
  b_st.site = &ub_emlrtRSI;
  c_st.site = &r_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = b_physical_NSTATE_tmp;
  if (b_physical_NSTATE_tmp < 1) {
    n = 1;
  }
  maxdimlen = muIntScalarMax_sint32(b_physical_NSTATE_tmp, n);
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
  b_loop_ub = (int32_T)b_dv[0] * (int32_T)b_dv[1];
  if (b_loop_ub != b_physical_NSTATE_tmp) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &s_emlrtDCI, &st);
  }
  alpha1 = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != alpha1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &r_emlrtDCI, &st);
  }
  i2 = varargout_1->size[0];
  varargout_1->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, varargout_1, i2, &ac_emlrtRTEI);
  x_data = varargout_1->data;
  if (physical_NSTATE != alpha1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &r_emlrtDCI, &st);
  }
  maxdimlen = (int32_T)physical_NSTATE;
  for (i2 = 0; i2 < maxdimlen; i2++) {
    x_data[i2] = 0.0;
  }
  emxInit_real_T(&st, &pd, 1, &fc_emlrtRTEI);
  i2 = pd->size[0];
  pd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd, i2, &bc_emlrtRTEI);
  pd_data = pd->data;
  maxdimlen = (int32_T)physical_NSTATE;
  for (i2 = 0; i2 < maxdimlen; i2++) {
    pd_data[i2] = 0.0;
  }
  emxInit_real_T(&st, &H_x, 1, &ac_emlrtRTEI);
  emxInit_real_T(&st, &H_p, 1, &ac_emlrtRTEI);
  b_st.site = &vb_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x, p, SIGN, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  b_st.site = &wb_emlrtRSI;
  HamiltonianSecondDerivatives(&b_st, x, p, SIGN, physical_Tmax, physical_c,
                               physical_shoot, physical_EPS, H_xx, H_xp, H_pp);
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
    i2 = 0;
  } else {
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5,
                                    &eb_emlrtBCI, &st);
    }
    maxdimlen = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &cb_emlrtBCI,
                                    &st);
    }
    i2 = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  emlrtSubAssignSizeCheckR2012b(&i2, 1, &maxdimlen, 1, &e_emlrtECI, &st);
  for (i2 = 0; i2 < maxdimlen; i2++) {
    x_data[i2] = H_p_data[i2];
  }
  /*  xd: states derivatives  [NSTATEx1] */
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
    i2 = 0;
  } else {
    maxdimlen = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &db_emlrtBCI,
                                    &st);
    }
    i2 = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  for (i3 = 0; i3 < maxdimlen; i3++) {
    S_x[i3] = -H_x_data[i3];
  }
  emlrtSubAssignSizeCheckR2012b(&i2, 1, &maxdimlen, 1, &f_emlrtECI, &st);
  for (i2 = 0; i2 < maxdimlen; i2++) {
    pd_data[i2] = S_x[i2];
  }
  /*  pd: costates derivatives  [NSTATEx1] */
  b_st.site = &xb_emlrtRSI;
  c_st.site = &bg_emlrtRSI;
  if ((int32_T)b_dv[0] != 10) {
    if (((int32_T)b_dv[0] == 1) && ((int32_T)b_dv[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &o_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &p_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  c_st.site = &ag_emlrtRSI;
  for (i2 = 0; i2 < 5; i2++) {
    for (i3 = 0; i3 < 5; i3++) {
      maxdimlen = i3 + 10 * i2;
      A[maxdimlen] = H_xp[i2 + 5 * i3];
      n = i3 + 5 * i2;
      b_physical_NSTATE_tmp = i3 + 10 * (i2 + 5);
      A[b_physical_NSTATE_tmp] = H_pp[n];
      A[maxdimlen + 5] = -H_xx[n];
      A[b_physical_NSTATE_tmp + 5] = -H_xp[n];
    }
  }
  emxInit_real_T(&c_st, &B, 2, &cc_emlrtRTEI);
  i2 = B->size[0] * B->size[1];
  B->size[0] = (int32_T)b_dv[0];
  B->size[1] = (int32_T)b_dv[1];
  emxEnsureCapacity_real_T(&c_st, B, i2, &cc_emlrtRTEI);
  x_data = B->data;
  for (i2 = 0; i2 < b_loop_ub; i2++) {
    x_data[i2] = s_data[i1 + i2];
  }
  emxInit_real_T(&c_st, &dphi, 2, &dc_emlrtRTEI);
  if ((B->size[0] == 0) || (B->size[1] == 0)) {
    i1 = dphi->size[0] * dphi->size[1];
    dphi->size[0] = 10;
    dphi->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&c_st, dphi, i1, &dc_emlrtRTEI);
    dphi_data = dphi->data;
    b_loop_ub = 10 * B->size[1];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      dphi_data[i1] = 0.0;
    }
  } else {
    d_st.site = &cg_emlrtRSI;
    e_st.site = &dg_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)10;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)10;
    lda_t = (ptrdiff_t)10;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)10;
    i1 = dphi->size[0] * dphi->size[1];
    dphi->size[0] = 10;
    dphi->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&e_st, dphi, i1, &ec_emlrtRTEI);
    dphi_data = dphi->data;
    emlrt_checkEscapedGlobals();
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, &A[0], &lda_t,
          &x_data[0], &ldb_t, &beta1, &dphi_data[0], &ldc_t);
  }
  emxFree_real_T(&c_st, &B);
  /*  state transtion matrix derivatives [2NSTATEx2NSTATE] */
  b_st.site = &yb_emlrtRSI;
  maxdimlen = (int32_T)physical_NSTATE << 1;
  c_st.site = &q_emlrtRSI;
  d_st.site = &l_emlrtRSI;
  b_dv[0] = maxdimlen * maxdimlen;
  b_dv[1] = 1.0;
  b_st.site = &yb_emlrtRSI;
  maxdimlen = 10 * dphi->size[1];
  c_st.site = &r_emlrtRSI;
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
  b_st.site = &ac_emlrtRSI;
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
  c_st.site = &j_emlrtRSI;
  /* S_fun */
  /*     Ssym = S_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
  /*     This function was generated by the Symbolic Math Toolbox version 9.2.
   */
  /*     01-Sep-2024 17:26:08 */
  if (physical_NSTATE_tmp < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, physical_NSTATE_tmp, &bb_emlrtBCI,
                                  &c_st);
  }
  if (physical_NSTATE_tmp < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, 3, &ab_emlrtBCI, &c_st);
  }
  if (physical_NSTATE_tmp < 5) {
    emlrtDynamicBoundsCheckR2012b(5, 1, 4, &y_emlrtBCI, &c_st);
  }
  if (loop_ub < 5) {
    emlrtDynamicBoundsCheckR2012b(5, 1, loop_ub, &x_emlrtBCI, &c_st);
  }
  t2 = 1.0 / physical_c;
  d_st.site = &k_emlrtRSI;
  d_st.site = &k_emlrtRSI;
  d_st.site = &k_emlrtRSI;
  alpha1 = s_data[i + 2];
  beta1 = s_data[i + 3];
  alpha1 = alpha1 * alpha1 + beta1 * beta1;
  if (alpha1 < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &e_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  alpha1 = muDoubleScalarSqrt(alpha1);
  c_st.site = &eg_emlrtRSI;
  S_x_fun(&c_st, x, p, physical_Tmax, S_x);
  c_st.site = &fg_emlrtRSI;
  S_p_fun(&c_st, x, p, physical_Tmax, physical_c, S_p);
  c_st.site = &gg_emlrtRSI;
  HamiltonianFirstDerivatives(
      &c_st, x, p,
      -physical_Tmax * ((t2 + s_data[i + 4] * t2) - alpha1 / s_data[4]),
      physical_Tmax, physical_c, physical_NSTATE, physical_shoot, physical_EPS,
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
  emxEnsureCapacity_real_T(&st, varargout_1, i1, &ac_emlrtRTEI);
  x_data = varargout_1->data;
  alpha1 = 0.0;
  beta1 = 0.0;
  for (i1 = 0; i1 < 5; i1++) {
    alpha1 += S_x[i1] * H_p_data[i1];
    beta1 += S_p[i1] * H_x_data[i1];
  }
  emxFree_real_T(&st, &H_p);
  emxFree_real_T(&st, &H_x);
  loop_ub = pd->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    x_data[i + i1] = pd_data[i1];
  }
  loop_ub = (int32_T)b_dv[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    x_data[(i + i1) + pd->size[0]] = dphi_data[i1];
  }
  emxFree_real_T(&st, &dphi);
  x_data[(i + pd->size[0]) + (int32_T)b_dv[0]] = alpha1 - beta1;
  emxFree_real_T(&st, &pd);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (objfunSTM_S_energy.c) */
