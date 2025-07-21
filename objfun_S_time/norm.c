/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "norm.h"
#include "objfun_S_time.h"
#include "objfun_S_time_types.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Function Definitions */
real_T b_norm(const emxArray_real_T *x)
{
  const real_T *x_data;
  real_T y;
  int32_T k;
  x_data = x->data;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    int32_T i;
    y = 0.0;
    i = x->size[0];
    for (k = 0; k < i; k++) {
      real_T absx;
      absx = muDoubleScalarAbs(x_data[k]);
      if (muDoubleScalarIsNaN(absx) || (absx > y)) {
        y = absx;
      }
    }
  }
  return y;
}

real_T c_norm(const emxArray_real_T *x)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  const real_T *x_data;
  real_T y;
  x_data = x->data;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)x->size[0];
    incx_t = (ptrdiff_t)1;
    emlrt_checkEscapedGlobals();
    y = dnrm2(&n_t, (real_T *)&x_data[0], &incx_t);
  }
  return y;
}

/* End of code generation (norm.c) */
