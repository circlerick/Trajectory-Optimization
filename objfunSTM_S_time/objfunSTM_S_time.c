/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfunSTM_S_time.c
 *
 * Code generation for function 'objfunSTM_S_time'
 *
 */

/* Include files */
#include "objfunSTM_S_time.h"
#include "Hamiltonian.h"
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
#include "objfunSTM_S_time_data.h"
#include "objfunSTM_S_time_emxutil.h"
#include "objfunSTM_S_time_types.h"
#include "ode89.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    28,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    29,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    41,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    43,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    45,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    54,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    76,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    79,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    81,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    90,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    91,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    92,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    93,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    95,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    96,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    97,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    98,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    99,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    132,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    133,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo u_emlrtRSI = {
    139,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo v_emlrtRSI = {
    140,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    150,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    151,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    154,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo ab_emlrtRSI = {
    155,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = {
    156,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo cb_emlrtRSI = {
    158,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo db_emlrtRSI = {
    159,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo eb_emlrtRSI = {
    160,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo lb_emlrtRSI = {
    40,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo mc_emlrtRSI = {
    43,                                                           /* lineNo */
    "@(t,s)derivativesSTM(s,physical,S)",                         /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo nc_emlrtRSI = {
    15,                                                         /* lineNo */
    "derivativesSTM",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    16,                                                         /* lineNo */
    "derivativesSTM",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pathName */
};

static emlrtRSInfo pc_emlrtRSI = {
    17,                                                         /* lineNo */
    "derivativesSTM",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pathName */
};

static emlrtRSInfo qc_emlrtRSI = {
    31,                                                         /* lineNo */
    "derivativesSTM",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pathName */
};

static emlrtRSInfo rc_emlrtRSI = {
    32,                                                         /* lineNo */
    "derivativesSTM",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pathName */
};

static emlrtRSInfo sc_emlrtRSI = {
    40,                                                         /* lineNo */
    "derivativesSTM",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pathName */
};

static emlrtRSInfo tc_emlrtRSI = {
    41,                                                         /* lineNo */
    "derivativesSTM",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pathName */
};

static emlrtRSInfo mg_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

static emlrtRSInfo ni_emlrtRSI = {
    79,                                                           /* lineNo */
    "@(t,s)derivativesSTM_S(s,physical,SIGN)",                    /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo oi_emlrtRSI = {
    11,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo pi_emlrtRSI = {
    12,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo qi_emlrtRSI = {
    13,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo ri_emlrtRSI = {
    27,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo si_emlrtRSI = {
    28,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo ti_emlrtRSI = {
    36,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo ui_emlrtRSI = {
    37,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtRSInfo vi_emlrtRSI = {
    38,                                                           /* lineNo */
    "derivativesSTM_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    117,                                                          /* lineNo */
    9,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtMCInfo b_emlrtMCI = {
    36,                                                           /* lineNo */
    13,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    81,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    79,                  /* lineNo */
    23,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    74,                  /* lineNo */
    13,                  /* colNo */
    "reshapeSizeChecks", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pName */
};

static emlrtECInfo emlrtECI = {
    2,                                                            /* nDims */
    159,                                                          /* lineNo */
    13,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    159,                                                           /* lineNo */
    96,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    159,                                                           /* lineNo */
    96,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    159,                                                           /* lineNo */
    86,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    159,                                                           /* lineNo */
    86,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    159,                                                           /* lineNo */
    76,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    159,                                                           /* lineNo */
    76,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    159,                                                           /* lineNo */
    66,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    159,                                                           /* lineNo */
    66,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    159,                                                           /* lineNo */
    43,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    159,                                                           /* lineNo */
    43,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    159,                                                           /* lineNo */
    33,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    159,                                                           /* lineNo */
    33,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    159,                                                           /* lineNo */
    25,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    159,                                                           /* lineNo */
    25,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    159,                                                           /* lineNo */
    23,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    2,                                                            /* nDims */
    155,                                                          /* lineNo */
    13,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    155,                                                           /* lineNo */
    96,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    155,                                                           /* lineNo */
    96,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    155,                                                           /* lineNo */
    86,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    155,                                                           /* lineNo */
    86,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    155,                                                           /* lineNo */
    76,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    155,                                                           /* lineNo */
    76,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    155,                                                           /* lineNo */
    66,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    155,                                                           /* lineNo */
    66,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    155,                                                           /* lineNo */
    43,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    155,                                                           /* lineNo */
    43,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    155,                                                           /* lineNo */
    33,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    155,                                                           /* lineNo */
    33,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    155,                                                           /* lineNo */
    25,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    155,                                                           /* lineNo */
    25,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    155,                                                           /* lineNo */
    23,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    151,                                                           /* lineNo */
    56,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    151,                                                           /* lineNo */
    56,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    151,                                                           /* lineNo */
    46,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    151,                                                           /* lineNo */
    46,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    151,                                                           /* lineNo */
    36,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    151,                                                           /* lineNo */
    36,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    151,                                                           /* lineNo */
    26,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    151,                                                           /* lineNo */
    26,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    150,                                                           /* lineNo */
    47,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    150,                                                           /* lineNo */
    47,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    150,                                                           /* lineNo */
    37,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    150,                                                           /* lineNo */
    37,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    150,                                                           /* lineNo */
    29,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    150,                                                           /* lineNo */
    29,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    150,                                                           /* lineNo */
    27,                                                            /* colNo */
    "phif",                                                        /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    1,                                                            /* nDims */
    142,                                                          /* lineNo */
    18,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    1,                                                            /* nDims */
    141,                                                          /* lineNo */
    20,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    1,                                                            /* nDims */
    135,                                                          /* lineNo */
    18,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtECInfo f_emlrtECI = {
    1,                                                            /* nDims */
    134,                                                          /* lineNo */
    20,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    128,                                                           /* lineNo */
    22,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    128,                                                           /* lineNo */
    22,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    128,                                                           /* lineNo */
    13,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    128,                                                           /* lineNo */
    13,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    128,                                                           /* lineNo */
    9,                                                             /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    127,                                                           /* lineNo */
    15,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = {
    127,                                                           /* lineNo */
    15,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    127,                                                           /* lineNo */
    9,                                                             /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    106,                                                           /* lineNo */
    42,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    106,                                                           /* lineNo */
    36,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    102,                                                           /* lineNo */
    29,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    99,                                                            /* lineNo */
    32,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    99,                                                            /* lineNo */
    32,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    99,                                                            /* lineNo */
    26,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    98,                                                            /* lineNo */
    74,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    98,                                                            /* lineNo */
    74,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    98,                                                            /* lineNo */
    65,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = {
    98,                                                            /* lineNo */
    65,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    98,                                                            /* lineNo */
    49,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = {
    98,                                                            /* lineNo */
    49,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    98,                                                            /* lineNo */
    43,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo g_emlrtECI = {
    2,                                                            /* nDims */
    96,                                                           /* lineNo */
    23,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtECInfo h_emlrtECI = {
    1,                                                            /* nDims */
    96,                                                           /* lineNo */
    23,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtECInfo i_emlrtECI = {
    1,                                                            /* nDims */
    96,                                                           /* lineNo */
    40,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    95,                                                            /* lineNo */
    50,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = {
    95,                                                            /* lineNo */
    50,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    95,                                                            /* lineNo */
    44,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    93,                                                            /* lineNo */
    49,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = {
    93,                                                            /* lineNo */
    49,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    93,                                                            /* lineNo */
    43,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    89,                                                            /* lineNo */
    43,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = {
    89,                                                            /* lineNo */
    43,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    89,                                                            /* lineNo */
    34,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = {
    89,                                                            /* lineNo */
    34,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    89,                                                            /* lineNo */
    30,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    88,                                                            /* lineNo */
    33,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = {
    88,                                                            /* lineNo */
    33,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    88,                                                            /* lineNo */
    27,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    81,                                                            /* lineNo */
    46,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    81,                                                            /* lineNo */
    35,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = {
    81,                                                            /* lineNo */
    35,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    81,                                                            /* lineNo */
    31,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo j_emlrtECI = {
    1,                                                            /* nDims */
    76,                                                           /* lineNo */
    81,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    76,                                                            /* lineNo */
    93,                                                            /* colNo */
    "s0",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = {
    76,                                                            /* lineNo */
    93,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtECInfo k_emlrtECI = {
    1,                                                            /* nDims */
    76,                                                           /* lineNo */
    36,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    76,                                                            /* lineNo */
    48,                                                            /* colNo */
    "s0",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = {
    76,                                                            /* lineNo */
    48,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    45,                                                            /* lineNo */
    42,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    45,                                                            /* lineNo */
    31,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = {
    45,                                                            /* lineNo */
    31,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    45,                                                            /* lineNo */
    27,                                                            /* colNo */
    "xx",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = {
    27,                                                            /* lineNo */
    14,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = {
    27,                                                            /* lineNo */
    14,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    4 /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    85,                                                            /* lineNo */
    19,                                                            /* colNo */
    "tt",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    114,                                                           /* lineNo */
    23,                                                            /* colNo */
    "tt",                                                          /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = {
    96,                                                            /* lineNo */
    68,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = {
    1,                                                             /* iFirst */
    5,                                                             /* iLast */
    96,                                                            /* lineNo */
    68,                                                            /* colNo */
    "S_x",                                                         /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = {
    96,                                                            /* lineNo */
    73,                                                            /* colNo */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = {
    1,                                                             /* iFirst */
    1,                                                             /* iLast */
    96,                                                            /* lineNo */
    73,                                                            /* colNo */
    "S_x",                                                         /* aName */
    "objfunSTM_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo l_emlrtECI = {
    -1,                                                         /* nDims */
    38,                                                         /* lineNo */
    4,                                                          /* colNo */
    "derivativesSTM",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pName */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    38,                                                          /* lineNo */
    9,                                                           /* colNo */
    "xd",                                                        /* aName */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtECInfo m_emlrtECI = {
    -1,                                                         /* nDims */
    39,                                                         /* lineNo */
    4,                                                          /* colNo */
    "derivativesSTM",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pName */
};

static emlrtBCInfo kc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    39,                                                          /* lineNo */
    9,                                                           /* colNo */
    "pd",                                                        /* aName */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    38,                                                          /* lineNo */
    25,                                                          /* colNo */
    "H_p",                                                       /* aName */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    17,                                                          /* lineNo */
    34,                                                          /* colNo */
    "inp1",                                                      /* aName */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    17,                                                          /* lineNo */
    23,                                                          /* colNo */
    "inp1",                                                      /* aName */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = {
    17,                                                          /* lineNo */
    23,                                                          /* colNo */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    1                                                            /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    16,                                                          /* lineNo */
    20,                                                          /* colNo */
    "inp1",                                                      /* aName */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = {
    16,                                                          /* lineNo */
    20,                                                          /* colNo */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    1                                                            /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    16,                                                          /* lineNo */
    11,                                                          /* colNo */
    "inp1",                                                      /* aName */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = {
    16,                                                          /* lineNo */
    11,                                                          /* colNo */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    1                                                            /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    15,                                                          /* lineNo */
    13,                                                          /* colNo */
    "inp1",                                                      /* aName */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = {
    15,                                                          /* lineNo */
    13,                                                          /* colNo */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    1                                                            /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,                                                          /* iFirst */
    -1,                                                          /* iLast */
    15,                                                          /* lineNo */
    11,                                                          /* colNo */
    "inp1",                                                      /* aName */
    "derivativesSTM",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m", /* pName */
    0                                                            /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = {
    43,                                                            /* lineNo */
    24,                                                            /* colNo */
    "@(t,s)derivativesSTM(s,physical,S)",                          /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = {
    43,                                                            /* lineNo */
    24,                                                            /* colNo */
    "@(t,s)derivativesSTM(s,physical,S)",                          /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    4 /* checkKind */
};

static emlrtECInfo p_emlrtECI = {
    -1,                                                           /* nDims */
    34,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtBCInfo se_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    9,                                                             /* colNo */
    "xd",                                                          /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo q_emlrtECI = {
    -1,                                                           /* nDims */
    35,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtBCInfo te_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    35,                                                            /* lineNo */
    9,                                                             /* colNo */
    "pd",                                                          /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    34,                                                            /* lineNo */
    25,                                                            /* colNo */
    "H_p",                                                         /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    13,                                                            /* lineNo */
    34,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    13,                                                            /* lineNo */
    23,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = {
    13,                                                            /* lineNo */
    23,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    12,                                                            /* lineNo */
    20,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = {
    12,                                                            /* lineNo */
    20,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    12,                                                            /* lineNo */
    11,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = {
    12,                                                            /* lineNo */
    11,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    11,                                                            /* lineNo */
    13,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = {
    11,                                                            /* lineNo */
    13,                                                            /* colNo */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo bf_emlrtBCI = {
    -1,                                                            /* iFirst */
    -1,                                                            /* iLast */
    11,                                                            /* lineNo */
    11,                                                            /* colNo */
    "inp1",                                                        /* aName */
    "derivativesSTM_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = {
    79,                                                            /* lineNo */
    29,                                                            /* colNo */
    "@(t,s)derivativesSTM_S(s,physical,SIGN)",                     /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = {
    79,                                                            /* lineNo */
    29,                                                            /* colNo */
    "@(t,s)derivativesSTM_S(s,physical,SIGN)",                     /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m", /* pName */
    4 /* checkKind */
};

static emlrtRTEInfo t_emlrtRTEI = {
    18,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    23,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    27,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    40,                                                           /* lineNo */
    14,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    73,                                                           /* lineNo */
    9,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    127,                                                          /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    128,                                                          /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    45,                                                           /* lineNo */
    24,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    45,                                                           /* lineNo */
    9,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    150,                                                          /* lineNo */
    22,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    81,                                                           /* lineNo */
    28,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    151,                                                          /* lineNo */
    20,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    81,                                                           /* lineNo */
    13,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    155,                                                          /* lineNo */
    18,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    159,                                                          /* lineNo */
    18,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    102,                                                          /* lineNo */
    21,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    88,                                                           /* lineNo */
    17,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    155,                                                          /* lineNo */
    60,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    159,                                                          /* lineNo */
    60,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    89,                                                           /* lineNo */
    17,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    156,                                                          /* lineNo */
    13,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    160,                                                          /* lineNo */
    13,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    156,                                                          /* lineNo */
    22,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    160,                                                          /* lineNo */
    22,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    93,                                                           /* lineNo */
    40,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    156,                                                          /* lineNo */
    42,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    160,                                                          /* lineNo */
    42,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    95,                                                           /* lineNo */
    41,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    156,                                                          /* lineNo */
    5,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    160,                                                          /* lineNo */
    5,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = {
    96,                                                           /* lineNo */
    64,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = {
    96,                                                           /* lineNo */
    82,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = {
    96,                                                           /* lineNo */
    63,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    96,                                                           /* lineNo */
    39,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    98,                                                           /* lineNo */
    40,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    98,                                                           /* lineNo */
    58,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = {
    99,                                                           /* lineNo */
    17,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = {
    28,                                                           /* lineNo */
    1,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = {
    40,                                                           /* lineNo */
    9,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = {
    93,                                                           /* lineNo */
    17,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    95,                                                           /* lineNo */
    17,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    96,                                                           /* lineNo */
    17,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    150,                                                          /* lineNo */
    5,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    151,                                                          /* lineNo */
    5,                                                            /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    3,                                                            /* lineNo */
    23,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    97,                                                           /* lineNo */
    23,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    15,                                                         /* lineNo */
    4,                                                          /* colNo */
    "derivativesSTM",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    16,                                                         /* lineNo */
    4,                                                          /* colNo */
    "derivativesSTM",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    43,                                                           /* lineNo */
    24,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    30,                                                         /* lineNo */
    20,                                                         /* colNo */
    "derivativesSTM",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    17,                                                         /* lineNo */
    18,                                                         /* colNo */
    "derivativesSTM",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = {
    40,                                                         /* lineNo */
    4,                                                          /* colNo */
    "derivativesSTM",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    3,                                                          /* lineNo */
    14,                                                         /* colNo */
    "derivativesSTM",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM.m" /* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = {
    11,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo le_emlrtRTEI = {
    12,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo me_emlrtRTEI = {
    79,                                                           /* lineNo */
    29,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = {
    26,                                                           /* lineNo */
    20,                                                           /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = {
    13,                                                           /* lineNo */
    18,                                                           /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = {
    36,                                                           /* lineNo */
    4,                                                            /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = {
    3,                                                            /* lineNo */
    14,                                                           /* colNo */
    "derivativesSTM_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_S.m" /* pName */
};

static emlrtRTEInfo yf_emlrtRTEI = {
    96,                                                           /* lineNo */
    23,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo ag_emlrtRTEI = {
    96,                                                           /* lineNo */
    40,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = {
    159,                                                          /* lineNo */
    13,                                                           /* colNo */
    "objfunSTM_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pName */
};

static emlrtRSInfo uj_emlrtRSI = {
    36,                                                           /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

static emlrtRSInfo vj_emlrtRSI = {
    117,                                                          /* lineNo */
    "objfunSTM_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

/* Function Declarations */
static void b_binary_expand_op(real_T in1_data[], int32_T *in1_size, real_T in2,
                               const struct1_T *in3, const emxArray_real_T *in4,
                               real_T in5);

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[27]);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2,
                             const emxArray_real_T *in3);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[47]);

static void minus(const emlrtStack *sp, emxArray_real_T *in1,
                  const emxArray_real_T *in2);

static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2);

/* Function Definitions */
static void b_binary_expand_op(real_T in1_data[], int32_T *in1_size, real_T in2,
                               const struct1_T *in3, const emxArray_real_T *in4,
                               real_T in5)
{
  real_T b_in4[5];
  const real_T *in4_data;
  int32_T i;
  int32_T stride_0_0;
  in4_data = in4->data;
  stride_0_0 = (in4->size[0] != 1);
  for (i = 0; i < 5; i++) {
    b_in4[i] = in4_data[i * stride_0_0] - in3->Xf[i];
  }
  *in1_size = 6;
  in1_data[0] = in2;
  for (i = 0; i < 4; i++) {
    real_T d;
    d = 0.0;
    for (stride_0_0 = 0; stride_0_0 < 5; stride_0_0++) {
      d += in3->Pigreco[stride_0_0 + 5 * i] * b_in4[stride_0_0];
    }
    in1_data[i + 1] = d;
  }
  in1_data[5] = in5;
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[27])
{
  static const int32_T iv[2] = {1, 27};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 27, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2,
                             const emxArray_real_T *in3)
{
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *b_in2_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in3_data = in3->data;
  in2_data = in2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 2, &bg_emlrtRTEI);
  i = b_in2->size[0] * b_in2->size[1];
  b_in2->size[0] = 1;
  if (in3->size[1] == 1) {
    b_in2->size[1] = in2->size[1];
  } else {
    b_in2->size[1] = in3->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in2, i, &bg_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_1 = (in2->size[1] != 1);
  stride_1_1 = (in3->size[1] != 1);
  if (in3->size[1] == 1) {
    loop_ub = in2->size[1];
  } else {
    loop_ub = in3->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[i * stride_0_1] + in3_data[i * stride_1_1];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = 1;
  in1->size[1] = b_in2->size[1] + 1;
  emxEnsureCapacity_real_T(sp, in1, i, &pb_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in2->size[1];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in2_data[i];
  }
  in1_data[b_in2->size[1]] = 0.0;
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = m;
  emlrtCallMATLABR2012b((emlrtConstCTX)sp, 0, NULL, 1, &pArray, "disp", true,
                        location);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[47])
{
  static const int32_T iv[2] = {1, 47};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 47, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void minus(const emlrtStack *sp, emxArray_real_T *in1,
                  const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 1, &ag_emlrtRTEI);
  i = b_in1->size[0];
  if (in2->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &ag_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[0] != 1);
  if (in2->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] - in2_data[i * stride_1_0];
  }
  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &ag_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &yf_emlrtRTEI);
  i = b_in1->size[0] * b_in1->size[1];
  if (in2->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->size[0];
  }
  if (in2->size[1] == 1) {
    b_in1->size[1] = in1->size[1];
  } else {
    b_in1->size[1] = in2->size[1];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &yf_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_0_1 = (in1->size[1] != 1);
  stride_1_0 = (in2->size[0] != 1);
  stride_1_1 = (in2->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in2->size[1] == 1) {
    loop_ub = in1->size[1];
  } else {
    loop_ub = in2->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    i1 = in2->size[0];
    if (i1 == 1) {
      b_loop_ub = in1->size[0];
    } else {
      b_loop_ub = i1;
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_in1_data[i1 + b_in1->size[0] * i] =
          in1_data[i1 * stride_0_0 + in1->size[0] * aux_0_1] +
          in2_data[i1 * stride_1_0 + in2->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_in1->size[0];
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &yf_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_in1->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] = b_in1_data[i1 + b_in1->size[0] * i];
    }
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void emlrt_checkEscapedGlobals(void)
{
  physical_dirty |= physical_dirty >> 1U;
}

void objfunSTM_S_time(const emlrtStack *sp, const real_T lam0[6],
                      const real_T X0[5], const struct0_T *b_physical,
                      const struct1_T *boundary, const struct2_T *par,
                      real_T obj_data[], int32_T obj_size[1],
                      emxArray_real_T *grad)
{
  static const char_T cv1[47] = {
      'E', 'r', 'r', 'o', 'r', ':', ' ', 'E', 'P', 'S', ' ', 'c',
      'a', 'n', ' ', 'o', 'n', 'l', 'y', ' ', 'b', 'e', ' ', 's',
      'e', 't', ' ', 't', 'o', ' ', '0', ' ', 'i', 'n', ' ', 'm',
      'i', 'n', 'i', 'm', 'u', 'm', ' ', 't', 'i', 'm', 'e'};
  static const char_T cv[27] = {'W', 'r', 'o', 'n', 'g', ' ', 'p', 't', 'o',
                                'b', 'l', 'e', 'm', ' ', 't', 'y', 'p', 'e',
                                ' ', 's', 'e', 'l', 'e', 'c', 't', 'e', 'd'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T b_varargin_3;
  emxArray_real_T *S_p;
  emxArray_real_T *S_x;
  emxArray_real_T *b_xx;
  emxArray_real_T *dydt_min;
  emxArray_real_T *dydt_plus;
  emxArray_real_T *gradP;
  emxArray_real_T *gradX;
  emxArray_real_T *pf;
  emxArray_real_T *phi;
  emxArray_real_T *phif;
  emxArray_real_T *psi;
  emxArray_real_T *r;
  emxArray_real_T *s0;
  emxArray_real_T *tt;
  emxArray_real_T *varargin_1;
  emxArray_real_T *varargin_2;
  emxArray_real_T *varargin_3;
  emxArray_real_T *xx;
  emxArray_real_T *y;
  real_T b_S_x[5];
  real_T b_boundary[2];
  real_T NSTATE;
  real_T S;
  real_T Sf;
  real_T Tfin;
  real_T Tmax;
  real_T a;
  real_T d;
  real_T deltaP;
  real_T *dydt_min_data;
  real_T *dydt_plus_data;
  real_T *gradP_data;
  real_T *gradX_data;
  real_T *grad_data;
  real_T *pf_data;
  real_T *phi_data;
  real_T *phif_data;
  real_T *s0_data;
  real_T *tt_data;
  real_T *varargin_2_data;
  real_T *varargin_3_data;
  real_T *xx_data;
  int32_T b_input_sizes[2];
  int32_T c_input_sizes[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub;
  int32_T maxdimlen;
  int32_T nx;
  int32_T sizes_idx_0;
  int32_T sizes_tmp_tmp;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  compute the objective function and its gradient for a problem where the */
  /*  final time is free. */
  /*  Inputs: */
  /*  lam0: initial costates vector [NSTATEx1] */
  /*  X0: initial states vector [NSTATEx1] */
  /*  physical: structure for physical variables */
  /*  boundary: structure for control problem inputs */
  /*  par: structure for simulation variables */
  /*  Outputs: */
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
  NSTATE = b_physical->NSTATE;
  Tmax = b_physical->Tmax;
  emxInit_real_T(sp, &xx, 2, &u_emlrtRTEI);
  i = xx->size[0] * xx->size[1];
  xx->size[0] = 1;
  xx->size[1] = 1;
  emxEnsureCapacity_real_T(sp, xx, i, &u_emlrtRTEI);
  xx_data = xx->data;
  xx_data[0] = 0.0;
  Tfin = lam0[5];
  a = 2.0 * b_physical->NSTATE;
  if (!(a >= 0.0)) {
    emlrtNonNegativeCheckR2012b(a, &nb_emlrtDCI, (emlrtConstCTX)sp);
  }
  d = (int32_T)muDoubleScalarFloor(a);
  if (a != d) {
    emlrtIntegerCheckR2012b(a, &mb_emlrtDCI, (emlrtConstCTX)sp);
  }
  emxInit_real_T(sp, &phif, 2, &v_emlrtRTEI);
  i = phif->size[0] * phif->size[1];
  phif->size[0] = (int32_T)a;
  phif->size[1] = (int32_T)a;
  emxEnsureCapacity_real_T(sp, phif, i, &v_emlrtRTEI);
  phif_data = phif->data;
  sizes_idx_0 = (int32_T)a * (int32_T)a;
  for (i = 0; i < sizes_idx_0; i++) {
    phif_data[i] = 0.0;
  }
  emxInit_real_T(sp, &phi, 2, &gc_emlrtRTEI);
  st.site = &emlrtRSI;
  eye(&st, 2.0 * b_physical->NSTATE, phi);
  phi_data = phi->data;
  st.site = &b_emlrtRSI;
  b_st.site = &jb_emlrtRSI;
  b_boundary[0] = 4.0 * (b_physical->NSTATE * b_physical->NSTATE);
  b_boundary[1] = 1.0;
  st.site = &b_emlrtRSI;
  nx = phi->size[0] * phi->size[1];
  b_st.site = &lb_emlrtRSI;
  assertValidSizeArg(&b_st, b_boundary);
  sizes_tmp_tmp = (int32_T)b_boundary[0];
  maxdimlen = phi->size[0];
  if (phi->size[1] > phi->size[0]) {
    maxdimlen = phi->size[1];
  }
  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if ((int32_T)b_boundary[0] > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if (maxdimlen < 1) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)b_boundary[0] < 0) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if ((int32_T)b_boundary[0] != nx) {
    emlrtErrorWithMessageIdR2018a(
        &st, &b_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  Sf = 0.0;
  /*  integration */
  if (b_strcmp(par->problem)) {
    nx = 0;
  } else if (c_strcmp(par->problem)) {
    nx = 1;
  } else {
    nx = -1;
  }
  emxInit_real_T(sp, &s0, 1, &hc_emlrtRTEI);
  emxInit_real_T(sp, &dydt_min, 1, &ic_emlrtRTEI);
  emxInit_real_T(sp, &dydt_plus, 1, &jc_emlrtRTEI);
  emxInit_real_T(sp, &psi, 2, &kc_emlrtRTEI);
  emxInit_real_T(sp, &pf, 1, &ab_emlrtRTEI);
  emxInit_real_T(sp, &gradX, 2, &lc_emlrtRTEI);
  emxInit_real_T(sp, &gradP, 2, &mc_emlrtRTEI);
  emxInit_real_T(sp, &tt, 1, &nc_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &nc_emlrtRTEI);
  emxInit_real_T(sp, &y, 2, &oc_emlrtRTEI);
  emxInit_real_T(sp, &varargin_1, 2, &ob_emlrtRTEI);
  emxInit_real_T(sp, &varargin_2, 2, &qb_emlrtRTEI);
  emxInit_real_T(sp, &varargin_3, 2, &tb_emlrtRTEI);
  emxInit_real_T(sp, &b_xx, 1, &sb_emlrtRTEI);
  emxInit_real_T(sp, &S_x, 2, &yb_emlrtRTEI);
  emxInit_real_T(sp, &S_p, 2, &ac_emlrtRTEI);
  guard1 = false;
  switch (nx) {
  case 0: {
    if (b_physical->EPS != 0.0) {
      st.site = &uj_emlrtRSI;
      disp(&st, emlrt_marshallOut(&st, cv1), &b_emlrtMCI);
    } else {
      boolean_T empty_non_axis_sizes;
      /*  initial state, costate and STM matrix */
      st.site = &c_emlrtRSI;
      S = Switching_Function(&st, X0, &lam0[0], b_physical->Tmax,
                             b_physical->c);
      b_boundary[0] = boundary->T0;
      b_boundary[1] = lam0[5];
      i = pf->size[0];
      pf->size[0] = sizes_tmp_tmp + 10;
      emxEnsureCapacity_real_T(sp, pf, i, &w_emlrtRTEI);
      pf_data = pf->data;
      for (i = 0; i < 5; i++) {
        pf_data[i] = X0[i];
        pf_data[i + 5] = lam0[i];
      }
      for (i = 0; i < sizes_tmp_tmp; i++) {
        pf_data[i + 10] = phi_data[i];
      }
      st.site = &d_emlrtRSI;
      ode89(&st, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
            b_physical->shoot, b_physical->EPS, muDoubleScalarSign(S),
            b_boundary, pf, s0, xx);
      xx_data = xx->data;
      /*  extrapolate final value of state transition matrix */
      if (a + 1.0 > xx->size[1]) {
        i = 0;
        i1 = 0;
      } else {
        if (a + 1.0 != (int32_T)muDoubleScalarFloor(a + 1.0)) {
          emlrtIntegerCheckR2012b(a + 1.0, &lb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)(a + 1.0) < 1) || ((int32_T)(a + 1.0) > xx->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(a + 1.0), 1, xx->size[1],
                                        &dc_emlrtBCI, (emlrtConstCTX)sp);
        }
        i = (int32_T)(a + 1.0) - 1;
        if (xx->size[1] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[1], 1, xx->size[1],
                                        &cc_emlrtBCI, (emlrtConstCTX)sp);
        }
        i1 = xx->size[1];
      }
      if (xx->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &ec_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      b_boundary[0] = a;
      b_boundary[1] = a;
      st.site = &e_emlrtRSI;
      nx = i1 - i;
      b_st.site = &lb_emlrtRSI;
      assertValidSizeArg(&b_st, b_boundary);
      maxdimlen = 1;
      if (nx > 1) {
        maxdimlen = nx;
      }
      if ((int32_T)a > muIntScalarMax_sint32(nx, maxdimlen)) {
        emlrtErrorWithMessageIdR2018a(
            &st, &d_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
            "Coder:toolbox:reshape_emptyReshapeLimit", 0);
      }
      empty_non_axis_sizes = ((int32_T)a >= 0);
      if ((!empty_non_axis_sizes) || ((int32_T)a < 0)) {
        empty_non_axis_sizes = false;
      }
      if (!empty_non_axis_sizes) {
        emlrtErrorWithMessageIdR2018a(
            &st, &c_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
            "MATLAB:checkDimCommon:nonnegativeSize", 0);
      }
      if (sizes_idx_0 != nx) {
        emlrtErrorWithMessageIdR2018a(
            &st, &b_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
            "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
      }
      i1 = gradP->size[0] * gradP->size[1];
      gradP->size[0] = 1;
      gradP->size[1] = nx;
      emxEnsureCapacity_real_T(sp, gradP, i1, &bb_emlrtRTEI);
      gradP_data = gradP->data;
      for (i1 = 0; i1 < nx; i1++) {
        gradP_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
      }
      i = phif->size[0] * phif->size[1];
      phif->size[0] = (int32_T)a;
      phif->size[1] = (int32_T)a;
      emxEnsureCapacity_real_T(sp, phif, i, &cb_emlrtRTEI);
      phif_data = phif->data;
      for (i = 0; i < sizes_idx_0; i++) {
        phif_data[i] = gradP_data[i];
      }
      guard1 = true;
    }
  } break;
  case 1: {
    real_T SIGN;
    real_T told;
    told = boundary->T0;
    /*  compute switching function */
    st.site = &f_emlrtRSI;
    S = Switching_Function(&st, X0, &lam0[0], b_physical->Tmax, b_physical->c);
    if (b_physical->EPS > 0.0) {
      if ((S < b_physical->EPS * b_physical->Tmax / b_physical->c) &&
          (S > -b_physical->EPS * b_physical->Tmax / b_physical->c)) {
        nx = 0;
      } else if (muDoubleScalarSign(S) != b_physical->shoot) {
        nx = -1;
      } else {
        nx = 1;
      }
    } else if (muDoubleScalarSign(S) != b_physical->shoot) {
      nx = -1;
    } else {
      nx = 1;
    }
    SIGN = b_physical->shoot * (real_T)nx;
    i = s0->size[0];
    s0->size[0] = (int32_T)b_boundary[0] + 11;
    emxEnsureCapacity_real_T(sp, s0, i, &x_emlrtRTEI);
    s0_data = s0->data;
    for (i = 0; i < 5; i++) {
      s0_data[i] = X0[i];
      s0_data[i + 5] = lam0[i];
    }
    for (i = 0; i < sizes_tmp_tmp; i++) {
      s0_data[i + 10] = phi_data[i];
    }
    s0_data[(int32_T)b_boundary[0] + 10] = S;
    /*  initial state, costate, STM matrix and switching function */
    /*  integration loop */
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (told != Tfin) {
        int32_T input_sizes[2];
        deltaP = muDoubleScalarRound(NSTATE / 2.0);
        if (deltaP - 1.0 < 1.0) {
          i = 0;
        } else {
          if (deltaP - 1.0 != (int32_T)(deltaP - 1.0)) {
            emlrtIntegerCheckR2012b(deltaP - 1.0, &kb_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          if (((int32_T)(deltaP - 1.0) < 1) ||
              ((int32_T)(deltaP - 1.0) > s0->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(deltaP - 1.0), 1,
                                          s0->size[0], &bc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i = (int32_T)(deltaP - 1.0);
        }
        input_sizes[0] = 1;
        input_sizes[1] = i;
        st.site = &g_emlrtRSI;
        indexShapeCheck(&st, s0->size[0], input_sizes);
        if ((i != 2) && (i != 1)) {
          emlrtDimSizeImpxCheckR2021b(2, i, &k_emlrtECI, (emlrtConstCTX)sp);
        }
        b_boundary[0] = b_physical->Earth[0] - s0_data[0];
        b_boundary[1] = b_physical->Earth[1] - s0_data[i != 1];
        if (b_norm(b_boundary) > b_physical->RE) {
          if (deltaP - 1.0 < 1.0) {
            i = 0;
          } else {
            if (deltaP - 1.0 != (int32_T)(deltaP - 1.0)) {
              emlrtIntegerCheckR2012b(deltaP - 1.0, &jb_emlrtDCI,
                                      (emlrtConstCTX)sp);
            }
            if (((int32_T)(deltaP - 1.0) < 1) ||
                ((int32_T)(deltaP - 1.0) > s0->size[0])) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(deltaP - 1.0), 1,
                                            s0->size[0], &ac_emlrtBCI,
                                            (emlrtConstCTX)sp);
            }
            i = (int32_T)(deltaP - 1.0);
          }
          input_sizes[0] = 1;
          input_sizes[1] = i;
          st.site = &g_emlrtRSI;
          indexShapeCheck(&st, s0->size[0], input_sizes);
          if ((i != 2) && (i != 1)) {
            emlrtDimSizeImpxCheckR2021b(2, i, &j_emlrtECI, (emlrtConstCTX)sp);
          }
          b_boundary[0] = b_physical->Moon[0] - s0_data[0];
          b_boundary[1] = b_physical->Moon[1] - s0_data[i != 1];
          if (b_norm(b_boundary) > b_physical->RM) {
            boolean_T empty_non_axis_sizes;
            /*  integration with switching time detection */
            b_boundary[0] = told;
            b_boundary[1] = Tfin;
            st.site = &h_emlrtRSI;
            b_ode89(&st, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
                    b_physical->shoot, b_physical->EPS, SIGN, b_boundary, s0,
                    tt, xx);
            xx_data = xx->data;
            tt_data = tt->data;
            /*  extrapolate final value of state transition matrix */
            S = 2.0 * NSTATE + 1.0;
            if (S > (real_T)xx->size[1] - 1.0) {
              i = 0;
              i1 = 0;
            } else {
              if (S != (int32_T)muDoubleScalarFloor(S)) {
                emlrtIntegerCheckR2012b(S, &ib_emlrtDCI, (emlrtConstCTX)sp);
              }
              if (((int32_T)S < 1) || ((int32_T)S > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b((int32_T)S, 1, xx->size[1],
                                              &xb_emlrtBCI, (emlrtConstCTX)sp);
              }
              i = (int32_T)S - 1;
              if ((xx->size[1] - 1 < 1) || (xx->size[1] - 1 > xx->size[1])) {
                emlrtDynamicBoundsCheckR2012b(xx->size[1] - 1, 1, xx->size[1],
                                              &wb_emlrtBCI, (emlrtConstCTX)sp);
              }
              i1 = xx->size[1] - 1;
            }
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &yb_emlrtBCI, (emlrtConstCTX)sp);
            }
            maxdimlen = varargin_3->size[0] * varargin_3->size[1];
            varargin_3->size[0] = 1;
            loop_ub = i1 - i;
            varargin_3->size[1] = loop_ub;
            emxEnsureCapacity_real_T(sp, varargin_3, maxdimlen, &eb_emlrtRTEI);
            varargin_3_data = varargin_3->data;
            for (i1 = 0; i1 < loop_ub; i1++) {
              varargin_3_data[i1] =
                  xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
            }
            b_boundary[0] = 2.0 * NSTATE;
            b_boundary[1] = 2.0 * NSTATE;
            st.site = &i_emlrtRSI;
            b_st.site = &lb_emlrtRSI;
            assertValidSizeArg(&b_st, b_boundary);
            maxdimlen = 1;
            if (loop_ub > 1) {
              maxdimlen = loop_ub;
            }
            maxdimlen = muIntScalarMax_sint32(loop_ub, maxdimlen);
            if ((int32_T)b_boundary[0] > maxdimlen) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &d_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
            }
            if ((int32_T)b_boundary[1] > maxdimlen) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &d_emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
            }
            empty_non_axis_sizes = ((int32_T)b_boundary[0] >= 0);
            if ((!empty_non_axis_sizes) || ((int32_T)b_boundary[1] < 0)) {
              empty_non_axis_sizes = false;
            }
            if (!empty_non_axis_sizes) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &c_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
            }
            sizes_tmp_tmp = (int32_T)b_boundary[0] * (int32_T)b_boundary[1];
            if (sizes_tmp_tmp != loop_ub) {
              emlrtErrorWithMessageIdR2018a(
                  &st, &b_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
                  "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
            }
            i1 = gradP->size[0] * gradP->size[1];
            gradP->size[0] = 1;
            gradP->size[1] = loop_ub;
            emxEnsureCapacity_real_T(sp, gradP, i1, &eb_emlrtRTEI);
            gradP_data = gradP->data;
            for (i1 = 0; i1 < loop_ub; i1++) {
              gradP_data[i1] =
                  xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
            }
            i = phif->size[0] * phif->size[1];
            phif->size[0] = (int32_T)b_boundary[0];
            phif->size[1] = (int32_T)b_boundary[1];
            emxEnsureCapacity_real_T(sp, phif, i, &gb_emlrtRTEI);
            phif_data = phif->data;
            for (i = 0; i < sizes_tmp_tmp; i++) {
              phif_data[i] = gradP_data[i];
            }
            /*  computes kump discontinuity if present and update the initial */
            /*  state of ode for the next loop */
            if (tt->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0],
                                            &fc_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (tt_data[tt->size[0] - 1] != Tfin) {
              if (b_physical->EPS == 0.0) {
                real_T b_S_p[5];
                if (NSTATE < 1.0) {
                  loop_ub = 0;
                } else {
                  if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
                    emlrtIntegerCheckR2012b(NSTATE, &hb_emlrtDCI,
                                            (emlrtConstCTX)sp);
                  }
                  if (((int32_T)NSTATE < 1) ||
                      ((int32_T)NSTATE > xx->size[1])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1,
                                                  xx->size[1], &ub_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  loop_ub = (int32_T)NSTATE;
                }
                if (xx->size[0] < 1) {
                  emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                                &vb_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                i = s0->size[0];
                s0->size[0] = loop_ub;
                emxEnsureCapacity_real_T(sp, s0, i, &kb_emlrtRTEI);
                s0_data = s0->data;
                for (i = 0; i < loop_ub; i++) {
                  s0_data[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
                }
                if (NSTATE + 1.0 > a) {
                  i = 0;
                  i1 = 0;
                } else {
                  if (NSTATE + 1.0 !=
                      (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
                    emlrtIntegerCheckR2012b(NSTATE + 1.0, &gb_emlrtDCI,
                                            (emlrtConstCTX)sp);
                  }
                  if (((int32_T)(NSTATE + 1.0) < 1) ||
                      ((int32_T)(NSTATE + 1.0) > xx->size[1])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1,
                                                  xx->size[1], &sb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i = (int32_T)(NSTATE + 1.0) - 1;
                  if (a != d) {
                    emlrtIntegerCheckR2012b(a, &fb_emlrtDCI, (emlrtConstCTX)sp);
                  }
                  if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                                  &rb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i1 = (int32_T)a;
                }
                if (xx->size[0] < 1) {
                  emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                                &tb_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                loop_ub = i1 - i;
                i1 = pf->size[0];
                pf->size[0] = loop_ub;
                emxEnsureCapacity_real_T(sp, pf, i1, &nb_emlrtRTEI);
                pf_data = pf->data;
                for (i1 = 0; i1 < loop_ub; i1++) {
                  pf_data[i1] =
                      xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
                }
                st.site = &j_emlrtRSI;
                S_x_fun(&st, s0, pf, Tmax, b_S_x);
                st.site = &k_emlrtRSI;
                S_p_fun(&st, s0, pf, Tmax, b_physical->c, b_S_p);
                st.site = &l_emlrtRSI;
                b_Switching_Function(&st, s0, pf, b_physical->Tmax,
                                     b_physical->c, b_physical->NSTATE,
                                     b_physical->shoot, b_physical->EPS,
                                     &deltaP, &S);
                if (a < 1.0) {
                  loop_ub = 0;
                } else {
                  if (a != d) {
                    emlrtIntegerCheckR2012b(a, &eb_emlrtDCI, (emlrtConstCTX)sp);
                  }
                  if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                                  &pb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  loop_ub = (int32_T)a;
                }
                if (xx->size[0] < 1) {
                  emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                                &qb_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                i = b_xx->size[0];
                b_xx->size[0] = loop_ub;
                emxEnsureCapacity_real_T(sp, b_xx, i, &sb_emlrtRTEI);
                varargin_2_data = b_xx->data;
                for (i = 0; i < loop_ub; i++) {
                  varargin_2_data[i] =
                      xx_data[(xx->size[0] + xx->size[0] * i) - 1];
                }
                st.site = &m_emlrtRSI;
                derivatives(&st, b_xx, b_physical->Tmax, b_physical->c,
                            b_physical->NSTATE, b_physical->shoot,
                            b_physical->EPS, SIGN, dydt_min);
                dydt_min_data = dydt_min->data;
                SIGN = S;
                if (a < 1.0) {
                  loop_ub = 0;
                } else {
                  if (a != d) {
                    emlrtIntegerCheckR2012b(a, &db_emlrtDCI, (emlrtConstCTX)sp);
                  }
                  if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                                  &nb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  loop_ub = (int32_T)a;
                }
                if (xx->size[0] < 1) {
                  emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                                &ob_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                i = b_xx->size[0];
                b_xx->size[0] = loop_ub;
                emxEnsureCapacity_real_T(sp, b_xx, i, &vb_emlrtRTEI);
                varargin_2_data = b_xx->data;
                for (i = 0; i < loop_ub; i++) {
                  varargin_2_data[i] =
                      xx_data[(xx->size[0] + xx->size[0] * i) - 1];
                }
                st.site = &n_emlrtRSI;
                derivatives(&st, b_xx, b_physical->Tmax, b_physical->c,
                            b_physical->NSTATE, b_physical->shoot,
                            b_physical->EPS, S, dydt_plus);
                dydt_plus_data = dydt_plus->data;
                if ((dydt_plus->size[0] != dydt_min->size[0]) &&
                    ((dydt_plus->size[0] != 1) && (dydt_min->size[0] != 1))) {
                  emlrtDimSizeImpxCheckR2021b(dydt_plus->size[0],
                                              dydt_min->size[0], &i_emlrtECI,
                                              (emlrtConstCTX)sp);
                }
                st.site = &o_emlrtRSI;
                eye(&st, 2.0 * NSTATE, psi);
                gradX_data = psi->data;
                st.site = &o_emlrtRSI;
                loop_ub = s0->size[0];
                for (i = 0; i < loop_ub; i++) {
                  if (s0_data[i] != (int32_T)muDoubleScalarFloor(s0_data[i])) {
                    emlrtIntegerCheckR2012b(s0_data[i], &ob_emlrtDCI, &st);
                  }
                  i1 = (int32_T)s0_data[i];
                  if ((i1 < 1) || (i1 > 5)) {
                    emlrtDynamicBoundsCheckR2012b(i1, 1, 5, &hc_emlrtBCI, &st);
                  }
                }
                loop_ub = pf->size[0];
                for (i = 0; i < loop_ub; i++) {
                  if (pf_data[i] != (int32_T)muDoubleScalarFloor(pf_data[i])) {
                    emlrtIntegerCheckR2012b(pf_data[i], &pb_emlrtDCI, &st);
                  }
                  i1 = (int32_T)pf_data[i];
                  if ((i1 < 1) || (i1 > 1)) {
                    emlrtDynamicBoundsCheckR2012b(i1, 1, 1, &ic_emlrtBCI, &st);
                  }
                }
                b_st.site = &li_emlrtRSI;
                if ((s0->size[0] != 0) && (pf->size[0] != 0)) {
                  nx = pf->size[0];
                } else if ((s0->size[0] != 0) && (pf->size[0] != 0)) {
                  nx = pf->size[0];
                } else {
                  nx = pf->size[0];
                }
                c_st.site = &mi_emlrtRSI;
                if ((pf->size[0] != nx) &&
                    ((s0->size[0] != 0) && (pf->size[0] != 0))) {
                  emlrtErrorWithMessageIdR2018a(
                      &c_st, &emlrtRTEI,
                      "MATLAB:catenate:matrixDimensionMismatch",
                      "MATLAB:catenate:matrixDimensionMismatch", 0);
                }
                if ((pf->size[0] != nx) &&
                    ((s0->size[0] != 0) && (pf->size[0] != 0))) {
                  emlrtErrorWithMessageIdR2018a(
                      &c_st, &emlrtRTEI,
                      "MATLAB:catenate:matrixDimensionMismatch",
                      "MATLAB:catenate:matrixDimensionMismatch", 0);
                }
                empty_non_axis_sizes = (nx == 0);
                if (empty_non_axis_sizes ||
                    ((s0->size[0] != 0) && (pf->size[0] != 0))) {
                  maxdimlen = s0->size[0];
                } else {
                  maxdimlen = 0;
                }
                if (empty_non_axis_sizes ||
                    ((s0->size[0] != 0) && (pf->size[0] != 0))) {
                  sizes_idx_0 = s0->size[0];
                } else {
                  sizes_idx_0 = 0;
                }
                st.site = &o_emlrtRSI;
                if (dydt_plus->size[0] == dydt_min->size[0]) {
                  loop_ub = dydt_plus->size[0];
                  for (i = 0; i < loop_ub; i++) {
                    dydt_plus_data[i] -= dydt_min_data[i];
                  }
                } else {
                  b_st.site = &o_emlrtRSI;
                  minus(&b_st, dydt_plus, dydt_min);
                  dydt_plus_data = dydt_plus->data;
                }
                i = S_x->size[0] * S_x->size[1];
                S_x->size[0] = s0->size[0];
                S_x->size[1] = pf->size[0];
                emxEnsureCapacity_real_T(&st, S_x, i, &yb_emlrtRTEI);
                grad_data = S_x->data;
                loop_ub = pf->size[0];
                for (i = 0; i < loop_ub; i++) {
                  sizes_tmp_tmp = s0->size[0];
                  for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
                    grad_data[i1 + S_x->size[0] * i] =
                        b_S_x[(int32_T)s0_data[i1] - 1];
                  }
                }
                i = S_p->size[0] * S_p->size[1];
                S_p->size[0] = s0->size[0];
                S_p->size[1] = pf->size[0];
                emxEnsureCapacity_real_T(&st, S_p, i, &ac_emlrtRTEI);
                varargin_2_data = S_p->data;
                loop_ub = pf->size[0];
                for (i = 0; i < loop_ub; i++) {
                  sizes_tmp_tmp = s0->size[0];
                  for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
                    varargin_2_data[i1 + S_p->size[0] * i] =
                        b_S_p[(int32_T)s0_data[i1] - 1];
                  }
                }
                i = phi->size[0] * phi->size[1];
                phi->size[0] = nx;
                phi->size[1] = maxdimlen + sizes_idx_0;
                emxEnsureCapacity_real_T(&st, phi, i, &bc_emlrtRTEI);
                phi_data = phi->data;
                for (i = 0; i < maxdimlen; i++) {
                  for (i1 = 0; i1 < nx; i1++) {
                    phi_data[i1 + phi->size[0] * i] =
                        grad_data[i + maxdimlen * i1] / S;
                  }
                }
                for (i = 0; i < sizes_idx_0; i++) {
                  for (i1 = 0; i1 < nx; i1++) {
                    phi_data[i1 + phi->size[0] * (i + maxdimlen)] =
                        varargin_2_data[i + sizes_idx_0 * i1] / S;
                  }
                }
                b_st.site = &mg_emlrtRSI;
                dynamic_size_checks(&b_st, dydt_plus, phi, phi->size[0]);
                i = S_x->size[0] * S_x->size[1];
                S_x->size[0] = dydt_plus->size[0];
                S_x->size[1] = phi->size[1];
                emxEnsureCapacity_real_T(&st, S_x, i, &cc_emlrtRTEI);
                grad_data = S_x->data;
                loop_ub = phi->size[1];
                for (i = 0; i < loop_ub; i++) {
                  sizes_tmp_tmp = dydt_plus->size[0];
                  for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
                    grad_data[i1 + S_x->size[0] * i] =
                        dydt_plus_data[i1] * phi_data[phi->size[0] * i];
                  }
                }
                if ((psi->size[0] != S_x->size[0]) &&
                    ((psi->size[0] != 1) && (S_x->size[0] != 1))) {
                  emlrtDimSizeImpxCheckR2021b(psi->size[0], S_x->size[0],
                                              &h_emlrtECI, (emlrtConstCTX)sp);
                }
                if ((psi->size[1] != S_x->size[1]) &&
                    ((psi->size[1] != 1) && (S_x->size[1] != 1))) {
                  emlrtDimSizeImpxCheckR2021b(psi->size[1], S_x->size[1],
                                              &g_emlrtECI, (emlrtConstCTX)sp);
                }
                if ((psi->size[0] == S_x->size[0]) &&
                    (psi->size[1] == S_x->size[1])) {
                  loop_ub = psi->size[0] * psi->size[1];
                  for (i = 0; i < loop_ub; i++) {
                    gradX_data[i] += grad_data[i];
                  }
                } else {
                  st.site = &o_emlrtRSI;
                  plus(&st, psi, S_x);
                }
                st.site = &p_emlrtRSI;
                b_varargin_3 = *varargin_3;
                b_input_sizes[0] = (int32_T)b_boundary[0];
                b_input_sizes[1] = (int32_T)b_boundary[1];
                b_varargin_3.size = &b_input_sizes[0];
                b_varargin_3.numDimensions = 2;
                b_st.site = &mg_emlrtRSI;
                b_dynamic_size_checks(&b_st, psi, &b_varargin_3, psi->size[1],
                                      phif->size[0]);
                b_varargin_3 = *varargin_3;
                c_input_sizes[0] = (int32_T)b_boundary[0];
                c_input_sizes[1] = (int32_T)b_boundary[1];
                b_varargin_3.size = &c_input_sizes[0];
                b_varargin_3.numDimensions = 2;
                b_st.site = &lg_emlrtRSI;
                c_mtimes(&b_st, psi, &b_varargin_3, y);
                grad_data = y->data;
                if (NSTATE < 1.0) {
                  loop_ub = 0;
                } else {
                  if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
                    emlrtIntegerCheckR2012b(NSTATE, &cb_emlrtDCI,
                                            (emlrtConstCTX)sp);
                  }
                  if (((int32_T)NSTATE < 1) ||
                      ((int32_T)NSTATE > xx->size[1])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1,
                                                  xx->size[1], &lb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  loop_ub = (int32_T)NSTATE;
                }
                if (NSTATE + 1.0 > a) {
                  i = 0;
                  i1 = 0;
                } else {
                  if (NSTATE + 1.0 !=
                      (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
                    emlrtIntegerCheckR2012b(NSTATE + 1.0, &bb_emlrtDCI,
                                            (emlrtConstCTX)sp);
                  }
                  if (((int32_T)(NSTATE + 1.0) < 1) ||
                      ((int32_T)(NSTATE + 1.0) > xx->size[1])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1,
                                                  xx->size[1], &kb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i = (int32_T)(NSTATE + 1.0) - 1;
                  if (a != d) {
                    emlrtIntegerCheckR2012b(a, &ab_emlrtDCI, (emlrtConstCTX)sp);
                  }
                  if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                                  &jb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  i1 = (int32_T)a;
                }
                st.site = &q_emlrtRSI;
                if (xx->size[0] < 1) {
                  emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                                &mb_emlrtBCI, &st);
                }
                /*  Computes switching Function and its derivatives */
                /*  Definition of the Switching function and its derivatives
                 * with evaluation of the */
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
                maxdimlen = b_xx->size[0];
                b_xx->size[0] = loop_ub;
                emxEnsureCapacity_real_T(&st, b_xx, maxdimlen, &dc_emlrtRTEI);
                varargin_2_data = b_xx->data;
                for (maxdimlen = 0; maxdimlen < loop_ub; maxdimlen++) {
                  varargin_2_data[maxdimlen] =
                      xx_data[(xx->size[0] + xx->size[0] * maxdimlen) - 1];
                }
                loop_ub = i1 - i;
                i1 = pf->size[0];
                pf->size[0] = loop_ub;
                emxEnsureCapacity_real_T(&st, pf, i1, &ec_emlrtRTEI);
                pf_data = pf->data;
                for (i1 = 0; i1 < loop_ub; i1++) {
                  pf_data[i1] =
                      xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
                }
                b_st.site = &mb_emlrtRSI;
                S = S_fun(&b_st, b_xx, pf, b_physical->Tmax, b_physical->c);
                if (a < 1.0) {
                  loop_ub = 0;
                } else {
                  if (a != d) {
                    emlrtIntegerCheckR2012b(a, &y_emlrtDCI, (emlrtConstCTX)sp);
                  }
                  if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
                    emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1],
                                                  &hb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  loop_ub = (int32_T)a;
                }
                st.site = &r_emlrtRSI;
                b_st.site = &jb_emlrtRSI;
                b_boundary[0] = a * a;
                b_boundary[1] = 1.0;
                st.site = &r_emlrtRSI;
                nx = y->size[0] * y->size[1];
                b_st.site = &lb_emlrtRSI;
                assertValidSizeArg(&b_st, b_boundary);
                sizes_tmp_tmp = (int32_T)b_boundary[0];
                maxdimlen = y->size[0];
                if (y->size[1] > y->size[0]) {
                  maxdimlen = y->size[1];
                }
                maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
                if ((int32_T)b_boundary[0] > maxdimlen) {
                  emlrtErrorWithMessageIdR2018a(
                      &st, &d_emlrtRTEI,
                      "Coder:toolbox:reshape_emptyReshapeLimit",
                      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
                }
                if (maxdimlen < 1) {
                  emlrtErrorWithMessageIdR2018a(
                      &st, &d_emlrtRTEI,
                      "Coder:toolbox:reshape_emptyReshapeLimit",
                      "Coder:toolbox:reshape_emptyReshapeLimit", 0);
                }
                if ((int32_T)b_boundary[0] < 0) {
                  emlrtErrorWithMessageIdR2018a(
                      &st, &c_emlrtRTEI,
                      "MATLAB:checkDimCommon:nonnegativeSize",
                      "MATLAB:checkDimCommon:nonnegativeSize", 0);
                }
                if ((int32_T)b_boundary[0] != nx) {
                  emlrtErrorWithMessageIdR2018a(
                      &st, &b_emlrtRTEI,
                      "Coder:MATLAB:getReshapeDims_notSameNumel",
                      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
                }
                if (xx->size[0] < 1) {
                  emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                                &ib_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                i = loop_ub + (int32_T)b_boundary[0];
                i1 = s0->size[0];
                s0->size[0] = i + 1;
                emxEnsureCapacity_real_T(sp, s0, i1, &fc_emlrtRTEI);
                s0_data = s0->data;
                for (i1 = 0; i1 < loop_ub; i1++) {
                  s0_data[i1] = xx_data[(xx->size[0] + xx->size[0] * i1) - 1];
                }
                for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
                  s0_data[i1 + loop_ub] = grad_data[i1];
                }
                s0_data[i] = S;
              } else {
                if (xx->size[0] < 1) {
                  emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                                &gb_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                i = s0->size[0];
                s0->size[0] = xx->size[1];
                emxEnsureCapacity_real_T(sp, s0, i, &jb_emlrtRTEI);
                s0_data = s0->data;
                loop_ub = xx->size[1];
                for (i = 0; i < loop_ub; i++) {
                  s0_data[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
                }
                if (SIGN != 0.0) {
                  SIGN = 0.0;
                } else {
                  if ((xx->size[0] - 1 < 1) ||
                      (xx->size[0] - 1 > xx->size[0])) {
                    emlrtDynamicBoundsCheckR2012b(xx->size[0] - 1, 1,
                                                  xx->size[0], &fb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (xx->size[1] < 1) {
                    emlrtDynamicBoundsCheckR2012b(xx->size[1], 1, xx->size[1],
                                                  &eb_emlrtBCI,
                                                  (emlrtConstCTX)sp);
                  }
                  if (muDoubleScalarSign(
                          xx_data[(xx->size[0] +
                                   xx->size[0] * (xx->size[1] - 1)) -
                                  2]) == b_physical->shoot) {
                    SIGN = b_physical->shoot;
                  } else {
                    SIGN = -b_physical->shoot;
                  }
                }
              }
            }
            if (tt->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0],
                                            &gc_emlrtBCI, (emlrtConstCTX)sp);
            }
            told = tt_data[tt->size[0] - 1];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)sp);
            }
          } else {
            guard1 = true;
            exitg1 = 1;
          }
        } else {
          guard1 = true;
          exitg1 = 1;
        }
      } else {
        guard1 = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } break;
  default:
    st.site = &vj_emlrtRSI;
    disp(&st, b_emlrt_marshallOut(&st, cv), &emlrtMCI);
    break;
  }
  if (guard1) {
    /*  final values */
    if (b_physical->NSTATE < 1.0) {
      loop_ub = 0;
    } else {
      if (b_physical->NSTATE !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE, &x_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)b_physical->NSTATE < 1) ||
          ((int32_T)b_physical->NSTATE > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                      xx->size[1], &cb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = (int32_T)b_physical->NSTATE;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &db_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = s0->size[0];
    s0->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, s0, i, &y_emlrtRTEI);
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
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &w_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      xx->size[1], &ab_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (a != d) {
        emlrtIntegerCheckR2012b(a, &v_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)a < 1) || ((int32_T)a > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, xx->size[1], &y_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = (int32_T)a;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &bb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = i1 - i;
    i1 = pf->size[0];
    pf->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, pf, i1, &ab_emlrtRTEI);
    pf_data = pf->data;
    for (i1 = 0; i1 < loop_ub; i1++) {
      pf_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
    }
    if (b_strcmp(par->problem)) {
      nx = 0;
    } else if (c_strcmp(par->problem)) {
      nx = 1;
    } else {
      nx = -1;
    }
    switch (nx) {
    case 0:
      st.site = &s_emlrtRSI;
      /*  Computes switching Function and its derivatives */
      /*  Definition of the Switching function and its derivatives with
       * evaluation of the */
      /*  matlabFunction S_fun, S_x_fun, S_p_fun, S_xx_fun, S_pp_fun, S_xp_fun
       */
      /*  Input: */
      /*  x: state vector [NSTATEx1] */
      /*  p: costate vector [NSTATEx1] */
      /*  physical: structure of physical variables and functions */
      /*  Output: */
      /*  S: switching function */
      /*  Sd: switching function first derivatives */
      /*  Sdd: switching function second derivatives */
      b_st.site = &mb_emlrtRSI;
      Sf = S_fun(&b_st, s0, pf, b_physical->Tmax, b_physical->c);
      st.site = &t_emlrtRSI;
      S = Hamiltonian(&st, s0, pf, Sf, b_physical->Tmax, b_physical->c,
                      b_physical->shoot, b_physical->EPS);
      if ((s0->size[0] != 5) && (s0->size[0] != 1)) {
        emlrtDimSizeImpxCheckR2021b(s0->size[0], 5, &f_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      if ((pf->size[0] != 5) && (pf->size[0] != 1)) {
        emlrtDimSizeImpxCheckR2021b(pf->size[0], 5, &e_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      if (pf->size[0] == 5) {
        deltaP = 0.0;
        for (i = 0; i < 5; i++) {
          deltaP += boundary->Sigma[i] * (pf_data[i] + b_physical->g0_x[i]);
        }
      } else {
        deltaP = c_binary_expand_op(boundary, pf, b_physical);
      }
      /*  objective function residual */
      if (s0->size[0] == 5) {
        for (i = 0; i < 5; i++) {
          b_S_x[i] = s0_data[i] - boundary->Xf[i];
        }
        obj_size[0] = 6;
        obj_data[0] = S;
        for (i = 0; i < 4; i++) {
          S = 0.0;
          for (i1 = 0; i1 < 5; i1++) {
            S += boundary->Pigreco[i1 + 5 * i] * b_S_x[i1];
          }
          obj_data[i + 1] = S;
        }
        obj_data[5] = deltaP;
      } else {
        b_binary_expand_op(obj_data, &obj_size[0], S, boundary, s0, deltaP);
      }
      break;
    case 1:
      st.site = &u_emlrtRSI;
      /*  Computes switching Function and its derivatives */
      /*  Definition of the Switching function and its derivatives with
       * evaluation of the */
      /*  matlabFunction S_fun, S_x_fun, S_p_fun, S_xx_fun, S_pp_fun, S_xp_fun
       */
      /*  Input: */
      /*  x: state vector [NSTATEx1] */
      /*  p: costate vector [NSTATEx1] */
      /*  physical: structure of physical variables and functions */
      /*  Output: */
      /*  S: switching function */
      /*  Sd: switching function first derivatives */
      /*  Sdd: switching function second derivatives */
      b_st.site = &mb_emlrtRSI;
      Sf = S_fun(&b_st, s0, pf, b_physical->Tmax, b_physical->c);
      st.site = &v_emlrtRSI;
      S = Hamiltonian(&st, s0, pf, Sf, b_physical->Tmax, b_physical->c,
                      b_physical->shoot, b_physical->EPS);
      if ((s0->size[0] != 5) && (s0->size[0] != 1)) {
        emlrtDimSizeImpxCheckR2021b(s0->size[0], 5, &d_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      if ((pf->size[0] != 5) && (pf->size[0] != 1)) {
        emlrtDimSizeImpxCheckR2021b(pf->size[0], 5, &c_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      if (pf->size[0] == 5) {
        deltaP = 0.0;
        for (i = 0; i < 5; i++) {
          deltaP += boundary->Sigma[i] * (pf_data[i] + b_physical->g0_x[i]);
        }
      } else {
        deltaP = c_binary_expand_op(boundary, pf, b_physical);
      }
      /*  objective function residual */
      if (s0->size[0] == 5) {
        for (i = 0; i < 5; i++) {
          b_S_x[i] = s0_data[i] - boundary->Xf[i];
        }
        obj_size[0] = 6;
        obj_data[0] = S;
        for (i = 0; i < 4; i++) {
          S = 0.0;
          for (i1 = 0; i1 < 5; i1++) {
            S += boundary->Pigreco[i1 + 5 * i] * b_S_x[i1];
          }
          obj_data[i + 1] = S;
        }
        obj_data[5] = deltaP;
      } else {
        b_binary_expand_op(obj_data, &obj_size[0], S, boundary, s0, deltaP);
      }
      break;
    }
    /*  computes the gradient if requested */
    if (b_physical->NSTATE < 1.0) {
      loop_ub = 0;
    } else {
      if (phif->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, phif->size[0], &x_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_physical->NSTATE !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE, &u_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)b_physical->NSTATE < 1) ||
          ((int32_T)b_physical->NSTATE > phif->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                      phif->size[0], &w_emlrtBCI,
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
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &t_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      phif->size[1], &v_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (a != d) {
        emlrtIntegerCheckR2012b(a, &s_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)a < 1) || ((int32_T)a > phif->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[1], &u_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = (int32_T)a;
    }
    st.site = &w_emlrtRSI;
    maxdimlen = phi->size[0] * phi->size[1];
    phi->size[0] = loop_ub;
    sizes_tmp_tmp = i1 - i;
    phi->size[1] = sizes_tmp_tmp;
    emxEnsureCapacity_real_T(&st, phi, maxdimlen, &db_emlrtRTEI);
    phi_data = phi->data;
    for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
      for (maxdimlen = 0; maxdimlen < loop_ub; maxdimlen++) {
        phi_data[maxdimlen + phi->size[0] * i1] =
            phif_data[maxdimlen + phif->size[0] * (i + i1)];
      }
    }
    b_st.site = &mg_emlrtRSI;
    c_dynamic_size_checks(&b_st, phi, loop_ub);
    b_st.site = &lg_emlrtRSI;
    d_mtimes(&b_st, boundary->Pigreco, phi, gradX);
    gradX_data = gradX->data;
    if (b_physical->NSTATE + 1.0 > a) {
      i = 0;
      i1 = 0;
      maxdimlen = 0;
      sizes_idx_0 = 0;
    } else {
      S = (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0);
      if (b_physical->NSTATE + 1.0 != S) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &r_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      phif->size[0], &t_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (a != d) {
        emlrtIntegerCheckR2012b(a, &q_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)a < 1) || ((int32_T)a > phif->size[0])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[0], &s_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = (int32_T)a;
      if (b_physical->NSTATE + 1.0 != S) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &p_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      phif->size[1], &r_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      maxdimlen = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (a != d) {
        emlrtIntegerCheckR2012b(a, &o_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)a < 1) || ((int32_T)a > phif->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[1], &q_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      sizes_idx_0 = (int32_T)a;
    }
    st.site = &x_emlrtRSI;
    loop_ub = i1 - i;
    i2 = phi->size[0] * phi->size[1];
    phi->size[0] = loop_ub;
    sizes_tmp_tmp = sizes_idx_0 - maxdimlen;
    phi->size[1] = sizes_tmp_tmp;
    emxEnsureCapacity_real_T(&st, phi, i2, &fb_emlrtRTEI);
    phi_data = phi->data;
    for (sizes_idx_0 = 0; sizes_idx_0 < sizes_tmp_tmp; sizes_idx_0++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        phi_data[i2 + phi->size[0] * sizes_idx_0] =
            phif_data[(i + i2) + phif->size[0] * (maxdimlen + sizes_idx_0)];
      }
    }
    b_st.site = &mg_emlrtRSI;
    c_dynamic_size_checks(&b_st, phi, i1 - i);
    b_st.site = &lg_emlrtRSI;
    e_mtimes(&b_st, boundary->Sigma, phi, gradP);
    gradP_data = gradP->data;
    if (b_strcmp(par->problem)) {
      nx = 0;
    } else if (c_strcmp(par->problem)) {
      nx = 1;
    } else {
      nx = -1;
    }
    switch (nx) {
    case 0: {
      real_T c_boundary[4];
      st.site = &y_emlrtRSI;
      HamiltonianFirstDerivatives(
          &st, s0, pf, Sf, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
          b_physical->shoot, b_physical->EPS, dydt_min, dydt_plus);
      dydt_plus_data = dydt_plus->data;
      dydt_min_data = dydt_min->data;
      if (b_physical->NSTATE < 1.0) {
        loop_ub = 0;
      } else {
        if (phif->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, phif->size[0], &p_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_physical->NSTATE !=
            (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
          emlrtIntegerCheckR2012b(b_physical->NSTATE, &n_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        if (((int32_T)b_physical->NSTATE < 1) ||
            ((int32_T)b_physical->NSTATE > phif->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                        phif->size[0], &o_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        loop_ub = (int32_T)b_physical->NSTATE;
      }
      if (b_physical->NSTATE + 1.0 > a) {
        i = 0;
        i1 = 0;
        maxdimlen = 0;
        sizes_idx_0 = 0;
        i2 = 0;
        nx = 0;
      } else {
        S = (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0);
        if (b_physical->NSTATE + 1.0 != S) {
          emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &m_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
            ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                        phif->size[1], &n_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
        if (a != d) {
          emlrtIntegerCheckR2012b(a, &l_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)a < 1) || ((int32_T)a > phif->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[1],
                                        &m_emlrtBCI, (emlrtConstCTX)sp);
        }
        i1 = (int32_T)a;
        if (b_physical->NSTATE + 1.0 != S) {
          emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &k_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
            ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                        phif->size[0], &l_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        maxdimlen = (int32_T)(b_physical->NSTATE + 1.0) - 1;
        if (a != d) {
          emlrtIntegerCheckR2012b(a, &j_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)a < 1) || ((int32_T)a > phif->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[0],
                                        &k_emlrtBCI, (emlrtConstCTX)sp);
        }
        sizes_idx_0 = (int32_T)a;
        if (b_physical->NSTATE + 1.0 != S) {
          emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &i_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
            ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                        phif->size[1], &j_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i2 = (int32_T)(b_physical->NSTATE + 1.0) - 1;
        if (a != d) {
          emlrtIntegerCheckR2012b(a, &h_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)a < 1) || ((int32_T)a > phif->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[1],
                                        &i_emlrtBCI, (emlrtConstCTX)sp);
        }
        nx = (int32_T)a;
      }
      st.site = &ab_emlrtRSI;
      i3 = phi->size[0] * phi->size[1];
      phi->size[0] = loop_ub;
      sizes_tmp_tmp = i1 - i;
      phi->size[1] = sizes_tmp_tmp;
      emxEnsureCapacity_real_T(&st, phi, i3, &hb_emlrtRTEI);
      phi_data = phi->data;
      for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
        for (i3 = 0; i3 < loop_ub; i3++) {
          phi_data[i3 + phi->size[0] * i1] =
              phif_data[i3 + phif->size[0] * (i + i1)];
        }
      }
      b_st.site = &mg_emlrtRSI;
      c_dynamic_size_checks(&b_st, phi, loop_ub);
      b_st.site = &lg_emlrtRSI;
      f_mtimes(&b_st, (real_T *)dydt_min->data, phi, varargin_3);
      varargin_3_data = varargin_3->data;
      st.site = &ab_emlrtRSI;
      loop_ub = sizes_idx_0 - maxdimlen;
      i = phi->size[0] * phi->size[1];
      phi->size[0] = loop_ub;
      sizes_tmp_tmp = nx - i2;
      phi->size[1] = sizes_tmp_tmp;
      emxEnsureCapacity_real_T(&st, phi, i, &lb_emlrtRTEI);
      phi_data = phi->data;
      for (i = 0; i < sizes_tmp_tmp; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          phi_data[i1 + phi->size[0] * i] =
              phif_data[(maxdimlen + i1) + phif->size[0] * (i2 + i)];
        }
      }
      b_st.site = &mg_emlrtRSI;
      c_dynamic_size_checks(&b_st, phi, sizes_idx_0 - maxdimlen);
      b_st.site = &lg_emlrtRSI;
      f_mtimes(&b_st, (real_T *)dydt_plus->data, phi, r);
      grad_data = r->data;
      if ((varargin_3->size[1] != r->size[1]) &&
          ((varargin_3->size[1] != 1) && (r->size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(varargin_3->size[1], r->size[1],
                                    &b_emlrtECI, (emlrtConstCTX)sp);
      }
      st.site = &bb_emlrtRSI;
      if (varargin_3->size[1] == r->size[1]) {
        i = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        varargin_1->size[1] = varargin_3->size[1] + 1;
        emxEnsureCapacity_real_T(&st, varargin_1, i, &ob_emlrtRTEI);
        pf_data = varargin_1->data;
        loop_ub = varargin_3->size[1];
        for (i = 0; i < loop_ub; i++) {
          pf_data[i] = varargin_3_data[i] + grad_data[i];
        }
        pf_data[varargin_3->size[1]] = 0.0;
      } else {
        b_st.site = &bb_emlrtRSI;
        binary_expand_op(&b_st, varargin_1, varargin_3, r);
        pf_data = varargin_1->data;
      }
      for (i = 0; i < 4; i++) {
        d = 0.0;
        for (i1 = 0; i1 < 5; i1++) {
          d += boundary->Pigreco[i1 + 5 * i] * dydt_plus_data[i1];
        }
        c_boundary[i] = d;
      }
      i = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = 4;
      varargin_2->size[1] = gradX->size[1] + 1;
      emxEnsureCapacity_real_T(&st, varargin_2, i, &qb_emlrtRTEI);
      varargin_2_data = varargin_2->data;
      loop_ub = gradX->size[1];
      for (i = 0; i < loop_ub; i++) {
        varargin_2_data[4 * i] = gradX_data[4 * i];
        i1 = 4 * i + 1;
        varargin_2_data[i1] = gradX_data[i1];
        i1 = 4 * i + 2;
        varargin_2_data[i1] = gradX_data[i1];
        i1 = 4 * i + 3;
        varargin_2_data[i1] = gradX_data[i1];
      }
      varargin_2_data[4 * gradX->size[1]] = c_boundary[0];
      varargin_2_data[4 * gradX->size[1] + 1] = c_boundary[1];
      varargin_2_data[4 * gradX->size[1] + 2] = c_boundary[2];
      varargin_2_data[4 * gradX->size[1] + 3] = c_boundary[3];
      S = 0.0;
      for (i = 0; i < 5; i++) {
        S += boundary->Sigma[i] * -dydt_min_data[i];
      }
      i = varargin_3->size[0] * varargin_3->size[1];
      varargin_3->size[0] = 1;
      varargin_3->size[1] = gradP->size[1] + 1;
      emxEnsureCapacity_real_T(&st, varargin_3, i, &tb_emlrtRTEI);
      varargin_3_data = varargin_3->data;
      loop_ub = gradP->size[1];
      for (i = 0; i < loop_ub; i++) {
        varargin_3_data[i] = gradP_data[i];
      }
      varargin_3_data[gradP->size[1]] = S;
      b_st.site = &li_emlrtRSI;
      c_st.site = &mi_emlrtRSI;
      if (varargin_2->size[1] != varargin_1->size[1]) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if (varargin_3->size[1] != varargin_1->size[1]) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      i = grad->size[0] * grad->size[1];
      grad->size[0] = 6;
      grad->size[1] = varargin_1->size[1];
      emxEnsureCapacity_real_T(&b_st, grad, i, &wb_emlrtRTEI);
      grad_data = grad->data;
      loop_ub = varargin_1->size[1];
      for (i = 0; i < loop_ub; i++) {
        grad_data[grad->size[0] * i] = pf_data[i];
      }
      loop_ub = varargin_1->size[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < 4; i1++) {
          grad_data[(i1 + grad->size[0] * i) + 1] = varargin_2_data[i1 + 4 * i];
        }
      }
      loop_ub = varargin_1->size[1];
      for (i = 0; i < loop_ub; i++) {
        grad_data[grad->size[0] * i + 5] = varargin_3_data[i];
      }
    } break;
    case 1: {
      real_T c_boundary[4];
      st.site = &cb_emlrtRSI;
      HamiltonianFirstDerivatives(
          &st, s0, pf, Sf, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
          b_physical->shoot, b_physical->EPS, dydt_min, dydt_plus);
      dydt_plus_data = dydt_plus->data;
      dydt_min_data = dydt_min->data;
      if (b_physical->NSTATE < 1.0) {
        loop_ub = 0;
      } else {
        if (phif->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, phif->size[0], &h_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (b_physical->NSTATE !=
            (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
          emlrtIntegerCheckR2012b(b_physical->NSTATE, &g_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        if (((int32_T)b_physical->NSTATE < 1) ||
            ((int32_T)b_physical->NSTATE > phif->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                        phif->size[0], &g_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        loop_ub = (int32_T)b_physical->NSTATE;
      }
      if (b_physical->NSTATE + 1.0 > a) {
        i = 0;
        i1 = 0;
        maxdimlen = 0;
        sizes_idx_0 = 0;
        i2 = 0;
        nx = 0;
      } else {
        S = (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0);
        if (b_physical->NSTATE + 1.0 != S) {
          emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &f_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
            ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                        phif->size[1], &f_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
        if (a != d) {
          emlrtIntegerCheckR2012b(a, &e_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)a < 1) || ((int32_T)a > phif->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[1],
                                        &e_emlrtBCI, (emlrtConstCTX)sp);
        }
        i1 = (int32_T)a;
        if (b_physical->NSTATE + 1.0 != S) {
          emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &d_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
            ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                        phif->size[0], &d_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        maxdimlen = (int32_T)(b_physical->NSTATE + 1.0) - 1;
        if (a != d) {
          emlrtIntegerCheckR2012b(a, &c_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)a < 1) || ((int32_T)a > phif->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[0],
                                        &c_emlrtBCI, (emlrtConstCTX)sp);
        }
        sizes_idx_0 = (int32_T)a;
        if (b_physical->NSTATE + 1.0 != S) {
          emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &b_emlrtDCI,
                                  (emlrtConstCTX)sp);
        }
        if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
            ((int32_T)(b_physical->NSTATE + 1.0) > phif->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                        phif->size[1], &b_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i2 = (int32_T)(b_physical->NSTATE + 1.0) - 1;
        if (a != d) {
          emlrtIntegerCheckR2012b(a, &emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)a < 1) || ((int32_T)a > phif->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)a, 1, phif->size[1], &emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        nx = (int32_T)a;
      }
      st.site = &db_emlrtRSI;
      i3 = phi->size[0] * phi->size[1];
      phi->size[0] = loop_ub;
      sizes_tmp_tmp = i1 - i;
      phi->size[1] = sizes_tmp_tmp;
      emxEnsureCapacity_real_T(&st, phi, i3, &ib_emlrtRTEI);
      phi_data = phi->data;
      for (i1 = 0; i1 < sizes_tmp_tmp; i1++) {
        for (i3 = 0; i3 < loop_ub; i3++) {
          phi_data[i3 + phi->size[0] * i1] =
              phif_data[i3 + phif->size[0] * (i + i1)];
        }
      }
      b_st.site = &mg_emlrtRSI;
      c_dynamic_size_checks(&b_st, phi, loop_ub);
      b_st.site = &lg_emlrtRSI;
      f_mtimes(&b_st, (real_T *)dydt_min->data, phi, varargin_3);
      varargin_3_data = varargin_3->data;
      st.site = &db_emlrtRSI;
      loop_ub = sizes_idx_0 - maxdimlen;
      i = phi->size[0] * phi->size[1];
      phi->size[0] = loop_ub;
      sizes_tmp_tmp = nx - i2;
      phi->size[1] = sizes_tmp_tmp;
      emxEnsureCapacity_real_T(&st, phi, i, &mb_emlrtRTEI);
      phi_data = phi->data;
      for (i = 0; i < sizes_tmp_tmp; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          phi_data[i1 + phi->size[0] * i] =
              phif_data[(maxdimlen + i1) + phif->size[0] * (i2 + i)];
        }
      }
      b_st.site = &mg_emlrtRSI;
      c_dynamic_size_checks(&b_st, phi, sizes_idx_0 - maxdimlen);
      b_st.site = &lg_emlrtRSI;
      f_mtimes(&b_st, (real_T *)dydt_plus->data, phi, r);
      grad_data = r->data;
      if ((varargin_3->size[1] != r->size[1]) &&
          ((varargin_3->size[1] != 1) && (r->size[1] != 1))) {
        emlrtDimSizeImpxCheckR2021b(varargin_3->size[1], r->size[1], &emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      st.site = &eb_emlrtRSI;
      if (varargin_3->size[1] == r->size[1]) {
        i = varargin_1->size[0] * varargin_1->size[1];
        varargin_1->size[0] = 1;
        varargin_1->size[1] = varargin_3->size[1] + 1;
        emxEnsureCapacity_real_T(&st, varargin_1, i, &pb_emlrtRTEI);
        pf_data = varargin_1->data;
        loop_ub = varargin_3->size[1];
        for (i = 0; i < loop_ub; i++) {
          pf_data[i] = varargin_3_data[i] + grad_data[i];
        }
        pf_data[varargin_3->size[1]] = 0.0;
      } else {
        b_st.site = &eb_emlrtRSI;
        binary_expand_op(&b_st, varargin_1, varargin_3, r);
        pf_data = varargin_1->data;
      }
      for (i = 0; i < 4; i++) {
        d = 0.0;
        for (i1 = 0; i1 < 5; i1++) {
          d += boundary->Pigreco[i1 + 5 * i] * dydt_plus_data[i1];
        }
        c_boundary[i] = d;
      }
      i = varargin_2->size[0] * varargin_2->size[1];
      varargin_2->size[0] = 4;
      varargin_2->size[1] = gradX->size[1] + 1;
      emxEnsureCapacity_real_T(&st, varargin_2, i, &rb_emlrtRTEI);
      varargin_2_data = varargin_2->data;
      loop_ub = gradX->size[1];
      for (i = 0; i < loop_ub; i++) {
        varargin_2_data[4 * i] = gradX_data[4 * i];
        i1 = 4 * i + 1;
        varargin_2_data[i1] = gradX_data[i1];
        i1 = 4 * i + 2;
        varargin_2_data[i1] = gradX_data[i1];
        i1 = 4 * i + 3;
        varargin_2_data[i1] = gradX_data[i1];
      }
      varargin_2_data[4 * gradX->size[1]] = c_boundary[0];
      varargin_2_data[4 * gradX->size[1] + 1] = c_boundary[1];
      varargin_2_data[4 * gradX->size[1] + 2] = c_boundary[2];
      varargin_2_data[4 * gradX->size[1] + 3] = c_boundary[3];
      S = 0.0;
      for (i = 0; i < 5; i++) {
        S += boundary->Sigma[i] * -dydt_min_data[i];
      }
      i = varargin_3->size[0] * varargin_3->size[1];
      varargin_3->size[0] = 1;
      varargin_3->size[1] = gradP->size[1] + 1;
      emxEnsureCapacity_real_T(&st, varargin_3, i, &ub_emlrtRTEI);
      varargin_3_data = varargin_3->data;
      loop_ub = gradP->size[1];
      for (i = 0; i < loop_ub; i++) {
        varargin_3_data[i] = gradP_data[i];
      }
      varargin_3_data[gradP->size[1]] = S;
      b_st.site = &li_emlrtRSI;
      c_st.site = &mi_emlrtRSI;
      if (varargin_2->size[1] != varargin_1->size[1]) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if (varargin_3->size[1] != varargin_1->size[1]) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      i = grad->size[0] * grad->size[1];
      grad->size[0] = 6;
      grad->size[1] = varargin_1->size[1];
      emxEnsureCapacity_real_T(&b_st, grad, i, &xb_emlrtRTEI);
      grad_data = grad->data;
      loop_ub = varargin_1->size[1];
      for (i = 0; i < loop_ub; i++) {
        grad_data[grad->size[0] * i] = pf_data[i];
      }
      loop_ub = varargin_1->size[1];
      for (i = 0; i < loop_ub; i++) {
        for (i1 = 0; i1 < 4; i1++) {
          grad_data[(i1 + grad->size[0] * i) + 1] = varargin_2_data[i1 + 4 * i];
        }
      }
      loop_ub = varargin_1->size[1];
      for (i = 0; i < loop_ub; i++) {
        grad_data[grad->size[0] * i + 5] = varargin_3_data[i];
      }
    } break;
    }
  }
  emxFree_real_T(sp, &S_p);
  emxFree_real_T(sp, &S_x);
  emxFree_real_T(sp, &b_xx);
  emxFree_real_T(sp, &varargin_3);
  emxFree_real_T(sp, &varargin_2);
  emxFree_real_T(sp, &varargin_1);
  emxFree_real_T(sp, &y);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &tt);
  emxFree_real_T(sp, &gradP);
  emxFree_real_T(sp, &gradX);
  emxFree_real_T(sp, &pf);
  emxFree_real_T(sp, &psi);
  emxFree_real_T(sp, &dydt_plus);
  emxFree_real_T(sp, &dydt_min);
  emxFree_real_T(sp, &s0);
  emxFree_real_T(sp, &phi);
  emxFree_real_T(sp, &phif);
  emxFree_real_T(sp, &xx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfunSTM_S_time_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                               real_T physical_c, real_T physical_NSTATE,
                               real_T physical_shoot, real_T physical_EPS,
                               real_T S, const emxArray_real_T *s,
                               emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T b_x;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *dphi;
  emxArray_real_T *p;
  emxArray_real_T *pd;
  emxArray_real_T *x;
  real_T b_H_xp[100];
  real_T H_pp[25];
  real_T H_xp[25];
  real_T H_xx[25];
  real_T tmp_data[5];
  real_T b_dv[2];
  const real_T *s_data;
  real_T d;
  real_T *H_x_data;
  real_T *pd_data;
  real_T *varargout_1_data;
  real_T *x_data;
  int32_T b_physical_NSTATE[2];
  int32_T c_physical_NSTATE[2];
  int32_T i;
  int32_T i1;
  int32_T maxdimlen;
  int32_T n;
  int32_T physical_NSTATE_tmp;
  boolean_T out;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  s_data = s->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &mc_emlrtRSI;
  /*  computation of equations of motion, state transtion matrix derivatives */
  /*  and switching function derivative */
  /*  computation of equations of motion and state transtion matrix derivatives
   */
  /*  Output: */
  /*  xd: states derivatives  */
  /*  pd: costates derivatives  */
  /*  3 input case:  */
  /*  inp1: states and costates vector, inp2: structure for physical variables
   */
  /*  and functions, inp3: switching function     */
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &rc_emlrtBCI, &st);
    }
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &tb_emlrtDCI, &st);
    }
    if (((int32_T)physical_NSTATE < 1) ||
        ((int32_T)physical_NSTATE > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, s->size[0],
                                    &qc_emlrtBCI, &st);
    }
    maxdimlen = (int32_T)physical_NSTATE;
  }
  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = maxdimlen;
  b_st.site = &nc_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x, 1, &gd_emlrtRTEI);
  i = x->size[0];
  x->size[0] = maxdimlen;
  emxEnsureCapacity_real_T(&st, x, i, &gd_emlrtRTEI);
  x_data = x->data;
  for (i = 0; i < maxdimlen; i++) {
    x_data[i] = s_data[i];
  }
  d = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &sb_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1,
                                    s->size[0], &pc_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &rb_emlrtDCI, &st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &oc_emlrtBCI,
                                    &st);
    }
    i1 = (int32_T)d;
  }
  b_physical_NSTATE[0] = 1;
  physical_NSTATE_tmp = i1 - i;
  b_physical_NSTATE[1] = physical_NSTATE_tmp;
  b_st.site = &oc_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &p, 1, &hd_emlrtRTEI);
  i1 = p->size[0];
  p->size[0] = physical_NSTATE_tmp;
  emxEnsureCapacity_real_T(&st, p, i1, &hd_emlrtRTEI);
  x_data = p->data;
  for (i1 = 0; i1 < physical_NSTATE_tmp; i1++) {
    x_data[i1] = s_data[i + i1];
  }
  d = 2.0 * physical_NSTATE + 1.0;
  if (d > s->size[0]) {
    i = 0;
    i1 = 0;
  } else {
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &qb_emlrtDCI, &st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &nc_emlrtBCI,
                                    &st);
    }
    i = (int32_T)d - 1;
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(s->size[0], 1, s->size[0], &mc_emlrtBCI,
                                    &st);
    }
    i1 = s->size[0];
  }
  b_physical_NSTATE[0] = 1;
  physical_NSTATE_tmp = i1 - i;
  b_physical_NSTATE[1] = physical_NSTATE_tmp;
  b_st.site = &pc_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  b_dv[0] = 2.0 * physical_NSTATE;
  b_dv[1] = 2.0 * physical_NSTATE;
  b_st.site = &pc_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = physical_NSTATE_tmp;
  if (physical_NSTATE_tmp < 1) {
    n = 1;
  }
  maxdimlen = muIntScalarMax_sint32(physical_NSTATE_tmp, n);
  if ((int32_T)b_dv[0] > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)b_dv[1] > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)b_dv[0] >= 0);
  if ((!out) || ((int32_T)b_dv[1] < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if ((int32_T)b_dv[0] * (int32_T)b_dv[1] != physical_NSTATE_tmp) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &b_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &vb_emlrtDCI, &st);
  }
  d = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != d) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &ub_emlrtDCI, &st);
  }
  i1 = varargout_1->size[0];
  varargout_1->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, varargout_1, i1, &id_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  if (physical_NSTATE != d) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &ub_emlrtDCI, &st);
  }
  maxdimlen = (int32_T)physical_NSTATE;
  for (i1 = 0; i1 < maxdimlen; i1++) {
    varargout_1_data[i1] = 0.0;
  }
  emxInit_real_T(&st, &pd, 1, &md_emlrtRTEI);
  i1 = pd->size[0];
  pd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd, i1, &jd_emlrtRTEI);
  pd_data = pd->data;
  maxdimlen = (int32_T)physical_NSTATE;
  for (i1 = 0; i1 < maxdimlen; i1++) {
    pd_data[i1] = 0.0;
  }
  emxInit_real_T(&st, &H_x, 1, &id_emlrtRTEI);
  emxInit_real_T(&st, &H_p, 1, &id_emlrtRTEI);
  b_st.site = &qc_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x, p, S, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  x_data = H_p->data;
  H_x_data = H_x->data;
  b_st.site = &rc_emlrtRSI;
  HamiltonianSecondDerivatives(&b_st, x, p, S, physical_Tmax, physical_c,
                               physical_shoot, physical_EPS, H_xx, H_xp, H_pp);
  emxFree_real_T(&st, &p);
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
    i1 = 0;
  } else {
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5,
                                    &lc_emlrtBCI, &st);
    }
    maxdimlen = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &jc_emlrtBCI,
                                    &st);
    }
    i1 = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  emlrtSubAssignSizeCheckR2012b(&i1, 1, &maxdimlen, 1, &l_emlrtECI, &st);
  for (i1 = 0; i1 < maxdimlen; i1++) {
    varargout_1_data[i1] = x_data[i1];
  }
  emxFree_real_T(&st, &H_p);
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
    i1 = 0;
  } else {
    maxdimlen = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &kc_emlrtBCI,
                                    &st);
    }
    i1 = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  for (n = 0; n < maxdimlen; n++) {
    tmp_data[n] = -H_x_data[n];
  }
  emxFree_real_T(&st, &H_x);
  emlrtSubAssignSizeCheckR2012b(&i1, 1, &maxdimlen, 1, &m_emlrtECI, &st);
  for (i1 = 0; i1 < maxdimlen; i1++) {
    pd_data[i1] = tmp_data[i1];
  }
  b_st.site = &sc_emlrtRSI;
  c_st.site = &mg_emlrtRSI;
  if ((int32_T)b_dv[0] != 10) {
    if (((int32_T)b_dv[0] == 1) && ((int32_T)b_dv[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &o_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  i1 = x->size[0];
  x->size[0] = physical_NSTATE_tmp;
  emxEnsureCapacity_real_T(&b_st, x, i1, &kd_emlrtRTEI);
  x_data = x->data;
  for (i1 = 0; i1 < physical_NSTATE_tmp; i1++) {
    x_data[i1] = s_data[i + i1];
  }
  for (i = 0; i < 5; i++) {
    for (i1 = 0; i1 < 5; i1++) {
      maxdimlen = i1 + 10 * i;
      b_H_xp[maxdimlen] = H_xp[i + 5 * i1];
      n = i1 + 5 * i;
      physical_NSTATE_tmp = i1 + 10 * (i + 5);
      b_H_xp[physical_NSTATE_tmp] = H_pp[n];
      b_H_xp[maxdimlen + 5] = -H_xx[n];
      b_H_xp[physical_NSTATE_tmp + 5] = -H_xp[n];
    }
  }
  b_x = *x;
  c_physical_NSTATE[0] = (int32_T)b_dv[0];
  c_physical_NSTATE[1] = (int32_T)b_dv[1];
  b_x.size = &c_physical_NSTATE[0];
  b_x.numDimensions = 2;
  emxInit_real_T(&b_st, &dphi, 2, &ld_emlrtRTEI);
  c_st.site = &lg_emlrtRSI;
  mtimes(&c_st, b_H_xp, &b_x, dphi);
  x_data = dphi->data;
  emxFree_real_T(&b_st, &x);
  b_st.site = &tc_emlrtRSI;
  maxdimlen = (int32_T)physical_NSTATE << 1;
  b_dv[0] = maxdimlen * maxdimlen;
  b_dv[1] = 1.0;
  b_st.site = &tc_emlrtRSI;
  maxdimlen = 10 * dphi->size[1];
  c_st.site = &lb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = 10;
  if (dphi->size[1] > 10) {
    n = dphi->size[1];
  }
  if ((int8_T)b_dv[0] > muIntScalarMax_sint32(maxdimlen, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int8_T)b_dv[0] != maxdimlen) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &b_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  i = varargout_1->size[0];
  i1 = varargout_1->size[0];
  varargout_1->size[0] =
      (varargout_1->size[0] + pd->size[0]) + (int32_T)b_dv[0];
  emxEnsureCapacity_real_T(&st, varargout_1, i1, &id_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  maxdimlen = pd->size[0];
  for (i1 = 0; i1 < maxdimlen; i1++) {
    varargout_1_data[i + i1] = pd_data[i1];
  }
  maxdimlen = (int32_T)b_dv[0];
  for (i1 = 0; i1 < maxdimlen; i1++) {
    varargout_1_data[(i + i1) + pd->size[0]] = x_data[i1];
  }
  emxFree_real_T(&st, &pd);
  emxFree_real_T(&st, &dphi);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfunSTM_S_time_anonFcn4(const emlrtStack *sp, real_T physical_Tmax,
                               real_T physical_c, real_T physical_NSTATE,
                               real_T physical_shoot, real_T physical_EPS,
                               real_T SIGN, const emxArray_real_T *s,
                               emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T b_H_x;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *dphi;
  emxArray_real_T *p;
  emxArray_real_T *pd;
  emxArray_real_T *x;
  real_T b_H_xp[100];
  real_T H_pp[25];
  real_T H_xp[25];
  real_T H_xx[25];
  real_T S_p[5];
  real_T S_x[5];
  real_T b_dv[2];
  const real_T *s_data;
  real_T a__1;
  real_T b_S_p;
  real_T *H_p_data;
  real_T *H_x_data;
  real_T *pd_data;
  real_T *varargout_1_data;
  real_T *x_data;
  int32_T b_physical_NSTATE[2];
  int32_T c_physical_NSTATE[2];
  int32_T i;
  int32_T i1;
  int32_T maxdimlen;
  int32_T n;
  int32_T physical_NSTATE_tmp;
  boolean_T out;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  s_data = s->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &ni_emlrtRSI;
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
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &bf_emlrtBCI, &st);
    }
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &dc_emlrtDCI, &st);
    }
    if (((int32_T)physical_NSTATE < 1) ||
        ((int32_T)physical_NSTATE > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, s->size[0],
                                    &af_emlrtBCI, &st);
    }
    maxdimlen = (int32_T)physical_NSTATE;
  }
  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = maxdimlen;
  b_st.site = &oi_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x, 1, &ke_emlrtRTEI);
  i = x->size[0];
  x->size[0] = maxdimlen;
  emxEnsureCapacity_real_T(&st, x, i, &ke_emlrtRTEI);
  x_data = x->data;
  for (i = 0; i < maxdimlen; i++) {
    x_data[i] = s_data[i];
  }
  a__1 = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > a__1) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &cc_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1,
                                    s->size[0], &ye_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (a__1 != (int32_T)muDoubleScalarFloor(a__1)) {
      emlrtIntegerCheckR2012b(a__1, &bc_emlrtDCI, &st);
    }
    if (((int32_T)a__1 < 1) || ((int32_T)a__1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)a__1, 1, s->size[0], &xe_emlrtBCI,
                                    &st);
    }
    i1 = (int32_T)a__1;
  }
  b_physical_NSTATE[0] = 1;
  physical_NSTATE_tmp = i1 - i;
  b_physical_NSTATE[1] = physical_NSTATE_tmp;
  b_st.site = &pi_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &p, 1, &le_emlrtRTEI);
  i1 = p->size[0];
  p->size[0] = physical_NSTATE_tmp;
  emxEnsureCapacity_real_T(&st, p, i1, &le_emlrtRTEI);
  x_data = p->data;
  for (i1 = 0; i1 < physical_NSTATE_tmp; i1++) {
    x_data[i1] = s_data[i + i1];
  }
  a__1 = 2.0 * physical_NSTATE + 1.0;
  if (a__1 > (real_T)s->size[0] - 1.0) {
    i = 0;
    i1 = 0;
  } else {
    if (a__1 != (int32_T)muDoubleScalarFloor(a__1)) {
      emlrtIntegerCheckR2012b(a__1, &ac_emlrtDCI, &st);
    }
    if (((int32_T)a__1 < 1) || ((int32_T)a__1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)a__1, 1, s->size[0], &we_emlrtBCI,
                                    &st);
    }
    i = (int32_T)a__1 - 1;
    if ((s->size[0] - 1 < 1) || (s->size[0] - 1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b(s->size[0] - 1, 1, s->size[0], &ve_emlrtBCI,
                                    &st);
    }
    i1 = s->size[0] - 1;
  }
  b_physical_NSTATE[0] = 1;
  physical_NSTATE_tmp = i1 - i;
  b_physical_NSTATE[1] = physical_NSTATE_tmp;
  b_st.site = &qi_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  b_dv[0] = 2.0 * physical_NSTATE;
  b_dv[1] = 2.0 * physical_NSTATE;
  b_st.site = &qi_emlrtRSI;
  c_st.site = &lb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = physical_NSTATE_tmp;
  if (physical_NSTATE_tmp < 1) {
    n = 1;
  }
  maxdimlen = muIntScalarMax_sint32(physical_NSTATE_tmp, n);
  if ((int32_T)b_dv[0] > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int32_T)b_dv[1] > maxdimlen) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)b_dv[0] >= 0);
  if ((!out) || ((int32_T)b_dv[1] < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if ((int32_T)b_dv[0] * (int32_T)b_dv[1] != physical_NSTATE_tmp) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &b_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &fc_emlrtDCI, &st);
  }
  a__1 = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != a__1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &ec_emlrtDCI, &st);
  }
  i1 = varargout_1->size[0];
  varargout_1->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, varargout_1, i1, &me_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  if (physical_NSTATE != a__1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &ec_emlrtDCI, &st);
  }
  maxdimlen = (int32_T)physical_NSTATE;
  for (i1 = 0; i1 < maxdimlen; i1++) {
    varargout_1_data[i1] = 0.0;
  }
  emxInit_real_T(&st, &pd, 1, &qe_emlrtRTEI);
  i1 = pd->size[0];
  pd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd, i1, &ne_emlrtRTEI);
  pd_data = pd->data;
  maxdimlen = (int32_T)physical_NSTATE;
  for (i1 = 0; i1 < maxdimlen; i1++) {
    pd_data[i1] = 0.0;
  }
  emxInit_real_T(&st, &H_x, 1, &oe_emlrtRTEI);
  emxInit_real_T(&st, &H_p, 1, &me_emlrtRTEI);
  b_st.site = &ri_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x, p, SIGN, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  b_st.site = &si_emlrtRSI;
  HamiltonianSecondDerivatives(&b_st, x, p, SIGN, physical_Tmax, physical_c,
                               physical_shoot, physical_EPS, H_xx, H_xp, H_pp);
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
    i1 = 0;
  } else {
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5,
                                    &ue_emlrtBCI, &st);
    }
    maxdimlen = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &se_emlrtBCI,
                                    &st);
    }
    i1 = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  emlrtSubAssignSizeCheckR2012b(&i1, 1, &maxdimlen, 1, &p_emlrtECI, &st);
  for (i1 = 0; i1 < maxdimlen; i1++) {
    varargout_1_data[i1] = H_p_data[i1];
  }
  /*  xd: states derivatives  [NSTATEx1] */
  if (physical_NSTATE < 1.0) {
    maxdimlen = 0;
    i1 = 0;
  } else {
    maxdimlen = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &te_emlrtBCI,
                                    &st);
    }
    i1 = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  for (n = 0; n < maxdimlen; n++) {
    S_x[n] = -H_x_data[n];
  }
  emlrtSubAssignSizeCheckR2012b(&i1, 1, &maxdimlen, 1, &q_emlrtECI, &st);
  for (i1 = 0; i1 < maxdimlen; i1++) {
    pd_data[i1] = S_x[i1];
  }
  /*  pd: costates derivatives  [NSTATEx1] */
  b_st.site = &ti_emlrtRSI;
  c_st.site = &mg_emlrtRSI;
  if ((int32_T)b_dv[0] != 10) {
    if (((int32_T)b_dv[0] == 1) && ((int32_T)b_dv[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &n_emlrtRTEI, "Coder:toolbox:mtimes_noDynamicScalarExpansion",
          "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &o_emlrtRTEI, "MATLAB:innerdim",
                                    "MATLAB:innerdim", 0);
    }
  }
  i1 = H_x->size[0];
  H_x->size[0] = physical_NSTATE_tmp;
  emxEnsureCapacity_real_T(&b_st, H_x, i1, &oe_emlrtRTEI);
  H_x_data = H_x->data;
  for (i1 = 0; i1 < physical_NSTATE_tmp; i1++) {
    H_x_data[i1] = s_data[i + i1];
  }
  for (i = 0; i < 5; i++) {
    for (i1 = 0; i1 < 5; i1++) {
      maxdimlen = i1 + 10 * i;
      b_H_xp[maxdimlen] = H_xp[i + 5 * i1];
      n = i1 + 5 * i;
      physical_NSTATE_tmp = i1 + 10 * (i + 5);
      b_H_xp[physical_NSTATE_tmp] = H_pp[n];
      b_H_xp[maxdimlen + 5] = -H_xx[n];
      b_H_xp[physical_NSTATE_tmp + 5] = -H_xp[n];
    }
  }
  b_H_x = *H_x;
  c_physical_NSTATE[0] = (int32_T)b_dv[0];
  c_physical_NSTATE[1] = (int32_T)b_dv[1];
  b_H_x.size = &c_physical_NSTATE[0];
  b_H_x.numDimensions = 2;
  emxInit_real_T(&b_st, &dphi, 2, &pe_emlrtRTEI);
  c_st.site = &lg_emlrtRSI;
  mtimes(&c_st, b_H_xp, &b_H_x, dphi);
  x_data = dphi->data;
  /*  state transtion matrix derivatives [2NSTATEx2NSTATE] */
  b_st.site = &ui_emlrtRSI;
  maxdimlen = (int32_T)physical_NSTATE << 1;
  b_dv[0] = maxdimlen * maxdimlen;
  b_dv[1] = 1.0;
  b_st.site = &ui_emlrtRSI;
  maxdimlen = 10 * dphi->size[1];
  c_st.site = &lb_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = 10;
  if (dphi->size[1] > 10) {
    n = dphi->size[1];
  }
  if ((int8_T)b_dv[0] > muIntScalarMax_sint32(maxdimlen, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int8_T)b_dv[0] != maxdimlen) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &b_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  /*  converstion of STM derivatives in vector */
  b_st.site = &vi_emlrtRSI;
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
  c_st.site = &mb_emlrtRSI;
  a__1 = S_fun(&c_st, x, p, physical_Tmax, physical_c);
  c_st.site = &wi_emlrtRSI;
  S_x_fun(&c_st, x, p, physical_Tmax, S_x);
  c_st.site = &xi_emlrtRSI;
  S_p_fun(&c_st, x, p, physical_Tmax, physical_c, S_p);
  c_st.site = &yi_emlrtRSI;
  HamiltonianFirstDerivatives(&c_st, x, p, a__1, physical_Tmax, physical_c,
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
  emxEnsureCapacity_real_T(&st, varargout_1, i1, &me_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  a__1 = 0.0;
  b_S_p = 0.0;
  for (i1 = 0; i1 < 5; i1++) {
    a__1 += S_x[i1] * H_p_data[i1];
    b_S_p += S_p[i1] * H_x_data[i1];
  }
  emxFree_real_T(&st, &H_p);
  emxFree_real_T(&st, &H_x);
  maxdimlen = pd->size[0];
  for (i1 = 0; i1 < maxdimlen; i1++) {
    varargout_1_data[i + i1] = pd_data[i1];
  }
  maxdimlen = (int32_T)b_dv[0];
  for (i1 = 0; i1 < maxdimlen; i1++) {
    varargout_1_data[(i + i1) + pd->size[0]] = x_data[i1];
  }
  emxFree_real_T(&st, &dphi);
  varargout_1_data[(i + pd->size[0]) + (int32_T)b_dv[0]] = a__1 - b_S_p;
  emxFree_real_T(&st, &pd);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (objfunSTM_S_time.c) */
