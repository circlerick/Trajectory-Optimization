/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfunSTM_S_time_data.c
 *
 * Code generation for function 'objfunSTM_S_time_data'
 *
 */

/* Include files */
#include "objfunSTM_S_time_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

struct0_T physical;

uint32_T physical_dirty;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131627U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "objfunSTM_S_time",                                   /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo ib_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" /* pathName */
};

emlrtRSInfo jb_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                          */
};

emlrtRSInfo kb_emlrtRSI =
    {
        71,      /* lineNo */
        "power", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName
                                                                          */
};

emlrtRSInfo mb_emlrtRSI = {
    18,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

emlrtRSInfo nb_emlrtRSI = {
    12,                                                /* lineNo */
    "S_fun",                                           /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\S_fun.m" /* pathName */
};

emlrtRSInfo jc_emlrtRSI = {
    63,                               /* lineNo */
    "function_handle/parenReference", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\function_"
    "handle.m" /* pathName */
};

emlrtRSInfo lg_emlrtRSI =
    {
        94,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

emlrtRSInfo pg_emlrtRSI = {
    39,                                                           /* lineNo */
    "@(t,s)stopfunc(t,s)",                                        /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

emlrtRSInfo ei_emlrtRSI = {
    30,       /* lineNo */
    "ntrp89", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ntrp89."
    "m" /* pathName */
};

emlrtRSInfo fi_emlrtRSI = {
    77,           /* lineNo */
    "yinterpWSS", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ntrp89."
    "m" /* pathName */
};

emlrtRSInfo gi_emlrtRSI = {
    15,                  /* lineNo */
    "appendZeroColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\appendZ"
    "eroColumns.m" /* pathName */
};

emlrtRSInfo hi_emlrtRSI = {
    16,                  /* lineNo */
    "appendZeroColumns", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\appendZ"
    "eroColumns.m" /* pathName */
};

emlrtRSInfo li_emlrtRSI = {
    38,    /* lineNo */
    "cat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

emlrtRSInfo mi_emlrtRSI = {
    110,        /* lineNo */
    "cat_impl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

emlrtRSInfo wi_emlrtRSI = {
    22,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

emlrtRSInfo xi_emlrtRSI = {
    23,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

emlrtRSInfo yi_emlrtRSI = {
    24,                   /* lineNo */
    "Switching_Function", /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\Switching_Function.m" /* pathName
                                                                     */
};

emlrtRSInfo aj_emlrtRSI = {
    78,                                                           /* lineNo */
    "@(t,s)stopfuel(t,s)",                                        /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfunSTM_S_time.m" /* pathName */
};

emlrtRTEInfo emlrtRTEI = {
    285,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

emlrtRTEInfo e_emlrtRTEI = {
    64,                   /* lineNo */
    15,                   /* colNo */
    "assertValidSizeArg", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\assertValidSizeArg.m" /* pName */
};

emlrtRTEInfo h_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                       */
};

emlrtRTEInfo m_emlrtRTEI =
    {
        82,         /* lineNo */
        5,          /* colNo */
        "fltpower", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pName
                                                                          */
};

emlrtRTEInfo n_emlrtRTEI =
    {
        133,                   /* lineNo */
        23,                    /* colNo */
        "dynamic_size_checks", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

emlrtRTEInfo o_emlrtRTEI =
    {
        138,                   /* lineNo */
        23,                    /* colNo */
        "dynamic_size_checks", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

emlrtRTEInfo sc_emlrtRTEI = {
    52,    /* lineNo */
    9,     /* colNo */
    "div", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pName
                                                                          */
};

emlrtRTEInfo bd_emlrtRTEI = {
    14,                  /* lineNo */
    9,                   /* colNo */
    "appendZeroColumns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\appendZ"
    "eroColumns.m" /* pName */
};

emlrtRTEInfo ge_emlrtRTEI = {
    30,       /* lineNo */
    37,       /* colNo */
    "ntrp89", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\ntrp89."
    "m" /* pName */
};

emlrtRTEInfo xe_emlrtRTEI = {
    1450,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo ye_emlrtRTEI = {
    1453,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo af_emlrtRTEI = {
    1458,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo bf_emlrtRTEI = {
    1463,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo cf_emlrtRTEI = {
    1469,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo df_emlrtRTEI = {
    1475,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo ef_emlrtRTEI = {
    1482,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo ff_emlrtRTEI = {
    1488,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo gf_emlrtRTEI = {
    1495,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo hf_emlrtRTEI = {
    1503,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo if_emlrtRTEI = {
    1512,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo jf_emlrtRTEI = {
    1522,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo kf_emlrtRTEI = {
    1533,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo lf_emlrtRTEI = {
    1545,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo nf_emlrtRTEI = {
    1573,                 /* lineNo */
    14,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo sf_emlrtRTEI = {
    1250,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo tf_emlrtRTEI = {
    1262,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo uf_emlrtRTEI = {
    1275,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo vf_emlrtRTEI = {
    1289,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo wf_emlrtRTEI = {
    1304,                 /* lineNo */
    10,                   /* colNo */
    "explicitRungeKutta", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pName */
};

emlrtRTEInfo xf_emlrtRTEI = {
    63,                /* lineNo */
    38,                /* colNo */
    "function_handle", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\function_"
    "handle.m" /* pName */
};

const real_T dv1[14] = {
    -32.147047729128992, -5.3955512686625244, -383.89408306825595,
    72.05311579106953,   -104.27357901970106, -513.80983041316631,
    -275.93222128510257, -539.52398055397464, -138.46134705961285,
    193.81369700003981,  1085.9173811753094,  493.85555190375771,
    -488.92603202226388, 636.72392654969224};

const real_T dv2[14] = {
    151.95042488515421,  24.434613891115724,  1734.4328663747124,
    -334.87518257678943, 461.93871778719159,  2327.6482614562428,
    1251.1326318309245,  2447.3653500866567,  628.2905498131297,
    -841.35803757610779, -4164.4324574681059, -2417.5631703814524,
    1524.4331339911969,  -2793.3977021138694};

const real_T dv3[14] = {
    -299.51103170165538, -45.39036357573746,  -3211.322751886536,
    644.280520604847,    -831.471689354838,   -4325.9161491924906,
    -2328.0991205857131, -4556.7690501793295, -1170.3576696386438,
    1505.7234531151748,  6291.6458318775594,  4810.8679804449812,
    -1470.5008449627007, 4986.820885035082};

const real_T dv4[14] = {
    317.73924400589175,  44.168956092815563,  3109.7406407590311,
    -658.71105350578171, 770.99372724733769,  4212.3958002154923,
    2271.1215335552592,  4449.1432316271021,  1143.4836374440097,
    -1419.3459915439014, -4706.7855554044454, -4973.9945835413719,
    52.8905216646184,    -4612.8401086160557};

const real_T dv5[14] = {
    -194.80866105296525, -23.654171833483552, -1652.4971812128811,
    379.7566858308295,   -380.52125191333255, -2258.3514339668986,
    -1221.0896373201583, -2395.4252530528292, -616.3040486605513,
    741.13805869267912,  1781.1588155601307,  2811.2877107277009,
    716.59668699058045,  2312.7136812111785};

const real_T dv6[14] = {
    68.544701138311623,  6.5591194520909966,  451.82800481387454,
    -118.70005449434305, 89.447041137159417,  627.44028835681524,
    340.98943797822335,  670.55517565639661,  172.84424194045155,
    -202.22394933405374, -301.88629212849133, -819.38105212649634,
    -398.47103694661422, -587.54562544332475};

const real_T dv7[14] = {
    -12.753040692823889, -0.72057856025085987, -48.069691071487554,
    16.323457884253532,  -5.888504109270885,   -69.228211006868563,
    -38.046680725851893, -75.215988996101871,  -19.465886391170532,
    22.252769646169018,  14.38227638804284,    94.927562972880509,
    63.977571285183132,  57.524943377297021};

/* End of code generation (objfunSTM_S_time_data.c) */
