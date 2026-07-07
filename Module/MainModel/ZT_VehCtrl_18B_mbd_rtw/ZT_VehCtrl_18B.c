/*
 * File: ZT_VehCtrl_18B.c
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

/* Named constants for Chart: '<S2>/Chart' */
#define ZT_VehCtrl_18B_IN_Idle         ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_Initialize   ((uint8_T)2U)
#define ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define ZT_VehCtrl_18B_IN_Normal       ((uint8_T)3U)

/* Named constants for Chart: '<S2>/Chart1' */
#define ZT_VehCtrl_18B_IN_CS1          ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_CS5          ((uint8_T)2U)
#define ZT_VehCtrl_18B_IN_Done         ((uint8_T)3U)
#define ZT_VehCtrl_18B_IN_IDLE         ((uint8_T)4U)

/* Named constants for Chart: '<S2>/Chart2' */
#define ZT_VehCtrl_18B_IN_CS2          ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_CS3          ((uint8_T)2U)

/* Named constants for Chart: '<S10>/Chart' */
#define ZT_VehCtrl_18B_IN_clear        ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_config       ((uint8_T)2U)
#define ZT_VehCtrl_18B_IN_en           ((uint8_T)3U)

/* Named constants for Chart: '<S12>/Chart' */
#define ZT_VehCtrl_18B_IN_ConfigA      ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_en_g         ((uint8_T)2U)

dspi_state_t spiMasterState3;
void spi_master_transfer_callback3(void *driverState, spi_event_t event, void
  *userData) __attribute__((weak));
dspi_state_t spiMasterState0;
void spi_master_transfer_callback0(void *driverState, spi_event_t event, void
  *userData) __attribute__((weak));

/* Exported block states */
uint8_T Cnt_BMS6;                      /* '<Root>/Data Store Memory1' */
uint8_T Cnt_TM_OUT;                    /* '<Root>/Data Store Memory104' */
uint8_T Cnt_HVC4;                      /* '<Root>/Data Store Memory12' */
uint8_T VCU_Mode;                      /* '<Root>/Data Store Memory125' */
uint8_T Cnt_HVC7;                      /* '<Root>/Data Store Memory13' */
uint8_T Cnt_ISG_OUT;                   /* '<Root>/Data Store Memory133' */
uint8_T Cnt_TWV_OUT;                   /* '<Root>/Data Store Memory134' */
uint8_T Cnt_DCDC1_1;                   /* '<Root>/Data Store Memory14' */
uint8_T Cnt_DCDC1_2;                   /* '<Root>/Data Store Memory15' */
uint8_T Cnt_MCU1_1;                    /* '<Root>/Data Store Memory16' */
uint8_T Cnt_MCU1_2;                    /* '<Root>/Data Store Memory17' */
uint8_T Cnt_BMS1;                      /* '<Root>/Data Store Memory177' */
uint8_T Cnt_BMS2;                      /* '<Root>/Data Store Memory178' */
uint8_T Cnt_BMS3;                      /* '<Root>/Data Store Memory179' */
uint8_T Cnt_MCU1_3;                    /* '<Root>/Data Store Memory18' */
uint8_T Cnt_BMS4;                      /* '<Root>/Data Store Memory180' */
uint8_T Cnt_BMS5;                      /* '<Root>/Data Store Memory181' */
uint8_T Cnt_MCU2_1;                    /* '<Root>/Data Store Memory19' */
uint8_T Cnt_OBC;                       /* '<Root>/Data Store Memory2' */
uint8_T Cnt_MCU2_2;                    /* '<Root>/Data Store Memory20' */
uint8_T Cnt_MCU2_3;                    /* '<Root>/Data Store Memory21' */
uint8_T Cnt_ACU1;                      /* '<Root>/Data Store Memory22' */
uint8_T Cnt_ACU2;                      /* '<Root>/Data Store Memory23' */
uint8_T Cnt_ACU3;                      /* '<Root>/Data Store Memory24' */
uint8_T Cnt_PDU;                       /* '<Root>/Data Store Memory25' */
uint8_T Cnt_TMS;                       /* '<Root>/Data Store Memory3' */
uint8_T Cnt_TWV;                       /* '<Root>/Data Store Memory33' */
uint8_T Cnt_TW1;                       /* '<Root>/Data Store Memory46' */
uint8_T Cnt_TW2;                       /* '<Root>/Data Store Memory47' */
uint8_T Cnt_TW3;                       /* '<Root>/Data Store Memory48' */
uint8_T Cnt_ISG1;                      /* '<Root>/Data Store Memory49' */
uint8_T Cnt_BRS1;                      /* '<Root>/Data Store Memory5' */
uint8_T Cnt_ISG2;                      /* '<Root>/Data Store Memory50' */
uint8_T Cnt_ISG3;                      /* '<Root>/Data Store Memory56' */
uint8_T Cnt_BMS_OUT;                   /* '<Root>/Data Store Memory57' */
uint8_T Cnt_TMS_OUT;                   /* '<Root>/Data Store Memory58' */
uint8_T Cnt_ICU_OUT1;                  /* '<Root>/Data Store Memory59' */
uint8_T Cnt_BRS2;                      /* '<Root>/Data Store Memory6' */
uint8_T Cnt_ICU_OUT2;                  /* '<Root>/Data Store Memory60' */
uint8_T Cnt_BRS_OUT;                   /* '<Root>/Data Store Memory61' */
uint8_T Cnt_DCDC_OUT;                  /* '<Root>/Data Store Memory62' */
uint8_T Cnt_HVC_OUT;                   /* '<Root>/Data Store Memory63' */
uint8_T Cnt_MCU_OUT;                   /* '<Root>/Data Store Memory64' */
uint8_T Cnt_ACU_OUT;                   /* '<Root>/Data Store Memory65' */
uint8_T Cnt_PDU_OUT;                   /* '<Root>/Data Store Memory66' */
uint8_T Cnt_BRS3;                      /* '<Root>/Data Store Memory7' */
uint8_T ResetFlg;                      /* '<Root>/Data Store Memory72' */
uint8_T Cnt_HVC1;                      /* '<Root>/Data Store Memory8' */
uint8_T Cnt_HVC3;                      /* '<Root>/Data Store Memory9' */
uint8_T Init_flg_SPI;                  /* '<Root>/Data Store Memory98' */
boolean_T LS007;                       /* '<Root>/Data Store Memory100' */
boolean_T LS012;                       /* '<Root>/Data Store Memory101' */
boolean_T LS013;                       /* '<Root>/Data Store Memory103' */
boolean_T LS018;                       /* '<Root>/Data Store Memory11' */
boolean_T LS019;                       /* '<Root>/Data Store Memory116' */
boolean_T LS003;                       /* '<Root>/Data Store Memory34' */
boolean_T LS017;                       /* '<Root>/Data Store Memory45' */
boolean_T LS014;                       /* '<Root>/Data Store Memory86' */
boolean_T LS015;                       /* '<Root>/Data Store Memory87' */
boolean_T LS009;                       /* '<Root>/Data Store Memory88' */
boolean_T LS016;                       /* '<Root>/Data Store Memory89' */
boolean_T LS004;                       /* '<Root>/Data Store Memory91' */
boolean_T LS011;                       /* '<Root>/Data Store Memory92' */
boolean_T LS001;                       /* '<Root>/Data Store Memory93' */
boolean_T LS002;                       /* '<Root>/Data Store Memory95' */
boolean_T LS010;                       /* '<Root>/Data Store Memory96' */
boolean_T LS008;                       /* '<Root>/Data Store Memory97' */
boolean_T LS006;                       /* '<Root>/Data Store Memory99' */

/* Exported data definition */

/* Volatile memory section */
/* Definition for custom storage class: Volatile */
volatile real32_T AI03;
volatile real32_T AI04;
volatile real32_T AI05;
volatile real32_T AI06;
volatile real32_T AI07;
volatile real32_T AI08;
volatile real32_T AI09;
volatile real32_T AI11;
volatile real32_T AI12;
volatile real32_T AI15;
volatile real32_T AI16;
volatile real32_T AI17;
volatile real32_T AI18;
volatile real32_T AI19;
volatile real32_T AI20;
volatile boolean_T DI01;
volatile boolean_T DI02;
volatile boolean_T DI03;
volatile boolean_T DI04;
volatile boolean_T DI07;
volatile boolean_T DI08;
volatile boolean_T DI09;
volatile boolean_T DI10;
volatile boolean_T DI12;
volatile boolean_T DI13;
volatile boolean_T DI15;
volatile boolean_T DI16;
volatile boolean_T DI17;
volatile boolean_T DI18;
volatile boolean_T DI31;
volatile real32_T DI31_PWM_DC;
volatile real32_T DI31_PWM_FRQ;
volatile boolean_T DI32;
volatile real32_T DI32_PWM_DC;
volatile real32_T DI32_PWM_FRQ;
volatile boolean_T DI33;
volatile real32_T DI33_PWM_DC;
volatile real32_T DI33_PWM_FRQ;
volatile boolean_T DI34;
volatile real32_T DI34_PWM_DC;
volatile real32_T DI34_PWM_FRQ;
volatile boolean_T HS001;
volatile boolean_T HS002;
volatile boolean_T HS003;
volatile boolean_T HS004;
volatile boolean_T HS005;
volatile boolean_T HS006;
volatile boolean_T HS007;
volatile boolean_T HS008;
volatile real32_T HS008_ETC_DC;
volatile real32_T HS008_ETC_FRQ;
volatile boolean_T HS010;
volatile boolean_T HS014;
volatile real32_T HS014_ETC_DC;
volatile real32_T HSO08_PWM_DC;
volatile real32_T HSO08_PWM_FRQ;
volatile real32_T HSO14_ETC_FRQ;
volatile real32_T HSO14_PWM_DC;
volatile real32_T HSO14_PWM_FRQ;
volatile real32_T LSO17_ETC_DC;
volatile real32_T LSO17_ETC_FRQ;
volatile real32_T LSO18_ETC_DC;
volatile real32_T LSO18_ETC_FRQ;
volatile real32_T LSO19_ETC_DC;
volatile real32_T LSO19_ETC_FRQ;
volatile real32_T LSO19_PWM_DC;
volatile real32_T LSO19_PWM_FRQ;
volatile real32_T LSO3_ETC_DC;
volatile real32_T LSO3_ETC_FRQ;

/* Block signals (default storage) */
B_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_B;

/* Block states (default storage) */
DW_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_PrevZCX;

/* Real-time model */
RT_MODEL_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_M_;
RT_MODEL_ZT_VehCtrl_18B_T *const ZT_VehCtrl_18B_M = &ZT_VehCtrl_18B_M_;
flexcan_state_t canCom0_State;
flexcan_state_t canCom1_State;
flexcan_msgbuff_t canCom1_recvBuff36;
flexcan_msgbuff_t canCom1_recvBuff37;
flexcan_msgbuff_t canCom1_recvBuff38;
flexcan_msgbuff_t canCom0_recvBuff3;
flexcan_msgbuff_t canCom0_recvBuff5;
flexcan_msgbuff_t canCom0_recvBuff6;
flexcan_msgbuff_t canCom0_recvBuff2;
flexcan_msgbuff_t canCom0_recvBuff0;
flexcan_msgbuff_t canCom0_recvBuff1;
flexcan_msgbuff_t canCom0_recvBuff11;
flexcan_msgbuff_t canCom0_recvBuff12;
flexcan_msgbuff_t canCom0_recvBuff13;
flexcan_msgbuff_t canCom1_recvBuff24;
flexcan_msgbuff_t canCom1_recvBuff26;
flexcan_msgbuff_t canCom1_recvBuff25;
flexcan_msgbuff_t canCom1_recvBuff27;
flexcan_msgbuff_t canCom1_recvBuff28;
flexcan_msgbuff_t canCom1_recvBuff29;
flexcan_msgbuff_t canCom1_recvBuff43;
flexcan_msgbuff_t canCom1_recvBuff44;
flexcan_msgbuff_t canCom1_recvBuff45;
flexcan_msgbuff_t canCom1_recvBuff30;
flexcan_msgbuff_t canCom1_recvBuff31;
flexcan_msgbuff_t canCom1_recvBuff32;
flexcan_msgbuff_t canCom1_recvBuff33;
flexcan_msgbuff_t canCom1_recvBuff34;
flexcan_msgbuff_t canCom1_recvBuff35;
flexcan_msgbuff_t canCom0_recvBuff9;
flexcan_msgbuff_t canCom1_recvBuff39;
flexcan_msgbuff_t canCom1_recvBuff40;
flexcan_msgbuff_t canCom1_recvBuff41;
flexcan_msgbuff_t canCom1_recvBuff42;
flexcan_msgbuff_t canCom0_recvBuff10;
flexcan_msgbuff_t canCom1_recvBuff46;

/* Output and update for function-call system: '<S5>/CAN0 ' */
void ZT_VehCtrl_18B_CAN0(void)
{
  /* SwitchCase: '<S52>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 529) {
    /* Outputs for IfAction SubSystem: '<S52>/UNPACK' incorporates:
     *  ActionPort: '<S84>/Action Port'
     */
    /* DataStoreWrite: '<S84>/Data Store Write' incorporates:
     *  Constant: '<S84>/Constant'
     *  DataStoreRead: '<S84>/Data Store Read'
     *  Sum: '<S84>/Add'
     */
    Cnt_BMS4++;

    /* End of Outputs for SubSystem: '<S52>/UNPACK' */
  }

  /* End of SwitchCase: '<S52>/Switch Case' */

  /* SwitchCase: '<S59>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 851) {
    /* Outputs for IfAction SubSystem: '<S59>/UNPACK' incorporates:
     *  ActionPort: '<S91>/Action Port'
     */
    /* DataStoreWrite: '<S91>/Data Store Write' incorporates:
     *  Constant: '<S91>/Constant'
     *  DataStoreRead: '<S91>/Data Store Read'
     *  Sum: '<S91>/Add'
     */
    Cnt_BMS5++;

    /* End of Outputs for SubSystem: '<S59>/UNPACK' */
  }

  /* End of SwitchCase: '<S59>/Switch Case' */

  /* SwitchCase: '<S63>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 517) {
    /* Outputs for IfAction SubSystem: '<S63>/UNPACK' incorporates:
     *  ActionPort: '<S95>/Action Port'
     */
    /* DataStoreWrite: '<S95>/Data Store Write' incorporates:
     *  Constant: '<S95>/Constant'
     *  DataStoreRead: '<S95>/Data Store Read'
     *  Sum: '<S95>/Add'
     */
    Cnt_BMS6++;

    /* End of Outputs for SubSystem: '<S63>/UNPACK' */
  }

  /* End of SwitchCase: '<S63>/Switch Case' */

  /* SwitchCase: '<S64>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 501) {
    /* Outputs for IfAction SubSystem: '<S64>/UNPACK' incorporates:
     *  ActionPort: '<S96>/Action Port'
     */
    /* DataStoreWrite: '<S96>/Data Store Write' incorporates:
     *  Constant: '<S96>/Constant'
     *  DataStoreRead: '<S96>/Data Store Read'
     *  Sum: '<S96>/Add'
     */
    Cnt_BMS3++;

    /* End of Outputs for SubSystem: '<S64>/UNPACK' */
  }

  /* End of SwitchCase: '<S64>/Switch Case' */

  /* SwitchCase: '<S65>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 481) {
    /* Outputs for IfAction SubSystem: '<S65>/UNPACK' incorporates:
     *  ActionPort: '<S97>/Action Port'
     */
    /* DataStoreWrite: '<S97>/Data Store Write' incorporates:
     *  Constant: '<S97>/Constant'
     *  DataStoreRead: '<S97>/Data Store Read'
     *  Sum: '<S97>/Add'
     */
    Cnt_BMS1++;

    /* End of Outputs for SubSystem: '<S65>/UNPACK' */
  }

  /* End of SwitchCase: '<S65>/Switch Case' */

  /* SwitchCase: '<S66>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 484) {
    /* Outputs for IfAction SubSystem: '<S66>/UNPACK' incorporates:
     *  ActionPort: '<S98>/Action Port'
     */
    /* DataStoreWrite: '<S98>/Data Store Write' incorporates:
     *  Constant: '<S98>/Constant'
     *  DataStoreRead: '<S98>/Data Store Read'
     *  Sum: '<S98>/Add'
     */
    Cnt_BMS2++;

    /* End of Outputs for SubSystem: '<S66>/UNPACK' */
  }

  /* End of SwitchCase: '<S66>/Switch Case' */

  /* SwitchCase: '<S70>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 419309028) {
    /* Outputs for IfAction SubSystem: '<S70>/UNPACK' incorporates:
     *  ActionPort: '<S102>/Action Port'
     */
    /* DataStoreWrite: '<S102>/Data Store Write' incorporates:
     *  Constant: '<S102>/Constant'
     *  DataStoreRead: '<S102>/Data Store Read'
     *  Sum: '<S102>/Add'
     */
    Cnt_BRS1++;

    /* End of Outputs for SubSystem: '<S70>/UNPACK' */
  }

  /* End of SwitchCase: '<S70>/Switch Case' */

  /* SwitchCase: '<S71>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 419309284) {
    /* Outputs for IfAction SubSystem: '<S71>/UNPACK' incorporates:
     *  ActionPort: '<S103>/Action Port'
     */
    /* DataStoreWrite: '<S103>/Data Store Write' incorporates:
     *  Constant: '<S103>/Constant'
     *  DataStoreRead: '<S103>/Data Store Read'
     *  Sum: '<S103>/Add'
     */
    Cnt_BRS2++;

    /* End of Outputs for SubSystem: '<S71>/UNPACK' */
  }

  /* End of SwitchCase: '<S71>/Switch Case' */

  /* SwitchCase: '<S72>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 419309540) {
    /* Outputs for IfAction SubSystem: '<S72>/UNPACK' incorporates:
     *  ActionPort: '<S104>/Action Port'
     */
    /* DataStoreWrite: '<S104>/Data Store Write' incorporates:
     *  Constant: '<S104>/Constant'
     *  DataStoreRead: '<S104>/Data Store Read'
     *  Sum: '<S104>/Add'
     */
    Cnt_BRS3++;

    /* End of Outputs for SubSystem: '<S72>/UNPACK' */
  }

  /* End of SwitchCase: '<S72>/Switch Case' */

  /* SwitchCase: '<S73>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 544) {
    /* Outputs for IfAction SubSystem: '<S73>/UNPACK' incorporates:
     *  ActionPort: '<S105>/Action Port'
     */
    /* DataStoreWrite: '<S105>/Data Store Write' incorporates:
     *  Constant: '<S105>/Constant'
     *  DataStoreRead: '<S105>/Data Store Read'
     *  Sum: '<S105>/Add'
     */
    Cnt_OBC++;

    /* End of Outputs for SubSystem: '<S73>/UNPACK' */
  }

  /* End of SwitchCase: '<S73>/Switch Case' */

  /* SwitchCase: '<S74>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN0_Rx_500_o3 == 419427142) {
    /* Outputs for IfAction SubSystem: '<S74>/UNPACK' incorporates:
     *  ActionPort: '<S106>/Action Port'
     */
    /* DataStoreWrite: '<S106>/Data Store Write' incorporates:
     *  Constant: '<S106>/Constant'
     *  DataStoreRead: '<S106>/Data Store Read'
     *  Sum: '<S106>/Add'
     */
    Cnt_TMS++;

    /* End of Outputs for SubSystem: '<S74>/UNPACK' */
  }

  /* End of SwitchCase: '<S74>/Switch Case' */
}

