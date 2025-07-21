/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.h
 *
 * Code generation for function 'mtimes'
 *
 */

#pragma once

/* Include files */
#include "objfun_suff_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_mtimes(const emlrtStack *sp, const real_T A[25],
              const emxArray_real_T *B, emxArray_real_T *C);

void c_mtimes(const real_T A[1554], const real_T B[14], real_T C[111]);

void d_mtimes(const emlrtStack *sp, const emxArray_real_T *A,
              const emxArray_real_T *B, emxArray_real_T *C);

void mtimes(const emlrtStack *sp, const real_T A[25], const emxArray_real_T *B,
            emxArray_real_T *C);

/* End of code generation (mtimes.h) */
