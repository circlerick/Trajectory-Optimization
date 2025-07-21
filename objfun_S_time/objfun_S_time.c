/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_time.c
 *
 * Code generation for function 'objfun_S_time'
 *
 */

/* Include files */
#include "objfun_S_time.h"
#include "Hamiltonian.h"
#include "HamiltonianFirstDerivatives.h"
#include "S_fun.h"
#include "S_p_fun.h"
#include "S_x_fun.h"
#include "Switching_Function.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "norm.h"
#include "objfun_S_time_data.h"
#include "objfun_S_time_emxutil.h"
#include "objfun_S_time_types.h"
#include "ode89.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "sum.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    149,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    144,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    143,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    142,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    141,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    138,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    137,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    136,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    135,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    97,                                                        /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    84,                                                        /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    81,                                                        /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    70,                                                        /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    51,                                                        /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    38,                                                        /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    36,                                                        /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    35,                                                        /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    38,                                                        /* lineNo */
    "@(t,s)derivatives(s,physical,S)",                         /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo ub_emlrtRSI = {
    12,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    13,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    28,                                                      /* lineNo */
    "derivatives",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = {
    84,                                                        /* lineNo */
    "@(t,s)derivatives_S(s,physical,SIGN)",                    /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

static emlrtRSInfo nf_emlrtRSI = {
    10,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo of_emlrtRSI = {
    11,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = {
    26,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = {
    29,                                                        /* lineNo */
    "derivatives_S",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pathName */
};

static emlrtRSInfo mg_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

static emlrtMCInfo emlrtMCI = {
    120,                                                       /* lineNo */
    9,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtECInfo emlrtECI = {
    1,                                                         /* nDims */
    144,                                                       /* lineNo */
    18,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtECInfo b_emlrtECI = {
    1,                                                         /* nDims */
    143,                                                       /* lineNo */
    20,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    1,                                                         /* nDims */
    138,                                                       /* lineNo */
    18,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    1,                                                         /* nDims */
    137,                                                       /* lineNo */
    20,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    131,                                                        /* lineNo */
    22,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    131,                                                        /* lineNo */
    22,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    131,                                                        /* lineNo */
    13,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    131,                                                        /* lineNo */
    13,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    131,                                                        /* lineNo */
    9,                                                          /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    130,                                                        /* lineNo */
    15,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    130,                                                        /* lineNo */
    15,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    130,                                                        /* lineNo */
    13,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    130,                                                        /* lineNo */
    9,                                                          /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo e_emlrtECI = {
    -1,                                                        /* nDims */
    90,                                                        /* lineNo */
    17,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtBCInfo g_emlrtBCI = {
    1,                                                          /* iFirst */
    1000000,                                                    /* iLast */
    90,                                                         /* lineNo */
    32,                                                         /* colNo */
    "tempt",                                                    /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    1,                                                          /* iFirst */
    1000000,                                                    /* iLast */
    90,                                                         /* lineNo */
    23,                                                         /* colNo */
    "tempt",                                                    /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo f_emlrtECI = {
    -1,                                                        /* nDims */
    89,                                                        /* lineNo */
    17,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtBCInfo i_emlrtBCI = {
    1,                                                          /* iFirst */
    1000000,                                                    /* iLast */
    89,                                                         /* lineNo */
    32,                                                         /* colNo */
    "temps",                                                    /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    1,                                                          /* iFirst */
    1000000,                                                    /* iLast */
    89,                                                         /* lineNo */
    23,                                                         /* colNo */
    "temps",                                                    /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo g_emlrtECI = {
    -1,                                                        /* nDims */
    75,                                                        /* lineNo */
    13,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtBCInfo k_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    103,                                                        /* lineNo */
    42,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    103,                                                        /* lineNo */
    36,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    97,                                                         /* lineNo */
    76,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    97,                                                         /* lineNo */
    76,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    97,                                                         /* lineNo */
    67,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    97,                                                         /* lineNo */
    67,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    97,                                                         /* lineNo */
    56,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    97,                                                         /* lineNo */
    56,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtECInfo h_emlrtECI = {
    -1,                                                        /* nDims */
    95,                                                        /* lineNo */
    17,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    95,                                                         /* lineNo */
    22,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    95,                                                         /* lineNo */
    38,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    95,                                                         /* lineNo */
    32,                                                         /* colNo */
    "xx",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo i_emlrtECI = {
    1,                                                         /* nDims */
    81,                                                        /* lineNo */
    82,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    81,                                                         /* lineNo */
    94,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    81,                                                         /* lineNo */
    94,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtECInfo j_emlrtECI = {
    1,                                                         /* nDims */
    81,                                                        /* lineNo */
    36,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    81,                                                         /* lineNo */
    48,                                                         /* colNo */
    "s0",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    81,                                                         /* lineNo */
    48,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    70,                                                         /* lineNo */
    26,                                                         /* colNo */
    "lam0",                                                     /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    70,                                                         /* lineNo */
    24,                                                         /* colNo */
    "lam0",                                                     /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    51,                                                         /* lineNo */
    41,                                                         /* colNo */
    "lam0",                                                     /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    51,                                                         /* lineNo */
    39,                                                         /* colNo */
    "lam0",                                                     /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    36,                                                         /* lineNo */
    41,                                                         /* colNo */
    "lam0",                                                     /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    36,                                                         /* lineNo */
    39,                                                         /* colNo */
    "lam0",                                                     /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    35,                                                         /* lineNo */
    26,                                                         /* colNo */
    "lam0",                                                     /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    35,                                                         /* lineNo */
    24,                                                         /* colNo */
    "lam0",                                                     /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = {
    74,                                                         /* lineNo */
    31,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    74,                                                         /* lineNo */
    31,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    4                                                           /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    22,                                                         /* lineNo */
    13,                                                         /* colNo */
    "lam0",                                                     /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    74,                                                         /* lineNo */
    13,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    74,                                                         /* lineNo */
    13,                                                         /* colNo */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    4                                                           /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    85,                                                         /* lineNo */
    23,                                                         /* colNo */
    "tt",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    94,                                                         /* lineNo */
    19,                                                         /* colNo */
    "tt",                                                       /* aName */
    "objfun_S_time",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    12,                                                       /* lineNo */
    11,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    12,                                                       /* lineNo */
    13,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    12,                                                       /* lineNo */
    13,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    13,                                                       /* lineNo */
    11,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    13,                                                       /* lineNo */
    11,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    13,                                                       /* lineNo */
    20,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    13,                                                       /* lineNo */
    20,                                                       /* colNo */
    "inp1",                                                   /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    30,                                                       /* lineNo */
    5,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    30,                                                       /* lineNo */
    7,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    30,                                                       /* lineNo */
    7,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo k_emlrtECI = {
    -1,                                                      /* nDims */
    30,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtDCInfo q_emlrtDCI = {
    32,                                                       /* lineNo */
    5,                                                        /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    32,                                                       /* lineNo */
    5,                                                        /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    32,                                                       /* lineNo */
    14,                                                       /* colNo */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    32,                                                       /* lineNo */
    14,                                                       /* colNo */
    "xxd",                                                    /* aName */
    "derivatives",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo l_emlrtECI = {
    -1,                                                      /* nDims */
    32,                                                      /* lineNo */
    1,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtDCInfo s_emlrtDCI = {
    38,                                                         /* lineNo */
    25,                                                         /* colNo */
    "@(t,s)derivatives(s,physical,S)",                          /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    38,                                                         /* lineNo */
    25,                                                         /* colNo */
    "@(t,s)derivatives(s,physical,S)",                          /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    4                                                           /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    10,                                                         /* lineNo */
    11,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = {
    10,                                                         /* lineNo */
    13,                                                         /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    10,                                                         /* lineNo */
    13,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    11,                                                         /* lineNo */
    11,                                                         /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    11,                                                         /* lineNo */
    11,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    11,                                                         /* lineNo */
    20,                                                         /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    11,                                                         /* lineNo */
    20,                                                         /* colNo */
    "inp1",                                                     /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    27,                                                         /* lineNo */
    22,                                                         /* colNo */
    "H_p",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    27,                                                         /* lineNo */
    6,                                                          /* colNo */
    "xd",                                                       /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo o_emlrtECI = {
    -1,                                                        /* nDims */
    27,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo ad_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    28,                                                         /* lineNo */
    6,                                                          /* colNo */
    "pd",                                                       /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo p_emlrtECI = {
    -1,                                                        /* nDims */
    28,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo bd_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    30,                                                         /* lineNo */
    7,                                                          /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo q_emlrtECI = {
    -1,                                                        /* nDims */
    30,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtBCInfo cd_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    31,                                                         /* lineNo */
    5,                                                          /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    31,                                                         /* lineNo */
    14,                                                         /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtECInfo r_emlrtECI = {
    -1,                                                        /* nDims */
    31,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtDCInfo bb_emlrtDCI = {
    25,                                                         /* lineNo */
    1,                                                          /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = {
    25,                                                         /* lineNo */
    1,                                                          /* colNo */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    4                                                           /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = {
    84,                                                         /* lineNo */
    29,                                                         /* colNo */
    "@(t,s)derivatives_S(s,physical,SIGN)",                     /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m", /* pName */
    1                                                           /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = {
    -1,                                                         /* iFirst */
    -1,                                                         /* iLast */
    32,                                                         /* lineNo */
    5,                                                          /* colNo */
    "xxd",                                                      /* aName */
    "derivatives_S",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m", /* pName */
    0                                                           /* checkKind */
};

static emlrtRTEInfo o_emlrtRTEI = {
    19,                                                        /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    20,                                                        /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    23,                                                        /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo r_emlrtRTEI = {
    25,                                                        /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    51,                                                        /* lineNo */
    34,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    36,                                                        /* lineNo */
    34,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    35,                                                        /* lineNo */
    14,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    70,                                                        /* lineNo */
    9,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    42,                                                        /* lineNo */
    13,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    74,                                                        /* lineNo */
    13,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    130,                                                       /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    131,                                                       /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    115,                                                       /* lineNo */
    13,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI =
    {
        31,            /* lineNo */
        30,            /* colNo */
        "unsafeSxfun", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\unsafeSxfun.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    116,                                                       /* lineNo */
    13,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    81,                                                        /* lineNo */
    36,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    81,                                                        /* lineNo */
    82,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    139,                                                       /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    145,                                                       /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    97,                                                        /* lineNo */
    51,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    97,                                                        /* lineNo */
    64,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    35,                                                        /* lineNo */
    9,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    137,                                                       /* lineNo */
    1,                                                         /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = {
    38,                                                        /* lineNo */
    25,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = {
    12,                                                      /* lineNo */
    6,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = {
    13,                                                      /* lineNo */
    6,                                                       /* colNo */
    "derivatives",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    10,                                                        /* lineNo */
    4,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    11,                                                        /* lineNo */
    4,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    25,                                                        /* lineNo */
    1,                                                         /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    25,                                                        /* lineNo */
    20,                                                        /* colNo */
    "derivatives_S",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivatives_S.m" /* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    84,                                                        /* lineNo */
    29,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = {
    144,                                                       /* lineNo */
    18,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRTEInfo le_emlrtRTEI = {
    143,                                                       /* lineNo */
    20,                                                        /* colNo */
    "objfun_S_time",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pName */
};

static emlrtRSInfo ah_emlrtRSI = {
    120,                                                       /* lineNo */
    "objfun_S_time",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_time.m" /* pathName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const struct1_T *in2);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const struct0_T *in2);

static void disp(const emlrtStack *sp, const mxArray *m, emlrtMCInfo *location);

static const mxArray *emlrt_marshallOut(const emlrtStack *sp,
                                        const char_T u[39]);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const struct1_T *in2)
{
  emxArray_real_T *b_in1;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 1, &le_emlrtRTEI);
  i = b_in1->size[0];
  if (in2->Xf->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->Xf->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &le_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->Xf->size[0] != 1);
  if (in2->Xf->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->Xf->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] - in2->Xf->data[i * stride_1_0];
  }
  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &le_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const struct0_T *in2)
{
  emxArray_real_T *b_in1;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 1, &ke_emlrtRTEI);
  i = b_in1->size[0];
  if (in2->g0_x->size[0] == 1) {
    b_in1->size[0] = in1->size[0];
  } else {
    b_in1->size[0] = in2->g0_x->size[0];
  }
  emxEnsureCapacity_real_T(sp, b_in1, i, &ke_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[0] != 1);
  stride_1_0 = (in2->g0_x->size[0] != 1);
  if (in2->g0_x->size[0] == 1) {
    loop_ub = in1->size[0];
  } else {
    loop_ub = in2->g0_x->size[0];
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1_data[i] = in1_data[i * stride_0_0] + in2->g0_x->data[i * stride_1_0];
  }
  i = in1->size[0];
  in1->size[0] = b_in1->size[0];
  emxEnsureCapacity_real_T(sp, in1, i, &ke_emlrtRTEI);
  in1_data = in1->data;
  loop_ub = b_in1->size[0];
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = b_in1_data[i];
  }
  emxFree_real_T(sp, &b_in1);
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
                                        const char_T u[39])
{
  static const int32_T iv[2] = {1, 39};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 39, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

void emlrt_checkEscapedGlobals(void)
{
  physical_dirty |= physical_dirty >> 1U;
}

void objfun_S_time(objfun_S_timeStackData *SD, const emlrtStack *sp,
                   const emxArray_real_T *lam0, const emxArray_real_T *X0,
                   const struct0_T *b_physical, const struct1_T *boundary,
                   const struct2_T *par, real_T *obj, emxArray_real_T *states,
                   emxArray_real_T *times)
{
  static const char_T cv[39] = {
      'E', 'r', 'r', 'o', 'r', ',', ' ', 'n', 'o', ' ', 'm', 'a', 't',
      'c', 'h', ' ', 'f', 'o', 'u', 'n', 'd', ' ', 'w', 'i', 't', 'h',
      ' ', 'p', 'r', 'o', 'b', 'l', 'e', 'm', ' ', 't', 'y', 'p', 'e'};
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *deltaX;
  emxArray_real_T *pf;
  emxArray_real_T *s0;
  emxArray_real_T *temps;
  emxArray_real_T *val;
  emxArray_real_T *xx;
  const real_T *X0_data;
  const real_T *lam0_data;
  real_T NSTATE;
  real_T S;
  real_T SIGN;
  real_T Tfin;
  real_T d;
  real_T deltaP;
  real_T *pf_data;
  real_T *s0_data;
  real_T *states_data;
  real_T *temps_data;
  real_T *val_data;
  real_T *xx_data;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T type;
  boolean_T guard1 = false;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  X0_data = X0->data;
  lam0_data = lam0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  compute the objective function for a free time */
  /*  problem */
  /*  Inputs: */
  /*  lam0: initial costates vector [NSTATEx1] */
  /*  X0: initial states vector [NSTATEx1] */
  /*  physical: structure for physical variables */
  /*  boundary: structure for control problem inputs */
  /*  par: structure for simulation variables */
  /*  Output: */
  /*  obj: objective function residual */
  /*  states: matrix of states and costates during the propagation */
  /*  times: vector of times during the propagation  */
  /*  initialize outputs and constants */
  *obj = 1000.0;
  i = states->size[0] * states->size[1];
  states->size[0] = 1;
  states->size[1] = 1;
  emxEnsureCapacity_real_T(sp, states, i, &o_emlrtRTEI);
  states_data = states->data;
  states_data[0] = 0.0;
  i = times->size[0];
  times->size[0] = 1;
  emxEnsureCapacity_real_T(sp, times, i, &p_emlrtRTEI);
  states_data = times->data;
  states_data[0] = 0.0;
  if (lam0->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(lam0->size[0], 1, lam0->size[0], &db_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  Tfin = lam0_data[lam0->size[0] - 1];
  emxInit_real_T(sp, &xx, 2, &q_emlrtRTEI);
  i = xx->size[0] * xx->size[1];
  xx->size[0] = 1;
  xx->size[1] = 1;
  emxEnsureCapacity_real_T(sp, xx, i, &q_emlrtRTEI);
  xx_data = xx->data;
  xx_data[0] = 0.0;
  emxInit_real_T(sp, &val, 1, &r_emlrtRTEI);
  i = val->size[0];
  val->size[0] = 1;
  emxEnsureCapacity_real_T(sp, val, i, &r_emlrtRTEI);
  val_data = val->data;
  val_data[0] = 1000.0;
  NSTATE = b_physical->NSTATE;
  /*  integration */
  if (b_strcmp(par->problem)) {
    type = 0;
  } else if (c_strcmp(par->problem)) {
    type = 1;
  } else {
    type = -1;
  }
  emxInit_real_T(sp, &s0, 1, &kb_emlrtRTEI);
  emxInit_real_T(sp, &temps, 2, &x_emlrtRTEI);
  emxInit_real_T(sp, &pf, 1, &ab_emlrtRTEI);
  emxInit_real_T(sp, &deltaX, 1, &lb_emlrtRTEI);
  guard1 = false;
  switch (type) {
  case 0: {
    real_T b_boundary[2];
    if (lam0->size[0] - 1 < 1) {
      loop_ub = 0;
    } else {
      if (lam0->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, lam0->size[0], &cb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((lam0->size[0] - 1 < 1) || (lam0->size[0] - 1 > lam0->size[0])) {
        emlrtDynamicBoundsCheckR2012b(lam0->size[0] - 1, 1, lam0->size[0],
                                      &bb_emlrtBCI, (emlrtConstCTX)sp);
      }
      loop_ub = lam0->size[0] - 1;
    }
    iv[0] = 1;
    iv[1] = loop_ub;
    st.site = &q_emlrtRSI;
    indexShapeCheck(&st, lam0->size[0], iv);
    /*  initial state and costate */
    if (lam0->size[0] - 1 < 1) {
      type = 0;
    } else {
      if (lam0->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, lam0->size[0], &ab_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((lam0->size[0] - 1 < 1) || (lam0->size[0] - 1 > lam0->size[0])) {
        emlrtDynamicBoundsCheckR2012b(lam0->size[0] - 1, 1, lam0->size[0],
                                      &y_emlrtBCI, (emlrtConstCTX)sp);
      }
      type = lam0->size[0] - 1;
    }
    iv[0] = 1;
    iv[1] = type;
    st.site = &p_emlrtRSI;
    indexShapeCheck(&st, lam0->size[0], iv);
    st.site = &p_emlrtRSI;
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
    i = pf->size[0];
    pf->size[0] = type;
    emxEnsureCapacity_real_T(&st, pf, i, &t_emlrtRTEI);
    pf_data = pf->data;
    for (i = 0; i < type; i++) {
      pf_data[i] = lam0_data[i];
    }
    b_st.site = &s_emlrtRSI;
    S = S_fun(&b_st, X0, pf, b_physical->Tmax, b_physical->c);
    b_boundary[0] = boundary->T0;
    b_boundary[1] = lam0_data[lam0->size[0] - 1];
    i = pf->size[0];
    pf->size[0] = X0->size[0] + loop_ub;
    emxEnsureCapacity_real_T(sp, pf, i, &u_emlrtRTEI);
    pf_data = pf->data;
    type = X0->size[0];
    for (i = 0; i < type; i++) {
      pf_data[i] = X0_data[i];
    }
    for (i = 0; i < loop_ub; i++) {
      pf_data[i + X0->size[0]] = lam0_data[i];
    }
    st.site = &o_emlrtRSI;
    ode89(&st, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
          b_physical->shoot, b_physical->EPS, muDoubleScalarSign(S), b_boundary,
          pf, times, xx);
    xx_data = xx->data;
    i = states->size[0] * states->size[1];
    states->size[0] = xx->size[0];
    states->size[1] = xx->size[1];
    emxEnsureCapacity_real_T(sp, states, i, &w_emlrtRTEI);
    states_data = states->data;
    loop_ub = xx->size[0] * xx->size[1];
    for (i = 0; i < loop_ub; i++) {
      states_data[i] = xx_data[i];
    }
    guard1 = true;
  } break;
  case 1: {
    real_T index2;
    real_T told;
    boolean_T exitg1;
    told = boundary->T0;
    if (lam0->size[0] - 1 < 1) {
      loop_ub = 0;
    } else {
      if (lam0->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, lam0->size[0], &x_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((lam0->size[0] - 1 < 1) || (lam0->size[0] - 1 > lam0->size[0])) {
        emlrtDynamicBoundsCheckR2012b(lam0->size[0] - 1, 1, lam0->size[0],
                                      &w_emlrtBCI, (emlrtConstCTX)sp);
      }
      loop_ub = lam0->size[0] - 1;
    }
    iv[0] = 1;
    iv[1] = loop_ub;
    st.site = &n_emlrtRSI;
    indexShapeCheck(&st, lam0->size[0], iv);
    st.site = &n_emlrtRSI;
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
    i = pf->size[0];
    pf->size[0] = loop_ub;
    emxEnsureCapacity_real_T(&st, pf, i, &s_emlrtRTEI);
    pf_data = pf->data;
    for (i = 0; i < loop_ub; i++) {
      pf_data[i] = lam0_data[i];
    }
    b_st.site = &s_emlrtRSI;
    S = S_fun(&b_st, X0, pf, b_physical->Tmax, b_physical->c);
    if (b_physical->EPS > 0.0) {
      if ((S < b_physical->EPS * b_physical->Tmax / b_physical->c) &&
          (S > -b_physical->EPS * b_physical->Tmax / b_physical->c)) {
        type = 0;
      } else if (muDoubleScalarSign(S) != b_physical->shoot) {
        type = -1;
      } else {
        type = 1;
      }
    } else if (muDoubleScalarSign(S) != b_physical->shoot) {
      type = -1;
    } else {
      type = 1;
    }
    SIGN = b_physical->shoot * (real_T)type;
    if (lam0->size[0] - 1 < 1) {
      loop_ub = 0;
    } else {
      if (lam0->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, lam0->size[0], &v_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if ((lam0->size[0] - 1 < 1) || (lam0->size[0] - 1 > lam0->size[0])) {
        emlrtDynamicBoundsCheckR2012b(lam0->size[0] - 1, 1, lam0->size[0],
                                      &u_emlrtBCI, (emlrtConstCTX)sp);
      }
      loop_ub = lam0->size[0] - 1;
    }
    iv[0] = 1;
    iv[1] = loop_ub;
    st.site = &m_emlrtRSI;
    indexShapeCheck(&st, lam0->size[0], iv);
    i = s0->size[0];
    s0->size[0] = (X0->size[0] + loop_ub) + 1;
    emxEnsureCapacity_real_T(sp, s0, i, &v_emlrtRTEI);
    s0_data = s0->data;
    type = X0->size[0];
    for (i = 0; i < type; i++) {
      s0_data[i] = X0_data[i];
    }
    for (i = 0; i < loop_ub; i++) {
      s0_data[i + X0->size[0]] = lam0_data[i];
    }
    s0_data[X0->size[0] + loop_ub] = S;
    /*  initial state, costate and switching function */
    memset(&SD->f0.tempt[0], 0, 1000000U * sizeof(real_T));
    i = temps->size[0] * temps->size[1];
    temps->size[0] = 1000000;
    emxEnsureCapacity_real_T(sp, temps, i, &x_emlrtRTEI);
    d = 2.0 * b_physical->NSTATE;
    if (!(d + 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d + 1.0, &j_emlrtDCI, (emlrtConstCTX)sp);
    }
    deltaP = (int32_T)muDoubleScalarFloor(d + 1.0);
    if (d + 1.0 != deltaP) {
      emlrtIntegerCheckR2012b(d + 1.0, &i_emlrtDCI, (emlrtConstCTX)sp);
    }
    i = temps->size[0] * temps->size[1];
    temps->size[1] = (int32_T)(d + 1.0);
    emxEnsureCapacity_real_T(sp, temps, i, &x_emlrtRTEI);
    temps_data = temps->data;
    if (!(d + 1.0 >= 0.0)) {
      emlrtNonNegativeCheckR2012b(d + 1.0, &l_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (d + 1.0 != deltaP) {
      emlrtIntegerCheckR2012b(d + 1.0, &k_emlrtDCI, (emlrtConstCTX)sp);
    }
    loop_ub = 1000000 * (int32_T)(d + 1.0);
    for (i = 0; i < loop_ub; i++) {
      temps_data[i] = 0.0;
    }
    iv[0] = 1;
    iv[1] = (int32_T)(d + 1.0);
    iv1[0] = 1;
    iv1[1] = s0->size[0];
    emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &g_emlrtECI,
                                  (emlrtCTX)sp);
    loop_ub = s0->size[0];
    for (i = 0; i < loop_ub; i++) {
      temps_data[1000000 * i] = s0_data[i];
    }
    SD->f0.tempt[0] = boundary->T0;
    S = 1.0;
    index2 = 0.0;
    exitg1 = false;
    while ((!exitg1) && (told != Tfin)) {
      int32_T stride_1_0;
      deltaP = muDoubleScalarRound(NSTATE / 2.0);
      if (deltaP - 1.0 < 1.0) {
        i = 0;
      } else {
        if (deltaP - 1.0 != (int32_T)(deltaP - 1.0)) {
          emlrtIntegerCheckR2012b(deltaP - 1.0, &h_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)(deltaP - 1.0) < 1) ||
            ((int32_T)(deltaP - 1.0) > s0->size[0])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(deltaP - 1.0), 1, s0->size[0],
                                        &t_emlrtBCI, (emlrtConstCTX)sp);
        }
        i = (int32_T)(deltaP - 1.0);
      }
      iv[0] = 1;
      iv[1] = i;
      st.site = &l_emlrtRSI;
      indexShapeCheck(&st, s0->size[0], iv);
      if ((b_physical->Earth->size[0] != i) &&
          ((b_physical->Earth->size[0] != 1) && (i != 1))) {
        emlrtDimSizeImpxCheckR2021b(b_physical->Earth->size[0], i, &j_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      i1 = pf->size[0];
      if (i == 1) {
        pf->size[0] = b_physical->Earth->size[0];
      } else {
        pf->size[0] = i;
      }
      emxEnsureCapacity_real_T(sp, pf, i1, &eb_emlrtRTEI);
      pf_data = pf->data;
      type = (b_physical->Earth->size[0] != 1);
      stride_1_0 = (i != 1);
      if (i == 1) {
        loop_ub = b_physical->Earth->size[0];
      } else {
        loop_ub = i;
      }
      for (i = 0; i < loop_ub; i++) {
        pf_data[i] =
            b_physical->Earth->data[i * type] - s0_data[i * stride_1_0];
      }
      if (c_norm(pf) >= b_physical->RE) {
        if (deltaP - 1.0 < 1.0) {
          i = 0;
        } else {
          if (deltaP - 1.0 != (int32_T)(deltaP - 1.0)) {
            emlrtIntegerCheckR2012b(deltaP - 1.0, &g_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          if (((int32_T)(deltaP - 1.0) < 1) ||
              ((int32_T)(deltaP - 1.0) > s0->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(deltaP - 1.0), 1,
                                          s0->size[0], &s_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i = (int32_T)(deltaP - 1.0);
        }
        iv[0] = 1;
        iv[1] = i;
        st.site = &l_emlrtRSI;
        indexShapeCheck(&st, s0->size[0], iv);
        if ((b_physical->Moon->size[0] != i) &&
            ((b_physical->Moon->size[0] != 1) && (i != 1))) {
          emlrtDimSizeImpxCheckR2021b(b_physical->Moon->size[0], i, &i_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        i1 = pf->size[0];
        if (i == 1) {
          pf->size[0] = b_physical->Moon->size[0];
        } else {
          pf->size[0] = i;
        }
        emxEnsureCapacity_real_T(sp, pf, i1, &fb_emlrtRTEI);
        pf_data = pf->data;
        type = (b_physical->Moon->size[0] != 1);
        stride_1_0 = (i != 1);
        if (i == 1) {
          loop_ub = b_physical->Moon->size[0];
        } else {
          loop_ub = i;
        }
        for (i = 0; i < loop_ub; i++) {
          pf_data[i] =
              b_physical->Moon->data[i * type] - s0_data[i * stride_1_0];
        }
        if (c_norm(pf) >= b_physical->RM) {
          real_T b_boundary[2];
          /*  integration with switching time detection */
          b_boundary[0] = told;
          b_boundary[1] = Tfin;
          st.site = &k_emlrtRSI;
          b_ode89(&st, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
                  b_physical->shoot, b_physical->EPS, SIGN, b_boundary, s0, pf,
                  xx);
          xx_data = xx->data;
          pf_data = pf->data;
          if (pf->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(pf->size[0], 1, pf->size[0],
                                          &eb_emlrtBCI, (emlrtConstCTX)sp);
          }
          told = pf_data[pf->size[0] - 1];
          index2 = (S + (real_T)pf->size[0]) - 1.0;
          if (xx->size[0] < 2) {
            i = 0;
            i1 = 0;
          } else {
            i = 1;
            i1 = xx->size[0];
          }
          if (S + 1.0 > index2) {
            stride_1_0 = 0;
            i2 = 0;
          } else {
            if (((int32_T)(S + 1.0) < 1) || ((int32_T)(S + 1.0) > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(S + 1.0), 1, 1000000,
                                            &j_emlrtBCI, (emlrtConstCTX)sp);
            }
            stride_1_0 = (int32_T)(S + 1.0) - 1;
            if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
                                            &i_emlrtBCI, (emlrtConstCTX)sp);
            }
            i2 = (int32_T)index2;
          }
          iv[0] = i2 - stride_1_0;
          iv[1] = temps->size[1];
          loop_ub = i1 - i;
          iv1[0] = loop_ub;
          iv1[1] = xx->size[1];
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &f_emlrtECI,
                                        (emlrtCTX)sp);
          type = xx->size[1];
          for (i1 = 0; i1 < type; i1++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              temps_data[(stride_1_0 + i2) + 1000000 * i1] =
                  xx_data[(i + i2) + xx->size[0] * i1];
            }
          }
          if (pf->size[0] < 2) {
            i = 0;
            i1 = 0;
          } else {
            i = 1;
            i1 = pf->size[0];
          }
          if (S + 1.0 > index2) {
            stride_1_0 = 0;
            i2 = 0;
          } else {
            if (((int32_T)(S + 1.0) < 1) || ((int32_T)(S + 1.0) > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)(S + 1.0), 1, 1000000,
                                            &h_emlrtBCI, (emlrtConstCTX)sp);
            }
            stride_1_0 = (int32_T)(S + 1.0) - 1;
            if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000,
                                            &g_emlrtBCI, (emlrtConstCTX)sp);
            }
            i2 = (int32_T)index2;
          }
          i2 -= stride_1_0;
          loop_ub = i1 - i;
          if (i2 != loop_ub) {
            emlrtSubAssignSizeCheck1dR2017a(i2, loop_ub, &e_emlrtECI,
                                            (emlrtConstCTX)sp);
          }
          for (i1 = 0; i1 < loop_ub; i1++) {
            SD->f0.tempt[stride_1_0 + i1] = pf_data[i + i1];
          }
          S = index2;
          if (pf->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(pf->size[0], 1, pf->size[0],
                                          &fb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (pf_data[pf->size[0] - 1] != Tfin) {
            if (xx->size[1] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[1], 1, xx->size[1],
                                            &q_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (s0->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(s0->size[0], 1, s0->size[0],
                                            &p_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (xx->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                            &r_emlrtBCI, (emlrtConstCTX)sp);
            }
            if (s0->size[0] != xx->size[1]) {
              emlrtSubAssignSizeCheck1dR2017a(s0->size[0], xx->size[1],
                                              &h_emlrtECI, (emlrtConstCTX)sp);
            }
            loop_ub = s0->size[0];
            for (i = 0; i < loop_ub; i++) {
              s0_data[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
            }
            if (b_physical->EPS == 0.0) {
              if (NSTATE < 1.0) {
                loop_ub = 0;
              } else {
                if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
                  emlrtIntegerCheckR2012b(NSTATE, &f_emlrtDCI,
                                          (emlrtConstCTX)sp);
                }
                if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > s0->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, s0->size[0],
                                                &o_emlrtBCI, (emlrtConstCTX)sp);
                }
                loop_ub = (int32_T)NSTATE;
              }
              iv[0] = 1;
              iv[1] = loop_ub;
              st.site = &j_emlrtRSI;
              indexShapeCheck(&st, s0->size[0], iv);
              if (NSTATE + 1.0 > d) {
                i = 0;
                i1 = 0;
              } else {
                if (NSTATE + 1.0 !=
                    (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
                  emlrtIntegerCheckR2012b(NSTATE + 1.0, &e_emlrtDCI,
                                          (emlrtConstCTX)sp);
                }
                if (((int32_T)(NSTATE + 1.0) < 1) ||
                    ((int32_T)(NSTATE + 1.0) > s0->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1,
                                                s0->size[0], &n_emlrtBCI,
                                                (emlrtConstCTX)sp);
                }
                i = (int32_T)(NSTATE + 1.0) - 1;
                if (d != (int32_T)muDoubleScalarFloor(d)) {
                  emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtConstCTX)sp);
                }
                if (((int32_T)d < 1) || ((int32_T)d > s0->size[0])) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s0->size[0],
                                                &m_emlrtBCI, (emlrtConstCTX)sp);
                }
                i1 = (int32_T)d;
              }
              iv[0] = 1;
              type = i1 - i;
              iv[1] = type;
              st.site = &j_emlrtRSI;
              indexShapeCheck(&st, s0->size[0], iv);
              i1 = pf->size[0];
              pf->size[0] = loop_ub;
              emxEnsureCapacity_real_T(sp, pf, i1, &ib_emlrtRTEI);
              pf_data = pf->data;
              for (i1 = 0; i1 < loop_ub; i1++) {
                pf_data[i1] = s0_data[i1];
              }
              i1 = deltaX->size[0];
              deltaX->size[0] = type;
              emxEnsureCapacity_real_T(sp, deltaX, i1, &jb_emlrtRTEI);
              states_data = deltaX->data;
              for (i1 = 0; i1 < type; i1++) {
                states_data[i1] = s0_data[i + i1];
              }
              st.site = &j_emlrtRSI;
              Switching_Function(&st, pf, deltaX, b_physical->Tmax,
                                 b_physical->c, b_physical->NSTATE,
                                 b_physical->shoot, b_physical->EPS, &deltaP,
                                 &SIGN);
            } else if (SIGN != 0.0) {
              SIGN = 0.0;
            } else {
              if ((xx->size[0] - 1 < 1) || (xx->size[0] - 1 > xx->size[0])) {
                emlrtDynamicBoundsCheckR2012b(xx->size[0] - 1, 1, xx->size[0],
                                              &l_emlrtBCI, (emlrtConstCTX)sp);
              }
              if (xx->size[1] < 1) {
                emlrtDynamicBoundsCheckR2012b(xx->size[1], 1, xx->size[1],
                                              &k_emlrtBCI, (emlrtConstCTX)sp);
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
    if (index2 < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)index2;
    }
    i = states->size[0] * states->size[1];
    states->size[0] = loop_ub;
    states->size[1] = temps->size[1];
    emxEnsureCapacity_real_T(sp, states, i, &bb_emlrtRTEI);
    states_data = states->data;
    type = temps->size[1];
    for (i = 0; i < type; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        states_data[i1 + states->size[0] * i] = temps_data[i1 + 1000000 * i];
      }
    }
    if (index2 < 1.0) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)index2;
    }
    i = times->size[0];
    times->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, times, i, &db_emlrtRTEI);
    states_data = times->data;
    for (i = 0; i < loop_ub; i++) {
      states_data[i] = SD->f0.tempt[i];
    }
    guard1 = true;
  } break;
  default:
    st.site = &ah_emlrtRSI;
    disp(&st, emlrt_marshallOut(&st, cv), &emlrtMCI);
    break;
  }
  if (guard1) {
    /*  final values */
    if (b_physical->NSTATE < 1.0) {
      loop_ub = 0;
    } else {
      if (xx->size[1] < 1) {
        emlrtDynamicBoundsCheckR2012b(1, 1, xx->size[1], &e_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (b_physical->NSTATE !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE, &c_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)b_physical->NSTATE < 1) ||
          ((int32_T)b_physical->NSTATE > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)b_physical->NSTATE, 1,
                                      xx->size[1], &d_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      loop_ub = (int32_T)b_physical->NSTATE;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &f_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    i = s0->size[0];
    s0->size[0] = loop_ub;
    emxEnsureCapacity_real_T(sp, s0, i, &y_emlrtRTEI);
    s0_data = s0->data;
    for (i = 0; i < loop_ub; i++) {
      s0_data[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
    }
    d = 2.0 * b_physical->NSTATE;
    if (b_physical->NSTATE + 1.0 > d) {
      i = 0;
      i1 = 0;
    } else {
      if (b_physical->NSTATE + 1.0 !=
          (int32_T)muDoubleScalarFloor(b_physical->NSTATE + 1.0)) {
        emlrtIntegerCheckR2012b(b_physical->NSTATE + 1.0, &b_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      if (((int32_T)(b_physical->NSTATE + 1.0) < 1) ||
          ((int32_T)(b_physical->NSTATE + 1.0) > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(b_physical->NSTATE + 1.0), 1,
                                      xx->size[1], &b_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i = (int32_T)(b_physical->NSTATE + 1.0) - 1;
      if (d != (int32_T)muDoubleScalarFloor(d)) {
        emlrtIntegerCheckR2012b(d, &emlrtDCI, (emlrtConstCTX)sp);
      }
      if (((int32_T)d < 1) || ((int32_T)d > xx->size[1])) {
        emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, xx->size[1], &emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      i1 = (int32_T)d;
    }
    if (xx->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &c_emlrtBCI,
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
      type = 0;
    } else if (c_strcmp(par->problem)) {
      type = 1;
    } else {
      type = -1;
    }
    switch (type) {
    case 0:
      st.site = &i_emlrtRSI;
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
      b_st.site = &s_emlrtRSI;
      S = S_fun(&b_st, s0, pf, b_physical->Tmax, b_physical->c);
      st.site = &h_emlrtRSI;
      S = Hamiltonian(&st, s0, pf, S, b_physical->Tmax, b_physical->c,
                      b_physical->shoot, b_physical->EPS);
      if ((s0->size[0] != boundary->Xf->size[0]) &&
          ((s0->size[0] != 1) && (boundary->Xf->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(s0->size[0], boundary->Xf->size[0],
                                    &d_emlrtECI, (emlrtConstCTX)sp);
      }
      st.site = &g_emlrtRSI;
      if (s0->size[0] == boundary->Xf->size[0]) {
        loop_ub = s0->size[0];
        for (i = 0; i < loop_ub; i++) {
          s0_data[i] -= boundary->Xf->data[i];
        }
      } else {
        b_st.site = &g_emlrtRSI;
        b_binary_expand_op(&b_st, s0, boundary);
      }
      b_st.site = &mg_emlrtRSI;
      dynamic_size_checks(&b_st, boundary->Pigreco, s0,
                          boundary->Pigreco->size[0], s0->size[0]);
      b_st.site = &cf_emlrtRSI;
      b_mtimes(&b_st, boundary->Pigreco, s0, deltaX);
      states_data = deltaX->data;
      if ((pf->size[0] != b_physical->g0_x->size[0]) &&
          ((pf->size[0] != 1) && (b_physical->g0_x->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(pf->size[0], b_physical->g0_x->size[0],
                                    &c_emlrtECI, (emlrtConstCTX)sp);
      }
      st.site = &f_emlrtRSI;
      if (pf->size[0] == b_physical->g0_x->size[0]) {
        loop_ub = pf->size[0];
        for (i = 0; i < loop_ub; i++) {
          pf_data[i] += b_physical->g0_x->data[i];
        }
      } else {
        b_st.site = &f_emlrtRSI;
        binary_expand_op(&b_st, pf, b_physical);
      }
      b_st.site = &mg_emlrtRSI;
      b_dynamic_size_checks(&b_st, boundary->Sigma, pf,
                            boundary->Sigma->size[0], pf->size[0]);
      deltaP = c_mtimes(boundary->Sigma, pf);
      i = val->size[0];
      val->size[0] = deltaX->size[0] + 2;
      emxEnsureCapacity_real_T(sp, val, i, &gb_emlrtRTEI);
      val_data = val->data;
      val_data[0] = S;
      loop_ub = deltaX->size[0];
      for (i = 0; i < loop_ub; i++) {
        val_data[i + 1] = states_data[i];
      }
      val_data[deltaX->size[0] + 1] = deltaP;
      break;
    case 1:
      st.site = &e_emlrtRSI;
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
      b_st.site = &s_emlrtRSI;
      S = S_fun(&b_st, s0, pf, b_physical->Tmax, b_physical->c);
      st.site = &d_emlrtRSI;
      S = Hamiltonian(&st, s0, pf, S, b_physical->Tmax, b_physical->c,
                      b_physical->shoot, b_physical->EPS);
      if ((s0->size[0] != boundary->Xf->size[0]) &&
          ((s0->size[0] != 1) && (boundary->Xf->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(s0->size[0], boundary->Xf->size[0],
                                    &b_emlrtECI, (emlrtConstCTX)sp);
      }
      st.site = &c_emlrtRSI;
      if (s0->size[0] == boundary->Xf->size[0]) {
        loop_ub = s0->size[0];
        for (i = 0; i < loop_ub; i++) {
          s0_data[i] -= boundary->Xf->data[i];
        }
      } else {
        b_st.site = &c_emlrtRSI;
        b_binary_expand_op(&b_st, s0, boundary);
      }
      b_st.site = &mg_emlrtRSI;
      dynamic_size_checks(&b_st, boundary->Pigreco, s0,
                          boundary->Pigreco->size[0], s0->size[0]);
      b_st.site = &cf_emlrtRSI;
      b_mtimes(&b_st, boundary->Pigreco, s0, deltaX);
      states_data = deltaX->data;
      if ((pf->size[0] != b_physical->g0_x->size[0]) &&
          ((pf->size[0] != 1) && (b_physical->g0_x->size[0] != 1))) {
        emlrtDimSizeImpxCheckR2021b(pf->size[0], b_physical->g0_x->size[0],
                                    &emlrtECI, (emlrtConstCTX)sp);
      }
      st.site = &b_emlrtRSI;
      if (pf->size[0] == b_physical->g0_x->size[0]) {
        loop_ub = pf->size[0];
        for (i = 0; i < loop_ub; i++) {
          pf_data[i] += b_physical->g0_x->data[i];
        }
      } else {
        b_st.site = &b_emlrtRSI;
        binary_expand_op(&b_st, pf, b_physical);
      }
      b_st.site = &mg_emlrtRSI;
      b_dynamic_size_checks(&b_st, boundary->Sigma, pf,
                            boundary->Sigma->size[0], pf->size[0]);
      deltaP = c_mtimes(boundary->Sigma, pf);
      i = val->size[0];
      val->size[0] = deltaX->size[0] + 2;
      emxEnsureCapacity_real_T(sp, val, i, &hb_emlrtRTEI);
      val_data = val->data;
      val_data[0] = S;
      loop_ub = deltaX->size[0];
      for (i = 0; i < loop_ub; i++) {
        val_data[i + 1] = states_data[i];
      }
      val_data[deltaX->size[0] + 1] = deltaP;
      break;
    }
    /*  objective function */
    st.site = &emlrtRSI;
    i = s0->size[0];
    s0->size[0] = val->size[0];
    emxEnsureCapacity_real_T(sp, s0, i, &cb_emlrtRTEI);
    s0_data = s0->data;
    loop_ub = val->size[0];
    for (i = 0; i < loop_ub; i++) {
      S = val_data[i];
      s0_data[i] = S * S;
    }
    st.site = &emlrtRSI;
    *obj = sum(&st, s0);
  }
  emxFree_real_T(sp, &deltaX);
  emxFree_real_T(sp, &pf);
  emxFree_real_T(sp, &temps);
  emxFree_real_T(sp, &s0);
  emxFree_real_T(sp, &val);
  emxFree_real_T(sp, &xx);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfun_S_time_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                            real_T physical_c, real_T physical_NSTATE,
                            real_T physical_shoot, real_T physical_EPS,
                            real_T S, const emxArray_real_T *s,
                            emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *b_s;
  emxArray_real_T *c_s;
  const real_T *s_data;
  real_T d;
  real_T d1;
  real_T *H_x_data;
  real_T *b_s_data;
  real_T *varargout_1_data;
  int32_T iv[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  s_data = s->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &tb_emlrtRSI;
  /*  computation of equations of motion */
  /*  Output: */
  /*  xxd: state and costate derivatives [2*NSTATEx1] */
  /*  3 inputs case:  */
  /*  inp1: state and costate vector [NSTATEx1], inp2: structure for physical
   * variables */
  /*  and functions, inp3: switching function */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &kb_emlrtBCI, &st);
    }
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &m_emlrtDCI, &st);
    }
    if (((int32_T)physical_NSTATE < 1) ||
        ((int32_T)physical_NSTATE > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, s->size[0],
                                    &lb_emlrtBCI, &st);
    }
    loop_ub = (int32_T)physical_NSTATE;
  }
  iv[0] = 1;
  iv[1] = loop_ub;
  b_st.site = &ub_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], iv);
  d = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &n_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1,
                                    s->size[0], &mb_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (d != (int32_T)muDoubleScalarFloor(d)) {
      emlrtIntegerCheckR2012b(d, &o_emlrtDCI, &st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, s->size[0], &nb_emlrtBCI,
                                    &st);
    }
    i1 = (int32_T)d;
  }
  iv[0] = 1;
  b_loop_ub = i1 - i;
  iv[1] = b_loop_ub;
  b_st.site = &vb_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], iv);
  if (!(d >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d, &t_emlrtDCI, &st);
  }
  d1 = (int32_T)muDoubleScalarFloor(d);
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &s_emlrtDCI, &st);
  }
  i1 = varargout_1->size[0];
  varargout_1->size[0] = (int32_T)d;
  emxEnsureCapacity_real_T(&st, varargout_1, i1, &cc_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  if (d != d1) {
    emlrtIntegerCheckR2012b(d, &s_emlrtDCI, &st);
  }
  c_loop_ub = (int32_T)d;
  for (i1 = 0; i1 < c_loop_ub; i1++) {
    varargout_1_data[i1] = 0.0;
  }
  emxInit_real_T(&st, &b_s, 1, &dc_emlrtRTEI);
  i1 = b_s->size[0];
  b_s->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, b_s, i1, &dc_emlrtRTEI);
  b_s_data = b_s->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_s_data[i1] = s_data[i1];
  }
  emxInit_real_T(&st, &c_s, 1, &ec_emlrtRTEI);
  i1 = c_s->size[0];
  c_s->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(&st, c_s, i1, &ec_emlrtRTEI);
  b_s_data = c_s->data;
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    b_s_data[i1] = s_data[i + i1];
  }
  emxInit_real_T(&st, &H_x, 1, &cc_emlrtRTEI);
  emxInit_real_T(&st, &H_p, 1, &cc_emlrtRTEI);
  b_st.site = &wb_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, b_s, c_s, S, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  b_s_data = H_p->data;
  H_x_data = H_x->data;
  emxFree_real_T(&st, &c_s);
  emxFree_real_T(&st, &b_s);
  /*  state derivatives */
  if (physical_NSTATE < 1.0) {
    i = 0;
  } else {
    i = (int32_T)(2.0 * physical_NSTATE);
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &ob_emlrtBCI, &st);
    }
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &p_emlrtDCI, &st);
    }
    i = (int32_T)(2.0 * physical_NSTATE);
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > i)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, i,
                                    &pb_emlrtBCI, &st);
    }
    i = (int32_T)physical_NSTATE;
  }
  if (i != 5) {
    emlrtSubAssignSizeCheck1dR2017a(i, 5, &k_emlrtECI, &st);
  }
  for (i = 0; i < 5; i++) {
    varargout_1_data[i] = b_s_data[i];
  }
  emxFree_real_T(&st, &H_p);
  /*  costate derivatives */
  if (physical_NSTATE + 1.0 > d) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &q_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > varargout_1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1,
                                    varargout_1->size[0], &qb_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (d != d1) {
      emlrtIntegerCheckR2012b(d, &r_emlrtDCI, &st);
    }
    if (((int32_T)d < 1) || ((int32_T)d > varargout_1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, varargout_1->size[0],
                                    &rb_emlrtBCI, &st);
    }
    i1 = (int32_T)d;
  }
  loop_ub = i1 - i;
  if (loop_ub != 5) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, 5, &l_emlrtECI, &st);
  }
  for (i1 = 0; i1 < 5; i1++) {
    varargout_1_data[i + i1] = -H_x_data[i1];
  }
  emxFree_real_T(&st, &H_x);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfun_S_time_anonFcn4(const emlrtStack *sp, real_T physical_Tmax,
                            real_T physical_c, real_T physical_NSTATE,
                            real_T physical_shoot, real_T physical_EPS,
                            real_T SIGN, const emxArray_real_T *s,
                            emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *p;
  emxArray_real_T *pd;
  emxArray_real_T *x;
  emxArray_real_T *xd;
  real_T S_x[5];
  real_T b_S_p[5];
  const real_T *s_data;
  real_T S_p;
  real_T a__1;
  real_T *H_p_data;
  real_T *H_x_data;
  real_T *pd_data;
  real_T *varargout_1_data;
  real_T *x_data;
  int32_T b_physical_NSTATE[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  s_data = s->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &mf_emlrtRSI;
  /*  computation of equations of motion and switching function derivative */
  /*  3 inputs case:  */
  /*  inp1: states and costates vector [NSTATEx1], inp2: structure for physical
   * variables */
  /*  and functions, inp3: switching function */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (s->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s->size[0], &tc_emlrtBCI, &st);
    }
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &x_emlrtDCI, &st);
    }
    if (((int32_T)physical_NSTATE < 1) ||
        ((int32_T)physical_NSTATE > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, s->size[0],
                                    &uc_emlrtBCI, &st);
    }
    loop_ub = (int32_T)physical_NSTATE;
  }
  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = loop_ub;
  b_st.site = &nf_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &x, 1, &bd_emlrtRTEI);
  i = x->size[0];
  x->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, x, i, &bd_emlrtRTEI);
  x_data = x->data;
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = s_data[i];
  }
  a__1 = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > a__1) {
    i = 0;
    i1 = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &y_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1,
                                    s->size[0], &vc_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (a__1 != (int32_T)muDoubleScalarFloor(a__1)) {
      emlrtIntegerCheckR2012b(a__1, &ab_emlrtDCI, &st);
    }
    if (((int32_T)a__1 < 1) || ((int32_T)a__1 > s->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)a__1, 1, s->size[0], &wc_emlrtBCI,
                                    &st);
    }
    i1 = (int32_T)a__1;
  }
  b_physical_NSTATE[0] = 1;
  loop_ub = i1 - i;
  b_physical_NSTATE[1] = loop_ub;
  b_st.site = &of_emlrtRSI;
  indexShapeCheck(&b_st, s->size[0], b_physical_NSTATE);
  emxInit_real_T(&st, &p, 1, &cd_emlrtRTEI);
  i1 = p->size[0];
  p->size[0] = loop_ub;
  emxEnsureCapacity_real_T(&st, p, i1, &cd_emlrtRTEI);
  x_data = p->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    x_data[i1] = s_data[i + i1];
  }
  emxInit_real_T(&st, &xd, 1, &dd_emlrtRTEI);
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &cb_emlrtDCI, &st);
  }
  a__1 = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != a__1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &bb_emlrtDCI, &st);
  }
  i = xd->size[0];
  xd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, xd, i, &dd_emlrtRTEI);
  x_data = xd->data;
  if (physical_NSTATE != a__1) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &bb_emlrtDCI, &st);
  }
  loop_ub = (int32_T)physical_NSTATE;
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = 0.0;
  }
  emxInit_real_T(&st, &pd, 1, &ed_emlrtRTEI);
  i = pd->size[0];
  pd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd, i, &ed_emlrtRTEI);
  pd_data = pd->data;
  loop_ub = (int32_T)physical_NSTATE;
  for (i = 0; i < loop_ub; i++) {
    pd_data[i] = 0.0;
  }
  a__1 = 2.0 * physical_NSTATE + 1.0;
  S_p = (int32_T)muDoubleScalarFloor(a__1);
  if (a__1 != S_p) {
    emlrtIntegerCheckR2012b(a__1, &db_emlrtDCI, &st);
  }
  i = varargout_1->size[0];
  loop_ub = (int32_T)a__1;
  varargout_1->size[0] = (int32_T)a__1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &fd_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  if (a__1 != S_p) {
    emlrtIntegerCheckR2012b(a__1, &db_emlrtDCI, &st);
  }
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i] = 0.0;
  }
  emxInit_real_T(&st, &H_x, 1, &fd_emlrtRTEI);
  emxInit_real_T(&st, &H_p, 1, &fd_emlrtRTEI);
  b_st.site = &pf_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x, p, SIGN, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
    i = 0;
  } else {
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > 5)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5,
                                    &xc_emlrtBCI, &st);
    }
    loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &yc_emlrtBCI,
                                    &st);
    }
    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  emlrtSubAssignSizeCheckR2012b(&i, 1, &loop_ub, 1, &o_emlrtECI, &st);
  for (i = 0; i < loop_ub; i++) {
    x_data[i] = H_p_data[i];
  }
  /*  states derivatives [NSTATEx1] */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
    i = 0;
  } else {
    loop_ub = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &ad_emlrtBCI,
                                    &st);
    }
    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  for (i1 = 0; i1 < loop_ub; i1++) {
    S_x[i1] = -H_x_data[i1];
  }
  emlrtSubAssignSizeCheckR2012b(&i, 1, &loop_ub, 1, &p_emlrtECI, &st);
  for (i = 0; i < loop_ub; i++) {
    pd_data[i] = S_x[i];
  }
  /*  costates derivatives [NSTATEx1] */
  b_st.site = &qf_emlrtRSI;
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
  a__1 = S_fun(&c_st, x, p, physical_Tmax, physical_c);
  c_st.site = &rf_emlrtRSI;
  S_x_fun(&c_st, x, p, physical_Tmax, S_x);
  c_st.site = &sf_emlrtRSI;
  S_p_fun(&c_st, x, p, physical_Tmax, physical_c, b_S_p);
  c_st.site = &tf_emlrtRSI;
  HamiltonianFirstDerivatives(&c_st, x, p, a__1, physical_Tmax, physical_c,
                              physical_NSTATE, physical_shoot, physical_EPS,
                              H_x, H_p);
  H_p_data = H_p->data;
  H_x_data = H_x->data;
  emxFree_real_T(&b_st, &p);
  emxFree_real_T(&b_st, &x);
  /*  Switching function derivative */
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    i = ((int32_T)physical_NSTATE << 1) + 1;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > i)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1, i,
                                    &bd_emlrtBCI, &st);
    }
    loop_ub = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  if (loop_ub != xd->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, xd->size[0], &q_emlrtECI, &st);
  }
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i] = x_data[i];
  }
  emxFree_real_T(&st, &xd);
  i = (int32_T)physical_NSTATE << 1;
  if ((int32_T)physical_NSTATE + 1 > i) {
    i1 = 0;
    i = 0;
  } else {
    if (((int32_T)physical_NSTATE + 1 < 1) ||
        ((int32_T)physical_NSTATE + 1 > varargout_1->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE + 1, 1,
                                    varargout_1->size[0], &cd_emlrtBCI, &st);
    }
    i1 = (int32_T)physical_NSTATE;
    if ((i < 1) || (i > varargout_1->size[0])) {
      emlrtDynamicBoundsCheckR2012b(i, 1, varargout_1->size[0], &dd_emlrtBCI,
                                    &st);
    }
  }
  loop_ub = i - i1;
  if (loop_ub != pd->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, pd->size[0], &r_emlrtECI, &st);
  }
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i1 + i] = pd_data[i];
  }
  emxFree_real_T(&st, &pd);
  a__1 = 0.0;
  S_p = 0.0;
  for (i = 0; i < 5; i++) {
    a__1 += S_x[i] * H_p_data[i];
    S_p += b_S_p[i] * H_x_data[i];
  }
  emxFree_real_T(&st, &H_p);
  emxFree_real_T(&st, &H_x);
  i = ((int32_T)physical_NSTATE << 1) + 1;
  if ((i < 1) || (i > varargout_1->size[0])) {
    emlrtDynamicBoundsCheckR2012b(i, 1, varargout_1->size[0], &ed_emlrtBCI,
                                  &st);
  }
  varargout_1_data[i - 1] = a__1 - S_p;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (objfun_S_time.c) */
