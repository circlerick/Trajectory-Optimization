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
void ntrp89(const real_T tinterp[13], real_T t, const real_T y[11], real_T h,
            const real_T f[154], real_T yinterp[143], real_T ypinterp[143]);

/* End of code generation (ntrp89.h) */
