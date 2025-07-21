/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_energy.c
 *
 * Code generation for function 'objfun_S_energy'
 *
 */

/* Include files */
#include "objfun_S_energy.h"
#include "HamiltonianFirstDerivatives.h"
#include "S_p_fun.h"
#include "S_x_fun.h"
#include "eml_mtimes_helper.h"
#include "objfun_S_energy_data.h"
#include "objfun_S_energy_emxutil.h"
#include "objfun_S_energy_types.h"
#include "ode89.h"
#include "rt_nonfinite.h"
#include "sumMatrixIncludeNaN.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    38,                                                          /* lineNo */
    "objfun_S_energy",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    65,                                                          /* lineNo */
    "objfun_S_energy",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    107,                                                         /* lineNo */
    "objfun_S_energy",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    18,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

static emlrtRSInfo e_emlrtRSI = {
    13,                                                /* lineNo */
    "S_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m" /* pathName */
};

static emlrtRSInfo w_emlrtRSI = {
    65,                                                          /* lineNo */
    "@(t,s)derivatives_S(s,physical,SIGN)",                      /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pathName */
};

static emlrtRSInfo x_emlrtRSI = {
    26,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo y_emlrtRSI = {
    29,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo oc_emlrtRSI = {
    22,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

static emlrtRSInfo pc_emlrtRSI = {
    23,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

static emlrtRSInfo qc_emlrtRSI = {
    24,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

static emlrtRSInfo td_emlrtRSI = {
    20,    /* lineNo */
    "sum", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m" /* pathName
                                                                        */
};

static emlrtMCInfo emlrtMCI = {
    27,                                                          /* lineNo */
    5,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtDCInfo emlrtDCI = {
    62,                                                           /* lineNo */
    40,                                                           /* colNo */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo emlrtBCI = {
    1,                                                            /* iFirst */
    11,                                                           /* iLast */
    62,                                                           /* lineNo */
    40,                                                           /* colNo */
    "s0",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo emlrtECI = {
    1,                                                           /* nDims */
    62,                                                          /* lineNo */
    28,                                                          /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtDCInfo b_emlrtDCI = {
    62,                                                           /* lineNo */
    86,                                                           /* colNo */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    1,                                                            /* iFirst */
    11,                                                           /* iLast */
    62,                                                           /* lineNo */
    86,                                                           /* colNo */
    "s0",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    1,                                                           /* nDims */
    62,                                                          /* lineNo */
    74,                                                          /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    77,                                                           /* lineNo */
    26,                                                           /* colNo */
    "xx",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    83,                                                           /* lineNo */
    24,                                                           /* colNo */
    "xx",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    97,                                                           /* lineNo */
    9,                                                            /* colNo */
    "xx",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    97,                                                           /* lineNo */
    15,                                                           /* colNo */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    97,                                                           /* lineNo */
    15,                                                           /* colNo */
    "xx",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    98,                                                           /* lineNo */
    9,                                                            /* colNo */
    "xx",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    98,                                                           /* lineNo */
    13,                                                           /* colNo */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    98,                                                           /* lineNo */
    13,                                                           /* colNo */
    "xx",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    98,                                                           /* lineNo */
    22,                                                           /* colNo */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    98,                                                           /* lineNo */
    22,                                                           /* colNo */
    "xx",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    1,                                                           /* nDims */
    99,                                                          /* lineNo */
    20,                                                          /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    1,                                                           /* nDims */
    100,                                                         /* lineNo */
    18,                                                          /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    -1,                                                          /* nDims */
    54,                                                          /* lineNo */
    5,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtBCInfo j_emlrtBCI = {
    1,                                                            /* iFirst */
    1000000,                                                      /* iLast */
    70,                                                           /* lineNo */
    15,                                                           /* colNo */
    "temps",                                                      /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    1,                                                            /* iFirst */
    1000000,                                                      /* iLast */
    70,                                                           /* lineNo */
    24,                                                           /* colNo */
    "temps",                                                      /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,                                                          /* nDims */
    70,                                                          /* lineNo */
    9,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtBCInfo l_emlrtBCI = {
    1,                                                            /* iFirst */
    1000000,                                                      /* iLast */
    71,                                                           /* lineNo */
    15,                                                           /* colNo */
    "tempt",                                                      /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    1,                                                            /* iFirst */
    1000000,                                                      /* iLast */
    71,                                                           /* lineNo */
    24,                                                           /* colNo */
    "tempt",                                                      /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtECInfo g_emlrtECI = {
    -1,                                                          /* nDims */
    71,                                                          /* lineNo */
    9,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtDCInfo f_emlrtDCI = {
    53,                                                           /* lineNo */
    23,                                                           /* colNo */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    53,                                                           /* lineNo */
    23,                                                           /* colNo */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    4 /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    53,                                                           /* lineNo */
    5,                                                            /* colNo */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    1 /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    53,                                                           /* lineNo */
    5,                                                            /* colNo */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    4 /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    102,                                                          /* lineNo */
    7,                                                            /* colNo */
    "tt",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    66,                                                           /* lineNo */
    15,                                                           /* colNo */
    "tt",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                                           /* iFirst */
    -1,                                                           /* iLast */
    75,                                                           /* lineNo */
    11,                                                           /* colNo */
    "tt",                                                         /* aName */
    "objfun_S_energy",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m", /* pName */
    0 /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    11,                                                 /* lineNo */
    10,                                                 /* colNo */
    "in1",                                              /* aName */
    "S_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    10,                                                 /* lineNo */
    10,                                                 /* colNo */
    "in2",                                              /* aName */
    "S_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    9,                                                  /* lineNo */
    10,                                                 /* colNo */
    "in2",                                              /* aName */
    "S_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                                 /* iFirst */
    -1,                                                 /* iLast */
    8,                                                  /* lineNo */
    10,                                                 /* colNo */
    "in2",                                              /* aName */
    "S_fun",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m", /* pName */
    0                                                   /* checkKind */
};

static emlrtECInfo h_emlrtECI = {
    -1,                                                        /* nDims */
    31,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    31,                                                         /* lineNo */
    14,                                                         /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    31,                                                         /* lineNo */
    5,                                                          /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo i_emlrtECI = {
    -1,                                                        /* nDims */
    30,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    30,                                                         /* lineNo */
    7,                                                          /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo j_emlrtECI = {
    -1,                                                        /* nDims */
    28,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    28,                                                         /* lineNo */
    6,                                                          /* colNo */
    "pd",                                                       /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo k_emlrtECI = {
    -1,                                                        /* nDims */
    27,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    27,                                                         /* lineNo */
    6,                                                          /* colNo */
    "xd",                                                       /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    27,                                                         /* lineNo */
    22,                                                         /* colNo */
    "H_p",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    1,                                                          /* iFirst */
    11,                                                         /* iLast */
    11,                                                         /* lineNo */
    20,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    11,                                                         /* lineNo */
    20,                                                         /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    1,                                                          /* iFirst */
    11,                                                         /* iLast */
    11,                                                         /* lineNo */
    11,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    11,                                                         /* lineNo */
    11,                                                         /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    1,                                                          /* iFirst */
    11,                                                         /* iLast */
    10,                                                         /* lineNo */
    13,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    10,                                                         /* lineNo */
    13,                                                         /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    25,                                                         /* lineNo */
    1,                                                          /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    25,                                                         /* lineNo */
    1,                                                          /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    4                                                           /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    32,                                                         /* lineNo */
    5,                                                          /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = {
    18,                                                          /* lineNo */
    1,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtRTEInfo i_emlrtRTEI = {
    19,                                                          /* lineNo */
    1,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtRTEInfo j_emlrtRTEI = {
    22,                                                          /* lineNo */
    1,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtRTEInfo k_emlrtRTEI = {
    23,                                                          /* lineNo */
    1,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtRTEInfo l_emlrtRTEI = {
    53,                                                          /* lineNo */
    5,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtRTEInfo m_emlrtRTEI = {
    110,                                                         /* lineNo */
    5,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtRTEInfo n_emlrtRTEI = {
    111,                                                         /* lineNo */
    5,                                                           /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    25,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    25,                                                        /* lineNo */
    20,                                                        /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    65,                                                          /* lineNo */
    21,                                                          /* colNo */
    "objfun_S_energy",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pName */
};

static emlrtRSInfo ud_emlrtRSI = {
    27,                                                          /* lineNo */
    "objfun_S_energy",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pathName */
};

/* Function Declarations */
static void binary_expand_op(real_T in1_data[], int32_T *in1_size,
                             const struct1_T *in2, const real_T in3_data[],
                             const int32_T *in3_size, real_T in4);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

/* Function Definitions */
static void binary_expand_op(real_T in1_data[], int32_T *in1_size,
                             const struct1_T *in2, const real_T in3_data[],
                             const int32_T *in3_size, real_T in4)
{
  real_T in3[5];
  int32_T i;
  int32_T stride_0_0;
  stride_0_0 = (*in3_size != 1);
  for (i = 0; i < 5; i++) {
    in3[i] = in3_data[i * stride_0_0] - in2->Xf[i];
  }
  *in1_size = 5;
  for (i = 0; i < 4; i++) {
    real_T d;
    d = 0.0;
    for (stride_0_0 = 0; stride_0_0 < 5; stride_0_0++) {
      d += in2->Pigreco[stride_0_0 + 5 * i] * in3[stride_0_0];
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

void c_binary_expand_op(real_T in1[2], const struct0_T *in2,
                        const real_T in3[11], int32_T in4)
{
  in1[0] = in2->Moon[0] - in3[0];
  in1[1] = in2->Moon[1] - in3[in4 != 1];
}

void d_binary_expand_op(real_T in1[2], const struct0_T *in2,
                        const real_T in3[11], int32_T in4)
{
  in1[0] = in2->Earth[0] - in3[0];
  in1[1] = in2->Earth[1] - in3[in4 != 1];
}

void emlrt_checkEscapedGlobals(void)
{
  physical_dirty |= physical_dirty >> 1U;
}

void objfun_S_energy(objfun_S_energyStackData *SD, const emlrtStack *sp,
                     const real_T lam0[5], const real_T X0[5],
                     const struct0_T *b_physical, const struct1_T *boundary,
                     real_T *obj, emxArray_real_T *states,
                     emxArray_real_T *times)
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
  emxArray_real_T *temps;
  emxArray_real_T *tt;
  emxArray_real_T *xx;
  const mxArray *m;
  const mxArray *y;
  real_T temp[11];
  real_T val_data[5];
  real_T b_x[2];
  real_T Tfin;
  real_T *states_data;
  real_T *temps_data;
  real_T *tt_data;
  int32_T b_xx[2];
  int32_T c_xx[2];
  int32_T i;
  int32_T i1;
  int32_T i3;
  int32_T loop_ub;
  int32_T type;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  compute the objective function for a minimum energy */
  /*  problem */
  /*  Inputs: */
  /*  lam0: initial costates vector [NSTATEx1] */
  /*  X0: initial states vector [NSTATEx1] */
  /*  physical: structure for physical variables */
  /*  boundary: structure for control problem inputs */
  /*  Output: */
  /*  obj: objective function residual */
  /*  states: matrix of states and costates during the propagation */
  /*  times: vector of times during the propagation  */
  /*  initialize outputs and constants */
  *obj = 1000.0;
  i = states->size[0] * states->size[1];
  states->size[0] = 1;
  states->size[1] = 1;
  emxEnsureCapacity_real_T(sp, states, i, &h_emlrtRTEI);
  states_data = states->data;
  states_data[0] = 0.0;
  i = times->size[0];
  times->size[0] = 1;
  emxEnsureCapacity_real_T(sp, times, i, &i_emlrtRTEI);
  states_data = times->data;
  states_data[0] = 0.0;
  Tfin = boundary->Tfin;
  emxInit_real_T(sp, &xx, 2, &j_emlrtRTEI);
  i = xx->size[0] * xx->size[1];
  xx->size[0] = 1;
  xx->size[1] = 1;
  emxEnsureCapacity_real_T(sp, xx, i, &j_emlrtRTEI);
  states_data = xx->data;
  states_data[0] = 0.0;
  emxInit_real_T(sp, &tt, 1, &k_emlrtRTEI);
  i = tt->size[0];
  tt->size[0] = 1;
  emxEnsureCapacity_real_T(sp, tt, i, &k_emlrtRTEI);
  tt_data = tt->data;
  tt_data[0] = 0.0;
  if (b_physical->EPS == 0.0) {
    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 52, m, &u[0]);
    emlrtAssign(&y, m);
    st.site = &ud_emlrtRSI;
    disp(&st, y, &emlrtMCI);
  } else {
    real_T pf_data[11];
    real_T SIGN;
    real_T d;
    real_T index1;
    real_T index2;
    real_T t2;
    real_T told;
    real_T x;
    boolean_T exitg1;
    told = boundary->T0;
    st.site = &emlrtRSI;
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
    b_st.site = &d_emlrtRSI;
    /* S_fun */
    /*     Ssym = S_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
    /*     This function was generated by the Symbolic Math Toolbox version 9.2.
     */
    /*     01-Sep-2024 17:26:08 */
    t2 = 1.0 / b_physical->c;
    c_st.site = &e_emlrtRSI;
    x = lam0[2] * lam0[2] + lam0[3] * lam0[3];
    if (x < 0.0) {
      emlrtErrorWithMessageIdR2018a(
          &c_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
          "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
    }
    x = muDoubleScalarSqrt(x);
    t2 = -b_physical->Tmax * ((t2 + lam0[4] * t2) - x / X0[4]);
    if ((t2 < b_physical->EPS * b_physical->Tmax / b_physical->c) &&
        (t2 > -b_physical->EPS * b_physical->Tmax / b_physical->c)) {
      type = 0;
    } else if (muDoubleScalarSign(t2) != b_physical->shoot) {
      type = -1;
    } else {
      type = 1;
    }
    SIGN = b_physical->shoot * (real_T)type;
    for (type = 0; type < 5; type++) {
      temp[type] = X0[type];
      temp[type + 5] = lam0[type];
    }
    temp[10] = t2;
    /*  initial state, costate and switching function */
    memset(&SD->f0.tempt[0], 0, 1000000U * sizeof(real_T));
    emxInit_real_T(sp, &temps, 2, &l_emlrtRTEI);
    i = temps->size[0] * temps->size[1];
    temps->size[0] = 1000000;
    emxEnsureCapacity_real_T(sp, temps, i, &l_emlrtRTEI);
    d = 2.0 * b_physical->NSTATE;
    if (!(d + 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d + 1.0, &g_emlrtDCI, (emlrtConstCTX)sp);
    }
    t2 = (int32_T)muDoubleScalarFloor(d + 1.0);
    if (d + 1.0 != t2) {
      emlrtIntegerCheckR2012b(d + 1.0, &f_emlrtDCI, (emlrtConstCTX)sp);
    }
    i = temps->size[0] * temps->size[1];
    type = (int32_T)(d + 1.0);
    temps->size[1] = (int32_T)(d + 1.0);
    emxEnsureCapacity_real_T(sp, temps, i, &l_emlrtRTEI);
    temps_data = temps->data;
    if (!(d + 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d + 1.0, &i_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (d + 1.0 != t2) {
      emlrtIntegerCheckR2012b(d + 1.0, &h_emlrtDCI, (emlrtConstCTX)sp);
    }
    loop_ub = 1000000 * (int32_T)(d + 1.0);
    for (i = 0; i < loop_ub; i++) {
      temps_data[i] = 0.0;
    }
    b_xx[0] = 1;
    b_xx[1] = (int32_T)(d + 1.0);
    c_xx[0] = 1;
    c_xx[1] = 11;
    emlrtSubAssignSizeCheckR2012b(&b_xx[0], 2, &c_xx[0], 2, &e_emlrtECI,
                                  (emlrtCTX)sp);
    for (i = 0; i < type; i++) {
      temps_data[1000000 * i] = temp[i];
    }
    SD->f0.tempt[0] = boundary->T0;
    index1 = 1.0;
    index2 = 0.0;
    /*  integration */
    exitg1 = false;
    while ((!exitg1) && (told != Tfin)) {
      real_T b_y;
      real_T scale;
      real_T t;
      t2 = muDoubleScalarRound(b_physical->NSTATE / 2.0);
      if (t2 - 1.0 < 1.0) {
        i = 0;
      } else {
        if (t2 - 1.0 != (int32_T)(t2 - 1.0)) {
          emlrtIntegerCheckR2012b(t2 - 1.0, &emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)(t2 - 1.0) < 1) || ((int32_T)(t2 - 1.0) > 11)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(t2 - 1.0), 1, 11, &emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        i = (int32_T)(t2 - 1.0);
      }
      if ((i != 2) && (i != 1)) {
        emlrtDimSizeImpxCheckR2021b(2, i, &emlrtECI, (emlrtConstCTX)sp);
      }
      if (i == 2) {
        b_x[0] = b_physical->Earth[0] - temp[0];
        b_x[1] = b_physical->Earth[1] - temp[1];
      } else {
        d_binary_expand_op(b_x, b_physical, temp, 1);
      }
      scale = 3.3121686421112381E-170;
      x = muDoubleScalarAbs(b_x[0]);
      if (x > 3.3121686421112381E-170) {
        b_y = 1.0;
        scale = x;
      } else {
        t = x / 3.3121686421112381E-170;
        b_y = t * t;
      }
      x = muDoubleScalarAbs(b_x[1]);
      if (x > scale) {
        t = scale / x;
        b_y = b_y * t * t + 1.0;
        scale = x;
      } else {
        t = x / scale;
        b_y += t * t;
      }
      b_y = scale * muDoubleScalarSqrt(b_y);
      if (b_y >= b_physical->RE) {
        if (t2 - 1.0 < 1.0) {
          i = 0;
        } else {
          if (t2 - 1.0 != (int32_T)(t2 - 1.0)) {
            emlrtIntegerCheckR2012b(t2 - 1.0, &b_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)(t2 - 1.0) < 1) || ((int32_T)(t2 - 1.0) > 11)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(t2 - 1.0), 1, 11,
                                          &b_emlrtBCI, (emlrtConstCTX)sp);
          }
          i = (int32_T)(t2 - 1.0);
        }
        if ((i != 2) && (i != 1)) {
          emlrtDimSizeImpxCheckR2021b(2, i, &b_emlrtECI, (emlrtConstCTX)sp);
        }
        if (i == 2) {
          b_x[0] = b_physical->Moon[0] - temp[0];
          b_x[1] = b_physical->Moon[1] - temp[1];
        } else {
          c_binary_expand_op(b_x, b_physical, temp, 1);
        }
        scale = 3.3121686421112381E-170;
        t2 = muDoubleScalarAbs(b_x[0]);
        if (t2 > 3.3121686421112381E-170) {
          b_y = 1.0;
          scale = t2;
        } else {
          t = t2 / 3.3121686421112381E-170;
          b_y = t * t;
        }
        t2 = muDoubleScalarAbs(b_x[1]);
        if (t2 > scale) {
          t = scale / t2;
          b_y = b_y * t * t + 1.0;
          scale = t2;
        } else {
          t = t2 / scale;
          b_y += t * t;
        }
        b_y = scale * muDoubleScalarSqrt(b_y);
        if (b_y >= b_physical->RM) {
          real_T b_told[2];
          int32_T i2;
          /*  integration with switching time detection */
          b_told[0] = told;
          b_told[1] = Tfin;
          st.site = &b_emlrtRSI;
          ode89(&st, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
                b_physical->shoot, b_physical->EPS, SIGN, b_told, temp, tt, xx);
          states_data = xx->data;
          tt_data = tt->data;
          if (tt->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0],
                                          &o_emlrtBCI, (emlrtConstCTX)sp);
          }
          told = tt_data[tt->size[0] - 1];
          index2 = (index1 + (real_T)tt->size[0]) - 1.0;
          if (xx->size[0] < 2) {
            i = 0;
            i1 = 0;
          } else {
            i = 1;
            i1 = xx->size[0];
          }
          if (index1 + 1.0 > index2) {
            i2 = 0;
            i3 = 0;
          } else {
            if (((int32_T)(index1 + 1.0) < 1) ||
                ((int32_T)(index1 + 1.0) > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
                                            &j_emlrtBCI, (emlrtConstCTX)sp);
            }
            i2 = (int32_T)(index1 + 1.0) - 1;
            if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
                                            &k_emlrtBCI, (emlrtConstCTX)sp);
            }
            i3 = (int32_T)index2;
          }
          b_xx[0] = i3 - i2;
          b_xx[1] = temps->size[1];
          type = i1 - i;
          c_xx[0] = type;
          c_xx[1] = 11;
          emlrtSubAssignSizeCheckR2012b(&b_xx[0], 2, &c_xx[0], 2, &f_emlrtECI,
                                        (emlrtCTX)sp);
          for (i1 = 0; i1 < 11; i1++) {
            for (i3 = 0; i3 < type; i3++) {
              temps_data[(i2 + i3) + 1000000 * i1] =
                  states_data[(i + i3) + xx->size[0] * i1];
            }
          }
          if (tt->size[0] < 2) {
            i = 0;
            i1 = 0;
          } else {
            i = 1;
            i1 = tt->size[0];
          }
          if (index1 + 1.0 > index2) {
            i2 = 0;
            i3 = 0;
          } else {
            if (((int32_T)(index1 + 1.0) < 1) ||
                ((int32_T)(index1 + 1.0) > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
                                            &l_emlrtBCI, (emlrtConstCTX)sp);
            }
            i2 = (int32_T)(index1 + 1.0) - 1;
            if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
                                            &m_emlrtBCI, (emlrtConstCTX)sp);
            }
            i3 = (int32_T)index2;
          }
          i3 -= i2;
          loop_ub = i1 - i;
          if (i3 != loop_ub) {
            emlrtSubAssignSizeCheck1dR2017a(i3, loop_ub, &g_emlrtECI,
                                            (emlrtConstCTX)sp);
          }
          for (i1 = 0; i1 < loop_ub; i1++) {
            SD->f0.tempt[i2 + i1] = tt_data[i + i1];
          }
          index1 = index2;
          if (tt->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0],
                                          &p_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (tt_data[tt->size[0] - 1] != Tfin) {
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &c_emlrtBCI, (emlrtConstCTX)sp);
            }
            for (i = 0; i < 11; i++) {
              temp[i] = states_data[(xx->size[0] + xx->size[0] * i) - 1];
            }
            if (SIGN != 0.0) {
              SIGN = 0.0;
            } else {
              if ((xx->size[0] - 1 < 1) || (xx->size[0] - 1 > xx->size[0])) {
                emlrtDynamicBoundsCheckR2012b(xx->size[0] - 1, 1, xx->size[0],
                                              &d_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (muDoubleScalarSign(
                      states_data[(xx->size[0] + xx->size[0] * 10) - 2]) ==
                  b_physical->shoot) {
                SIGN = b_physical->shoot;
              } else {
                SIGN = -b_physical->shoot;
              }
            }
          }
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
    /*  final values */
    if (b_physical->NSTATE < 1.0) {
      loop_ub = 0;
    } else {
      if (b_physical->NSTATE !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE, &c_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)b_physical->NSTATE < 1) ||
          ((int32_T)b_physical->NSTATE > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                      xx->size[1], &f_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = (int32_T)b_physical->NSTATE;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &e_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    for (i = 0; i < loop_ub; i++) {
      temp[i] = states_data[(xx->size[0] + xx->size[0] * i) - 1];
    }
    if (b_physical->NSTATE + 1.0 > d) {
      i = 0;
      i1 = 0;
    } else {
      if (b_physical->NSTATE + 1.0 !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &d_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      xx->size[1], &h_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &e_emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xx->size[1], &i_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = (int32_T)d;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &g_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    type = i1 - i;
    for (i1 = 0; i1 < type; i1++) {
      pf_data[i1] = states_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
    }
    if ((loop_ub != 5) && (loop_ub != 1)) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, 5, &c_emlrtECI, (emlrtConstCTX)sp);
    }
    if ((type != 5) && (type != 1)) {
      emlrtDimSizeImpxCheckR2021b(type, 5, &d_emlrtECI, (emlrtConstCTX)sp);
    }
    if (type == 5) {
      t2 = 0.0;
      for (i = 0; i < 5; i++) {
        t2 += boundary->Sigma[i] * (pf_data[i] + b_physical->g0_x[i]);
      }
    } else {
      t2 = b_binary_expand_op(boundary, pf_data, &type, b_physical);
    }
    if (loop_ub == 5) {
      real_T xf[5];
      for (i = 0; i < 5; i++) {
        xf[i] = temp[i] - boundary->Xf[i];
      }
      type = 5;
      for (i = 0; i < 4; i++) {
        d = 0.0;
        for (i1 = 0; i1 < 5; i1++) {
          d += boundary->Pigreco[i1 + 5 * i] * xf[i1];
        }
        val_data[i] = d;
      }
      val_data[4] = t2;
    } else {
      binary_expand_op(val_data, &type, boundary, temp, &loop_ub, t2);
    }
    if (tt->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(tt->size[0], 1, tt->size[0], &n_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (tt_data[tt->size[0] - 1] < boundary->Tfin * 0.99) {
      type = 1;
      val_data[0] = 100.0;
    }
    /*  objective function */
    st.site = &c_emlrtRSI;
    b_st.site = &f_emlrtRSI;
    for (i = 0; i < type; i++) {
      t2 = val_data[i];
      val_data[i] = t2 * t2;
    }
    st.site = &c_emlrtRSI;
    b_st.site = &td_emlrtRSI;
    *obj = sumColumnB(val_data, type);
    if (index2 < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)index2;
    }
    i = states->size[0] * states->size[1];
    states->size[0] = loop_ub;
    states->size[1] = temps->size[1];
    emxEnsureCapacity_real_T(sp, states, i, &m_emlrtRTEI);
    states_data = states->data;
    type = temps->size[1];
    for (i = 0; i < type; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        states_data[i1 + states->size[0] * i] = temps_data[i1 + 1000000 * i];
      }
    }
    emxFree_real_T(sp, &temps);
    if (index2 < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)index2;
    }
    i = times->size[0];
    times->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, times, i, &n_emlrtRTEI);
    states_data = times->data;
    for (i = 0; i < loop_ub; i++) {
      states_data[i] = SD->f0.tempt[i];
    }
  }
  emxFree_real_T(sp, &tt);
  emxFree_real_T(sp, &xx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfun_S_energy_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                              real_T physical_c, real_T physical_NSTATE,
                              real_T physical_shoot, real_T physical_EPS,
                              real_T SIGN, const real_T s[11],
                              emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *pd;
  emxArray_real_T *xd;
  real_T p_data[11];
  real_T x_data[11];
  real_T S_p[5];
  real_T S_x[5];
  real_T b_x_tmp;
  real_T t2;
  real_T x_tmp;
  real_T *H_p_data;
  real_T *H_x_data;
  real_T *pd_data;
  real_T *varargout_1_data;
  real_T *xd_data;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T d_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &w_emlrtRSI;
  /*  computation of equations of motion and switching function derivative */
  /*  3 inputs case:  */
  /*  inp1: states and costates vector [NSTATEx1], inp2: structure for physical
   * variables */
  /*  and functions, inp3: switching function */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &l_emlrtDCI, &st);
    }
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 11,
                                    &db_emlrtBCI, &st);
    }
    loop_ub = (int32_T)physical_NSTATE;
  }
  if (loop_ub - 1 >= 0) {
    memcpy(&x_data[0], &s[0], (uint32_T)loop_ub * sizeof(real_T));
  }
  x_tmp = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > x_tmp) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &k_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1, 11,
                                    &cb_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (x_tmp != (int32_T)muDoubleScalarFloor(x_tmp)) {
      emlrtIntegerCheckR2012b(x_tmp, &j_emlrtDCI, &st);
    }
    if (((int32_T)x_tmp < 1) || ((int32_T)x_tmp > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)x_tmp, 1, 11, &bb_emlrtBCI, &st);
    }
    i1 = (int32_T)x_tmp;
  }
  b_loop_ub = i1 - i;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    p_data[i1] = s[i + i1];
  }
  emxInit_real_T(&st, &xd, 1, &v_emlrtRTEI);
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &n_emlrtDCI, &st);
  }
  x_tmp = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != x_tmp) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &m_emlrtDCI, &st);
  }
  i1 = xd->size[0];
  xd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, xd, i1, &v_emlrtRTEI);
  xd_data = xd->data;
  if (physical_NSTATE != x_tmp) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &m_emlrtDCI, &st);
  }
  c_loop_ub = (int32_T)physical_NSTATE;
  for (i1 = 0; i1 < c_loop_ub; i1++) {
    xd_data[i1] = 0.0;
  }
  emxInit_real_T(&st, &pd, 1, &w_emlrtRTEI);
  i1 = pd->size[0];
  pd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd, i1, &w_emlrtRTEI);
  pd_data = pd->data;
  c_loop_ub = (int32_T)physical_NSTATE;
  for (i1 = 0; i1 < c_loop_ub; i1++) {
    pd_data[i1] = 0.0;
  }
  c_loop_ub = (int32_T)physical_NSTATE << 1;
  i1 = varargout_1->size[0];
  varargout_1->size[0] = c_loop_ub + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i1, &x_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  for (i1 = 0; i1 <= c_loop_ub; i1++) {
    varargout_1_data[i1] = 0.0;
  }
  emxInit_real_T(&st, &H_x, 1, &x_emlrtRTEI);
  emxInit_real_T(&st, &H_p, 1, &x_emlrtRTEI);
  b_st.site = &x_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x_data, loop_ub, p_data, b_loop_ub, SIGN,
                              physical_Tmax, physical_c, physical_NSTATE,
                              physical_shoot, physical_EPS, H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  if (physical_NSTATE < 1.0) {
    d_loop_ub = 0;
    i1 = 0;
  } else {
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5,
                                    &ab_emlrtBCI, &st);
    }
    d_loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &y_emlrtBCI, &st);
    }
    i1 = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  emlrtSubAssignSizeCheckR2012b(&i1, 1, &d_loop_ub, 1, &k_emlrtECI, &st);
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    xd_data[i1] = H_p_data[i1];
  }
  /*  states derivatives [NSTATEx1] */
  if (physical_NSTATE < 1.0) {
    d_loop_ub = 0;
    i1 = 0;
  } else {
    d_loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &x_emlrtBCI, &st);
    }
    i1 = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  for (i2 = 0; i2 < d_loop_ub; i2++) {
    S_x[i2] = -H_x_data[i2];
  }
  emlrtSubAssignSizeCheckR2012b(&i1, 1, &d_loop_ub, 1, &j_emlrtECI, &st);
  for (i1 = 0; i1 < d_loop_ub; i1++) {
    pd_data[i1] = S_x[i1];
  }
  /*  costates derivatives [NSTATEx1] */
  b_st.site = &y_emlrtRSI;
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
  c_st.site = &d_emlrtRSI;
  /* S_fun */
  /*     Ssym = S_fun(IN1,IN2,Tsym,CSYM,EPSsym) */
  /*     This function was generated by the Symbolic Math Toolbox version 9.2.
   */
  /*     01-Sep-2024 17:26:08 */
  if (b_loop_ub < 3) {
    emlrtDynamicBoundsCheckR2012b(3, 1, b_loop_ub, &t_emlrtBCI, &c_st);
  }
  if (b_loop_ub < 4) {
    emlrtDynamicBoundsCheckR2012b(4, 1, 3, &s_emlrtBCI, &c_st);
  }
  if (b_loop_ub < 5) {
    emlrtDynamicBoundsCheckR2012b(5, 1, 4, &r_emlrtBCI, &c_st);
  }
  if (loop_ub < 5) {
    emlrtDynamicBoundsCheckR2012b(5, 1, loop_ub, &q_emlrtBCI, &c_st);
  }
  t2 = 1.0 / physical_c;
  d_st.site = &e_emlrtRSI;
  x_tmp = s[i + 2];
  b_x_tmp = s[i + 3];
  x_tmp = x_tmp * x_tmp + b_x_tmp * b_x_tmp;
  if (x_tmp < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &d_st, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  x_tmp = muDoubleScalarSqrt(x_tmp);
  c_st.site = &oc_emlrtRSI;
  S_x_fun(&c_st, x_data, loop_ub, p_data, b_loop_ub, physical_Tmax, S_x);
  c_st.site = &pc_emlrtRSI;
  S_p_fun(&c_st, x_data, loop_ub, p_data, b_loop_ub, physical_Tmax, physical_c,
          S_p);
  c_st.site = &qc_emlrtRSI;
  HamiltonianFirstDerivatives(
      &c_st, x_data, loop_ub, p_data, b_loop_ub,
      -physical_Tmax * ((t2 + s[i + 4] * t2) - x_tmp / s[4]), physical_Tmax,
      physical_c, physical_NSTATE, physical_shoot, physical_EPS, H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  /*  Switching function derivative */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > c_loop_ub + 1)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    c_loop_ub + 1, &w_emlrtBCI, &st);
    }
    loop_ub = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  if (loop_ub != xd->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, xd->size[0], &i_emlrtECI, &st);
  }
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i] = xd_data[i];
  }
  emxFree_real_T(&st, &xd);
  if ((int32_T)physical_NSTATE + 1 > c_loop_ub) {
    i = 0;
    i1 = 0;
  } else {
    if (((int32_T)physical_NSTATE + 1 < 1) ||
        ((int32_T)physical_NSTATE + 1 > varargout_1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE + 1, 1,
                                    varargout_1->size[0], &v_emlrtBCI, &st);
    }
    i = (int32_T)physical_NSTATE;
    if ((c_loop_ub < 1) || (c_loop_ub > varargout_1->size[0])) {
      emlrtDynamicBoundsCheckR2012b(c_loop_ub, 1, varargout_1->size[0],
                                    &u_emlrtBCI, &st);
    }
    i1 = c_loop_ub;
  }
  loop_ub = i1 - i;
  if (loop_ub != pd->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, pd->size[0], &h_emlrtECI, &st);
  }
  for (i1 = 0; i1 < loop_ub; i1++) {
    varargout_1_data[i + i1] = pd_data[i1];
  }
  emxFree_real_T(&st, &pd);
  x_tmp = 0.0;
  b_x_tmp = 0.0;
  for (i = 0; i < 5; i++) {
    x_tmp += S_x[i] * H_p_data[i];
    b_x_tmp += S_p[i] * H_x_data[i];
  }
  emxFree_real_T(&st, &H_p);
  emxFree_real_T(&st, &H_x);
  if ((c_loop_ub + 1 < 1) || (c_loop_ub + 1 > varargout_1->size[0])) {
    emlrtDynamicBoundsCheckR2012b(c_loop_ub + 1, 1, varargout_1->size[0],
                                  &eb_emlrtBCI, &st);
  }
  varargout_1_data[c_loop_ub] = x_tmp - b_x_tmp;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (objfun_S_energy.c) */
