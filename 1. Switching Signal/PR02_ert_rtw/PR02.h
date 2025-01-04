/*
 * File: PR02.h
 *
 * Code generated for Simulink model 'PR02'.
 *
 * Model version                  : 1.10
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Dec  4 14:05:37 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PR02_h_
#define RTW_HEADER_PR02_h_
#ifndef PR02_COMMON_INCLUDES_
#define PR02_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "IQmathLib.h"
#endif                                 /* PR02_COMMON_INCLUDES_ */

#include "PR02_types.h"
#include <string.h>
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

extern void config_ePWMSyncSource(void);
extern void config_ePWMSyncSource(void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_TBSync (void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_XBAR(void);
extern void config_ePWM_TBSync(void);

/* Parameters (default storage) */
struct P_PR02_T_ {
  real_T SineWave_Amp;                 /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Bias;                /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Freq;                /* Expression: 2*pi*50
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T SineWave_Phase;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave'
                                        */
  real_T Multiply_Gain;                /* Expression: 0.9
                                        * Referenced by: '<Root>/Multiply'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Multiply1_Gain;               /* Expression: 2500
                                        * Referenced by: '<Root>/Multiply1'
                                        */
  real_T SineWave1_Amp;                /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_Freq;               /* Expression: 2*pi*50
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T SineWave1_Phase;              /* Expression: 2*pi/3
                                        * Referenced by: '<Root>/Sine Wave1'
                                        */
  real_T Multiply4_Gain;               /* Expression: 0.9
                                        * Referenced by: '<Root>/Multiply4'
                                        */
  real_T Constant2_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Multiply2_Gain;               /* Expression: 2500
                                        * Referenced by: '<Root>/Multiply2'
                                        */
  real_T SineWave2_Amp;                /* Expression: 1
                                        * Referenced by: '<Root>/Sine Wave2'
                                        */
  real_T SineWave2_Bias;               /* Expression: 0
                                        * Referenced by: '<Root>/Sine Wave2'
                                        */
  real_T SineWave2_Freq;               /* Expression: 2*pi*50
                                        * Referenced by: '<Root>/Sine Wave2'
                                        */
  real_T SineWave2_Phase;              /* Expression: 4*pi/3
                                        * Referenced by: '<Root>/Sine Wave2'
                                        */
  real_T Multiply5_Gain;               /* Expression: 0.9
                                        * Referenced by: '<Root>/Multiply5'
                                        */
  real_T Constant3_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Multiply3_Gain;               /* Expression: 2500
                                        * Referenced by: '<Root>/Multiply3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PR02_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_PR02_T PR02_P;

/* Model entry point functions */
extern void PR02_initialize(void);
extern void PR02_step(void);
extern void PR02_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PR02_T *const PR02_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

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
 * '<Root>' : 'PR02'
 */
#endif                                 /* RTW_HEADER_PR02_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
