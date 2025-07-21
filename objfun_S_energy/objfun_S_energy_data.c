/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * objfun_S_energy_data.c
 *
 * Code generation for function 'objfun_S_energy_data'
 *
 */

/* Include files */
#include "objfun_S_energy_data.h"
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
    "objfun_S_energy",                                    /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo f_emlrtRSI =
    {
        71,      /* lineNo */
        "power", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName
                                                                          */
};

emlrtRSInfo t_emlrtRSI = {
    63,                               /* lineNo */
    "function_handle/parenReference", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\function_"
    "handle.m" /* pathName */
};

emlrtRSInfo u_emlrtRSI = {
    89, /* lineNo */
    "@(t,y)callODEFunctionNSM(ODEFunction,t,y,options,varargin{:})", /* fcnName
                                                                      */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\explici"
    "tRungeKutta.m" /* pathName */
};

emlrtRSInfo v_emlrtRSI = {
    11,                   /* lineNo */
    "callODEFunctionNSM", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\callODE"
    "FunctionNSM.m" /* pathName */
};

emlrtRSInfo rc_emlrtRSI = {
    64,                                                          /* lineNo */
    "@(t,s)stopfuel(t,s)",                                       /* fcnName */
    "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m" /* pathName */
};

emlrtRTEInfo emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                       */
};

emlrtRTEInfo b_emlrtRTEI =
    {
        82,         /* lineNo */
        5,          /* colNo */
        "fltpower", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pName
                                                                          */
};

emlrtRTEInfo s_emlrtRTEI = {
    14,                  /* lineNo */
    9,                   /* colNo */
    "appendZeroColumns", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\funfun\\private\\appendZ"
    "eroColumns.m" /* pName */
};

const real_T dv[14] = {
    -32.147047729128992, -5.3955512686625244, -383.89408306825595,
    72.05311579106953,   -104.27357901970106, -513.80983041316631,
    -275.93222128510257, -539.52398055397464, -138.46134705961285,
    193.81369700003981,  1085.9173811753094,  493.85555190375771,
    -488.92603202226388, 636.72392654969224};

const real_T dv1[14] = {
    151.95042488515421,  24.434613891115724,  1734.4328663747124,
    -334.87518257678943, 461.93871778719159,  2327.6482614562428,
    1251.1326318309245,  2447.3653500866567,  628.2905498131297,
    -841.35803757610779, -4164.4324574681059, -2417.5631703814524,
    1524.4331339911969,  -2793.3977021138694};

const real_T dv2[14] = {
    -299.51103170165538, -45.39036357573746,  -3211.322751886536,
    644.280520604847,    -831.471689354838,   -4325.9161491924906,
    -2328.0991205857131, -4556.7690501793295, -1170.3576696386438,
    1505.7234531151748,  6291.6458318775594,  4810.8679804449812,
    -1470.5008449627007, 4986.820885035082};

const real_T dv3[14] = {
    317.73924400589175,  44.168956092815563,  3109.7406407590311,
    -658.71105350578171, 770.99372724733769,  4212.3958002154923,
    2271.1215335552592,  4449.1432316271021,  1143.4836374440097,
    -1419.3459915439014, -4706.7855554044454, -4973.9945835413719,
    52.8905216646184,    -4612.8401086160557};

const real_T dv4[14] = {
    -194.80866105296525, -23.654171833483552, -1652.4971812128811,
    379.7566858308295,   -380.52125191333255, -2258.3514339668986,
    -1221.0896373201583, -2395.4252530528292, -616.3040486605513,
    741.13805869267912,  1781.1588155601307,  2811.2877107277009,
    716.59668699058045,  2312.7136812111785};

const real_T dv5[14] = {
    68.544701138311623,  6.5591194520909966,  451.82800481387454,
    -118.70005449434305, 89.447041137159417,  627.44028835681524,
    340.98943797822335,  670.55517565639661,  172.84424194045155,
    -202.22394933405374, -301.88629212849133, -819.38105212649634,
    -398.47103694661422, -587.54562544332475};

const real_T dv6[14] = {
    -12.753040692823889, -0.72057856025085987, -48.069691071487554,
    16.323457884253532,  -5.888504109270885,   -69.228211006868563,
    -38.046680725851893, -75.215988996101871,  -19.465886391170532,
    22.252769646169018,  14.38227638804284,    94.927562972880509,
    63.977571285183132,  57.524943377297021};

/* End of code generation (objfun_S_energy_data.c) */