/* Output and update for function-call system: '<S5>/CAN1' */
void ZT_VehCtrl_18B_CAN1(void)
{
  /* SwitchCase: '<S107>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 201893786) {
    /* Outputs for IfAction SubSystem: '<S107>/UNPACK' incorporates:
     *  ActionPort: '<S130>/Action Port'
     */
    /* DataStoreWrite: '<S130>/Data Store Write' incorporates:
     *  Constant: '<S130>/Constant'
     *  DataStoreRead: '<S130>/Data Store Read'
     *  Sum: '<S130>/Add'
     */
    Cnt_ACU1++;

    /* End of Outputs for SubSystem: '<S107>/UNPACK' */
  }

  /* End of SwitchCase: '<S107>/Switch Case' */

  /* SwitchCase: '<S108>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 201959323) {
    /* Outputs for IfAction SubSystem: '<S108>/UNPACK' incorporates:
     *  ActionPort: '<S131>/Action Port'
     */
    /* DataStoreWrite: '<S131>/Data Store Write' incorporates:
     *  Constant: '<S131>/Constant'
     *  DataStoreRead: '<S131>/Data Store Read'
     *  Sum: '<S131>/Add'
     */
    Cnt_ACU2++;

    /* End of Outputs for SubSystem: '<S108>/UNPACK' */
  }

  /* End of SwitchCase: '<S108>/Switch Case' */

  /* SwitchCase: '<S109>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 202024861) {
    /* Outputs for IfAction SubSystem: '<S109>/UNPACK' incorporates:
     *  ActionPort: '<S132>/Action Port'
     */
    /* DataStoreWrite: '<S132>/Data Store Write' incorporates:
     *  Constant: '<S132>/Constant'
     *  DataStoreRead: '<S132>/Data Store Read'
     *  Sum: '<S132>/Add'
     */
    Cnt_ACU3++;

    /* End of Outputs for SubSystem: '<S109>/UNPACK' */
  }

  /* End of SwitchCase: '<S109>/Switch Case' */

  /* SwitchCase: '<S110>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 402706575) {
    /* Outputs for IfAction SubSystem: '<S110>/UNPACK' incorporates:
     *  ActionPort: '<S133>/Action Port'
     */
    /* DataStoreWrite: '<S133>/Data Store Write' incorporates:
     *  Constant: '<S133>/Constant'
     *  DataStoreRead: '<S133>/Data Store Read'
     *  Sum: '<S133>/Add'
     */
    Cnt_DCDC1_1++;

    /* End of Outputs for SubSystem: '<S110>/UNPACK' */
  }

  /* End of SwitchCase: '<S110>/Switch Case' */

  /* SwitchCase: '<S111>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 402772111) {
    /* Outputs for IfAction SubSystem: '<S111>/UNPACK' incorporates:
     *  ActionPort: '<S134>/Action Port'
     */
    /* DataStoreWrite: '<S134>/Data Store Write' incorporates:
     *  Constant: '<S134>/Constant'
     *  DataStoreRead: '<S134>/Data Store Read'
     *  Sum: '<S134>/Add'
     */
    Cnt_DCDC1_2++;

    /* End of Outputs for SubSystem: '<S111>/UNPACK' */
  }

  /* End of SwitchCase: '<S111>/Switch Case' */

  /* SwitchCase: '<S112>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 402720161) {
    /* Outputs for IfAction SubSystem: '<S112>/UNPACK' incorporates:
     *  ActionPort: '<S135>/Action Port'
     */
    /* DataStoreWrite: '<S135>/Data Store Write' incorporates:
     *  Constant: '<S135>/Constant'
     *  DataStoreRead: '<S135>/Data Store Read'
     *  Sum: '<S135>/Add'
     */
    Cnt_HVC1++;

    /* End of Outputs for SubSystem: '<S112>/UNPACK' */
  }

  /* End of SwitchCase: '<S112>/Switch Case' */

  /* SwitchCase: '<S113>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 402851233) {
    /* Outputs for IfAction SubSystem: '<S113>/UNPACK' incorporates:
     *  ActionPort: '<S136>/Action Port'
     */
    /* DataStoreWrite: '<S136>/Data Store Write' incorporates:
     *  Constant: '<S136>/Constant'
     *  DataStoreRead: '<S136>/Data Store Read'
     *  Sum: '<S136>/Add'
     */
    Cnt_HVC3++;

    /* End of Outputs for SubSystem: '<S113>/UNPACK' */
  }

  /* End of SwitchCase: '<S113>/Switch Case' */

  /* SwitchCase: '<S114>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 402916769) {
    /* Outputs for IfAction SubSystem: '<S114>/UNPACK' incorporates:
     *  ActionPort: '<S137>/Action Port'
     */
    /* DataStoreWrite: '<S137>/Data Store Write' incorporates:
     *  Constant: '<S137>/Constant'
     *  DataStoreRead: '<S137>/Data Store Read'
     *  Sum: '<S137>/Add'
     */
    Cnt_HVC4++;

    /* End of Outputs for SubSystem: '<S114>/UNPACK' */
  }

  /* End of SwitchCase: '<S114>/Switch Case' */

  /* SwitchCase: '<S115>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 403113377) {
    /* Outputs for IfAction SubSystem: '<S115>/UNPACK' incorporates:
     *  ActionPort: '<S138>/Action Port'
     */
    /* DataStoreWrite: '<S138>/Data Store Write' incorporates:
     *  Constant: '<S138>/Constant'
     *  DataStoreRead: '<S138>/Data Store Read'
     *  Sum: '<S138>/Add'
     */
    Cnt_HVC7++;

    /* End of Outputs for SubSystem: '<S115>/UNPACK' */
  }

  /* End of SwitchCase: '<S115>/Switch Case' */

  /* SwitchCase: '<S116>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 218038278) {
    /* Outputs for IfAction SubSystem: '<S116>/UNPACK' incorporates:
     *  ActionPort: '<S139>/Action Port'
     */
    /* DataStoreWrite: '<S139>/Data Store Write' incorporates:
     *  Constant: '<S139>/Constant'
     *  DataStoreRead: '<S139>/Data Store Read'
     *  Sum: '<S139>/Add'
     */
    Cnt_ISG1++;

    /* End of Outputs for SubSystem: '<S116>/UNPACK' */
  }

  /* End of SwitchCase: '<S116>/Switch Case' */

  /* SwitchCase: '<S117>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 218038534) {
    /* Outputs for IfAction SubSystem: '<S117>/UNPACK' incorporates:
     *  ActionPort: '<S140>/Action Port'
     */
    /* DataStoreWrite: '<S140>/Data Store Write' incorporates:
     *  Constant: '<S140>/Constant'
     *  DataStoreRead: '<S140>/Data Store Read'
     *  Sum: '<S140>/Add'
     */
    Cnt_ISG2++;

    /* End of Outputs for SubSystem: '<S117>/UNPACK' */
  }

  /* End of SwitchCase: '<S117>/Switch Case' */

  /* SwitchCase: '<S118>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 218038790) {
    /* Outputs for IfAction SubSystem: '<S118>/UNPACK' incorporates:
     *  ActionPort: '<S141>/Action Port'
     */
    /* DataStoreWrite: '<S141>/Data Store Write' incorporates:
     *  Constant: '<S141>/Constant'
     *  DataStoreRead: '<S141>/Data Store Read'
     *  Sum: '<S141>/Add'
     */
    Cnt_ISG3++;

    /* End of Outputs for SubSystem: '<S118>/UNPACK' */
  }

  /* End of SwitchCase: '<S118>/Switch Case' */

  /* SwitchCase: '<S119>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 406245615) {
    /* Outputs for IfAction SubSystem: '<S119>/UNPACK' incorporates:
     *  ActionPort: '<S142>/Action Port'
     */
    /* DataStoreWrite: '<S142>/Data Store Write' incorporates:
     *  Constant: '<S142>/Constant'
     *  DataStoreRead: '<S142>/Data Store Read'
     *  Sum: '<S142>/Add'
     */
    Cnt_MCU1_1++;

    /* End of Outputs for SubSystem: '<S119>/UNPACK' */
  }

  /* End of SwitchCase: '<S119>/Switch Case' */

  /* SwitchCase: '<S120>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 406311151) {
    /* Outputs for IfAction SubSystem: '<S120>/UNPACK' incorporates:
     *  ActionPort: '<S143>/Action Port'
     */
    /* DataStoreWrite: '<S143>/Data Store Write' incorporates:
     *  Constant: '<S143>/Constant'
     *  DataStoreRead: '<S143>/Data Store Read'
     *  Sum: '<S143>/Add'
     */
    Cnt_MCU1_2++;

    /* End of Outputs for SubSystem: '<S120>/UNPACK' */
  }

  /* End of SwitchCase: '<S120>/Switch Case' */

  /* SwitchCase: '<S121>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 406376687) {
    /* Outputs for IfAction SubSystem: '<S121>/UNPACK' incorporates:
     *  ActionPort: '<S144>/Action Port'
     */
    /* DataStoreWrite: '<S144>/Data Store Write' incorporates:
     *  Constant: '<S144>/Constant'
     *  DataStoreRead: '<S144>/Data Store Read'
     *  Sum: '<S144>/Add'
     */
    Cnt_MCU1_3++;

    /* End of Outputs for SubSystem: '<S121>/UNPACK' */
  }

  /* End of SwitchCase: '<S121>/Switch Case' */

  /* SwitchCase: '<S122>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 406245617) {
    /* Outputs for IfAction SubSystem: '<S122>/UNPACK' incorporates:
     *  ActionPort: '<S145>/Action Port'
     */
    /* DataStoreWrite: '<S145>/Data Store Write' incorporates:
     *  Constant: '<S145>/Constant'
     *  DataStoreRead: '<S145>/Data Store Read'
     *  Sum: '<S145>/Add'
     */
    Cnt_MCU2_1++;

    /* End of Outputs for SubSystem: '<S122>/UNPACK' */
  }

  /* End of SwitchCase: '<S122>/Switch Case' */

  /* SwitchCase: '<S123>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 406311153) {
    /* Outputs for IfAction SubSystem: '<S123>/UNPACK' incorporates:
     *  ActionPort: '<S146>/Action Port'
     */
    /* DataStoreWrite: '<S146>/Data Store Write' incorporates:
     *  Constant: '<S146>/Constant'
     *  DataStoreRead: '<S146>/Data Store Read'
     *  Sum: '<S146>/Add'
     */
    Cnt_MCU2_2++;

    /* End of Outputs for SubSystem: '<S123>/UNPACK' */
  }

  /* End of SwitchCase: '<S123>/Switch Case' */

  /* SwitchCase: '<S124>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 406376689) {
    /* Outputs for IfAction SubSystem: '<S124>/UNPACK' incorporates:
     *  ActionPort: '<S147>/Action Port'
     */
    /* DataStoreWrite: '<S147>/Data Store Write' incorporates:
     *  Constant: '<S147>/Constant'
     *  DataStoreRead: '<S147>/Data Store Read'
     *  Sum: '<S147>/Add'
     */
    Cnt_MCU2_3++;

    /* End of Outputs for SubSystem: '<S124>/UNPACK' */
  }

  /* End of SwitchCase: '<S124>/Switch Case' */

  /* SwitchCase: '<S125>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 419376072) {
    /* Outputs for IfAction SubSystem: '<S125>/UNPACK' incorporates:
     *  ActionPort: '<S148>/Action Port'
     */
    /* DataStoreWrite: '<S148>/Data Store Write' incorporates:
     *  Constant: '<S148>/Constant'
     *  DataStoreRead: '<S148>/Data Store Read'
     *  Sum: '<S148>/Add'
     */
    Cnt_PDU++;

    /* End of Outputs for SubSystem: '<S125>/UNPACK' */
  }

  /* End of SwitchCase: '<S125>/Switch Case' */

  /* SwitchCase: '<S126>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 218038277) {
    /* Outputs for IfAction SubSystem: '<S126>/UNPACK' incorporates:
     *  ActionPort: '<S149>/Action Port'
     */
    /* DataStoreWrite: '<S149>/Data Store Write' incorporates:
     *  Constant: '<S149>/Constant'
     *  DataStoreRead: '<S149>/Data Store Read'
     *  Sum: '<S149>/Add'
     */
    Cnt_TW1++;

    /* End of Outputs for SubSystem: '<S126>/UNPACK' */
  }

  /* End of SwitchCase: '<S126>/Switch Case' */

  /* SwitchCase: '<S127>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 218038533) {
    /* Outputs for IfAction SubSystem: '<S127>/UNPACK' incorporates:
     *  ActionPort: '<S150>/Action Port'
     */
    /* DataStoreWrite: '<S150>/Data Store Write' incorporates:
     *  Constant: '<S150>/Constant'
     *  DataStoreRead: '<S150>/Data Store Read'
     *  Sum: '<S150>/Add'
     */
    Cnt_TW2++;

    /* End of Outputs for SubSystem: '<S127>/UNPACK' */
  }

  /* End of SwitchCase: '<S127>/Switch Case' */

  /* SwitchCase: '<S128>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 218038789) {
    /* Outputs for IfAction SubSystem: '<S128>/UNPACK' incorporates:
     *  ActionPort: '<S151>/Action Port'
     */
    /* DataStoreWrite: '<S151>/Data Store Write' incorporates:
     *  Constant: '<S151>/Constant'
     *  DataStoreRead: '<S151>/Data Store Read'
     *  Sum: '<S151>/Add'
     */
    Cnt_TW3++;

    /* End of Outputs for SubSystem: '<S128>/UNPACK' */
  }

  /* End of SwitchCase: '<S128>/Switch Case' */

  /* SwitchCase: '<S129>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_B.CAN1_Rx_500_o3 == 419374139) {
    /* Outputs for IfAction SubSystem: '<S129>/UNPACK' incorporates:
     *  ActionPort: '<S152>/Action Port'
     */
    /* DataStoreWrite: '<S152>/Data Store Write' incorporates:
     *  Constant: '<S152>/Constant'
     *  DataStoreRead: '<S152>/Data Store Read'
     *  Sum: '<S152>/Add'
     */
    Cnt_TWV++;

    /* End of Outputs for SubSystem: '<S129>/UNPACK' */
  }

  /* End of SwitchCase: '<S129>/Switch Case' */
}

