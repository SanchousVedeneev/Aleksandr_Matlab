/*
 * SHIP_DOWN_matlab_2017_data.c
 *
 * Code generation for model "SHIP_DOWN_matlab_2017".
 *
 * Model version              : 1.3
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Tue Nov  4 10:08:48 2025
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SHIP_DOWN_matlab_2017.h"
#include "SHIP_DOWN_matlab_2017_private.h"

/* Block parameters (default storage) */
P_SHIP_DOWN_matlab_2017_T SHIP_DOWN_matlab_2017_P = {
  /* Variable: Uvh
   * Referenced by: '<S30>/DC'
   */
  530.0,

  /* Expression: 0
   * Referenced by: '<S31>/0 1'
   */
  0.0,

  /* Expression: 1./Ron
   * Referenced by: '<S31>/Gain'
   */
  1000.0,

  /* Expression: 0
   * Referenced by: '<S36>/0 1'
   */
  0.0,

  /* Expression: 1./Ron
   * Referenced by: '<S36>/Gain'
   */
  100.0,

  /* Expression: 0
   * Referenced by: '<S38>/0 1'
   */
  0.0,

  /* Expression: 1./Ron
   * Referenced by: '<S38>/1//Rsw'
   */
  100.0,

  /* Expression: zeros(3,1)
   * Referenced by: '<S42>/SwitchCurrents'
   */
  { 0.0, 0.0, 0.0 },

  /* Expression: Vf
   * Referenced by: '<S31>/eee'
   */
  1.0,

  /* Expression: Vf
   * Referenced by: '<S36>/eee'
   */
  1.0,

  /* Expression: S.A
   * Referenced by: '<S40>/State-Space'
   */
  { 0.99999999999993627, 2.3884921006796754E-9, 1.9230560283820509E-5,
    -0.00099998980779628728, 1.1951424071451963E-15, 0.99992078656885075,
    -1.9108127884806051E-5, -1.9107936865194519E-10, -4.8112485073356179E-12,
    9.554063942402978E-6, -0.92307698964230422, 7.6922241375844354E-7,
    1.250925453835736E-10, 4.7769842162986304E-11, 3.846112068792223E-7,
    0.99998000020378164 },

  /* Expression: S.B
   * Referenced by: '<S40>/State-Space'
   */
  { -0.00012028121268339071, 238.85159856007564, 1.9230752589423945E+6,
    19.230560343961113, 4.8113327001828833E-6, 238.8516463299178,
    1.9230756435536013E+6, -0.76923587451090825, 0.00012028121268339071,
    -238.85159856007564, -1.9230752589423945E+6, -19.230560343961113,
    6.25462726917868E-8, 2.3884921081493149E-8, 0.00019230560343961114,
    999.99000010189081, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: S.C
   * Referenced by: '<S40>/State-Space'
   */
  { 9.6152801419102541E-7, -3.8461793605261839E-8, -9.6152801419102541E-7,
    9.9998980779628735E-7, 1.9227361410471384E-13, -4.999949038981436E-10,
    6.1311739191554325E-14, -9.554063942403025E-7, -9.5540658531967114E-7,
    9.554063942403025E-7, 1.9107936865194519E-13, 9.9362331879248021E-7,
    -9.5539684325972594E-17, 3.1684417053331636E-7, 0.0038461505178847893,
    0.0038461512871072034, -0.0038461505178847893, -7.6922241375844456E-10,
    7.6910214736344361E-10, 3.8461120687922227E-13, 2.4524940923579261E-10,
    1.9230560343961112E-8, -7.6923587451090439E-10, -1.9230560343961112E-8,
    1.9999796218472017E-8, 3.8454722941203973E-15, 9.9999000010189075E-7,
    1.2262347876659463E-15 },

  /* Expression: S.D
   * Referenced by: '<S40>/State-Space'
   */
  { -3846.2370528802858, -3846.2178223199153, 3846.2370528802858,
    -0.01923056034396111, 0.019227553684086088, 9.6152801719805561E-6,
    0.0061312352308948142, -3846.21782231993, -3846.2185915558075,
    3846.21782231993, 0.00076923587451090819, 0.019227557529558383,
    -3.8461793725545391E-7, 0.0061312364571296015, 3846.2370528802858,
    3846.2178223199153, -3846.2370528802858, 0.01923056034396111,
    -0.019227553684086088, -9.6152801719805561E-6, -0.0061312352308948142,
    9.6152801719805561E-6, -3.8461793725545216E-7, -9.6152801719805561E-6,
    9.9998981092360084E-6, 1.9227361470601986E-12, 0.0004999950000509454,
    6.1311739383297315E-13, 0.0, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -1.0,
    0.0, 0.0, 0.0, 0.0 },

  /* Expression: S.x0
   * Referenced by: '<S40>/State-Space'
   */
  { 5.3E+8, -0.65828067483295971, 5295.7024109870954, 270299.83114737965 },

  /* Expression: 1
   * Referenced by: '<S3>/do not delete this gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/do not delete this gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S28>/integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S29>/integrator'
   */
  0.0,

  /* Computed Parameter: TransferFcn1_A
   * Referenced by: '<Root>/Transfer Fcn1'
   */
  -10000.0,

  /* Computed Parameter: TransferFcn1_C
   * Referenced by: '<Root>/Transfer Fcn1'
   */
  10000.0,

  /* Computed Parameter: TransferFcn2_A
   * Referenced by: '<Root>/Transfer Fcn2'
   */
  -10000.0,

  /* Computed Parameter: TransferFcn2_C
   * Referenced by: '<Root>/Transfer Fcn2'
   */
  10000.0,

  /* Expression: 1
   * Referenced by: '<S4>/do not delete this gain'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/do not delete this gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S22>/integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S23>/integrator'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S38>/Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S36>/Switch'
   */
  0.5,

  /* Expression: inf
   * Referenced by: '<S36>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S36>/Saturation'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S31>/Switch'
   */
  0.5,

  /* Expression: inf
   * Referenced by: '<S31>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S31>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S24>/integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S25>/integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S26>/integrator'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S27>/integrator'
   */
  0.0
};
