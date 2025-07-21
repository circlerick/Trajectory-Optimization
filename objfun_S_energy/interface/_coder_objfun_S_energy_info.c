/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_objfun_S_energy_info.c
 *
 * Code generation for function 'objfun_S_energy'
 *
 */

/* Include files */
#include "_coder_objfun_S_energy_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[10] = {
      "789ced5b4d8fdb44189ea0b6ec051a55802a21a472ea6dd92ebb5142b96ce378936d9add"
      "e2fd48b641c1b127b163cfd8eb8f24bba74a95aa9e8023279423370e"
      "488833bfa202c41fe0c01fe04013db9bd8d56cbc75e4ad9d792f93c99399e7f53b9a27ef"
      "6bcd804ce5510600f03e70ecfb3da77dcfed67ddf61de0b7209e71db",
      "9b81be67d7c135df380fffce6d050d5b7068391dcc23783e52d4908c796ced9fea1018d0"
      "d4d43e1427484756e1be8c2037dba98d7b889d81ce3b6368fcb92841"
      "41e16c040cc99c7aa8ce76cee3f103e179af858c479e108f6c007f52fabaf445f3c08486"
      "d9346441e09b0c34154bd39b8226c22ec477c66d536bf73a366e712d",
      "88a1d13d5d459e9fc3887ede9ae3a7877303d9122419775bac8d054bd6b0f3bde7c73711"
      "fdb841f4c3414ccbb0056bca378ac8779fc8e7c743aecfebe1594593"
      "f1f3e2e3ed9b79fe06dbe9ef5726ed277fff9189930ffcf2448c95cfb5abe28bbacf3e22"
      "f06503f8c34da81ca82767f8aba3fc866e6c351a587a509cfab13787",
      "679e1f80d08f6bfe11617cd2f66d587faf13fd7510aef54ad717c8374f4745cd6eab70e6"
      "7f3f22df2a91cf8f875d8f7138c64b10d73e7ff65fbcbaf9ecdb7f98"
      "38f93c4bbb6e4a47b23828a06386516c86d51ef4ab3bbd4e393dbaf91b617cd8383e26cc"
      "9f0de06f9a8f6602dfb478ac6156c0eb81e7d0233e47b08e083e8787",
      "8bd090fbbc25f7a1d9e2c0d5e5a951eb881c91cf8f875c375f58e2d4d9db71e7a7cffb3f"
      "c6cae75ada75b652353760af82f0f16e1de99bbb7cb561aadbe9d1d9"
      "a4ecd7a711fdfc788e9f1e5ee691ac5a1a9679ccca866931538726f855e9ea4f11f91822"
      "9f1f0fb94e1784c9292852fb1ec0fafdaf58f95c4baace7e48e0cb06",
      "f033a9cfa9a6daee2a35a6bc53689c954ff03e488fcea66dff86f57b25d09ffaed20e5b5"
      "d6705c035fd5fb80a8ff7ff7887c7e3cecbab8e170dfcaa4f7bdc007"
      "bfde2ac5c9e7595275346cbe8a72f27155927a3b479d22ec17f283e3ed1a9ba2f7a95447"
      "837e9feba84e75745647f5a5d0d19f339f521d058bcf4787c81ec2bd",
      "5e79635738e47225d17ccce67b80ea68da75d4e6683e3ab32e5e3852afa337f42fa98e82"
      "c5e7a332ab1e55fb8f0cb3c2e053a5b8fd79db6c57693eba0c3a4af3"
      "519f8e2e473efaef8b1ad551b0781ded0ef25b1b85064487d64efd44d86ad771ad51a23a"
      "9a741d7d97e8b783b8f95762cf4bad11f9fc78e8f3526e3a9a56fd7c",
      "29dea5fa0916af9feb1a9206b8c6a8666d383072a57b5da551a4fab904faa953fd9cd54f"
      "3dddfaf9e7cbcfa87e82c5eb675ddc45eb7c09e5140e5b07957cfe30"
      "b7b5c7a4473f93720e8ade7f7a33beb7e51e4562cf3dd1fb4f13a3f79f2e37ff88303e69"
      "fb96d6f38ed17afe727cb49e778cd6f3979b7f4418bfbcba49eb785a",
      "c753dda475fcc5f38f08e3df56dd7c1ad15f7aaf89c4e7c7e9bda68bf9e8bd26c7e8bda6"
      "cbcd9fd47bfadef99db8ce4399af5cedd850a5e7a126ebe48523f6f3"
      "5077e2d6d5dccac358f95c4baaae86cd638788eb9e0ed6f67b7050d9ece2425da9ac35d8"
      "e4ebeaffe9e37788",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 20648U, &nameCaptureInfo);
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
  emlrtSetField(xEntryPoints, 0, "Name",
                emlrtMxCreateString("objfun_S_energy"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "FullPath",
      emlrtMxCreateString(
          "E:\\Users\\ricca\\Desktop\\codegen code\\objfun_S_energy.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(739496.72111111111));
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

/* End of code generation (_coder_objfun_S_energy_info.c) */
