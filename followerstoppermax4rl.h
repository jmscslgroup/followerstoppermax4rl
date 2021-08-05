//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: followerstoppermax4rl.h
//
// Code generated for Simulink model 'followerstoppermax4rl'.
//
// Model version                  : 3.46
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Thu Aug  5 14:18:10 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_followerstoppermax4rl_h_
#define RTW_HEADER_followerstoppermax4rl_h_
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "followerstoppermax4rl_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_followerstoppermax4rl_T {
  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist In1;// '<S17>/In1'
  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist In1_h;// '<S16>/In1'
  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist In1_p;// '<S15>/In1'
  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist BusAssignment1;// '<Root>/Bus Assignment1' 
  real_T x1;
  real_T x2;
  real_T x3;
  real_T value;
  SL_Bus_followerstoppermax4rl_std_msgs_Float64 In1_m;// '<S14>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_followerstoppermax4rl_T {
  ros_slros_internal_block_GetP_T obj; // '<S2>/Get Parameter6'
  ros_slros_internal_block_GetP_T obj_e;// '<S2>/Get Parameter5'
  ros_slros_internal_block_GetP_T obj_k;// '<S2>/Get Parameter4'
  ros_slros_internal_block_GetP_T obj_i;// '<S2>/Get Parameter3'
  ros_slros_internal_block_GetP_T obj_p;// '<S2>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_n;// '<S2>/Get Parameter1'
  ros_slroscpp_internal_block_P_T obj_c;// '<S4>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_nc;// '<S13>/SinkBlock'
  ros_slroscpp_internal_block_P_T obj_ij;// '<S11>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_d;// '<S8>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_is;// '<S7>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_o;// '<S6>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_f;// '<S5>/SourceBlock'
};

// Parameters (default storage)
struct P_followerstoppermax4rl_T_ {
  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist Constant_Value;// Computed Parameter: Constant_Value
                                                                     //  Referenced by: '<S1>/Constant'

  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist Out1_Y0;// Computed Parameter: Out1_Y0
                                                              //  Referenced by: '<S15>/Out1'

  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                      //  Referenced by: '<S6>/Constant'

  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                                //  Referenced by: '<S16>/Out1'

  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist Constant_Value_pq;// Computed Parameter: Constant_Value_pq
                                                                      //  Referenced by: '<S7>/Constant'

  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                                //  Referenced by: '<S17>/Out1'

  SL_Bus_followerstoppermax4rl_geometry_msgs_Twist Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                      //  Referenced by: '<S8>/Constant'

  SL_Bus_followerstoppermax4rl_std_msgs_Float64 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                    //  Referenced by: '<S9>/Constant'

  SL_Bus_followerstoppermax4rl_std_msgs_Float64 Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                                             //  Referenced by: '<S14>/Out1'

  SL_Bus_followerstoppermax4rl_std_msgs_Float64 Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                                    //  Referenced by: '<S5>/Constant'

  SL_Bus_followerstoppermax4rl_std_msgs_UInt8 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                  //  Referenced by: '<S12>/Constant'

  real_T Constant1_Value;              // Expression: 0
                                          //  Referenced by: '<Root>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_followerstoppermax4rl_T {
  const char_T *errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_followerstoppermax4rl_T followerstoppermax4rl_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_followerstoppermax4rl_T followerstoppermax4rl_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern struct DW_followerstoppermax4rl_T followerstoppermax4rl_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void followerstoppermax4rl_initialize(void);
  extern void followerstoppermax4rl_step(void);
  extern void followerstoppermax4rl_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_followerstoppermax4r_T *const followerstoppermax4rl_M;

#ifdef __cplusplus

}
#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'followerstoppermax4rl'
//  '<S1>'   : 'followerstoppermax4rl/Blank Message1'
//  '<S2>'   : 'followerstoppermax4rl/Follower StopperMax Switch'
//  '<S3>'   : 'followerstoppermax4rl/Publish Region1'
//  '<S4>'   : 'followerstoppermax4rl/Publish1'
//  '<S5>'   : 'followerstoppermax4rl/Subscribe'
//  '<S6>'   : 'followerstoppermax4rl/Subscribe4'
//  '<S7>'   : 'followerstoppermax4rl/Subscribe5'
//  '<S8>'   : 'followerstoppermax4rl/Subscribe6'
//  '<S9>'   : 'followerstoppermax4rl/Follower StopperMax Switch/Blank Message1'
//  '<S10>'  : 'followerstoppermax4rl/Follower StopperMax Switch/MATLAB Function1'
//  '<S11>'  : 'followerstoppermax4rl/Follower StopperMax Switch/Publish1'
//  '<S12>'  : 'followerstoppermax4rl/Publish Region1/Blank Message1'
//  '<S13>'  : 'followerstoppermax4rl/Publish Region1/Publish1'
//  '<S14>'  : 'followerstoppermax4rl/Subscribe/Enabled Subsystem'
//  '<S15>'  : 'followerstoppermax4rl/Subscribe4/Enabled Subsystem'
//  '<S16>'  : 'followerstoppermax4rl/Subscribe5/Enabled Subsystem'
//  '<S17>'  : 'followerstoppermax4rl/Subscribe6/Enabled Subsystem'

#endif                                 // RTW_HEADER_followerstoppermax4rl_h_

//
// File trailer for generated code.
//
// [EOF]
//
