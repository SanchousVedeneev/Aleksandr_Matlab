/*
 * SHIP_DOWN_matlab_2017.h
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

#ifndef RTW_HEADER_SHIP_DOWN_matlab_2017_h_
#define RTW_HEADER_SHIP_DOWN_matlab_2017_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef SHIP_DOWN_matlab_2017_COMMON_INCLUDES_
# define SHIP_DOWN_matlab_2017_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* SHIP_DOWN_matlab_2017_COMMON_INCLUDES_ */

#include "SHIP_DOWN_matlab_2017_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeDeltaY
# define rtmGetOdeDeltaY(rtm)          ((rtm)->OdeDeltaY)
#endif

#ifndef rtmSetOdeDeltaY
# define rtmSetOdeDeltaY(rtm, val)     ((rtm)->OdeDeltaY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeX0
# define rtmGetOdeX0(rtm)              ((rtm)->odeX0)
#endif

#ifndef rtmSetOdeX0
# define rtmSetOdeX0(rtm, val)         ((rtm)->odeX0 = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
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
  real_T StateSpace_o1[7];             /* '<S40>/State-Space' */
  real_T StateSpace_o2[3];             /* '<S40>/State-Space' */
  real_T donotdeletethisgain;          /* '<S3>/do not delete this gain' */
  real_T donotdeletethisgain_h;        /* '<S1>/do not delete this gain' */
  real_T donotdeletethisgain_n;        /* '<S4>/do not delete this gain' */
  real_T donotdeletethisgain_p;        /* '<S2>/do not delete this gain' */
  real_T Add;                          /* '<S16>/Add' */
  real_T Saturation;                   /* '<S31>/Saturation' */
  real_T Sum;                          /* '<S31>/Sum' */
} B_SHIP_DOWN_matlab_2017_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T StateSpace_DSTATE[4];         /* '<S40>/State-Space' */
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
  } StateSpace_PWORK;                  /* '<S40>/State-Space' */

  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData[2];
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData[4];
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  int_T StateSpace_IWORK[11];          /* '<S40>/State-Space' */
} DW_SHIP_DOWN_matlab_2017_T;

/* Continuous states (default storage) */
typedef struct {
  real_T integrator_CSTATE;            /* '<S28>/integrator' */
  real_T integrator_CSTATE_p;          /* '<S29>/integrator' */
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
  real_T TransferFcn2_CSTATE;          /* '<Root>/Transfer Fcn2' */
  real_T integrator_CSTATE_k;          /* '<S22>/integrator' */
  real_T integrator_CSTATE_d;          /* '<S23>/integrator' */
  real_T integrator_CSTATE_i;          /* '<S24>/integrator' */
  real_T integrator_CSTATE_kv;         /* '<S25>/integrator' */
  real_T integrator_CSTATE_f;          /* '<S26>/integrator' */
  real_T integrator_CSTATE_m;          /* '<S27>/integrator' */
} X_SHIP_DOWN_matlab_2017_T;

/* State derivatives (default storage) */
typedef struct {
  real_T integrator_CSTATE;            /* '<S28>/integrator' */
  real_T integrator_CSTATE_p;          /* '<S29>/integrator' */
  real_T TransferFcn1_CSTATE;          /* '<Root>/Transfer Fcn1' */
  real_T TransferFcn2_CSTATE;          /* '<Root>/Transfer Fcn2' */
  real_T integrator_CSTATE_k;          /* '<S22>/integrator' */
  real_T integrator_CSTATE_d;          /* '<S23>/integrator' */
  real_T integrator_CSTATE_i;          /* '<S24>/integrator' */
  real_T integrator_CSTATE_kv;         /* '<S25>/integrator' */
  real_T integrator_CSTATE_f;          /* '<S26>/integrator' */
  real_T integrator_CSTATE_m;          /* '<S27>/integrator' */
} XDot_SHIP_DOWN_matlab_2017_T;

/* State disabled  */
typedef struct {
  boolean_T integrator_CSTATE;         /* '<S28>/integrator' */
  boolean_T integrator_CSTATE_p;       /* '<S29>/integrator' */
  boolean_T TransferFcn1_CSTATE;       /* '<Root>/Transfer Fcn1' */
  boolean_T TransferFcn2_CSTATE;       /* '<Root>/Transfer Fcn2' */
  boolean_T integrator_CSTATE_k;       /* '<S22>/integrator' */
  boolean_T integrator_CSTATE_d;       /* '<S23>/integrator' */
  boolean_T integrator_CSTATE_i;       /* '<S24>/integrator' */
  boolean_T integrator_CSTATE_kv;      /* '<S25>/integrator' */
  boolean_T integrator_CSTATE_f;       /* '<S26>/integrator' */
  boolean_T integrator_CSTATE_m;       /* '<S27>/integrator' */
} XDis_SHIP_DOWN_matlab_2017_T;

#ifndef ODE8_INTG
#define ODE8_INTG

/* ODE8 Integration Data */
typedef struct {
  real_T *deltaY;                      /* output diff */
  real_T *f[13];                       /* derivatives */
  real_T *x0;                          /* Initial State */
} ODE8_IntgData;

