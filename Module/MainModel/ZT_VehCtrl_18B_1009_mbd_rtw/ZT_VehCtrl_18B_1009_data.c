/*
 * File: ZT_VehCtrl_18B_1009_data.c
 *
 * Code generated for Simulink model 'ZT_VehCtrl_18B_1009'.
 *
 * Model version                   : 1.23
 * Simulink Coder version          : 9.0 (R2018b) 24-May-2018
 * MBDT for MPC57xx Series Version : 3.2.0 (R2016a-R2020a) 14-Apr-2020
 * C/C++ source code generated on  : Sat Oct 10 17:32:46 2026
 *
 * Target selection: mbd_mpc574x.tlc
 * Embedded hardware selection: Motorola PowerPC
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ZT_VehCtrl_18B_1009.h"
#include "ZT_VehCtrl_18B_1009_private.h"

/* Invariant block signals (default storage) */
const ConstB_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_ConstB = {
  0.0,                                 /* '<S225>/Gain5' */
  0.0,                                 /* '<S225>/Gain4' */
  0.0,                                 /* '<S225>/Gain1' */
  1.0F,                                /* '<S229>/Data Type Conversion1' */
  1.0F,                                /* '<S229>/Data Type Conversion' */
  0.0F,                                /* '<S191>/Data Type Conversion2' */
  0.0F,                                /* '<S191>/Data Type Conversion3' */
  0.0F,                                /* '<S191>/Data Type Conversion4' */
  0.0F,                                /* '<S191>/Data Type Conversion5' */
  0.0F,                                /* '<S186>/Data Type Conversion' */
  0.0F,                                /* '<S186>/Data Type Conversion1' */
  0U,                                  /* '<S210>/Data Type Conversion' */
  0U,                                  /* '<S209>/Data Type Conversion' */
  0U,                                  /* '<S208>/Data Type Conversion' */
  128U,                                /* '<S222>/Data Type Conversion' */
  128U,                                /* '<S221>/Data Type Conversion' */
  2U,                                  /* '<S11>/Data Type Conversion3' */
  7U,                                  /* '<S11>/Data Type Conversion2' */

  { 2U, 7U },                          /* '<S11>/Vector Concatenate2' */
  1U,                                  /* '<S9>/Data Type Conversion' */
  1,                                   /* '<S3>/Data Type Conversion' */
  1,                                   /* '<S2>/Data Type Conversion1' */
  1                                    /* '<S9>/Data Type Conversion2' */
};

/* Constant parameters (default storage) */
const ConstP_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_ConstP = {
  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S2>/Pulse Generator'
   *   '<S6>/Pulse Generator'
   *   '<S6>/Pulse Generator1'
   *   '<S6>/Pulse Generator2'
   *   '<S6>/Pulse Generator6'
   *   '<S186>/Constant'
   *   '<S186>/Constant1'
   *   '<S191>/Constant1'
   *   '<S191>/Constant2'
   *   '<S191>/Constant3'
   *   '<S191>/Constant4'
   *   '<S192>/Constant2'
   *   '<S192>/Constant3'
   *   '<S192>/Constant4'
   *   '<S192>/Constant5'
   *   '<S192>/Constant6'
   *   '<S192>/Constant7'
   *   '<S192>/Constant8'
   *   '<S192>/Constant9'
   *   '<S193>/Constant1'
   *   '<S193>/Constant11'
   *   '<S193>/Constant12'
   *   '<S193>/Constant13'
   *   '<S193>/Constant2'
   *   '<S193>/Constant3'
   *   '<S193>/Constant4'
   *   '<S193>/Constant5'
   *   '<S194>/Constant11'
   *   '<S194>/Constant12'
   *   '<S194>/Constant13'
   *   '<S194>/Constant14'
   *   '<S194>/Constant17'
   *   '<S194>/Constant18'
   *   '<S196>/Constant2'
   *   '<S196>/Constant3'
   *   '<S196>/Constant4'
   *   '<S196>/Constant6'
   *   '<S196>/Constant7'
   *   '<S196>/Constant9'
   *   '<S229>/Constant4'
   *   '<S229>/Constant5'
   *   '<S199>/Switch'
   *   '<S112>/Message'
   *   '<S113>/Message'
   *   '<S123>/Message'
   *   '<S125>/Message'
   *   '<S141>/Message '
   *   '<S145>/Message'
   *   '<S148>/Message'
   *   '<S150>/Message'
   *   '<S225>/Constant1'
   *   '<S225>/Constant2'
   */
  0.0,

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S5>/1-D Lookup Table'
   *   '<S229>/1-D Lookup Table'
   *   '<S229>/1-D Lookup Table2'
   */
  { 0.0F, 100.0F },

  /* Pooled Parameter (Expression: [0,1])
   * Referenced by:
   *   '<S43>/1-D Lookup Table'
   *   '<S43>/1-D Lookup Table1'
   *   '<S229>/1-D Lookup Table'
   *   '<S229>/1-D Lookup Table1'
   *   '<S229>/1-D Lookup Table2'
   *   '<S229>/1-D Lookup Table3'
   */
  { 0.0F, 1.0F },

  /* Computed Parameter: uDLookupTable3_tableData
   * Referenced by: '<S229>/1-D Lookup Table3'
   */
  { -0.0F, -80.0F },

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S229>/1-D Lookup Table1'
   */
  { 0.0F, 80.0F },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S43>/1-D Lookup Table'
   */
  { 0.75F, 3.84F },

  /* Computed Parameter: uDLookupTable1_bp01Data
   * Referenced by: '<S43>/1-D Lookup Table1'
   */
  { 0.375F, 1.92F },

  /* Computed Parameter: uDLookupTable_bp01Data_f
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  { 0.0F, 5.0F }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
