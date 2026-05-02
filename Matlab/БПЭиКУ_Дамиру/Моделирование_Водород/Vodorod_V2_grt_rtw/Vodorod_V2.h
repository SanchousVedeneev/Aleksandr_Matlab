/*
 * Vodorod_V2.h
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

#ifndef RTW_HEADER_Vodorod_V2_h_
#define RTW_HEADER_Vodorod_V2_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Vodorod_V2_COMMON_INCLUDES_
# define Vodorod_V2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Vodorod_V2_COMMON_INCLUDES_ */

#include "Vodorod_V2_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T StateSpace_o1[11];            /* '<S46>/State-Space' */
  real_T StateSpace_o2[7];             /* '<S46>/State-Space' */
  real_T DataTypeConversion;           /* '<S24>/Data Type Conversion' */
  real_T u;                            /* '<S10>/Saturation1' */
  real_T DataTypeConversion_l;         /* '<S38>/Data Type Conversion' */
  real_T startTime;                    /* '<S41>/startTime' */
  real_T startTime_n;                  /* '<S43>/startTime' */
} B_Vodorod_V2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T StateSpace_DSTATE[6];         /* '<S46>/State-Space' */
  real_T DiscreteTimeIntegrator2_DSTATE;/* '<S11>/Discrete-Time Integrator2' */
  real_T DiscreteTimeIntegrator2_DSTAT_a;/* '<S10>/Discrete-Time Integrator2' */
  struct {
    void *AS;
    void *BS;
    void *CS;
    void *DS;
    void *DX_COL;
    void *BD_COL;
    void *TMP1;
    void *TMP2;
    void *XTMP;
    void *SWITCH_STATUS;
    void *SWITCH_STATUS_INIT;
    void *SW_CHG;
    void *G_STATE;
    void *USWLAST;
    void *XKM12;
    void *XKP12;
    void *XLAST;
    void *ULAST;
    void *IDX_SW_CHG;
    void *Y_SWITCH;
    void *SWITCH_TYPES;
    void *IDX_OUT_SW;
    void *SWITCH_TOPO_SAVED_IDX;
    void *SWITCH_MAP;
  } StateSpace_PWORK;                  /* '<S46>/State-Space' */

  struct {
    void *LoggedData[8];
  } Scope1_PWORK;                      /* '<S11>/Scope1' */

  struct {
    void *LoggedData[8];
  } Scope1_PWORK_e;                    /* '<S10>/Scope1' */

  struct {
    void *LoggedData[8];
  } Scope6_PWORK;                      /* '<Root>/Scope6' */

  int_T StateSpace_IWORK[11];          /* '<S46>/State-Space' */
  boolean_T Relay1_Mode;               /* '<S12>/Relay1' */
  boolean_T Memory_PreviousInput;      /* '<S42>/Memory' */
} DW_Vodorod_V2_T;

