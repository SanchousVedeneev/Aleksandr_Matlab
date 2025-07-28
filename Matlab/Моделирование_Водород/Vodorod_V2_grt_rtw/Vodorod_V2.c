/*
 * Vodorod_V2.c
 *
 * Code generation for model "Vodorod_V2".
 *
 * Model version              : 1.60
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Wed Dec 25 09:50:21 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Vodorod_V2.h"
#include "Vodorod_V2_private.h"

/* Block signals (default storage) */
B_Vodorod_V2_T Vodorod_V2_B;

/* Block states (default storage) */
DW_Vodorod_V2_T Vodorod_V2_DW;

/* Real-time model */
RT_MODEL_Vodorod_V2_T Vodorod_V2_M_;
RT_MODEL_Vodorod_V2_T *const Vodorod_V2_M = &Vodorod_V2_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T q;
  if (rtIsNaN(u0) || rtIsInf(u0) || (rtIsNaN(u1) || rtIsInf(u1))) {
    y = (rtNaN);
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    q = fabs(u0 / u1);
    if (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/* Model step function */
void Vodorod_V2_step(void)
{
  /* local block i/o variables */
  real_T rtb_Integralgain;
  real_T rtb_Proportionalgain1;
  real_T rtb_u;
  real_T rtb_u_j;
  real_T rtb_Sum6;
  real_T rtb_u_i;
  real_T rtb_u_ix;
  real_T rtb_gain;
  real_T rtb_gain1;
  boolean_T rtb_Logic[2];
  int32_T rowIdx;
  real_T rtb_Sum;
  real_T currentTime_tmp;

  /* S-Function (sfun_spssw_discc): '<S46>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S17>/eee'
   *  Constant: '<S19>/eee'
   *  Constant: '<S48>/SwitchCurrents'
   */

  /* S-Function block: <S46>/State-Space */
  {
    real_T accum;

    /* Circuit has switches */
    int_T *switch_status = (int_T*) Vodorod_V2_DW.StateSpace_PWORK.SWITCH_STATUS;
    int_T *switch_status_init = (int_T*)
      Vodorod_V2_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;
    int_T *SwitchChange = (int_T*) Vodorod_V2_DW.StateSpace_PWORK.SW_CHG;
    int_T *gState = (int_T*) Vodorod_V2_DW.StateSpace_PWORK.G_STATE;
    real_T *yswitch = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.Y_SWITCH;
    int_T *switchTypes = (int_T*) Vodorod_V2_DW.StateSpace_PWORK.SWITCH_TYPES;
    int_T *idxOutSw = (int_T*) Vodorod_V2_DW.StateSpace_PWORK.IDX_OUT_SW;
    real_T *DxCol = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.DX_COL;
    real_T *tmp2 = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.TMP2;
    real_T *BDcol = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.BD_COL;
    real_T *tmp1 = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.TMP1;
    real_T *uswlast = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.USWLAST;
    int_T newState;
    int_T swChanged = 0;
    int loopsToDo = 20;
    real_T temp;

    /* keep an initial copy of switch_status*/
    memcpy(switch_status_init, switch_status, 7 * sizeof(int_T));
    memcpy(uswlast, &Vodorod_V2_B.StateSpace_o1[0], 7*sizeof(real_T));
    do {
      if (loopsToDo == 1) {            /* Need to reset some variables: */
        swChanged = 0;

        /* return to the original switch status*/
        {
          int_T i1;
          for (i1=0; i1 < 7; i1++) {
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
        real_T *Cs = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.CS;
        real_T *Ds = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.DS;

        {
          int_T i1;
          real_T *y0 = &Vodorod_V2_B.StateSpace_o1[0];
          for (i1=0; i1 < 11; i1++) {
            accum = 0.0;

            {
              int_T i2;
              real_T *xd = &Vodorod_V2_DW.StateSpace_DSTATE[0];
              for (i2=0; i2 < 6; i2++) {
                accum += *(Cs++) * xd[i2];
              }
            }

            {
              int_T i2;
              const real_T *u0 = &Vodorod_V2_P.SwitchCurrents_Value[0];
              for (i2=0; i2 < 7; i2++) {
                accum += *(Ds++) * u0[i2];
              }

              accum += *(Ds++) * Vodorod_V2_P.u00_Amplitude;
              accum += *(Ds++) * Vodorod_V2_P.eee_Value;
              accum += *(Ds++) * Vodorod_V2_P.eee_Value_h;
            }

            y0[i1] = accum;
          }
        }

        swChanged = 0;

        {
          int_T i1;
          real_T *y0 = &Vodorod_V2_B.StateSpace_o1[0];
          for (i1=0; i1 < 7; i1++) {
            switch (switchTypes[i1]) {
             case 1 :                  /* Ideal switch */
              newState = gState[i1] > 0 ? 1 : 0;
              break;

             case 3 :                  /* Diodes */
              newState = y0[i1] > 0.0 ? 1 : ((y0[i1] < 0.0) ? 0 :
                switch_status[i1]);
              break;
            }

            swChanged = ((SwitchChange[i1] = newState - switch_status[i1]) != 0)
              ? 1 : swChanged;
            switch_status[i1] = newState;/* Keep new state */
          }
        }
      }

      /*
       * Compute new As, Bs, Cs and Ds matrixes:
       * --------------------------------------
       */
      if (swChanged) {
        real_T *As = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.AS;
        real_T *Cs = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.CS;
        real_T *Bs = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.BS;
        real_T *Ds = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.DS;
        real_T a1;

        {
          int_T i1;
          for (i1=0; i1 < 7; i1++) {
            if (SwitchChange[i1] != 0) {
              a1 = yswitch[i1]*SwitchChange[i1];
              temp = 1/(1-Ds[i1*11]*a1);

              {
                int_T i2;
                for (i2=0; i2 < 11; i2++) {
                  DxCol[i2]= Ds[i2 * 10 + i1]*temp*a1;
                }
              }

              DxCol[i1] = temp;

              {
                int_T i2;
                for (i2=0; i2 < 6; i2++) {
                  BDcol[i2]= Bs[i2 * 10 + i1]*a1;
                }
              }

              /* Copy row nSw of Cs into tmp1 and zero it out in Cs */
              memcpy(tmp1, &Cs[i1 * 6], 6 * sizeof(real_T));
              memset(&Cs[i1 * 6], '\0', 6 * sizeof(real_T));

              /* Copy row nSw of Ds into tmp2 and zero it out in Ds */
              memcpy(tmp2, &Ds[i1 * 10], 10 * sizeof(real_T));
              memset(&Ds[i1 * 10], '\0', 10 * sizeof(real_T));

              /* Cs = Cs + DxCol * tmp1, Ds = Ds + DxCol * tmp2 *******************/
              {
                int_T i2;
                for (i2=0; i2 < 11; i2++) {
                  a1 = DxCol[i2];

                  {
                    int_T i3;
                    for (i3=0; i3 < 6; i3++) {
                      Cs[i2 * 6 + i3] += a1 * tmp1[i3];
                    }
                  }

                  {
                    int_T i3;
                    for (i3=0; i3 < 10; i3++) {
                      Ds[i2 * 10 + i3] += a1 * tmp2[i3];
                    }
                  }
                }
              }

              /* As = As + BdCol*Cs(nSw,:), Bs = Bs + BdCol*Ds(nSw,:) *************/
              {
                int_T i2;
                for (i2=0; i2 < 6; i2++) {
                  a1 = BDcol[i2];

                  {
                    int_T i3;
                    for (i3=0; i3 < 6; i3++) {
                      As[i2 * 6 + i3] += a1 * Cs[i1 * 6 + i3];
                    }
                  }

                  {
                    int_T i3;
                    for (i3=0; i3 < 10; i3++) {
                      Bs[i2 * 10 + i3] += a1 * Ds[i1 * 10 + i3];
                    }
                  }
                }
              }
            }
          }
        }
      }                                /* if (swChanged) */
    } while (swChanged > 0 && --loopsToDo > 0);

    if (loopsToDo == 0) {
      real_T *Cs = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.CS;
      real_T *Ds = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.DS;

      {
        int_T i1;
        real_T *y0 = &Vodorod_V2_B.StateSpace_o1[0];
        for (i1=0; i1 < 11; i1++) {
          accum = 0.0;

          {
            int_T i2;
            real_T *xd = &Vodorod_V2_DW.StateSpace_DSTATE[0];
            for (i2=0; i2 < 6; i2++) {
              accum += *(Cs++) * xd[i2];
            }
          }

          {
            int_T i2;
            const real_T *u0 = &Vodorod_V2_P.SwitchCurrents_Value[0];
            for (i2=0; i2 < 7; i2++) {
              accum += *(Ds++) * u0[i2];
            }

            accum += *(Ds++) * Vodorod_V2_P.u00_Amplitude;
            accum += *(Ds++) * Vodorod_V2_P.eee_Value;
            accum += *(Ds++) * Vodorod_V2_P.eee_Value_h;
          }

          y0[i1] = accum;
        }
      }
    }

    /* Output new switches states */
    {
      int_T i1;
      real_T *y1 = &Vodorod_V2_B.StateSpace_o2[0];
      for (i1=0; i1 < 7; i1++) {
        y1[i1] = (real_T)switch_status[i1];
      }
    }
  }

  /* Step: '<Root>/Step1' incorporates:
   *  Step: '<Root>/Step'
   */
  currentTime_tmp = Vodorod_V2_M->Timing.t[0];

  /* Step: '<Root>/Step' */
  if (currentTime_tmp < Vodorod_V2_P.Step_Time) {
    rtb_Sum = Vodorod_V2_P.Step_Y0;
  } else {
    rtb_Sum = Vodorod_V2_P.Step_YFinal;
  }

  /* Step: '<Root>/Step1' */
  if (currentTime_tmp < Vodorod_V2_P.Step1_Time) {
    currentTime_tmp = Vodorod_V2_P.Step1_Y0;
  } else {
    currentTime_tmp = Vodorod_V2_P.Step1_YFinal;
  }

  /* DataTypeConversion: '<S24>/Data Type Conversion' incorporates:
   *  Logic: '<Root>/AND'
   */
  Vodorod_V2_B.DataTypeConversion = ((rtb_Sum != 0.0) && (currentTime_tmp != 0.0));

  /* Gain: '<Root>/gain2' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  rtb_Sum6 = Vodorod_V2_P.gain2_Gain * Vodorod_V2_P.Constant1_Value;

  /* Gain: '<Root>/gain3' */
  rtb_u_i = Vodorod_V2_P.gain3_Gain * 0.0;

  /* Sum: '<S11>/Sum5' */
  rtb_u_ix = rtb_Sum6 - rtb_u_i;

  /* Gain: '<S11>/Proportional gain' */
  rtb_gain1 = Vodorod_V2_P.Proportionalgain_Gain * rtb_u_ix;

  /* Saturate: '<S11>/Saturation2' */
  if (rtb_gain1 > Vodorod_V2_P.Saturation2_UpperSat) {
    rtb_gain1 = Vodorod_V2_P.Saturation2_UpperSat;
  } else {
    if (rtb_gain1 < Vodorod_V2_P.Saturation2_LowerSat) {
      rtb_gain1 = Vodorod_V2_P.Saturation2_LowerSat;
    }
  }

  /* End of Saturate: '<S11>/Saturation2' */

  /* DiscreteIntegrator: '<S11>/Discrete-Time Integrator2' */
  rtb_u = Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTATE;

  /* Sum: '<S11>/Sum6' */
  rtb_gain = rtb_gain1 + rtb_u;

  /* Saturate: '<S11>/Saturation1' */
  if (rtb_gain > Vodorod_V2_P.Saturation1_UpperSat) {
    rtb_gain = Vodorod_V2_P.Saturation1_UpperSat;
  } else {
    if (rtb_gain < Vodorod_V2_P.Saturation1_LowerSat) {
      rtb_gain = Vodorod_V2_P.Saturation1_LowerSat;
    }
  }

  /* End of Saturate: '<S11>/Saturation1' */
  /* Gain: '<S11>/Integral gain' */
  rtb_Integralgain = Vodorod_V2_P.Integralgain_Gain * rtb_u_ix;

  /* Gain: '<Root>/gain' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  rtb_gain = Vodorod_V2_P.gain_Gain * Vodorod_V2_P.Constant2_Value;

  /* Gain: '<S4>/do not delete this gain' */
  rtb_gain1 = Vodorod_V2_P.donotdeletethisgain_Gain *
    Vodorod_V2_B.StateSpace_o1[10];

  /* Gain: '<Root>/gain1' */
  rtb_gain1 *= Vodorod_V2_P.gain1_Gain;

  /* Sum: '<S10>/Sum5' */
  rtb_u_ix = rtb_gain - rtb_gain1;

  /* Gain: '<S10>/Proportional gain' */
  rtb_u_i = Vodorod_V2_P.Proportionalgain_Gain_n * rtb_u_ix;

  /* DiscreteIntegrator: '<S10>/Discrete-Time Integrator2' */
  rtb_u_j = Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTAT_a;

  /* Sum: '<S10>/Sum6' */
  rtb_Sum6 = rtb_u_i + rtb_u_j;

  /* Saturate: '<S10>/Saturation1' */
  if (rtb_Sum6 > Vodorod_V2_P.Saturation1_UpperSat_o) {
    Vodorod_V2_B.u = Vodorod_V2_P.Saturation1_UpperSat_o;
  } else if (rtb_Sum6 < Vodorod_V2_P.Saturation1_LowerSat_o) {
    Vodorod_V2_B.u = Vodorod_V2_P.Saturation1_LowerSat_o;
  } else {
    Vodorod_V2_B.u = rtb_Sum6;
  }

  /* End of Saturate: '<S10>/Saturation1' */
  /* Sum: '<S12>/Sum' incorporates:
   *  Clock: '<S40>/Clock'
   *  Constant: '<S40>/Constant'
   *  Lookup_n-D: '<S40>/Look-Up Table1'
   *  Math: '<S40>/Math Function'
   *  S-Function (sfun_tstart): '<S40>/startTime'
   *  Sum: '<S40>/Sum'
   */
  rtb_Sum = Vodorod_V2_B.u - look1_binlxpw(rt_remd_snf(Vodorod_V2_M->Timing.t[0]
    - (0.0), Vodorod_V2_P.Constant_Value), Vodorod_V2_P.LookUpTable1_bp01Data,
    Vodorod_V2_P.RepeatingSequence_rep_seq_y, 1U);

  /* Relay: '<S12>/Relay1' */
  if (rtmIsMajorTimeStep(Vodorod_V2_M)) {
    if (rtb_Sum >= Vodorod_V2_P.Relay1_OnVal) {
      Vodorod_V2_DW.Relay1_Mode = true;
    } else {
      if (rtb_Sum <= Vodorod_V2_P.Relay1_OffVal) {
        Vodorod_V2_DW.Relay1_Mode = false;
      }
    }
  }

  if (Vodorod_V2_DW.Relay1_Mode) {
    rtb_Sum = Vodorod_V2_P.Relay1_YOn;
  } else {
    rtb_Sum = Vodorod_V2_P.Relay1_YOff;
  }

  /* End of Relay: '<S12>/Relay1' */

  /* CombinatorialLogic: '<S42>/Logic' incorporates:
   *  DataTypeConversion: '<S12>/Data Type Conversion'
   *  Logic: '<S12>/Logical Operator'
   *  Memory: '<S42>/Memory'
   */
  rowIdx = (int32_T)(((((uint32_T)(rtb_Sum != 0.0) << 1) + !(rtb_Sum != 0.0)) <<
                      1) + Vodorod_V2_DW.Memory_PreviousInput);
  rtb_Logic[0U] = Vodorod_V2_P.Logic_table[(uint32_T)rowIdx];
  rtb_Logic[1U] = Vodorod_V2_P.Logic_table[rowIdx + 8U];

  /* DataTypeConversion: '<S38>/Data Type Conversion' */
  Vodorod_V2_B.DataTypeConversion_l = rtb_Logic[0];

  /* Gain: '<S10>/Proportional gain1' */
  rtb_Proportionalgain1 = Vodorod_V2_P.Proportionalgain1_Gain * rtb_u_ix;

  /* S-Function (sfun_tstart): '<S41>/startTime' */
  /* S-Function Block (sfun_tstart): <S41>/startTime */
  Vodorod_V2_B.startTime = (0.0);

  /* S-Function (sfun_tstart): '<S43>/startTime' */
  /* S-Function Block (sfun_tstart): <S43>/startTime */
  Vodorod_V2_B.startTime_n = (0.0);

  /* Matfile logging */
  rt_UpdateTXYLogVars(Vodorod_V2_M->rtwLogInfo, (Vodorod_V2_M->Timing.t));

  /* Update for S-Function (sfun_spssw_discc): '<S46>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S17>/eee'
   *  Constant: '<S19>/eee'
   *  Constant: '<S48>/SwitchCurrents'
   */

  /* S-Function block: <S46>/State-Space */
  {
    const real_T *As = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.AS;
    const real_T *Bs = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.BS;
    real_T *xtmp = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.XTMP;
    real_T accum;

    /* Calculate new states... */
    {
      int_T i1;
      real_T *xd = &Vodorod_V2_DW.StateSpace_DSTATE[0];
      for (i1=0; i1 < 6; i1++) {
        accum = 0.0;

        {
          int_T i2;
          real_T *xd = &Vodorod_V2_DW.StateSpace_DSTATE[0];
          for (i2=0; i2 < 6; i2++) {
            accum += *(As++) * xd[i2];
          }
        }

        {
          int_T i2;
          const real_T *u0 = Vodorod_V2_P.SwitchCurrents_Value;
          for (i2=0; i2 < 7; i2++) {
            accum += *(Bs++) * u0[i2];
          }

          accum += *(Bs++) * Vodorod_V2_P.u00_Amplitude;
          accum += *(Bs++) * Vodorod_V2_P.eee_Value;
          accum += *(Bs++) * Vodorod_V2_P.eee_Value_h;
        }

        xtmp[i1] = accum;
      }
    }

    {
      int_T i1;
      real_T *xd = &Vodorod_V2_DW.StateSpace_DSTATE[0];
      for (i1=0; i1 < 6; i1++) {
        xd[i1] = xtmp[i1];
      }
    }

    {
      int_T *gState = (int_T*)Vodorod_V2_DW.StateSpace_PWORK.G_STATE;

      /* Store switch gates values for next step */
      *(gState++) = (int_T) 0.0;
      *(gState++) = (int_T) Vodorod_V2_B.DataTypeConversion;
      *(gState++) = (int_T) Vodorod_V2_B.DataTypeConversion_l;
      *(gState++) = (int_T) 0.0;
      *(gState++) = (int_T) 0.0;
      *(gState++) = (int_T) 0.0;
      *(gState++) = (int_T) 0.0;
    }
  }

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator2' */
  Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTATE +=
    Vodorod_V2_P.DiscreteTimeIntegrator2_gainval * rtb_Integralgain;
  if (Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTATE >=
      Vodorod_V2_P.DiscreteTimeIntegrator2_UpperSa) {
    Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTATE =
      Vodorod_V2_P.DiscreteTimeIntegrator2_UpperSa;
  } else {
    if (Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTATE <=
        Vodorod_V2_P.DiscreteTimeIntegrator2_LowerSa) {
      Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTATE =
        Vodorod_V2_P.DiscreteTimeIntegrator2_LowerSa;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator2' */

  /* Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator2' */
  Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTAT_a +=
    Vodorod_V2_P.DiscreteTimeIntegrator2_gainv_g * rtb_Proportionalgain1;
  if (Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTAT_a >=
      Vodorod_V2_P.DiscreteTimeIntegrator2_Upper_c) {
    Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTAT_a =
      Vodorod_V2_P.DiscreteTimeIntegrator2_Upper_c;
  } else {
    if (Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTAT_a <=
        Vodorod_V2_P.DiscreteTimeIntegrator2_Lower_o) {
      Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTAT_a =
        Vodorod_V2_P.DiscreteTimeIntegrator2_Lower_o;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S10>/Discrete-Time Integrator2' */

  /* Update for Memory: '<S42>/Memory' */
  Vodorod_V2_DW.Memory_PreviousInput = rtb_Logic[0];

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(Vodorod_V2_M)!=-1) &&
        !((rtmGetTFinal(Vodorod_V2_M)-Vodorod_V2_M->Timing.t[0]) >
          Vodorod_V2_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(Vodorod_V2_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Vodorod_V2_M->Timing.clockTick0)) {
    ++Vodorod_V2_M->Timing.clockTickH0;
  }

  Vodorod_V2_M->Timing.t[0] = Vodorod_V2_M->Timing.clockTick0 *
    Vodorod_V2_M->Timing.stepSize0 + Vodorod_V2_M->Timing.clockTickH0 *
    Vodorod_V2_M->Timing.stepSize0 * 4294967296.0;

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
    Vodorod_V2_M->Timing.clockTick1++;
    if (!Vodorod_V2_M->Timing.clockTick1) {
      Vodorod_V2_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void Vodorod_V2_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Vodorod_V2_M, 0,
                sizeof(RT_MODEL_Vodorod_V2_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Vodorod_V2_M->solverInfo,
                          &Vodorod_V2_M->Timing.simTimeStep);
    rtsiSetTPtr(&Vodorod_V2_M->solverInfo, &rtmGetTPtr(Vodorod_V2_M));
    rtsiSetStepSizePtr(&Vodorod_V2_M->solverInfo,
                       &Vodorod_V2_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Vodorod_V2_M->solverInfo, (&rtmGetErrorStatus
      (Vodorod_V2_M)));
    rtsiSetRTModelPtr(&Vodorod_V2_M->solverInfo, Vodorod_V2_M);
  }

  rtsiSetSimTimeStep(&Vodorod_V2_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Vodorod_V2_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Vodorod_V2_M, &Vodorod_V2_M->Timing.tArray[0]);
  rtmSetTFinal(Vodorod_V2_M, 3.0);
  Vodorod_V2_M->Timing.stepSize0 = 1.0E-6;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    Vodorod_V2_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Vodorod_V2_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Vodorod_V2_M->rtwLogInfo, (NULL));
    rtliSetLogT(Vodorod_V2_M->rtwLogInfo, "tout");
    rtliSetLogX(Vodorod_V2_M->rtwLogInfo, "");
    rtliSetLogXFinal(Vodorod_V2_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Vodorod_V2_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Vodorod_V2_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Vodorod_V2_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Vodorod_V2_M->rtwLogInfo, 1);
    rtliSetLogY(Vodorod_V2_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Vodorod_V2_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Vodorod_V2_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &Vodorod_V2_B), 0,
                sizeof(B_Vodorod_V2_T));

  /* states (dwork) */
  (void) memset((void *)&Vodorod_V2_DW, 0,
                sizeof(DW_Vodorod_V2_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Vodorod_V2_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Vodorod_V2_M), Vodorod_V2_M->Timing.stepSize0, (&rtmGetErrorStatus
    (Vodorod_V2_M)));

  /* Start for S-Function (sfun_spssw_discc): '<S46>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S17>/eee'
   *  Constant: '<S19>/eee'
   *  Constant: '<S48>/SwitchCurrents'
   */

  /* S-Function block: <S46>/State-Space */
  {
    Vodorod_V2_DW.StateSpace_PWORK.AS = (real_T*)calloc(6 * 6, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.BS = (real_T*)calloc(6 * 10, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.CS = (real_T*)calloc(11 * 6, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.DS = (real_T*)calloc(11 * 10, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.DX_COL = (real_T*)calloc(11, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.TMP2 = (real_T*)calloc(10, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.BD_COL = (real_T*)calloc(6, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.TMP1 = (real_T*)calloc(6, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.XTMP = (real_T*)calloc(6, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.SWITCH_STATUS = (int_T*)calloc(7, sizeof
      (int_T));
    Vodorod_V2_DW.StateSpace_PWORK.SW_CHG = (int_T*)calloc(7, sizeof(int_T));
    Vodorod_V2_DW.StateSpace_PWORK.G_STATE = (int_T*)calloc(7, sizeof(int_T));
    Vodorod_V2_DW.StateSpace_PWORK.Y_SWITCH = (real_T*)calloc(7, sizeof(real_T));
    Vodorod_V2_DW.StateSpace_PWORK.SWITCH_TYPES = (int_T*)calloc(7, sizeof(int_T));
    Vodorod_V2_DW.StateSpace_PWORK.IDX_OUT_SW = (int_T*)calloc(7, sizeof(int_T));
    Vodorod_V2_DW.StateSpace_PWORK.SWITCH_STATUS_INIT = (int_T*)calloc(7, sizeof
      (int_T));
    Vodorod_V2_DW.StateSpace_PWORK.USWLAST = (real_T*)calloc(7, sizeof(real_T));
  }

  /* InitializeConditions for S-Function (sfun_spssw_discc): '<S46>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S17>/eee'
   *  Constant: '<S19>/eee'
   *  Constant: '<S48>/SwitchCurrents'
   */
  {
    int32_T i, j;
    real_T *As = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.AS;
    real_T *Bs = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.BS;
    real_T *Cs = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.CS;
    real_T *Ds = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.DS;
    real_T *X0 = (real_T*)&Vodorod_V2_DW.StateSpace_DSTATE[0];
    for (i = 0; i < 6; i++) {
      X0[i] = (Vodorod_V2_P.StateSpace_X0_param[i]);
    }

    /* Copy and transpose A and B */
    for (i=0; i<6; i++) {
      for (j=0; j<6; j++)
        As[i*6 + j] = (Vodorod_V2_P.StateSpace_AS_param[i + j*6]);
      for (j=0; j<10; j++)
        Bs[i*10 + j] = (Vodorod_V2_P.StateSpace_BS_param[i + j*6]);
    }

    /* Copy and transpose C */
    for (i=0; i<11; i++) {
      for (j=0; j<6; j++)
        Cs[i*6 + j] = (Vodorod_V2_P.StateSpace_CS_param[i + j*11]);
    }

    /* Copy and transpose D */
    for (i=0; i<11; i++) {
      for (j=0; j<10; j++)
        Ds[i*10 + j] = (Vodorod_V2_P.StateSpace_DS_param[i + j*11]);
    }

    {
      /* Switches work vectors */
      int_T *switch_status = (int_T*)
        Vodorod_V2_DW.StateSpace_PWORK.SWITCH_STATUS;
      int_T *gState = (int_T*)Vodorod_V2_DW.StateSpace_PWORK.G_STATE;
      real_T *yswitch = (real_T*)Vodorod_V2_DW.StateSpace_PWORK.Y_SWITCH;
      int_T *switchTypes = (int_T*)Vodorod_V2_DW.StateSpace_PWORK.SWITCH_TYPES;
      int_T *idxOutSw = (int_T*)Vodorod_V2_DW.StateSpace_PWORK.IDX_OUT_SW;
      int_T *switch_status_init = (int_T*)
        Vodorod_V2_DW.StateSpace_PWORK.SWITCH_STATUS_INIT;

      /* Initialize work vectors */
      switch_status[0] = 0;
      switch_status_init[0] = 0;
      gState[0] = (int_T) 0.0;
      yswitch[0] = 1/1.0E-6;
      switchTypes[0] = (int_T)1.0;
      idxOutSw[0] = ((int_T)0.0) - 1;
      switch_status[1] = 0;
      switch_status_init[1] = 0;
      gState[1] = (int_T) 0.0;
      yswitch[1] = 1/6.7222222222222223;
      switchTypes[1] = (int_T)1.0;
      idxOutSw[1] = ((int_T)0.0) - 1;
      switch_status[2] = 0;
      switch_status_init[2] = 0;
      gState[2] = (int_T) 0.0;
      yswitch[2] = 1/1.0E-6;
      switchTypes[2] = (int_T)1.0;
      idxOutSw[2] = ((int_T)0.0) - 1;
      switch_status[3] = 0;
      switch_status_init[3] = 0;
      gState[3] = (int_T) 0.0;
      yswitch[3] = 1/1.0E-6;
      switchTypes[3] = (int_T)3.0;
      idxOutSw[3] = ((int_T)0.0) - 1;
      switch_status[4] = 0;
      switch_status_init[4] = 0;
      gState[4] = (int_T) 0.0;
      yswitch[4] = 1/0.001;
      switchTypes[4] = (int_T)3.0;
      idxOutSw[4] = ((int_T)0.0) - 1;
      switch_status[5] = 0;
      switch_status_init[5] = 0;
      gState[5] = (int_T) 0.0;
      yswitch[5] = 1/0.001;
      switchTypes[5] = (int_T)3.0;
      idxOutSw[5] = ((int_T)0.0) - 1;
      switch_status[6] = 0;
      switch_status_init[6] = 0;
      gState[6] = (int_T) 0.0;
      yswitch[6] = 1/1.0E-6;
      switchTypes[6] = (int_T)3.0;
      idxOutSw[6] = ((int_T)0.0) - 1;
    }
  }

  /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator2' */
  Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTATE =
    Vodorod_V2_P.DiscreteTimeIntegrator2_IC;

  /* InitializeConditions for DiscreteIntegrator: '<S10>/Discrete-Time Integrator2' */
  Vodorod_V2_DW.DiscreteTimeIntegrator2_DSTAT_a =
    Vodorod_V2_P.DiscreteTimeIntegrator2_IC_f;

  /* InitializeConditions for Memory: '<S42>/Memory' */
  Vodorod_V2_DW.Memory_PreviousInput = Vodorod_V2_P.SRFlipFlop_initial_condition;
}

/* Model terminate function */
void Vodorod_V2_terminate(void)
{
  /* Terminate for S-Function (sfun_spssw_discc): '<S46>/State-Space' incorporates:
   *  Constant: '<S16>/DC'
   *  Constant: '<S17>/eee'
   *  Constant: '<S19>/eee'
   *  Constant: '<S48>/SwitchCurrents'
   */

  /* S-Function block: <S46>/State-Space */
  {
    /* Free memory */
    free(Vodorod_V2_DW.StateSpace_PWORK.AS);
    free(Vodorod_V2_DW.StateSpace_PWORK.BS);
    free(Vodorod_V2_DW.StateSpace_PWORK.CS);
    free(Vodorod_V2_DW.StateSpace_PWORK.DS);
    free(Vodorod_V2_DW.StateSpace_PWORK.DX_COL);
    free(Vodorod_V2_DW.StateSpace_PWORK.TMP2);
    free(Vodorod_V2_DW.StateSpace_PWORK.BD_COL);
    free(Vodorod_V2_DW.StateSpace_PWORK.TMP1);
    free(Vodorod_V2_DW.StateSpace_PWORK.XTMP);

    /*
     * Circuit has switches*/
    free(Vodorod_V2_DW.StateSpace_PWORK.G_STATE);
    free(Vodorod_V2_DW.StateSpace_PWORK.SWITCH_STATUS);
    free(Vodorod_V2_DW.StateSpace_PWORK.SW_CHG);
    free(Vodorod_V2_DW.StateSpace_PWORK.SWITCH_STATUS_INIT);
  }
}
