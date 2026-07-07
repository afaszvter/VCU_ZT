/*
 * File: ZT_VehCtrl_18B_data.c
 *
 * Code generated for Simulink model 'ZT_VehCtrl_18B'.
 *
 * Model version                   : 1.703
 * Simulink Coder version          : 9.0 (R2018b) 24-May-2018
 * MBDT for MPC57xx Series Version : 3.2.0 (R2016a-R2020a) 14-Apr-2020
 * C/C++ source code generated on  : Sat Jul  4 10:38:57 2026
 *
 * Target selection: mbd_mpc574x.tlc
 * Embedded hardware selection: Motorola PowerPC
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ZT_VehCtrl_18B.h"
#include "ZT_VehCtrl_18B_private.h"

/* Invariant block signals (default storage) */
const ConstB_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_ConstB = {
  {
    1U,
    8U,
    0U,
    0U,
    419374575U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S196>/VCU_TWV' */

  {
    1U,
    8U,
    0U,
    0U,
    419427143U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S195>/TMS' */

  {
    1U,
    8U,
    0U,
    0U,
    218039791U,
    0.0,

    { 0U, 0U, 0U, 0U, 136U, 19U, 152U, 58U }
  },                                   /* '<S194>/TM HCU Command' */

  {
    1U,
    8U,
    0U,
    0U,
    217206843U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S193>/VCU_PDU' */

  {
    1U,
    8U,
    0U,
    0U,
    204599248U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S192>/VCU2MCU1' */

  {
    1U,
    8U,
    0U,
    0U,
    204599760U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S192>/VCU2MCU2' */

  {
    1U,
    8U,
    0U,
    0U,
    218040047U,
    0.0,

    { 0U, 0U, 0U, 0U, 136U, 19U, 152U, 58U }
  },                                   /* '<S191>/ISG HCU Command' */

  {
    1U,
    8U,
    0U,
    0U,
    402794704U,
    0.0,

    { 0U, 16U, 39U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S190>/VCU2ICUInfor2' */

  {
    1U,
    8U,
    0U,
    0U,
    402729168U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S189>/VCU2ICUInfor1' */

  {
    1U,
    8U,
    0U,
    0U,
    402860240U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S189>/VCU2ICUInfor3' */

  {
    1U,
    8U,
    0U,
    0U,
    403777744U,
    0.0,

    { 40U, 40U, 40U, 40U, 40U, 40U, 40U, 0U }
  },                                   /* '<S189>/VCU2ICUInfor4' */

  {
    1U,
    8U,
    0U,
    0U,
    403843280U,
    0.0,

    { 48U, 117U, 0U, 0U, 0U, 0U, 232U, 3U }
  },                                   /* '<S189>/VCU2ICUInfor5' */

  {
    1U,
    8U,
    0U,
    0U,
    403908816U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 232U, 3U }
  },                                   /* '<S189>/VCU2ICUInfor6' */

  {
    1U,
    8U,
    0U,
    0U,
    403974352U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S189>/VCU2ICUInfor7' */

  {
    1U,
    8U,
    0U,
    0U,
    402694405U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S188>/Ctrl_HVC' */

  {
    1U,
    8U,
    0U,
    0U,
    402690000U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S186>/VCU_DCDC1' */

  {
    1U,
    8U,
    0U,
    0U,
    217123239U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S185>/VCU2BRS' */

  {
    0U,
    8U,
    0U,
    0U,
    352U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S184>/VCU_BMS' */

  {
    1U,
    8U,
    0U,
    0U,
    201824935U,
    0.0,

    { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U }
  },                                   /* '<S183>/VCU_ACU1' */
  0.0,                                 /* '<S219>/Gain5' */
  0.0,                                 /* '<S219>/Gain4' */
  0.0,                                 /* '<S219>/Gain1' */
  0U,                                  /* '<S204>/Data Type Conversion' */
  0U,                                  /* '<S203>/Data Type Conversion' */
  0U,                                  /* '<S202>/Data Type Conversion' */
  128U,                                /* '<S216>/Data Type Conversion' */
  128U,                                /* '<S215>/Data Type Conversion' */
  2U,                                  /* '<S11>/Data Type Conversion3' */
  7U,                                  /* '<S11>/Data Type Conversion2' */

  { 2U, 7U },                          /* '<S11>/Vector Concatenate2' */
  1U,                                  /* '<S9>/Data Type Conversion' */
  1,                                   /* '<S3>/Data Type Conversion' */
  1,                                   /* '<S2>/Data Type Conversion1' */
  1                                    /* '<S9>/Data Type Conversion2' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