/* Parameters (default storage) */
struct P_Vodorod_V2_T_ {
  real_T u00_Amplitude;                /* Mask Parameter: u00_Amplitude
                                        * Referenced by: '<S16>/DC'
                                        */
  real_T RepeatingSequence_rep_seq_y[2];/* Mask Parameter: RepeatingSequence_rep_seq_y
                                         * Referenced by: '<S40>/Look-Up Table1'
                                         */
  boolean_T SRFlipFlop_initial_condition;/* Mask Parameter: SRFlipFlop_initial_condition
                                          * Referenced by: '<S42>/Memory'
                                          */
  real_T SwitchCurrents_Value[7];      /* Expression: zeros(7,1)
                                        * Referenced by: '<S48>/SwitchCurrents'
                                        */
  real_T eee_Value;                    /* Expression: Vf
                                        * Referenced by: '<S19>/eee'
                                        */
  real_T eee_Value_h;                  /* Expression: Vf
                                        * Referenced by: '<S17>/eee'
                                        */
  real_T StateSpace_AS_param[36];      /* Expression: S.A
                                        * Referenced by: '<S46>/State-Space'
                                        */
  real_T StateSpace_BS_param[60];      /* Expression: S.B
                                        * Referenced by: '<S46>/State-Space'
                                        */
  real_T StateSpace_CS_param[66];      /* Expression: S.C
                                        * Referenced by: '<S46>/State-Space'
                                        */
  real_T StateSpace_DS_param[110];     /* Expression: S.D
                                        * Referenced by: '<S46>/State-Space'
                                        */
  real_T StateSpace_X0_param[6];       /* Expression: S.x0
                                        * Referenced by: '<S46>/State-Space'
                                        */
  real_T Step_Time;                    /* Expression: 1
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_Y0;                      /* Expression: 0
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step_YFinal;                  /* Expression: 1
                                        * Referenced by: '<Root>/Step'
                                        */
  real_T Step1_Time;                   /* Expression: 2
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_Y0;                     /* Expression: 1
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Step1_YFinal;                 /* Expression: 0
                                        * Referenced by: '<Root>/Step1'
                                        */
  real_T Constant1_Value;              /* Expression: 580
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T gain2_Gain;                   /* Expression: 1
                                        * Referenced by: '<Root>/gain2'
                                        */
  real_T gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<Root>/gain3'
                                        */
  real_T Proportionalgain_Gain;        /* Expression: 0.8
                                        * Referenced by: '<S11>/Proportional gain'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 1
                                        * Referenced by: '<S11>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: -1
                                        * Referenced by: '<S11>/Saturation2'
                                        */
  real_T DiscreteTimeIntegrator2_gainval;/* Computed Parameter: DiscreteTimeIntegrator2_gainval
                                          * Referenced by: '<S11>/Discrete-Time Integrator2'
                                          */
  real_T DiscreteTimeIntegrator2_IC;   /* Expression: 0
                                        * Referenced by: '<S11>/Discrete-Time Integrator2'
                                        */
  real_T DiscreteTimeIntegrator2_UpperSa;/* Expression: 80
                                          * Referenced by: '<S11>/Discrete-Time Integrator2'
                                          */
  real_T DiscreteTimeIntegrator2_LowerSa;/* Expression: 0
                                          * Referenced by: '<S11>/Discrete-Time Integrator2'
                                          */
  real_T Saturation1_UpperSat;         /* Expression: 25
                                        * Referenced by: '<S11>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: 0
                                        * Referenced by: '<S11>/Saturation1'
                                        */
  real_T Integralgain_Gain;            /* Expression: 0.8
                                        * Referenced by: '<S11>/Integral gain'
                                        */
  real_T Constant2_Value;              /* Expression: 110
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<Root>/gain'
                                        */
  real_T donotdeletethisgain_Gain;     /* Expression: 1
                                        * Referenced by: '<S4>/do not delete this gain'
                                        */
  real_T gain1_Gain;                   /* Expression: 1
                                        * Referenced by: '<Root>/gain1'
                                        */
  real_T Proportionalgain_Gain_n;      /* Expression: 0.0013
                                        * Referenced by: '<S10>/Proportional gain'
                                        */
  real_T DiscreteTimeIntegrator2_gainv_g;/* Computed Parameter: DiscreteTimeIntegrator2_gainv_g
                                          * Referenced by: '<S10>/Discrete-Time Integrator2'
                                          */
  real_T DiscreteTimeIntegrator2_IC_f; /* Expression: 0
                                        * Referenced by: '<S10>/Discrete-Time Integrator2'
                                        */
  real_T DiscreteTimeIntegrator2_Upper_c;/* Expression: 0.68
                                          * Referenced by: '<S10>/Discrete-Time Integrator2'
                                          */
  real_T DiscreteTimeIntegrator2_Lower_o;/* Expression: 0
                                          * Referenced by: '<S10>/Discrete-Time Integrator2'
                                          */
  real_T Saturation1_UpperSat_o;       /* Expression: 0.68
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T Saturation1_LowerSat_o;       /* Expression: 0
                                        * Referenced by: '<S10>/Saturation1'
                                        */
  real_T Constant_Value;               /* Expression: period
                                        * Referenced by: '<S40>/Constant'
                                        */
  real_T LookUpTable1_bp01Data[2];     /* Expression: rep_seq_t - min(rep_seq_t)
                                        * Referenced by: '<S40>/Look-Up Table1'
                                        */
  real_T Relay1_OnVal;                 /* Expression: 0.01
                                        * Referenced by: '<S12>/Relay1'
                                        */
  real_T Relay1_OffVal;                /* Expression: -0.01
                                        * Referenced by: '<S12>/Relay1'
                                        */
  real_T Relay1_YOn;                   /* Expression: 1
                                        * Referenced by: '<S12>/Relay1'
                                        */
  real_T Relay1_YOff;                  /* Expression: 0
                                        * Referenced by: '<S12>/Relay1'
                                        */
  real_T Proportionalgain1_Gain;       /* Expression: 0.036
                                        * Referenced by: '<S10>/Proportional gain1'
                                        */
  boolean_T Logic_table[16];           /* Computed Parameter: Logic_table
                                        * Referenced by: '<S42>/Logic'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Vodorod_V2_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Vodorod_V2_T Vodorod_V2_P;

/* Block signals (default storage) */
extern B_Vodorod_V2_T Vodorod_V2_B;

/* Block states (default storage) */
extern DW_Vodorod_V2_T Vodorod_V2_DW;

/* Model entry point functions */
extern void Vodorod_V2_initialize(void);
extern void Vodorod_V2_step(void);
extern void Vodorod_V2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Vodorod_V2_T *const Vodorod_V2_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Vodorod_V2'
 * '<S1>'   : 'Vodorod_V2/300  Â'
 * '<S2>'   : 'Vodorod_V2/Diode1'
 * '<S3>'   : 'Vodorod_V2/Diode2'
 * '<S4>'   : 'Vodorod_V2/I nagr1'
 * '<S5>'   : 'Vodorod_V2/I nagr2'
 * '<S6>'   : 'Vodorod_V2/I nagr6'
 * '<S7>'   : 'Vodorod_V2/Ideal Switch1'
 * '<S8>'   : 'Vodorod_V2/Mosfet1'
 * '<S9>'   : 'Vodorod_V2/Mosfet2'
 * '<S10>'  : 'Vodorod_V2/PI Ud1'
 * '<S11>'  : 'Vodorod_V2/PI Ud2'
 * '<S12>'  : 'Vodorod_V2/Unlooped control system'
 * '<S13>'  : 'Vodorod_V2/Unlooped control system1'
 * '<S14>'  : 'Vodorod_V2/Voltage Measurement'
 * '<S15>'  : 'Vodorod_V2/powergui'
 * '<S16>'  : 'Vodorod_V2/300  Â/Model'
 * '<S17>'  : 'Vodorod_V2/Diode1/Model'
 * '<S18>'  : 'Vodorod_V2/Diode1/Model/Measurement list'
 * '<S19>'  : 'Vodorod_V2/Diode2/Model'
 * '<S20>'  : 'Vodorod_V2/Diode2/Model/Measurement list'
 * '<S21>'  : 'Vodorod_V2/I nagr1/Model'
 * '<S22>'  : 'Vodorod_V2/I nagr2/Model'
 * '<S23>'  : 'Vodorod_V2/I nagr6/Model'
 * '<S24>'  : 'Vodorod_V2/Ideal Switch1/Model'
 * '<S25>'  : 'Vodorod_V2/Ideal Switch1/Model/Measurement list'
 * '<S26>'  : 'Vodorod_V2/Mosfet1/Diode'
 * '<S27>'  : 'Vodorod_V2/Mosfet1/Ideal Switch'
 * '<S28>'  : 'Vodorod_V2/Mosfet1/Measurement list'
 * '<S29>'  : 'Vodorod_V2/Mosfet1/Diode/Model'
 * '<S30>'  : 'Vodorod_V2/Mosfet1/Diode/Model/Measurement list'
 * '<S31>'  : 'Vodorod_V2/Mosfet1/Ideal Switch/Model'
 * '<S32>'  : 'Vodorod_V2/Mosfet1/Ideal Switch/Model/Measurement list'
 * '<S33>'  : 'Vodorod_V2/Mosfet2/Diode'
 * '<S34>'  : 'Vodorod_V2/Mosfet2/Ideal Switch'
 * '<S35>'  : 'Vodorod_V2/Mosfet2/Measurement list'
 * '<S36>'  : 'Vodorod_V2/Mosfet2/Diode/Model'
 * '<S37>'  : 'Vodorod_V2/Mosfet2/Diode/Model/Measurement list'
 * '<S38>'  : 'Vodorod_V2/Mosfet2/Ideal Switch/Model'
 * '<S39>'  : 'Vodorod_V2/Mosfet2/Ideal Switch/Model/Measurement list'
 * '<S40>'  : 'Vodorod_V2/Unlooped control system/Repeating Sequence'
 * '<S41>'  : 'Vodorod_V2/Unlooped control system/Repeating Sequence1'
 * '<S42>'  : 'Vodorod_V2/Unlooped control system/S-R Flip-Flop'
 * '<S43>'  : 'Vodorod_V2/Unlooped control system1/Repeating Sequence2'
 * '<S44>'  : 'Vodorod_V2/Unlooped control system1/S-R Flip-Flop'
 * '<S45>'  : 'Vodorod_V2/Voltage Measurement/Model'
 * '<S46>'  : 'Vodorod_V2/powergui/EquivalentModel1'
 * '<S47>'  : 'Vodorod_V2/powergui/EquivalentModel1/Gates'
 * '<S48>'  : 'Vodorod_V2/powergui/EquivalentModel1/Sources'
 * '<S49>'  : 'Vodorod_V2/powergui/EquivalentModel1/Status'
 * '<S50>'  : 'Vodorod_V2/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_Vodorod_V2_h_ */
