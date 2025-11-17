/*
 * SHIP_DOWN_matlab_2017.c
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

/* Block signals (default storage) */
B_SHIP_DOWN_matlab_2017_T SHIP_DOWN_matlab_2017_B;

/* Continuous states */
X_SHIP_DOWN_matlab_2017_T SHIP_DOWN_matlab_2017_X;

/* Block states (default storage) */
DW_SHIP_DOWN_matlab_2017_T SHIP_DOWN_matlab_2017_DW;

/* Real-time model */
RT_MODEL_SHIP_DOWN_matlab_201_T SHIP_DOWN_matlab_2017_M_;
RT_MODEL_SHIP_DOWN_matlab_201_T *const SHIP_DOWN_matlab_2017_M =
  &SHIP_DOWN_matlab_2017_M_;

/* This function updates continuous states using the ODE8 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
#define SHIP_DOWN_matlab_2017_NSTAGES  13

  static real_T rt_ODE8_B[13] = {
    4.174749114153025E-2, 0.0, 0.0, 0.0,
    0.0, -5.54523286112393E-2, 2.393128072011801E-1, 7.03510669403443E-1,
    -7.597596138144609E-1, 6.605630309222863E-1, 1.581874825101233E-1,
    -2.381095387528628E-1, 2.5E-1
  };

  static real_T rt_ODE8_C[13] = {
    0.0, 5.555555555555556E-2, 8.333333333333333E-2, 1.25E-1,
    3.125E-1, 3.75E-1, 1.475E-1, 4.65E-1,
    5.648654513822596E-1, 6.5E-1, 9.246562776405044E-1, 1.0, 1.0
  };

  static real_T rt_ODE8_A[13][13] = {
    /* rt_ODE8_A[0][] */
    { 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[1][] */
    { 5.555555555555556E-2, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[2][] */
    { 2.083333333333333E-2, 6.25E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[3][] */
    { 3.125E-2, 0.0, 9.375E-2, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[4][] */
    { 3.125E-1, 0.0, -1.171875, 1.171875,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[5][] */
    { 3.75E-2, 0.0, 0.0, 1.875E-1,
      1.5E-1, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[6][] */
    { 4.791013711111111E-2, 0.0, 0.0, 1.122487127777778E-1,
      -2.550567377777778E-2, 1.284682388888889E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[7][] */
    { 1.691798978729228E-2, 0.0, 0.0, 3.878482784860432E-1,
      3.597736985150033E-2, 1.969702142156661E-1, -1.727138523405018E-1, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[8][] */
    { 6.90957533591923E-2, 0.0, 0.0, -6.342479767288542E-1,
      -1.611975752246041E-1, 1.386503094588253E-1, 9.409286140357563E-1,
      2.11636326481944E-1,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[9][] */
    { 1.835569968390454E-1, 0.0, 0.0, -2.468768084315592,
      -2.912868878163005E-1, -2.647302023311738E-2, 2.8478387641928,
      2.813873314698498E-1,
      1.237448998633147E-1, 0.0, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[10][] */
    { -1.215424817395888, 0.0, 0.0, 1.667260866594577E1,
      9.157418284168179E-1, -6.056605804357471, -1.600357359415618E1,
      1.484930308629766E1,
      -1.337157573528985E1, 5.134182648179638, 0.0, 0.0, 0.0 },

    /* rt_ODE8_A[11][] */
    { 2.588609164382643E-1, 0.0, 0.0, -4.774485785489205,
      -4.350930137770325E-1, -3.049483332072241, 5.577920039936099,
      6.155831589861039,
      -5.062104586736938, 2.193926173180679, 1.346279986593349E-1, 0.0, 0.0 },

    /* rt_ODE8_A[12][] */
    { 8.224275996265075E-1, 0.0, 0.0, -1.165867325727766E1,
      -7.576221166909362E-1, 7.139735881595818E-1, 1.207577498689006E1,
      -2.127659113920403,
      1.990166207048956, -2.342864715440405E-1, 1.758985777079423E-1, 0.0, 0.0 },
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE8_IntgData *intgData = (ODE8_IntgData *) rtsiGetSolverData(si);
  real_T *deltaY = intgData->deltaY;
  real_T *x0 = intgData->x0;
  real_T* f[SHIP_DOWN_matlab_2017_NSTAGES];
  int idx,stagesIdx,statesIdx;
  double deltaX;
  int_T nXc = 10;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  f[0] = intgData->f[0];
  f[1] = intgData->f[1];
  f[2] = intgData->f[2];
  f[3] = intgData->f[3];
  f[4] = intgData->f[4];
  f[5] = intgData->f[5];
  f[6] = intgData->f[6];
  f[7] = intgData->f[7];
  f[8] = intgData->f[8];
  f[9] = intgData->f[9];
  f[10] = intgData->f[10];
  f[11] = intgData->f[11];
  f[12] = intgData->f[12];

  /* Save the state values at time t in y and x0*/
  (void) memset(deltaY, 0,
                (uint_T)nXc*sizeof(real_T));
  (void) memcpy(x0, x,
                nXc*sizeof(real_T));
  for (stagesIdx=0;stagesIdx<SHIP_DOWN_matlab_2017_NSTAGES;stagesIdx++) {
    (void) memcpy(x, x0,
                  (uint_T)nXc*sizeof(real_T));
    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaX = 0;
      for (idx=0;idx<stagesIdx;idx++) {
        deltaX = deltaX + h*rt_ODE8_A[stagesIdx][idx]*f[idx][statesIdx];
      }

      x[statesIdx] = x0[statesIdx] + deltaX;
    }

    if (stagesIdx==0) {
      rtsiSetdX(si, f[stagesIdx]);
      SHIP_DOWN_matlab_2017_derivatives();
    } else {
      (stagesIdx==SHIP_DOWN_matlab_2017_NSTAGES-1)? rtsiSetT(si, tnew) :
        rtsiSetT(si, t + h*rt_ODE8_C[stagesIdx]);
      rtsiSetdX(si, f[stagesIdx]);
      SHIP_DOWN_matlab_2017_step();
      SHIP_DOWN_matlab_2017_derivatives();
    }

    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaY[statesIdx] = deltaY[statesIdx] + h*rt_ODE8_B[stagesIdx]*f[stagesIdx]
        [statesIdx];
    }
  }

  for (statesIdx=0;statesIdx<nXc;statesIdx++) {
    x[statesIdx] = x0[statesIdx] + deltaY[statesIdx];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void SHIP_DOWN_matlab_2017_step(void)
{
  real_T rtb_Switch_c;
  real_T tmp;
  if (rtmIsMajorTimeStep(SHIP_DOWN_matlab_2017_M)) {
    /* set solver stop time */
    if (!(SHIP_DOWN_matlab_2017_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&SHIP_DOWN_matlab_2017_M->solverInfo,
                            ((SHIP_DOWN_matlab_2017_M->Timing.clockTickH0 + 1) *
        SHIP_DOWN_matlab_2017_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&SHIP_DOWN_matlab_2017_M->solverInfo,
                            ((SHIP_DOWN_matlab_2017_M->Timing.clockTick0 + 1) *
        SHIP_DOWN_matlab_2017_M->Timing.stepSize0 +
        SHIP_DOWN_matlab_2017_M->Timing.clockTickH0 *
        SHIP_DOWN_matlab_2017_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(SHIP_DOWN_matlab_2017_M)) {
    SHIP_DOWN_matlab_2017_M->Timing.t[0] = rtsiGetT
      (&SHIP_DOWN_matlab_2017_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(SHIP_DOWN_matlab_2017_M)) {
    /* S-Function (sfun_spssw_discc): '<S40>/State-Space' incorporates:
     *  Constant: '<S30>/DC'
     *  Constant: '<S31>/eee'
     *  Constant: '<S36>/eee'
     *  Constant: '<S42>/SwitchCurrents'
     */

    /* S-Function block: <S40>/State-Space */
    {
      real_T accum;

      /* Circuit has switches */
      int_T *switch_status = (int_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_STATUS;
      int_T *switch_status_init = (int_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;
      int_T *SwitchChange = (int_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SW_CHG;
      int_T *gState = (int_T*) SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.G_STATE;
      real_T *yswitch = (real_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.Y_SWITCH;
      int_T *switchTypes = (int_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_TYPES;
      int_T *idxOutSw = (int_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.IDX_OUT_SW;
      real_T *DxCol = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.DX_COL;
      real_T *tmp2 = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.TMP2;
      real_T *BDcol = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.BD_COL;
      real_T *tmp1 = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.TMP1;
      real_T *uswlast = (real_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.USWLAST;
      int_T newState;
      int_T swChanged = 0;
      int loopsToDo = 20;
      real_T temp;

      /* keep an initial copy of switch_status*/
      memcpy(switch_status_init, switch_status, 3 * sizeof(int_T));
      memcpy(uswlast, &SHIP_DOWN_matlab_2017_B.StateSpace_o1[0], 3*sizeof(real_T));
      do {
        if (loopsToDo == 1) {          /* Need to reset some variables: */
          swChanged = 0;

          /* return to the original switch status*/
          {
            int_T i1;
            for (i1=0; i1 < 3; i1++) {
              swChanged = ((SwitchChange[i1] = switch_status_init[i1] -
                            switch_status[i1]) != 0) ? 1 : swChanged;
              switch_status[i1] = switch_status_init[i1];
            }
          }
        } else {
          /*
           * Compute outputs:
           * ---------------
           */
          real_T *Cs = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.CS;
          real_T *Ds = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.DS;

          {
            int_T i1;
            real_T *y0 = &SHIP_DOWN_matlab_2017_B.StateSpace_o1[0];
            for (i1=0; i1 < 7; i1++) {
              accum = 0.0;
              accum += *(Cs++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[0];
              accum += *(Cs++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[1];
              accum += *(Cs++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[2];
              accum += *(Cs++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[3];
              accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[0];
              accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[1];
              accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[2];
              accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.Uvh;
              accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.eee_Value;
              accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.eee_Value_c;
              y0[i1] = accum;
            }
          }

          swChanged = 0;

          /* Ideal switch */
          newState = gState[0] > 0 ? 1 : 0;
          swChanged = ((SwitchChange[0] = newState - switch_status[0]) != 0) ? 1
            : swChanged;
          switch_status[0] = newState; /* Keep new state */

          /* Diodes */
          newState = SHIP_DOWN_matlab_2017_B.StateSpace_o1[1] > 0.0 ? 1 :
            ((SHIP_DOWN_matlab_2017_B.StateSpace_o1[1] < 0.0) ? 0 :
             switch_status[1]);
          swChanged = ((SwitchChange[1] = newState - switch_status[1]) != 0) ? 1
            : swChanged;
          switch_status[1] = newState; /* Keep new state */

          /* Diodes */
          newState = SHIP_DOWN_matlab_2017_B.StateSpace_o1[2] > 0.0 ? 1 :
            ((SHIP_DOWN_matlab_2017_B.StateSpace_o1[2] < 0.0) ? 0 :
             switch_status[2]);
          swChanged = ((SwitchChange[2] = newState - switch_status[2]) != 0) ? 1
            : swChanged;
          switch_status[2] = newState; /* Keep new state */
        }

        /*
         * Compute new As, Bs, Cs and Ds matrixes:
         * --------------------------------------
         */
        if (swChanged) {
          real_T *As = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.AS;
          real_T *Cs = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.CS;
          real_T *Bs = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.BS;
          real_T *Ds = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.DS;
          real_T a1;

          {
            int_T i1;
            for (i1=0; i1 < 3; i1++) {
              if (SwitchChange[i1] != 0) {
                a1 = yswitch[i1]*SwitchChange[i1];
                temp = 1/(1-Ds[i1*7]*a1);

                {
                  int_T i2;
                  for (i2=0; i2 < 7; i2++) {
                    DxCol[i2]= Ds[i2 * 6 + i1]*temp*a1;
                  }
                }

                DxCol[i1] = temp;
                BDcol[0]= Bs[0 + i1]*a1;
                BDcol[1]= Bs[6 + i1]*a1;
                BDcol[2]= Bs[12 + i1]*a1;
                BDcol[3]= Bs[18 + i1]*a1;

                /* Copy row nSw of Cs into tmp1 and zero it out in Cs */
                memcpy(tmp1, &Cs[i1 * 4], 4 * sizeof(real_T));
                memset(&Cs[i1 * 4], '\0', 4 * sizeof(real_T));

                /* Copy row nSw of Ds into tmp2 and zero it out in Ds */
                memcpy(tmp2, &Ds[i1 * 6], 6 * sizeof(real_T));
                memset(&Ds[i1 * 6], '\0', 6 * sizeof(real_T));

                /* Cs = Cs + DxCol * tmp1, Ds = Ds + DxCol * tmp2 *******************/
                {
                  int_T i2;
                  for (i2=0; i2 < 7; i2++) {
                    a1 = DxCol[i2];
                    Cs[i2 * 4 + 0] += a1 * tmp1[0];
                    Cs[i2 * 4 + 1] += a1 * tmp1[1];
                    Cs[i2 * 4 + 2] += a1 * tmp1[2];
                    Cs[i2 * 4 + 3] += a1 * tmp1[3];

                    {
                      int_T i3;
                      for (i3=0; i3 < 6; i3++) {
                        Ds[i2 * 6 + i3] += a1 * tmp2[i3];
                      }
                    }
                  }
                }

                /* As = As + BdCol*Cs(nSw,:), Bs = Bs + BdCol*Ds(nSw,:) *************/
                a1 = BDcol[0];
                As[0 + 0] += a1 * Cs[i1 * 4 + 0];
                As[0 + 1] += a1 * Cs[i1 * 4 + 1];
                As[0 + 2] += a1 * Cs[i1 * 4 + 2];
                As[0 + 3] += a1 * Cs[i1 * 4 + 3];

                {
                  int_T i2;
                  for (i2=0; i2 < 6; i2++) {
                    Bs[0 + i2] += a1 * Ds[i1 * 6 + i2];
                  }
                }

                a1 = BDcol[1];
                As[4 + 0] += a1 * Cs[i1 * 4 + 0];
                As[4 + 1] += a1 * Cs[i1 * 4 + 1];
                As[4 + 2] += a1 * Cs[i1 * 4 + 2];
                As[4 + 3] += a1 * Cs[i1 * 4 + 3];

                {
                  int_T i2;
                  for (i2=0; i2 < 6; i2++) {
                    Bs[6 + i2] += a1 * Ds[i1 * 6 + i2];
                  }
                }

                a1 = BDcol[2];
                As[8 + 0] += a1 * Cs[i1 * 4 + 0];
                As[8 + 1] += a1 * Cs[i1 * 4 + 1];
                As[8 + 2] += a1 * Cs[i1 * 4 + 2];
                As[8 + 3] += a1 * Cs[i1 * 4 + 3];

                {
                  int_T i2;
                  for (i2=0; i2 < 6; i2++) {
                    Bs[12 + i2] += a1 * Ds[i1 * 6 + i2];
                  }
                }

                a1 = BDcol[3];
                As[12 + 0] += a1 * Cs[i1 * 4 + 0];
                As[12 + 1] += a1 * Cs[i1 * 4 + 1];
                As[12 + 2] += a1 * Cs[i1 * 4 + 2];
                As[12 + 3] += a1 * Cs[i1 * 4 + 3];

                {
                  int_T i2;
                  for (i2=0; i2 < 6; i2++) {
                    Bs[18 + i2] += a1 * Ds[i1 * 6 + i2];
                  }
                }
              }
            }
          }
        }                              /* if (swChanged) */
      } while (swChanged > 0 && --loopsToDo > 0);

      if (loopsToDo == 0) {
        real_T *Cs = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.CS;
        real_T *Ds = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.DS;

        {
          int_T i1;
          real_T *y0 = &SHIP_DOWN_matlab_2017_B.StateSpace_o1[0];
          for (i1=0; i1 < 7; i1++) {
            accum = 0.0;
            accum += *(Cs++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[0];
            accum += *(Cs++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[1];
            accum += *(Cs++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[2];
            accum += *(Cs++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[3];
            accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[0];
            accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[1];
            accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[2];
            accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.Uvh;
            accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.eee_Value;
            accum += *(Ds++) * SHIP_DOWN_matlab_2017_P.eee_Value_c;
            y0[i1] = accum;
          }
        }
      }

      /* Output new switches states */
      SHIP_DOWN_matlab_2017_B.StateSpace_o2[0] = (real_T)switch_status[0];
      SHIP_DOWN_matlab_2017_B.StateSpace_o2[1] = (real_T)switch_status[1];
      SHIP_DOWN_matlab_2017_B.StateSpace_o2[2] = (real_T)switch_status[2];
    }

    /* Gain: '<S3>/do not delete this gain' */
    SHIP_DOWN_matlab_2017_B.donotdeletethisgain =
      SHIP_DOWN_matlab_2017_P.donotdeletethisgain_Gain *
      SHIP_DOWN_matlab_2017_B.StateSpace_o1[4];

    /* Gain: '<S1>/do not delete this gain' */
    SHIP_DOWN_matlab_2017_B.donotdeletethisgain_h =
      SHIP_DOWN_matlab_2017_P.donotdeletethisgain_Gain_m *
      SHIP_DOWN_matlab_2017_B.StateSpace_o1[6];

    /* Gain: '<S4>/do not delete this gain' */
    SHIP_DOWN_matlab_2017_B.donotdeletethisgain_n =
      SHIP_DOWN_matlab_2017_P.donotdeletethisgain_Gain_d *
      SHIP_DOWN_matlab_2017_B.StateSpace_o1[3];

    /* Gain: '<S2>/do not delete this gain' */
    SHIP_DOWN_matlab_2017_B.donotdeletethisgain_p =
      SHIP_DOWN_matlab_2017_P.donotdeletethisgain_Gain_o *
      SHIP_DOWN_matlab_2017_B.StateSpace_o1[5];

    /* Switch: '<S36>/Switch' incorporates:
     *  Constant: '<S36>/0 1'
     *  Gain: '<S36>/Gain'
     */
    if (SHIP_DOWN_matlab_2017_B.StateSpace_o2[2] >=
        SHIP_DOWN_matlab_2017_P.Switch_Threshold_j) {
      rtb_Switch_c = SHIP_DOWN_matlab_2017_P.Gain_Gain_h *
        SHIP_DOWN_matlab_2017_B.StateSpace_o1[2];
    } else {
      rtb_Switch_c = SHIP_DOWN_matlab_2017_P.u1_Value_o;
    }

    /* End of Switch: '<S36>/Switch' */

    /* Saturate: '<S36>/Saturation' */
    if (rtb_Switch_c > SHIP_DOWN_matlab_2017_P.Saturation_UpperSat) {
      rtb_Switch_c = SHIP_DOWN_matlab_2017_P.Saturation_UpperSat;
    } else {
      if (rtb_Switch_c < SHIP_DOWN_matlab_2017_P.Saturation_LowerSat) {
        rtb_Switch_c = SHIP_DOWN_matlab_2017_P.Saturation_LowerSat;
      }
    }

    /* End of Saturate: '<S36>/Saturation' */

    /* Switch: '<S38>/Switch' incorporates:
     *  Constant: '<S38>/0 1'
     *  Gain: '<S38>/1//Rsw'
     */
    if (SHIP_DOWN_matlab_2017_B.StateSpace_o2[0] >=
        SHIP_DOWN_matlab_2017_P.Switch_Threshold) {
      tmp = SHIP_DOWN_matlab_2017_P.uRsw_Gain *
        SHIP_DOWN_matlab_2017_B.StateSpace_o1[0];
    } else {
      tmp = SHIP_DOWN_matlab_2017_P.u1_Value_p;
    }

    /* End of Switch: '<S38>/Switch' */

    /* Sum: '<S16>/Add' */
    SHIP_DOWN_matlab_2017_B.Add = tmp - rtb_Switch_c;

    /* Switch: '<S31>/Switch' incorporates:
     *  Constant: '<S31>/0 1'
     *  Gain: '<S31>/Gain'
     */
    if (SHIP_DOWN_matlab_2017_B.StateSpace_o2[1] >=
        SHIP_DOWN_matlab_2017_P.Switch_Threshold_c) {
      rtb_Switch_c = SHIP_DOWN_matlab_2017_P.Gain_Gain *
        SHIP_DOWN_matlab_2017_B.StateSpace_o1[1];
    } else {
      rtb_Switch_c = SHIP_DOWN_matlab_2017_P.u1_Value;
    }

    /* End of Switch: '<S31>/Switch' */

    /* Saturate: '<S31>/Saturation' */
    if (rtb_Switch_c > SHIP_DOWN_matlab_2017_P.Saturation_UpperSat_b) {
      SHIP_DOWN_matlab_2017_B.Saturation =
        SHIP_DOWN_matlab_2017_P.Saturation_UpperSat_b;
    } else if (rtb_Switch_c < SHIP_DOWN_matlab_2017_P.Saturation_LowerSat_k) {
      SHIP_DOWN_matlab_2017_B.Saturation =
        SHIP_DOWN_matlab_2017_P.Saturation_LowerSat_k;
    } else {
      SHIP_DOWN_matlab_2017_B.Saturation = rtb_Switch_c;
    }

    /* End of Saturate: '<S31>/Saturation' */

    /* Sum: '<S31>/Sum' incorporates:
     *  Constant: '<S31>/eee'
     */
    SHIP_DOWN_matlab_2017_B.Sum = SHIP_DOWN_matlab_2017_B.StateSpace_o1[1] +
      SHIP_DOWN_matlab_2017_P.eee_Value;
  }

  if (rtmIsMajorTimeStep(SHIP_DOWN_matlab_2017_M)) {
    /* Matfile logging */
    rt_UpdateTXYLogVars(SHIP_DOWN_matlab_2017_M->rtwLogInfo,
                        (SHIP_DOWN_matlab_2017_M->Timing.t));
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(SHIP_DOWN_matlab_2017_M)) {
    if (rtmIsMajorTimeStep(SHIP_DOWN_matlab_2017_M)) {
      /* Update for S-Function (sfun_spssw_discc): '<S40>/State-Space' incorporates:
       *  Constant: '<S30>/DC'
       *  Constant: '<S31>/eee'
       *  Constant: '<S36>/eee'
       *  Constant: '<S42>/SwitchCurrents'
       */

      /* S-Function block: <S40>/State-Space */
      {
        const real_T *As = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.AS;
        const real_T *Bs = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.BS;
        real_T *xtmp = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.XTMP;
        real_T accum;

        /* Calculate new states... */
        accum = 0.0;
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[0];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[1];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[2];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[3];
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[0]);
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[1]);
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[2]);
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.Uvh;
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.eee_Value;
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.eee_Value_c;
        xtmp[0] = accum;
        accum = 0.0;
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[0];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[1];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[2];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[3];
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[0]);
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[1]);
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[2]);
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.Uvh;
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.eee_Value;
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.eee_Value_c;
        xtmp[1] = accum;
        accum = 0.0;
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[0];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[1];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[2];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[3];
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[0]);
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[1]);
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[2]);
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.Uvh;
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.eee_Value;
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.eee_Value_c;
        xtmp[2] = accum;
        accum = 0.0;
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[0];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[1];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[2];
        accum += *(As++) * SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[3];
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[0]);
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[1]);
        accum += *(Bs++) * (SHIP_DOWN_matlab_2017_P.SwitchCurrents_Value[2]);
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.Uvh;
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.eee_Value;
        accum += *(Bs++) * SHIP_DOWN_matlab_2017_P.eee_Value_c;
        xtmp[3] = accum;
        SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[0] = xtmp[0];
        SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[1] = xtmp[1];
        SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[2] = xtmp[2];
        SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[3] = xtmp[3];

        {
          int_T *gState = (int_T*)
            SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.G_STATE;

          /* Store switch gates values for next step */
          *(gState++) = (int_T) 0.0;
          *(gState++) = (int_T) 0.0;
          *(gState++) = (int_T) 0.0;
        }
      }
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(SHIP_DOWN_matlab_2017_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(SHIP_DOWN_matlab_2017_M)!=-1) &&
          !((rtmGetTFinal(SHIP_DOWN_matlab_2017_M)-
             (((SHIP_DOWN_matlab_2017_M->Timing.clockTick1+
                SHIP_DOWN_matlab_2017_M->Timing.clockTickH1* 4294967296.0)) *
              1.0E-6)) > (((SHIP_DOWN_matlab_2017_M->Timing.clockTick1+
                            SHIP_DOWN_matlab_2017_M->Timing.clockTickH1*
                            4294967296.0)) * 1.0E-6) * (DBL_EPSILON))) {
        rtmSetErrorStatus(SHIP_DOWN_matlab_2017_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&SHIP_DOWN_matlab_2017_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++SHIP_DOWN_matlab_2017_M->Timing.clockTick0)) {
      ++SHIP_DOWN_matlab_2017_M->Timing.clockTickH0;
    }

    SHIP_DOWN_matlab_2017_M->Timing.t[0] = rtsiGetSolverStopTime
      (&SHIP_DOWN_matlab_2017_M->solverInfo);

    {
      /* Update absolute timer for sample time: [1.0E-6s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 1.0E-6, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      SHIP_DOWN_matlab_2017_M->Timing.clockTick1++;
      if (!SHIP_DOWN_matlab_2017_M->Timing.clockTick1) {
        SHIP_DOWN_matlab_2017_M->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void SHIP_DOWN_matlab_2017_derivatives(void)
{
  XDot_SHIP_DOWN_matlab_2017_T *_rtXdot;
  _rtXdot = ((XDot_SHIP_DOWN_matlab_2017_T *) SHIP_DOWN_matlab_2017_M->derivs);

  /* Derivatives for Integrator: '<S28>/integrator' */
  _rtXdot->integrator_CSTATE = SHIP_DOWN_matlab_2017_B.donotdeletethisgain;

  /* Derivatives for Integrator: '<S29>/integrator' */
  _rtXdot->integrator_CSTATE_p = SHIP_DOWN_matlab_2017_B.donotdeletethisgain_h;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = 0.0;
  _rtXdot->TransferFcn1_CSTATE += SHIP_DOWN_matlab_2017_P.TransferFcn1_A *
    SHIP_DOWN_matlab_2017_X.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += SHIP_DOWN_matlab_2017_B.donotdeletethisgain_h;

  /* Derivatives for TransferFcn: '<Root>/Transfer Fcn2' */
  _rtXdot->TransferFcn2_CSTATE = 0.0;
  _rtXdot->TransferFcn2_CSTATE += SHIP_DOWN_matlab_2017_P.TransferFcn2_A *
    SHIP_DOWN_matlab_2017_X.TransferFcn2_CSTATE;
  _rtXdot->TransferFcn2_CSTATE += SHIP_DOWN_matlab_2017_B.donotdeletethisgain;

  /* Derivatives for Integrator: '<S22>/integrator' */
  _rtXdot->integrator_CSTATE_k = SHIP_DOWN_matlab_2017_B.donotdeletethisgain_n;

  /* Derivatives for Integrator: '<S23>/integrator' */
  _rtXdot->integrator_CSTATE_d = SHIP_DOWN_matlab_2017_B.donotdeletethisgain_p;

  /* Derivatives for Integrator: '<S24>/integrator' */
  _rtXdot->integrator_CSTATE_i = SHIP_DOWN_matlab_2017_B.Add;

  /* Derivatives for Integrator: '<S25>/integrator' */
  _rtXdot->integrator_CSTATE_kv = SHIP_DOWN_matlab_2017_B.StateSpace_o1[0];

  /* Derivatives for Integrator: '<S26>/integrator' */
  _rtXdot->integrator_CSTATE_f = SHIP_DOWN_matlab_2017_B.Saturation;

  /* Derivatives for Integrator: '<S27>/integrator' */
  _rtXdot->integrator_CSTATE_m = SHIP_DOWN_matlab_2017_B.Sum;
}

/* Model initialize function */
void SHIP_DOWN_matlab_2017_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  SHIP_DOWN_matlab_2017_P.Saturation_UpperSat = rtInf;
  SHIP_DOWN_matlab_2017_P.Saturation_UpperSat_b = rtInf;

  /* initialize real-time model */
  (void) memset((void *)SHIP_DOWN_matlab_2017_M, 0,
                sizeof(RT_MODEL_SHIP_DOWN_matlab_201_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&SHIP_DOWN_matlab_2017_M->solverInfo,
                          &SHIP_DOWN_matlab_2017_M->Timing.simTimeStep);
    rtsiSetTPtr(&SHIP_DOWN_matlab_2017_M->solverInfo, &rtmGetTPtr
                (SHIP_DOWN_matlab_2017_M));
    rtsiSetStepSizePtr(&SHIP_DOWN_matlab_2017_M->solverInfo,
                       &SHIP_DOWN_matlab_2017_M->Timing.stepSize0);
    rtsiSetdXPtr(&SHIP_DOWN_matlab_2017_M->solverInfo,
                 &SHIP_DOWN_matlab_2017_M->derivs);
    rtsiSetContStatesPtr(&SHIP_DOWN_matlab_2017_M->solverInfo, (real_T **)
                         &SHIP_DOWN_matlab_2017_M->contStates);
    rtsiSetNumContStatesPtr(&SHIP_DOWN_matlab_2017_M->solverInfo,
      &SHIP_DOWN_matlab_2017_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&SHIP_DOWN_matlab_2017_M->solverInfo,
      &SHIP_DOWN_matlab_2017_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&SHIP_DOWN_matlab_2017_M->solverInfo,
      &SHIP_DOWN_matlab_2017_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&SHIP_DOWN_matlab_2017_M->solverInfo,
      &SHIP_DOWN_matlab_2017_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&SHIP_DOWN_matlab_2017_M->solverInfo,
                          (&rtmGetErrorStatus(SHIP_DOWN_matlab_2017_M)));
    rtsiSetRTModelPtr(&SHIP_DOWN_matlab_2017_M->solverInfo,
                      SHIP_DOWN_matlab_2017_M);
  }

  rtsiSetSimTimeStep(&SHIP_DOWN_matlab_2017_M->solverInfo, MAJOR_TIME_STEP);
  SHIP_DOWN_matlab_2017_M->intgData.deltaY= SHIP_DOWN_matlab_2017_M->OdeDeltaY;
  SHIP_DOWN_matlab_2017_M->intgData.f[0] = SHIP_DOWN_matlab_2017_M->odeF[0];
  SHIP_DOWN_matlab_2017_M->intgData.f[1] = SHIP_DOWN_matlab_2017_M->odeF[1];
  SHIP_DOWN_matlab_2017_M->intgData.f[2] = SHIP_DOWN_matlab_2017_M->odeF[2];
  SHIP_DOWN_matlab_2017_M->intgData.f[3] = SHIP_DOWN_matlab_2017_M->odeF[3];
  SHIP_DOWN_matlab_2017_M->intgData.f[4] = SHIP_DOWN_matlab_2017_M->odeF[4];
  SHIP_DOWN_matlab_2017_M->intgData.f[5] = SHIP_DOWN_matlab_2017_M->odeF[5];
  SHIP_DOWN_matlab_2017_M->intgData.f[6] = SHIP_DOWN_matlab_2017_M->odeF[6];
  SHIP_DOWN_matlab_2017_M->intgData.f[7] = SHIP_DOWN_matlab_2017_M->odeF[7];
  SHIP_DOWN_matlab_2017_M->intgData.f[8] = SHIP_DOWN_matlab_2017_M->odeF[8];
  SHIP_DOWN_matlab_2017_M->intgData.f[9] = SHIP_DOWN_matlab_2017_M->odeF[9];
  SHIP_DOWN_matlab_2017_M->intgData.f[10] = SHIP_DOWN_matlab_2017_M->odeF[10];
  SHIP_DOWN_matlab_2017_M->intgData.f[11] = SHIP_DOWN_matlab_2017_M->odeF[11];
  SHIP_DOWN_matlab_2017_M->intgData.f[12] = SHIP_DOWN_matlab_2017_M->odeF[12];
  SHIP_DOWN_matlab_2017_M->intgData.x0 = SHIP_DOWN_matlab_2017_M->odeX0;
  SHIP_DOWN_matlab_2017_M->contStates = ((X_SHIP_DOWN_matlab_2017_T *)
    &SHIP_DOWN_matlab_2017_X);
  rtsiSetSolverData(&SHIP_DOWN_matlab_2017_M->solverInfo, (void *)
                    &SHIP_DOWN_matlab_2017_M->intgData);
  rtsiSetSolverName(&SHIP_DOWN_matlab_2017_M->solverInfo,"ode8");
  rtmSetTPtr(SHIP_DOWN_matlab_2017_M, &SHIP_DOWN_matlab_2017_M->Timing.tArray[0]);
  rtmSetTFinal(SHIP_DOWN_matlab_2017_M, 1.0);
  SHIP_DOWN_matlab_2017_M->Timing.stepSize0 = 1.0E-6;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    SHIP_DOWN_matlab_2017_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(SHIP_DOWN_matlab_2017_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(SHIP_DOWN_matlab_2017_M->rtwLogInfo, (NULL));
    rtliSetLogT(SHIP_DOWN_matlab_2017_M->rtwLogInfo, "tout");
    rtliSetLogX(SHIP_DOWN_matlab_2017_M->rtwLogInfo, "");
    rtliSetLogXFinal(SHIP_DOWN_matlab_2017_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(SHIP_DOWN_matlab_2017_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(SHIP_DOWN_matlab_2017_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(SHIP_DOWN_matlab_2017_M->rtwLogInfo, 0);
    rtliSetLogDecimation(SHIP_DOWN_matlab_2017_M->rtwLogInfo, 1);
    rtliSetLogY(SHIP_DOWN_matlab_2017_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(SHIP_DOWN_matlab_2017_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(SHIP_DOWN_matlab_2017_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &SHIP_DOWN_matlab_2017_B), 0,
                sizeof(B_SHIP_DOWN_matlab_2017_T));

  /* states (continuous) */
  {
    (void) memset((void *)&SHIP_DOWN_matlab_2017_X, 0,
                  sizeof(X_SHIP_DOWN_matlab_2017_T));
  }

  /* states (dwork) */
  (void) memset((void *)&SHIP_DOWN_matlab_2017_DW, 0,
                sizeof(DW_SHIP_DOWN_matlab_2017_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(SHIP_DOWN_matlab_2017_M->rtwLogInfo, 0.0,
    rtmGetTFinal(SHIP_DOWN_matlab_2017_M),
    SHIP_DOWN_matlab_2017_M->Timing.stepSize0, (&rtmGetErrorStatus
    (SHIP_DOWN_matlab_2017_M)));

  /* Start for S-Function (sfun_spssw_discc): '<S40>/State-Space' incorporates:
   *  Constant: '<S30>/DC'
   *  Constant: '<S31>/eee'
   *  Constant: '<S36>/eee'
   *  Constant: '<S42>/SwitchCurrents'
   */

  /* S-Function block: <S40>/State-Space */
  {
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.AS = (real_T*)calloc(4 * 4, sizeof
      (real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.BS = (real_T*)calloc(4 * 6, sizeof
      (real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.CS = (real_T*)calloc(7 * 4, sizeof
      (real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.DS = (real_T*)calloc(7 * 6, sizeof
      (real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.DX_COL = (real_T*)calloc(7, sizeof
      (real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.TMP2 = (real_T*)calloc(6, sizeof
      (real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.BD_COL = (real_T*)calloc(4, sizeof
      (real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.TMP1 = (real_T*)calloc(4, sizeof
      (real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.XTMP = (real_T*)calloc(4, sizeof
      (real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_STATUS = (int_T*)calloc(3,
      sizeof(int_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SW_CHG = (int_T*)calloc(3, sizeof
      (int_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.G_STATE = (int_T*)calloc(3, sizeof
      (int_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.Y_SWITCH = (real_T*)calloc(3,
      sizeof(real_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_TYPES = (int_T*)calloc(3,
      sizeof(int_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.IDX_OUT_SW = (int_T*)calloc(3,
      sizeof(int_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_STATUS_INIT = (int_T*)
      calloc(3, sizeof(int_T));
    SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.USWLAST = (real_T*)calloc(3,
      sizeof(real_T));
  }

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S40>/State-Space' incorporates:
   *  Constant: '<S30>/DC'
   *  Constant: '<S31>/eee'
   *  Constant: '<S36>/eee'
   *  Constant: '<S42>/SwitchCurrents'
   */
  {
    int32_T i, j;
    real_T *As = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.AS;
    real_T *Bs = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.BS;
    real_T *Cs = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.CS;
    real_T *Ds = (real_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.DS;
    real_T *X0 = (real_T*)&SHIP_DOWN_matlab_2017_DW.StateSpace_DSTATE[0];
    for (i = 0; i < 4; i++) {
      X0[i] = (SHIP_DOWN_matlab_2017_P.StateSpace_X0_param[i]);
    }

    /* Copy and transpose A and B */
    for (i=0; i<4; i++) {
      for (j=0; j<4; j++)
        As[i*4 + j] = (SHIP_DOWN_matlab_2017_P.StateSpace_AS_param[i + j*4]);
      for (j=0; j<6; j++)
        Bs[i*6 + j] = (SHIP_DOWN_matlab_2017_P.StateSpace_BS_param[i + j*4]);
    }

    /* Copy and transpose C */
    for (i=0; i<7; i++) {
      for (j=0; j<4; j++)
        Cs[i*4 + j] = (SHIP_DOWN_matlab_2017_P.StateSpace_CS_param[i + j*7]);
    }

    /* Copy and transpose D */
    for (i=0; i<7; i++) {
      for (j=0; j<6; j++)
        Ds[i*6 + j] = (SHIP_DOWN_matlab_2017_P.StateSpace_DS_param[i + j*7]);
    }

    {
      /* Switches work vectors */
      int_T *switch_status = (int_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_STATUS;
      int_T *gState = (int_T*)SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.G_STATE;
      real_T *yswitch = (real_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.Y_SWITCH;
      int_T *switchTypes = (int_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_TYPES;
      int_T *idxOutSw = (int_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.IDX_OUT_SW;
      int_T *switch_status_init = (int_T*)
        SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;

      /* Initialize work vectors */
      switch_status[0] = 0;
      switch_status_init[0] = 0;
      gState[0] = (int_T) 0.0;
      yswitch[0] = 1/0.01;
      switchTypes[0] = (int_T)1.0;
      idxOutSw[0] = ((int_T)0.0) - 1;
      switch_status[1] = 0;
      switch_status_init[1] = 0;
      gState[1] = (int_T) 0.0;
      yswitch[1] = 1/0.001;
      switchTypes[1] = (int_T)3.0;
      idxOutSw[1] = ((int_T)0.0) - 1;
      switch_status[2] = 0;
      switch_status_init[2] = 0;
      gState[2] = (int_T) 0.0;
      yswitch[2] = 1/0.01;
      switchTypes[2] = (int_T)3.0;
      idxOutSw[2] = ((int_T)0.0) - 1;
    }
  }

  /* InitializeConditions for Integrator: '<S28>/integrator' */
  SHIP_DOWN_matlab_2017_X.integrator_CSTATE =
    SHIP_DOWN_matlab_2017_P.integrator_IC;

  /* InitializeConditions for Integrator: '<S29>/integrator' */
  SHIP_DOWN_matlab_2017_X.integrator_CSTATE_p =
    SHIP_DOWN_matlab_2017_P.integrator_IC_c;

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn1' */
  SHIP_DOWN_matlab_2017_X.TransferFcn1_CSTATE = 0.0;

  /* InitializeConditions for TransferFcn: '<Root>/Transfer Fcn2' */
  SHIP_DOWN_matlab_2017_X.TransferFcn2_CSTATE = 0.0;

  /* InitializeConditions for Integrator: '<S22>/integrator' */
  SHIP_DOWN_matlab_2017_X.integrator_CSTATE_k =
    SHIP_DOWN_matlab_2017_P.integrator_IC_l;

  /* InitializeConditions for Integrator: '<S23>/integrator' */
  SHIP_DOWN_matlab_2017_X.integrator_CSTATE_d =
    SHIP_DOWN_matlab_2017_P.integrator_IC_n;

  /* InitializeConditions for Integrator: '<S24>/integrator' */
  SHIP_DOWN_matlab_2017_X.integrator_CSTATE_i =
    SHIP_DOWN_matlab_2017_P.integrator_IC_ll;

  /* InitializeConditions for Integrator: '<S25>/integrator' */
  SHIP_DOWN_matlab_2017_X.integrator_CSTATE_kv =
    SHIP_DOWN_matlab_2017_P.integrator_IC_d;

  /* InitializeConditions for Integrator: '<S26>/integrator' */
  SHIP_DOWN_matlab_2017_X.integrator_CSTATE_f =
    SHIP_DOWN_matlab_2017_P.integrator_IC_n3;

  /* InitializeConditions for Integrator: '<S27>/integrator' */
  SHIP_DOWN_matlab_2017_X.integrator_CSTATE_m =
    SHIP_DOWN_matlab_2017_P.integrator_IC_o;
}

/* Model terminate function */
void SHIP_DOWN_matlab_2017_terminate(void)
{
  /* Terminate for S-Function (sfun_spssw_discc): '<S40>/State-Space' incorporates:
   *  Constant: '<S30>/DC'
   *  Constant: '<S31>/eee'
   *  Constant: '<S36>/eee'
   *  Constant: '<S42>/SwitchCurrents'
   */

  /* S-Function block: <S40>/State-Space */
  {
    /* Free memory */
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.AS);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.BS);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.CS);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.DS);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.DX_COL);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.TMP2);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.BD_COL);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.TMP1);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.XTMP);

    /*
     * Circuit has switches*/
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.G_STATE);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_STATUS);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SW_CHG);
    free(SHIP_DOWN_matlab_2017_DW.StateSpace_PWORK.SWITCH_STATUS_INIT);
  }
}
