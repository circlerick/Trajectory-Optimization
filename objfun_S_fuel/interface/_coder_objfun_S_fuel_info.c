/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfun_S_fuel_info.c
 *
 * Code generation for function 'objfun_S_fuel'
 *
 */

/* Include files */
#include "_coder_objfun_S_fuel_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[10] = {
      "789ced5bcb6edb46141d1549ea4d5b21688302458174d55d6abbb620b5dd38a268c99165"
      "a7f4437214281439122992439a0f49f6ca4080a2ab36cbac0a2dbb6b"
      "8002f9807e459014fd812efa035db414494b6430161d0ab449cddd8c47c7c373348339ba"
      "97980199ca760600f02170e26cd7693f70fb59b77d0ff8238867dcf6",
      "a340df8b9be0866f9c87ffecb69c8a4c38349d0e6215783e92571511b1c8dc3bd120d0a1"
      "a1ca7dc88f918e28c33d5181cc74a766f7147a0a3aefd890fd775180"
      "9cc4580ad00563a2509eee9ccfc773ccf7bd11723e7298f9c806f047a5c7a56f9afb06d4"
      "8da62e721cdba4a02199aad6e4541e7621ba6bb74db5ddeb58a8c5b4",
      "3a1694ef29139dc3883a6fcfd0e9e1cc4034394144dd166d21ce1455e47ceee9781251c7"
      "2dac0e07314cdde2cc09df2822dfb7583e3f1e727dde9e1e7b91c0ec"
      "f9f1f6cd2cbdc176f2ff4be3f6f3bf5e67e2e403bf3fe263e573e3aaf8a2eeb33b18be6c"
      "007fb00ea57df9f8147d7f985fd3f48d460309f78b131dbb337866e9",
      "00987e5ccf1f61c6276ddf86d57b13abd7416c474773e49be5a3bc6ab56538e17b1691ef"
      "1e96cf8f875d0f7b3aa67fdf9e60f8e7b5cf9ffe1baf6f3efde96f2a"
      "4e3e2fd2ee9bc2a1c80f0aca1145491645abf7fbd5ad5ea79c1edf7c81191f761eb731cf"
      "cf06f077cb4733be7e8b452aa239b43aa55f8ba83f583f04f57b380f",
      "75b1cf9a621f1a2d065c5d7e7acdea07dfb4c4e9af9fc69d97fed0ff25563e37d2eeaf95"
      "aab1067b15051dedd4156d7d87ad360c79333dfe9a94fd7a1651e767"
      "33747a78995544d95491c8225ad40d939a081ae357e5abbf46e4a3b07c7e3ce43a5d304d"
      "4e2191dafadffce3cf58f9dc48aacf7e82e1cb06f053a1cfc886dcee",
      "4a35aabc55689c968fd11e488fcfa66dff86d5bd14e84f743b4879b935b46bdfab7a0f10"
      "f5f76f05cbe7c7c3ae8b3b1deedb98f4be0ff8f8e5ed529c7c5e24d5"
      "47c3e6ab4a4e3caa0a426febb05384fd427e70b459a353f41e95f86850f7b98f6ac447a7"
      "7d545b081ffd2df305f15130ff7c74a85843b8db2bafed70074caec4",
      "1b0fe97c0f101f4dbb8f5a0cc947a7d6c59b8ed4fbe82ded3be2a360fef9a848cb87d5fe"
      "b66e542874221537bf6e1bed2ac94717c147493eeaf3d1c5c847fff9"
      "b1467c14ccdf47bb83fcc65aa101950373ab7ecc6db4eba8d628111f4dba8fbe8fd5ed20"
      "6efe95d87352cb583e3f1efa9c949b8ea6d53f5ff15f12ff04f3f7cf",
      "55551106a846c9466d38d073a595aed42812ff5c00ffd4887f4efba7966eff7cf3ea2be2"
      "9f60fefe59e7779455b6a4e4240699fb957cfe20b7b14ba5c73f9372"
      "0e8adc7b7a37beeb727f22b1e79ec8bda771907b4f977bfe08333e69fb96d4f34e907afe"
      "727ca49e7782d4f3977bfe08337e717d93d4f1a48e27be49eaf88b9f",
      "3fc28cbfaebe7916512fb9d784e3f3e3e45ed3c57ce45e9313e45ed3e59eff0233fe3adf"
      "cf5f01f3f3bb59e7a08cff25dadce41cd4787dbce988fd1cd4ddb8fd"
      "34b7f420563e3792eaa761f3d7a1c2744f06cb7b3d38a8ac7751a12e55961b74f2fdf43f"
      "58ab72fe",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 20632U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *propFieldName[7] = {
      "Version",      "ResolvedFunctions", "Checksum",    "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "PropertyList"};
  const char_T *epFieldName[6] = {
      "Name",           "NumberOfInputs", "NumberOfOutputs",
      "ConstantInputs", "FullPath",       "TimeStamp"};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 6, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("objfun_S_fuel"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString(
          "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_fuel.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739496.719375));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("9.13.0.2049777 (R2022b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("BKIr6IP4EmsCaFIxLnPCCG"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_objfun_S_fuel_info.c) */