/* Model step function */
void ZT_VehCtrl_18B_step(void)
{
  int32_T rtb_Flg_e;
  int32_T rtb_Flg;
  int32_T rtb_Flg_b;
  real_T rtb_Add3;
  boolean_T rtb_LogicalOperator;
  int32_T rtb_PulseGenerator1;
  int32_T rtb_PulseGenerator6;
  int32_T rtb_PulseGenerator;
  ZCEventType zcEvent;
  real_T rtb_Divide2;
  int32_T rtb_high_j;
  int32_T rtb_low_b;
  real_T tmp;
  uint8_T tmp_0;
  uint8_T tmp_1;
  uint8_T tmp_2;
  uint8_T tmp_3;

  /* S-Function (adc_mpc_start): '<S37>/ADC_Start' */
  ADC_DRV_StartConversion(1U, ADC_CONV_CHAIN_NORMAL);

  {
    uint16_t *result_addr = &ZT_VehCtrl_18B_B.ADC_Start[0];
    while (!(ADC_DRV_GetStatusFlags(1U) & ADC_FLAG_NORMAL_ENDCHAIN)) ;
    ADC_DRV_GetConvResultsToArray(1U, ADC_CONV_CHAIN_NORMAL, result_addr, 5U);
    ADC_DRV_ClearStatusFlags(1U, ADC_FLAG_NORMAL_ENDCHAIN);
  }

  /* S-Function (adc_mpc_start): '<S37>/ADC_Start1' */
  ADC_DRV_StartConversion(0U, ADC_CONV_CHAIN_NORMAL);

  {
    uint16_t *result_addr = &ZT_VehCtrl_18B_B.ADC_Start1[0];
    while (!(ADC_DRV_GetStatusFlags(0U) & ADC_FLAG_NORMAL_ENDCHAIN)) ;
    ADC_DRV_GetConvResultsToArray(0U, ADC_CONV_CHAIN_NORMAL, result_addr, 10U);
    ADC_DRV_ClearStatusFlags(0U, ADC_FLAG_NORMAL_ENDCHAIN);
  }

  /* Gain: '<S37>/Gain2' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write'
   *  DataTypeConversion: '<S37>/Data Type Conversion3'
   */
  AI11 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[3];

  /* Gain: '<S37>/Gain3' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write1'
   *  DataTypeConversion: '<S37>/Data Type Conversion5'
   */
  AI16 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[5];

  /* Gain: '<S37>/Gain7' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write2'
   *  DataTypeConversion: '<S37>/Data Type Conversion1'
   */
  AI18 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[1];

  /* Gain: '<S37>/Gain10' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write3'
   *  DataTypeConversion: '<S37>/Data Type Conversion6'
   */
  AI06 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[6];

  /* Gain: '<S37>/Gain14' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write4'
   *  DataTypeConversion: '<S37>/Data Type Conversion9'
   */
  AI07 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[9];

  /* Gain: '<S37>/Gain1' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write5'
   *  DataTypeConversion: '<S37>/Data Type Conversion2'
   */
  AI08 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[2];

  /* Gain: '<S37>/Gain12' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write6'
   *  DataTypeConversion: '<S37>/Data Type Conversion7'
   */
  AI12 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[7];

  /* Gain: '<S37>/Gain6' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write7'
   *  DataTypeConversion: '<S37>/Data Type Conversion'
   */
  AI15 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[0];

  /* Gain: '<S37>/Gain8' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write8'
   *  DataTypeConversion: '<S37>/Data Type Conversion4'
   */
  AI17 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[4];

  /* Gain: '<S37>/Gain13' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write9'
   *  DataTypeConversion: '<S37>/Data Type Conversion8'
   */
  AI19 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start1[8];

  /* S-Function (gpio_mpc_input): '<S40>/DI01' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI01_h = (PINS_DRV_ReadPins(PTG) >> 5) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write1' */
  DI01 = ZT_VehCtrl_18B_B.DI01_h;

  /* S-Function (gpio_mpc_input): '<S40>/DI02' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI02_c = (PINS_DRV_ReadPins(PTG) >> 9) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write8' */
  DI02 = ZT_VehCtrl_18B_B.DI02_c;

  /* S-Function (gpio_mpc_input): '<S40>/DI03' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI03_h = (PINS_DRV_ReadPins(PTC) >> 11) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write9' */
  DI03 = ZT_VehCtrl_18B_B.DI03_h;

  /* S-Function (gpio_mpc_input): '<S40>/DI04' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI04_o = (PINS_DRV_ReadPins(PTA) >> 9) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write10' */
  DI04 = ZT_VehCtrl_18B_B.DI04_o;

  /* S-Function (gpio_mpc_input): '<S40>/DI07' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI07_f = (PINS_DRV_ReadPins(PTA) >> 0) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write' */
  DI07 = ZT_VehCtrl_18B_B.DI07_f;

  /* S-Function (gpio_mpc_input): '<S40>/DI08' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI08_e = (PINS_DRV_ReadPins(PTD) >> 11) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write12' */
  DI08 = ZT_VehCtrl_18B_B.DI08_e;

  /* S-Function (gpio_mpc_input): '<S40>/DI09' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI09_a = (PINS_DRV_ReadPins(PTG) >> 6) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write13' */
  DI09 = ZT_VehCtrl_18B_B.DI09_a;

  /* S-Function (gpio_mpc_input): '<S40>/DI10' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI10_g = (PINS_DRV_ReadPins(PTG) >> 2) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write2' */
  DI10 = ZT_VehCtrl_18B_B.DI10_g;

  /* S-Function (gpio_mpc_input): '<S40>/DI12' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI12_h = (PINS_DRV_ReadPins(PTF) >> 13) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write11' */
  DI12 = ZT_VehCtrl_18B_B.DI12_h;

  /* S-Function (gpio_mpc_input): '<S40>/DI13' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI13_m = (PINS_DRV_ReadPins(PTG) >> 4) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write3' */
  DI13 = ZT_VehCtrl_18B_B.DI13_m;

  /* S-Function (gpio_mpc_input): '<S40>/DI15' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI15_b = (PINS_DRV_ReadPins(PTF) >> 12) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write4' */
  DI15 = ZT_VehCtrl_18B_B.DI15_b;

  /* S-Function (gpio_mpc_input): '<S40>/DI16' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI16_k = (PINS_DRV_ReadPins(PTG) >> 7) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write5' */
  DI16 = ZT_VehCtrl_18B_B.DI16_k;

  /* S-Function (gpio_mpc_input): '<S40>/DI17' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI17_c = (PINS_DRV_ReadPins(PTD) >> 10) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write6' */
  DI17 = ZT_VehCtrl_18B_B.DI17_c;

  /* S-Function (gpio_mpc_input): '<S40>/DI18' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI18_k = (PINS_DRV_ReadPins(PTG) >> 10) & 0x01;

  /* DataStoreWrite: '<S40>/Data Store Write7' */
  DI18 = ZT_VehCtrl_18B_B.DI18_k;

  /* S-Function (gpio_mpc_input): '<S153>/DI31' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI31_g = (PINS_DRV_ReadPins(PTF) >> 0) & 0x01;

  /* DataStoreWrite: '<S153>/Data Store Write14' */
  DI31 = ZT_VehCtrl_18B_B.DI31_g;

  /* S-Function (gpio_mpc_input): '<S153>/DI32' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI32_l = (PINS_DRV_ReadPins(PTD) >> 1) & 0x01;

  /* DataStoreWrite: '<S153>/Data Store Write15' */
  DI32 = ZT_VehCtrl_18B_B.DI32_l;

  /* S-Function (gpio_mpc_input): '<S153>/DI33' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI33_b = (PINS_DRV_ReadPins(PTD) >> 2) & 0x01;

  /* DataStoreWrite: '<S153>/Data Store Write16' */
  DI33 = ZT_VehCtrl_18B_B.DI33_b;

  /* S-Function (gpio_mpc_input): '<S153>/DI34' */
  /* Signal update */
  ZT_VehCtrl_18B_B.DI34_p = (PINS_DRV_ReadPins(PTC) >> 13) & 0x01;

  /* DataStoreWrite: '<S153>/Data Store Write17' */
  DI34 = ZT_VehCtrl_18B_B.DI34_p;

  /* Gain: '<S37>/Gain9' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write10'
   *  DataTypeConversion: '<S37>/Data Type Conversion12'
   */
  AI03 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start[2];

  /* Gain: '<S37>/Gain11' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write11'
   *  DataTypeConversion: '<S37>/Data Type Conversion13'
   */
  AI04 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start[3];

  /* Gain: '<S37>/Gain5' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write12'
   *  DataTypeConversion: '<S37>/Data Type Conversion11'
   */
  AI05 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start[1];

  /* Gain: '<S37>/Gain15' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write13'
   *  DataTypeConversion: '<S37>/Data Type Conversion14'
   */
  AI09 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start[4];

  /* Gain: '<S37>/Gain4' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write14'
   *  DataTypeConversion: '<S37>/Data Type Conversion10'
   */
  AI20 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_B.ADC_Start[0];

  /* End of Outputs for S-Function (fcan_mpc_isr): '<S5>/CAN0_Rx_500' */
  /* End of Outputs for S-Function (fcan_mpc_isr): '<S5>/CAN1_Rx_500' */

  /* Chart: '<S2>/Chart1' incorporates:
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  if (ZT_VehCtrl_18B_DW.is_active_c23_ZT_VehCtrl_18B == 0U) {
    ZT_VehCtrl_18B_DW.is_active_c23_ZT_VehCtrl_18B = 1U;
    ZT_VehCtrl_18B_DW.is_c23_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_IDLE;
    rtb_Flg_e = 0;
  } else {
    switch (ZT_VehCtrl_18B_DW.is_c23_ZT_VehCtrl_18B) {
     case ZT_VehCtrl_18B_IN_CS1:
      rtb_Flg_e = 1;
      if (ZT_VehCtrl_18B_DW.cnt_j > 20.0) {
        ZT_VehCtrl_18B_DW.is_c23_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_CS5;
        rtb_Flg_e = 2;
        ZT_VehCtrl_18B_DW.cnt_j = 0.0;
      } else {
        ZT_VehCtrl_18B_DW.cnt_j++;
      }
      break;

     case ZT_VehCtrl_18B_IN_CS5:
      rtb_Flg_e = 2;
      if (ZT_VehCtrl_18B_DW.cnt_j > 20.0) {
        ZT_VehCtrl_18B_DW.is_c23_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_Done;
        rtb_Flg_e = 9;
      } else {
        ZT_VehCtrl_18B_DW.cnt_j++;
      }
      break;

     case ZT_VehCtrl_18B_IN_Done:
      rtb_Flg_e = 9;
      if (VCU_Mode == 0) {
        ZT_VehCtrl_18B_DW.is_c23_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_IDLE;
        rtb_Flg_e = 0;
      }
      break;

     default:
      rtb_Flg_e = 0;
      if (VCU_Mode == 1) {
        ZT_VehCtrl_18B_DW.is_c23_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_CS1;
        rtb_Flg_e = 1;
        ZT_VehCtrl_18B_DW.cnt_j = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart1' */

  /* Chart: '<S2>/Chart2' incorporates:
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  if (ZT_VehCtrl_18B_DW.is_active_c24_ZT_VehCtrl_18B == 0U) {
    ZT_VehCtrl_18B_DW.is_active_c24_ZT_VehCtrl_18B = 1U;
    ZT_VehCtrl_18B_DW.is_c24_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_IDLE;
    rtb_Flg = 0;
  } else {
    switch (ZT_VehCtrl_18B_DW.is_c24_ZT_VehCtrl_18B) {
     case ZT_VehCtrl_18B_IN_CS2:
      rtb_Flg = 1;
      if (ZT_VehCtrl_18B_DW.cnt_c > 20.0) {
        ZT_VehCtrl_18B_DW.is_c24_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_CS3;
        rtb_Flg = 2;
        ZT_VehCtrl_18B_DW.cnt_c = 0.0;
      } else {
        ZT_VehCtrl_18B_DW.cnt_c++;
      }
      break;

     case ZT_VehCtrl_18B_IN_CS3:
      rtb_Flg = 2;
      if (ZT_VehCtrl_18B_DW.cnt_c > 20.0) {
        ZT_VehCtrl_18B_DW.is_c24_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_Done;
        rtb_Flg = 9;
      } else {
        ZT_VehCtrl_18B_DW.cnt_c++;
      }
      break;

     case ZT_VehCtrl_18B_IN_Done:
      rtb_Flg = 9;
      if (VCU_Mode == 0) {
        ZT_VehCtrl_18B_DW.is_c24_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_IDLE;
        rtb_Flg = 0;
      }
      break;

     default:
      rtb_Flg = 0;
      if (VCU_Mode == 1) {
        ZT_VehCtrl_18B_DW.is_c24_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_CS2;
        rtb_Flg = 1;
        ZT_VehCtrl_18B_DW.cnt_c = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart2' */

  /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
   *  Constant: '<S17>/Constant'
   *  Constant: '<S18>/Constant'
   *  DataStoreWrite: '<S2>/Data Store Write4'
   *  Logic: '<S2>/Logical Operator'
   *  RelationalOperator: '<S17>/Compare'
   *  RelationalOperator: '<S18>/Compare'
   */
  Init_flg_SPI = (uint8_T)((rtb_Flg_e == 9) && (rtb_Flg == 9));

  /* Chart: '<S2>/Chart' incorporates:
   *  DataStoreRead: '<S2>/Data Store Read1'
   *  DataStoreRead: '<S2>/Data Store Read2'
   */
  if (ZT_VehCtrl_18B_DW.is_active_c22_ZT_VehCtrl_18B == 0U) {
    ZT_VehCtrl_18B_DW.is_active_c22_ZT_VehCtrl_18B = 1U;
    ZT_VehCtrl_18B_DW.is_c22_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_Idle;
    rtb_Flg_b = 0;
  } else {
    switch (ZT_VehCtrl_18B_DW.is_c22_ZT_VehCtrl_18B) {
     case ZT_VehCtrl_18B_IN_Idle:
      rtb_Flg_b = 0;
      if (ResetFlg == 0) {
        ZT_VehCtrl_18B_DW.is_c22_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_Initialize;
        rtb_Flg_b = 1;
      }
      break;

     case ZT_VehCtrl_18B_IN_Initialize:
      rtb_Flg_b = 1;
      if (Init_flg_SPI > 0) {
        ZT_VehCtrl_18B_DW.is_c22_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_Normal;
        rtb_Flg_b = 2;
      } else {
        if (ResetFlg == 1) {
          ZT_VehCtrl_18B_DW.is_c22_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_Idle;
          rtb_Flg_b = 0;
        }
      }
      break;

     default:
      rtb_Flg_b = 2;
      if (ResetFlg == 1) {
        ZT_VehCtrl_18B_DW.is_c22_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_Idle;
        rtb_Flg_b = 0;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart' */

  /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
   *  DataStoreWrite: '<S2>/Data Store Write'
   */
  VCU_Mode = (uint8_T)(int32_T)fmod(rtb_Flg_b, 256.0);

  /* DiscretePulseGenerator: '<S2>/Pulse Generator' */
  rtb_Add3 = ((ZT_VehCtrl_18B_DW.clockTickCounter < 1) &&
              (ZT_VehCtrl_18B_DW.clockTickCounter >= 0));
  if (ZT_VehCtrl_18B_DW.clockTickCounter >= 1) {
    ZT_VehCtrl_18B_DW.clockTickCounter = 0;
  } else {
    ZT_VehCtrl_18B_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S2>/Pulse Generator' */

  /* Logic: '<S200>/Logical Operator' incorporates:
   *  Constant: '<S212>/Constant'
   *  DataStoreRead: '<S200>/Data Store Read'
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   *  RelationalOperator: '<S212>/Compare'
   */
  rtb_LogicalOperator = ((VCU_Mode == 2) && (rtb_Add3 != 0.0));

  /* DataStoreRead: '<S198>/Data Store Read9' */
  ZT_VehCtrl_18B_B.DataStoreRead9 = HS010;

  /* DataStoreRead: '<S198>/Data Store Read7' */
  ZT_VehCtrl_18B_B.DataStoreRead7 = HS005;

  /* DataStoreRead: '<S198>/Data Store Read6' */
  ZT_VehCtrl_18B_B.DataStoreRead6 = HS004;

  /* DataStoreRead: '<S198>/Data Store Read5' */
  ZT_VehCtrl_18B_B.DataStoreRead5 = HS003;

  /* DataStoreRead: '<S198>/Data Store Read4' */
  ZT_VehCtrl_18B_B.DataStoreRead4 = HS002;

  /* DataStoreRead: '<S198>/Data Store Read2' */
  ZT_VehCtrl_18B_B.DataStoreRead2 = HS007;

  /* DataStoreRead: '<S198>/Data Store Read' */
  ZT_VehCtrl_18B_B.DataStoreRead = HS001;

  /* DiscretePulseGenerator: '<S6>/Pulse Generator2' */
  rtb_Flg_b = ((ZT_VehCtrl_18B_DW.clockTickCounter_g < 50) &&
               (ZT_VehCtrl_18B_DW.clockTickCounter_g >= 0));
  if (ZT_VehCtrl_18B_DW.clockTickCounter_g >= 99) {
    ZT_VehCtrl_18B_DW.clockTickCounter_g = 0;
  } else {
    ZT_VehCtrl_18B_DW.clockTickCounter_g++;
  }

  /* End of DiscretePulseGenerator: '<S6>/Pulse Generator2' */

  /* DiscretePulseGenerator: '<S6>/Pulse Generator1' */
  rtb_PulseGenerator1 = ((ZT_VehCtrl_18B_DW.clockTickCounter_i < 1) &&
    (ZT_VehCtrl_18B_DW.clockTickCounter_i >= 0));
  if (ZT_VehCtrl_18B_DW.clockTickCounter_i >= 1) {
    ZT_VehCtrl_18B_DW.clockTickCounter_i = 0;
  } else {
    ZT_VehCtrl_18B_DW.clockTickCounter_i++;
  }

  /* End of DiscretePulseGenerator: '<S6>/Pulse Generator1' */

  /* DiscretePulseGenerator: '<S6>/Pulse Generator6' */
  rtb_PulseGenerator6 = ((ZT_VehCtrl_18B_DW.clockTickCounter_h < 20) &&
    (ZT_VehCtrl_18B_DW.clockTickCounter_h >= 0));
  if (ZT_VehCtrl_18B_DW.clockTickCounter_h >= 39) {
    ZT_VehCtrl_18B_DW.clockTickCounter_h = 0;
  } else {
    ZT_VehCtrl_18B_DW.clockTickCounter_h++;
  }

  /* End of DiscretePulseGenerator: '<S6>/Pulse Generator6' */

  /* DiscretePulseGenerator: '<S6>/Pulse Generator' */
  rtb_PulseGenerator = ((ZT_VehCtrl_18B_DW.clockTickCounter_e < 10) &&
                        (ZT_VehCtrl_18B_DW.clockTickCounter_e >= 0));
  if (ZT_VehCtrl_18B_DW.clockTickCounter_e >= 19) {
    ZT_VehCtrl_18B_DW.clockTickCounter_e = 0;
  } else {
    ZT_VehCtrl_18B_DW.clockTickCounter_e++;
  }

  /* End of DiscretePulseGenerator: '<S6>/Pulse Generator' */

  /* If: '<S2>/If1' */
  if (rtb_Flg_e == 1) {
    /* Outputs for IfAction SubSystem: '<S2>/CS1 LS' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Chart: '<S10>/Chart' */
    if (ZT_VehCtrl_18B_DW.is_active_c11_ZT_VehCtrl_18B == 0U) {
      ZT_VehCtrl_18B_DW.is_active_c11_ZT_VehCtrl_18B = 1U;
      ZT_VehCtrl_18B_DW.is_c11_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_clear;
      rtb_high_j = 135;
      rtb_low_b = 1;
      ZT_VehCtrl_18B_DW.cnt_p = 0.0;
    } else {
      switch (ZT_VehCtrl_18B_DW.is_c11_ZT_VehCtrl_18B) {
       case ZT_VehCtrl_18B_IN_clear:
        rtb_high_j = 135;
        rtb_low_b = 1;
        if (ZT_VehCtrl_18B_DW.cnt_p > 5.0) {
          ZT_VehCtrl_18B_DW.is_c11_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_en;
          rtb_high_j = 193;
          rtb_low_b = 0;
          ZT_VehCtrl_18B_DW.cnt_p = 0.0;
        } else {
          ZT_VehCtrl_18B_DW.cnt_p++;
        }
        break;

       case ZT_VehCtrl_18B_IN_config:
        rtb_high_j = 199;
        rtb_low_b = 129;
        ZT_VehCtrl_18B_DW.cnt_p++;
        break;

       default:
        rtb_high_j = 193;
        rtb_low_b = 0;
        if (ZT_VehCtrl_18B_DW.cnt_p > 5.0) {
          ZT_VehCtrl_18B_DW.is_c11_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_config;
          rtb_high_j = 199;
          rtb_low_b = 129;
          ZT_VehCtrl_18B_DW.cnt_p = 0.0;
        } else {
          ZT_VehCtrl_18B_DW.cnt_p++;
        }
        break;
      }
    }

    /* End of Chart: '<S10>/Chart' */

    /* S-Function (spi_mpc_master_transfer): '<S10>/SPI_Master_Transfer_To1' */
    {
      DSPI_UpdateCS(0, 5);
      DSPI_MasterTransfer(0, &ZT_VehCtrl_18B_B.VectorConcatenate1_m[0],
                          &ZT_VehCtrl_18B_B.SPI_Master_Transfer_To1_g[0], 1);
    }

    /* DataTypeConversion: '<S10>/Data Type Conversion' */
    ZT_VehCtrl_18B_B.VectorConcatenate1_m[0] = (uint8_T)(int32_T)fmod(rtb_high_j,
      256.0);

    /* DataTypeConversion: '<S10>/Data Type Conversion1' */
    ZT_VehCtrl_18B_B.VectorConcatenate1_m[1] = (uint8_T)(int32_T)fmod(rtb_low_b,
      256.0);

    /* End of Outputs for SubSystem: '<S2>/CS1 LS' */
  }

  /* End of If: '<S2>/If1' */

  /* If: '<S2>/If' */
  if (rtb_Flg == 1) {
    /* Outputs for IfAction SubSystem: '<S2>/CS2 CANB' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* S-Function (spi_mpc_master_transfer): '<S11>/SPI_Master_Transfer_To2' */
    {
      DSPI_UpdateCS(3, 2);
      DSPI_MasterTransfer(3, &ZT_VehCtrl_18B_ConstB.VectorConcatenate2[0],
                          &ZT_VehCtrl_18B_B.SPI_Master_Transfer_To2_h[0], 1);
    }

    /* End of Outputs for SubSystem: '<S2>/CS2 CANB' */
  }

  /* End of If: '<S2>/If' */

  /* If: '<S2>/If3' */
  if (rtb_Flg == 2) {
    /* Outputs for IfAction SubSystem: '<S2>/CS3 LS' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* Chart: '<S12>/Chart' incorporates:
     *  Constant: '<S12>/PIN'
     */
    if (ZT_VehCtrl_18B_DW.is_active_c14_ZT_VehCtrl_18B == 0U) {
      ZT_VehCtrl_18B_DW.is_active_c14_ZT_VehCtrl_18B = 1U;
      ZT_VehCtrl_18B_DW.is_c14_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_ConfigA;
      ZT_VehCtrl_18B_B.high = 90.0;
      ZT_VehCtrl_18B_B.low = 10.0;
      ZT_VehCtrl_18B_DW.cnt = 0.0;
    } else {
      if (ZT_VehCtrl_18B_DW.is_c14_ZT_VehCtrl_18B == ZT_VehCtrl_18B_IN_ConfigA)
      {
        if (ZT_VehCtrl_18B_DW.cnt > 4.0) {
          ZT_VehCtrl_18B_DW.is_c14_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_en_g;
          ZT_VehCtrl_18B_B.high = 96.0;
          ZT_VehCtrl_18B_B.low = 0.0;
          ZT_VehCtrl_18B_DW.cnt = 0.0;
        } else {
          ZT_VehCtrl_18B_DW.cnt++;
        }
      }
    }

    /* End of Chart: '<S12>/Chart' */

    /* S-Function (spi_mpc_master_transfer): '<S12>/SPI_Master_Transfer_To2' */
    {
      DSPI_UpdateCS(3, 3);
      DSPI_MasterTransfer(3, &ZT_VehCtrl_18B_B.VectorConcatenate1_a[0],
                          &ZT_VehCtrl_18B_B.SPI_Master_Transfer_To2_a[0], 1);
    }

    /* DataTypeConversion: '<S12>/Data Type Conversion2' */
    tmp = floor(ZT_VehCtrl_18B_B.high);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    ZT_VehCtrl_18B_B.VectorConcatenate1_a[0] = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S12>/Data Type Conversion2' */

    /* DataTypeConversion: '<S12>/Data Type Conversion3' */
    tmp = floor(ZT_VehCtrl_18B_B.low);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    ZT_VehCtrl_18B_B.VectorConcatenate1_a[1] = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S12>/Data Type Conversion3' */
    /* End of Outputs for SubSystem: '<S2>/CS3 LS' */
  }

  /* End of If: '<S2>/If3' */

  /* If: '<S2>/If2' */
  if (rtb_Flg_e == 2) {
    /* Outputs for IfAction SubSystem: '<S2>/CS5 LS' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* Chart: '<S13>/Chart' */
    if (ZT_VehCtrl_18B_DW.is_active_c21_ZT_VehCtrl_18B == 0U) {
      ZT_VehCtrl_18B_DW.is_active_c21_ZT_VehCtrl_18B = 1U;
      ZT_VehCtrl_18B_DW.is_c21_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_clear;
      rtb_Flg_e = 135;
      rtb_Flg = 1;
      ZT_VehCtrl_18B_DW.cnt_o = 0.0;
    } else {
      switch (ZT_VehCtrl_18B_DW.is_c21_ZT_VehCtrl_18B) {
       case ZT_VehCtrl_18B_IN_clear:
        rtb_Flg_e = 135;
        rtb_Flg = 1;
        if (ZT_VehCtrl_18B_DW.cnt_o > 5.0) {
          ZT_VehCtrl_18B_DW.is_c21_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_en;
          rtb_Flg_e = 193;
          rtb_Flg = 0;
          ZT_VehCtrl_18B_DW.cnt_o = 0.0;
        } else {
          ZT_VehCtrl_18B_DW.cnt_o++;
        }
        break;

       case ZT_VehCtrl_18B_IN_config:
        rtb_Flg_e = 199;
        rtb_Flg = 129;
        break;

       default:
        rtb_Flg_e = 193;
        rtb_Flg = 0;
        if (ZT_VehCtrl_18B_DW.cnt_o > 5.0) {
          ZT_VehCtrl_18B_DW.is_c21_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_config;
          rtb_Flg_e = 199;
          rtb_Flg = 129;
          ZT_VehCtrl_18B_DW.cnt_o = 0.0;
        } else {
          ZT_VehCtrl_18B_DW.cnt_o++;
        }
        break;
      }
    }

    /* End of Chart: '<S13>/Chart' */

    /* S-Function (spi_mpc_master_transfer): '<S13>/SPI_Master_Transfer_To1' */
    {
      DSPI_UpdateCS(0, 1);
      DSPI_MasterTransfer(0, &ZT_VehCtrl_18B_B.VectorConcatenate1_n[0],
                          &ZT_VehCtrl_18B_B.SPI_Master_Transfer_To1_c[0], 1);
    }

    /* DataTypeConversion: '<S13>/Data Type Conversion' */
    ZT_VehCtrl_18B_B.VectorConcatenate1_n[0] = (uint8_T)(int32_T)fmod(rtb_Flg_e,
      256.0);

    /* DataTypeConversion: '<S13>/Data Type Conversion1' */
    ZT_VehCtrl_18B_B.VectorConcatenate1_n[1] = (uint8_T)(int32_T)fmod(rtb_Flg,
      256.0);

    /* End of Outputs for SubSystem: '<S2>/CS5 LS' */
  }

  /* End of If: '<S2>/If2' */

  /* S-Function (gpio_mpc_output): '<S3>/HS1' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_ConstB.DataTypeConversion_cp) {
    PINS_DRV_SetPins(PTF, (1 << 6));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 6));
  }

  /* S-Function (gpio_mpc_output): '<S3>/HS4' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_ConstB.DataTypeConversion_cp) {
    PINS_DRV_SetPins(PTA, (1 << 13));
  } else {
    PINS_DRV_ClearPins(PTA, (1 << 13));
  }

  /* Outputs for Triggered SubSystem: '<S6>/ACU' incorporates:
   *  TriggerPort: '<S183>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.ACU_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S183>/FCAN_Send_ID_0x0C079AA7' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU_ACU1.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU_ACU1.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 51);
      FLEXCAN_DRV_ConfigTxMb(1, 51, &txInfo, 0x0C079AA7);
      FLEXCAN_DRV_Send(1, 51, &txInfo, 0x0C079AA7, data);
    }

    /* DataStoreWrite: '<S183>/Data Store Write' incorporates:
     *  Constant: '<S183>/Constant'
     *  DataStoreRead: '<S183>/Data Store Read'
     *  Sum: '<S183>/Add'
     */
    Cnt_ACU_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/ACU' */

  /* Outputs for Triggered SubSystem: '<S6>/BMS' incorporates:
   *  TriggerPort: '<S184>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.BMS_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S184>/FCAN_Send_ID_0x160' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU_BMS.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_STD,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU_BMS.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 14);
      FLEXCAN_DRV_ConfigTxMb(0, 14, &txInfo, 0x160);
      FLEXCAN_DRV_Send(0, 14, &txInfo, 0x160, data);
    }

    /* DataStoreWrite: '<S184>/Data Store Write' incorporates:
     *  Constant: '<S184>/Constant2'
     *  DataStoreRead: '<S184>/Data Store Read'
     *  Sum: '<S184>/Add'
     */
    Cnt_BMS_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/BMS' */

  /* Outputs for Triggered SubSystem: '<S6>/BRS' incorporates:
   *  TriggerPort: '<S185>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.BRS_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S185>/FCAN_Send_ID_0x0CF109A7' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2BRS.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2BRS.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 23);
      FLEXCAN_DRV_ConfigTxMb(0, 23, &txInfo, 0x0CF109A7);
      FLEXCAN_DRV_Send(0, 23, &txInfo, 0x0CF109A7, data);
    }

    /* DataStoreWrite: '<S185>/Data Store Write' incorporates:
     *  Constant: '<S185>/Constant4'
     *  DataStoreRead: '<S185>/Data Store Read'
     *  Sum: '<S185>/Add'
     */
    Cnt_BRS_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/BRS' */

  /* Outputs for Triggered SubSystem: '<S6>/DCDC' incorporates:
   *  TriggerPort: '<S186>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.DCDC_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S186>/FCAN_Send_ID_0x18008FD0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU_DCDC1.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU_DCDC1.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 47);
      FLEXCAN_DRV_ConfigTxMb(1, 47, &txInfo, 0x18008FD0);
      FLEXCAN_DRV_Send(1, 47, &txInfo, 0x18008FD0, data);
    }

    /* DataStoreWrite: '<S186>/Data Store Write' incorporates:
     *  Constant: '<S186>/Constant'
     *  DataStoreRead: '<S186>/Data Store Read'
     *  Sum: '<S186>/Add'
     */
    Cnt_DCDC_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/DCDC' */

  /* Outputs for Triggered SubSystem: '<S6>/HVC' incorporates:
   *  TriggerPort: '<S188>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.HVC_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S188>/FCAN_Send_ID_0x1800A105' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.Ctrl_HVC.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.Ctrl_HVC.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 48);
      FLEXCAN_DRV_ConfigTxMb(1, 48, &txInfo, 0x1800A105);
      FLEXCAN_DRV_Send(1, 48, &txInfo, 0x1800A105, data);
    }

    /* DataStoreWrite: '<S188>/Data Store Write1' incorporates:
     *  Constant: '<S188>/Constant6'
     *  DataStoreRead: '<S188>/Data Store Read1'
     *  Sum: '<S188>/Add1'
     */
    Cnt_HVC_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/HVC' */

  /* Outputs for Triggered SubSystem: '<S6>/ICU1 ' incorporates:
   *  TriggerPort: '<S189>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.ICU1_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S189>/FCAN_Send_ID_0x180128D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2ICUInfor1.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2ICUInfor1.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 16);
      FLEXCAN_DRV_ConfigTxMb(0, 16, &txInfo, 0x180128D0);
      FLEXCAN_DRV_Send(0, 16, &txInfo, 0x180128D0, data);
    }

    /* S-Function (fcan_mpc_send): '<S189>/FCAN_Send_ID_0x180328D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2ICUInfor3.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2ICUInfor3.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 18);
      FLEXCAN_DRV_ConfigTxMb(0, 18, &txInfo, 0x180328D0);
      FLEXCAN_DRV_Send(0, 18, &txInfo, 0x180328D0, data);
    }

    /* S-Function (fcan_mpc_send): '<S189>/FCAN_Send_ID_0x181128D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2ICUInfor4.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2ICUInfor4.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 19);
      FLEXCAN_DRV_ConfigTxMb(0, 19, &txInfo, 0x181128D0);
      FLEXCAN_DRV_Send(0, 19, &txInfo, 0x181128D0, data);
    }

    /* S-Function (fcan_mpc_send): '<S189>/FCAN_Send_ID_0x181228D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2ICUInfor5.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2ICUInfor5.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 20);
      FLEXCAN_DRV_ConfigTxMb(0, 20, &txInfo, 0x181228D0);
      FLEXCAN_DRV_Send(0, 20, &txInfo, 0x181228D0, data);
    }

    /* S-Function (fcan_mpc_send): '<S189>/FCAN_Send_ID_0x181328D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2ICUInfor6.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2ICUInfor6.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 21);
      FLEXCAN_DRV_ConfigTxMb(0, 21, &txInfo, 0x181328D0);
      FLEXCAN_DRV_Send(0, 21, &txInfo, 0x181328D0, data);
    }

    /* S-Function (fcan_mpc_send): '<S189>/FCAN_Send_ID_0x181428D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2ICUInfor7.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2ICUInfor7.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 22);
      FLEXCAN_DRV_ConfigTxMb(0, 22, &txInfo, 0x181428D0);
      FLEXCAN_DRV_Send(0, 22, &txInfo, 0x181428D0, data);
    }

    /* DataStoreWrite: '<S189>/Data Store Write' incorporates:
     *  Constant: '<S189>/Constant'
     *  DataStoreRead: '<S189>/Data Store Read'
     *  Sum: '<S189>/Add'
     */
    Cnt_ICU_OUT1++;
  }

  /* End of Outputs for SubSystem: '<S6>/ICU1 ' */

  /* Outputs for Triggered SubSystem: '<S6>/PDU' incorporates:
   *  TriggerPort: '<S193>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.PDU_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S193>/FCAN_Send_ID_0x0CF2503B' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU_PDU.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU_PDU.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 52);
      FLEXCAN_DRV_ConfigTxMb(1, 52, &txInfo, 0x0CF2503B);
      FLEXCAN_DRV_Send(1, 52, &txInfo, 0x0CF2503B, data);
    }

    /* DataStoreWrite: '<S193>/Data Store Write' incorporates:
     *  Constant: '<S193>/Constant'
     *  DataStoreRead: '<S193>/Data Store Read'
     *  Sum: '<S193>/Add'
     */
    Cnt_PDU_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/PDU' */

  /* Outputs for Triggered SubSystem: '<S6>/TWV' incorporates:
   *  TriggerPort: '<S196>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.TWV_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S196>/FCAN_Send_ID_0x18FF25EF' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU_TWV.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU_TWV.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 55);
      FLEXCAN_DRV_ConfigTxMb(1, 55, &txInfo, 0x18FF25EF);
      FLEXCAN_DRV_Send(1, 55, &txInfo, 0x18FF25EF, data);
    }

    /* DataStoreWrite: '<S196>/Data Store Write' incorporates:
     *  Constant: '<S196>/Constant'
     *  DataStoreRead: '<S196>/Data Store Read'
     *  Sum: '<S196>/Add'
     */
    Cnt_TWV_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/TWV' */

  /* Outputs for Triggered SubSystem: '<S6>/ICU2' incorporates:
   *  TriggerPort: '<S190>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.ICU2_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator6));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S190>/FCAN_Send_ID_0x180228D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2ICUInfor2.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2ICUInfor2.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 17);
      FLEXCAN_DRV_ConfigTxMb(0, 17, &txInfo, 0x180228D0);
      FLEXCAN_DRV_Send(0, 17, &txInfo, 0x180228D0, data);
    }

    /* DataStoreWrite: '<S190>/Data Store Write' incorporates:
     *  Constant: '<S190>/Constant'
     *  DataStoreRead: '<S190>/Data Store Read'
     *  Sum: '<S190>/Add'
     */
    Cnt_ICU_OUT2++;
  }

  /* End of Outputs for SubSystem: '<S6>/ICU2' */

  /* Outputs for Triggered SubSystem: '<S6>/ISG' incorporates:
   *  TriggerPort: '<S191>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.ISG_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator1));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S191>/FCAN_Send_ID_0xCFF06EF' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.ISGHCUCommand.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.ISGHCUCommand.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 54);
      FLEXCAN_DRV_ConfigTxMb(1, 54, &txInfo, 0xCFF06EF);
      FLEXCAN_DRV_Send(1, 54, &txInfo, 0xCFF06EF, data);
    }

    /* DataStoreWrite: '<S191>/Data Store Write' incorporates:
     *  Constant: '<S191>/Constant'
     *  DataStoreRead: '<S191>/Data Store Read'
     *  Sum: '<S191>/Add'
     */
    Cnt_ISG_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/ISG' */

  /* Outputs for Triggered SubSystem: '<S6>/MCU' incorporates:
   *  TriggerPort: '<S192>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.MCU_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator1));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S192>/FCAN_Send_ID_0x0C31EFD0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2MCU1.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2MCU1.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 49);
      FLEXCAN_DRV_ConfigTxMb(1, 49, &txInfo, 0x0C31EFD0);
      FLEXCAN_DRV_Send(1, 49, &txInfo, 0x0C31EFD0, data);
    }

    /* S-Function (fcan_mpc_send): '<S192>/FCAN_Send_ID_0x0C31F1D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.VCU2MCU2.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.VCU2MCU2.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 50);
      FLEXCAN_DRV_ConfigTxMb(1, 50, &txInfo, 0x0C31F1D0);
      FLEXCAN_DRV_Send(1, 50, &txInfo, 0x0C31F1D0, data);
    }

    /* DataStoreWrite: '<S192>/Data Store Write' incorporates:
     *  Constant: '<S192>/Constant'
     *  DataStoreRead: '<S192>/Data Store Read'
     *  Sum: '<S192>/Add'
     */
    Cnt_MCU_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/MCU' */

  /* Outputs for Triggered SubSystem: '<S6>/TM' incorporates:
   *  TriggerPort: '<S194>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.TM_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator1));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S194>/FCAN_Send_ID_0xCFF05EF' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.TMHCUCommand.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.TMHCUCommand.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 53);
      FLEXCAN_DRV_ConfigTxMb(1, 53, &txInfo, 0xCFF05EF);
      FLEXCAN_DRV_Send(1, 53, &txInfo, 0xCFF05EF, data);
    }

    /* DataStoreWrite: '<S194>/Data Store Write' incorporates:
     *  Constant: '<S194>/Constant'
     *  DataStoreRead: '<S194>/Data Store Read'
     *  Sum: '<S194>/Add'
     */
    Cnt_TM_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/TM' */

  /* Outputs for Triggered SubSystem: '<S6>/TMS' incorporates:
   *  TriggerPort: '<S195>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,&ZT_VehCtrl_18B_PrevZCX.TMS_Trig_ZCE,
                     ((real_T)rtb_Flg_b));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (fcan_mpc_send): '<S195>/FCAN_Send_ID_0x18FFF347' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_ConstB.TMS.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_ConstB.TMS.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 15);
      FLEXCAN_DRV_ConfigTxMb(0, 15, &txInfo, 0x18FFF347);
      FLEXCAN_DRV_Send(0, 15, &txInfo, 0x18FFF347, data);
    }

    /* DataStoreWrite: '<S195>/Data Store Write' incorporates:
     *  Constant: '<S195>/Constant'
     *  DataStoreRead: '<S195>/Data Store Read'
     *  Sum: '<S195>/Add'
     */
    Cnt_TMS_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/TMS' */

  /* S-Function (etimer_mpc_preload): '<S204>/eTimer_Preload2' */
  ETIMER_DRV_ReloadOnCompare(0, 5, ZT_VehCtrl_18B_ConstB.DataTypeConversion,
    true);                             //rolloverEnabled
  ETIMER_DRV_SetCompareThresholdBuffered(0, 5,
    ZT_VehCtrl_18B_B.DataTypeConversion1, ZT_VehCtrl_18B_B.DataTypeConversion2);

  /* S-Function (etimer_mpc_start_stop_timer): '<S204>/eTimer_Start_Stop_Timer1' */
  ETIMER_DRV_StartTimerChannels(0, ETIMER_ENABLE_CH5);

  /* S-Function (etimer_mpc_preload): '<S203>/eTimer_Preload2' */
  ETIMER_DRV_ReloadOnCompare(2, 2, ZT_VehCtrl_18B_ConstB.DataTypeConversion_p,
    true);                             //rolloverEnabled
  ETIMER_DRV_SetCompareThresholdBuffered(2, 2,
    ZT_VehCtrl_18B_B.DataTypeConversion1_n,
    ZT_VehCtrl_18B_B.DataTypeConversion2_i);

  /* S-Function (etimer_mpc_start_stop_timer): '<S203>/eTimer_Start_Stop_Timer1' */
  ETIMER_DRV_StartTimerChannels(2, ETIMER_ENABLE_CH2);

  /* S-Function (etimer_mpc_preload): '<S202>/eTimer_Preload2' */
  ETIMER_DRV_ReloadOnCompare(0, 3, ZT_VehCtrl_18B_ConstB.DataTypeConversion_h,
    true);                             //rolloverEnabled
  ETIMER_DRV_SetCompareThresholdBuffered(0, 3,
    ZT_VehCtrl_18B_B.DataTypeConversion1_p,
    ZT_VehCtrl_18B_B.DataTypeConversion2_p);

  /* S-Function (etimer_mpc_start_stop_timer): '<S202>/eTimer_Start_Stop_Timer1' */
  ETIMER_DRV_StartTimerChannels(0, ETIMER_ENABLE_CH3);

  /* S-Function (gpio_mpc_output): '<S198>/HS001' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_B.DataStoreRead) {
    PINS_DRV_SetPins(PTF, (1 << 5));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 5));
  }

  /* S-Function (gpio_mpc_output): '<S198>/HS007' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_B.DataStoreRead2) {
    PINS_DRV_SetPins(PTF, (1 << 7));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 7));
  }

  /* S-Function (gpio_mpc_output): '<S198>/HS002 ' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_B.DataStoreRead4) {
    PINS_DRV_SetPins(PTF, (1 << 4));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 4));
  }

  /* S-Function (gpio_mpc_output): '<S198>/HS003' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_B.DataStoreRead5) {
    PINS_DRV_SetPins(PTF, (1 << 3));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 3));
  }

  /* S-Function (gpio_mpc_output): '<S198>/HS004' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_B.DataStoreRead6) {
    PINS_DRV_SetPins(PTB, (1 << 6));
  } else {
    PINS_DRV_ClearPins(PTB, (1 << 6));
  }

  /* S-Function (gpio_mpc_output): '<S198>/HS005' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_B.DataStoreRead7) {
    PINS_DRV_SetPins(PTA, (1 << 12));
  } else {
    PINS_DRV_ClearPins(PTA, (1 << 12));
  }

  /* S-Function (gpio_mpc_output): '<S198>/HS010' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_B.DataStoreRead9) {
    PINS_DRV_SetPins(PTF, (1 << 9));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 9));
  }

  /* S-Function (gpio_mpc_output): '<S200>/LS_EN' incorporates:
   *  Constant: '<S200>/Constant'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTA, (1 << 2));
  } else {
    PINS_DRV_ClearPins(PTA, (1 << 2));
  }

  /* S-Function (gpio_mpc_output): '<S200>/LS_rst2' incorporates:
   *  Constant: '<S200>/Constant1'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTA, (1 << 1));
  } else {
    PINS_DRV_ClearPins(PTA, (1 << 1));
  }

  /* S-Function (gpio_mpc_output): '<S200>/LS_rst1' incorporates:
   *  Constant: '<S200>/Constant2'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTC, (1 << 10));
  } else {
    PINS_DRV_ClearPins(PTC, (1 << 10));
  }

  /* Outputs for Enabled SubSystem: '<S200>/LS_CTRL' incorporates:
   *  EnablePort: '<S213>/Enable'
   */
  /* Logic: '<S200>/Logical Operator1' */
  if (!rtb_LogicalOperator) {
    /* S-Function (spi_mpc_master_transfer): '<S213>/SPI_Master_Transfer_To1' */
    {
      DSPI_UpdateCS(0, 5);
      DSPI_MasterTransfer(0, &ZT_VehCtrl_18B_B.VectorConcatenate1_l[0],
                          &ZT_VehCtrl_18B_B.SPI_Master_Transfer_To1_j[0], 1);
    }

    /* Outputs for Atomic SubSystem: '<S213>/If Action Subsystem1' */
    /* Switch: '<S215>/Switch' incorporates:
     *  Constant: '<S215>/Constant1'
     *  Constant: '<S215>/Constant2'
     *  DataStoreRead: '<S215>/Data Store Read6'
     */
    if (LS002) {
      tmp_0 = 128U;
    } else {
      tmp_0 = 64U;
    }

    /* End of Switch: '<S215>/Switch' */

    /* Switch: '<S215>/Switch1' incorporates:
     *  Constant: '<S215>/Constant3'
     *  Constant: '<S215>/Constant4'
     *  DataStoreRead: '<S215>/Data Store Read5'
     */
    if (LS001) {
      tmp_1 = 32U;
    } else {
      tmp_1 = 16U;
    }

    /* End of Switch: '<S215>/Switch1' */

    /* Switch: '<S215>/Switch2' incorporates:
     *  Constant: '<S215>/Constant5'
     *  Constant: '<S215>/Constant6'
     *  DataStoreRead: '<S215>/Data Store Read4'
     */
    if (LS011) {
      tmp_2 = 8U;
    } else {
      tmp_2 = 4U;
    }

    /* End of Switch: '<S215>/Switch2' */

    /* Switch: '<S215>/Switch3' incorporates:
     *  Constant: '<S215>/Constant7'
     *  Constant: '<S215>/Constant8'
     *  DataStoreRead: '<S215>/Data Store Read'
     */
    if (LS004) {
      tmp_3 = 2U;
    } else {
      tmp_3 = 1U;
    }

    /* End of Switch: '<S215>/Switch3' */

    /* DataTypeConversion: '<S215>/Data Type Conversion1' incorporates:
     *  Sum: '<S215>/Add'
     */
    ZT_VehCtrl_18B_B.VectorConcatenate1_l[1] = (uint8_T)((((uint32_T)tmp_0 +
      tmp_1) + tmp_2) + tmp_3);

    /* End of Outputs for SubSystem: '<S213>/If Action Subsystem1' */

    /* SignalConversion: '<S213>/ConcatBufferAtVector Concatenate1In1' */
    ZT_VehCtrl_18B_B.VectorConcatenate1_l[0] =
      ZT_VehCtrl_18B_ConstB.DataTypeConversion_c;
  }

  /* End of Logic: '<S200>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S200>/LS_CTRL' */

  /* Outputs for Enabled SubSystem: '<S200>/LS_CTRL1' incorporates:
   *  EnablePort: '<S214>/Enable'
   */
  if (rtb_LogicalOperator) {
    /* S-Function (spi_mpc_master_transfer): '<S214>/SPI_Master_Transfer_To1' */
    {
      DSPI_UpdateCS(0, 1);
      DSPI_MasterTransfer(0, &ZT_VehCtrl_18B_B.VectorConcatenate1[0],
                          &ZT_VehCtrl_18B_B.SPI_Master_Transfer_To1[0], 1);
    }

    /* Outputs for Atomic SubSystem: '<S214>/If Action Subsystem1' */
    /* Switch: '<S216>/Switch' incorporates:
     *  Constant: '<S216>/Constant1'
     *  Constant: '<S216>/Constant2'
     *  DataStoreRead: '<S216>/Data Store Read6'
     */
    if (LS016) {
      tmp_0 = 128U;
    } else {
      tmp_0 = 64U;
    }

    /* End of Switch: '<S216>/Switch' */

    /* Switch: '<S216>/Switch1' incorporates:
     *  Constant: '<S216>/Constant3'
     *  Constant: '<S216>/Constant4'
     *  DataStoreRead: '<S216>/Data Store Read5'
     */
    if (LS009) {
      tmp_1 = 32U;
    } else {
      tmp_1 = 16U;
    }

    /* End of Switch: '<S216>/Switch1' */

    /* Switch: '<S216>/Switch2' incorporates:
     *  Constant: '<S216>/Constant5'
     *  Constant: '<S216>/Constant6'
     *  DataStoreRead: '<S216>/Data Store Read4'
     */
    if (LS015) {
      tmp_2 = 8U;
    } else {
      tmp_2 = 4U;
    }

    /* End of Switch: '<S216>/Switch2' */

    /* Switch: '<S216>/Switch3' incorporates:
     *  Constant: '<S216>/Constant7'
     *  Constant: '<S216>/Constant8'
     *  DataStoreRead: '<S216>/Data Store Read'
     */
    if (LS014) {
      tmp_3 = 2U;
    } else {
      tmp_3 = 1U;
    }

    /* End of Switch: '<S216>/Switch3' */

    /* DataTypeConversion: '<S216>/Data Type Conversion1' incorporates:
     *  Sum: '<S216>/Add'
     */
    ZT_VehCtrl_18B_B.VectorConcatenate1[1] = (uint8_T)((((uint32_T)tmp_0 + tmp_1)
      + tmp_2) + tmp_3);

    /* End of Outputs for SubSystem: '<S214>/If Action Subsystem1' */

    /* SignalConversion: '<S214>/ConcatBufferAtVector Concatenate1In1' */
    ZT_VehCtrl_18B_B.VectorConcatenate1[0] =
      ZT_VehCtrl_18B_ConstB.DataTypeConversion_k;
  }

  /* End of Outputs for SubSystem: '<S200>/LS_CTRL1' */

  /* S-Function (gpio_mpc_output): '<S201>/LS_EN1' incorporates:
   *  Constant: '<S201>/Constant1'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTF, (1 << 10));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 10));
  }

  /* S-Function (gpio_mpc_output): '<S201>/LS_rst' incorporates:
   *  Constant: '<S201>/Constant3'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTC, (1 << 14));
  } else {
    PINS_DRV_ClearPins(PTC, (1 << 14));
  }

  /* Outputs for Enabled SubSystem: '<S201>/Subsystem' incorporates:
   *  EnablePort: '<S218>/Enable'
   */
  /* Logic: '<S201>/Logical Operator' incorporates:
   *  Constant: '<S217>/Constant'
   *  DataStoreRead: '<S201>/Data Store Read'
   *  DataStoreWrite: '<S2>/Data Store Write3'
   *  RelationalOperator: '<S217>/Compare'
   */
  if ((VCU_Mode == 2) && ZT_VehCtrl_18B_ConstB.DataTypeConversion1) {
    /* S-Function (spi_mpc_master_transfer): '<S218>/SPI_Master_Transfer_To2' */
    {
      DSPI_UpdateCS(3, 3);
      DSPI_MasterTransfer(3, &ZT_VehCtrl_18B_B.VectorConcatenate2[0],
                          &ZT_VehCtrl_18B_B.SPI_Master_Transfer_To2[0], 1);
    }

    /* Outputs for Atomic SubSystem: '<S218>/¿ØÖÆ' */
    /* DataTypeConversion: '<S219>/Data Type Conversion' incorporates:
     *  Constant: '<S219>/Constant9'
     *  DataStoreRead: '<S219>/Data Store Read1'
     *  DataStoreRead: '<S219>/Data Store Read2'
     *  Gain: '<S219>/Gain8'
     *  Gain: '<S219>/Gain9'
     *  Sum: '<S219>/Add1'
     */
    ZT_VehCtrl_18B_B.VectorConcatenate2[0] = (uint8_T)(((((uint32_T)(LS012 << 7)
      << 1) + ((uint32_T)LS007 << 7)) + 5632U) >> 7);

    /* DataTypeConversion: '<S219>/Data Type Conversion1' incorporates:
     *  DataStoreRead: '<S219>/Data Store Read10'
     *  DataStoreRead: '<S219>/Data Store Read5'
     *  DataStoreRead: '<S219>/Data Store Read6'
     *  DataStoreRead: '<S219>/Data Store Read9'
     *  Gain: '<S219>/Gain2'
     *  Gain: '<S219>/Gain3'
     *  Gain: '<S219>/Gain6'
     *  Gain: '<S219>/Gain7'
     *  Sum: '<S219>/Add'
     */
    tmp = floor(((((((real_T)(LS013 << 7) * 0.5 + (real_T)(LS006 << 7)) +
                    ZT_VehCtrl_18B_ConstB.Gain5) + ZT_VehCtrl_18B_ConstB.Gain4)
                  + (real_T)(LS008 << 7) * 0.0625) + (real_T)(LS010 << 7) *
                 0.03125) + ZT_VehCtrl_18B_ConstB.Gain1);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    ZT_VehCtrl_18B_B.VectorConcatenate2[1] = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S219>/Data Type Conversion1' */
    /* End of Outputs for SubSystem: '<S218>/¿ØÖÆ' */
  }

  /* End of Logic: '<S201>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S201>/Subsystem' */

  /* Outputs for Atomic SubSystem: '<Root>/Init' */
  /* If: '<S1>/If1' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read1'
   */
  if (VCU_Mode == 2) {
    /* Outputs for IfAction SubSystem: '<S1>/CAN_init' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* S-Function (fcan_mpc_receive): '<S8>/ACU1' */
    FLEXCAN_DRV_Receive(1, 36, &canCom1_recvBuff36);

    /* S-Function (fcan_mpc_receive): '<S8>/ACU2' */
    FLEXCAN_DRV_Receive(1, 37, &canCom1_recvBuff37);

    /* S-Function (fcan_mpc_receive): '<S8>/ACU3' */
    FLEXCAN_DRV_Receive(1, 38, &canCom1_recvBuff38);

    /* S-Function (fcan_mpc_receive): '<S8>/BMS Power Infor' */
    FLEXCAN_DRV_Receive(0, 3, &canCom0_recvBuff3);

    /* S-Function (fcan_mpc_receive): '<S8>/BMS Statistic_Temperature of Battery' */
    FLEXCAN_DRV_Receive(0, 5, &canCom0_recvBuff5);

    /* S-Function (fcan_mpc_receive): '<S8>/BMS other Information3' */
    FLEXCAN_DRV_Receive(0, 6, &canCom0_recvBuff6);

    /* S-Function (fcan_mpc_receive): '<S8>/BMSWarning Status' */
    FLEXCAN_DRV_Receive(0, 2, &canCom0_recvBuff2);

    /* S-Function (fcan_mpc_receive): '<S8>/BMS_Information 1' */
    FLEXCAN_DRV_Receive(0, 0, &canCom0_recvBuff0);

    /* S-Function (fcan_mpc_receive): '<S8>/BMS_Information 2' */
    FLEXCAN_DRV_Receive(0, 1, &canCom0_recvBuff1);

    /* S-Function (fcan_mpc_receive): '<S8>/BRS2VCU1' */
    FLEXCAN_DRV_Receive(0, 11, &canCom0_recvBuff11);

    /* S-Function (fcan_mpc_receive): '<S8>/BRS2VCU2' */
    FLEXCAN_DRV_Receive(0, 12, &canCom0_recvBuff12);

    /* S-Function (fcan_mpc_receive): '<S8>/BRS2VCU3' */
    FLEXCAN_DRV_Receive(0, 13, &canCom0_recvBuff13);

    /* S-Function (fcan_mpc_receive): '<S8>/DCDC1_1' */
    FLEXCAN_DRV_Receive(1, 24, &canCom1_recvBuff24);

    /* S-Function (fcan_mpc_receive): '<S8>/DCDC1_2' */
    FLEXCAN_DRV_Receive(1, 26, &canCom1_recvBuff26);

    /* S-Function (fcan_mpc_receive): '<S8>/HVC1_LV' */
    FLEXCAN_DRV_Receive(1, 25, &canCom1_recvBuff25);

    /* S-Function (fcan_mpc_receive): '<S8>/HVC3_Temp' */
    FLEXCAN_DRV_Receive(1, 27, &canCom1_recvBuff27);

    /* S-Function (fcan_mpc_receive): '<S8>/HVC4_RlySt' */
    FLEXCAN_DRV_Receive(1, 28, &canCom1_recvBuff28);

    /* S-Function (fcan_mpc_receive): '<S8>/HVC7_HV1' */
    FLEXCAN_DRV_Receive(1, 29, &canCom1_recvBuff29);

    /* S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS1' */
    FLEXCAN_DRV_Receive(1, 43, &canCom1_recvBuff43);

    /* S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS2' */
    FLEXCAN_DRV_Receive(1, 44, &canCom1_recvBuff44);

    /* S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS3' */
    FLEXCAN_DRV_Receive(1, 45, &canCom1_recvBuff45);

    /* S-Function (fcan_mpc_receive): '<S8>/MCU1Msg1' */
    FLEXCAN_DRV_Receive(1, 30, &canCom1_recvBuff30);

    /* S-Function (fcan_mpc_receive): '<S8>/MCU1Msg2' */
    FLEXCAN_DRV_Receive(1, 31, &canCom1_recvBuff31);

    /* S-Function (fcan_mpc_receive): '<S8>/MCU1Msg3' */
    FLEXCAN_DRV_Receive(1, 32, &canCom1_recvBuff32);

    /* S-Function (fcan_mpc_receive): '<S8>/MCU2Msg1' */
    FLEXCAN_DRV_Receive(1, 33, &canCom1_recvBuff33);

    /* S-Function (fcan_mpc_receive): '<S8>/MCU2Msg2' */
    FLEXCAN_DRV_Receive(1, 34, &canCom1_recvBuff34);

    /* S-Function (fcan_mpc_receive): '<S8>/MCU2Msg3' */
    FLEXCAN_DRV_Receive(1, 35, &canCom1_recvBuff35);

    /* S-Function (fcan_mpc_receive): '<S8>/OBC_Charger Status' */
    FLEXCAN_DRV_Receive(0, 9, &canCom0_recvBuff9);

    /* S-Function (fcan_mpc_receive): '<S8>/PDU_RelaySts' */
    FLEXCAN_DRV_Receive(1, 39, &canCom1_recvBuff39);

    /* S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS1' */
    FLEXCAN_DRV_Receive(1, 40, &canCom1_recvBuff40);

    /* S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS2' */
    FLEXCAN_DRV_Receive(1, 41, &canCom1_recvBuff41);

    /* S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS3' */
    FLEXCAN_DRV_Receive(1, 42, &canCom1_recvBuff42);

    /* S-Function (fcan_mpc_receive): '<S8>/TMS2VCU' */
    FLEXCAN_DRV_Receive(0, 10, &canCom0_recvBuff10);

    /* S-Function (fcan_mpc_receive): '<S8>/TWV' */
    FLEXCAN_DRV_Receive(1, 46, &canCom1_recvBuff46);

    /* End of Outputs for SubSystem: '<S1>/CAN_init' */
  }

  /* End of If: '<S1>/If1' */

  /* If: '<S1>/If2' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read3'
   */
  if (ZT_VehCtrl_18B_DW.Init_flg == 0) {
    /* Outputs for IfAction SubSystem: '<S1>/Init' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* DataStoreWrite: '<S9>/Data Store Write3' */
    ZT_VehCtrl_18B_DW.Init_flg = ZT_VehCtrl_18B_ConstB.DataTypeConversion_b;

    /* DataStoreWrite: '<S9>/Data Store Write' */
    LS001 = ZT_VehCtrl_18B_ConstB.DataTypeConversion2_g;

    /* End of Outputs for SubSystem: '<S1>/Init' */
  }

  /* End of If: '<S1>/If2' */
  /* End of Outputs for SubSystem: '<Root>/Init' */
  /* Product: '<S197>/Divide3' incorporates:
   *  Constant: '<S197>/Freq_MC3'
   *  Constant: '<S197>/Pre5'
   *  DataStoreRead: '<S197>/Data Store Read5'
   */
  rtb_Add3 = 1.25E+6 / LSO3_ETC_FRQ;

  /* Product: '<S197>/Product1' incorporates:
   *  DataStoreRead: '<S197>/Data Store Read4'
   */
  rtb_Divide2 = LSO3_ETC_DC * rtb_Add3;

  /* DataTypeConversion: '<S204>/Data Type Conversion1' */
  tmp = floor(rtb_Divide2);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_B.DataTypeConversion1 = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S204>/Data Type Conversion1' */

  /* Sum: '<S197>/Add1' */
  rtb_Divide2 = rtb_Add3 - rtb_Divide2;

  /* DataTypeConversion: '<S204>/Data Type Conversion2' */
  tmp = floor(rtb_Divide2);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_B.DataTypeConversion2 = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S204>/Data Type Conversion2' */

  /* Product: '<S197>/Divide4' incorporates:
   *  Constant: '<S197>/Freq_MC4'
   *  Constant: '<S197>/Pre4'
   *  DataStoreRead: '<S197>/Data Store Read3'
   */
  rtb_Divide2 = 1.25E+6 / LSO17_ETC_FRQ;

  /* Product: '<S197>/Product2' incorporates:
   *  DataStoreRead: '<S197>/Data Store Read1'
   */
  rtb_Add3 = LSO17_ETC_DC * rtb_Divide2;

  /* DataTypeConversion: '<S203>/Data Type Conversion1' */
  tmp = floor(rtb_Add3);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_B.DataTypeConversion1_n = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S203>/Data Type Conversion1' */

  /* Sum: '<S197>/Add2' */
  rtb_Add3 = rtb_Divide2 - rtb_Add3;

  /* DataTypeConversion: '<S203>/Data Type Conversion2' */
  tmp = floor(rtb_Add3);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_B.DataTypeConversion2_i = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S203>/Data Type Conversion2' */

  /* Product: '<S197>/Divide2' incorporates:
   *  Constant: '<S197>/Freq_MC5'
   *  Constant: '<S197>/Pre3'
   *  DataStoreRead: '<S197>/Data Store Read13'
   */
  rtb_Divide2 = 1.25E+6 / LSO18_ETC_FRQ;

  /* Product: '<S197>/Product6' incorporates:
   *  DataStoreRead: '<S197>/Data Store Read12'
   */
  rtb_Add3 = LSO18_ETC_DC * rtb_Divide2;

  /* DataTypeConversion: '<S202>/Data Type Conversion1' */
  tmp = floor(rtb_Add3);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_B.DataTypeConversion1_p = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S202>/Data Type Conversion1' */

  /* Sum: '<S197>/Add3' */
  rtb_Add3 = rtb_Divide2 - rtb_Add3;

  /* DataTypeConversion: '<S202>/Data Type Conversion2' */
  tmp = floor(rtb_Add3);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_B.DataTypeConversion2_p = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S202>/Data Type Conversion2' */
}

/* Model initialize function */
void ZT_VehCtrl_18B_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(ZT_VehCtrl_18B_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &ZT_VehCtrl_18B_B), 0,
                sizeof(B_ZT_VehCtrl_18B_T));

  /* states (dwork) */
  (void) memset((void *)&ZT_VehCtrl_18B_DW, 0,
                sizeof(DW_ZT_VehCtrl_18B_T));

  /* exported global states */
  Cnt_BMS6 = 0U;
  Cnt_TM_OUT = 0U;
  Cnt_HVC4 = 0U;
  VCU_Mode = 0U;
  Cnt_HVC7 = 0U;
  Cnt_ISG_OUT = 0U;
  Cnt_TWV_OUT = 0U;
  Cnt_DCDC1_1 = 0U;
  Cnt_DCDC1_2 = 0U;
  Cnt_MCU1_1 = 0U;
  Cnt_MCU1_2 = 0U;
  Cnt_BMS1 = 0U;
  Cnt_BMS2 = 0U;
  Cnt_BMS3 = 0U;
  Cnt_MCU1_3 = 0U;
  Cnt_BMS4 = 0U;
  Cnt_BMS5 = 0U;
  Cnt_MCU2_1 = 0U;
  Cnt_OBC = 0U;
  Cnt_MCU2_2 = 0U;
  Cnt_MCU2_3 = 0U;
  Cnt_ACU1 = 0U;
  Cnt_ACU2 = 0U;
  Cnt_ACU3 = 0U;
  Cnt_PDU = 0U;
  Cnt_TMS = 0U;
  Cnt_TWV = 0U;
  Cnt_TW1 = 0U;
  Cnt_TW2 = 0U;
  Cnt_TW3 = 0U;
  Cnt_ISG1 = 0U;
  Cnt_BRS1 = 0U;
  Cnt_ISG2 = 0U;
  Cnt_ISG3 = 0U;
  Cnt_BMS_OUT = 0U;
  Cnt_TMS_OUT = 0U;
  Cnt_ICU_OUT1 = 0U;
  Cnt_BRS2 = 0U;
  Cnt_ICU_OUT2 = 0U;
  Cnt_BRS_OUT = 0U;
  Cnt_DCDC_OUT = 0U;
  Cnt_HVC_OUT = 0U;
  Cnt_MCU_OUT = 0U;
  Cnt_ACU_OUT = 0U;
  Cnt_PDU_OUT = 0U;
  Cnt_BRS3 = 0U;
  ResetFlg = 0U;
  Cnt_HVC1 = 0U;
  Cnt_HVC3 = 0U;
  Init_flg_SPI = 0U;
  LS007 = false;
  LS012 = false;
  LS013 = false;
  LS018 = false;
  LS019 = false;
  LS003 = false;
  LS017 = false;
  LS014 = false;
  LS015 = false;
  LS009 = false;
  LS016 = false;
  LS004 = false;
  LS011 = false;
  LS001 = false;
  LS002 = false;
  LS010 = false;
  LS008 = false;
  LS006 = false;

  /* custom states */
  HSO08_PWM_DC = 0.0F;
  HSO08_PWM_FRQ = 0.0F;
  HSO14_PWM_DC = 0.0F;
  HSO14_PWM_FRQ = 0.0F;
  LSO18_ETC_DC = 0.0F;
  LSO18_ETC_FRQ = 0.0F;
  LSO19_PWM_DC = 0.0F;
  LSO19_PWM_FRQ = 0.0F;
  DI31_PWM_DC = 0.0F;
  DI31_PWM_FRQ = 0.0F;
  DI32_PWM_DC = 0.0F;
  DI32_PWM_FRQ = 0.0F;
  DI33_PWM_DC = 0.0F;
  DI33_PWM_FRQ = 0.0F;
  DI34_PWM_DC = 0.0F;
  DI34_PWM_FRQ = 0.0F;
  LSO17_ETC_FRQ = 0.0F;
  LSO3_ETC_DC = 0.0F;
  LSO3_ETC_FRQ = 0.0F;
  HS008_ETC_FRQ = 0.0F;
  HSO14_ETC_FRQ = 0.0F;
  LSO19_ETC_DC = 0.0F;
  LSO19_ETC_FRQ = 0.0F;
  AI03 = 0.0F;
  AI19 = 0.0F;
  AI11 = 0.0F;
  AI16 = 0.0F;
  AI18 = 0.0F;
  AI06 = 0.0F;
  AI07 = 0.0F;
  AI08 = 0.0F;
  AI12 = 0.0F;
  AI15 = 0.0F;
  AI17 = 0.0F;
  AI04 = 0.0F;
  AI05 = 0.0F;
  AI09 = 0.0F;
  AI20 = 0.0F;
  LSO17_ETC_DC = 0.0F;
  HS014_ETC_DC = 0.0F;
  HS008_ETC_DC = 0.0F;
  HS001 = false;
  HS008 = false;
  HS002 = false;
  HS014 = false;
  HS003 = false;
  HS007 = false;
  HS004 = false;
  HS005 = false;
  HS010 = false;
  DI31 = false;
  DI32 = false;
  DI33 = false;
  DI07 = false;
  DI01 = false;
  DI10 = false;
  DI13 = false;
  DI15 = false;
  DI16 = false;
  DI17 = false;
  DI18 = false;
  DI02 = false;
  DI03 = false;
  DI34 = false;
  DI04 = false;
  DI12 = false;
  DI08 = false;
  DI09 = false;
  HS006 = false;

  /* Start for S-Function (fcan_mpc_config): '<Root>/FCAN_Config4' */
  {
    const flexcan_user_config_t canCom0_InitConfig = {
      .pe_clock = FLEXCAN_CLK_SOURCE_PERIPH,
      .max_num_mb = 63U,
      .num_id_filters = FLEXCAN_RX_FIFO_ID_FILTERS_8,
      .is_rx_fifo_needed = false,
      .flexcanMode = FLEXCAN_NORMAL_MODE,

      /* Bitrate: 500U and clock frequency: 67000000U */
      .bitrate = {
        .propSeg = 7U,
        .phaseSeg1 = 6U,
        .phaseSeg2 = 2U,
        .preDivider = 6U,
        .rJumpwidth = 3U
      },
      .transfer_type = FLEXCAN_RXFIFO_USING_INTERRUPTS,
    };

    /* Enable CAN0 clock */
    MBDT_SetPeripheralClockControl(FLEXCAN0_CLK, MC_ME_PERIPH_CONFIG_2,
      MC_ME_PERIPH_CONFIG_3);

    /* pin config */
    pin_settings_config_t pin_vect[] = {
      /* Tx pin */
      {
        .base = SIUL2,
        .pinPortIdx = 16U,
        .mux = PORT_MUX_ALT1,
        .direction = GPIO_OUTPUT_DIRECTION,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTB,
      },

      /* Rx pin */
      {
        .base = SIUL2,
        .pinPortIdx = 17U,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .mux = PORT_MUX_AS_GPIO,
        .gpioBase = PTB,
        .inputMuxReg[0] = 32U,
        .inputMux[0] = PORT_MUX_ALT2,
        .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
        .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
        .safeMode = PORT_SAFE_MODE_DISABLED,
        .slewRateCtrlSel = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
      } };

    PINS_DRV_Init(2, pin_vect);
    FLEXCAN_DRV_Init(0, &canCom0_State, &canCom0_InitConfig);
  }

  /* Start for S-Function (fcan_mpc_config): '<Root>/FCAN_Config6' */
  {
    const flexcan_user_config_t canCom1_InitConfig = {
      .pe_clock = FLEXCAN_CLK_SOURCE_PERIPH,
      .max_num_mb = 63U,
      .num_id_filters = FLEXCAN_RX_FIFO_ID_FILTERS_8,
      .is_rx_fifo_needed = false,
      .flexcanMode = FLEXCAN_NORMAL_MODE,

      /* Bitrate: 250U and clock frequency: 67000000U */
      .bitrate = {
        .propSeg = 7U,
        .phaseSeg1 = 2U,
        .phaseSeg2 = 1U,
        .preDivider = 18U,
        .rJumpwidth = 2U
      },
      .transfer_type = FLEXCAN_RXFIFO_USING_INTERRUPTS,
    };

    /* Enable CAN1 clock */
    MBDT_SetPeripheralClockControl(FLEXCAN1_CLK, MC_ME_PERIPH_CONFIG_2,
      MC_ME_PERIPH_CONFIG_3);

    /* pin config */
    pin_settings_config_t pin_vect[] = {
      /* Tx pin */
      {
        .base = SIUL2,
        .pinPortIdx = 14U,
        .mux = PORT_MUX_ALT1,
        .direction = GPIO_OUTPUT_DIRECTION,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTA,
      },

      /* Rx pin */
      {
        .base = SIUL2,
        .pinPortIdx = 15U,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .mux = PORT_MUX_AS_GPIO,
        .gpioBase = PTA,
        .inputMuxReg[0] = 33U,
        .inputMux[0] = PORT_MUX_ALT1,
        .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
        .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
        .safeMode = PORT_SAFE_MODE_DISABLED,
        .slewRateCtrlSel = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
      } };

    PINS_DRV_Init(2, pin_vect);
    FLEXCAN_DRV_Init(1, &canCom1_State, &canCom1_InitConfig);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI01' */
  {
    /* Enable clock */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_3,
      MC_ME_PERIPH_CONFIG_2);

    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 101U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTG,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI02' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 105U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTG,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI03' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 43U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTC,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI04' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 9U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTA,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI07' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 0U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTA,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI08' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 59U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTD,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI09' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 102U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTG,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI10' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 98U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTG,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI12' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 93U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI13' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 100U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTG,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI15' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 92U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI16' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 103U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTG,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI17' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 58U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTD,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S40>/DI18' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 106U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTG,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S153>/DI31' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 80U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S153>/DI32' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 49U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTD,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S153>/DI33' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 50U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTD,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_input): '<S153>/DI34' */
  {
    /* Configure the input port init structure */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 45U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTC,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (fcan_mpc_isr): '<S5>/CAN0_Rx_500' */
  FLEXCAN_DRV_InstallEventCallback(0, fcan0_mpc_event_callback, (void *)0);

  /* End of Start for S-Function (fcan_mpc_isr): '<S5>/CAN0_Rx_500' */

  /* Start for S-Function (fcan_mpc_isr): '<S5>/CAN1_Rx_500' */
  FLEXCAN_DRV_InstallEventCallback(1, fcan1_mpc_event_callback, (void *)0);

  /* End of Start for S-Function (fcan_mpc_isr): '<S5>/CAN1_Rx_500' */

  /* Start for DiscretePulseGenerator: '<S2>/Pulse Generator' */
  ZT_VehCtrl_18B_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S6>/Pulse Generator2' */
  ZT_VehCtrl_18B_DW.clockTickCounter_g = 0;

  /* Start for DiscretePulseGenerator: '<S6>/Pulse Generator1' */
  ZT_VehCtrl_18B_DW.clockTickCounter_i = 0;

  /* Start for DiscretePulseGenerator: '<S6>/Pulse Generator6' */
  ZT_VehCtrl_18B_DW.clockTickCounter_h = 0;

  /* Start for DiscretePulseGenerator: '<S6>/Pulse Generator' */
  ZT_VehCtrl_18B_DW.clockTickCounter_e = 0;

  /* Start for S-Function (gpio_mpc_output): '<S3>/HS1' */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 86U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S3>/HS4' */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 13U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTA,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S198>/HS001' */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 85U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S198>/HS007' */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 87U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S198>/HS002 ' */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 84U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S198>/HS003' */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 83U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S198>/HS004' */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 22U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTB,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S198>/HS005' */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 12U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTA,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S198>/HS010' */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 89U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S200>/LS_EN' incorporates:
   *  Constant: '<S200>/Constant'
   */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 2U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTA,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S200>/LS_rst2' incorporates:
   *  Constant: '<S200>/Constant1'
   */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 1U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTA,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S200>/LS_rst1' incorporates:
   *  Constant: '<S200>/Constant2'
   */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 42U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTC,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S201>/LS_EN1' incorporates:
   *  Constant: '<S201>/Constant1'
   */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 90U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTF,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for S-Function (gpio_mpc_output): '<S201>/LS_rst' incorporates:
   *  Constant: '<S201>/Constant3'
   */
  {
    /* Configure the output port init structure. */
    const pin_settings_config_t pin = {
      .base = SIUL2,
      .pinPortIdx = 46U,
      .mux = PORT_MUX_AS_GPIO,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,

#ifdef FEATURE_PINS_HAS_DRIVE_STRENGTH_CONTROL

      .driveSelect = PORT_STRENGTH_DISABLED
#endif
      .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,

#ifdef FEATURE_SIUL2_HAS_ANALOG_PAD

      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,

#endif

      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

      .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_INPUT

      .inputInvert = PORT_INVERT_INPUT_DISABLED,

#endif

      .gpioBase = PTC,
      .initValue = 1u,
      .direction = GPIO_OUTPUT_DIRECTION
    };

    /* Initialize pin structure */
    PINS_DRV_Init(1, &pin);
  }

  /* Start for Atomic SubSystem: '<Root>/Init' */
  /* Start for IfAction SubSystem: '<S1>/CAN_init' */
  /* Start for S-Function (fcan_mpc_receive): '<S8>/ACU1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 36, &rxInfo, 0x0C08A79A);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 36, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/ACU2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 37, &rxInfo, 0x0C09A79B);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 37, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/ACU3' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 38, &rxInfo, 0x0C0AA79D);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 38, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BMS Power Infor' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 3, &rxInfo, 0x211);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 3, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BMS Statistic_Temperature of Battery' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 5, &rxInfo, 0x353);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 5, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BMS other Information3' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 6, &rxInfo, 0x205);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 6, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BMSWarning Status' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 2, &rxInfo, 0x1F5);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 2, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BMS_Information 1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 0, &rxInfo, 0x1E1);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 0, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BMS_Information 2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 1, &rxInfo, 0x1E4);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 1, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BRS2VCU1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 11, &rxInfo, 0x18FE25E4);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 11, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BRS2VCU2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 12, &rxInfo, 0x18FE26E4);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 12, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BRS2VCU3' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 13, &rxInfo, 0x18FE27E4);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 13, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/DCDC1_1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 24, &rxInfo, 0x1800D08F);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 24, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/DCDC1_2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 26, &rxInfo, 0x1801D08F);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 26, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/HVC1_LV' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 25, &rxInfo, 0x180105A1);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 25, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/HVC3_Temp' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 27, &rxInfo, 0x180305A1);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 27, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/HVC4_RlySt' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 28, &rxInfo, 0x180405A1);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 28, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/HVC7_HV1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 29, &rxInfo, 0x180705A1);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 29, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 43, &rxInfo, 0xCFF0006);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 43, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 44, &rxInfo, 0xCFF0106);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 44, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS3' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 45, &rxInfo, 0xCFF0206);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 45, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/MCU1Msg1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 30, &rxInfo, 0x1836D0EF);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 30, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/MCU1Msg2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 31, &rxInfo, 0x1837D0EF);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 31, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/MCU1Msg3' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 32, &rxInfo, 0x1838D0EF);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 32, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/MCU2Msg1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 33, &rxInfo, 0x1836D0F1);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 33, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/MCU2Msg2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 34, &rxInfo, 0x1837D0F1);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 34, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/MCU2Msg3' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 35, &rxInfo, 0x1838D0F1);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 35, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/OBC_Charger Status' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 9, &rxInfo, 0x220);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 9, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/PDU_RelaySts' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 39, &rxInfo, 0x18FF2BC8);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 39, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 40, &rxInfo, 0xCFF0005);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 40, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 41, &rxInfo, 0xCFF0105);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 41, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS3' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 42, &rxInfo, 0xCFF0205);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 42, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/TMS2VCU' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 10, &rxInfo, 0x18FFF346);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 10, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/TWV' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(1, 46, &rxInfo, 0x18FF243B);
    FLEXCAN_DRV_SetRxMaskType(1, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(1, msg_id_type, 46, 0xFFFFFFFF);
  }

  /* End of Start for SubSystem: '<S1>/CAN_init' */
  /* End of Start for SubSystem: '<Root>/Init' */

  /* Start for S-Function (adc_mpc_config): '<Root>/ADC_Config' */
  MBDT_SetPeripheralClockControl(ADC0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  PINS_DRV_Init(10U, adc0_PinsCfg);
  ADC_DRV_Reset(0);
  ADC_DRV_DoCalibration(0);
  ADC_DRV_SetPresamplingSource(0, ADC_CHAN_GROUP_0, ADC_PRESAMPLE_SRC0);
  ADC_DRV_SetPresamplingSource(0, ADC_CHAN_GROUP_1, ADC_PRESAMPLE_SRC0);
  ADC_DRV_SetPresamplingSource(0, ADC_CHAN_GROUP_2, ADC_PRESAMPLE_SRC0);
  ADC_DRV_ChainConfig(0, &adc0_chain_config);
  ADC_DRV_ConfigConverter(0, &adc0_config);

  /* Start for S-Function (adc_mpc_config): '<Root>/ADC_Config1' */
  MBDT_SetPeripheralClockControl(ADC1_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  PINS_DRV_Init(5U, adc1_PinsCfg);
  ADC_DRV_Reset(1);
  ADC_DRV_DoCalibration(1);
  ADC_DRV_SetPresamplingSource(1, ADC_CHAN_GROUP_0, ADC_PRESAMPLE_SRC0);
  ADC_DRV_SetPresamplingSource(1, ADC_CHAN_GROUP_1, ADC_PRESAMPLE_SRC0);
  ADC_DRV_SetPresamplingSource(1, ADC_CHAN_GROUP_2, ADC_PRESAMPLE_SRC0);
  ADC_DRV_ChainConfig(1, &adc1_chain_config);
  ADC_DRV_ConfigConverter(1, &adc1_config);

  /* Start for S-Function (fm_mpc_config): '<Root>/FreeMaster_Config' */
  pin_settings_config_t pin_vect[] = {
    /* Tx pin */
    {
      .base = SIUL2,
      .pinPortIdx = 94U,
      .mux = PORT_MUX_ALT2,
      .direction = GPIO_OUTPUT_DIRECTION,
      .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .slewRateCtrlSel = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .safeMode = PORT_SAFE_MODE_ENABLED,
      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
      .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .gpioBase = PTF,
    },

    /* Rx pin */
    {
      .base = SIUL2,
      .pinPortIdx = 95U,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .openDrain = PORT_OPEN_DRAIN_DISABLED,
      .mux = PORT_MUX_AS_GPIO,
      .gpioBase = PTF,
      .inputMuxReg[0] = 34U,
      .inputMux[0] = PORT_MUX_ALT1,
      .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
      .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
      .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
      .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
      .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
      .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
      .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
      .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
      .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
      .safeMode = PORT_SAFE_MODE_DISABLED,
      .slewRateCtrlSel = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
      .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
      .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
    } };

  PINS_DRV_Init(2, pin_vect);

  /* Initialize FreeMaster. */
  freemaster_interface_init();
  FMSTR_Init();

  /* Start for S-Function (spi_mpc_config): '<Root>/SPI_Config_CANB&LS' */
  {
    /* Enable SPI clock */
    MBDT_SetPeripheralClockControl(SPI3_CLK, MC_ME_PERIPH_CONFIG_2,
      MC_ME_PERIPH_CONFIG_3);

    /* Enable clock for pins */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2,
      MC_ME_PERIPH_CONFIG_3);
  }

  {
    /* Setup SPI pins */
    pin_settings_config_t spi_pin_mux[5] = {
      /* SIN pin settings */
      {
        /* PTE15 pin selected */
        .base = SIUL2,
        .pinPortIdx = 79U,
        .mux = PORT_MUX_AS_GPIO,
        .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTE,
        .intConfig =
        {
          .intEdgeSel = SIUL2_INT_DISABLE
        },
        .inputMux[0] = PORT_MUX_ALT4,
        .inputInvert[0] = PORT_INVERT_INPUT_DISABLED,
        .inputMuxReg[0] = 50U,
        .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[7] = PORT_INPUT_MUX_NO_INIT
      },

      /* SOUT pin settings */
      {
        /* PTE14 pin selected */
        .base = SIUL2,
        .pinPortIdx = 78U,
        .mux = PORT_MUX_ALT2,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTE
      },

      /* PCS settings */
      {
        /* PTD12 pin selected */
        .base = SIUL2,
        .pinPortIdx = 60U,
        .mux = PORT_MUX_ALT3,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTD
      },

      /* PCS settings */
      {
        /* PTD14 pin selected */
        .base = SIUL2,
        .pinPortIdx = 62U,
        .mux = PORT_MUX_ALT3,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTD
      },

      /* SCK */
      {
        /* PTE13 pin selected */
        .base = SIUL2,
        .pinPortIdx = 77U,
        .mux = PORT_MUX_ALT4,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTE
      }
    };

    PINS_DRV_Init(5, spi_pin_mux);

    /* Configure the SPI init structure. */
    dspi_master_config_t spiConfig3 = {
      .bitsPerSec = 500000U,
      .whichPCS = 0,
      .pcsPolarity = DSPI_ACTIVE_LOW,
      .continuousPCS = true,
      .bitcount = 16U,
      .clkPhase = DSPI_CLOCK_PHASE_2ND_EDGE,
      .clkPolarity = DSPI_ACTIVE_HIGH,
      .lsbFirst = false,
      .transferType = DSPI_USING_INTERRUPTS,
      .callback = (spi_callback_t)spi_master_transfer_callback3,
    };

    /* Initializes an SPI instance for interrupt driven master mode operation */
    DSPI_MasterInit(3, &spiMasterState3, &spiConfig3);
  }

  /* Start for S-Function (spi_mpc_config): '<Root>/SPI_Config_EEPROM&LS' */
  {
    /* Enable SPI clock */
    MBDT_SetPeripheralClockControl(SPI0_CLK, MC_ME_PERIPH_CONFIG_2,
      MC_ME_PERIPH_CONFIG_3);

    /* Enable clock for pins */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2,
      MC_ME_PERIPH_CONFIG_3);
  }

  {
    /* Setup SPI pins */
    pin_settings_config_t spi_pin_mux[6] = {
      /* SIN pin settings */
      {
        /* PTC7 pin selected */
        .base = SIUL2,
        .pinPortIdx = 39U,
        .mux = PORT_MUX_AS_GPIO,
        .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTC,
        .intConfig =
        {
          .intEdgeSel = SIUL2_INT_DISABLE
        },
        .inputMux[0] = PORT_MUX_ALT1,
        .inputInvert[0] = PORT_INVERT_INPUT_DISABLED,
        .inputMuxReg[0] = 41U,
        .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
        .inputMux[7] = PORT_INPUT_MUX_NO_INIT
      },

      /* SOUT pin settings */
      {
        /* PTC6 pin selected */
        .base = SIUL2,
        .pinPortIdx = 38U,
        .mux = PORT_MUX_ALT1,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTC
      },

      /* PCS settings */
      {
        /* PTC4 pin selected */
        .base = SIUL2,
        .pinPortIdx = 36U,
        .mux = PORT_MUX_ALT1,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTC
      },

      /* PCS settings */
      {
        /* PTG8 pin selected */
        .base = SIUL2,
        .pinPortIdx = 104U,
        .mux = PORT_MUX_ALT2,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTG
      },

      /* PCS settings */
      {
        /* PTD8 pin selected */
        .base = SIUL2,
        .pinPortIdx = 56U,
        .mux = PORT_MUX_ALT3,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTD
      },

      /* SCK */
      {
        /* PTC5 pin selected */
        .base = SIUL2,
        .pinPortIdx = 37U,
        .mux = PORT_MUX_ALT1,
        .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
        .openDrain = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
        .safeMode = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
        .gpioBase = PTC
      }
    };

    PINS_DRV_Init(6, spi_pin_mux);

    /* Configure the SPI init structure. */
    dspi_master_config_t spiConfig0 = {
      .bitsPerSec = 500000U,
      .whichPCS = 0,
      .pcsPolarity = DSPI_ACTIVE_LOW,
      .continuousPCS = true,
      .bitcount = 16U,
      .clkPhase = DSPI_CLOCK_PHASE_2ND_EDGE,
      .clkPolarity = DSPI_ACTIVE_HIGH,
      .lsbFirst = false,
      .transferType = DSPI_USING_INTERRUPTS,
      .callback = (spi_callback_t)spi_master_transfer_callback0,
    };

    /* Initializes an SPI instance for interrupt driven master mode operation */
    DSPI_MasterInit(0, &spiMasterState0, &spiConfig0);
  }

  /* Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config' */

  /* Enable clock for pins */
  MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  PINS_DRV_Init(1, eTmr0Ch2PinsCfg);

  /* Un-gate eTimer clock*/
  MBDT_SetPeripheralClockControl(ETIMER0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);

  /* Initializes the ETIMER module. */
  ETIMER_DRV_Init(ETIMER_MODULE_0);

  /* Initializes the channel 2. */
  ETIMER_DRV_InitChannel(ETIMER_MODULE_0, ETIMER_IRQ_CH2, &eTmr0Ch2Cfg);

  /* Setting the CNTR channel 2 value. */
  ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_0, 2, 0U);

  /* Starts channel 2 counting. */
  ETIMER_DRV_StartTimerChannels(ETIMER_MODULE_0, ETIMER_ENABLE_CH2);

  /* Starts channel 2 capture arming*/
  ETIMER_DRV_StartCapture(ETIMER_MODULE_0, 2);

  /* Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config1' */

  /* Enable clock for pins */
  MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  PINS_DRV_Init(1, eTmr1Ch2PinsCfg);

  /* Un-gate eTimer clock*/
  MBDT_SetPeripheralClockControl(ETIMER1_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);

  /* Initializes the ETIMER module. */
  ETIMER_DRV_Init(ETIMER_MODULE_1);

  /* Initializes the channel 2. */
  ETIMER_DRV_InitChannel(ETIMER_MODULE_1, ETIMER_IRQ_CH2, &eTmr1Ch2Cfg);

  /* Setting the CNTR channel 2 value. */
  ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_1, 2, 0U);

  /* Starts channel 2 counting. */
  ETIMER_DRV_StartTimerChannels(ETIMER_MODULE_1, ETIMER_ENABLE_CH2);

  /* Starts channel 2 capture arming*/
  ETIMER_DRV_StartCapture(ETIMER_MODULE_1, 2);

  /* Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config10' */

  /* Enable clock for pins */
  MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  PINS_DRV_Init(1, eTmr0Ch3PinsCfg);

  /* Initializes the channel 3. */
  ETIMER_DRV_InitChannel(ETIMER_MODULE_0, ETIMER_IRQ_CH3, &eTmr0Ch3Cfg);

  /* Setting the CNTR channel 3 value. */
  ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_0, 3, 1U);

  /* Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config11' */

  /* Enable clock for pins */
  MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  PINS_DRV_Init(1, eTmr0Ch5PinsCfg);

  /* Initializes the channel 5. */
  ETIMER_DRV_InitChannel(ETIMER_MODULE_0, ETIMER_IRQ_CH5, &eTmr0Ch5Cfg);

  /* Setting the CNTR channel 5 value. */
  ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_0, 5, 1U);

  /* Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config12' */

  /* Enable clock for pins */
  MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  PINS_DRV_Init(1, eTmr2Ch2PinsCfg);

  /* Un-gate eTimer clock*/
  MBDT_SetPeripheralClockControl(ETIMER2_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);

  /* Initializes the ETIMER module. */
  ETIMER_DRV_Init(ETIMER_MODULE_2);

  /* Initializes the channel 2. */
  ETIMER_DRV_InitChannel(ETIMER_MODULE_2, ETIMER_IRQ_CH2, &eTmr2Ch2Cfg);

  /* Setting the CNTR channel 2 value. */
  ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_2, 2, 1U);

  /* Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config2' */

  /* Enable clock for pins */
  MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  PINS_DRV_Init(1, eTmr1Ch3PinsCfg);

  /* Initializes the channel 3. */
  ETIMER_DRV_InitChannel(ETIMER_MODULE_1, ETIMER_IRQ_CH3, &eTmr1Ch3Cfg);

  /* Setting the CNTR channel 3 value. */
  ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_1, 3, 0U);

  /* Starts channel 3 counting. */
  ETIMER_DRV_StartTimerChannels(ETIMER_MODULE_1, ETIMER_ENABLE_CH3);

  /* Starts channel 3 capture arming*/
  ETIMER_DRV_StartCapture(ETIMER_MODULE_1, 3);

  /* Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config3' */

  /* Enable clock for pins */
  MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  PINS_DRV_Init(1, eTmr1Ch1PinsCfg);

  /* Initializes the channel 1. */
  ETIMER_DRV_InitChannel(ETIMER_MODULE_1, ETIMER_IRQ_CH1, &eTmr1Ch1Cfg);

  /* Setting the CNTR channel 1 value. */
  ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_1, 1, 0U);

  /* Starts channel 1 counting. */
  ETIMER_DRV_StartTimerChannels(ETIMER_MODULE_1, ETIMER_ENABLE_CH1);

  /* Starts channel 1 capture arming*/
  ETIMER_DRV_StartCapture(ETIMER_MODULE_1, 1);

  /* Start for DataStoreMemory: '<Root>/Data Store Memory106' */
  HSO08_PWM_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory108' */
  HSO14_PWM_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory110' */
  LSO18_ETC_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory112' */
  LSO19_PWM_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory113' */
  DI31_PWM_DC = 0.5F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory114' */
  DI31_PWM_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory115' */
  DI32_PWM_DC = 0.5F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory117' */
  DI32_PWM_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory118' */
  DI33_PWM_DC = 0.5F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory119' */
  DI33_PWM_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory120' */
  DI34_PWM_DC = 0.5F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory121' */
  DI34_PWM_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory122' */
  LSO17_ETC_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory124' */
  LSO3_ETC_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory129' */
  HS008_ETC_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory130' */
  HSO14_ETC_FRQ = 200.0F;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory132' */
  LSO19_ETC_FRQ = 200.0F;
  ZT_VehCtrl_18B_PrevZCX.ACU_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.BMS_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.BRS_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.DCDC_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.HVC_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.ICU1_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.ICU2_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.ISG_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.MCU_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.PDU_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.TM_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.TMS_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_PrevZCX.TWV_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* SystemInitialize for Chart: '<S2>/Chart1' */
  ZT_VehCtrl_18B_DW.is_active_c23_ZT_VehCtrl_18B = 0U;
  ZT_VehCtrl_18B_DW.is_c23_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S2>/Chart2' */
  ZT_VehCtrl_18B_DW.is_active_c24_ZT_VehCtrl_18B = 0U;
  ZT_VehCtrl_18B_DW.is_c24_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S2>/Chart' */
  ZT_VehCtrl_18B_DW.is_active_c22_ZT_VehCtrl_18B = 0U;
  ZT_VehCtrl_18B_DW.is_c22_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for IfAction SubSystem: '<S2>/CS1 LS' */
  /* SystemInitialize for Chart: '<S10>/Chart' */
  ZT_VehCtrl_18B_DW.is_active_c11_ZT_VehCtrl_18B = 0U;
  ZT_VehCtrl_18B_DW.is_c11_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<S2>/CS1 LS' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/CS3 LS' */
  /* SystemInitialize for Chart: '<S12>/Chart' */
  ZT_VehCtrl_18B_DW.is_active_c14_ZT_VehCtrl_18B = 0U;
  ZT_VehCtrl_18B_DW.is_c14_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<S2>/CS3 LS' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/CS5 LS' */
  /* SystemInitialize for Chart: '<S13>/Chart' */
  ZT_VehCtrl_18B_DW.is_active_c21_ZT_VehCtrl_18B = 0U;
  ZT_VehCtrl_18B_DW.is_c21_ZT_VehCtrl_18B = ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<S2>/CS5 LS' */
}

/* Model terminate function */
void ZT_VehCtrl_18B_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