#endif

/* Parameters (default storage) */
struct P_SHIP_DOWN_matlab_2017_T_ {
  real_T Uvh;                          /* Variable: Uvh
                                        * Referenced by: '<S30>/DC'
                                        */
  real_T u1_Value;                     /* Expression: 0
                                        * Referenced by: '<S31>/0 1'
                                        */
  real_T Gain_Gain;                    /* Expression: 1./Ron
                                        * Referenced by: '<S31>/Gain'
                                        */
  real_T u1_Value_o;                   /* Expression: 0
                                        * Referenced by: '<S36>/0 1'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 1./Ron
                                        * Referenced by: '<S36>/Gain'
                                        */
  real_T u1_Value_p;                   /* Expression: 0
                                        * Referenced by: '<S38>/0 1'
                                        */
  real_T uRsw_Gain;                    /* Expression: 1./Ron
                                        * Referenced by: '<S38>/1//Rsw'
                                        */
  real_T SwitchCurrents_Value[3];      /* Expression: zeros(3,1)
                                        * Referenced by: '<S42>/SwitchCurrents'
                                        */
  real_T eee_Value;                    /* Expression: Vf
                                        * Referenced by: '<S31>/eee'
                                        */
  real_T eee_Value_c;                  /* Expression: Vf
                                        * Referenced by: '<S36>/eee'
                                        */
  real_T StateSpace_AS_param[16];      /* Expression: S.A
                                        * Referenced by: '<S40>/State-Space'
                                        */
  real_T StateSpace_BS_param[24];      /* Expression: S.B
                                        * Referenced by: '<S40>/State-Space'
                                        */
  real_T StateSpace_CS_param[28];      /* Expression: S.C
                                        * Referenced by: '<S40>/State-Space'
                                        */
  real_T StateSpace_DS_param[42];      /* Expression: S.D
                                        * Referenced by: '<S40>/State-Space'
                                        */
  real_T StateSpace_X0_param[4];       /* Expression: S.x0
                                        * Referenced by: '<S40>/State-Space'
                                        */
  real_T donotdeletethisgain_Gain;     /* Expression: 1
                                        * Referenced by: '<S3>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_m;   /* Expression: 1
                                        * Referenced by: '<S1>/do not delete this gain'
                                        */
  real_T integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S28>/integrator'
                                        */
  real_T integrator_IC_c;              /* Expression: 0
                                        * Referenced by: '<S29>/integrator'
                                        */
  real_T TransferFcn1_A;               /* Computed Parameter: TransferFcn1_A
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  real_T TransferFcn1_C;               /* Computed Parameter: TransferFcn1_C
                                        * Referenced by: '<Root>/Transfer Fcn1'
                                        */
  real_T TransferFcn2_A;               /* Computed Parameter: TransferFcn2_A
                                        * Referenced by: '<Root>/Transfer Fcn2'
                                        */
  real_T TransferFcn2_C;               /* Computed Parameter: TransferFcn2_C
                                        * Referenced by: '<Root>/Transfer Fcn2'
                                        */
  real_T donotdeletethisgain_Gain_d;   /* Expression: 1
                                        * Referenced by: '<S4>/do not delete this gain'
                                        */
  real_T donotdeletethisgain_Gain_o;   /* Expression: 1
                                        * Referenced by: '<S2>/do not delete this gain'
                                        */
  real_T integrator_IC_l;              /* Expression: 0
                                        * Referenced by: '<S22>/integrator'
                                        */
  real_T integrator_IC_n;              /* Expression: 0
                                        * Referenced by: '<S23>/integrator'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S38>/Switch'
                                        */
  real_T Switch_Threshold_j;           /* Expression: 0.5
                                        * Referenced by: '<S36>/Switch'
                                        */
  real_T Saturation_UpperSat;          /* Expression: inf
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: 0
                                        * Referenced by: '<S36>/Saturation'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0.5
                                        * Referenced by: '<S31>/Switch'
                                        */
  real_T Saturation_UpperSat_b;        /* Expression: inf
                                        * Referenced by: '<S31>/Saturation'
                                        */
  real_T Saturation_LowerSat_k;        /* Expression: 0
                                        * Referenced by: '<S31>/Saturation'
                                        */
  real_T integrator_IC_ll;             /* Expression: 0
                                        * Referenced by: '<S24>/integrator'
                                        */
  real_T integrator_IC_d;              /* Expression: 0
                                        * Referenced by: '<S25>/integrator'
                                        */
  real_T integrator_IC_n3;             /* Expression: 0
                                        * Referenced by: '<S26>/integrator'
                                        */
  real_T integrator_IC_o;              /* Expression: 0
                                        * Referenced by: '<S27>/integrator'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_SHIP_DOWN_matlab_2017_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  X_SHIP_DOWN_matlab_2017_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T OdeDeltaY[10];
  real_T odeF[13][10];
  real_T odeX0[10];
  ODE8_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

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
extern P_SHIP_DOWN_matlab_2017_T SHIP_DOWN_matlab_2017_P;

/* Block signals (default storage) */
extern B_SHIP_DOWN_matlab_2017_T SHIP_DOWN_matlab_2017_B;

/* Continuous states (default storage) */
extern X_SHIP_DOWN_matlab_2017_T SHIP_DOWN_matlab_2017_X;

/* Block states (default storage) */
extern DW_SHIP_DOWN_matlab_2017_T SHIP_DOWN_matlab_2017_DW;

/* Model entry point functions */
extern void SHIP_DOWN_matlab_2017_initialize(void);
extern void SHIP_DOWN_matlab_2017_step(void);
extern void SHIP_DOWN_matlab_2017_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SHIP_DOWN_matlab_201_T *const SHIP_DOWN_matlab_2017_M;

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
 * '<Root>' : 'SHIP_DOWN_matlab_2017'
 * '<S1>'   : 'SHIP_DOWN_matlab_2017/DT_4'
 * '<S2>'   : 'SHIP_DOWN_matlab_2017/DT_5'
 * '<S3>'   : 'SHIP_DOWN_matlab_2017/DU_3'
 * '<S4>'   : 'SHIP_DOWN_matlab_2017/DU_4'
 * '<S5>'   : 'SHIP_DOWN_matlab_2017/Mean_1'
 * '<S6>'   : 'SHIP_DOWN_matlab_2017/Mean_2'
 * '<S7>'   : 'SHIP_DOWN_matlab_2017/Mean_3'
 * '<S8>'   : 'SHIP_DOWN_matlab_2017/Mean_4'
 * '<S9>'   : 'SHIP_DOWN_matlab_2017/Mean_5'
 * '<S10>'  : 'SHIP_DOWN_matlab_2017/Mean_6'
 * '<S11>'  : 'SHIP_DOWN_matlab_2017/Mean_7'
 * '<S12>'  : 'SHIP_DOWN_matlab_2017/Mean_8'
 * '<S13>'  : 'SHIP_DOWN_matlab_2017/Subsystem'
 * '<S14>'  : 'SHIP_DOWN_matlab_2017/Uпит'
 * '<S15>'  : 'SHIP_DOWN_matlab_2017/VD1'
 * '<S16>'  : 'SHIP_DOWN_matlab_2017/VT1'
 * '<S17>'  : 'SHIP_DOWN_matlab_2017/powergui'
 * '<S18>'  : 'SHIP_DOWN_matlab_2017/DT_4/Model'
 * '<S19>'  : 'SHIP_DOWN_matlab_2017/DT_5/Model'
 * '<S20>'  : 'SHIP_DOWN_matlab_2017/DU_3/Model'
 * '<S21>'  : 'SHIP_DOWN_matlab_2017/DU_4/Model'
 * '<S22>'  : 'SHIP_DOWN_matlab_2017/Mean_1/Model'
 * '<S23>'  : 'SHIP_DOWN_matlab_2017/Mean_2/Model'
 * '<S24>'  : 'SHIP_DOWN_matlab_2017/Mean_3/Model'
 * '<S25>'  : 'SHIP_DOWN_matlab_2017/Mean_4/Model'
 * '<S26>'  : 'SHIP_DOWN_matlab_2017/Mean_5/Model'
 * '<S27>'  : 'SHIP_DOWN_matlab_2017/Mean_6/Model'
 * '<S28>'  : 'SHIP_DOWN_matlab_2017/Mean_7/Model'
 * '<S29>'  : 'SHIP_DOWN_matlab_2017/Mean_8/Model'
 * '<S30>'  : 'SHIP_DOWN_matlab_2017/Uпит/Model'
 * '<S31>'  : 'SHIP_DOWN_matlab_2017/VD1/Model'
 * '<S32>'  : 'SHIP_DOWN_matlab_2017/VD1/Model/Measurement list'
 * '<S33>'  : 'SHIP_DOWN_matlab_2017/VT1/Diode'
 * '<S34>'  : 'SHIP_DOWN_matlab_2017/VT1/Ideal Switch'
 * '<S35>'  : 'SHIP_DOWN_matlab_2017/VT1/Measurement list'
 * '<S36>'  : 'SHIP_DOWN_matlab_2017/VT1/Diode/Model'
 * '<S37>'  : 'SHIP_DOWN_matlab_2017/VT1/Diode/Model/Measurement list'
 * '<S38>'  : 'SHIP_DOWN_matlab_2017/VT1/Ideal Switch/Model'
 * '<S39>'  : 'SHIP_DOWN_matlab_2017/VT1/Ideal Switch/Model/Measurement list'
 * '<S40>'  : 'SHIP_DOWN_matlab_2017/powergui/EquivalentModel1'
 * '<S41>'  : 'SHIP_DOWN_matlab_2017/powergui/EquivalentModel1/Gates'
 * '<S42>'  : 'SHIP_DOWN_matlab_2017/powergui/EquivalentModel1/Sources'
 * '<S43>'  : 'SHIP_DOWN_matlab_2017/powergui/EquivalentModel1/Status'
 * '<S44>'  : 'SHIP_DOWN_matlab_2017/powergui/EquivalentModel1/Yout'
 */
#endif                                 /* RTW_HEADER_SHIP_DOWN_matlab_2017_h_ */
