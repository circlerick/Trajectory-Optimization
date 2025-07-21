/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ntrp89.h
 *
 * Code generation for function 'ntrp89'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void ntrp89(const real_T tinterp[13], real_T t, const real_T y[111], real_T h,
            const real_T f[1554], real_T yinterp[1443], real_T ypinterp[1443]);

void yinterpWSS(real_T theta, const real_T f[1554], const real_T BI2[14],
                const real_T BI3[14], const real_T BI4[14],
                const real_T BI5[14], const real_T BI6[14],
                const real_T BI7[14], const real_T BI8[14], real_T sp[111]);

/* End of code generation (ntrp89.h) */
