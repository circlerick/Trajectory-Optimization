/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_suff.c
 *
 * Code generation for function 'objfun_suff'
 *
 */

/* Include files */
#include "objfun_suff.h"
#include "HamiltonianFirstDerivatives.h"
#include "HamiltonianSecondDerivatives.h"
#include "S_fun.h"
#include "Switching_Function.h"
#include "assertValidSizeArg.h"
#include "derivatives.h"
#include "derivativesSTM_suff.h"
#include "eml_mtimes_helper.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "objfun_suff_data.h"
#include "objfun_suff_emxutil.h"
#include "objfun_suff_types.h"
#include "ode89.h"
#include "reshapeSizeChecks.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    25,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    58,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    73,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    74,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    78,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    79,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    80,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    81,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    82,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    83,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    84,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    85,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    86,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    87,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    88,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    89,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    90,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    91,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo s_emlrtRSI = {
    92,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo t_emlrtRSI = {
    93,                                                      /* lineNo */
    "objfun_suff",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    58,                                                      /* lineNo */
    "@(t,s)derivativesSTM_suff(s,physical,SIGN)",            /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    15,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo tb_emlrtRSI = {
    18,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo ub_emlrtRSI = {
    20,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo vb_emlrtRSI = {
    21,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo wb_emlrtRSI = {
    22,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo xb_emlrtRSI = {
    23,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo yb_emlrtRSI = {
    28,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo ac_emlrtRSI = {
    29,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo bc_emlrtRSI = {
    34,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo cc_emlrtRSI = {
    35,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo dc_emlrtRSI = {
    36,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo ec_emlrtRSI = {
    37,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo fc_emlrtRSI = {
    38,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo gc_emlrtRSI = {
    39,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo hc_emlrtRSI = {
    40,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo ic_emlrtRSI = {
    41,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo jc_emlrtRSI = {
    42,                    /* lineNo */
    "derivativesSTM_suff", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pathName
                                                                      */
};

static emlrtRSInfo lc_emlrtRSI = {
    40,                  /* lineNo */
    "reshapeSizeChecks", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\reshapeSizeChecks.m" /* pathName */
};

static emlrtRSInfo lg_emlrtRSI =
    {
        94,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

static emlrtRSInfo mg_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

static emlrtBCInfo emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    71,                                                       /* lineNo */
    19,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    71,                                                       /* lineNo */
    25,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = {
    1,                                                        /* iFirst */
    111,                                                      /* iLast */
    71,                                                       /* lineNo */
    25,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    72,                                                       /* lineNo */
    22,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    72,                                                       /* lineNo */
    26,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = {
    1,                                                        /* iFirst */
    111,                                                      /* iLast */
    72,                                                       /* lineNo */
    26,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = {
    72,                                                       /* lineNo */
    35,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = {
    1,                                                        /* iFirst */
    111,                                                      /* iLast */
    72,                                                       /* lineNo */
    35,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    73,                                                       /* lineNo */
    36,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    73,                                                       /* lineNo */
    42,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = {
    1,                                                        /* iFirst */
    111,                                                      /* iLast */
    73,                                                       /* lineNo */
    42,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    77,                                                       /* lineNo */
    19,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    77,                                                       /* lineNo */
    23,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = {
    1,                                                        /* iFirst */
    111,                                                      /* iLast */
    77,                                                       /* lineNo */
    23,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    78,                                                       /* lineNo */
    35,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    78,                                                       /* lineNo */
    41,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = {
    1,                                                        /* iFirst */
    111,                                                      /* iLast */
    78,                                                       /* lineNo */
    41,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    79,                                                       /* lineNo */
    39,                                                       /* colNo */
    "dydt_min",                                               /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    79,                                                       /* lineNo */
    41,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    79,                                                       /* lineNo */
    41,                                                       /* colNo */
    "dydt_min",                                               /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    79,                                                       /* lineNo */
    59,                                                       /* colNo */
    "dydt_plus",                                              /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    79,                                                       /* lineNo */
    61,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    79,                                                       /* lineNo */
    61,                                                       /* colNo */
    "dydt_plus",                                              /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo emlrtECI = {
    1,                                                       /* nDims */
    79,                                                      /* lineNo */
    30,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtDCInfo i_emlrtDCI = {
    80,                                                       /* lineNo */
    40,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    80,                                                       /* lineNo */
    40,                                                       /* colNo */
    "dydt_min",                                               /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = {
    80,                                                       /* lineNo */
    49,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    80,                                                       /* lineNo */
    49,                                                       /* colNo */
    "dydt_min",                                               /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = {
    80,                                                       /* lineNo */
    69,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    80,                                                       /* lineNo */
    69,                                                       /* colNo */
    "dydt_plus",                                              /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = {
    80,                                                       /* lineNo */
    78,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    80,                                                       /* lineNo */
    78,                                                       /* colNo */
    "dydt_plus",                                              /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    1,                                                       /* nDims */
    80,                                                      /* lineNo */
    31,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtBCInfo t_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    81,                                                       /* lineNo */
    32,                                                       /* colNo */
    "phif",                                                   /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = {
    81,                                                       /* lineNo */
    34,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    81,                                                       /* lineNo */
    34,                                                       /* colNo */
    "phif",                                                   /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = {
    82,                                                       /* lineNo */
    32,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    82,                                                       /* lineNo */
    32,                                                       /* colNo */
    "phif",                                                   /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = {
    82,                                                       /* lineNo */
    43,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    82,                                                       /* lineNo */
    43,                                                       /* colNo */
    "phif",                                                   /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = {
    83,                                                       /* lineNo */
    32,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    83,                                                       /* lineNo */
    32,                                                       /* colNo */
    "phif",                                                   /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    83,                                                       /* lineNo */
    45,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    83,                                                       /* lineNo */
    45,                                                       /* colNo */
    "phif",                                                   /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    84,                                                       /* lineNo */
    32,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    84,                                                       /* lineNo */
    32,                                                       /* colNo */
    "phif",                                                   /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    84,                                                       /* lineNo */
    45,                                                       /* colNo */
    "phif",                                                   /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo c_emlrtECI = {
    1,                                                       /* nDims */
    85,                                                      /* lineNo */
    29,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    2,                                                       /* nDims */
    85,                                                      /* lineNo */
    29,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo e_emlrtECI = {
    1,                                                       /* nDims */
    85,                                                      /* lineNo */
    18,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo f_emlrtECI = {
    2,                                                       /* nDims */
    85,                                                      /* lineNo */
    18,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo g_emlrtECI = {
    1,                                                       /* nDims */
    86,                                                      /* lineNo */
    29,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo h_emlrtECI = {
    2,                                                       /* nDims */
    86,                                                      /* lineNo */
    29,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo i_emlrtECI = {
    1,                                                       /* nDims */
    86,                                                      /* lineNo */
    18,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo j_emlrtECI = {
    2,                                                       /* nDims */
    86,                                                      /* lineNo */
    18,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo k_emlrtECI = {
    1,                                                       /* nDims */
    89,                                                      /* lineNo */
    29,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo l_emlrtECI = {
    2,                                                       /* nDims */
    89,                                                      /* lineNo */
    29,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo m_emlrtECI = {
    1,                                                       /* nDims */
    89,                                                      /* lineNo */
    18,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo n_emlrtECI = {
    2,                                                       /* nDims */
    89,                                                      /* lineNo */
    18,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo o_emlrtECI = {
    1,                                                       /* nDims */
    90,                                                      /* lineNo */
    29,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo p_emlrtECI = {
    2,                                                       /* nDims */
    90,                                                      /* lineNo */
    29,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo q_emlrtECI = {
    1,                                                       /* nDims */
    90,                                                      /* lineNo */
    18,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtECInfo r_emlrtECI = {
    2,                                                       /* nDims */
    90,                                                      /* lineNo */
    18,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    93,                                                       /* lineNo */
    35,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    93,                                                       /* lineNo */
    41,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    93,                                                       /* lineNo */
    57,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    1,                                                        /* iFirst */
    111,                                                      /* iLast */
    93,                                                       /* lineNo */
    57,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    93,                                                       /* lineNo */
    66,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    1,                                                        /* iFirst */
    111,                                                      /* iLast */
    93,                                                       /* lineNo */
    66,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    95,                                                       /* lineNo */
    25,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = {
    95,                                                       /* lineNo */
    31,                                                       /* colNo */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = {
    1,                                                        /* iFirst */
    111,                                                      /* iLast */
    95,                                                       /* lineNo */
    31,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo s_emlrtECI = {
    -1,                                                      /* nDims */
    95,                                                      /* lineNo */
    9,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtBCInfo hb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    99,                                                       /* lineNo */
    21,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    111,                                                      /* lineNo */
    17,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = {
    1,                                                        /* iFirst */
    1000000,                                                  /* iLast */
    63,                                                       /* lineNo */
    11,                                                       /* colNo */
    "temps",                                                  /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = {
    1,                                                        /* iFirst */
    1000000,                                                  /* iLast */
    63,                                                       /* lineNo */
    20,                                                       /* colNo */
    "temps",                                                  /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo t_emlrtECI = {
    -1,                                                      /* nDims */
    63,                                                      /* lineNo */
    5,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtBCInfo lb_emlrtBCI = {
    1,                                                        /* iFirst */
    1000000,                                                  /* iLast */
    64,                                                       /* lineNo */
    11,                                                       /* colNo */
    "tempt",                                                  /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = {
    1,                                                        /* iFirst */
    1000000,                                                  /* iLast */
    64,                                                       /* lineNo */
    20,                                                       /* colNo */
    "tempt",                                                  /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtECInfo u_emlrtECI = {
    -1,                                                      /* nDims */
    64,                                                      /* lineNo */
    5,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
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

static emlrtBCInfo nb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    59,                                                       /* lineNo */
    15,                                                       /* colNo */
    "tt",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    67,                                                       /* lineNo */
    11,                                                       /* colNo */
    "tt",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,                                                       /* iFirst */
    -1,                                                       /* iLast */
    103,                                                      /* lineNo */
    23,                                                       /* colNo */
    "xx",                                                     /* aName */
    "objfun_suff",                                            /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    0                                                         /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = {
    27,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    4 /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = {
    27,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    18,                    /* lineNo */
    12,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    1,                     /* iFirst */
    111,                   /* iLast */
    18,                    /* lineNo */
    12,                    /* colNo */
    "inp1",                /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    58,                                                       /* lineNo */
    21,                                                       /* colNo */
    "@(t,s)derivativesSTM_suff(s,physical,SIGN)",             /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    4                                                         /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = {
    58,                                                       /* lineNo */
    21,                                                       /* colNo */
    "@(t,s)derivativesSTM_suff(s,physical,SIGN)",             /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m", /* pName */
    1                                                         /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = {
    16,                    /* lineNo */
    10,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = {
    1,                     /* iFirst */
    111,                   /* iLast */
    16,                    /* lineNo */
    10,                    /* colNo */
    "inp1",                /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = {
    17,                    /* lineNo */
    8,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    1,                     /* iFirst */
    111,                   /* iLast */
    17,                    /* lineNo */
    8,                     /* colNo */
    "inp1",                /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = {
    17,                    /* lineNo */
    17,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    1,                     /* iFirst */
    111,                   /* iLast */
    17,                    /* lineNo */
    17,                    /* colNo */
    "inp1",                /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    20,                    /* lineNo */
    18,                    /* colNo */
    "phi",                 /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = {
    20,                    /* lineNo */
    20,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    20,                    /* lineNo */
    20,                    /* colNo */
    "phi",                 /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = {
    21,                    /* lineNo */
    18,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    21,                    /* lineNo */
    18,                    /* colNo */
    "phi",                 /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = {
    21,                    /* lineNo */
    29,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    21,                    /* lineNo */
    29,                    /* colNo */
    "phi",                 /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = {
    22,                    /* lineNo */
    18,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    22,                    /* lineNo */
    18,                    /* colNo */
    "phi",                 /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = {
    22,                    /* lineNo */
    31,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    22,                    /* lineNo */
    31,                    /* colNo */
    "phi",                 /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = {
    23,                    /* lineNo */
    18,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    1 /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    23,                    /* lineNo */
    18,                    /* colNo */
    "phi",                 /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    23,                    /* lineNo */
    31,                    /* colNo */
    "phi",                 /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    32,                    /* lineNo */
    22,                    /* colNo */
    "H_p",                 /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo v_emlrtECI = {
    2,                     /* nDims */
    34,                    /* lineNo */
    8,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtECInfo w_emlrtECI = {
    2,                     /* nDims */
    35,                    /* lineNo */
    8,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtECInfo x_emlrtECI = {
    2,                     /* nDims */
    38,                    /* lineNo */
    8,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtECInfo y_emlrtECI = {
    2,                     /* nDims */
    39,                    /* lineNo */
    8,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    32,                    /* lineNo */
    6,                     /* colNo */
    "xd",                  /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo ab_emlrtECI = {
    -1,                    /* nDims */
    32,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,                    /* iFirst */
    -1,                    /* iLast */
    33,                    /* lineNo */
    6,                     /* colNo */
    "pd",                  /* aName */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m", /* pName
                                                                       */
    0 /* checkKind */
};

static emlrtECInfo bb_emlrtECI = {
    -1,                    /* nDims */
    33,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtECInfo cb_emlrtECI = {
    -1,                    /* nDims */
    44,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo p_emlrtRTEI = {
    116,                                                     /* lineNo */
    1,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo q_emlrtRTEI = {
    117,                                                     /* lineNo */
    1,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    80,                                                      /* lineNo */
    9,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo t_emlrtRTEI =
    {
        86,                  /* lineNo */
        13,                  /* colNo */
        "eml_mtimes_helper", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

static emlrtRTEInfo u_emlrtRTEI = {
    85,                                                      /* lineNo */
    9,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo v_emlrtRTEI = {
    86,                                                      /* lineNo */
    9,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo w_emlrtRTEI = {
    89,                                                      /* lineNo */
    9,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo x_emlrtRTEI = {
    90,                                                      /* lineNo */
    9,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo y_emlrtRTEI = {
    95,                                                      /* lineNo */
    21,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    73,                                                      /* lineNo */
    9,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    78,                                                      /* lineNo */
    9,                                                       /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    2,                                                       /* lineNo */
    27,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    58,                                                      /* lineNo */
    21,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    18,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    20,                    /* lineNo */
    14,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    21,                    /* lineNo */
    14,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    22,                    /* lineNo */
    14,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    23,                    /* lineNo */
    14,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    27,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    27,                    /* lineNo */
    20,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    34,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    35,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    38,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    39,                    /* lineNo */
    1,                     /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    44,                    /* lineNo */
    14,                    /* colNo */
    "derivativesSTM_suff", /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\derivativesSTM_suff.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    90,                                                      /* lineNo */
    28,                                                      /* colNo */
    "objfun_suff",                                           /* fName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_suff.m" /* pName */
};

static emlrtRSInfo ei_emlrtRSI =
    {
        76,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

/* Function Declarations */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2, real_T in3);

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2, int32_T in3,
                             int32_T in5, int32_T in6, const real_T in7[2],
                             const emxArray_real_T *in8);

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2, int32_T in3,
                               int32_T in5, const real_T in6[2],
                               const emxArray_real_T *in7);

/* Function Definitions */
static void b_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2, real_T in3)
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
  emxInit_real_T(sp, &b_in1, 2, &uc_emlrtRTEI);
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
  emxEnsureCapacity_real_T(sp, b_in1, i, &uc_emlrtRTEI);
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
          (in1_data[i1 * stride_0_0 + in1->size[0] * aux_0_1] -
           in2_data[i1 * stride_1_0 + in2->size[0] * aux_1_1]) /
          in3;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_in1->size[0];
  in1->size[1] = b_in1->size[1];
  emxEnsureCapacity_real_T(sp, in1, i, &uc_emlrtRTEI);
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

static void binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                             const emxArray_real_T *in2, int32_T in3,
                             int32_T in5, int32_T in6, const real_T in7[2],
                             const emxArray_real_T *in8)
{
  real_T b_in2_data[110];
  const real_T *in2_data;
  const real_T *in8_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_in2;
  int32_T i;
  int32_T i1;
  int32_T in7_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in8_data = in8->data;
  in2_data = in2->data;
  b_in2 = in2->size[0];
  loop_ub = in6 - in5;
  for (i = 0; i < loop_ub; i++) {
    b_in2_data[i] = in2_data[(b_in2 + in2->size[0] * ((in3 + in5) + i)) - 1];
  }
  in7_idx_0 = (int32_T)in7[0];
  b_in2 = (int32_T)in7[1];
  i = in1->size[0] * in1->size[1];
  if (in8->size[0] == 1) {
    in1->size[0] = in7_idx_0;
  } else {
    in1->size[0] = in8->size[0];
  }
  if (in8->size[1] == 1) {
    in1->size[1] = b_in2;
  } else {
    in1->size[1] = in8->size[1];
  }
  emxEnsureCapacity_real_T(sp, in1, i, &x_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in7_idx_0 != 1);
  stride_0_1 = (b_in2 != 1);
  stride_1_0 = (in8->size[0] != 1);
  stride_1_1 = (in8->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in8->size[1] == 1) {
    loop_ub = b_in2;
  } else {
    loop_ub = in8->size[1];
  }
  for (i = 0; i < loop_ub; i++) {
    i1 = in8->size[0];
    if (i1 == 1) {
      b_in2 = in7_idx_0;
    } else {
      b_in2 = i1;
    }
    for (i1 = 0; i1 < b_in2; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          b_in2_data[i1 * stride_0_0 + in7_idx_0 * aux_0_1] +
          in8_data[i1 * stride_1_0 + in8->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void c_binary_expand_op(const emlrtStack *sp, emxArray_real_T *in1,
                               const emxArray_real_T *in2, int32_T in3,
                               int32_T in5, const real_T in6[2],
                               const emxArray_real_T *in7)
{
  real_T b_in2_data[110];
  const real_T *in2_data;
  const real_T *in7_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_in2;
  int32_T i;
  int32_T i1;
  int32_T in6_idx_0;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in7_data = in7->data;
  in2_data = in2->data;
  b_in2 = in2->size[0];
  for (i = 0; i < in5; i++) {
    b_in2_data[i] = in2_data[(b_in2 + in2->size[0] * (in3 + i)) - 1];
  }
  in6_idx_0 = (int32_T)in6[0];
  b_in2 = (int32_T)in6[1];
  i = in1->size[0] * in1->size[1];
  if (in7->size[0] == 1) {
    in1->size[0] = in6_idx_0;
  } else {
    in1->size[0] = in7->size[0];
  }
  if (in7->size[1] == 1) {
    in1->size[1] = b_in2;
  } else {
    in1->size[1] = in7->size[1];
  }
  emxEnsureCapacity_real_T(sp, in1, i, &u_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in6_idx_0 != 1);
  stride_0_1 = (b_in2 != 1);
  stride_1_0 = (in7->size[0] != 1);
  stride_1_1 = (in7->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  if (in7->size[1] != 1) {
    b_in2 = in7->size[1];
  }
  for (i = 0; i < b_in2; i++) {
    int32_T loop_ub;
    i1 = in7->size[0];
    if (i1 == 1) {
      loop_ub = in6_idx_0;
    } else {
      loop_ub = i1;
    }
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[0] * i] =
          b_in2_data[i1 * stride_0_0 + in6_idx_0 * aux_0_1] +
          in7_data[i1 * stride_1_0 + in7->size[0] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

void emlrt_checkEscapedGlobals(void)
{
  physical_dirty |= physical_dirty >> 1U;
}

void objfun_suff(objfun_suffStackData *SD, const emlrtStack *sp,
                 const real_T lam0[5], const real_T X0[5],
                 const real_T STM0[100], const struct0_T *b_physical,
                 const struct1_T *boundary, emxArray_real_T *states,
                 emxArray_real_T *times)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_real_T e_tmp_data;
  emxArray_real_T f_tmp_data;
  emxArray_real_T g_tmp_data;
  emxArray_real_T h_tmp_data;
  emxArray_real_T i_tmp_data;
  emxArray_real_T j_tmp_data;
  emxArray_real_T k_tmp_data;
  emxArray_real_T l_tmp_data;
  emxArray_real_T m_tmp_data;
  emxArray_real_T n_tmp_data;
  emxArray_real_T o_tmp_data;
  emxArray_real_T p_tmp_data;
  emxArray_real_T q_tmp_data;
  emxArray_real_T r_tmp_data;
  emxArray_real_T s_tmp_data;
  emxArray_real_T t_tmp_data;
  emxArray_real_T *UN_min;
  emxArray_real_T *Un_min;
  emxArray_real_T *VN_min;
  emxArray_real_T *Vn_min;
  emxArray_real_T *b_y_tmp;
  emxArray_real_T *c_y_tmp;
  emxArray_real_T *d_y_tmp;
  emxArray_real_T *deltax;
  emxArray_real_T *dydt_min;
  emxArray_real_T *dydt_plus;
  emxArray_real_T *r;
  emxArray_real_T *xx;
  emxArray_real_T *y_tmp;
  real_T s0[111];
  real_T b_tmp_data[110];
  real_T c_tmp_data[110];
  real_T d_tmp_data[110];
  real_T tmp_data[110];
  real_T NSTATE;
  real_T S;
  real_T SIGN;
  real_T Tfin;
  real_T dSdt;
  real_T index1;
  real_T index2;
  real_T told;
  real_T *UN_min_data;
  real_T *Vn_min_data;
  real_T *deltax_data;
  real_T *dydt_plus_data;
  real_T *r1;
  real_T *states_data;
  real_T *xx_data;
  int32_T b_tmp_size[2];
  int32_T c_tmp_size[2];
  int32_T d_tmp_size[2];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T tmp_size[2];
  int32_T b_num_tmp_idx_0_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T i5;
  int32_T i6;
  int32_T num_tmp_idx_0_tmp;
  int32_T nx;
  int32_T type;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  Propagate a trajectory backwards */
  /*  Inputs: */
  /*  lam0: initial costates vector [NSTATEx1] */
  /*  X0: initial states vector [NSTATEx1] */
  /*  physical: structure for physical variables */
  /*  boundary: structure for control problem inputs */
  /*  par: structure for simulation variables */
  /*  STM0: backward vectorized matrix containing U and V */
  /*  Output: */
  /*  states: states vector */
  /*  times: times vector */
  NSTATE = b_physical->NSTATE;
  /*  integrazione */
  Tfin = boundary->T0;
  told = boundary->Tfin;
  st.site = &emlrtRSI;
  S = Switching_Function(&st, X0, lam0, b_physical->Tmax, b_physical->c);
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
  for (type = 0; type < 5; type++) {
    s0[type] = X0[type];
    s0[type + 5] = lam0[type];
  }
  memcpy(&s0[10], &STM0[0], 100U * sizeof(real_T));
  s0[110] = S;
  /*  stato e costato iniziali */
  /*  Initialize outputs and ode initial values */
  memset(&SD->f0.tempt[0], 0, 1000000U * sizeof(real_T));
  memset(&SD->f0.temps[0], 0, 111000000U * sizeof(real_T));
  for (i = 0; i < 111; i++) {
    SD->f0.temps[1000000 * i] = s0[i];
  }
  SD->f0.tempt[0] = boundary->Tfin;
  /*  Initialize indeces of sates and times */
  index1 = 1.0;
  index2 = 0.0;
  /*  Loop from perturbation ending of controllability time */
  emxInit_real_T(sp, &dydt_plus, 1, &ab_emlrtRTEI);
  emxInit_real_T(sp, &dydt_min, 1, &bb_emlrtRTEI);
  emxInit_real_T(sp, &deltax, 1, &r_emlrtRTEI);
  emxInit_real_T(sp, &UN_min, 2, &u_emlrtRTEI);
  emxInit_real_T(sp, &VN_min, 2, &v_emlrtRTEI);
  emxInit_real_T(sp, &Un_min, 2, &w_emlrtRTEI);
  emxInit_real_T(sp, &Vn_min, 2, &x_emlrtRTEI);
  emxInit_real_T(sp, &xx, 2, &cb_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &cb_emlrtRTEI);
  emxInit_real_T(sp, &y_tmp, 2, &t_emlrtRTEI);
  emxInit_real_T(sp, &b_y_tmp, 2, &t_emlrtRTEI);
  emxInit_real_T(sp, &c_y_tmp, 2, &t_emlrtRTEI);
  emxInit_real_T(sp, &d_y_tmp, 2, &t_emlrtRTEI);
  if (told != Tfin) {
    iv[1] = 111;
  }
  while (told != Tfin) {
    real_T b_told[2];
    /*  Propagate backwards  */
    b_told[0] = told;
    b_told[1] = Tfin;
    st.site = &b_emlrtRSI;
    ode89(&st, b_physical->Tmax, b_physical->c, b_physical->NSTATE,
          b_physical->shoot, b_physical->EPS, SIGN, b_told, s0, dydt_plus, xx);
    xx_data = xx->data;
    dydt_plus_data = dydt_plus->data;
    if (dydt_plus->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(dydt_plus->size[0], 1, dydt_plus->size[0],
                                    &nb_emlrtBCI, (emlrtConstCTX)sp);
    }
    told = dydt_plus_data[dydt_plus->size[0] - 1];
    /*  Save states and times */
    index2 = (index1 + (real_T)dydt_plus->size[0]) - 1.0;
    if (xx->size[0] < 2) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = xx->size[0];
    }
    if (index1 + 1.0 > index2) {
      i2 = 0;
      num_tmp_idx_0_tmp = 0;
    } else {
      if (((int32_T)(index1 + 1.0) < 1) ||
          ((int32_T)(index1 + 1.0) > 1000000)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
                                      &jb_emlrtBCI, (emlrtConstCTX)sp);
      }
      i2 = (int32_T)(index1 + 1.0) - 1;
      if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000, &kb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      num_tmp_idx_0_tmp = (int32_T)index2;
    }
    iv1[0] = num_tmp_idx_0_tmp - i2;
    iv1[1] = 111;
    nx = i1 - i;
    iv[0] = nx;
    emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &iv[0], 2, &t_emlrtECI,
                                  (emlrtCTX)sp);
    for (i1 = 0; i1 < 111; i1++) {
      for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < nx; num_tmp_idx_0_tmp++) {
        SD->f0.temps[(i2 + num_tmp_idx_0_tmp) + 1000000 * i1] =
            xx_data[(i + num_tmp_idx_0_tmp) + xx->size[0] * i1];
      }
    }
    if (dydt_plus->size[0] < 2) {
      i = 0;
      i1 = 0;
    } else {
      i = 1;
      i1 = dydt_plus->size[0];
    }
    if (index1 + 1.0 > index2) {
      i2 = 0;
      num_tmp_idx_0_tmp = 0;
    } else {
      if (((int32_T)(index1 + 1.0) < 1) ||
          ((int32_T)(index1 + 1.0) > 1000000)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(index1 + 1.0), 1, 1000000,
                                      &lb_emlrtBCI, (emlrtConstCTX)sp);
      }
      i2 = (int32_T)(index1 + 1.0) - 1;
      if (((int32_T)index2 < 1) || ((int32_T)index2 > 1000000)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)index2, 1, 1000000, &mb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      num_tmp_idx_0_tmp = (int32_T)index2;
    }
    num_tmp_idx_0_tmp -= i2;
    nx = i1 - i;
    if (num_tmp_idx_0_tmp != nx) {
      emlrtSubAssignSizeCheck1dR2017a(num_tmp_idx_0_tmp, nx, &u_emlrtECI,
                                      (emlrtConstCTX)sp);
    }
    for (i1 = 0; i1 < nx; i1++) {
      SD->f0.tempt[i2 + i1] = dydt_plus_data[i + i1];
    }
    index1 = index2;
    if (dydt_plus->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(dydt_plus->size[0], 1, dydt_plus->size[0],
                                    &ob_emlrtBCI, (emlrtConstCTX)sp);
    }
    if (dydt_plus_data[dydt_plus->size[0] - 1] != Tfin) {
      /*  Compute U and V when a jump occurs */
      if (b_physical->EPS == 0.0) {
        real_T b_xx_data[111];
        real_T c_xx_data[110];
        real_T b_dv[2];
        real_T d;
        real_T d1;
        real_T d2;
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        int32_T d_loop_ub;
        int32_T i4;
        int32_T loop_ub;
        int32_T maxdimlen;
        boolean_T out;
        /*  Extrapolate values befor jumps     */
        if (NSTATE < 1.0) {
          nx = 0;
        } else {
          if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
            emlrtIntegerCheckR2012b(NSTATE, &emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > 111)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, 111, &b_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          nx = (int32_T)NSTATE;
        }
        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        d = 2.0 * NSTATE;
        if (NSTATE + 1.0 > d) {
          i = 0;
          i1 = 0;
        } else {
          if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
            emlrtIntegerCheckR2012b(NSTATE + 1.0, &b_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          if (((int32_T)(NSTATE + 1.0) < 1) ||
              ((int32_T)(NSTATE + 1.0) > 111)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1, 111,
                                          &d_emlrtBCI, (emlrtConstCTX)sp);
          }
          i = (int32_T)(NSTATE + 1.0) - 1;
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &c_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > 111)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 111, &e_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i1 = (int32_T)d;
        }
        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                        &c_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (d < 1.0) {
          loop_ub = 0;
        } else {
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > 111)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 111, &g_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          loop_ub = (int32_T)d;
        }
        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                        &f_emlrtBCI, (emlrtConstCTX)sp);
        }
        for (i2 = 0; i2 < loop_ub; i2++) {
          s0[i2] = xx_data[(xx->size[0] + xx->size[0] * i2) - 1];
        }
        st.site = &c_emlrtRSI;
        derivatives(&st, s0, loop_ub, b_physical->Tmax, b_physical->c,
                    b_physical->NSTATE, b_physical->shoot, b_physical->EPS,
                    SIGN, dydt_plus);
        dydt_plus_data = dydt_plus->data;
        for (i2 = 0; i2 < nx; i2++) {
          s0[i2] = xx_data[(xx->size[0] + xx->size[0] * i2) - 1];
        }
        loop_ub = i1 - i;
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_xx_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
        }
        st.site = &d_emlrtRSI;
        b_Switching_Function(&st, s0, nx, b_xx_data, loop_ub, b_physical->Tmax,
                             b_physical->c, b_physical->NSTATE,
                             b_physical->shoot, b_physical->EPS, &S, &dSdt);
        /*  Compute values after the jump */
        SIGN = -SIGN;
        d1 = 2.0 * NSTATE + 1.0;
        if (d1 > 110.0) {
          i = 0;
          i1 = 0;
        } else {
          if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
            emlrtIntegerCheckR2012b(d1, &e_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)d1 < 1) || ((int32_T)d1 > 111)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, 111, &i_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i = (int32_T)d1 - 1;
          i1 = 110;
        }
        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                        &h_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (d < 1.0) {
          nx = 0;
        } else {
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &f_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > 111)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 111, &k_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          nx = (int32_T)d;
        }
        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                        &j_emlrtBCI, (emlrtConstCTX)sp);
        }
        for (i2 = 0; i2 < nx; i2++) {
          s0[i2] = xx_data[(xx->size[0] + xx->size[0] * i2) - 1];
        }
        st.site = &e_emlrtRSI;
        derivatives(&st, s0, nx, b_physical->Tmax, b_physical->c,
                    b_physical->NSTATE, b_physical->shoot, b_physical->EPS,
                    SIGN, dydt_min);
        states_data = dydt_min->data;
        if (NSTATE < 1.0) {
          nx = 0;
        } else {
          if (dydt_min->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, dydt_min->size[0], &l_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
            emlrtIntegerCheckR2012b(NSTATE, &g_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > dydt_min->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1, dydt_min->size[0],
                                          &m_emlrtBCI, (emlrtConstCTX)sp);
          }
          nx = (int32_T)NSTATE;
        }
        iv1[0] = 1;
        iv1[1] = nx;
        st.site = &f_emlrtRSI;
        indexShapeCheck(&st, dydt_min->size[0], iv1);
        if (NSTATE < 1.0) {
          i2 = 0;
        } else {
          if (dydt_plus->size[0] < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, dydt_plus->size[0], &n_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
            emlrtIntegerCheckR2012b(NSTATE, &h_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)NSTATE < 1) || ((int32_T)NSTATE > dydt_plus->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)NSTATE, 1,
                                          dydt_plus->size[0], &o_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i2 = (int32_T)NSTATE;
        }
        iv1[0] = 1;
        iv1[1] = i2;
        st.site = &f_emlrtRSI;
        indexShapeCheck(&st, dydt_plus->size[0], iv1);
        if ((nx != i2) && ((nx != 1) && (i2 != 1))) {
          emlrtDimSizeImpxCheckR2021b(nx, i2, &emlrtECI, (emlrtConstCTX)sp);
        }
        S = muDoubleScalarSign(dSdt);
        if (nx == i2) {
          i2 = deltax->size[0];
          deltax->size[0] = nx;
          emxEnsureCapacity_real_T(sp, deltax, i2, &r_emlrtRTEI);
          deltax_data = deltax->data;
          for (i2 = 0; i2 < nx; i2++) {
            deltax_data[i2] = S * (states_data[i2] - dydt_plus_data[i2]);
          }
        } else {
          st.site = &ei_emlrtRSI;
          e_binary_expand_op(&st, deltax, S, dydt_min, nx, dydt_plus, i2);
          deltax_data = deltax->data;
        }
        if (NSTATE + 1.0 > d) {
          i2 = 0;
          num_tmp_idx_0_tmp = 0;
        } else {
          if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
            emlrtIntegerCheckR2012b(NSTATE + 1.0, &i_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          if (((int32_T)(NSTATE + 1.0) < 1) ||
              ((int32_T)(NSTATE + 1.0) > dydt_min->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1,
                                          dydt_min->size[0], &p_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i2 = (int32_T)(NSTATE + 1.0) - 1;
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &j_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > dydt_min->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, dydt_min->size[0],
                                          &q_emlrtBCI, (emlrtConstCTX)sp);
          }
          num_tmp_idx_0_tmp = (int32_T)d;
        }
        iv1[0] = 1;
        nx = num_tmp_idx_0_tmp - i2;
        iv1[1] = nx;
        st.site = &g_emlrtRSI;
        indexShapeCheck(&st, dydt_min->size[0], iv1);
        if (NSTATE + 1.0 > d) {
          i3 = 0;
          i4 = 0;
        } else {
          if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
            emlrtIntegerCheckR2012b(NSTATE + 1.0, &k_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          if (((int32_T)(NSTATE + 1.0) < 1) ||
              ((int32_T)(NSTATE + 1.0) > dydt_plus->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1,
                                          dydt_plus->size[0], &r_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i3 = (int32_T)(NSTATE + 1.0) - 1;
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &l_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > dydt_plus->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, dydt_plus->size[0],
                                          &s_emlrtBCI, (emlrtConstCTX)sp);
          }
          i4 = (int32_T)d;
        }
        iv1[0] = 1;
        i5 = i4 - i3;
        iv1[1] = i5;
        st.site = &g_emlrtRSI;
        indexShapeCheck(&st, dydt_plus->size[0], iv1);
        if ((nx != i5) && ((nx != 1) && (i5 != 1))) {
          emlrtDimSizeImpxCheckR2021b(nx, i5, &b_emlrtECI, (emlrtConstCTX)sp);
        }
        if (nx == i5) {
          for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < nx;
               num_tmp_idx_0_tmp++) {
            dydt_plus_data[num_tmp_idx_0_tmp] =
                -S * (states_data[i2 + num_tmp_idx_0_tmp] -
                      dydt_plus_data[i3 + num_tmp_idx_0_tmp]);
          }
          i2 = dydt_plus->size[0];
          dydt_plus->size[0] = nx;
          emxEnsureCapacity_real_T(sp, dydt_plus, i2, &s_emlrtRTEI);
          dydt_plus_data = dydt_plus->data;
        } else {
          st.site = &ei_emlrtRSI;
          d_binary_expand_op(&st, dydt_plus, S, dydt_min, i2, num_tmp_idx_0_tmp,
                             i3, i4);
          dydt_plus_data = dydt_plus->data;
        }
        st.site = &h_emlrtRSI;
        d1 = NSTATE * NSTATE;
        if (d1 < 1.0) {
          nx = 0;
        } else {
          i2 = i1 - i;
          if (i2 < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i2, &t_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
            emlrtIntegerCheckR2012b(d1, &m_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)d1 < 1) || ((int32_T)d1 > i2)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d1, 1, i2, &u_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          nx = (int32_T)d1;
        }
        tmp_size[0] = 1;
        tmp_size[1] = nx;
        for (i2 = 0; i2 < nx; i2++) {
          tmp_data[i2] = xx_data[(xx->size[0] + xx->size[0] * (i + i2)) - 1];
        }
        b_told[0] = NSTATE;
        b_told[1] = NSTATE;
        st.site = &h_emlrtRSI;
        b_st.site = &lc_emlrtRSI;
        assertValidSizeArg(&b_st, b_told);
        i2 = maxsize(tmp_size);
        if ((int32_T)NSTATE > muIntScalarMax_sint32(nx, i2)) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        out = ((int32_T)NSTATE >= 0);
        if ((!out) || ((int32_T)NSTATE < 0)) {
          out = false;
        }
        if (!out) {
          emlrtErrorWithMessageIdR2018a(
              &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }
        loop_ub = (int32_T)NSTATE * (int32_T)NSTATE;
        if (loop_ub != nx) {
          emlrtErrorWithMessageIdR2018a(
              &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }
        st.site = &i_emlrtRSI;
        st.site = &i_emlrtRSI;
        S = 2.0 * d1;
        if (d1 + 1.0 > S) {
          i2 = 0;
          num_tmp_idx_0_tmp = 0;
        } else {
          if (d1 + 1.0 != (int32_T)muDoubleScalarFloor(d1 + 1.0)) {
            emlrtIntegerCheckR2012b(d1 + 1.0, &n_emlrtDCI, (emlrtConstCTX)sp);
          }
          i2 = i1 - i;
          if (((int32_T)(d1 + 1.0) < 1) || ((int32_T)(d1 + 1.0) > i2)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(d1 + 1.0), 1, i2,
                                          &v_emlrtBCI, (emlrtConstCTX)sp);
          }
          i2 = (int32_T)(d1 + 1.0) - 1;
          if (S != (int32_T)muDoubleScalarFloor(S)) {
            emlrtIntegerCheckR2012b(S, &o_emlrtDCI, (emlrtConstCTX)sp);
          }
          num_tmp_idx_0_tmp = i1 - i;
          if (((int32_T)S < 1) || ((int32_T)S > num_tmp_idx_0_tmp)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)S, 1, num_tmp_idx_0_tmp,
                                          &w_emlrtBCI, (emlrtConstCTX)sp);
          }
          num_tmp_idx_0_tmp = (int32_T)S;
        }
        b_tmp_size[0] = 1;
        type = num_tmp_idx_0_tmp - i2;
        b_tmp_size[1] = type;
        for (i3 = 0; i3 < type; i3++) {
          b_tmp_data[i3] =
              xx_data[(xx->size[0] + xx->size[0] * ((i + i2) + i3)) - 1];
        }
        st.site = &i_emlrtRSI;
        b_st.site = &lc_emlrtRSI;
        assertValidSizeArg(&b_st, b_told);
        i3 = maxsize(b_tmp_size);
        if ((int32_T)NSTATE > muIntScalarMax_sint32(type, i3)) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        out = ((int32_T)NSTATE >= 0);
        if ((!out) || ((int32_T)NSTATE < 0)) {
          out = false;
        }
        if (!out) {
          emlrtErrorWithMessageIdR2018a(
              &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }
        if (loop_ub != type) {
          emlrtErrorWithMessageIdR2018a(
              &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }
        st.site = &j_emlrtRSI;
        st.site = &j_emlrtRSI;
        d2 = 3.0 * d1;
        if (S + 1.0 > d2) {
          i3 = 0;
          i4 = 0;
        } else {
          if (S + 1.0 != (int32_T)muDoubleScalarFloor(S + 1.0)) {
            emlrtIntegerCheckR2012b(S + 1.0, &p_emlrtDCI, (emlrtConstCTX)sp);
          }
          i3 = i1 - i;
          if (((int32_T)(S + 1.0) < 1) || ((int32_T)(S + 1.0) > i3)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(S + 1.0), 1, i3,
                                          &x_emlrtBCI, (emlrtConstCTX)sp);
          }
          i3 = (int32_T)(S + 1.0) - 1;
          if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
            emlrtIntegerCheckR2012b(d2, &q_emlrtDCI, (emlrtConstCTX)sp);
          }
          i4 = i1 - i;
          if (((int32_T)d2 < 1) || ((int32_T)d2 > i4)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d2, 1, i4, &y_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i4 = (int32_T)d2;
        }
        c_tmp_size[0] = 1;
        b_loop_ub = i4 - i3;
        c_tmp_size[1] = b_loop_ub;
        for (i5 = 0; i5 < b_loop_ub; i5++) {
          c_tmp_data[i5] =
              xx_data[(xx->size[0] + xx->size[0] * ((i + i3) + i5)) - 1];
        }
        st.site = &j_emlrtRSI;
        b_st.site = &lc_emlrtRSI;
        assertValidSizeArg(&b_st, b_told);
        i5 = maxsize(c_tmp_size);
        if ((int32_T)NSTATE > muIntScalarMax_sint32(b_loop_ub, i5)) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        out = ((int32_T)NSTATE >= 0);
        if ((!out) || ((int32_T)NSTATE < 0)) {
          out = false;
        }
        if (!out) {
          emlrtErrorWithMessageIdR2018a(
              &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }
        if (loop_ub != b_loop_ub) {
          emlrtErrorWithMessageIdR2018a(
              &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }
        st.site = &k_emlrtRSI;
        if (d2 + 1.0 > (real_T)((i1 - i) - 1) + 1.0) {
          i5 = 0;
          i1 = 0;
        } else {
          if (d2 + 1.0 != (int32_T)muDoubleScalarFloor(d2 + 1.0)) {
            emlrtIntegerCheckR2012b(d2 + 1.0, &r_emlrtDCI, (emlrtConstCTX)sp);
          }
          i5 = i1 - i;
          if (((int32_T)(d2 + 1.0) < 1) || ((int32_T)(d2 + 1.0) > i5)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(d2 + 1.0), 1, i5,
                                          &ab_emlrtBCI, (emlrtConstCTX)sp);
          }
          i5 = (int32_T)(d2 + 1.0) - 1;
          b_num_tmp_idx_0_tmp = i1 - i;
          i1 -= i;
          if ((i1 < 1) || (i1 > b_num_tmp_idx_0_tmp)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, b_num_tmp_idx_0_tmp,
                                          &bb_emlrtBCI, (emlrtConstCTX)sp);
          }
        }
        d_tmp_size[0] = 1;
        c_loop_ub = i1 - i5;
        d_tmp_size[1] = c_loop_ub;
        for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < c_loop_ub;
             b_num_tmp_idx_0_tmp++) {
          d_tmp_data[b_num_tmp_idx_0_tmp] =
              xx_data[(xx->size[0] +
                       xx->size[0] * ((i + i5) + b_num_tmp_idx_0_tmp)) -
                      1];
        }
        st.site = &k_emlrtRSI;
        b_st.site = &lc_emlrtRSI;
        assertValidSizeArg(&b_st, b_told);
        i6 = maxsize(d_tmp_size);
        if ((int32_T)NSTATE > muIntScalarMax_sint32(c_loop_ub, i6)) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        out = ((int32_T)NSTATE >= 0);
        if ((!out) || ((int32_T)NSTATE < 0)) {
          out = false;
        }
        if (!out) {
          emlrtErrorWithMessageIdR2018a(
              &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }
        if (loop_ub != c_loop_ub) {
          emlrtErrorWithMessageIdR2018a(
              &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }
        b_num_tmp_idx_0_tmp = y_tmp->size[0] * y_tmp->size[1];
        y_tmp->size[0] = deltax->size[0];
        y_tmp->size[1] = dydt_plus->size[0];
        emxEnsureCapacity_real_T(sp, y_tmp, b_num_tmp_idx_0_tmp, &t_emlrtRTEI);
        states_data = y_tmp->data;
        d_loop_ub = dydt_plus->size[0];
        for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < d_loop_ub;
             b_num_tmp_idx_0_tmp++) {
          maxdimlen = deltax->size[0];
          for (i6 = 0; i6 < maxdimlen; i6++) {
            states_data[i6 + y_tmp->size[0] * b_num_tmp_idx_0_tmp] =
                deltax_data[i6] * dydt_plus_data[b_num_tmp_idx_0_tmp];
          }
        }
        st.site = &l_emlrtRSI;
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        e_tmp_data.data = &tmp_data[0];
        e_tmp_data.size = &iv1[0];
        e_tmp_data.allocatedSize = 110;
        e_tmp_data.numDimensions = 2;
        e_tmp_data.canFreeData = false;
        b_st.site = &mg_emlrtRSI;
        b_dynamic_size_checks(&b_st, y_tmp, &e_tmp_data, y_tmp->size[1],
                              (int8_T)(int32_T)NSTATE);
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        f_tmp_data.data = &tmp_data[0];
        f_tmp_data.size = &iv1[0];
        f_tmp_data.allocatedSize = 110;
        f_tmp_data.numDimensions = 2;
        f_tmp_data.canFreeData = false;
        b_st.site = &lg_emlrtRSI;
        d_mtimes(&b_st, y_tmp, &f_tmp_data, r);
        r1 = r->data;
        b_num_tmp_idx_0_tmp = b_y_tmp->size[0] * b_y_tmp->size[1];
        b_y_tmp->size[0] = deltax->size[0];
        b_y_tmp->size[1] = deltax->size[0];
        emxEnsureCapacity_real_T(sp, b_y_tmp, b_num_tmp_idx_0_tmp,
                                 &t_emlrtRTEI);
        states_data = b_y_tmp->data;
        d_loop_ub = deltax->size[0];
        for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < d_loop_ub;
             b_num_tmp_idx_0_tmp++) {
          maxdimlen = deltax->size[0];
          for (i6 = 0; i6 < maxdimlen; i6++) {
            states_data[i6 + b_y_tmp->size[0] * b_num_tmp_idx_0_tmp] =
                deltax_data[i6] * deltax_data[b_num_tmp_idx_0_tmp];
          }
        }
        st.site = &l_emlrtRSI;
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        g_tmp_data.data = &b_tmp_data[0];
        g_tmp_data.size = &iv1[0];
        g_tmp_data.allocatedSize = 110;
        g_tmp_data.numDimensions = 2;
        g_tmp_data.canFreeData = false;
        b_st.site = &mg_emlrtRSI;
        b_dynamic_size_checks(&b_st, b_y_tmp, &g_tmp_data, b_y_tmp->size[1],
                              (int8_T)(int32_T)NSTATE);
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        h_tmp_data.data = &b_tmp_data[0];
        h_tmp_data.size = &iv1[0];
        h_tmp_data.allocatedSize = 110;
        h_tmp_data.numDimensions = 2;
        h_tmp_data.canFreeData = false;
        b_st.site = &lg_emlrtRSI;
        d_mtimes(&b_st, b_y_tmp, &h_tmp_data, Vn_min);
        Vn_min_data = Vn_min->data;
        if ((r->size[0] != Vn_min->size[0]) &&
            ((r->size[0] != 1) && (Vn_min->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r->size[0], Vn_min->size[0], &c_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if ((r->size[1] != Vn_min->size[1]) &&
            ((r->size[1] != 1) && (Vn_min->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r->size[1], Vn_min->size[1], &d_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        S = muDoubleScalarAbs(dSdt);
        if ((r->size[0] == Vn_min->size[0]) &&
            (r->size[1] == Vn_min->size[1])) {
          d_loop_ub = r->size[0] * r->size[1];
          for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < d_loop_ub;
               b_num_tmp_idx_0_tmp++) {
            r1[b_num_tmp_idx_0_tmp] =
                (r1[b_num_tmp_idx_0_tmp] - Vn_min_data[b_num_tmp_idx_0_tmp]) /
                S;
          }
        } else {
          st.site = &l_emlrtRSI;
          b_binary_expand_op(&st, r, Vn_min, S);
          r1 = r->data;
        }
        if (((int32_T)NSTATE != r->size[0]) &&
            (((int32_T)NSTATE != 1) && (r->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[0], &e_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (((int32_T)NSTATE != r->size[1]) &&
            (((int32_T)NSTATE != 1) && (r->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[1], &f_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (((int32_T)NSTATE == r->size[0]) &&
            ((int32_T)NSTATE == r->size[1])) {
          for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < nx;
               b_num_tmp_idx_0_tmp++) {
            c_xx_data[b_num_tmp_idx_0_tmp] = xx_data
                [(xx->size[0] + xx->size[0] * (i + b_num_tmp_idx_0_tmp)) - 1];
          }
          b_num_tmp_idx_0_tmp = UN_min->size[0] * UN_min->size[1];
          UN_min->size[0] = (int32_T)NSTATE;
          UN_min->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, UN_min, b_num_tmp_idx_0_tmp,
                                   &u_emlrtRTEI);
          UN_min_data = UN_min->data;
          for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < loop_ub;
               b_num_tmp_idx_0_tmp++) {
            UN_min_data[b_num_tmp_idx_0_tmp] =
                c_xx_data[b_num_tmp_idx_0_tmp] + r1[b_num_tmp_idx_0_tmp];
          }
        } else {
          st.site = &l_emlrtRSI;
          c_binary_expand_op(&st, UN_min, xx, i, nx, b_told, r);
          UN_min_data = UN_min->data;
        }
        b_num_tmp_idx_0_tmp = c_y_tmp->size[0] * c_y_tmp->size[1];
        c_y_tmp->size[0] = dydt_plus->size[0];
        c_y_tmp->size[1] = dydt_plus->size[0];
        emxEnsureCapacity_real_T(sp, c_y_tmp, b_num_tmp_idx_0_tmp,
                                 &t_emlrtRTEI);
        states_data = c_y_tmp->data;
        nx = dydt_plus->size[0];
        for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < nx;
             b_num_tmp_idx_0_tmp++) {
          loop_ub = dydt_plus->size[0];
          for (i6 = 0; i6 < loop_ub; i6++) {
            states_data[i6 + c_y_tmp->size[0] * b_num_tmp_idx_0_tmp] =
                dydt_plus_data[i6] * dydt_plus_data[b_num_tmp_idx_0_tmp];
          }
        }
        st.site = &m_emlrtRSI;
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        i_tmp_data.data = &tmp_data[0];
        i_tmp_data.size = &iv1[0];
        i_tmp_data.allocatedSize = 110;
        i_tmp_data.numDimensions = 2;
        i_tmp_data.canFreeData = false;
        b_st.site = &mg_emlrtRSI;
        b_dynamic_size_checks(&b_st, c_y_tmp, &i_tmp_data, c_y_tmp->size[1],
                              (int8_T)(int32_T)NSTATE);
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        j_tmp_data.data = &tmp_data[0];
        j_tmp_data.size = &iv1[0];
        j_tmp_data.allocatedSize = 110;
        j_tmp_data.numDimensions = 2;
        j_tmp_data.canFreeData = false;
        b_st.site = &lg_emlrtRSI;
        d_mtimes(&b_st, c_y_tmp, &j_tmp_data, r);
        r1 = r->data;
        b_num_tmp_idx_0_tmp = d_y_tmp->size[0] * d_y_tmp->size[1];
        d_y_tmp->size[0] = dydt_plus->size[0];
        d_y_tmp->size[1] = deltax->size[0];
        emxEnsureCapacity_real_T(sp, d_y_tmp, b_num_tmp_idx_0_tmp,
                                 &t_emlrtRTEI);
        states_data = d_y_tmp->data;
        nx = deltax->size[0];
        for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < nx;
             b_num_tmp_idx_0_tmp++) {
          loop_ub = dydt_plus->size[0];
          for (i6 = 0; i6 < loop_ub; i6++) {
            states_data[i6 + d_y_tmp->size[0] * b_num_tmp_idx_0_tmp] =
                dydt_plus_data[i6] * deltax_data[b_num_tmp_idx_0_tmp];
          }
        }
        st.site = &m_emlrtRSI;
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        k_tmp_data.data = &b_tmp_data[0];
        k_tmp_data.size = &iv1[0];
        k_tmp_data.allocatedSize = 110;
        k_tmp_data.numDimensions = 2;
        k_tmp_data.canFreeData = false;
        b_st.site = &mg_emlrtRSI;
        b_dynamic_size_checks(&b_st, d_y_tmp, &k_tmp_data, d_y_tmp->size[1],
                              (int8_T)(int32_T)NSTATE);
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        l_tmp_data.data = &b_tmp_data[0];
        l_tmp_data.size = &iv1[0];
        l_tmp_data.allocatedSize = 110;
        l_tmp_data.numDimensions = 2;
        l_tmp_data.canFreeData = false;
        b_st.site = &lg_emlrtRSI;
        d_mtimes(&b_st, d_y_tmp, &l_tmp_data, Vn_min);
        Vn_min_data = Vn_min->data;
        if ((r->size[0] != Vn_min->size[0]) &&
            ((r->size[0] != 1) && (Vn_min->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r->size[0], Vn_min->size[0], &g_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if ((r->size[1] != Vn_min->size[1]) &&
            ((r->size[1] != 1) && (Vn_min->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r->size[1], Vn_min->size[1], &h_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if ((r->size[0] == Vn_min->size[0]) &&
            (r->size[1] == Vn_min->size[1])) {
          nx = r->size[0] * r->size[1];
          for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < nx;
               b_num_tmp_idx_0_tmp++) {
            r1[b_num_tmp_idx_0_tmp] =
                (r1[b_num_tmp_idx_0_tmp] - Vn_min_data[b_num_tmp_idx_0_tmp]) /
                S;
          }
        } else {
          st.site = &m_emlrtRSI;
          b_binary_expand_op(&st, r, Vn_min, S);
          r1 = r->data;
        }
        if (((int32_T)NSTATE != r->size[0]) &&
            (((int32_T)NSTATE != 1) && (r->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[0], &i_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (((int32_T)NSTATE != r->size[1]) &&
            (((int32_T)NSTATE != 1) && (r->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[1], &j_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (((int32_T)NSTATE == r->size[0]) &&
            ((int32_T)NSTATE == r->size[1])) {
          for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < type;
               num_tmp_idx_0_tmp++) {
            c_xx_data[num_tmp_idx_0_tmp] =
                xx_data[(xx->size[0] +
                         xx->size[0] * ((i + i2) + num_tmp_idx_0_tmp)) -
                        1];
          }
          i2 = VN_min->size[0] * VN_min->size[1];
          VN_min->size[0] = (int32_T)NSTATE;
          VN_min->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, VN_min, i2, &v_emlrtRTEI);
          states_data = VN_min->data;
          nx = (int32_T)NSTATE * (int32_T)NSTATE;
          for (i2 = 0; i2 < nx; i2++) {
            states_data[i2] = c_xx_data[i2] + r1[i2];
          }
        } else {
          st.site = &m_emlrtRSI;
          binary_expand_op(&st, VN_min, xx, i, i2, num_tmp_idx_0_tmp, b_told,
                           r);
          states_data = VN_min->data;
        }
        st.site = &n_emlrtRSI;
        b_dv[0] = d1;
        b_dv[1] = 1.0;
        st.site = &n_emlrtRSI;
        nx = UN_min->size[0] * UN_min->size[1];
        b_st.site = &lc_emlrtRSI;
        assertValidSizeArg(&b_st, b_dv);
        num_tmp_idx_0_tmp = (int32_T)d1;
        maxdimlen = UN_min->size[0];
        if (UN_min->size[1] > UN_min->size[0]) {
          maxdimlen = UN_min->size[1];
        }
        maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
        if ((int32_T)d1 > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if (maxdimlen < 1) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if ((int32_T)d1 < 0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }
        if ((int32_T)d1 != nx) {
          emlrtErrorWithMessageIdR2018a(
              &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }
        st.site = &o_emlrtRSI;
        b_dv[0] = d1;
        b_dv[1] = 1.0;
        st.site = &o_emlrtRSI;
        nx = VN_min->size[0] * VN_min->size[1];
        b_st.site = &lc_emlrtRSI;
        assertValidSizeArg(&b_st, b_dv);
        b_num_tmp_idx_0_tmp = (int32_T)d1;
        maxdimlen = VN_min->size[0];
        if (VN_min->size[1] > VN_min->size[0]) {
          maxdimlen = VN_min->size[1];
        }
        maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
        if ((int32_T)d1 > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if (maxdimlen < 1) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if ((int32_T)d1 < 0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }
        if ((int32_T)d1 != nx) {
          emlrtErrorWithMessageIdR2018a(
              &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }
        st.site = &p_emlrtRSI;
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        m_tmp_data.data = &c_tmp_data[0];
        m_tmp_data.size = &iv1[0];
        m_tmp_data.allocatedSize = 110;
        m_tmp_data.numDimensions = 2;
        m_tmp_data.canFreeData = false;
        b_st.site = &mg_emlrtRSI;
        b_dynamic_size_checks(&b_st, y_tmp, &m_tmp_data, y_tmp->size[1],
                              (int8_T)(int32_T)NSTATE);
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        n_tmp_data.data = &c_tmp_data[0];
        n_tmp_data.size = &iv1[0];
        n_tmp_data.allocatedSize = 110;
        n_tmp_data.numDimensions = 2;
        n_tmp_data.canFreeData = false;
        b_st.site = &lg_emlrtRSI;
        d_mtimes(&b_st, y_tmp, &n_tmp_data, r);
        r1 = r->data;
        st.site = &p_emlrtRSI;
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        o_tmp_data.data = &d_tmp_data[0];
        o_tmp_data.size = &iv1[0];
        o_tmp_data.allocatedSize = 110;
        o_tmp_data.numDimensions = 2;
        o_tmp_data.canFreeData = false;
        b_st.site = &mg_emlrtRSI;
        b_dynamic_size_checks(&b_st, b_y_tmp, &o_tmp_data, b_y_tmp->size[1],
                              (int8_T)(int32_T)NSTATE);
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        p_tmp_data.data = &d_tmp_data[0];
        p_tmp_data.size = &iv1[0];
        p_tmp_data.allocatedSize = 110;
        p_tmp_data.numDimensions = 2;
        p_tmp_data.canFreeData = false;
        b_st.site = &lg_emlrtRSI;
        d_mtimes(&b_st, b_y_tmp, &p_tmp_data, Vn_min);
        Vn_min_data = Vn_min->data;
        if ((r->size[0] != Vn_min->size[0]) &&
            ((r->size[0] != 1) && (Vn_min->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r->size[0], Vn_min->size[0], &k_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if ((r->size[1] != Vn_min->size[1]) &&
            ((r->size[1] != 1) && (Vn_min->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r->size[1], Vn_min->size[1], &l_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if ((r->size[0] == Vn_min->size[0]) &&
            (r->size[1] == Vn_min->size[1])) {
          nx = r->size[0] * r->size[1];
          for (i2 = 0; i2 < nx; i2++) {
            r1[i2] = (r1[i2] - Vn_min_data[i2]) / S;
          }
        } else {
          st.site = &p_emlrtRSI;
          b_binary_expand_op(&st, r, Vn_min, S);
          r1 = r->data;
        }
        if (((int32_T)NSTATE != r->size[0]) &&
            (((int32_T)NSTATE != 1) && (r->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[0], &m_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (((int32_T)NSTATE != r->size[1]) &&
            (((int32_T)NSTATE != 1) && (r->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[1], &n_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (((int32_T)NSTATE == r->size[0]) &&
            ((int32_T)NSTATE == r->size[1])) {
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            c_xx_data[i2] =
                xx_data[(xx->size[0] + xx->size[0] * ((i + i3) + i2)) - 1];
          }
          i2 = Un_min->size[0] * Un_min->size[1];
          Un_min->size[0] = (int32_T)NSTATE;
          Un_min->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, Un_min, i2, &w_emlrtRTEI);
          deltax_data = Un_min->data;
          nx = (int32_T)NSTATE * (int32_T)NSTATE;
          for (i2 = 0; i2 < nx; i2++) {
            deltax_data[i2] = c_xx_data[i2] + r1[i2];
          }
        } else {
          st.site = &p_emlrtRSI;
          binary_expand_op(&st, Un_min, xx, i, i3, i4, b_told, r);
          deltax_data = Un_min->data;
        }
        st.site = &q_emlrtRSI;
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        q_tmp_data.data = &c_tmp_data[0];
        q_tmp_data.size = &iv1[0];
        q_tmp_data.allocatedSize = 110;
        q_tmp_data.numDimensions = 2;
        q_tmp_data.canFreeData = false;
        b_st.site = &mg_emlrtRSI;
        b_dynamic_size_checks(&b_st, c_y_tmp, &q_tmp_data, c_y_tmp->size[1],
                              (int8_T)(int32_T)NSTATE);
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        r_tmp_data.data = &c_tmp_data[0];
        r_tmp_data.size = &iv1[0];
        r_tmp_data.allocatedSize = 110;
        r_tmp_data.numDimensions = 2;
        r_tmp_data.canFreeData = false;
        b_st.site = &lg_emlrtRSI;
        d_mtimes(&b_st, c_y_tmp, &r_tmp_data, r);
        r1 = r->data;
        st.site = &q_emlrtRSI;
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        s_tmp_data.data = &d_tmp_data[0];
        s_tmp_data.size = &iv1[0];
        s_tmp_data.allocatedSize = 110;
        s_tmp_data.numDimensions = 2;
        s_tmp_data.canFreeData = false;
        b_st.site = &mg_emlrtRSI;
        b_dynamic_size_checks(&b_st, d_y_tmp, &s_tmp_data, d_y_tmp->size[1],
                              (int8_T)(int32_T)NSTATE);
        iv1[0] = (int32_T)NSTATE;
        iv1[1] = (int32_T)NSTATE;
        t_tmp_data.data = &d_tmp_data[0];
        t_tmp_data.size = &iv1[0];
        t_tmp_data.allocatedSize = 110;
        t_tmp_data.numDimensions = 2;
        t_tmp_data.canFreeData = false;
        b_st.site = &lg_emlrtRSI;
        d_mtimes(&b_st, d_y_tmp, &t_tmp_data, Vn_min);
        Vn_min_data = Vn_min->data;
        if ((r->size[0] != Vn_min->size[0]) &&
            ((r->size[0] != 1) && (Vn_min->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r->size[0], Vn_min->size[0], &o_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if ((r->size[1] != Vn_min->size[1]) &&
            ((r->size[1] != 1) && (Vn_min->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r->size[1], Vn_min->size[1], &p_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if ((r->size[0] == Vn_min->size[0]) &&
            (r->size[1] == Vn_min->size[1])) {
          nx = r->size[0] * r->size[1];
          for (i2 = 0; i2 < nx; i2++) {
            r1[i2] = (r1[i2] - Vn_min_data[i2]) / S;
          }
        } else {
          st.site = &q_emlrtRSI;
          b_binary_expand_op(&st, r, Vn_min, S);
          r1 = r->data;
        }
        if (((int32_T)NSTATE != r->size[0]) &&
            (((int32_T)NSTATE != 1) && (r->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[0], &q_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (((int32_T)NSTATE != r->size[1]) &&
            (((int32_T)NSTATE != 1) && (r->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b((int32_T)NSTATE, r->size[1], &r_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (((int32_T)NSTATE == r->size[0]) &&
            ((int32_T)NSTATE == r->size[1])) {
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            c_xx_data[i1] =
                xx_data[(xx->size[0] + xx->size[0] * ((i + i5) + i1)) - 1];
          }
          i = Vn_min->size[0] * Vn_min->size[1];
          Vn_min->size[0] = (int32_T)NSTATE;
          Vn_min->size[1] = (int32_T)NSTATE;
          emxEnsureCapacity_real_T(sp, Vn_min, i, &x_emlrtRTEI);
          Vn_min_data = Vn_min->data;
          nx = (int32_T)NSTATE * (int32_T)NSTATE;
          for (i = 0; i < nx; i++) {
            Vn_min_data[i] = c_xx_data[i] + r1[i];
          }
        } else {
          st.site = &q_emlrtRSI;
          binary_expand_op(&st, Vn_min, xx, i, i5, i1, b_told, r);
          Vn_min_data = Vn_min->data;
        }
        st.site = &r_emlrtRSI;
        b_told[0] = d1;
        b_told[1] = 1.0;
        st.site = &r_emlrtRSI;
        nx = Un_min->size[0] * Un_min->size[1];
        b_st.site = &lc_emlrtRSI;
        assertValidSizeArg(&b_st, b_told);
        type = (int32_T)d1;
        maxdimlen = Un_min->size[0];
        if (Un_min->size[1] > Un_min->size[0]) {
          maxdimlen = Un_min->size[1];
        }
        maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
        if ((int32_T)d1 > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if (maxdimlen < 1) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if ((int32_T)d1 < 0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }
        if ((int32_T)d1 != nx) {
          emlrtErrorWithMessageIdR2018a(
              &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }
        st.site = &s_emlrtRSI;
        b_dv[0] = d1;
        b_dv[1] = 1.0;
        st.site = &s_emlrtRSI;
        nx = Vn_min->size[0] * Vn_min->size[1];
        b_st.site = &lc_emlrtRSI;
        assertValidSizeArg(&b_st, b_dv);
        d_loop_ub = (int32_T)d1;
        maxdimlen = Vn_min->size[0];
        if (Vn_min->size[1] > Vn_min->size[0]) {
          maxdimlen = Vn_min->size[1];
        }
        maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
        if ((int32_T)d1 > maxdimlen) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if (maxdimlen < 1) {
          emlrtErrorWithMessageIdR2018a(
              &st, &emlrtRTEI, "Coder:toolbox:reshape_emptyReshapeLimit",
              "Coder:toolbox:reshape_emptyReshapeLimit", 0);
        }
        if ((int32_T)d1 < 0) {
          emlrtErrorWithMessageIdR2018a(
              &st, &b_emlrtRTEI, "MATLAB:checkDimCommon:nonnegativeSize",
              "MATLAB:checkDimCommon:nonnegativeSize", 0);
        }
        if ((int32_T)d1 != nx) {
          emlrtErrorWithMessageIdR2018a(
              &st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
              "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
        }
        if (NSTATE < 1.0) {
          nx = 0;
        } else {
          if (NSTATE != (int32_T)muDoubleScalarFloor(NSTATE)) {
            emlrtIntegerCheckR2012b(NSTATE, &s_emlrtDCI, (emlrtConstCTX)sp);
          }
          nx = (int32_T)NSTATE;
        }
        if (NSTATE + 1.0 > d) {
          i = 0;
          i1 = 0;
        } else {
          if (NSTATE + 1.0 != (int32_T)muDoubleScalarFloor(NSTATE + 1.0)) {
            emlrtIntegerCheckR2012b(NSTATE + 1.0, &t_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          if (((int32_T)(NSTATE + 1.0) < 1) ||
              ((int32_T)(NSTATE + 1.0) > 111)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(NSTATE + 1.0), 1, 111,
                                          &db_emlrtBCI, (emlrtConstCTX)sp);
          }
          i = (int32_T)(NSTATE + 1.0) - 1;
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &u_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > 111)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 111, &eb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i1 = (int32_T)d;
        }
        st.site = &t_emlrtRSI;
        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                        &cb_emlrtBCI, &st);
        }
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
        for (i2 = 0; i2 < nx; i2++) {
          s0[i2] = xx_data[(xx->size[0] + xx->size[0] * i2) - 1];
        }
        loop_ub = i1 - i;
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_xx_data[i1] = xx_data[(xx->size[0] + xx->size[0] * (i + i1)) - 1];
        }
        b_st.site = &u_emlrtRSI;
        S = S_fun(&b_st, s0, nx, b_xx_data, loop_ub, b_physical->Tmax,
                  b_physical->c);
        /*  Define new initial vector for ode in the next loop */
        if (d < 1.0) {
          nx = 0;
        } else {
          if (d != (int32_T)muDoubleScalarFloor(d)) {
            emlrtIntegerCheckR2012b(d, &v_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)d < 1) || ((int32_T)d > 111)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)d, 1, 111, &gb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          nx = (int32_T)d;
        }
        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                        &fb_emlrtBCI, (emlrtConstCTX)sp);
        }
        i = (((nx + (int32_T)d1) + (int32_T)d1) + (int32_T)d1) + (int32_T)d1;
        i1 = dydt_plus->size[0];
        dydt_plus->size[0] = i + 1;
        emxEnsureCapacity_real_T(sp, dydt_plus, i1, &y_emlrtRTEI);
        dydt_plus_data = dydt_plus->data;
        for (i1 = 0; i1 < nx; i1++) {
          dydt_plus_data[i1] = xx_data[(xx->size[0] + xx->size[0] * i1) - 1];
        }
        for (i1 = 0; i1 < num_tmp_idx_0_tmp; i1++) {
          dydt_plus_data[i1 + nx] = UN_min_data[i1];
        }
        for (i1 = 0; i1 < b_num_tmp_idx_0_tmp; i1++) {
          dydt_plus_data[(i1 + nx) + (int32_T)d1] = states_data[i1];
        }
        for (i1 = 0; i1 < type; i1++) {
          dydt_plus_data[((i1 + nx) + (int32_T)d1) + (int32_T)d1] =
              deltax_data[i1];
        }
        for (i1 = 0; i1 < d_loop_ub; i1++) {
          dydt_plus_data[(((i1 + nx) + (int32_T)d1) + (int32_T)d1) +
                         (int32_T)d1] = Vn_min_data[i1];
        }
        dydt_plus_data[i] = S;
        if (dydt_plus->size[0] != 111) {
          emlrtSubAssignSizeCheck1dR2017a(111, dydt_plus->size[0], &s_emlrtECI,
                                          (emlrtConstCTX)sp);
        }
        for (i = 0; i < 111; i++) {
          s0[i] = dydt_plus_data[i];
        }
      } else {
        /*  If EPS > 0, there are no jumps  */
        if (xx->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0],
                                        &hb_emlrtBCI, (emlrtConstCTX)sp);
        }
        for (i = 0; i < 111; i++) {
          s0[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
        }
        if (SIGN != 0.0) {
          SIGN = 0.0;
        } else {
          if ((xx->size[0] - 1 < 1) || (xx->size[0] - 1 > xx->size[0])) {
            emlrtDynamicBoundsCheckR2012b(xx->size[0] - 1, 1, xx->size[0],
                                          &pb_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (xx_data[(xx->size[0] + xx->size[0] * 110) - 2] > 0.0) {
            SIGN = 1.0;
          } else {
            SIGN = -1.0;
          }
        }
      }
    } else {
      if (xx->size[0] < 1) {
        emlrtDynamicBoundsCheckR2012b(xx->size[0], 1, xx->size[0], &ib_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      for (i = 0; i < 111; i++) {
        s0[i] = xx_data[(xx->size[0] + xx->size[0] * i) - 1];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &d_y_tmp);
  emxFree_real_T(sp, &c_y_tmp);
  emxFree_real_T(sp, &b_y_tmp);
  emxFree_real_T(sp, &y_tmp);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &xx);
  emxFree_real_T(sp, &Vn_min);
  emxFree_real_T(sp, &Un_min);
  emxFree_real_T(sp, &VN_min);
  emxFree_real_T(sp, &UN_min);
  emxFree_real_T(sp, &deltax);
  emxFree_real_T(sp, &dydt_min);
  emxFree_real_T(sp, &dydt_plus);
  /*  Save states and times */
  if (index2 < 1.0) {
    nx = 0;
  } else {
    nx = (int32_T)index2;
  }
  i = states->size[0] * states->size[1];
  states->size[0] = nx;
  states->size[1] = 111;
  emxEnsureCapacity_real_T(sp, states, i, &p_emlrtRTEI);
  states_data = states->data;
  for (i = 0; i < 111; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      states_data[i1 + states->size[0] * i] = SD->f0.temps[i1 + 1000000 * i];
    }
  }
  if (index2 < 1.0) {
    nx = 0;
  } else {
    nx = (int32_T)index2;
  }
  i = times->size[0];
  times->size[0] = nx;
  emxEnsureCapacity_real_T(sp, times, i, &q_emlrtRTEI);
  states_data = times->data;
  for (i = 0; i < nx; i++) {
    states_data[i] = SD->f0.tempt[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void objfun_suff_anonFcn2(const emlrtStack *sp, real_T physical_Tmax,
                          real_T physical_c, real_T physical_NSTATE,
                          real_T physical_shoot, real_T physical_EPS,
                          real_T SIGN, const real_T s[111],
                          emxArray_real_T *varargout_1)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T r4;
  emxArray_real_T *H_p;
  emxArray_real_T *H_x;
  emxArray_real_T *dUN;
  emxArray_real_T *dUn;
  emxArray_real_T *dVN;
  emxArray_real_T *dVn;
  emxArray_real_T *pd;
  emxArray_real_T *phi;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r5;
  real_T p_data[111];
  real_T x_data[111];
  real_T H_pp[25];
  real_T H_xp[25];
  real_T H_xx[25];
  real_T tmp_data[5];
  real_T b_dv[2];
  real_T a__1;
  real_T c_tmp;
  real_T dSdt;
  real_T *H_p_data;
  real_T *dUN_data;
  real_T *dUn_data;
  real_T *dVN_data;
  real_T *dVn_data;
  real_T *pd_data;
  real_T *phi_data;
  real_T *varargout_1_data;
  int32_T b_physical_NSTATE[2];
  int32_T c_physical_NSTATE[2];
  int32_T d_physical_NSTATE[2];
  int32_T e_physical_NSTATE[2];
  int32_T f_physical_NSTATE[2];
  int32_T g_physical_NSTATE[2];
  int32_T h_physical_NSTATE[2];
  int32_T i_physical_NSTATE[2];
  int32_T j_physical_NSTATE[2];
  int32_T k_physical_NSTATE[2];
  int32_T l_physical_NSTATE[2];
  int32_T m_physical_NSTATE[2];
  int32_T n_physical_NSTATE[2];
  int32_T o_physical_NSTATE[2];
  int32_T p_physical_NSTATE[2];
  int32_T q_physical_NSTATE[2];
  int32_T r_physical_NSTATE[2];
  int32_T b_loop_ub;
  int32_T b_num_tmp_idx_0_tmp;
  int32_T c_num_tmp_idx_0_tmp;
  int32_T d_num_tmp_idx_0_tmp;
  int32_T i;
  int32_T loop_ub;
  int32_T n;
  int32_T num_tmp_idx_0_tmp;
  int32_T nx;
  boolean_T out;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  st.site = &rb_emlrtRSI;
  /*  Compute the derivatives of state, costate, U, V used for backward */
  /*  propagation. */
  /*  Inputs: */
  /*  inp1: states and costates vector and vectorized U and V
   * [(2*NSTATE+4*NSTATE^2)x1] */
  /*  inp2: structure for physical variables and functions */
  /*  inp3: switching function */
  /*  Output: */
  /*  xxd: vector of derivatives [(2*NSTATE+4*NSTATE^2)x1] */
  b_st.site = &sb_emlrtRSI;
  c_tmp = physical_NSTATE * physical_NSTATE;
  a__1 = (2.0 * physical_NSTATE + 1.0) + 4.0 * c_tmp;
  if (!(a__1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(a__1, &ab_emlrtDCI, &st);
  }
  dSdt = (int32_T)muDoubleScalarFloor(a__1);
  if (a__1 != dSdt) {
    emlrtIntegerCheckR2012b(a__1, &bb_emlrtDCI, &st);
  }
  i = varargout_1->size[0];
  loop_ub = (int32_T)a__1;
  varargout_1->size[0] = (int32_T)a__1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &kb_emlrtRTEI);
  varargout_1_data = varargout_1->data;
  if (a__1 != dSdt) {
    emlrtIntegerCheckR2012b(a__1, &bb_emlrtDCI, &st);
  }
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i] = 0.0;
  }
  if (physical_NSTATE < 1.0) {
    loop_ub = 0;
  } else {
    if (physical_NSTATE != (int32_T)muDoubleScalarFloor(physical_NSTATE)) {
      emlrtIntegerCheckR2012b(physical_NSTATE, &cb_emlrtDCI, &st);
    }
    if (((int32_T)physical_NSTATE < 1) || ((int32_T)physical_NSTATE > 111)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 111,
                                    &rb_emlrtBCI, &st);
    }
    loop_ub = (int32_T)physical_NSTATE;
  }
  if (loop_ub - 1 >= 0) {
    memcpy(&x_data[0], &s[0], (uint32_T)loop_ub * sizeof(real_T));
  }
  a__1 = 2.0 * physical_NSTATE;
  if (physical_NSTATE + 1.0 > a__1) {
    i = 0;
    num_tmp_idx_0_tmp = 0;
  } else {
    if (physical_NSTATE + 1.0 !=
        (int32_T)muDoubleScalarFloor(physical_NSTATE + 1.0)) {
      emlrtIntegerCheckR2012b(physical_NSTATE + 1.0, &db_emlrtDCI, &st);
    }
    if (((int32_T)(physical_NSTATE + 1.0) < 1) ||
        ((int32_T)(physical_NSTATE + 1.0) > 111)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(physical_NSTATE + 1.0), 1, 111,
                                    &sb_emlrtBCI, &st);
    }
    i = (int32_T)(physical_NSTATE + 1.0) - 1;
    if (a__1 != (int32_T)muDoubleScalarFloor(a__1)) {
      emlrtIntegerCheckR2012b(a__1, &eb_emlrtDCI, &st);
    }
    if (((int32_T)a__1 < 1) || ((int32_T)a__1 > 111)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)a__1, 1, 111, &tb_emlrtBCI, &st);
    }
    num_tmp_idx_0_tmp = (int32_T)a__1;
  }
  b_loop_ub = num_tmp_idx_0_tmp - i;
  for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < b_loop_ub;
       num_tmp_idx_0_tmp++) {
    p_data[num_tmp_idx_0_tmp] = s[i + num_tmp_idx_0_tmp];
  }
  b_st.site = &tb_emlrtRSI;
  a__1 = 2.0 * physical_NSTATE;
  dSdt = 4.0 * (physical_NSTATE * physical_NSTATE);
  emxInit_real_T(&st, &phi, 1, &lb_emlrtRTEI);
  i = phi->size[0];
  phi->size[0] = (int32_T)(dSdt - 1.0) + 1;
  emxEnsureCapacity_real_T(&st, phi, i, &lb_emlrtRTEI);
  phi_data = phi->data;
  nx = (int32_T)(dSdt - 1.0);
  for (i = 0; i <= nx; i++) {
    dSdt = a__1 + (real_T)(i + 1);
    if (dSdt != (int32_T)muDoubleScalarFloor(dSdt)) {
      emlrtIntegerCheckR2012b(dSdt, &y_emlrtDCI, &st);
    }
    if (((int32_T)dSdt < 1) || ((int32_T)dSdt > 111)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)dSdt, 1, 111, &qb_emlrtBCI, &st);
    }
    phi_data[i] = s[(int32_T)dSdt - 1];
  }
  /*  Extrapolate matrices */
  b_st.site = &ub_emlrtRSI;
  if (c_tmp < 1.0) {
    nx = 0;
  } else {
    i = (int32_T)(4.0 * c_tmp - 1.0) + 1;
    if (i < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i, &ub_emlrtBCI, &st);
    }
    if (c_tmp != (int32_T)muDoubleScalarFloor(c_tmp)) {
      emlrtIntegerCheckR2012b(c_tmp, &fb_emlrtDCI, &st);
    }
    if (((int32_T)c_tmp < 1) || ((int32_T)c_tmp > i)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)c_tmp, 1, i, &vb_emlrtBCI, &st);
    }
    nx = (int32_T)c_tmp;
  }
  b_physical_NSTATE[0] = 1;
  b_physical_NSTATE[1] = nx;
  b_st.site = &ub_emlrtRSI;
  indexShapeCheck(&b_st, (int32_T)(4.0 * c_tmp - 1.0) + 1, b_physical_NSTATE);
  emxInit_real_T(&st, &r, 1, &kb_emlrtRTEI);
  i = r->size[0];
  r->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r, i, &mb_emlrtRTEI);
  H_p_data = r->data;
  for (i = 0; i < nx; i++) {
    H_p_data[i] = phi_data[i];
  }
  b_dv[0] = physical_NSTATE;
  b_dv[1] = physical_NSTATE;
  b_st.site = &ub_emlrtRSI;
  c_st.site = &lc_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }
  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  i = (int32_T)physical_NSTATE * (int32_T)physical_NSTATE;
  if (i != nx) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b_st.site = &vb_emlrtRSI;
  b_st.site = &vb_emlrtRSI;
  a__1 = 2.0 * c_tmp;
  if (c_tmp + 1.0 > a__1) {
    num_tmp_idx_0_tmp = 0;
    b_num_tmp_idx_0_tmp = 0;
  } else {
    if (c_tmp + 1.0 != (int32_T)muDoubleScalarFloor(c_tmp + 1.0)) {
      emlrtIntegerCheckR2012b(c_tmp + 1.0, &gb_emlrtDCI, &st);
    }
    num_tmp_idx_0_tmp = (int32_T)(4.0 * c_tmp - 1.0) + 1;
    if (((int32_T)(c_tmp + 1.0) < 1) ||
        ((int32_T)(c_tmp + 1.0) > num_tmp_idx_0_tmp)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(c_tmp + 1.0), 1,
                                    num_tmp_idx_0_tmp, &wb_emlrtBCI, &st);
    }
    num_tmp_idx_0_tmp = (int32_T)(c_tmp + 1.0) - 1;
    if (a__1 != (int32_T)muDoubleScalarFloor(a__1)) {
      emlrtIntegerCheckR2012b(a__1, &hb_emlrtDCI, &st);
    }
    b_num_tmp_idx_0_tmp = (int32_T)(4.0 * c_tmp - 1.0) + 1;
    if (((int32_T)a__1 < 1) || ((int32_T)a__1 > b_num_tmp_idx_0_tmp)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)a__1, 1, b_num_tmp_idx_0_tmp,
                                    &xb_emlrtBCI, &st);
    }
    b_num_tmp_idx_0_tmp = (int32_T)a__1;
  }
  b_physical_NSTATE[0] = 1;
  nx = b_num_tmp_idx_0_tmp - num_tmp_idx_0_tmp;
  b_physical_NSTATE[1] = nx;
  b_st.site = &vb_emlrtRSI;
  indexShapeCheck(&b_st, (int32_T)(4.0 * c_tmp - 1.0) + 1, b_physical_NSTATE);
  emxInit_real_T(&st, &r1, 1, &kb_emlrtRTEI);
  b_num_tmp_idx_0_tmp = r1->size[0];
  r1->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r1, b_num_tmp_idx_0_tmp, &nb_emlrtRTEI);
  H_p_data = r1->data;
  for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < nx;
       b_num_tmp_idx_0_tmp++) {
    H_p_data[b_num_tmp_idx_0_tmp] =
        phi_data[num_tmp_idx_0_tmp + b_num_tmp_idx_0_tmp];
  }
  b_st.site = &vb_emlrtRSI;
  c_st.site = &lc_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }
  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if (i != nx) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b_st.site = &wb_emlrtRSI;
  b_st.site = &wb_emlrtRSI;
  dSdt = 3.0 * c_tmp;
  if (a__1 + 1.0 > dSdt) {
    num_tmp_idx_0_tmp = 0;
    b_num_tmp_idx_0_tmp = 0;
  } else {
    if (a__1 + 1.0 != (int32_T)muDoubleScalarFloor(a__1 + 1.0)) {
      emlrtIntegerCheckR2012b(a__1 + 1.0, &ib_emlrtDCI, &st);
    }
    num_tmp_idx_0_tmp = (int32_T)(4.0 * c_tmp - 1.0) + 1;
    if (((int32_T)(a__1 + 1.0) < 1) ||
        ((int32_T)(a__1 + 1.0) > num_tmp_idx_0_tmp)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(a__1 + 1.0), 1, num_tmp_idx_0_tmp,
                                    &yb_emlrtBCI, &st);
    }
    num_tmp_idx_0_tmp = (int32_T)(a__1 + 1.0) - 1;
    if (dSdt != (int32_T)muDoubleScalarFloor(dSdt)) {
      emlrtIntegerCheckR2012b(dSdt, &jb_emlrtDCI, &st);
    }
    b_num_tmp_idx_0_tmp = (int32_T)(4.0 * c_tmp - 1.0) + 1;
    if (((int32_T)dSdt < 1) || ((int32_T)dSdt > b_num_tmp_idx_0_tmp)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)dSdt, 1, b_num_tmp_idx_0_tmp,
                                    &ac_emlrtBCI, &st);
    }
    b_num_tmp_idx_0_tmp = (int32_T)dSdt;
  }
  b_physical_NSTATE[0] = 1;
  nx = b_num_tmp_idx_0_tmp - num_tmp_idx_0_tmp;
  b_physical_NSTATE[1] = nx;
  b_st.site = &wb_emlrtRSI;
  indexShapeCheck(&b_st, (int32_T)(4.0 * c_tmp - 1.0) + 1, b_physical_NSTATE);
  emxInit_real_T(&st, &r2, 1, &kb_emlrtRTEI);
  b_num_tmp_idx_0_tmp = r2->size[0];
  r2->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r2, b_num_tmp_idx_0_tmp, &ob_emlrtRTEI);
  H_p_data = r2->data;
  for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < nx;
       b_num_tmp_idx_0_tmp++) {
    H_p_data[b_num_tmp_idx_0_tmp] =
        phi_data[num_tmp_idx_0_tmp + b_num_tmp_idx_0_tmp];
  }
  b_st.site = &wb_emlrtRSI;
  c_st.site = &lc_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }
  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if (i != nx) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b_st.site = &xb_emlrtRSI;
  if (dSdt + 1.0 > (int32_T)(4.0 * c_tmp - 1.0) + 1) {
    num_tmp_idx_0_tmp = 0;
    nx = 0;
  } else {
    if (dSdt + 1.0 != (int32_T)muDoubleScalarFloor(dSdt + 1.0)) {
      emlrtIntegerCheckR2012b(dSdt + 1.0, &kb_emlrtDCI, &st);
    }
    num_tmp_idx_0_tmp = (int32_T)(4.0 * c_tmp - 1.0) + 1;
    if (((int32_T)(dSdt + 1.0) < 1) ||
        ((int32_T)(dSdt + 1.0) > num_tmp_idx_0_tmp)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(dSdt + 1.0), 1, num_tmp_idx_0_tmp,
                                    &bc_emlrtBCI, &st);
    }
    num_tmp_idx_0_tmp = (int32_T)(dSdt + 1.0) - 1;
    b_num_tmp_idx_0_tmp = (int32_T)(4.0 * c_tmp - 1.0) + 1;
    nx = (int32_T)(4.0 * (physical_NSTATE * physical_NSTATE) - 1.0) + 1;
    if ((nx < 1) || (nx > b_num_tmp_idx_0_tmp)) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, b_num_tmp_idx_0_tmp, &cc_emlrtBCI,
                                    &st);
    }
  }
  b_physical_NSTATE[0] = 1;
  nx -= num_tmp_idx_0_tmp;
  b_physical_NSTATE[1] = nx;
  b_st.site = &xb_emlrtRSI;
  indexShapeCheck(&b_st, (int32_T)(4.0 * c_tmp - 1.0) + 1, b_physical_NSTATE);
  emxInit_real_T(&st, &r3, 1, &kb_emlrtRTEI);
  b_num_tmp_idx_0_tmp = r3->size[0];
  r3->size[0] = nx;
  emxEnsureCapacity_real_T(&st, r3, b_num_tmp_idx_0_tmp, &pb_emlrtRTEI);
  H_p_data = r3->data;
  for (b_num_tmp_idx_0_tmp = 0; b_num_tmp_idx_0_tmp < nx;
       b_num_tmp_idx_0_tmp++) {
    H_p_data[b_num_tmp_idx_0_tmp] =
        phi_data[num_tmp_idx_0_tmp + b_num_tmp_idx_0_tmp];
  }
  b_st.site = &xb_emlrtRSI;
  c_st.site = &lc_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  n = nx;
  if (nx < 1) {
    n = 1;
  }
  if ((int32_T)physical_NSTATE > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  out = ((int32_T)physical_NSTATE >= 0);
  if ((!out) || ((int32_T)physical_NSTATE < 0)) {
    out = false;
  }
  if (!out) {
    emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI,
                                  "MATLAB:checkDimCommon:nonnegativeSize",
                                  "MATLAB:checkDimCommon:nonnegativeSize", 0);
  }
  if (i != nx) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  /*  Compute Hamiltonian derivatives */
  if (!(physical_NSTATE >= 0.0)) {
    emlrtNonNegativeCheckR2012b(physical_NSTATE, &w_emlrtDCI, &st);
  }
  i = (int32_T)muDoubleScalarFloor(physical_NSTATE);
  if (physical_NSTATE != i) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &x_emlrtDCI, &st);
  }
  num_tmp_idx_0_tmp = phi->size[0];
  phi->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, phi, num_tmp_idx_0_tmp, &qb_emlrtRTEI);
  phi_data = phi->data;
  if ((int32_T)physical_NSTATE != i) {
    emlrtIntegerCheckR2012b(physical_NSTATE, &x_emlrtDCI, &st);
  }
  nx = (int32_T)physical_NSTATE;
  for (i = 0; i < nx; i++) {
    phi_data[i] = 0.0;
  }
  emxInit_real_T(&st, &pd, 1, &rb_emlrtRTEI);
  i = pd->size[0];
  pd->size[0] = (int32_T)physical_NSTATE;
  emxEnsureCapacity_real_T(&st, pd, i, &rb_emlrtRTEI);
  pd_data = pd->data;
  nx = (int32_T)physical_NSTATE;
  for (i = 0; i < nx; i++) {
    pd_data[i] = 0.0;
  }
  emxInit_real_T(&st, &H_x, 1, &kb_emlrtRTEI);
  emxInit_real_T(&st, &H_p, 1, &kb_emlrtRTEI);
  b_st.site = &yb_emlrtRSI;
  HamiltonianFirstDerivatives(&b_st, x_data, loop_ub, p_data, b_loop_ub, SIGN,
                              physical_Tmax, physical_c, physical_NSTATE,
                              physical_shoot, physical_EPS, H_x, H_p);
  H_p_data = H_p->data;
  dUN_data = H_x->data;
  b_st.site = &ac_emlrtRSI;
  HamiltonianSecondDerivatives(&b_st, x_data, loop_ub, p_data, b_loop_ub, SIGN,
                               physical_Tmax, physical_c, physical_shoot,
                               physical_EPS, H_xx, H_xp, H_pp);
  /*  Compute inputs derivatives  */
  if (physical_NSTATE < 1.0) {
    nx = 0;
    i = 0;
  } else {
    if (physical_NSTATE > 5.0) {
      emlrtDynamicBoundsCheckR2012b((int32_T)physical_NSTATE, 1, 5,
                                    &dc_emlrtBCI, &st);
    }
    nx = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &ec_emlrtBCI,
                                    &st);
    }
    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  emlrtSubAssignSizeCheckR2012b(&i, 1, &nx, 1, &ab_emlrtECI, &st);
  for (i = 0; i < nx; i++) {
    phi_data[i] = H_p_data[i];
  }
  emxFree_real_T(&st, &H_p);
  if (physical_NSTATE < 1.0) {
    nx = 0;
    i = 0;
  } else {
    nx = (int32_T)physical_NSTATE;
    if (((int32_T)(real32_T)physical_NSTATE < 1) ||
        ((int32_T)(real32_T)physical_NSTATE > (int32_T)physical_NSTATE)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(real32_T)physical_NSTATE, 1,
                                    (int32_T)physical_NSTATE, &fc_emlrtBCI,
                                    &st);
    }
    i = (int32_T)(real32_T)(int32_T)(real32_T)physical_NSTATE;
  }
  for (num_tmp_idx_0_tmp = 0; num_tmp_idx_0_tmp < nx; num_tmp_idx_0_tmp++) {
    tmp_data[num_tmp_idx_0_tmp] = -dUN_data[num_tmp_idx_0_tmp];
  }
  emxFree_real_T(&st, &H_x);
  emlrtSubAssignSizeCheckR2012b(&i, 1, &nx, 1, &bb_emlrtECI, &st);
  for (i = 0; i < nx; i++) {
    pd_data[i] = tmp_data[i];
  }
  b_st.site = &bc_emlrtRSI;
  r4 = *r;
  c_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  c_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &c_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &mg_emlrtRSI;
  dynamic_size_checks(&c_st, &r4, (int32_T)physical_NSTATE);
  r4 = *r;
  d_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  d_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &d_physical_NSTATE[0];
  r4.numDimensions = 2;
  emxInit_real_T(&b_st, &dUN, 2, &sb_emlrtRTEI);
  c_st.site = &lg_emlrtRSI;
  mtimes(&c_st, H_xp, &r4, dUN);
  b_st.site = &bc_emlrtRSI;
  r4 = *r1;
  e_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  e_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &e_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &mg_emlrtRSI;
  dynamic_size_checks(&c_st, &r4, (int32_T)physical_NSTATE);
  r4 = *r1;
  f_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  f_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &f_physical_NSTATE[0];
  r4.numDimensions = 2;
  emxInit_real_T(&b_st, &r5, 2, &kb_emlrtRTEI);
  c_st.site = &lg_emlrtRSI;
  b_mtimes(&c_st, H_pp, &r4, r5);
  H_p_data = r5->data;
  if ((dUN->size[1] != r5->size[1]) &&
      ((dUN->size[1] != 1) && (r5->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(dUN->size[1], r5->size[1], &v_emlrtECI, &st);
  }
  if (dUN->size[1] == r5->size[1]) {
    nx = 5 * dUN->size[1];
    i = dUN->size[0] * dUN->size[1];
    dUN->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dUN, i, &sb_emlrtRTEI);
    dUN_data = dUN->data;
    for (i = 0; i < nx; i++) {
      dUN_data[i] += H_p_data[i];
    }
  } else {
    b_st.site = &bc_emlrtRSI;
    plus(&b_st, dUN, r5);
    dUN_data = dUN->data;
  }
  b_st.site = &cc_emlrtRSI;
  for (i = 0; i < 25; i++) {
    H_xx[i] = -H_xx[i];
  }
  r4 = *r;
  g_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  g_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &g_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &mg_emlrtRSI;
  dynamic_size_checks(&c_st, &r4, (int32_T)physical_NSTATE);
  r4 = *r;
  h_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  h_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &h_physical_NSTATE[0];
  r4.numDimensions = 2;
  emxInit_real_T(&b_st, &dVN, 2, &tb_emlrtRTEI);
  c_st.site = &lg_emlrtRSI;
  b_mtimes(&c_st, H_xx, &r4, dVN);
  b_st.site = &cc_emlrtRSI;
  r4 = *r1;
  i_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  i_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &i_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &mg_emlrtRSI;
  dynamic_size_checks(&c_st, &r4, (int32_T)physical_NSTATE);
  r4 = *r1;
  j_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  j_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &j_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &lg_emlrtRSI;
  b_mtimes(&c_st, H_xp, &r4, r5);
  H_p_data = r5->data;
  emxFree_real_T(&b_st, &r1);
  if ((dVN->size[1] != r5->size[1]) &&
      ((dVN->size[1] != 1) && (r5->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(dVN->size[1], r5->size[1], &w_emlrtECI, &st);
  }
  if (dVN->size[1] == r5->size[1]) {
    nx = 5 * dVN->size[1];
    i = dVN->size[0] * dVN->size[1];
    dVN->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dVN, i, &tb_emlrtRTEI);
    dVN_data = dVN->data;
    for (i = 0; i < nx; i++) {
      dVN_data[i] -= H_p_data[i];
    }
  } else {
    b_st.site = &cc_emlrtRSI;
    minus(&b_st, dVN, r5);
    dVN_data = dVN->data;
  }
  b_st.site = &dc_emlrtRSI;
  b_dv[0] = c_tmp;
  b_dv[1] = 1.0;
  b_st.site = &dc_emlrtRSI;
  nx = 5 * dUN->size[1];
  c_st.site = &lc_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  c_num_tmp_idx_0_tmp = (int32_T)c_tmp;
  n = 5;
  if (dUN->size[1] > 5) {
    n = dUN->size[1];
  }
  if ((int8_T)(int32_T)c_tmp > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int8_T)c_tmp != nx) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b_st.site = &ec_emlrtRSI;
  b_dv[0] = c_tmp;
  b_dv[1] = 1.0;
  b_st.site = &ec_emlrtRSI;
  nx = 5 * dVN->size[1];
  c_st.site = &lc_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  d_num_tmp_idx_0_tmp = (int32_T)c_tmp;
  n = 5;
  if (dVN->size[1] > 5) {
    n = dVN->size[1];
  }
  if ((int8_T)(int32_T)c_tmp > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int8_T)c_tmp != nx) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b_st.site = &fc_emlrtRSI;
  r4 = *r2;
  k_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  k_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &k_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &mg_emlrtRSI;
  dynamic_size_checks(&c_st, &r4, (int32_T)physical_NSTATE);
  r4 = *r2;
  l_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  l_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &l_physical_NSTATE[0];
  r4.numDimensions = 2;
  emxInit_real_T(&b_st, &dUn, 2, &ub_emlrtRTEI);
  c_st.site = &lg_emlrtRSI;
  mtimes(&c_st, H_xp, &r4, dUn);
  b_st.site = &fc_emlrtRSI;
  r4 = *r3;
  m_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  m_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &m_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &mg_emlrtRSI;
  dynamic_size_checks(&c_st, &r4, (int32_T)physical_NSTATE);
  r4 = *r3;
  n_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  n_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &n_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &lg_emlrtRSI;
  b_mtimes(&c_st, H_pp, &r4, r5);
  H_p_data = r5->data;
  if ((dUn->size[1] != r5->size[1]) &&
      ((dUn->size[1] != 1) && (r5->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(dUn->size[1], r5->size[1], &x_emlrtECI, &st);
  }
  if (dUn->size[1] == r5->size[1]) {
    nx = 5 * dUn->size[1];
    i = dUn->size[0] * dUn->size[1];
    dUn->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dUn, i, &ub_emlrtRTEI);
    dUn_data = dUn->data;
    for (i = 0; i < nx; i++) {
      dUn_data[i] += H_p_data[i];
    }
  } else {
    b_st.site = &fc_emlrtRSI;
    plus(&b_st, dUn, r5);
    dUn_data = dUn->data;
  }
  b_st.site = &gc_emlrtRSI;
  r4 = *r2;
  o_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  o_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &o_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &mg_emlrtRSI;
  dynamic_size_checks(&c_st, &r4, (int32_T)physical_NSTATE);
  r4 = *r2;
  p_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  p_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &p_physical_NSTATE[0];
  r4.numDimensions = 2;
  emxInit_real_T(&b_st, &dVn, 2, &vb_emlrtRTEI);
  c_st.site = &lg_emlrtRSI;
  b_mtimes(&c_st, H_xx, &r4, dVn);
  emxFree_real_T(&b_st, &r2);
  b_st.site = &gc_emlrtRSI;
  r4 = *r3;
  q_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  q_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &q_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &mg_emlrtRSI;
  dynamic_size_checks(&c_st, &r4, (int32_T)physical_NSTATE);
  r4 = *r3;
  r_physical_NSTATE[0] = (int32_T)physical_NSTATE;
  r_physical_NSTATE[1] = (int32_T)physical_NSTATE;
  r4.size = &r_physical_NSTATE[0];
  r4.numDimensions = 2;
  c_st.site = &lg_emlrtRSI;
  b_mtimes(&c_st, H_xp, &r4, r5);
  H_p_data = r5->data;
  emxFree_real_T(&b_st, &r3);
  if ((dVn->size[1] != r5->size[1]) &&
      ((dVn->size[1] != 1) && (r5->size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(dVn->size[1], r5->size[1], &y_emlrtECI, &st);
  }
  if (dVn->size[1] == r5->size[1]) {
    nx = 5 * dVn->size[1];
    i = dVn->size[0] * dVn->size[1];
    dVn->size[0] = 5;
    emxEnsureCapacity_real_T(&st, dVn, i, &vb_emlrtRTEI);
    dVn_data = dVn->data;
    for (i = 0; i < nx; i++) {
      dVn_data[i] -= H_p_data[i];
    }
  } else {
    b_st.site = &gc_emlrtRSI;
    minus(&b_st, dVn, r5);
    dVn_data = dVn->data;
  }
  emxFree_real_T(&st, &r5);
  b_st.site = &hc_emlrtRSI;
  b_dv[0] = c_tmp;
  b_dv[1] = 1.0;
  b_st.site = &hc_emlrtRSI;
  nx = 5 * dUn->size[1];
  c_st.site = &lc_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  b_num_tmp_idx_0_tmp = (int32_T)c_tmp;
  n = 5;
  if (dUn->size[1] > 5) {
    n = dUn->size[1];
  }
  if ((int8_T)(int32_T)c_tmp > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int8_T)c_tmp != nx) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b_st.site = &ic_emlrtRSI;
  b_dv[0] = c_tmp;
  b_dv[1] = 1.0;
  b_st.site = &ic_emlrtRSI;
  nx = 5 * dVn->size[1];
  c_st.site = &lc_emlrtRSI;
  assertValidSizeArg(&c_st, b_dv);
  num_tmp_idx_0_tmp = (int32_T)c_tmp;
  n = 5;
  if (dVn->size[1] > 5) {
    n = dVn->size[1];
  }
  if ((int8_T)(int32_T)c_tmp > muIntScalarMax_sint32(nx, n)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
                                  "Coder:toolbox:reshape_emptyReshapeLimit",
                                  "Coder:toolbox:reshape_emptyReshapeLimit", 0);
  }
  if ((int8_T)c_tmp != nx) {
    emlrtErrorWithMessageIdR2018a(
        &b_st, &c_emlrtRTEI, "Coder:MATLAB:getReshapeDims_notSameNumel",
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }
  b_st.site = &jc_emlrtRSI;
  b_Switching_Function(&b_st, x_data, loop_ub, p_data, b_loop_ub, physical_Tmax,
                       physical_c, physical_NSTATE, physical_shoot,
                       physical_EPS, &a__1, &dSdt);
  /*  Assembly of output vector */
  loop_ub = (int32_T)((2.0 * physical_NSTATE + 1.0) + 4.0 * c_tmp);
  if (loop_ub < 1) {
    loop_ub = 0;
  }
  i = r->size[0];
  r->size[0] =
      (((((phi->size[0] + pd->size[0]) + (int32_T)c_tmp) + (int32_T)c_tmp) +
        (int32_T)c_tmp) +
       (int32_T)c_tmp) +
      1;
  emxEnsureCapacity_real_T(&st, r, i, &wb_emlrtRTEI);
  H_p_data = r->data;
  b_loop_ub = phi->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    H_p_data[i] = phi_data[i];
  }
  b_loop_ub = pd->size[0];
  for (i = 0; i < b_loop_ub; i++) {
    H_p_data[i + phi->size[0]] = pd_data[i];
  }
  for (i = 0; i < c_num_tmp_idx_0_tmp; i++) {
    H_p_data[(i + phi->size[0]) + pd->size[0]] = dUN_data[i];
  }
  emxFree_real_T(&st, &dUN);
  for (i = 0; i < d_num_tmp_idx_0_tmp; i++) {
    H_p_data[((i + phi->size[0]) + pd->size[0]) + (int32_T)c_tmp] = dVN_data[i];
  }
  emxFree_real_T(&st, &dVN);
  for (i = 0; i < b_num_tmp_idx_0_tmp; i++) {
    H_p_data[(((i + phi->size[0]) + pd->size[0]) + (int32_T)c_tmp) +
             (int32_T)c_tmp] = dUn_data[i];
  }
  emxFree_real_T(&st, &dUn);
  for (i = 0; i < num_tmp_idx_0_tmp; i++) {
    H_p_data[((((i + phi->size[0]) + pd->size[0]) + (int32_T)c_tmp) +
              (int32_T)c_tmp) +
             (int32_T)c_tmp] = dVn_data[i];
  }
  emxFree_real_T(&st, &dVn);
  H_p_data[((((phi->size[0] + pd->size[0]) + (int32_T)c_tmp) + (int32_T)c_tmp) +
            (int32_T)c_tmp) +
           (int32_T)c_tmp] = dSdt;
  emxFree_real_T(&st, &pd);
  emxFree_real_T(&st, &phi);
  if (loop_ub != r->size[0]) {
    emlrtSubAssignSizeCheck1dR2017a(loop_ub, r->size[0], &cb_emlrtECI, &st);
  }
  for (i = 0; i < loop_ub; i++) {
    varargout_1_data[i] = H_p_data[i];
  }
  emxFree_real_T(&st, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (objfun_suff.c) */
