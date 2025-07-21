/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * mtimes.c
 *
 * Code generation for function 'mtimes'
 *
 */

/* Include files */
#include "mtimes.h"
#include "objfunSTM_S_time.h"
#include "objfunSTM_S_time_emxutil.h"
#include "objfunSTM_S_time_types.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo ng_emlrtRSI = {
    142,      /* lineNo */
    "mtimes", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pathName */
};

static emlrtRSInfo og_emlrtRSI = {
    178,           /* lineNo */
    "mtimes_blas", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pathName */
};

static emlrtRTEInfo xd_emlrtRTEI = {
    140,      /* lineNo */
    5,        /* colNo */
    "mtimes", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = {
    218,      /* lineNo */
    20,       /* colNo */
    "mtimes", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pName */
};

/* Function Definitions */
void b_mtimes(const emlrtStack *sp, const emxArray_real_T *A,
              const real_T B[14], emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  const real_T *A_data;
  real_T alpha1;
  real_T beta1;
  real_T *C_data;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  A_data = A->data;
  st.site = &ng_emlrtRSI;
  b_st.site = &og_emlrtRSI;
  TRANSB1 = 'N';
  TRANSA1 = 'N';
  alpha1 = 1.0;
  beta1 = 0.0;
  m_t = (ptrdiff_t)A->size[0];
  n_t = (ptrdiff_t)1;
  k_t = (ptrdiff_t)14;
  lda_t = (ptrdiff_t)A->size[0];
  ldb_t = (ptrdiff_t)14;
  ldc_t = (ptrdiff_t)A->size[0];
  i = C->size[0];
  C->size[0] = A->size[0];
  emxEnsureCapacity_real_T(&b_st, C, i, &yd_emlrtRTEI);
  C_data = C->data;
  emlrt_checkEscapedGlobals();
  dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A_data[0],
        &lda_t, (real_T *)&B[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
}

void c_mtimes(const emlrtStack *sp, const emxArray_real_T *A,
              const emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  const real_T *A_data;
  const real_T *B_data;
  real_T alpha1;
  real_T beta1;
  real_T *C_data;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B_data = B->data;
  A_data = A->data;
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0) ||
      (B->size[1] == 0)) {
    int32_T loop_ub;
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &xd_emlrtRTEI);
    C_data = C->data;
    loop_ub = A->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C_data[i] = 0.0;
    }
  } else {
    st.site = &ng_emlrtRSI;
    b_st.site = &og_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)A->size[0];
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)A->size[1];
    lda_t = (ptrdiff_t)A->size[0];
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)A->size[0];
    i = C->size[0] * C->size[1];
    C->size[0] = A->size[0];
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&b_st, C, i, &yd_emlrtRTEI);
    C_data = C->data;
    emlrt_checkEscapedGlobals();
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A_data[0],
          &lda_t, (real_T *)&B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void d_mtimes(const emlrtStack *sp, const real_T A[20],
              const emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  const real_T *B_data;
  real_T alpha1;
  real_T beta1;
  real_T *C_data;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B_data = B->data;
  if ((B->size[0] == 0) || (B->size[1] == 0)) {
    int32_T loop_ub;
    i = C->size[0] * C->size[1];
    C->size[0] = 4;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &xd_emlrtRTEI);
    C_data = C->data;
    loop_ub = B->size[1] << 2;
    for (i = 0; i < loop_ub; i++) {
      C_data[i] = 0.0;
    }
  } else {
    st.site = &ng_emlrtRSI;
    b_st.site = &og_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)4;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)5;
    lda_t = (ptrdiff_t)5;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)4;
    i = C->size[0] * C->size[1];
    C->size[0] = 4;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&b_st, C, i, &yd_emlrtRTEI);
    C_data = C->data;
    emlrt_checkEscapedGlobals();
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A[0],
          &lda_t, (real_T *)&B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void e_mtimes(const emlrtStack *sp, const real_T A[5], const emxArray_real_T *B,
              emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  const real_T *B_data;
  real_T alpha1;
  real_T beta1;
  real_T *C_data;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B_data = B->data;
  if ((B->size[0] == 0) || (B->size[1] == 0)) {
    int32_T loop_ub;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &xd_emlrtRTEI);
    C_data = C->data;
    loop_ub = B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C_data[i] = 0.0;
    }
  } else {
    st.site = &ng_emlrtRSI;
    b_st.site = &og_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)5;
    lda_t = (ptrdiff_t)5;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)1;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&b_st, C, i, &yd_emlrtRTEI);
    C_data = C->data;
    emlrt_checkEscapedGlobals();
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A[0],
          &lda_t, (real_T *)&B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void f_mtimes(const emlrtStack *sp, const real_T A_data[],
              const emxArray_real_T *B, emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  const real_T *B_data;
  real_T alpha1;
  real_T beta1;
  real_T *C_data;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B_data = B->data;
  if ((B->size[0] == 0) || (B->size[1] == 0)) {
    int32_T loop_ub;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &xd_emlrtRTEI);
    C_data = C->data;
    loop_ub = B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C_data[i] = 0.0;
    }
  } else {
    st.site = &ng_emlrtRSI;
    b_st.site = &og_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'T';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)1;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)5;
    lda_t = (ptrdiff_t)5;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)1;
    i = C->size[0] * C->size[1];
    C->size[0] = 1;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&b_st, C, i, &yd_emlrtRTEI);
    C_data = C->data;
    emlrt_checkEscapedGlobals();
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A_data[0],
          &lda_t, (real_T *)&B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

void mtimes(const emlrtStack *sp, const real_T A[100], const emxArray_real_T *B,
            emxArray_real_T *C)
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  const real_T *B_data;
  real_T alpha1;
  real_T beta1;
  real_T *C_data;
  int32_T i;
  char_T TRANSA1;
  char_T TRANSB1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  B_data = B->data;
  if ((B->size[0] == 0) || (B->size[1] == 0)) {
    int32_T loop_ub;
    i = C->size[0] * C->size[1];
    C->size[0] = 10;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(sp, C, i, &xd_emlrtRTEI);
    C_data = C->data;
    loop_ub = 10 * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      C_data[i] = 0.0;
    }
  } else {
    st.site = &ng_emlrtRSI;
    b_st.site = &og_emlrtRSI;
    TRANSB1 = 'N';
    TRANSA1 = 'N';
    alpha1 = 1.0;
    beta1 = 0.0;
    m_t = (ptrdiff_t)10;
    n_t = (ptrdiff_t)B->size[1];
    k_t = (ptrdiff_t)10;
    lda_t = (ptrdiff_t)10;
    ldb_t = (ptrdiff_t)B->size[0];
    ldc_t = (ptrdiff_t)10;
    i = C->size[0] * C->size[1];
    C->size[0] = 10;
    C->size[1] = B->size[1];
    emxEnsureCapacity_real_T(&b_st, C, i, &yd_emlrtRTEI);
    C_data = C->data;
    emlrt_checkEscapedGlobals();
    dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &alpha1, (real_T *)&A[0],
          &lda_t, (real_T *)&B_data[0], &ldb_t, &beta1, &C_data[0], &ldc_t);
  }
}

/* End of code generation (mtimes.c) */
