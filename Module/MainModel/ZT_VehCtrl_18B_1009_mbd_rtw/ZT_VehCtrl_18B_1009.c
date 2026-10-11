/*
 * File: ZT_VehCtrl_18B_1009.c
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

/* Named constants for Chart: '<S2>/Chart' */
#define ZT_VehCtrl_18B_1009_IN_Idle    ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_Initialize ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define ZT_VehCtrl_18B_1009_IN_Normal  ((uint8_T)3U)

/* Named constants for Chart: '<S2>/Chart1' */
#define ZT_VehCtrl_18B_1009_IN_CS1     ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_CS5     ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_Done    ((uint8_T)3U)
#define ZT_VehCtrl_18B_1009_IN_IDLE    ((uint8_T)4U)

/* Named constants for Chart: '<S2>/Chart2' */
#define ZT_VehCtrl_18B_1009_IN_CS2     ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_CS3     ((uint8_T)2U)

/* Named constants for Chart: '<S10>/Chart' */
#define ZT_VehCtrl_18B_1009_IN_clear   ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_config  ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_en      ((uint8_T)3U)

/* Named constants for Chart: '<S12>/Chart' */
#define ZT_VehCtrl_18B_1009_IN_ConfigA ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_en_a    ((uint8_T)2U)

/* Named constants for Chart: '<S5>/Chart' */
#define ZT_VehCtrl_18B_1009_IN_D       ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_N       ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_R       ((uint8_T)3U)

/* Named constants for Chart: '<S226>/Chart' */
#define ZT_VehCtrl_18B_1009_IN_BMS_PowerOff ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_BRS_En  ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_BRS_Wait ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_Front_HVDown ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_Front_LVDown ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_Front_Off ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_Front_Off_d ((uint8_T)3U)
#define ZT_VehCtrl_18B_1009_IN_HVC_Ready ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_HVC_Wait ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_Init    ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_OBCEn   ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_OBCOff  ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_OBCOn   ((uint8_T)3U)
#define ZT_VehCtrl_18B_1009_IN_OBC_BMS_PowerOn ((uint8_T)4U)
#define ZT_VehCtrl_18B_1009_IN_OBC_Down ((uint8_T)5U)
#define ZT_VehCtrl_18B_1009_IN_OBC_Front_HVDown ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_OBC_Front_LVDown ((uint8_T)3U)
#define ZT_VehCtrl_18B_1009_IN_OBC_HVC_Ready ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_OBC_HVC_wait ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_OBC_PDU_Ready ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_OBC_PDU_wait ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_OBC_Rear_HVDown ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_OBC_Rear_LVDown ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_OBC_Relay_PosPreEn ((uint8_T)3U)
#define ZT_VehCtrl_18B_1009_IN_PDU_Ready ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_PDU_Wait ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_PowerOff ((uint8_T)6U)
#define ZT_VehCtrl_18B_1009_IN_PowerOn ((uint8_T)7U)
#define ZT_VehCtrl_18B_1009_IN_Rear_HVDown ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_Rear_LVDown ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_Rear_Off ((uint8_T)3U)
#define ZT_VehCtrl_18B_1009_IN_Relay_NegEn ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_Relay_PosPreEn ((uint8_T)2U)

/* Named constants for Chart: '<S229>/Chart' */
#define ZT_VehCtrl_18B_1009_IN_FrontActive_D ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_FrontActive_R ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_FrontWait ((uint8_T)3U)
#define ZT_VehCtrl_18B_1009_IN_RearActive_D ((uint8_T)1U)
#define ZT_VehCtrl_18B_1009_IN_RearActive_R ((uint8_T)2U)
#define ZT_VehCtrl_18B_1009_IN_RearWait ((uint8_T)3U)

dspi_state_t spiMasterState3;
void spi_master_transfer_callback3(void *driverState, spi_event_t event, void
  *userData) __attribute__((weak));
dspi_state_t spiMasterState0;
void spi_master_transfer_callback0(void *driverState, spi_event_t event, void
  *userData) __attribute__((weak));

/* Exported block signals */
real32_T AccPadle;                     /* '<S43>/Switch' */
real32_T VehSpd_mps;                   /* '<S231>/Product' */
real32_T RadiatorTempOut;              /* '<S5>/1-D Lookup Table' */
real32_T Gear;                         /* '<S5>/Chart' */
boolean_T ParkReleaseSw;               /* '<S5>/Data Store Read4' */
boolean_T ChargeEnSw;                  /* '<S5>/Data Store Read6' */
boolean_T BodyLoadSw;                  /* '<S5>/Data Store Read1' */
boolean_T HornSw;                      /* '<S5>/Data Store Read2' */
boolean_T FourWSSw;                    /* '<S5>/Data Store Read19' */
boolean_T CrabSteerSw;                 /* '<S5>/Data Store Read20' */
boolean_T LegLoadSw;                   /* '<S5>/Data Store Read3' */
boolean_T MotorLevelSw;                /* '<S5>/Data Store Read' */
boolean_T ParkLowWarn;                 /* '<S5>/Data Store Read14' */

/* Exported block states */
real32_T EnergyFlag;                   /* '<Root>/Data Store Memory135' */
real32_T VCU_FanSpeedLvl_num;          /* '<Root>/Data Store Memory139' */
real32_T DcacEpsCmd;                   /* '<Root>/Data Store Memory147' */
real32_T DcacEpsMode;                  /* '<Root>/Data Store Memory148' */
real32_T DcacAcCmd;                    /* '<Root>/Data Store Memory149' */
real32_T VCU_HVACRlyCtl;               /* '<Root>/Data Store Memory151' */
real32_T VCU_PTCRlyCtl;                /* '<Root>/Data Store Memory152' */
real32_T VCU_DCCpstRlyCtl;             /* '<Root>/Data Store Memory154' */
real32_T TWV_ON_Ctr;                   /* '<Root>/Data Store Memory155' */
uint8_T Cnt_BMS6;                      /* '<Root>/Data Store Memory1' */
uint8_T Cnt_TM_OUT;                    /* '<Root>/Data Store Memory104' */
uint8_T Cnt_HVC4;                      /* '<Root>/Data Store Memory12' */
uint8_T VCU_Mode;                      /* '<Root>/Data Store Memory125' */
uint8_T Cnt_HVC7;                      /* '<Root>/Data Store Memory13' */
uint8_T Cnt_ISG_OUT;                   /* '<Root>/Data Store Memory133' */
uint8_T Cnt_TWV_OUT;                   /* '<Root>/Data Store Memory134' */
uint8_T Cnt_MCU2_OUT;                  /* '<Root>/Data Store Memory136' */
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
uint8_T Cnt_TM1;                       /* '<Root>/Data Store Memory46' */
uint8_T Cnt_TM2;                       /* '<Root>/Data Store Memory47' */
uint8_T Cnt_TM3;                       /* '<Root>/Data Store Memory48' */
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
uint8_T Cnt_MCU1_OUT;                  /* '<Root>/Data Store Memory64' */
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
boolean_T EnergyReady[8];              /* '<Root>/Data Store Memory137' */
boolean_T Key;                         /* '<Root>/Data Store Memory138' */
boolean_T PaxAC_PowOnCmd;              /* '<Root>/Data Store Memory144' */
boolean_T PTC_PowOnCmd;                /* '<Root>/Data Store Memory145' */
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
B_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_B;

/* Block states (default storage) */
DW_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_PrevZCX;

/* Real-time model */
RT_MODEL_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_M_;
RT_MODEL_ZT_VehCtrl_18B_1009_T *const ZT_VehCtrl_18B_1009_M =
  &ZT_VehCtrl_18B_1009_M_;

/* Forward declaration for local functions */
static void ZT_VehCtrl_18B_1009_PowerOn(const boolean_T *Compare_n, const
  boolean_T *Compare_n3, const boolean_T *Compare_i, boolean_T *Compare_a);
static void ZT_VehCtrl_18B_1009_enter_atomic_Init(void);
static void ZT_VehCtrl_18B_1009_OBCOn(const boolean_T *Compare_n, const
  boolean_T *Compare_n3, const boolean_T *Compare_i, boolean_T *Switch_e4);
static void ZT_VehCtrl_18B_1009_DriveControl(const real32_T *Switch, const
  real32_T *Switch1, real32_T *TM_Demand_Torque, real_T *ISG_Control_Mode,
  real_T *VCU2OilMotor_CtrlMode, real_T *VCU2DrvMotor_CtrlMode);
flexcan_state_t canCom0_State;
flexcan_state_t canCom1_State;
flexcan_msgbuff_t canCom0_recvBuff36;
flexcan_msgbuff_t canCom0_recvBuff37;
flexcan_msgbuff_t canCom0_recvBuff38;
flexcan_msgbuff_t canCom0_recvBuff3;
flexcan_msgbuff_t canCom0_recvBuff5;
flexcan_msgbuff_t canCom0_recvBuff6;
flexcan_msgbuff_t canCom0_recvBuff2;
flexcan_msgbuff_t canCom0_recvBuff0;
flexcan_msgbuff_t canCom0_recvBuff1;
flexcan_msgbuff_t canCom0_recvBuff4;
flexcan_msgbuff_t canCom0_recvBuff11;
flexcan_msgbuff_t canCom0_recvBuff12;
flexcan_msgbuff_t canCom0_recvBuff13;
flexcan_msgbuff_t canCom0_recvBuff24;
flexcan_msgbuff_t canCom0_recvBuff26;
flexcan_msgbuff_t canCom0_recvBuff25;
flexcan_msgbuff_t canCom0_recvBuff27;
flexcan_msgbuff_t canCom0_recvBuff28;
flexcan_msgbuff_t canCom0_recvBuff29;
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
flexcan_msgbuff_t canCom0_recvBuff39;
flexcan_msgbuff_t canCom1_recvBuff40;
flexcan_msgbuff_t canCom1_recvBuff41;
flexcan_msgbuff_t canCom1_recvBuff42;
flexcan_msgbuff_t canCom0_recvBuff10;
flexcan_msgbuff_t canCom1_recvBuff46;
real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
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

/* Start for function-call system: '<S5>/CAN0 ' */
void ZT_VehCtrl_18B_1009_CAN0_Start(void)
{
  /* Start for IfAction SubSystem: '<S56>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S98>/CAN Unpack6' */

  /*-----------S-Function Block: <S98>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S56>/UNPACK' */

  /* Start for IfAction SubSystem: '<S63>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S105>/CAN Unpack6' */

  /*-----------S-Function Block: <S105>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S63>/UNPACK' */

  /* Start for IfAction SubSystem: '<S69>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S111>/CAN Unpack6' */

  /*-----------S-Function Block: <S111>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S69>/UNPACK' */

  /* Start for IfAction SubSystem: '<S70>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S112>/CAN Unpack6' */

  /*-----------S-Function Block: <S112>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S70>/UNPACK' */

  /* Start for IfAction SubSystem: '<S71>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S113>/CAN Unpack6' */

  /*-----------S-Function Block: <S113>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S71>/UNPACK' */

  /* Start for IfAction SubSystem: '<S74>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S116>/CAN Unpack6' */

  /*-----------S-Function Block: <S116>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S74>/UNPACK' */

  /* Start for IfAction SubSystem: '<S81>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S123>/CAN Unpack6' */

  /*-----------S-Function Block: <S123>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S81>/UNPACK' */

  /* Start for IfAction SubSystem: '<S82>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S124>/CAN Unpack6' */

  /*-----------S-Function Block: <S124>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S82>/UNPACK' */

  /* Start for IfAction SubSystem: '<S83>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S125>/CAN Unpack6' */

  /*-----------S-Function Block: <S125>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S83>/UNPACK' */

  /* Start for IfAction SubSystem: '<S84>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S126>/CAN Unpack6' */

  /*-----------S-Function Block: <S126>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S84>/UNPACK' */

  /* Start for IfAction SubSystem: '<S85>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S127>/CAN Unpack6' */

  /*-----------S-Function Block: <S127>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S85>/UNPACK' */
}

/* Output and update for function-call system: '<S5>/CAN0 ' */
void ZT_VehCtrl_18B_1009_CAN0(void)
{
  int32_T i;

  /* SwitchCase: '<S45>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 201893786) {
    /* Outputs for IfAction SubSystem: '<S45>/UNPACK' incorporates:
     *  ActionPort: '<S87>/Action Port'
     */
    /* DataStoreWrite: '<S87>/Data Store Write' incorporates:
     *  Constant: '<S87>/Constant'
     *  DataStoreRead: '<S87>/Data Store Read'
     *  Sum: '<S87>/Add'
     */
    Cnt_ACU1++;

    /* End of Outputs for SubSystem: '<S45>/UNPACK' */
  }

  /* End of SwitchCase: '<S45>/Switch Case' */

  /* SwitchCase: '<S46>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 201959323) {
    /* Outputs for IfAction SubSystem: '<S46>/UNPACK' incorporates:
     *  ActionPort: '<S88>/Action Port'
     */
    /* DataStoreWrite: '<S88>/Data Store Write' incorporates:
     *  Constant: '<S88>/Constant'
     *  DataStoreRead: '<S88>/Data Store Read'
     *  Sum: '<S88>/Add'
     */
    Cnt_ACU2++;

    /* End of Outputs for SubSystem: '<S46>/UNPACK' */
  }

  /* End of SwitchCase: '<S46>/Switch Case' */

  /* SwitchCase: '<S47>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 202024861) {
    /* Outputs for IfAction SubSystem: '<S47>/UNPACK' incorporates:
     *  ActionPort: '<S89>/Action Port'
     */
    /* DataStoreWrite: '<S89>/Data Store Write' incorporates:
     *  Constant: '<S89>/Constant'
     *  DataStoreRead: '<S89>/Data Store Read'
     *  Sum: '<S89>/Add'
     */
    Cnt_ACU3++;

    /* End of Outputs for SubSystem: '<S47>/UNPACK' */
  }

  /* End of SwitchCase: '<S47>/Switch Case' */

  /* SwitchCase: '<S56>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 529) {
    /* Outputs for IfAction SubSystem: '<S56>/UNPACK' incorporates:
     *  ActionPort: '<S98>/Action Port'
     */
    /* DataStoreWrite: '<S98>/Data Store Write' incorporates:
     *  Constant: '<S98>/Constant'
     *  DataStoreRead: '<S98>/Data Store Read'
     *  Sum: '<S98>/Add'
     */
    Cnt_BMS4++;

    /* BusCreator: '<S98>/Bus Creator' incorporates:
     *  Constant: '<S98>/Constant1'
     *  Constant: '<S98>/Constant4'
     *  Constant: '<S98>/Constant5'
     *  DataTypeConversion: '<S98>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Extended = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.ID =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S98>/Bus Creator' */

    /* S-Function (scanunpack): '<S98>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S98>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.ID != INVALID_CAN_ID) ) {
        if ((529 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.ID) && (0U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 40
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.01
             *  offset                  = -100.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Data[4]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.01) + -100.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_gr = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 8
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Data[1]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Data[0]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_c = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 24
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_fc.Data[2]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_o = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S98>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.BMS_InsulationResistance = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_c;

    /* DataTypeConversion: '<S98>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.BMS_BatteryPower = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_gr;

    /* End of Outputs for SubSystem: '<S56>/UNPACK' */
  }

  /* End of SwitchCase: '<S56>/Switch Case' */

  /* SwitchCase: '<S63>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 851) {
    /* Outputs for IfAction SubSystem: '<S63>/UNPACK' incorporates:
     *  ActionPort: '<S105>/Action Port'
     */
    /* DataStoreWrite: '<S105>/Data Store Write' incorporates:
     *  Constant: '<S105>/Constant'
     *  DataStoreRead: '<S105>/Data Store Read'
     *  Sum: '<S105>/Add'
     */
    Cnt_BMS5++;

    /* BusCreator: '<S105>/Bus Creator' incorporates:
     *  Constant: '<S105>/Constant1'
     *  Constant: '<S105>/Constant4'
     *  Constant: '<S105>/Constant5'
     *  DataTypeConversion: '<S105>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Extended = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.ID =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S105>/Bus Creator' */

    /* S-Function (scanunpack): '<S105>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S105>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.ID != INVALID_CAN_ID) ) {
        if ((851 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.ID) && (0U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Data[0]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_n = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_b = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 24
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Data[3]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_it = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 40
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hp.Data[4]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_ja = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S105>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.Statistic_TemperatureHTMax = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_n;

    /* DataTypeConversion: '<S105>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.Statistic_TemperatureLTMax = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_it;

    /* End of Outputs for SubSystem: '<S63>/UNPACK' */
  }

  /* End of SwitchCase: '<S63>/Switch Case' */

  /* SwitchCase: '<S67>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 517) {
    /* Outputs for IfAction SubSystem: '<S67>/UNPACK' incorporates:
     *  ActionPort: '<S109>/Action Port'
     */
    /* DataStoreWrite: '<S109>/Data Store Write' incorporates:
     *  Constant: '<S109>/Constant'
     *  DataStoreRead: '<S109>/Data Store Read'
     *  Sum: '<S109>/Add'
     */
    Cnt_BMS6++;

    /* End of Outputs for SubSystem: '<S67>/UNPACK' */
  }

  /* End of SwitchCase: '<S67>/Switch Case' */

  /* SwitchCase: '<S68>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 501) {
    /* Outputs for IfAction SubSystem: '<S68>/UNPACK' incorporates:
     *  ActionPort: '<S110>/Action Port'
     */
    /* DataStoreWrite: '<S110>/Data Store Write' incorporates:
     *  Constant: '<S110>/Constant'
     *  DataStoreRead: '<S110>/Data Store Read'
     *  Sum: '<S110>/Add'
     */
    Cnt_BMS3++;

    /* End of Outputs for SubSystem: '<S68>/UNPACK' */
  }

  /* End of SwitchCase: '<S68>/Switch Case' */

  /* SwitchCase: '<S69>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 481) {
    /* Outputs for IfAction SubSystem: '<S69>/UNPACK' incorporates:
     *  ActionPort: '<S111>/Action Port'
     */
    /* DataStoreWrite: '<S111>/Data Store Write' incorporates:
     *  Constant: '<S111>/Constant'
     *  DataStoreRead: '<S111>/Data Store Read'
     *  Sum: '<S111>/Add'
     */
    Cnt_BMS1++;

    /* BusCreator: '<S111>/Bus Creator' incorporates:
     *  Constant: '<S111>/Constant1'
     *  Constant: '<S111>/Constant4'
     *  Constant: '<S111>/Constant5'
     *  DataTypeConversion: '<S111>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Extended = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.ID =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S111>/Bus Creator' */

    /* S-Function (scanunpack): '<S111>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S111>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.ID != INVALID_CAN_ID) ) {
        if ((481 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.ID) && (0U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 24
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = -1000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Data[2]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.1) + -1000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_o = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 56
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Data[7]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Data[6]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_jk = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 40
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Data[4]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_gr = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 8
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Data[1]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_ky.Data[0]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_a = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S111>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.Cur_Bat = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_o;

    /* DataTypeConversion: '<S111>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.Display_SOC = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_jk;

    /* DataTypeConversion: '<S111>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.SOC = (real32_T)ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_gr;

    /* DataTypeConversion: '<S111>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.Vol_Bat = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_a;

    /* End of Outputs for SubSystem: '<S69>/UNPACK' */
  }

  /* End of SwitchCase: '<S69>/Switch Case' */

  /* SwitchCase: '<S70>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 484) {
    /* Outputs for IfAction SubSystem: '<S70>/UNPACK' incorporates:
     *  ActionPort: '<S112>/Action Port'
     */
    /* DataStoreWrite: '<S112>/Data Store Write' incorporates:
     *  Constant: '<S112>/Constant'
     *  DataStoreRead: '<S112>/Data Store Read'
     *  Sum: '<S112>/Add'
     */
    Cnt_BMS2++;

    /* BusCreator: '<S112>/Bus Creator' incorporates:
     *  Constant: '<S112>/Constant1'
     *  Constant: '<S112>/Constant4'
     *  Constant: '<S112>/Constant5'
     *  DataTypeConversion: '<S112>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Extended = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.ID =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S112>/Bus Creator' */

    /* S-Function (scanunpack): '<S112>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S112>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.ID != INVALID_CAN_ID) ) {
        if ((484 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.ID) && (0U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 48
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[6]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_h = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 12
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[1]) & (uint8_T)
                      (0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_ec = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 4
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[0]) & (uint8_T)
                      (0x30U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_h = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 6
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[0]) & (uint8_T)
                      (0xC0U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_hn = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 13
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[1]) & (uint8_T)
                      (0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_iq = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 8
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[1]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_i = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 56
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[7]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_i = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 14
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[1]) & (uint8_T)
                      (0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o8_bo = result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 10
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[1]) & (uint8_T)
                      (0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o9_oi = result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 58
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[7]) & (uint8_T)
                      (0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o10_l = result;
              }
            }

            /* --------------- START Unpacking signal 10 ------------------
             *  startBit                = 15
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[1]) & (uint8_T)
                      (0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o11_a = result;
              }
            }

            /* --------------- START Unpacking signal 11 ------------------
             *  startBit                = 40
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[4]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o12_i = result;
              }
            }

            /* --------------- START Unpacking signal 12 ------------------
             *  startBit                = 24
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c0.Data[2]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o13_d = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S112>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.BMS_AlarmLevel = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_h;

    /* DataTypeConversion: '<S112>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.BMS_ChargeStatus = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_hn;

    /* DataTypeConversion: '<S112>/Data Type Conversion9' */
    ZT_VehCtrl_18B_1009_B.BMS_SelfCheckStatus = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o9_oi;

    /* End of Outputs for SubSystem: '<S70>/UNPACK' */
  }

  /* End of SwitchCase: '<S70>/Switch Case' */

  /* SwitchCase: '<S71>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 849) {
    /* Outputs for IfAction SubSystem: '<S71>/UNPACK' incorporates:
     *  ActionPort: '<S113>/Action Port'
     */
    /* BusCreator: '<S113>/Bus Creator' incorporates:
     *  Constant: '<S113>/Constant1'
     *  Constant: '<S113>/Constant4'
     *  Constant: '<S113>/Constant5'
     *  DataTypeConversion: '<S113>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Extended = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.ID = ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S113>/Bus Creator' */

    /* S-Function (scanunpack): '<S113>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S113>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.ID != INVALID_CAN_ID) ) {
        if ((849 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.ID) && (0U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[2]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_br = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 4
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[0]) & (uint8_T)
                      (0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_e = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 18
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[2]) & (uint8_T)
                      (0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_de = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 5
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[0]) & (uint8_T)
                      (0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_k = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 14
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[1]) & (uint8_T)
                      (0xC0U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_af = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 3
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[0]) & (uint8_T)
                      (0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_bn = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 20
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[2]) & (uint8_T)
                      (0x30U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_g = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 6
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[0]) & (uint8_T)
                      (0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o8_b = result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 10
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[1]) & (uint8_T)
                      (0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o9_m = result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 1
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[0]) & (uint8_T)
                      (0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o10_j = result;
              }
            }

            /* --------------- START Unpacking signal 10 ------------------
             *  startBit                = 8
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[1]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o11_n = result;
              }
            }

            /* --------------- START Unpacking signal 11 ------------------
             *  startBit                = 0
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[0]) & (uint8_T)
                      (0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o12_d = result;
              }
            }

            /* --------------- START Unpacking signal 12 ------------------
             *  startBit                = 12
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[1]) & (uint8_T)
                      (0x30U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o13_c = result;
              }
            }

            /* --------------- START Unpacking signal 13 ------------------
             *  startBit                = 2
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[0]) & (uint8_T)
                      (0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o14 = result;
              }
            }

            /* --------------- START Unpacking signal 14 ------------------
             *  startBit                = 22
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[2]) & (uint8_T)
                      (0xC0U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o15 = result;
              }
            }

            /* --------------- START Unpacking signal 15 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_e.Data[0]) & (uint8_T)
                      (0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o16 = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S113>/Data Type Conversion10' */
    ZT_VehCtrl_18B_1009_B.Relay_NegativeStatus =
      (ZT_VehCtrl_18B_1009_B.CANUnpack6_o10_j != 0.0);

    /* End of Outputs for SubSystem: '<S71>/UNPACK' */
  }

  /* End of SwitchCase: '<S71>/Switch Case' */

  /* SwitchCase: '<S74>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 419309028) {
    /* Outputs for IfAction SubSystem: '<S74>/UNPACK' incorporates:
     *  ActionPort: '<S116>/Action Port'
     */
    /* DataStoreWrite: '<S116>/Data Store Write' incorporates:
     *  Constant: '<S116>/Constant'
     *  DataStoreRead: '<S116>/Data Store Read'
     *  Sum: '<S116>/Add'
     */
    Cnt_BRS1++;

    /* BusCreator: '<S116>/Bus Creator' incorporates:
     *  Constant: '<S116>/Constant1'
     *  Constant: '<S116>/Constant4'
     *  Constant: '<S116>/Constant5'
     *  DataTypeConversion: '<S116>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.ID =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S116>/Bus Creator' */

    /* S-Function (scanunpack): '<S116>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S116>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.ID != INVALID_CAN_ID) ) {
        if ((419309028 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_cy = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -40.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -40.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_ps = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 48
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -40.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Data[6]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -40.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_m = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 14
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Data[1]) & (uint8_T)
                      (0xC0U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_hj = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 4
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d0.Data[0]) & (uint8_T)
                      (0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_c = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S116>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.FaultLevel = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_hj;

    /* End of Outputs for SubSystem: '<S74>/UNPACK' */
  }

  /* End of SwitchCase: '<S74>/Switch Case' */

  /* SwitchCase: '<S75>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 419309284) {
    /* Outputs for IfAction SubSystem: '<S75>/UNPACK' incorporates:
     *  ActionPort: '<S117>/Action Port'
     */
    /* DataStoreWrite: '<S117>/Data Store Write' incorporates:
     *  Constant: '<S117>/Constant'
     *  DataStoreRead: '<S117>/Data Store Read'
     *  Sum: '<S117>/Add'
     */
    Cnt_BRS2++;

    /* End of Outputs for SubSystem: '<S75>/UNPACK' */
  }

  /* End of SwitchCase: '<S75>/Switch Case' */

  /* SwitchCase: '<S76>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 419309540) {
    /* Outputs for IfAction SubSystem: '<S76>/UNPACK' incorporates:
     *  ActionPort: '<S118>/Action Port'
     */
    /* DataStoreWrite: '<S118>/Data Store Write' incorporates:
     *  Constant: '<S118>/Constant'
     *  DataStoreRead: '<S118>/Data Store Read'
     *  Sum: '<S118>/Add'
     */
    Cnt_BRS3++;

    /* End of Outputs for SubSystem: '<S76>/UNPACK' */
  }

  /* End of SwitchCase: '<S76>/Switch Case' */

  /* SwitchCase: '<S77>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 402706575) {
    /* Outputs for IfAction SubSystem: '<S77>/UNPACK' incorporates:
     *  ActionPort: '<S119>/Action Port'
     */
    /* DataStoreWrite: '<S119>/Data Store Write' incorporates:
     *  Constant: '<S119>/Constant'
     *  DataStoreRead: '<S119>/Data Store Read'
     *  Sum: '<S119>/Add'
     */
    Cnt_DCDC1_1++;

    /* End of Outputs for SubSystem: '<S77>/UNPACK' */
  }

  /* End of SwitchCase: '<S77>/Switch Case' */

  /* SwitchCase: '<S78>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 402772111) {
    /* Outputs for IfAction SubSystem: '<S78>/UNPACK' incorporates:
     *  ActionPort: '<S120>/Action Port'
     */
    /* DataStoreWrite: '<S120>/Data Store Write' incorporates:
     *  Constant: '<S120>/Constant'
     *  DataStoreRead: '<S120>/Data Store Read'
     *  Sum: '<S120>/Add'
     */
    Cnt_DCDC1_2++;

    /* End of Outputs for SubSystem: '<S78>/UNPACK' */
  }

  /* End of SwitchCase: '<S78>/Switch Case' */

  /* SwitchCase: '<S79>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 402720161) {
    /* Outputs for IfAction SubSystem: '<S79>/UNPACK' incorporates:
     *  ActionPort: '<S121>/Action Port'
     */
    /* DataStoreWrite: '<S121>/Data Store Write' incorporates:
     *  Constant: '<S121>/Constant'
     *  DataStoreRead: '<S121>/Data Store Read'
     *  Sum: '<S121>/Add'
     */
    Cnt_HVC1++;

    /* End of Outputs for SubSystem: '<S79>/UNPACK' */
  }

  /* End of SwitchCase: '<S79>/Switch Case' */

  /* SwitchCase: '<S80>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 402851233) {
    /* Outputs for IfAction SubSystem: '<S80>/UNPACK' incorporates:
     *  ActionPort: '<S122>/Action Port'
     */
    /* DataStoreWrite: '<S122>/Data Store Write' incorporates:
     *  Constant: '<S122>/Constant'
     *  DataStoreRead: '<S122>/Data Store Read'
     *  Sum: '<S122>/Add'
     */
    Cnt_HVC3++;

    /* End of Outputs for SubSystem: '<S80>/UNPACK' */
  }

  /* End of SwitchCase: '<S80>/Switch Case' */

  /* SwitchCase: '<S81>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 402916769) {
    /* Outputs for IfAction SubSystem: '<S81>/UNPACK' incorporates:
     *  ActionPort: '<S123>/Action Port'
     */
    /* DataStoreWrite: '<S123>/Data Store Write' incorporates:
     *  Constant: '<S123>/Constant'
     *  DataStoreRead: '<S123>/Data Store Read'
     *  Sum: '<S123>/Add'
     */
    Cnt_HVC4++;

    /* BusCreator: '<S123>/Bus Creator' incorporates:
     *  Constant: '<S123>/Constant1'
     *  Constant: '<S123>/Constant4'
     *  Constant: '<S123>/Constant5'
     *  DataTypeConversion: '<S123>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.ID = ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S123>/Bus Creator' */

    /* S-Function (scanunpack): '<S123>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S123>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.ID != INVALID_CAN_ID) ) {
        if ((402916769 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 60
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[7]) & (uint8_T)
                      (0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_l5 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 24
             *  length                  = 32
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint32_T unpackedValue = 0;

                {
                  uint32_T tempValue = (uint32_T) (0);

                  {
                    tempValue = tempValue | (uint32_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[3]);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[4]) << 8);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[5]) << 16);
                    tempValue = tempValue | (uint32_T)((uint32_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[6]) << 24);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_m = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 56
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[7]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_j = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[0]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_oa = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 4
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[0]) & (uint8_T)
                      (0x30U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_dt = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 8
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[1]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_hb = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 2
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[0]) & (uint8_T)
                      (0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_n = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 6
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[0]) & (uint8_T)
                      (0xC0U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o8_o = result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 10
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[1]) & (uint8_T)
                      (0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o9_p = result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 16
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[2]) & (uint8_T)
                      (0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o10 = result;
              }
            }

            /* --------------- START Unpacking signal 10 ------------------
             *  startBit                = 17
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[2]) & (uint8_T)
                      (0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o11 = result;
              }
            }

            /* --------------- START Unpacking signal 11 ------------------
             *  startBit                = 19
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[2]) & (uint8_T)
                      (0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o12 = result;
              }
            }

            /* --------------- START Unpacking signal 12 ------------------
             *  startBit                = 18
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_k.Data[2]) & (uint8_T)
                      (0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o13 = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S123>/Data Type Conversion11' */
    ZT_VehCtrl_18B_1009_B.HVC_FaultLevel = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_j;

    /* DataTypeConversion: '<S123>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.MotDrv2_PowOnSt =
      (ZT_VehCtrl_18B_1009_B.CANUnpack6_o11 != 0.0);

    /* DataTypeConversion: '<S123>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.MotDrv1_PowOnSt =
      (ZT_VehCtrl_18B_1009_B.CANUnpack6_o10 != 0.0);

    /* End of Outputs for SubSystem: '<S81>/UNPACK' */
  }

  /* End of SwitchCase: '<S81>/Switch Case' */

  /* SwitchCase: '<S82>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 403113377) {
    /* Outputs for IfAction SubSystem: '<S82>/UNPACK' incorporates:
     *  ActionPort: '<S124>/Action Port'
     */
    /* DataStoreWrite: '<S124>/Data Store Write' incorporates:
     *  Constant: '<S124>/Constant'
     *  DataStoreRead: '<S124>/Data Store Read'
     *  Sum: '<S124>/Add'
     */
    Cnt_HVC7++;

    /* BusCreator: '<S124>/Bus Creator' incorporates:
     *  Constant: '<S124>/Constant1'
     *  Constant: '<S124>/Constant4'
     *  Constant: '<S124>/Constant5'
     *  DataTypeConversion: '<S124>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.ID = ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S124>/Bus Creator' */

    /* S-Function (scanunpack): '<S124>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S124>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.ID != INVALID_CAN_ID) ) {
        if ((403113377 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 60
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[7]) & (uint8_T)
                      (0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_jk = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 24
             *  length                  = 12
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.5
             *  offset                  = -1024.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[4]) & (uint16_T)
                      (0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.5) + -1024.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_a2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 36
             *  length                  = 12
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.5
             *  offset                  = -1024.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[4]) & (uint16_T)
                      (0xF0U)) >> 4);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[5]) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.5) + -1024.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_gp = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 12
             *  length                  = 12
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.5
             *  offset                  = -1024.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[1]) & (uint16_T)
                      (0xF0U)) >> 4);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[2]) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.5) + -1024.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_h = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 48
             *  length                  = 12
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.5
             *  offset                  = -1024.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[7]) & (uint16_T)
                      (0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.5) + -1024.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_k = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 0
             *  length                  = 12
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.5
             *  offset                  = -1024.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_b.Data[1]) & (uint16_T)
                      (0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.5) + -1024.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_d = result;
              }
            }
          }
        }
      }
    }

    /* End of Outputs for SubSystem: '<S82>/UNPACK' */
  }

  /* End of SwitchCase: '<S82>/Switch Case' */

  /* SwitchCase: '<S83>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 544) {
    /* Outputs for IfAction SubSystem: '<S83>/UNPACK' incorporates:
     *  ActionPort: '<S125>/Action Port'
     */
    /* DataStoreWrite: '<S125>/Data Store Write' incorporates:
     *  Constant: '<S125>/Constant'
     *  DataStoreRead: '<S125>/Data Store Read'
     *  Sum: '<S125>/Add'
     */
    Cnt_OBC++;

    /* BusCreator: '<S125>/Bus Creator' incorporates:
     *  Constant: '<S125>/Constant1'
     *  Constant: '<S125>/Constant4'
     *  Constant: '<S125>/Constant5'
     *  DataTypeConversion: '<S125>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Extended = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.ID = ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S125>/Bus Creator' */

    /* S-Function (scanunpack): '<S125>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S125>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.ID != INVALID_CAN_ID) ) {
        if ((544 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.ID) && (0U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 36
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[4]) & (uint8_T)
                      (0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_b = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 24
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[2]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_hb = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 32
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[4]) & (uint8_T)
                      (0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_f4 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 34
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[4]) & (uint8_T)
                      (0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_o = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 37
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[4]) & (uint8_T)
                      (0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_h = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 35
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[4]) & (uint8_T)
                      (0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_k = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 33
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[4]) & (uint8_T)
                      (0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_o = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 8
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[1]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_c.Data[0]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o8_k = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S125>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.OBC_HwFault = (ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_f4
      != 0.0);

    /* DataTypeConversion: '<S125>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.OBC_InputVoltage =
      (ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_o != 0.0);

    /* DataTypeConversion: '<S125>/Data Type Conversion5' */
    ZT_VehCtrl_18B_1009_B.OBC_OutputShortCircuit =
      (ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_h != 0.0);

    /* DataTypeConversion: '<S125>/Data Type Conversion6' */
    ZT_VehCtrl_18B_1009_B.OBC_StartSt = (ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_k
      != 0.0);

    /* DataTypeConversion: '<S125>/Data Type Conversion7' */
    ZT_VehCtrl_18B_1009_B.OBC_Temp = (ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_o !=
      0.0);

    /* End of Outputs for SubSystem: '<S83>/UNPACK' */
  }

  /* End of SwitchCase: '<S83>/Switch Case' */

  /* SwitchCase: '<S84>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 419376072) {
    /* Outputs for IfAction SubSystem: '<S84>/UNPACK' incorporates:
     *  ActionPort: '<S126>/Action Port'
     */
    /* DataStoreWrite: '<S126>/Data Store Write' incorporates:
     *  Constant: '<S126>/Constant'
     *  DataStoreRead: '<S126>/Data Store Read'
     *  Sum: '<S126>/Add'
     */
    Cnt_PDU++;

    /* BusCreator: '<S126>/Bus Creator' incorporates:
     *  Constant: '<S126>/Constant1'
     *  Constant: '<S126>/Constant4'
     *  Constant: '<S126>/Constant5'
     *  DataTypeConversion: '<S126>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.ID =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S126>/Bus Creator' */

    /* S-Function (scanunpack): '<S126>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S126>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.ID != INVALID_CAN_ID) ) {
        if ((419376072 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 10
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Data[1]) & (uint8_T)
                      (0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_e = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 6
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Data[0]) & (uint8_T)
                      (0xC0U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_l = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_nf = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 8
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Data[1]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_dm = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 4
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Data[0]) & (uint8_T)
                      (0x30U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_oy = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 2
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Data[0]) & (uint8_T)
                      (0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_n3 = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 0
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_lb.Data[0]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_b = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S126>/Data Type Conversion5' */
    ZT_VehCtrl_18B_1009_B.PDU_PosRlyPcgRlySts = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_oy;

    /* DataTypeConversion: '<S126>/Data Type Conversion6' */
    ZT_VehCtrl_18B_1009_B.PDU_PosRlySts = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_n3;

    /* DataTypeConversion: '<S126>/Data Type Conversion7' */
    ZT_VehCtrl_18B_1009_B.PDU_ShrRlySts = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_b;

    /* End of Outputs for SubSystem: '<S84>/UNPACK' */
  }

  /* End of SwitchCase: '<S84>/Switch Case' */

  /* SwitchCase: '<S85>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3 == 419427142) {
    /* Outputs for IfAction SubSystem: '<S85>/UNPACK' incorporates:
     *  ActionPort: '<S127>/Action Port'
     */
    /* DataStoreWrite: '<S127>/Data Store Write' incorporates:
     *  Constant: '<S127>/Constant'
     *  DataStoreRead: '<S127>/Data Store Read'
     *  Sum: '<S127>/Add'
     */
    Cnt_TMS++;

    /* BusCreator: '<S127>/Bus Creator' incorporates:
     *  Constant: '<S127>/Constant1'
     *  Constant: '<S127>/Constant4'
     *  Constant: '<S127>/Constant5'
     *  DataTypeConversion: '<S127>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Extended = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Length =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.ID =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN0_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S127>/Bus Creator' */

    /* S-Function (scanunpack): '<S127>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S127>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.ID != INVALID_CAN_ID) ) {
        if ((419427142 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Data[0]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_gz = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_dh.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_h2 = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S127>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.TMS_FanSpeedLvl_num = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_gz;

    /* End of Outputs for SubSystem: '<S85>/UNPACK' */
  }

  /* End of SwitchCase: '<S85>/Switch Case' */
}

/* Start for function-call system: '<S5>/CAN1' */
void ZT_VehCtrl_18B_1009_CAN1_Start(void)
{
  /* Start for IfAction SubSystem: '<S128>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S141>/CAN Unpack6' */

  /*-----------S-Function Block: <S141>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S128>/UNPACK' */

  /* Start for IfAction SubSystem: '<S129>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S142>/CAN Unpack6' */

  /*-----------S-Function Block: <S142>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S129>/UNPACK' */

  /* Start for IfAction SubSystem: '<S130>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S143>/CAN Unpack6' */

  /*-----------S-Function Block: <S143>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S130>/UNPACK' */

  /* Start for IfAction SubSystem: '<S131>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S144>/CAN Unpack6' */

  /*-----------S-Function Block: <S144>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S131>/UNPACK' */

  /* Start for IfAction SubSystem: '<S132>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S145>/CAN Unpack6' */

  /*-----------S-Function Block: <S145>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S132>/UNPACK' */

  /* Start for IfAction SubSystem: '<S133>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S146>/CAN Unpack6' */

  /*-----------S-Function Block: <S146>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S133>/UNPACK' */

  /* Start for IfAction SubSystem: '<S134>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S147>/CAN Unpack6' */

  /*-----------S-Function Block: <S147>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S134>/UNPACK' */

  /* Start for IfAction SubSystem: '<S135>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S148>/CAN Unpack6' */

  /*-----------S-Function Block: <S148>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S135>/UNPACK' */

  /* Start for IfAction SubSystem: '<S136>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S149>/CAN Unpack6' */

  /*-----------S-Function Block: <S149>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S136>/UNPACK' */

  /* Start for IfAction SubSystem: '<S137>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S150>/CAN Unpack6' */

  /*-----------S-Function Block: <S150>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S137>/UNPACK' */

  /* Start for IfAction SubSystem: '<S138>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S151>/CAN Unpack6' */

  /*-----------S-Function Block: <S151>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S138>/UNPACK' */

  /* Start for IfAction SubSystem: '<S139>/UNPACK' */

  /* Start for S-Function (scanunpack): '<S152>/CAN Unpack6' */

  /*-----------S-Function Block: <S152>/CAN Unpack6 -----------------*/

  /* End of Start for SubSystem: '<S139>/UNPACK' */
}

/* Output and update for function-call system: '<S5>/CAN1' */
void ZT_VehCtrl_18B_1009_CAN1(void)
{
  int32_T i;

  /* SwitchCase: '<S128>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 218038278) {
    /* Outputs for IfAction SubSystem: '<S128>/UNPACK' incorporates:
     *  ActionPort: '<S141>/Action Port'
     */
    /* DataStoreWrite: '<S141>/Data Store Write' incorporates:
     *  Constant: '<S141>/Constant'
     *  DataStoreRead: '<S141>/Data Store Read'
     *  Sum: '<S141>/Add'
     */
    Cnt_ISG1++;

    /* BusCreator: '<S141>/Bus Creator' incorporates:
     *  Constant: '<S141>/Constant1'
     *  Constant: '<S141>/Constant4'
     *  Constant: '<S141>/Constant5'
     *  DataTypeConversion: '<S141>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.ID =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S141>/Bus Creator' */

    /* S-Function (scanunpack): '<S141>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S141>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.ID != INVALID_CAN_ID) ) {
        if ((218038278 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 53
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[6]) & (uint8_T)
                      (0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_du = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 54
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[6]) & (uint8_T)
                      (0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_jp = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 60
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[7]) & (uint8_T)
                      (0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_lh = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_bb = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -15000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -15000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_lc = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -5000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -5000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_b = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 52
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_gp.Data[6]) & (uint8_T)
                      (0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_p = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S141>/Data Type Conversion5' */
    ZT_VehCtrl_18B_1009_B.Motor_Speed_e = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_lc;

    /* DataTypeConversion: '<S141>/Data Type Conversion6' */
    ZT_VehCtrl_18B_1009_B.Motor_Torque_d = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_b;

    /* End of Outputs for SubSystem: '<S128>/UNPACK' */
  }

  /* End of SwitchCase: '<S128>/Switch Case' */

  /* SwitchCase: '<S129>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 218038534) {
    /* Outputs for IfAction SubSystem: '<S129>/UNPACK' incorporates:
     *  ActionPort: '<S142>/Action Port'
     */
    /* DataStoreWrite: '<S142>/Data Store Write' incorporates:
     *  Constant: '<S142>/Constant'
     *  DataStoreRead: '<S142>/Data Store Read'
     *  Sum: '<S142>/Add'
     */
    Cnt_ISG2++;

    /* BusCreator: '<S142>/Bus Creator' incorporates:
     *  Constant: '<S142>/Constant1'
     *  Constant: '<S142>/Constant4'
     *  Constant: '<S142>/Constant5'
     *  DataTypeConversion: '<S142>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.ID =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S142>/Bus Creator' */

    /* S-Function (scanunpack): '<S142>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S142>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.ID != INVALID_CAN_ID) ) {
        if ((218038534 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Data[6]) & (uint8_T)
                      (0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_g = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 60
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Data[7]) & (uint8_T)
                      (0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_a = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 8
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -40.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Data[1]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -40.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_f = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -40.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Data[0]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -40.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_b = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_il = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -5000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_pn.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -5000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_mk = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S142>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.Fail_Grade_d = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_g;

    /* DataTypeConversion: '<S142>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.MCU_temperature_g = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_f;

    /* DataTypeConversion: '<S142>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.Motor_Temperature_p = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_b;

    /* End of Outputs for SubSystem: '<S129>/UNPACK' */
  }

  /* End of SwitchCase: '<S129>/Switch Case' */

  /* SwitchCase: '<S130>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 218038790) {
    /* Outputs for IfAction SubSystem: '<S130>/UNPACK' incorporates:
     *  ActionPort: '<S143>/Action Port'
     */
    /* DataStoreWrite: '<S143>/Data Store Write' incorporates:
     *  Constant: '<S143>/Constant'
     *  DataStoreRead: '<S143>/Data Store Read'
     *  Sum: '<S143>/Add'
     */
    Cnt_ISG3++;

    /* BusCreator: '<S143>/Bus Creator' incorporates:
     *  Constant: '<S143>/Constant1'
     *  Constant: '<S143>/Constant4'
     *  Constant: '<S143>/Constant5'
     *  DataTypeConversion: '<S143>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.ID = ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S143>/Bus Creator' */

    /* S-Function (scanunpack): '<S143>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S143>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.ID != INVALID_CAN_ID) ) {
        if ((218038790 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 8
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Data[1]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_lt = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -1000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -1000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_dg = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_ln = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Data[0]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_c = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_d.Data[6]) & (uint8_T)
                      (0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_d = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S143>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.DC_Current_A_m = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_dg;

    /* DataTypeConversion: '<S143>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.DC_Voltage_V = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_ln;

    /* End of Outputs for SubSystem: '<S130>/UNPACK' */
  }

  /* End of SwitchCase: '<S130>/Switch Case' */

  /* SwitchCase: '<S131>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 406245615) {
    /* Outputs for IfAction SubSystem: '<S131>/UNPACK' incorporates:
     *  ActionPort: '<S144>/Action Port'
     */
    /* DataStoreWrite: '<S144>/Data Store Write' incorporates:
     *  Constant: '<S144>/Constant'
     *  DataStoreRead: '<S144>/Data Store Read'
     *  Sum: '<S144>/Add'
     */
    Cnt_MCU1_1++;

    /* BusCreator: '<S144>/Bus Creator' incorporates:
     *  Constant: '<S144>/Constant1'
     *  Constant: '<S144>/Constant4'
     *  Constant: '<S144>/Constant5'
     *  DataTypeConversion: '<S144>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.ID = ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S144>/Bus Creator' */

    /* S-Function (scanunpack): '<S144>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S144>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.ID != INVALID_CAN_ID) ) {
        if ((406245615 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = -600.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Data[1]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.1) + -600.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_c = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_h = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -30000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Data[5]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -30000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_d = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_g.Data[7]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_pj = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S144>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.OilMotorBusCur = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_c;

    /* DataTypeConversion: '<S144>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.OilMotorBusVolt = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_h;

    /* DataTypeConversion: '<S144>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.OilMotorSpd = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_d;

    /* DataTypeConversion: '<S144>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.OilMotorTrq = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_pj;

    /* End of Outputs for SubSystem: '<S131>/UNPACK' */
  }

  /* End of SwitchCase: '<S131>/Switch Case' */

  /* SwitchCase: '<S132>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 406311151) {
    /* Outputs for IfAction SubSystem: '<S132>/UNPACK' incorporates:
     *  ActionPort: '<S145>/Action Port'
     */
    /* DataStoreWrite: '<S145>/Data Store Write' incorporates:
     *  Constant: '<S145>/Constant'
     *  DataStoreRead: '<S145>/Data Store Read'
     *  Sum: '<S145>/Add'
     */
    Cnt_MCU1_2++;

    /* BusCreator: '<S145>/Bus Creator' incorporates:
     *  Constant: '<S145>/Constant1'
     *  Constant: '<S145>/Constant4'
     *  Constant: '<S145>/Constant5'
     *  DataTypeConversion: '<S145>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.ID = ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S145>/Bus Creator' */

    /* S-Function (scanunpack): '<S145>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S145>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.ID != INVALID_CAN_ID) ) {
        if ((406311151 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[0]) & (uint8_T)
                      (0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_m = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_ks = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 24
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[3]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_n = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 8
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[1]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_d = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_l = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 16
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[2]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_h = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 0
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[0]) & (uint8_T)
                      (0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_m = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 4
             *  length                  = 3
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[0]) & (uint8_T)
                      (0x70U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o8_d = result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 48
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_l.Data[6]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o9_o = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S145>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.OilMotorFaultLevel = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_d;

    /* End of Outputs for SubSystem: '<S132>/UNPACK' */
  }

  /* End of SwitchCase: '<S132>/Switch Case' */

  /* SwitchCase: '<S133>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 406376687) {
    /* Outputs for IfAction SubSystem: '<S133>/UNPACK' incorporates:
     *  ActionPort: '<S146>/Action Port'
     */
    /* DataStoreWrite: '<S146>/Data Store Write' incorporates:
     *  Constant: '<S146>/Constant'
     *  DataStoreRead: '<S146>/Data Store Read'
     *  Sum: '<S146>/Add'
     */
    Cnt_MCU1_3++;

    /* BusCreator: '<S146>/Bus Creator' incorporates:
     *  Constant: '<S146>/Constant1'
     *  Constant: '<S146>/Constant4'
     *  Constant: '<S146>/Constant5'
     *  DataTypeConversion: '<S146>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.ID = ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S146>/Bus Creator' */

    /* S-Function (scanunpack): '<S146>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S146>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.ID != INVALID_CAN_ID) ) {
        if ((406376687 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 24
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Data[3]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_k = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 32
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Data[4]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_k = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 40
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Data[5]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_lu = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Data[0]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_p = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 8
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Data[1]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_i = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 16
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_m.Data[2]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_l = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S146>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.OilMotorMCUTemp1 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_k;

    /* DataTypeConversion: '<S146>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.OilMotorMCUTemp2 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_k;

    /* DataTypeConversion: '<S146>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.OilMotorMCUTemp3 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_lu;

    /* DataTypeConversion: '<S146>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.OilMotorTemp1 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_p;

    /* DataTypeConversion: '<S146>/Data Type Conversion5' */
    ZT_VehCtrl_18B_1009_B.OilMotorTemp2 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_i;

    /* DataTypeConversion: '<S146>/Data Type Conversion6' */
    ZT_VehCtrl_18B_1009_B.OilMotorTemp3 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_l;

    /* End of Outputs for SubSystem: '<S133>/UNPACK' */
  }

  /* End of SwitchCase: '<S133>/Switch Case' */

  /* SwitchCase: '<S134>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 406245617) {
    /* Outputs for IfAction SubSystem: '<S134>/UNPACK' incorporates:
     *  ActionPort: '<S147>/Action Port'
     */
    /* DataStoreWrite: '<S147>/Data Store Write' incorporates:
     *  Constant: '<S147>/Constant'
     *  DataStoreRead: '<S147>/Data Store Read'
     *  Sum: '<S147>/Add'
     */
    Cnt_MCU2_1++;

    /* BusCreator: '<S147>/Bus Creator' incorporates:
     *  Constant: '<S147>/Constant1'
     *  Constant: '<S147>/Constant4'
     *  Constant: '<S147>/Constant5'
     *  DataTypeConversion: '<S147>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.ID = ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S147>/Bus Creator' */

    /* S-Function (scanunpack): '<S147>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S147>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.ID != INVALID_CAN_ID) ) {
        if ((406245617 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 0.1
             *  offset                  = -600.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Data[1]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.1) + -600.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_l = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_dz = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -30000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);
                  int16_T* tempValuePtr = (int16_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Data[5]) << 8);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -30000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_k = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 48
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Data[6]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_f.Data[7]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_f = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S147>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.DrvMotorBusCur = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_l;

    /* DataTypeConversion: '<S147>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.DrvMotorBusVolt = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_dz;

    /* DataTypeConversion: '<S147>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.DrvMotorSpd = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_k;

    /* DataTypeConversion: '<S147>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.DrvMotorTrq = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_f;

    /* End of Outputs for SubSystem: '<S134>/UNPACK' */
  }

  /* End of SwitchCase: '<S134>/Switch Case' */

  /* SwitchCase: '<S135>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 406311153) {
    /* Outputs for IfAction SubSystem: '<S135>/UNPACK' incorporates:
     *  ActionPort: '<S148>/Action Port'
     */
    /* DataStoreWrite: '<S148>/Data Store Write' incorporates:
     *  Constant: '<S148>/Constant'
     *  DataStoreRead: '<S148>/Data Store Read'
     *  Sum: '<S148>/Add'
     */
    Cnt_MCU2_2++;

    /* BusCreator: '<S148>/Bus Creator' incorporates:
     *  Constant: '<S148>/Constant1'
     *  Constant: '<S148>/Constant4'
     *  Constant: '<S148>/Constant5'
     *  DataTypeConversion: '<S148>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.ID =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S148>/Bus Creator' */

    /* S-Function (scanunpack): '<S148>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S148>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.ID != INVALID_CAN_ID) ) {
        if ((406311153 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[0]) & (uint8_T)
                      (0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_f = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_d = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 24
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[3]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_i = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 8
             *  length                  = 2
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[1]) & (uint8_T)
                      (0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_is = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_o = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 16
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[2]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_m4 = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 0
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[0]) & (uint8_T)
                      (0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o7_j = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 4
             *  length                  = 3
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[0]) & (uint8_T)
                      (0x70U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o8 = result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 48
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hq.Data[6]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o9 = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S148>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.DrvMotorFaultLevel = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_is;

    /* End of Outputs for SubSystem: '<S135>/UNPACK' */
  }

  /* End of SwitchCase: '<S135>/Switch Case' */

  /* SwitchCase: '<S136>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 406376689) {
    /* Outputs for IfAction SubSystem: '<S136>/UNPACK' incorporates:
     *  ActionPort: '<S149>/Action Port'
     */
    /* DataStoreWrite: '<S149>/Data Store Write' incorporates:
     *  Constant: '<S149>/Constant'
     *  DataStoreRead: '<S149>/Data Store Read'
     *  Sum: '<S149>/Add'
     */
    Cnt_MCU2_3++;

    /* BusCreator: '<S149>/Bus Creator' incorporates:
     *  Constant: '<S149>/Constant1'
     *  Constant: '<S149>/Constant4'
     *  Constant: '<S149>/Constant5'
     *  DataTypeConversion: '<S149>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.ID =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S149>/Bus Creator' */

    /* S-Function (scanunpack): '<S149>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S149>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.ID != INVALID_CAN_ID) ) {
        if ((406376689 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 24
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Data[3]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_i = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 32
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Data[4]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_n = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 40
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Data[5]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_g = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Data[0]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_j = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 8
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Data[1]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_f = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 16
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = SIGNED
             *  factor                  = 1.0
             *  offset                  = -50.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                int8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);
                  int8_T* tempValuePtr = (int8_T*)&tempValue;

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_hr.Data[2]);
                  }

                  unpackedValue = *tempValuePtr;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -50.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_n = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S149>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.DrvMotorMCUTemp1 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_i;

    /* DataTypeConversion: '<S149>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.DrvMotorMCUTemp2 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_n;

    /* DataTypeConversion: '<S149>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.DrvMotorMCUTemp3 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_g;

    /* DataTypeConversion: '<S149>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.DrvMotorTemp1 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_j;

    /* DataTypeConversion: '<S149>/Data Type Conversion5' */
    ZT_VehCtrl_18B_1009_B.DrvMotorTemp2 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_f;

    /* DataTypeConversion: '<S149>/Data Type Conversion6' */
    ZT_VehCtrl_18B_1009_B.DrvMotorTemp3 = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_n;

    /* End of Outputs for SubSystem: '<S136>/UNPACK' */
  }

  /* End of SwitchCase: '<S136>/Switch Case' */

  /* SwitchCase: '<S137>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 218038277) {
    /* Outputs for IfAction SubSystem: '<S137>/UNPACK' incorporates:
     *  ActionPort: '<S150>/Action Port'
     */
    /* DataStoreWrite: '<S150>/Data Store Write' incorporates:
     *  Constant: '<S150>/Constant'
     *  DataStoreRead: '<S150>/Data Store Read'
     *  Sum: '<S150>/Add'
     */
    Cnt_TM1++;

    /* BusCreator: '<S150>/Bus Creator' incorporates:
     *  Constant: '<S150>/Constant1'
     *  Constant: '<S150>/Constant4'
     *  Constant: '<S150>/Constant5'
     *  DataTypeConversion: '<S150>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.ID = ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S150>/Bus Creator' */

    /* S-Function (scanunpack): '<S150>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S150>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.ID != INVALID_CAN_ID) ) {
        if ((218038277 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 53
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[6]) & (uint8_T)
                      (0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_d = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 54
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[6]) & (uint8_T)
                      (0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_p = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 60
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[7]) & (uint8_T)
                      (0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_e = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_i = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 0
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -15000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[0]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -15000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_a = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -5000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -5000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_m = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 52
             *  length                  = 1
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_p.Data[6]) & (uint8_T)
                      (0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o7 = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S150>/Data Type Conversion5' */
    ZT_VehCtrl_18B_1009_B.Motor_Speed = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_a;

    /* DataTypeConversion: '<S150>/Data Type Conversion6' */
    ZT_VehCtrl_18B_1009_B.Motor_Torque = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o6_m;

    /* End of Outputs for SubSystem: '<S137>/UNPACK' */
  }

  /* End of SwitchCase: '<S137>/Switch Case' */

  /* SwitchCase: '<S138>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 218038533) {
    /* Outputs for IfAction SubSystem: '<S138>/UNPACK' incorporates:
     *  ActionPort: '<S151>/Action Port'
     */
    /* DataStoreWrite: '<S151>/Data Store Write' incorporates:
     *  Constant: '<S151>/Constant'
     *  DataStoreRead: '<S151>/Data Store Read'
     *  Sum: '<S151>/Add'
     */
    Cnt_TM2++;

    /* BusCreator: '<S151>/Bus Creator' incorporates:
     *  Constant: '<S151>/Constant1'
     *  Constant: '<S151>/Constant4'
     *  Constant: '<S151>/Constant5'
     *  DataTypeConversion: '<S151>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.ID = ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S151>/Bus Creator' */

    /* S-Function (scanunpack): '<S151>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S151>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.ID != INVALID_CAN_ID) ) {
        if ((218038533 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Data[6]) & (uint8_T)
                      (0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_j = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 60
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Data[7]) & (uint8_T)
                      (0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2_j = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 8
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -40.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Data[1]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -40.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_l = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -40.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Data[0]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -40.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_g = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5_m = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -5000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In_h.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -5000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o6 = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S151>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.Fail_Grade = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o1_j;

    /* DataTypeConversion: '<S151>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.MCU_temperature = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3_l;

    /* DataTypeConversion: '<S151>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.Motor_Temperature = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o4_g;

    /* End of Outputs for SubSystem: '<S138>/UNPACK' */
  }

  /* End of SwitchCase: '<S138>/Switch Case' */

  /* SwitchCase: '<S139>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 218038789) {
    /* Outputs for IfAction SubSystem: '<S139>/UNPACK' incorporates:
     *  ActionPort: '<S152>/Action Port'
     */
    /* DataStoreWrite: '<S152>/Data Store Write' incorporates:
     *  Constant: '<S152>/Constant'
     *  DataStoreRead: '<S152>/Data Store Read'
     *  Sum: '<S152>/Add'
     */
    Cnt_TM3++;

    /* BusCreator: '<S152>/Bus Creator' incorporates:
     *  Constant: '<S152>/Constant1'
     *  Constant: '<S152>/Constant4'
     *  Constant: '<S152>/Constant5'
     *  DataTypeConversion: '<S152>/Data Type Conversion19'
     */
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Length =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o5;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Remote = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Error = 0U;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In.ID = ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3;
    ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Timestamp =
      ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o6;
    for (i = 0; i < 8; i++) {
      ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Data[i] =
        ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o4[i];
    }

    /* End of BusCreator: '<S152>/Bus Creator' */

    /* S-Function (scanunpack): '<S152>/CAN Unpack6' */
    {
      /* S-Function (scanunpack): '<S152>/CAN Unpack6' */
      if ((8 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Length) &&
          (ZT_VehCtrl_18B_1009_B.CAN_Msg_In.ID != INVALID_CAN_ID) ) {
        if ((218038789 == ZT_VehCtrl_18B_1009_B.CAN_Msg_In.ID) && (1U ==
             ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 8
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Data[1]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = -1000.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Data[3]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result + -1000.0;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 32
             *  length                  = 16
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Data[5]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 8
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Data[0]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o4 = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = LITTLEENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (ZT_VehCtrl_18B_1009_B.CAN_Msg_In.Data[6]) & (uint8_T)
                      (0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                ZT_VehCtrl_18B_1009_B.CANUnpack6_o5 = result;
              }
            }
          }
        }
      }
    }

    /* DataTypeConversion: '<S152>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.DC_Current_A = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o2;

    /* DataTypeConversion: '<S152>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.DC_Voltage_A = (real32_T)
      ZT_VehCtrl_18B_1009_B.CANUnpack6_o3;

    /* End of Outputs for SubSystem: '<S139>/UNPACK' */
  }

  /* End of SwitchCase: '<S139>/Switch Case' */

  /* SwitchCase: '<S140>/Switch Case' */
  if ((int32_T)ZT_VehCtrl_18B_1009_B.CAN1_Rx_500_o3 == 419374139) {
    /* Outputs for IfAction SubSystem: '<S140>/UNPACK' incorporates:
     *  ActionPort: '<S153>/Action Port'
     */
    /* DataStoreWrite: '<S153>/Data Store Write' incorporates:
     *  Constant: '<S153>/Constant'
     *  DataStoreRead: '<S153>/Data Store Read'
     *  Sum: '<S153>/Add'
     */
    Cnt_TWV++;

    /* End of Outputs for SubSystem: '<S140>/UNPACK' */
  }

  /* End of SwitchCase: '<S140>/Switch Case' */
}

/* Function for Chart: '<S226>/Chart' */
static void ZT_VehCtrl_18B_1009_PowerOn(const boolean_T *Compare_n, const
  boolean_T *Compare_n3, const boolean_T *Compare_i, boolean_T *Compare_a)
{
  /* DataStoreRead: '<S226>/Data Store Read1' */
  if ((!Key) || ZT_VehCtrl_18B_1009_B.ShutDown) {
    ZT_VehCtrl_18B_1009_DW.is_BRS_path = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
    ZT_VehCtrl_18B_1009_DW.is_PDU_path = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
    ZT_VehCtrl_18B_1009_DW.is_HVC_path = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
    ZT_VehCtrl_18B_1009_DW.is_PowerOn = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
    ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
      ZT_VehCtrl_18B_1009_IN_PowerOff;
    ZT_VehCtrl_18B_1009_B.Front_OffDone = false;
    ZT_VehCtrl_18B_1009_B.Rear_OffDone = false;
    ZT_VehCtrl_18B_1009_B.Flag = 4.0F;
    ZT_VehCtrl_18B_1009_DW.is_FrontPwrOff = ZT_VehCtrl_18B_1009_IN_Front_LVDown;
    ZT_VehCtrl_18B_1009_DW.Cnt1 = 0.0;
    ZT_VehCtrl_18B_1009_DW.is_RearPwrOff = ZT_VehCtrl_18B_1009_IN_Rear_LVDown;
    ZT_VehCtrl_18B_1009_DW.Cnt2 = 0.0;
  } else if (ZT_VehCtrl_18B_1009_DW.is_PowerOn ==
             ZT_VehCtrl_18B_1009_IN_Relay_NegEn) {
    ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 1.0;
    if (ZT_VehCtrl_18B_1009_B.Relay_NegativeStatus) {
      ZT_VehCtrl_18B_1009_DW.is_PowerOn = ZT_VehCtrl_18B_1009_IN_Relay_PosPreEn;
      ZT_VehCtrl_18B_1009_B.EDrv1_PowOnCmd = 1.0;
      ZT_VehCtrl_18B_1009_B.EDrv2_PowOnCmd = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU_ShrRlyCtl = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU_HghVtgCtl = 1.0;
      ZT_VehCtrl_18B_1009_B.Ready = (ZT_VehCtrl_18B_1009_B.HVCReady &&
        ZT_VehCtrl_18B_1009_B.PDUReady);
      ZT_VehCtrl_18B_1009_B.Flag = 3.0F;
      ZT_VehCtrl_18B_1009_DW.is_HVC_path = ZT_VehCtrl_18B_1009_IN_HVC_Wait;
      ZT_VehCtrl_18B_1009_B.HVCReady = false;
      ZT_VehCtrl_18B_1009_DW.is_PDU_path = ZT_VehCtrl_18B_1009_IN_PDU_Wait;
      ZT_VehCtrl_18B_1009_B.PDUReady = false;
      ZT_VehCtrl_18B_1009_DW.is_BRS_path = ZT_VehCtrl_18B_1009_IN_BRS_Wait;
    }
  } else {
    if (ZT_VehCtrl_18B_1009_DW.is_HVC_path == ZT_VehCtrl_18B_1009_IN_HVC_Ready)
    {
      ZT_VehCtrl_18B_1009_B.HVCReady = true;
    } else {
      ZT_VehCtrl_18B_1009_B.HVCReady = false;
      if (ZT_VehCtrl_18B_1009_B.MotDrv1_PowOnSt &&
          ZT_VehCtrl_18B_1009_B.MotDrv2_PowOnSt) {
        ZT_VehCtrl_18B_1009_DW.is_HVC_path = ZT_VehCtrl_18B_1009_IN_HVC_Ready;
        ZT_VehCtrl_18B_1009_B.HVCReady = true;
        ZT_VehCtrl_18B_1009_B.VCU_DCDC1_En = 1.0;
      }
    }

    if (ZT_VehCtrl_18B_1009_DW.is_PDU_path == ZT_VehCtrl_18B_1009_IN_PDU_Ready)
    {
      ZT_VehCtrl_18B_1009_B.PDUReady = true;
    } else {
      ZT_VehCtrl_18B_1009_B.PDUReady = false;
      if ((*Compare_i) && (*Compare_n3) && (*Compare_n)) {
        ZT_VehCtrl_18B_1009_DW.is_PDU_path = ZT_VehCtrl_18B_1009_IN_PDU_Ready;
        ZT_VehCtrl_18B_1009_B.PDUReady = true;
        ZT_VehCtrl_18B_1009_B.DcdcCmd = 1.0;
      }
    }

    if (ZT_VehCtrl_18B_1009_DW.is_BRS_path == ZT_VehCtrl_18B_1009_IN_BRS_En) {
      if ((AccPadle > 0.1) || (VehSpd_mps < 10.0F)) {
        ZT_VehCtrl_18B_1009_DW.is_BRS_path = ZT_VehCtrl_18B_1009_IN_BRS_Wait;
      } else {
        ZT_VehCtrl_18B_1009_B.OnOffCmd = 1.0;
      }
    } else if ((AccPadle < 0.05) && (VehSpd_mps > 20.0F) && (!*Compare_a)) {
      ZT_VehCtrl_18B_1009_DW.is_BRS_path = ZT_VehCtrl_18B_1009_IN_BRS_En;
    } else {
      ZT_VehCtrl_18B_1009_B.OnOffCmd = 0.0;
    }
  }

  /* End of DataStoreRead: '<S226>/Data Store Read1' */
}

/* Function for Chart: '<S226>/Chart' */
static void ZT_VehCtrl_18B_1009_enter_atomic_Init(void)
{
  ZT_VehCtrl_18B_1009_B.Ready = false;
  ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 0.0;
  ZT_VehCtrl_18B_1009_B.VCU_UrgencyCutOffPowerReq = 0.0;
  ZT_VehCtrl_18B_1009_B.VCU_DCDC1_En = 2.0;
  ZT_VehCtrl_18B_1009_B.EDrv1_PowOnCmd = 0.0;
  ZT_VehCtrl_18B_1009_B.EDrv2_PowOnCmd = 0.0;
  ZT_VehCtrl_18B_1009_B.DcdcCmd = 0.0;
  ZT_VehCtrl_18B_1009_B.VCU_ShrRlyCtl = 0.0;
  ZT_VehCtrl_18B_1009_B.VCU_HghVtgCtl = 0.0;
  ZT_VehCtrl_18B_1009_B.OnOffCmd = 0.0;
  ZT_VehCtrl_18B_1009_B.OBCEnSig = 0.0;
  ZT_VehCtrl_18B_1009_B.Flag = 1.0F;
}

/* Function for Chart: '<S226>/Chart' */
static void ZT_VehCtrl_18B_1009_OBCOn(const boolean_T *Compare_n, const
  boolean_T *Compare_n3, const boolean_T *Compare_i, boolean_T *Switch_e4)
{
  /* DataStoreRead: '<S226>/Data Store Read1' */
  if (Key || (!*Switch_e4) || ZT_VehCtrl_18B_1009_B.ShutDown) {
    ZT_VehCtrl_18B_1009_DW.is_OBC_PDU_path =
      ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
    ZT_VehCtrl_18B_1009_DW.is_OBC_HVC_path =
      ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
    ZT_VehCtrl_18B_1009_DW.is_OBCOn = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
    ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
      ZT_VehCtrl_18B_1009_IN_OBC_Down;
    ZT_VehCtrl_18B_1009_B.OBC_Front_OffDone = false;
    ZT_VehCtrl_18B_1009_B.OBC_Rear_OffDone = false;
    ZT_VehCtrl_18B_1009_B.Flag = 9.0F;
    ZT_VehCtrl_18B_1009_DW.is_OBC_FrontPwrOff =
      ZT_VehCtrl_18B_1009_IN_OBC_Front_LVDown;
    ZT_VehCtrl_18B_1009_DW.Cnt3 = 0.0;
    ZT_VehCtrl_18B_1009_DW.is_OBC_RearPwrOff =
      ZT_VehCtrl_18B_1009_IN_OBC_Rear_LVDown;
    ZT_VehCtrl_18B_1009_DW.Cnt4 = 0.0;
  } else {
    switch (ZT_VehCtrl_18B_1009_DW.is_OBCOn) {
     case ZT_VehCtrl_18B_1009_IN_OBCEn:
      ZT_VehCtrl_18B_1009_B.OBCEnSig = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 1.0;
      if ((ZT_VehCtrl_18B_1009_B.BMS_ChargeStatus == 1.0F) &&
          ZT_VehCtrl_18B_1009_B.Relay_NegativeStatus) {
        ZT_VehCtrl_18B_1009_DW.is_OBCOn =
          ZT_VehCtrl_18B_1009_IN_OBC_Relay_PosPreEn;
        ZT_VehCtrl_18B_1009_B.EDrv1_PowOnCmd = 1.0;
        ZT_VehCtrl_18B_1009_B.EDrv2_PowOnCmd = 1.0;
        ZT_VehCtrl_18B_1009_B.VCU_ShrRlyCtl = 1.0;
        ZT_VehCtrl_18B_1009_B.VCU_HghVtgCtl = 1.0;
        ZT_VehCtrl_18B_1009_B.Flag = 8.0F;
        ZT_VehCtrl_18B_1009_DW.is_OBC_HVC_path =
          ZT_VehCtrl_18B_1009_IN_OBC_HVC_wait;
        ZT_VehCtrl_18B_1009_B.OBC_HVCReady = false;
        ZT_VehCtrl_18B_1009_DW.is_OBC_PDU_path =
          ZT_VehCtrl_18B_1009_IN_OBC_PDU_wait;
        ZT_VehCtrl_18B_1009_B.OBC_PDUReady = false;
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_OBCOff:
      ZT_VehCtrl_18B_1009_B.OBCEnSig = 0.0;
      if ((ZT_VehCtrl_18B_1009_B.BMS_SelfCheckStatus == 1.0F) && (Gear == 0.0F) &&
          (VehSpd_mps < 1.0F) && (!ParkReleaseSw)) {
        ZT_VehCtrl_18B_1009_DW.is_OBCOn = ZT_VehCtrl_18B_1009_IN_OBCEn;
        ZT_VehCtrl_18B_1009_B.OBCEnSig = 1.0;
        ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 1.0;
        ZT_VehCtrl_18B_1009_B.Flag = 7.0F;
      }
      break;

     default:
      if (ZT_VehCtrl_18B_1009_DW.is_OBC_HVC_path ==
          ZT_VehCtrl_18B_1009_IN_OBC_HVC_Ready) {
        ZT_VehCtrl_18B_1009_B.OBC_HVCReady = true;
      } else {
        ZT_VehCtrl_18B_1009_B.OBC_HVCReady = false;
        if (ZT_VehCtrl_18B_1009_B.MotDrv1_PowOnSt &&
            ZT_VehCtrl_18B_1009_B.MotDrv2_PowOnSt) {
          ZT_VehCtrl_18B_1009_DW.is_OBC_HVC_path =
            ZT_VehCtrl_18B_1009_IN_OBC_HVC_Ready;
          ZT_VehCtrl_18B_1009_B.OBC_HVCReady = true;
          ZT_VehCtrl_18B_1009_B.VCU_DCDC1_En = 1.0;
        }
      }

      if (ZT_VehCtrl_18B_1009_DW.is_OBC_PDU_path ==
          ZT_VehCtrl_18B_1009_IN_OBC_PDU_Ready) {
        ZT_VehCtrl_18B_1009_B.OBC_PDUReady = true;
      } else {
        ZT_VehCtrl_18B_1009_B.OBC_PDUReady = false;
        if ((*Compare_i) && (*Compare_n3) && (*Compare_n)) {
          ZT_VehCtrl_18B_1009_DW.is_OBC_PDU_path =
            ZT_VehCtrl_18B_1009_IN_OBC_PDU_Ready;
          ZT_VehCtrl_18B_1009_B.OBC_PDUReady = true;
          ZT_VehCtrl_18B_1009_B.DcdcCmd = 1.0;
        }
      }
      break;
    }
  }

  /* End of DataStoreRead: '<S226>/Data Store Read1' */
}

/* Function for Chart: '<S229>/Chart' */
static void ZT_VehCtrl_18B_1009_DriveControl(const real32_T *Switch, const
  real32_T *Switch1, real32_T *TM_Demand_Torque, real_T *ISG_Control_Mode,
  real_T *VCU2OilMotor_CtrlMode, real_T *VCU2DrvMotor_CtrlMode)
{
  switch (ZT_VehCtrl_18B_1009_DW.is_FrontDrive) {
   case ZT_VehCtrl_18B_1009_IN_FrontActive_D:
    if (Gear == 0.0F) {
      ZT_VehCtrl_18B_1009_DW.is_FrontDrive = ZT_VehCtrl_18B_1009_IN_FrontWait;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 0.0;
      *VCU2DrvMotor_CtrlMode = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = 0.0F;
      *VCU2OilMotor_CtrlMode = 1.0;
    } else if (Gear == 2.0F) {
      ZT_VehCtrl_18B_1009_DW.is_FrontDrive =
        ZT_VehCtrl_18B_1009_IN_FrontActive_R;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 2.0;
      *VCU2DrvMotor_CtrlMode = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = *Switch;
      *VCU2OilMotor_CtrlMode = 1.0;
    } else {
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 0.0;
      *VCU2DrvMotor_CtrlMode = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = *Switch;
      *VCU2OilMotor_CtrlMode = 1.0;
    }
    break;

   case ZT_VehCtrl_18B_1009_IN_FrontActive_R:
    if (Gear == 0.0F) {
      ZT_VehCtrl_18B_1009_DW.is_FrontDrive = ZT_VehCtrl_18B_1009_IN_FrontWait;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 0.0;
      *VCU2DrvMotor_CtrlMode = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = 0.0F;
      *VCU2OilMotor_CtrlMode = 1.0;
    } else if (Gear == 1.0F) {
      ZT_VehCtrl_18B_1009_DW.is_FrontDrive =
        ZT_VehCtrl_18B_1009_IN_FrontActive_D;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 0.0;
      *VCU2DrvMotor_CtrlMode = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = *Switch;
      *VCU2OilMotor_CtrlMode = 1.0;
    } else {
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 2.0;
      *VCU2DrvMotor_CtrlMode = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = *Switch;
      *VCU2OilMotor_CtrlMode = 1.0;
    }
    break;

   default:
    if (Gear == 1.0F) {
      ZT_VehCtrl_18B_1009_DW.is_FrontDrive =
        ZT_VehCtrl_18B_1009_IN_FrontActive_D;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 0.0;
      *VCU2DrvMotor_CtrlMode = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = *Switch;
      *VCU2OilMotor_CtrlMode = 1.0;
    } else if (Gear == 2.0F) {
      ZT_VehCtrl_18B_1009_DW.is_FrontDrive =
        ZT_VehCtrl_18B_1009_IN_FrontActive_R;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 2.0;
      *VCU2DrvMotor_CtrlMode = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = *Switch;
      *VCU2OilMotor_CtrlMode = 1.0;
    } else {
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 0.0;
      *VCU2DrvMotor_CtrlMode = 1.0;
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = 0.0F;
      *VCU2OilMotor_CtrlMode = 1.0;
    }
    break;
  }

  switch (ZT_VehCtrl_18B_1009_DW.is_RearDrive) {
   case ZT_VehCtrl_18B_1009_IN_RearActive_D:
    if (Gear == 0.0F) {
      ZT_VehCtrl_18B_1009_DW.is_RearDrive = ZT_VehCtrl_18B_1009_IN_RearWait;
      ZT_VehCtrl_18B_1009_B.TM_Gear = 0.0;
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
      *TM_Demand_Torque = 0.0F;
      *ISG_Control_Mode = 0.0;
    } else if (Gear == 2.0F) {
      ZT_VehCtrl_18B_1009_DW.is_RearDrive = ZT_VehCtrl_18B_1009_IN_RearActive_R;
      ZT_VehCtrl_18B_1009_B.TM_Gear = 1.0;
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
      *TM_Demand_Torque = *Switch1;
      *ISG_Control_Mode = 2.0;
    } else {
      ZT_VehCtrl_18B_1009_B.TM_Gear = 1.0;
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
      *TM_Demand_Torque = *Switch1;
      *ISG_Control_Mode = 2.0;
    }
    break;

   case ZT_VehCtrl_18B_1009_IN_RearActive_R:
    if (Gear == 1.0F) {
      ZT_VehCtrl_18B_1009_DW.is_RearDrive = ZT_VehCtrl_18B_1009_IN_RearActive_D;
      ZT_VehCtrl_18B_1009_B.TM_Gear = 1.0;
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
      *TM_Demand_Torque = *Switch1;
      *ISG_Control_Mode = 2.0;
    } else if (Gear == 0.0F) {
      ZT_VehCtrl_18B_1009_DW.is_RearDrive = ZT_VehCtrl_18B_1009_IN_RearWait;
      ZT_VehCtrl_18B_1009_B.TM_Gear = 0.0;
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
      *TM_Demand_Torque = 0.0F;
      *ISG_Control_Mode = 0.0;
    } else {
      ZT_VehCtrl_18B_1009_B.TM_Gear = 1.0;
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
      *TM_Demand_Torque = *Switch1;
      *ISG_Control_Mode = 2.0;
    }
    break;

   default:
    if (Gear == 2.0F) {
      ZT_VehCtrl_18B_1009_DW.is_RearDrive = ZT_VehCtrl_18B_1009_IN_RearActive_R;
      ZT_VehCtrl_18B_1009_B.TM_Gear = 1.0;
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
      *TM_Demand_Torque = *Switch1;
      *ISG_Control_Mode = 2.0;
    } else if (Gear == 1.0F) {
      ZT_VehCtrl_18B_1009_DW.is_RearDrive = ZT_VehCtrl_18B_1009_IN_RearActive_D;
      ZT_VehCtrl_18B_1009_B.TM_Gear = 1.0;
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
      *TM_Demand_Torque = *Switch1;
      *ISG_Control_Mode = 2.0;
    } else {
      ZT_VehCtrl_18B_1009_B.TM_Gear = 0.0;
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
      *TM_Demand_Torque = 0.0F;
      *ISG_Control_Mode = 0.0;
    }
    break;
  }
}

/* Model step function */
void ZT_VehCtrl_18B_1009_step(void)
{
  boolean_T rtb_Compare_mp;
  boolean_T rtb_LogicalOperator_o;
  int32_T rtb_PulseGenerator2;
  int32_T rtb_PulseGenerator1;
  int32_T rtb_PulseGenerator;
  int32_T rtb_PulseGenerator6;
  int32_T rtb_Flg_l;
  int32_T rtb_Flg;
  ZCEventType zcEvent;
  int32_T rtb_Flg_k;
  int32_T rtb_ManualSwitch1;
  int32_T rtb_ManualSwitch;
  int32_T rtb_high_k;
  int32_T rtb_low_d;
  boolean_T Compare_n;
  boolean_T Compare_n3;
  boolean_T Compare_i;
  real32_T Switch;
  real32_T Switch1;
  real32_T TM_Demand_Torque;
  boolean_T Compare_a;
  real_T ISG_Control_Mode;
  real_T VCU2OilMotor_CtrlMode;
  real_T VCU2DrvMotor_CtrlMode;
  real_T tmp;
  uint8_T tmp_0;
  uint8_T tmp_1;
  uint8_T tmp_2;
  uint8_T tmp_3;

  /* S-Function (adc_mpc_start): '<S37>/ADC_Start' */
  ADC_DRV_StartConversion(1U, ADC_CONV_CHAIN_NORMAL);

  {
    uint16_t *result_addr = &ZT_VehCtrl_18B_1009_B.ADC_Start[0];
    while (!(ADC_DRV_GetStatusFlags(1U) & ADC_FLAG_NORMAL_ENDCHAIN)) ;
    ADC_DRV_GetConvResultsToArray(1U, ADC_CONV_CHAIN_NORMAL, result_addr, 5U);
    ADC_DRV_ClearStatusFlags(1U, ADC_FLAG_NORMAL_ENDCHAIN);
  }

  /* S-Function (adc_mpc_start): '<S37>/ADC_Start1' */
  ADC_DRV_StartConversion(0U, ADC_CONV_CHAIN_NORMAL);

  {
    uint16_t *result_addr = &ZT_VehCtrl_18B_1009_B.ADC_Start1[0];
    while (!(ADC_DRV_GetStatusFlags(0U) & ADC_FLAG_NORMAL_ENDCHAIN)) ;
    ADC_DRV_GetConvResultsToArray(0U, ADC_CONV_CHAIN_NORMAL, result_addr, 10U);
    ADC_DRV_ClearStatusFlags(0U, ADC_FLAG_NORMAL_ENDCHAIN);
  }

  /* Gain: '<S37>/Gain2' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write'
   *  DataTypeConversion: '<S37>/Data Type Conversion3'
   */
  AI11 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[3];

  /* Gain: '<S37>/Gain3' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write1'
   *  DataTypeConversion: '<S37>/Data Type Conversion5'
   */
  AI16 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[5];

  /* Gain: '<S37>/Gain7' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write2'
   *  DataTypeConversion: '<S37>/Data Type Conversion1'
   */
  AI18 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[1];

  /* Gain: '<S37>/Gain10' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write3'
   *  DataTypeConversion: '<S37>/Data Type Conversion6'
   */
  AI06 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[6];

  /* Gain: '<S37>/Gain14' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write4'
   *  DataTypeConversion: '<S37>/Data Type Conversion9'
   */
  AI07 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[9];

  /* Gain: '<S37>/Gain1' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write5'
   *  DataTypeConversion: '<S37>/Data Type Conversion2'
   */
  AI08 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[2];

  /* Saturate: '<S43>/Saturation' incorporates:
   *  DataStoreRead: '<S5>/Data Store Read15'
   */
  if (AI08 > 3.84F) {
    Switch = 3.84F;
  } else if (AI08 < 0.75F) {
    Switch = 0.75F;
  } else {
    Switch = AI08;
  }

  /* End of Saturate: '<S43>/Saturation' */

  /* Lookup_n-D: '<S43>/1-D Lookup Table' */
  AccPadle = look1_iflf_binlxpw(Switch,
    ZT_VehCtrl_18B_1009_ConstP.uDLookupTable_bp01Data,
    ZT_VehCtrl_18B_1009_ConstP.pooled16, 1U);

  /* Gain: '<S37>/Gain12' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write6'
   *  DataTypeConversion: '<S37>/Data Type Conversion7'
   */
  AI12 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[7];

  /* Saturate: '<S43>/Saturation1' incorporates:
   *  DataStoreRead: '<S5>/Data Store Read16'
   */
  if (AI12 > 1.92F) {
    Switch = 1.92F;
  } else if (AI12 < 0.375F) {
    Switch = 0.375F;
  } else {
    Switch = AI12;
  }

  /* End of Saturate: '<S43>/Saturation1' */

  /* Switch: '<S43>/Switch' incorporates:
   *  Abs: '<S43>/Abs'
   *  Constant: '<S183>/Constant'
   *  Constant: '<S43>/Constant2'
   *  Lookup_n-D: '<S43>/1-D Lookup Table1'
   *  RelationalOperator: '<S183>/Compare'
   *  Sum: '<S43>/Subtract'
   */
  if (!(fabsf(AccPadle - look1_iflf_binlxpw(Switch,
         ZT_VehCtrl_18B_1009_ConstP.uDLookupTable1_bp01Data,
         ZT_VehCtrl_18B_1009_ConstP.pooled16, 1U)) <= 0.05F)) {
    AccPadle = 0.0F;
  }

  /* End of Switch: '<S43>/Switch' */

  /* S-Function (gpio_mpc_input): '<S41>/DI01' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI01_h = (PINS_DRV_ReadPins(PTG) >> 5) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI02' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI02_c = (PINS_DRV_ReadPins(PTG) >> 9) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI03' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI03_h = (PINS_DRV_ReadPins(PTC) >> 11) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI04' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI04_o = (PINS_DRV_ReadPins(PTA) >> 9) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI07' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI07_f = (PINS_DRV_ReadPins(PTA) >> 0) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI08' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI08_e = (PINS_DRV_ReadPins(PTD) >> 11) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI09' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI09_a = (PINS_DRV_ReadPins(PTG) >> 6) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI10' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI10_g = (PINS_DRV_ReadPins(PTG) >> 2) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI12' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI12_h = (PINS_DRV_ReadPins(PTF) >> 13) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI13' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI13_m = (PINS_DRV_ReadPins(PTG) >> 4) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI15' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI15_b = (PINS_DRV_ReadPins(PTF) >> 12) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI16' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI16_k = (PINS_DRV_ReadPins(PTG) >> 7) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI17' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI17_c = (PINS_DRV_ReadPins(PTD) >> 10) & 0x01;

  /* S-Function (gpio_mpc_input): '<S41>/DI18' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI18_k = (PINS_DRV_ReadPins(PTG) >> 10) & 0x01;

  /* S-Function (gpio_mpc_input): '<S154>/DI31' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI31_g = (PINS_DRV_ReadPins(PTF) >> 0) & 0x01;

  /* S-Function (gpio_mpc_input): '<S154>/DI32' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI32_l = (PINS_DRV_ReadPins(PTD) >> 1) & 0x01;

  /* S-Function (gpio_mpc_input): '<S154>/DI33' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI33_b = (PINS_DRV_ReadPins(PTD) >> 2) & 0x01;

  /* S-Function (gpio_mpc_input): '<S154>/DI34' */
  /* Signal update */
  ZT_VehCtrl_18B_1009_B.DI34_p = (PINS_DRV_ReadPins(PTC) >> 13) & 0x01;

  /* End of Outputs for S-Function (fcan_mpc_isr): '<S5>/CAN0_Rx_500' */
  /* End of Outputs for S-Function (fcan_mpc_isr): '<S5>/CAN1_Rx_500' */

  /* DataStoreWrite: '<S41>/Data Store Write1' */
  DI01 = ZT_VehCtrl_18B_1009_B.DI01_h;

  /* DataStoreWrite: '<S41>/Data Store Write8' */
  DI02 = ZT_VehCtrl_18B_1009_B.DI02_c;

  /* Chart: '<S5>/Chart' incorporates:
   *  DataStoreRead: '<S5>/Data Store Read25'
   *  DataStoreRead: '<S5>/Data Store Read26'
   */
  if (ZT_VehCtrl_18B_1009_DW.is_active_c1_ZT_VehCtrl_18B_1009 == 0U) {
    ZT_VehCtrl_18B_1009_DW.is_active_c1_ZT_VehCtrl_18B_1009 = 1U;
    ZT_VehCtrl_18B_1009_DW.is_c1_ZT_VehCtrl_18B_1009 = ZT_VehCtrl_18B_1009_IN_N;
    Gear = 0.0F;
  } else {
    switch (ZT_VehCtrl_18B_1009_DW.is_c1_ZT_VehCtrl_18B_1009) {
     case ZT_VehCtrl_18B_1009_IN_D:
      Gear = 1.0F;
      if (((!DI01) && (!DI02)) || (DI01 && DI02)) {
        ZT_VehCtrl_18B_1009_DW.is_c1_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_N;
        Gear = 0.0F;
      } else {
        if ((!DI01) && DI02) {
          ZT_VehCtrl_18B_1009_DW.is_c1_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_R;
          Gear = 2.0F;
        }
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_N:
      Gear = 0.0F;
      if (DI01 && (!DI02)) {
        ZT_VehCtrl_18B_1009_DW.is_c1_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_D;
        Gear = 1.0F;
      } else {
        if ((!DI01) && DI02) {
          ZT_VehCtrl_18B_1009_DW.is_c1_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_R;
          Gear = 2.0F;
        }
      }
      break;

     default:
      Gear = 2.0F;
      rtb_LogicalOperator_o = !DI02;
      if (((!DI01) && rtb_LogicalOperator_o) || (DI01 && DI02)) {
        ZT_VehCtrl_18B_1009_DW.is_c1_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_N;
        Gear = 0.0F;
      } else {
        if (DI01 && rtb_LogicalOperator_o) {
          ZT_VehCtrl_18B_1009_DW.is_c1_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_D;
          Gear = 1.0F;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart' */

  /* DataStoreWrite: '<S41>/Data Store Write5' */
  DI16 = ZT_VehCtrl_18B_1009_B.DI16_k;

  /* DataStoreRead: '<S5>/Data Store Read4' */
  ParkReleaseSw = DI16;

  /* RelationalOperator: '<S237>/Compare' incorporates:
   *  Constant: '<S237>/Constant'
   */
  Compare_n = (ZT_VehCtrl_18B_1009_B.PDU_PosRlyPcgRlySts == 1.0F);

  /* RelationalOperator: '<S238>/Compare' incorporates:
   *  Constant: '<S238>/Constant'
   */
  Compare_n3 = (ZT_VehCtrl_18B_1009_B.PDU_PosRlySts == 1.0F);

  /* RelationalOperator: '<S236>/Compare' incorporates:
   *  Constant: '<S236>/Constant'
   */
  Compare_i = (ZT_VehCtrl_18B_1009_B.PDU_ShrRlySts == 1.0F);

  /* RelationalOperator: '<S239>/Compare' incorporates:
   *  Constant: '<S239>/Constant'
   */
  rtb_Compare_mp = (ZT_VehCtrl_18B_1009_B.BMS_AlarmLevel >= 2.0F);

  /* Logic: '<S227>/Logical Operator2' incorporates:
   *  Constant: '<S241>/Constant'
   *  Constant: '<S242>/Constant'
   *  Constant: '<S243>/Constant'
   *  RelationalOperator: '<S241>/Compare'
   *  RelationalOperator: '<S242>/Compare'
   *  RelationalOperator: '<S243>/Compare'
   */
  rtb_LogicalOperator_o = ((ZT_VehCtrl_18B_1009_B.PDU_PosRlyPcgRlySts == 2.0F) ||
    (ZT_VehCtrl_18B_1009_B.PDU_PosRlySts == 2.0F) ||
    (ZT_VehCtrl_18B_1009_B.PDU_ShrRlySts == 2.0F));

  /* Logic: '<S227>/Logical Operator' incorporates:
   *  Constant: '<S240>/Constant'
   *  Constant: '<S244>/Constant'
   *  Constant: '<S245>/Constant'
   *  Constant: '<S250>/Constant'
   *  Constant: '<S251>/Constant'
   *  RelationalOperator: '<S240>/Compare'
   *  RelationalOperator: '<S244>/Compare'
   *  RelationalOperator: '<S245>/Compare'
   *  RelationalOperator: '<S250>/Compare'
   *  RelationalOperator: '<S251>/Compare'
   */
  ZT_VehCtrl_18B_1009_B.ShutDown = (rtb_Compare_mp ||
    (ZT_VehCtrl_18B_1009_B.Fail_Grade >= 3.0F) ||
    (ZT_VehCtrl_18B_1009_B.Fail_Grade_d >= 3.0F) ||
    (ZT_VehCtrl_18B_1009_B.OilMotorFaultLevel >= 3.0F) ||
    (ZT_VehCtrl_18B_1009_B.DrvMotorFaultLevel >= 3.0F) || rtb_LogicalOperator_o ||
    (ZT_VehCtrl_18B_1009_B.HVC_FaultLevel >= 2.0F));

  /* RelationalOperator: '<S256>/Compare' incorporates:
   *  Constant: '<S256>/Constant'
   */
  Compare_a = (ZT_VehCtrl_18B_1009_B.FaultLevel >= 2.0F);

  /* Product: '<S231>/Product' incorporates:
   *  Abs: '<S231>/Abs1'
   *  Abs: '<S231>/Abs2'
   *  Constant: '<S231>/Constant'
   *  Gain: '<S231>/Gain'
   *  Sum: '<S231>/Add'
   */
  VehSpd_mps = (fabsf(ZT_VehCtrl_18B_1009_B.DrvMotorSpd) + fabsf
                (ZT_VehCtrl_18B_1009_B.Motor_Speed)) * 0.5F * 0.104719758F;

  /* DataStoreWrite: '<S154>/Data Store Write15' */
  DI32 = ZT_VehCtrl_18B_1009_B.DI32_l;

  /* DataStoreRead: '<S5>/Data Store Read6' */
  ChargeEnSw = DI32;

  /* Logic: '<S230>/Logical Operator' incorporates:
   *  Logic: '<S232>/Logical Operator1'
   */
  ZT_VehCtrl_18B_1009_B.VCU_Pst_b = !ParkReleaseSw;

  /* Switch: '<S230>/Switch' incorporates:
   *  Constant: '<S258>/Constant'
   *  Constant: '<S259>/Constant'
   *  Logic: '<S227>/Logical Operator3'
   *  Logic: '<S227>/Logical Operator5'
   *  Logic: '<S230>/Logical Operator'
   *  RelationalOperator: '<S258>/Compare'
   *  RelationalOperator: '<S259>/Compare'
   */
  rtb_Compare_mp = (ZT_VehCtrl_18B_1009_B.VCU_Pst_b && (!(Gear != 0.0F)) &&
                    (!(ZT_VehCtrl_18B_1009_B.BMS_SelfCheckStatus != 1.0F)) && ((
    !rtb_Compare_mp) && ((!ZT_VehCtrl_18B_1009_B.OBC_HwFault) &&
    (!ZT_VehCtrl_18B_1009_B.OBC_Temp) &&
    (!ZT_VehCtrl_18B_1009_B.OBC_InputVoltage) &&
    (!ZT_VehCtrl_18B_1009_B.OBC_StartSt) &&
    (!ZT_VehCtrl_18B_1009_B.OBC_OutputShortCircuit))) && (!(VehSpd_mps >= 1.0F))
                    && ChargeEnSw);

  /* Chart: '<S226>/Chart' incorporates:
   *  DataStoreRead: '<S226>/Data Store Read1'
   */
  if (ZT_VehCtrl_18B_1009_DW.is_active_c3_ZT_VehCtrl_18B_1009 == 0U) {
    ZT_VehCtrl_18B_1009_DW.is_active_c3_ZT_VehCtrl_18B_1009 = 1U;
    ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
      ZT_VehCtrl_18B_1009_IN_Init;
    ZT_VehCtrl_18B_1009_enter_atomic_Init();
  } else {
    switch (ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009) {
     case ZT_VehCtrl_18B_1009_IN_BMS_PowerOff:
      ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 0.0;
      ZT_VehCtrl_18B_1009_B.VCU_UrgencyCutOffPowerReq = 0.0;
      if (!ZT_VehCtrl_18B_1009_B.Relay_NegativeStatus) {
        ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_Init;
        ZT_VehCtrl_18B_1009_enter_atomic_Init();
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_Init:
      ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 0.0;
      ZT_VehCtrl_18B_1009_B.VCU_UrgencyCutOffPowerReq = 0.0;
      ZT_VehCtrl_18B_1009_B.OBCEnSig = 0.0;
      if (Key && (!ZT_VehCtrl_18B_1009_B.ShutDown)) {
        ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_PowerOn;
        ZT_VehCtrl_18B_1009_DW.is_PowerOn = ZT_VehCtrl_18B_1009_IN_Relay_NegEn;
        ZT_VehCtrl_18B_1009_B.Ready = false;
        ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 1.0;
        ZT_VehCtrl_18B_1009_B.Flag = 2.0F;
      } else {
        if ((!Key) && rtb_Compare_mp && (!ZT_VehCtrl_18B_1009_B.ShutDown)) {
          ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_OBCOn;
          ZT_VehCtrl_18B_1009_DW.is_OBCOn = ZT_VehCtrl_18B_1009_IN_OBCOff;
          ZT_VehCtrl_18B_1009_B.OBCEnSig = 0.0;
          ZT_VehCtrl_18B_1009_B.Flag = 6.0F;
        }
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_OBCOn:
      ZT_VehCtrl_18B_1009_OBCOn(&Compare_n, &Compare_n3, &Compare_i,
        &rtb_Compare_mp);
      break;

     case ZT_VehCtrl_18B_1009_IN_OBC_BMS_PowerOn:
      ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 0.0;
      ZT_VehCtrl_18B_1009_B.OBCEnSig = 0.0;
      if (ZT_VehCtrl_18B_1009_B.BMS_ChargeStatus == 0.0F) {
        ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_Init;
        ZT_VehCtrl_18B_1009_enter_atomic_Init();
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_OBC_Down:
      if (ZT_VehCtrl_18B_1009_B.OBC_Front_OffDone &&
          ZT_VehCtrl_18B_1009_B.OBC_Rear_OffDone) {
        ZT_VehCtrl_18B_1009_DW.is_OBC_RearPwrOff =
          ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
        ZT_VehCtrl_18B_1009_DW.is_OBC_FrontPwrOff =
          ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
        ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_OBC_BMS_PowerOn;
        ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 0.0;
        ZT_VehCtrl_18B_1009_B.OBCEnSig = 0.0;
        ZT_VehCtrl_18B_1009_B.Flag = 10.0F;
      } else {
        switch (ZT_VehCtrl_18B_1009_DW.is_OBC_FrontPwrOff) {
         case ZT_VehCtrl_18B_1009_IN_Front_Off:
          break;

         case ZT_VehCtrl_18B_1009_IN_OBC_Front_HVDown:
          if ((!ZT_VehCtrl_18B_1009_B.MotDrv1_PowOnSt) &&
              (!ZT_VehCtrl_18B_1009_B.MotDrv2_PowOnSt)) {
            ZT_VehCtrl_18B_1009_DW.is_OBC_FrontPwrOff =
              ZT_VehCtrl_18B_1009_IN_Front_Off;
            ZT_VehCtrl_18B_1009_B.OBC_Front_OffDone = true;
          } else {
            ZT_VehCtrl_18B_1009_B.EDrv1_PowOnCmd = 0.0;
            ZT_VehCtrl_18B_1009_B.EDrv2_PowOnCmd = 0.0;
          }
          break;

         default:
          if (ZT_VehCtrl_18B_1009_DW.Cnt3 >= 5.0) {
            ZT_VehCtrl_18B_1009_DW.is_OBC_FrontPwrOff =
              ZT_VehCtrl_18B_1009_IN_OBC_Front_HVDown;
          } else {
            ZT_VehCtrl_18B_1009_B.VCU_DCDC1_En = 2.0;
            ZT_VehCtrl_18B_1009_DW.Cnt3++;
          }
          break;
        }

        switch (ZT_VehCtrl_18B_1009_DW.is_OBC_RearPwrOff) {
         case ZT_VehCtrl_18B_1009_IN_OBC_Rear_HVDown:
          if ((!Compare_i) && (!Compare_n3) && (!Compare_n)) {
            ZT_VehCtrl_18B_1009_DW.is_OBC_RearPwrOff =
              ZT_VehCtrl_18B_1009_IN_Rear_Off;
            ZT_VehCtrl_18B_1009_B.OBC_Rear_OffDone = true;
          } else {
            ZT_VehCtrl_18B_1009_B.VCU_ShrRlyCtl = 0.0;
            ZT_VehCtrl_18B_1009_B.VCU_HghVtgCtl = 0.0;
          }
          break;

         case ZT_VehCtrl_18B_1009_IN_OBC_Rear_LVDown:
          if (ZT_VehCtrl_18B_1009_DW.Cnt4 >= 5.0) {
            ZT_VehCtrl_18B_1009_DW.is_OBC_RearPwrOff =
              ZT_VehCtrl_18B_1009_IN_OBC_Rear_HVDown;
          } else {
            ZT_VehCtrl_18B_1009_B.DcdcCmd = 0.0;
            ZT_VehCtrl_18B_1009_DW.Cnt4++;
          }
          break;
        }
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_PowerOff:
      if (ZT_VehCtrl_18B_1009_B.Front_OffDone &&
          ZT_VehCtrl_18B_1009_B.Rear_OffDone) {
        ZT_VehCtrl_18B_1009_DW.is_RearPwrOff =
          ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
        ZT_VehCtrl_18B_1009_DW.is_FrontPwrOff =
          ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
        ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_BMS_PowerOff;
        ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq = 0.0;
        ZT_VehCtrl_18B_1009_B.VCU_UrgencyCutOffPowerReq = 0.0;
        ZT_VehCtrl_18B_1009_B.Flag = 5.0F;
      } else {
        switch (ZT_VehCtrl_18B_1009_DW.is_FrontPwrOff) {
         case ZT_VehCtrl_18B_1009_IN_Front_HVDown:
          if ((!ZT_VehCtrl_18B_1009_B.MotDrv1_PowOnSt) &&
              (!ZT_VehCtrl_18B_1009_B.MotDrv2_PowOnSt)) {
            ZT_VehCtrl_18B_1009_DW.is_FrontPwrOff =
              ZT_VehCtrl_18B_1009_IN_Front_Off_d;
            ZT_VehCtrl_18B_1009_B.Front_OffDone = true;
          } else {
            ZT_VehCtrl_18B_1009_B.EDrv1_PowOnCmd = 0.0;
            ZT_VehCtrl_18B_1009_B.EDrv2_PowOnCmd = 0.0;
          }
          break;

         case ZT_VehCtrl_18B_1009_IN_Front_LVDown:
          if (ZT_VehCtrl_18B_1009_DW.Cnt1 >= 5.0) {
            ZT_VehCtrl_18B_1009_DW.is_FrontPwrOff =
              ZT_VehCtrl_18B_1009_IN_Front_HVDown;
          } else {
            ZT_VehCtrl_18B_1009_B.VCU_DCDC1_En = 2.0;
            ZT_VehCtrl_18B_1009_DW.Cnt1++;
          }
          break;
        }

        switch (ZT_VehCtrl_18B_1009_DW.is_RearPwrOff) {
         case ZT_VehCtrl_18B_1009_IN_Rear_HVDown:
          if ((!Compare_i) && (!Compare_n3) && (!Compare_n)) {
            ZT_VehCtrl_18B_1009_DW.is_RearPwrOff =
              ZT_VehCtrl_18B_1009_IN_Rear_Off;
            ZT_VehCtrl_18B_1009_B.Rear_OffDone = true;
          } else {
            ZT_VehCtrl_18B_1009_B.VCU_ShrRlyCtl = 0.0;
            ZT_VehCtrl_18B_1009_B.VCU_HghVtgCtl = 0.0;
          }
          break;

         case ZT_VehCtrl_18B_1009_IN_Rear_LVDown:
          if (ZT_VehCtrl_18B_1009_DW.Cnt2 >= 5.0) {
            ZT_VehCtrl_18B_1009_DW.is_RearPwrOff =
              ZT_VehCtrl_18B_1009_IN_Rear_HVDown;
          } else {
            ZT_VehCtrl_18B_1009_B.DcdcCmd = 0.0;
            ZT_VehCtrl_18B_1009_DW.Cnt2++;
          }
          break;
        }
      }
      break;

     default:
      ZT_VehCtrl_18B_1009_PowerOn(&Compare_n, &Compare_n3, &Compare_i,
        &Compare_a);
      break;
    }
  }

  /* End of Chart: '<S226>/Chart' */

  /* DataStoreWrite: '<S226>/Data Store Write' */
  EnergyFlag = ZT_VehCtrl_18B_1009_B.Flag;

  /* DataStoreWrite: '<S226>/Data Store Write1' */
  EnergyReady[0] = ZT_VehCtrl_18B_1009_B.HVCReady;
  EnergyReady[1] = ZT_VehCtrl_18B_1009_B.PDUReady;
  EnergyReady[2] = ZT_VehCtrl_18B_1009_B.OBC_HVCReady;
  EnergyReady[3] = ZT_VehCtrl_18B_1009_B.OBC_PDUReady;
  EnergyReady[4] = ZT_VehCtrl_18B_1009_B.OBC_Front_OffDone;
  EnergyReady[5] = ZT_VehCtrl_18B_1009_B.OBC_Rear_OffDone;
  EnergyReady[6] = ZT_VehCtrl_18B_1009_B.Front_OffDone;
  EnergyReady[7] = ZT_VehCtrl_18B_1009_B.Rear_OffDone;

  /* DataTypeConversion: '<S226>/Data Type Conversion' incorporates:
   *  DataStoreWrite: '<S226>/Data Store Write4'
   */
  HS005 = (ZT_VehCtrl_18B_1009_B.OBCEnSig != 0.0);

  /* DataStoreRead: '<S204>/Data Store Read7' */
  ZT_VehCtrl_18B_1009_B.DataStoreRead7_a = HS005;

  /* DataStoreRead: '<S204>/Data Store Read6' */
  ZT_VehCtrl_18B_1009_B.DataStoreRead6_n = HS004;

  /* DataStoreRead: '<S204>/Data Store Read5' */
  ZT_VehCtrl_18B_1009_B.DataStoreRead5 = HS003;

  /* DataStoreRead: '<S204>/Data Store Read4' */
  ZT_VehCtrl_18B_1009_B.DataStoreRead4 = HS002;

  /* Switch: '<S229>/Switch4' incorporates:
   *  DataStoreWrite: '<S229>/Data Store Write17'
   */
  HS007 = (Gear > 1.0F);

  /* DataStoreRead: '<S204>/Data Store Read2' */
  ZT_VehCtrl_18B_1009_B.DataStoreRead2 = HS007;

  /* DataStoreRead: '<S204>/Data Store Read' */
  ZT_VehCtrl_18B_1009_B.DataStoreRead = HS001;

  /* DiscretePulseGenerator: '<S6>/Pulse Generator2' */
  rtb_PulseGenerator2 = ((ZT_VehCtrl_18B_1009_DW.clockTickCounter < 50) &&
    (ZT_VehCtrl_18B_1009_DW.clockTickCounter >= 0));
  if (ZT_VehCtrl_18B_1009_DW.clockTickCounter >= 99) {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter = 0;
  } else {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S6>/Pulse Generator2' */

  /* Switch: '<S229>/Switch' incorporates:
   *  Lookup_n-D: '<S229>/1-D Lookup Table1'
   *  Lookup_n-D: '<S229>/1-D Lookup Table3'
   *  Switch: '<S229>/Switch1'
   */
  if (Gear > 1.0F) {
    Switch = look1_iflf_binlxpw(AccPadle, ZT_VehCtrl_18B_1009_ConstP.pooled16,
      ZT_VehCtrl_18B_1009_ConstP.uDLookupTable1_tableData, 1U);
    Switch1 = look1_iflf_binlxpw(AccPadle, ZT_VehCtrl_18B_1009_ConstP.pooled16,
      ZT_VehCtrl_18B_1009_ConstP.uDLookupTable3_tableData, 1U);
  } else {
    /* Lookup_n-D: '<S229>/1-D Lookup Table' incorporates:
     *  Lookup_n-D: '<S229>/1-D Lookup Table2'
     */
    Switch = look1_iflf_binlxpw(AccPadle, ZT_VehCtrl_18B_1009_ConstP.pooled16,
      ZT_VehCtrl_18B_1009_ConstP.pooled15, 1U);
    Switch1 = Switch;
  }

  /* End of Switch: '<S229>/Switch' */

  /* Chart: '<S229>/Chart' */
  if (ZT_VehCtrl_18B_1009_DW.is_active_c2_ZT_VehCtrl_18B_1009 == 0U) {
    ZT_VehCtrl_18B_1009_DW.is_active_c2_ZT_VehCtrl_18B_1009 = 1U;
    ZT_VehCtrl_18B_1009_DW.is_FrontDrive = ZT_VehCtrl_18B_1009_IN_FrontWait;
    ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode = 0.0;
    VCU2DrvMotor_CtrlMode = 1.0;
    ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq = 0.0F;
    VCU2OilMotor_CtrlMode = 1.0;
    ZT_VehCtrl_18B_1009_DW.is_RearDrive = ZT_VehCtrl_18B_1009_IN_RearWait;
    ZT_VehCtrl_18B_1009_B.TM_Gear = 0.0;
    ZT_VehCtrl_18B_1009_B.TM_Control_Mode = 2.0;
    TM_Demand_Torque = 0.0F;
    ISG_Control_Mode = 0.0;
  } else {
    ZT_VehCtrl_18B_1009_DriveControl(&Switch, &Switch1, &TM_Demand_Torque,
      &ISG_Control_Mode, &VCU2OilMotor_CtrlMode, &VCU2DrvMotor_CtrlMode);
  }

  /* End of Chart: '<S229>/Chart' */

  /* ManualSwitch: '<S229>/Manual Switch1' incorporates:
   *  Constant: '<S229>/Constant3'
   *  Constant: '<S252>/Constant'
   *  Constant: '<S253>/Constant'
   *  Logic: '<S227>/Logical Operator1'
   *  Logic: '<S229>/Logical Operator1'
   *  Logic: '<S229>/NOT1'
   *  RelationalOperator: '<S229>/Equal2'
   *  RelationalOperator: '<S252>/Compare'
   *  RelationalOperator: '<S253>/Compare'
   */
  rtb_ManualSwitch1 = ((!(ZT_VehCtrl_18B_1009_B.Fail_Grade >= 2.0F)) &&
                       (!(ZT_VehCtrl_18B_1009_B.Fail_Grade_d >= 2.0F)) &&
                       ZT_VehCtrl_18B_1009_B.PDUReady &&
                       (ZT_VehCtrl_18B_1009_B.SOC >= 1.0F));

  /* DiscretePulseGenerator: '<S6>/Pulse Generator1' */
  rtb_PulseGenerator1 = ((ZT_VehCtrl_18B_1009_DW.clockTickCounter_i < 1) &&
    (ZT_VehCtrl_18B_1009_DW.clockTickCounter_i >= 0));
  if (ZT_VehCtrl_18B_1009_DW.clockTickCounter_i >= 1) {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter_i = 0;
  } else {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter_i++;
  }

  /* End of DiscretePulseGenerator: '<S6>/Pulse Generator1' */

  /* ManualSwitch: '<S229>/Manual Switch' incorporates:
   *  Constant: '<S229>/Constant2'
   *  Constant: '<S254>/Constant'
   *  Constant: '<S255>/Constant'
   *  Logic: '<S227>/Logical Operator6'
   *  Logic: '<S229>/Logical Operator'
   *  Logic: '<S229>/NOT'
   *  RelationalOperator: '<S229>/Equal1'
   *  RelationalOperator: '<S254>/Compare'
   *  RelationalOperator: '<S255>/Compare'
   */
  rtb_ManualSwitch = ((!(ZT_VehCtrl_18B_1009_B.OilMotorFaultLevel >= 2.0F)) && (
    !(ZT_VehCtrl_18B_1009_B.DrvMotorFaultLevel >= 2.0F)) &&
                      ZT_VehCtrl_18B_1009_B.HVCReady &&
                      (ZT_VehCtrl_18B_1009_B.SOC >= 1.0F));

  /* DiscretePulseGenerator: '<S6>/Pulse Generator' */
  rtb_PulseGenerator = ((ZT_VehCtrl_18B_1009_DW.clockTickCounter_e < 10) &&
                        (ZT_VehCtrl_18B_1009_DW.clockTickCounter_e >= 0));
  if (ZT_VehCtrl_18B_1009_DW.clockTickCounter_e >= 19) {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter_e = 0;
  } else {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter_e++;
  }

  /* End of DiscretePulseGenerator: '<S6>/Pulse Generator' */

  /* DiscretePulseGenerator: '<S6>/Pulse Generator6' */
  rtb_PulseGenerator6 = ((ZT_VehCtrl_18B_1009_DW.clockTickCounter_h < 20) &&
    (ZT_VehCtrl_18B_1009_DW.clockTickCounter_h >= 0));
  if (ZT_VehCtrl_18B_1009_DW.clockTickCounter_h >= 39) {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter_h = 0;
  } else {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter_h++;
  }

  /* End of DiscretePulseGenerator: '<S6>/Pulse Generator6' */

  /* Gain: '<S37>/Gain6' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write7'
   *  DataTypeConversion: '<S37>/Data Type Conversion'
   */
  AI15 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[0];

  /* Saturate: '<S5>/Saturation' incorporates:
   *  DataStoreRead: '<S5>/Data Store Read17'
   */
  if (AI15 > 0.5F) {
    Switch = 0.5F;
  } else if (AI15 < -0.5F) {
    Switch = -0.5F;
  } else {
    Switch = AI15;
  }

  /* End of Saturate: '<S5>/Saturation' */

  /* Lookup_n-D: '<S5>/1-D Lookup Table' */
  RadiatorTempOut = look1_iflf_binlxpw(Switch,
    ZT_VehCtrl_18B_1009_ConstP.uDLookupTable_bp01Data_f,
    ZT_VehCtrl_18B_1009_ConstP.pooled15, 1U);

  /* DataStoreWrite: '<S41>/Data Store Write2' */
  DI10 = ZT_VehCtrl_18B_1009_B.DI10_g;

  /* DataStoreRead: '<S5>/Data Store Read1' */
  BodyLoadSw = DI10;

  /* MinMax: '<S227>/Max' incorporates:
   *  DataTypeConversion: '<S227>/Data Type Conversion1'
   */
  ZT_VehCtrl_18B_1009_B.FaultMax = fmaxf(fmaxf(fmaxf(fmaxf(fmaxf(fmaxf(fmaxf
    (fmaxf(fmaxf(fmaxf(fmaxf(fmaxf(fmaxf(fmaxf(fmaxf
    (ZT_VehCtrl_18B_1009_B.BMS_AlarmLevel, ZT_VehCtrl_18B_1009_B.Fail_Grade),
    ZT_VehCtrl_18B_1009_B.Fail_Grade_d),
    ZT_VehCtrl_18B_1009_B.OilMotorFaultLevel),
    ZT_VehCtrl_18B_1009_B.DrvMotorFaultLevel), rtb_LogicalOperator_o),
                       ZT_VehCtrl_18B_1009_B.HVC_FaultLevel),
                 ZT_VehCtrl_18B_1009_B.Fail_Grade),
           ZT_VehCtrl_18B_1009_B.Fail_Grade_d),
     ZT_VehCtrl_18B_1009_B.OilMotorFaultLevel),
    ZT_VehCtrl_18B_1009_B.DrvMotorFaultLevel), ZT_VehCtrl_18B_1009_B.FaultLevel),
    ZT_VehCtrl_18B_1009_B.DrvMotorFaultLevel),
    ZT_VehCtrl_18B_1009_B.OilMotorFaultLevel), ZT_VehCtrl_18B_1009_B.Fail_Grade),
    ZT_VehCtrl_18B_1009_B.Fail_Grade_d);

  /* Saturate: '<S232>/Saturation' */
  if (ZT_VehCtrl_18B_1009_B.BMS_BatteryPower > 0.0F) {
    Switch = 0.0F;
  } else if (ZT_VehCtrl_18B_1009_B.BMS_BatteryPower < -1000.0F) {
    Switch = -1000.0F;
  } else {
    Switch = ZT_VehCtrl_18B_1009_B.BMS_BatteryPower;
  }

  /* End of Saturate: '<S232>/Saturation' */

  /* Abs: '<S232>/Abs' */
  ZT_VehCtrl_18B_1009_B.VCU_DisChargePwr_kw = fabsf(Switch);

  /* RelationalOperator: '<S260>/Compare' incorporates:
   *  Constant: '<S260>/Constant'
   */
  ZT_VehCtrl_18B_1009_B.Compare_f =
    (ZT_VehCtrl_18B_1009_B.Statistic_TemperatureHTMax >= 80.0F);

  /* RelationalOperator: '<S261>/Compare' incorporates:
   *  Constant: '<S261>/Constant'
   */
  ZT_VehCtrl_18B_1009_B.Compare_e = (ZT_VehCtrl_18B_1009_B.Display_SOC <= 20.0F);

  /* MinMax: '<S232>/Max' incorporates:
   *  MinMax: '<S232>/Max2'
   */
  Switch1 = fmaxf(fmaxf(ZT_VehCtrl_18B_1009_B.OilMotorTemp1,
                        ZT_VehCtrl_18B_1009_B.OilMotorTemp2),
                  ZT_VehCtrl_18B_1009_B.OilMotorTemp3);

  /* RelationalOperator: '<S262>/Compare' incorporates:
   *  Constant: '<S262>/Constant'
   *  MinMax: '<S232>/Max'
   */
  ZT_VehCtrl_18B_1009_B.Compare_o = (fmaxf(fmaxf(fmaxf(fmaxf(fmaxf(Switch1,
    ZT_VehCtrl_18B_1009_B.DrvMotorTemp1), ZT_VehCtrl_18B_1009_B.DrvMotorTemp2),
    ZT_VehCtrl_18B_1009_B.DrvMotorTemp3),
    ZT_VehCtrl_18B_1009_B.Motor_Temperature),
    ZT_VehCtrl_18B_1009_B.Motor_Temperature_p) >= 50.0F);

  /* MinMax: '<S232>/Max1' incorporates:
   *  MinMax: '<S232>/Max4'
   */
  Switch = fmaxf(fmaxf(ZT_VehCtrl_18B_1009_B.OilMotorMCUTemp1,
                       ZT_VehCtrl_18B_1009_B.OilMotorMCUTemp2),
                 ZT_VehCtrl_18B_1009_B.OilMotorMCUTemp3);

  /* RelationalOperator: '<S263>/Compare' incorporates:
   *  Constant: '<S263>/Constant'
   *  MinMax: '<S232>/Max1'
   */
  ZT_VehCtrl_18B_1009_B.Compare_os = (fmaxf(fmaxf(fmaxf(fmaxf(fmaxf(Switch,
    ZT_VehCtrl_18B_1009_B.DrvMotorMCUTemp1),
    ZT_VehCtrl_18B_1009_B.DrvMotorMCUTemp2),
    ZT_VehCtrl_18B_1009_B.DrvMotorMCUTemp3),
    ZT_VehCtrl_18B_1009_B.MCU_temperature),
    ZT_VehCtrl_18B_1009_B.MCU_temperature_g) >= 60.0F);

  /* DataTypeConversion: '<S232>/Data Type Conversion3' */
  ZT_VehCtrl_18B_1009_B.VCU_CoolFanWrkIdc_b =
    (ZT_VehCtrl_18B_1009_B.TMS_FanSpeedLvl_num != 0.0F);

  /* Gain: '<S232>/Gain' */
  ZT_VehCtrl_18B_1009_B.VCU_VehSpd_kmh = 3.6F * VehSpd_mps;

  /* MinMax: '<S232>/Max10' */
  ZT_VehCtrl_18B_1009_B.VCU_OilMtSpd_rpm = fmaxf
    (ZT_VehCtrl_18B_1009_B.OilMotorSpd, ZT_VehCtrl_18B_1009_B.Motor_Speed_e);

  /* MinMax: '<S232>/Max11' */
  ZT_VehCtrl_18B_1009_B.VCU_OilMtTrq_Nm = fmaxf
    (ZT_VehCtrl_18B_1009_B.OilMotorTrq, ZT_VehCtrl_18B_1009_B.Motor_Torque_d);

  /* MinMax: '<S232>/Max12' */
  ZT_VehCtrl_18B_1009_B.VCU_OilMCUBusVolt_V = fmaxf
    (ZT_VehCtrl_18B_1009_B.OilMotorBusVolt, ZT_VehCtrl_18B_1009_B.DC_Voltage_V);

  /* MinMax: '<S232>/Max13' */
  ZT_VehCtrl_18B_1009_B.VCU_OilMCUBusCurr_A = fmaxf
    (ZT_VehCtrl_18B_1009_B.OilMotorBusCur, ZT_VehCtrl_18B_1009_B.DC_Current_A_m);

  /* MinMax: '<S232>/Max2' */
  ZT_VehCtrl_18B_1009_B.VCU_OilMtTemp_deg = fmaxf(Switch1,
    ZT_VehCtrl_18B_1009_B.Motor_Temperature_p);

  /* MinMax: '<S232>/Max3' */
  ZT_VehCtrl_18B_1009_B.VCU_DrvMtTemp_deg = fmaxf(fmaxf(fmaxf
    (ZT_VehCtrl_18B_1009_B.DrvMotorTemp1, ZT_VehCtrl_18B_1009_B.DrvMotorTemp2),
    ZT_VehCtrl_18B_1009_B.DrvMotorTemp3),
    ZT_VehCtrl_18B_1009_B.Motor_Temperature);

  /* MinMax: '<S232>/Max4' */
  ZT_VehCtrl_18B_1009_B.VCU_OilMtCtlUnitTemp_deg = fmaxf(Switch,
    ZT_VehCtrl_18B_1009_B.MCU_temperature_g);

  /* MinMax: '<S232>/Max5' */
  ZT_VehCtrl_18B_1009_B.VCU_DrvMtCtlUnitTemp_deg = fmaxf(fmaxf(fmaxf
    (ZT_VehCtrl_18B_1009_B.DrvMotorMCUTemp1,
     ZT_VehCtrl_18B_1009_B.DrvMotorMCUTemp3),
    ZT_VehCtrl_18B_1009_B.DrvMotorMCUTemp2),
    ZT_VehCtrl_18B_1009_B.MCU_temperature);

  /* MinMax: '<S232>/Max6' */
  ZT_VehCtrl_18B_1009_B.VCU_DrvMtSpd_rpm = fmaxf
    (ZT_VehCtrl_18B_1009_B.Motor_Speed, ZT_VehCtrl_18B_1009_B.DrvMotorSpd);

  /* MinMax: '<S232>/Max7' */
  ZT_VehCtrl_18B_1009_B.VCU_DrvMtTrq_Nm = fmaxf
    (ZT_VehCtrl_18B_1009_B.Motor_Torque, ZT_VehCtrl_18B_1009_B.DrvMotorTrq);

  /* MinMax: '<S232>/Max8' */
  ZT_VehCtrl_18B_1009_B.VCU_DrvMCUBusVolt_V = fmaxf
    (ZT_VehCtrl_18B_1009_B.DC_Voltage_A, ZT_VehCtrl_18B_1009_B.DrvMotorBusVolt);

  /* MinMax: '<S232>/Max9' */
  ZT_VehCtrl_18B_1009_B.VCU_DrvMCUBusCurr_A = fmaxf
    (ZT_VehCtrl_18B_1009_B.DC_Current_A, ZT_VehCtrl_18B_1009_B.DrvMotorBusCur);

  /* Saturate: '<S232>/Saturation1' */
  if (ZT_VehCtrl_18B_1009_B.BMS_BatteryPower > 1000.0F) {
    ZT_VehCtrl_18B_1009_B.VCU_RegenPwr_kw = 1000.0F;
  } else if (ZT_VehCtrl_18B_1009_B.BMS_BatteryPower < 0.0F) {
    ZT_VehCtrl_18B_1009_B.VCU_RegenPwr_kw = 0.0F;
  } else {
    ZT_VehCtrl_18B_1009_B.VCU_RegenPwr_kw =
      ZT_VehCtrl_18B_1009_B.BMS_BatteryPower;
  }

  /* End of Saturate: '<S232>/Saturation1' */

  /* Chart: '<S2>/Chart1' incorporates:
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  if (ZT_VehCtrl_18B_1009_DW.is_active_c23_ZT_VehCtrl_18B_1009 == 0U) {
    ZT_VehCtrl_18B_1009_DW.is_active_c23_ZT_VehCtrl_18B_1009 = 1U;
    ZT_VehCtrl_18B_1009_DW.is_c23_ZT_VehCtrl_18B_1009 =
      ZT_VehCtrl_18B_1009_IN_IDLE;
    rtb_Flg_l = 0;
  } else {
    switch (ZT_VehCtrl_18B_1009_DW.is_c23_ZT_VehCtrl_18B_1009) {
     case ZT_VehCtrl_18B_1009_IN_CS1:
      rtb_Flg_l = 1;
      if (ZT_VehCtrl_18B_1009_DW.cnt_j > 20.0) {
        ZT_VehCtrl_18B_1009_DW.is_c23_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_CS5;
        rtb_Flg_l = 2;
        ZT_VehCtrl_18B_1009_DW.cnt_j = 0.0;
      } else {
        ZT_VehCtrl_18B_1009_DW.cnt_j++;
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_CS5:
      rtb_Flg_l = 2;
      if (ZT_VehCtrl_18B_1009_DW.cnt_j > 20.0) {
        ZT_VehCtrl_18B_1009_DW.is_c23_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_Done;
        rtb_Flg_l = 9;
      } else {
        ZT_VehCtrl_18B_1009_DW.cnt_j++;
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_Done:
      rtb_Flg_l = 9;
      if (VCU_Mode == 0) {
        ZT_VehCtrl_18B_1009_DW.is_c23_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_IDLE;
        rtb_Flg_l = 0;
      }
      break;

     default:
      rtb_Flg_l = 0;
      if (VCU_Mode == 1) {
        ZT_VehCtrl_18B_1009_DW.is_c23_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_CS1;
        rtb_Flg_l = 1;
        ZT_VehCtrl_18B_1009_DW.cnt_j = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart1' */

  /* Chart: '<S2>/Chart2' incorporates:
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  if (ZT_VehCtrl_18B_1009_DW.is_active_c24_ZT_VehCtrl_18B_1009 == 0U) {
    ZT_VehCtrl_18B_1009_DW.is_active_c24_ZT_VehCtrl_18B_1009 = 1U;
    ZT_VehCtrl_18B_1009_DW.is_c24_ZT_VehCtrl_18B_1009 =
      ZT_VehCtrl_18B_1009_IN_IDLE;
    rtb_Flg = 0;
  } else {
    switch (ZT_VehCtrl_18B_1009_DW.is_c24_ZT_VehCtrl_18B_1009) {
     case ZT_VehCtrl_18B_1009_IN_CS2:
      rtb_Flg = 1;
      if (ZT_VehCtrl_18B_1009_DW.cnt_m > 20.0) {
        ZT_VehCtrl_18B_1009_DW.is_c24_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_CS3;
        rtb_Flg = 2;
        ZT_VehCtrl_18B_1009_DW.cnt_m = 0.0;
      } else {
        ZT_VehCtrl_18B_1009_DW.cnt_m++;
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_CS3:
      rtb_Flg = 2;
      if (ZT_VehCtrl_18B_1009_DW.cnt_m > 20.0) {
        ZT_VehCtrl_18B_1009_DW.is_c24_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_Done;
        rtb_Flg = 9;
      } else {
        ZT_VehCtrl_18B_1009_DW.cnt_m++;
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_Done:
      rtb_Flg = 9;
      if (VCU_Mode == 0) {
        ZT_VehCtrl_18B_1009_DW.is_c24_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_IDLE;
        rtb_Flg = 0;
      }
      break;

     default:
      rtb_Flg = 0;
      if (VCU_Mode == 1) {
        ZT_VehCtrl_18B_1009_DW.is_c24_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_CS2;
        rtb_Flg = 1;
        ZT_VehCtrl_18B_1009_DW.cnt_m = 0.0;
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
  Init_flg_SPI = (uint8_T)((rtb_Flg_l == 9) && (rtb_Flg == 9));

  /* Chart: '<S2>/Chart' incorporates:
   *  DataStoreRead: '<S2>/Data Store Read1'
   *  DataStoreRead: '<S2>/Data Store Read2'
   */
  if (ZT_VehCtrl_18B_1009_DW.is_active_c22_ZT_VehCtrl_18B_1009 == 0U) {
    ZT_VehCtrl_18B_1009_DW.is_active_c22_ZT_VehCtrl_18B_1009 = 1U;
    ZT_VehCtrl_18B_1009_DW.is_c22_ZT_VehCtrl_18B_1009 =
      ZT_VehCtrl_18B_1009_IN_Idle;
    rtb_Flg_k = 0;
  } else {
    switch (ZT_VehCtrl_18B_1009_DW.is_c22_ZT_VehCtrl_18B_1009) {
     case ZT_VehCtrl_18B_1009_IN_Idle:
      rtb_Flg_k = 0;
      if (ResetFlg == 0) {
        ZT_VehCtrl_18B_1009_DW.is_c22_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_Initialize;
        rtb_Flg_k = 1;
      }
      break;

     case ZT_VehCtrl_18B_1009_IN_Initialize:
      rtb_Flg_k = 1;
      if (Init_flg_SPI > 0) {
        ZT_VehCtrl_18B_1009_DW.is_c22_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_Normal;
        rtb_Flg_k = 2;
      } else {
        if (ResetFlg == 1) {
          ZT_VehCtrl_18B_1009_DW.is_c22_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_Idle;
          rtb_Flg_k = 0;
        }
      }
      break;

     default:
      rtb_Flg_k = 2;
      if (ResetFlg == 1) {
        ZT_VehCtrl_18B_1009_DW.is_c22_ZT_VehCtrl_18B_1009 =
          ZT_VehCtrl_18B_1009_IN_Idle;
        rtb_Flg_k = 0;
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart' */

  /* If: '<S2>/If1' */
  if (rtb_Flg_l == 1) {
    /* Outputs for IfAction SubSystem: '<S2>/CS1 LS' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Chart: '<S10>/Chart' */
    if (ZT_VehCtrl_18B_1009_DW.is_active_c11_ZT_VehCtrl_18B_1009 == 0U) {
      ZT_VehCtrl_18B_1009_DW.is_active_c11_ZT_VehCtrl_18B_1009 = 1U;
      ZT_VehCtrl_18B_1009_DW.is_c11_ZT_VehCtrl_18B_1009 =
        ZT_VehCtrl_18B_1009_IN_clear;
      rtb_high_k = 135;
      rtb_low_d = 1;
      ZT_VehCtrl_18B_1009_DW.cnt_b = 0.0;
    } else {
      switch (ZT_VehCtrl_18B_1009_DW.is_c11_ZT_VehCtrl_18B_1009) {
       case ZT_VehCtrl_18B_1009_IN_clear:
        rtb_high_k = 135;
        rtb_low_d = 1;
        if (ZT_VehCtrl_18B_1009_DW.cnt_b > 5.0) {
          ZT_VehCtrl_18B_1009_DW.is_c11_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_en;
          rtb_high_k = 193;
          rtb_low_d = 0;
          ZT_VehCtrl_18B_1009_DW.cnt_b = 0.0;
        } else {
          ZT_VehCtrl_18B_1009_DW.cnt_b++;
        }
        break;

       case ZT_VehCtrl_18B_1009_IN_config:
        rtb_high_k = 199;
        rtb_low_d = 129;
        ZT_VehCtrl_18B_1009_DW.cnt_b++;
        break;

       default:
        rtb_high_k = 193;
        rtb_low_d = 0;
        if (ZT_VehCtrl_18B_1009_DW.cnt_b > 5.0) {
          ZT_VehCtrl_18B_1009_DW.is_c11_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_config;
          rtb_high_k = 199;
          rtb_low_d = 129;
          ZT_VehCtrl_18B_1009_DW.cnt_b = 0.0;
        } else {
          ZT_VehCtrl_18B_1009_DW.cnt_b++;
        }
        break;
      }
    }

    /* End of Chart: '<S10>/Chart' */

    /* S-Function (spi_mpc_master_transfer): '<S10>/SPI_Master_Transfer_To1' */
    {
      DSPI_UpdateCS(0, 5);
      DSPI_MasterTransfer(0, &ZT_VehCtrl_18B_1009_B.VectorConcatenate1_m[0],
                          &ZT_VehCtrl_18B_1009_B.SPI_Master_Transfer_To1_g[0], 1);
    }

    /* DataTypeConversion: '<S10>/Data Type Conversion' */
    ZT_VehCtrl_18B_1009_B.VectorConcatenate1_m[0] = (uint8_T)(int32_T)fmod
      (rtb_high_k, 256.0);

    /* DataTypeConversion: '<S10>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.VectorConcatenate1_m[1] = (uint8_T)(int32_T)fmod
      (rtb_low_d, 256.0);

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
      DSPI_MasterTransfer(3, &ZT_VehCtrl_18B_1009_ConstB.VectorConcatenate2[0],
                          &ZT_VehCtrl_18B_1009_B.SPI_Master_Transfer_To2_h[0], 1);
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
    if (ZT_VehCtrl_18B_1009_DW.is_active_c14_ZT_VehCtrl_18B_1009 == 0U) {
      ZT_VehCtrl_18B_1009_DW.is_active_c14_ZT_VehCtrl_18B_1009 = 1U;
      ZT_VehCtrl_18B_1009_DW.is_c14_ZT_VehCtrl_18B_1009 =
        ZT_VehCtrl_18B_1009_IN_ConfigA;
      ZT_VehCtrl_18B_1009_B.high = 90.0;
      ZT_VehCtrl_18B_1009_B.low = 10.0;
      ZT_VehCtrl_18B_1009_DW.cnt = 0.0;
    } else {
      if (ZT_VehCtrl_18B_1009_DW.is_c14_ZT_VehCtrl_18B_1009 ==
          ZT_VehCtrl_18B_1009_IN_ConfigA) {
        if (ZT_VehCtrl_18B_1009_DW.cnt > 4.0) {
          ZT_VehCtrl_18B_1009_DW.is_c14_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_en_a;
          ZT_VehCtrl_18B_1009_B.high = 96.0;
          ZT_VehCtrl_18B_1009_B.low = 0.0;
          ZT_VehCtrl_18B_1009_DW.cnt = 0.0;
        } else {
          ZT_VehCtrl_18B_1009_DW.cnt++;
        }
      }
    }

    /* End of Chart: '<S12>/Chart' */

    /* S-Function (spi_mpc_master_transfer): '<S12>/SPI_Master_Transfer_To2' */
    {
      DSPI_UpdateCS(3, 3);
      DSPI_MasterTransfer(3, &ZT_VehCtrl_18B_1009_B.VectorConcatenate1_a[0],
                          &ZT_VehCtrl_18B_1009_B.SPI_Master_Transfer_To2_a[0], 1);
    }

    /* DataTypeConversion: '<S12>/Data Type Conversion2' */
    tmp = floor(ZT_VehCtrl_18B_1009_B.high);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    ZT_VehCtrl_18B_1009_B.VectorConcatenate1_a[0] = (uint8_T)(tmp < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S12>/Data Type Conversion2' */

    /* DataTypeConversion: '<S12>/Data Type Conversion3' */
    tmp = floor(ZT_VehCtrl_18B_1009_B.low);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    ZT_VehCtrl_18B_1009_B.VectorConcatenate1_a[1] = (uint8_T)(tmp < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S12>/Data Type Conversion3' */
    /* End of Outputs for SubSystem: '<S2>/CS3 LS' */
  }

  /* End of If: '<S2>/If3' */

  /* If: '<S2>/If2' */
  if (rtb_Flg_l == 2) {
    /* Outputs for IfAction SubSystem: '<S2>/CS5 LS' incorporates:
     *  ActionPort: '<S13>/Action Port'
     */
    /* Chart: '<S13>/Chart' */
    if (ZT_VehCtrl_18B_1009_DW.is_active_c21_ZT_VehCtrl_18B_1009 == 0U) {
      ZT_VehCtrl_18B_1009_DW.is_active_c21_ZT_VehCtrl_18B_1009 = 1U;
      ZT_VehCtrl_18B_1009_DW.is_c21_ZT_VehCtrl_18B_1009 =
        ZT_VehCtrl_18B_1009_IN_clear;
      rtb_Flg_l = 135;
      rtb_Flg = 1;
      ZT_VehCtrl_18B_1009_DW.cnt_p = 0.0;
    } else {
      switch (ZT_VehCtrl_18B_1009_DW.is_c21_ZT_VehCtrl_18B_1009) {
       case ZT_VehCtrl_18B_1009_IN_clear:
        rtb_Flg_l = 135;
        rtb_Flg = 1;
        if (ZT_VehCtrl_18B_1009_DW.cnt_p > 5.0) {
          ZT_VehCtrl_18B_1009_DW.is_c21_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_en;
          rtb_Flg_l = 193;
          rtb_Flg = 0;
          ZT_VehCtrl_18B_1009_DW.cnt_p = 0.0;
        } else {
          ZT_VehCtrl_18B_1009_DW.cnt_p++;
        }
        break;

       case ZT_VehCtrl_18B_1009_IN_config:
        rtb_Flg_l = 199;
        rtb_Flg = 129;
        break;

       default:
        rtb_Flg_l = 193;
        rtb_Flg = 0;
        if (ZT_VehCtrl_18B_1009_DW.cnt_p > 5.0) {
          ZT_VehCtrl_18B_1009_DW.is_c21_ZT_VehCtrl_18B_1009 =
            ZT_VehCtrl_18B_1009_IN_config;
          rtb_Flg_l = 199;
          rtb_Flg = 129;
          ZT_VehCtrl_18B_1009_DW.cnt_p = 0.0;
        } else {
          ZT_VehCtrl_18B_1009_DW.cnt_p++;
        }
        break;
      }
    }

    /* End of Chart: '<S13>/Chart' */

    /* S-Function (spi_mpc_master_transfer): '<S13>/SPI_Master_Transfer_To1' */
    {
      DSPI_UpdateCS(0, 1);
      DSPI_MasterTransfer(0, &ZT_VehCtrl_18B_1009_B.VectorConcatenate1_n[0],
                          &ZT_VehCtrl_18B_1009_B.SPI_Master_Transfer_To1_c[0], 1);
    }

    /* DataTypeConversion: '<S13>/Data Type Conversion' */
    ZT_VehCtrl_18B_1009_B.VectorConcatenate1_n[0] = (uint8_T)(int32_T)fmod
      (rtb_Flg_l, 256.0);

    /* DataTypeConversion: '<S13>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.VectorConcatenate1_n[1] = (uint8_T)(int32_T)fmod
      (rtb_Flg, 256.0);

    /* End of Outputs for SubSystem: '<S2>/CS5 LS' */
  }

  /* End of If: '<S2>/If2' */

  /* S-Function (gpio_mpc_output): '<S3>/HS1' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion_cp) {
    PINS_DRV_SetPins(PTF, (1 << 6));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 6));
  }

  /* S-Function (gpio_mpc_output): '<S3>/HS4' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion_cp) {
    PINS_DRV_SetPins(PTA, (1 << 13));
  } else {
    PINS_DRV_ClearPins(PTA, (1 << 13));
  }

  /* Outputs for Triggered SubSystem: '<S6>/ACU' incorporates:
   *  TriggerPort: '<S184>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.ACU_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* Switch: '<S202>/Switch' incorporates:
     *  Constant: '<S202>/Constant1'
     *  Constant: '<S202>/Constant2'
     *  DataStoreRead: '<S184>/Data Store Read4'
     */
    if (DcacAcCmd > 0.0F) {
      ZT_VehCtrl_18B_1009_B.Switch_e = 85.0F;
    } else {
      ZT_VehCtrl_18B_1009_B.Switch_e = 170.0F;
    }

    /* End of Switch: '<S202>/Switch' */

    /* Switch: '<S201>/Switch' incorporates:
     *  Constant: '<S201>/Constant1'
     *  Constant: '<S201>/Constant2'
     *  DataStoreRead: '<S184>/Data Store Read2'
     */
    if (DcacEpsCmd > 0.0F) {
      ZT_VehCtrl_18B_1009_B.Switch_f = 85.0F;
    } else {
      ZT_VehCtrl_18B_1009_B.Switch_f = 170.0F;
    }

    /* End of Switch: '<S201>/Switch' */

    /* Switch: '<S200>/Switch' incorporates:
     *  Constant: '<S200>/Constant1'
     *  Constant: '<S200>/Constant2'
     *  DataStoreRead: '<S184>/Data Store Read3'
     */
    if (DcacEpsMode > 0.0F) {
      ZT_VehCtrl_18B_1009_B.Switch_ex = 85.0F;
    } else {
      ZT_VehCtrl_18B_1009_B.Switch_ex = 170.0F;
    }

    /* End of Switch: '<S200>/Switch' */

    /* Switch: '<S199>/Switch' incorporates:
     *  Constant: '<S199>/Constant1'
     *  Constant: '<S199>/Constant2'
     */
    if (ZT_VehCtrl_18B_1009_B.DcdcCmd > 0.0) {
      ZT_VehCtrl_18B_1009_B.Switch_ef = 85.0F;
    } else {
      ZT_VehCtrl_18B_1009_B.Switch_ef = 170.0F;
    }

    /* End of Switch: '<S199>/Switch' */

    /* S-Function (scanpack): '<S184>/VCU_ACU1' */
    /* S-Function (scanpack): '<S184>/VCU_ACU1' */
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.ID = 201824935U;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 32
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.Switch_e;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[4] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 16
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.Switch_f;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[2] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 24
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.Switch_ex;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[3] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 0
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.Switch_ef;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[0] | (uint8_T)(packedValue);
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S184>/FCAN_Send_ID_0x0C079AA7' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU_ACU1.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU_ACU1.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 51);
      FLEXCAN_DRV_ConfigTxMb(0, 51, &txInfo, 0x0C079AA7);
      FLEXCAN_DRV_Send(0, 51, &txInfo, 0x0C079AA7, data);
    }

    /* DataStoreWrite: '<S184>/Data Store Write' incorporates:
     *  Constant: '<S184>/Constant'
     *  DataStoreRead: '<S184>/Data Store Read'
     *  Sum: '<S184>/Add'
     */
    Cnt_ACU_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/ACU' */

  /* Outputs for Triggered SubSystem: '<S6>/BMS' incorporates:
   *  TriggerPort: '<S185>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.BMS_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* DataTypeConversion: '<S185>/Data Type Conversion' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion_g =
      (ZT_VehCtrl_18B_1009_B.VCU_PowerOnReq != 0.0);

    /* DataTypeConversion: '<S185>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion1_i =
      (ZT_VehCtrl_18B_1009_B.VCU_UrgencyCutOffPowerReq != 0.0);

    /* S-Function (scanpack): '<S185>/VCU_BMS' */
    /* S-Function (scanpack): '<S185>/VCU_BMS' */
    ZT_VehCtrl_18B_1009_B.VCU_BMS.ID = 352U;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Extended = 0U;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 0
       *  length                  = 1
       *  desiredSignalByteLayout = BIGENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.DataTypeConversion_g);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x1U));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 1
       *  length                  = 1
       *  desiredSignalByteLayout = BIGENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.DataTypeConversion1_i);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S185>/FCAN_Send_ID_0x160' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU_BMS.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_STD,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU_BMS.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 14);
      FLEXCAN_DRV_ConfigTxMb(0, 14, &txInfo, 0x160);
      FLEXCAN_DRV_Send(0, 14, &txInfo, 0x160, data);
    }

    /* DataStoreWrite: '<S185>/Data Store Write' incorporates:
     *  Constant: '<S185>/Constant2'
     *  DataStoreRead: '<S185>/Data Store Read'
     *  Sum: '<S185>/Add'
     */
    Cnt_BMS_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/BMS' */

  /* Outputs for Triggered SubSystem: '<S6>/BRS' incorporates:
   *  TriggerPort: '<S186>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.BRS_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* DataTypeConversion: '<S186>/Data Type Conversion3' incorporates:
     *  DataStoreRead: '<S186>/Data Store Read1'
     */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion3_b = Cnt_BRS_OUT;

    /* DataTypeConversion: '<S186>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion2_c =
      (ZT_VehCtrl_18B_1009_B.OnOffCmd != 0.0);

    /* S-Function (scanpack): '<S186>/VCU2BRS' */
    /* S-Function (scanpack): '<S186>/VCU2BRS' */
    ZT_VehCtrl_18B_1009_B.VCU2BRS.ID = 217123239U;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 56
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion3_b;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[7] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 16
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion_c;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[2] | (uint8_T)((uint16_T)
                (packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[3] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 46
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.DataTypeConversion2_c);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[5] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 0
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion1_f;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[0] | (uint8_T)((uint16_T)
                (packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[1] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S186>/FCAN_Send_ID_0x0CF109A7' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2BRS.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2BRS.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 23);
      FLEXCAN_DRV_ConfigTxMb(0, 23, &txInfo, 0x0CF109A7);
      FLEXCAN_DRV_Send(0, 23, &txInfo, 0x0CF109A7, data);
    }

    /* DataStoreWrite: '<S186>/Data Store Write' incorporates:
     *  Constant: '<S186>/Constant4'
     *  DataStoreRead: '<S186>/Data Store Read'
     *  Sum: '<S186>/Add'
     */
    Cnt_BRS_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/BRS' */

  /* Outputs for Triggered SubSystem: '<S6>/DCDC' incorporates:
   *  TriggerPort: '<S187>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.DCDC_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* DataTypeConversion: '<S187>/Data Type Conversion' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion_e = (real32_T)
      ZT_VehCtrl_18B_1009_B.VCU_DCDC1_En;

    /* S-Function (scanpack): '<S187>/VCU_DCDC1' */
    /* S-Function (scanpack): '<S187>/VCU_DCDC1' */
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.ID = 402690000U;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 0
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion_e;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x3U));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S187>/FCAN_Send_ID_0x18008FD0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU_DCDC1.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 47);
      FLEXCAN_DRV_ConfigTxMb(0, 47, &txInfo, 0x18008FD0);
      FLEXCAN_DRV_Send(0, 47, &txInfo, 0x18008FD0, data);
    }

    /* DataStoreWrite: '<S187>/Data Store Write' incorporates:
     *  Constant: '<S187>/Constant'
     *  DataStoreRead: '<S187>/Data Store Read'
     *  Sum: '<S187>/Add'
     */
    Cnt_DCDC_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/DCDC' */

  /* Outputs for Triggered SubSystem: '<S6>/HVC' incorporates:
   *  TriggerPort: '<S189>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.HVC_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* DataTypeConversion: '<S189>/Data Type Conversion' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion_ma =
      (ZT_VehCtrl_18B_1009_B.EDrv1_PowOnCmd != 0.0);

    /* DataTypeConversion: '<S189>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion3_c =
      (ZT_VehCtrl_18B_1009_B.EDrv2_PowOnCmd != 0.0);

    /* DataTypeConversion: '<S189>/Data Type Conversion15' incorporates:
     *  DataStoreRead: '<S189>/Data Store Read'
     */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion15 = Cnt_HVC_OUT;

    /* DataStoreRead: '<S189>/Data Store Read9' */
    ZT_VehCtrl_18B_1009_B.DataStoreRead9_h = PTC_PowOnCmd;

    /* DataStoreRead: '<S189>/Data Store Read8' */
    ZT_VehCtrl_18B_1009_B.DataStoreRead8 = PaxAC_PowOnCmd;

    /* S-Function (scanpack): '<S189>/Ctrl_HVC' */
    /* S-Function (scanpack): '<S189>/Ctrl_HVC' */
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.ID = 402694405U;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Length = 8U;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Remote = 0;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 0
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.DataTypeConversion_ma);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0] =
                ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x1U));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 2
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.DataTypeConversion3_c);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0] =
                ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 60
       *  length                  = 4
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion15;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(15)) {
            packedValue = (uint8_T) 15;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[7] =
                ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[7] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0xFU) << 4));
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 6
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.DataStoreRead9_h);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0] =
                ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 4
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.DataStoreRead8);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0] =
                ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S189>/FCAN_Send_ID_0x1800A105' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.Ctrl_HVC.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 48);
      FLEXCAN_DRV_ConfigTxMb(0, 48, &txInfo, 0x1800A105);
      FLEXCAN_DRV_Send(0, 48, &txInfo, 0x1800A105, data);
    }

    /* DataStoreWrite: '<S189>/Data Store Write1' incorporates:
     *  Constant: '<S189>/Constant6'
     *  DataStoreRead: '<S189>/Data Store Read1'
     *  Sum: '<S189>/Add1'
     */
    Cnt_HVC_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/HVC' */

  /* Outputs for Triggered SubSystem: '<S6>/ICU1 ' incorporates:
   *  TriggerPort: '<S190>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.ICU1_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (scanpack): '<S190>/VCU2ICUInfor1' incorporates:
     *  Constant: '<S190>/Constant1'
     *  Constant: '<S190>/Constant10'
     *  Constant: '<S190>/Constant11'
     *  Constant: '<S190>/Constant2'
     *  Constant: '<S190>/Constant20'
     *  Constant: '<S190>/Constant3'
     *  Constant: '<S190>/Constant4'
     *  Constant: '<S190>/Constant5'
     *  Constant: '<S190>/Constant6'
     *  Constant: '<S190>/Constant7'
     *  Constant: '<S190>/Constant8'
     *  Constant: '<S190>/Constant9'
     */
    /* S-Function (scanpack): '<S190>/VCU2ICUInfor1' */
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.ID = 402729168U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 16
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.Display_SOC;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[2] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 32
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.Compare_f);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x1U));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 39
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 44
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.VCU_CoolFanWrkIdc_b);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 56
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.TMS_FanSpeedLvl_num;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[7] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 5 ------------------
       *  startBit                = 43
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
            }
          }
        }
      }

      /* --------------- START Packing signal 6 ------------------
       *  startBit                = 5
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x3U) << 5));
            }
          }
        }
      }

      /* --------------- START Packing signal 7 ------------------
       *  startBit                = 6
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.ShutDown);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
            }
          }
        }
      }

      /* --------------- START Packing signal 8 ------------------
       *  startBit                = 24
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = Gear;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[3] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 9 ------------------
       *  startBit                = 46
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
            }
          }
        }
      }

      /* --------------- START Packing signal 10 ------------------
       *  startBit                = 33
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
            }
          }
        }
      }

      /* --------------- START Packing signal 11 ------------------
       *  startBit                = 3
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
            }
          }
        }
      }

      /* --------------- START Packing signal 12 ------------------
       *  startBit                = 35
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.Compare_os);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
            }
          }
        }
      }

      /* --------------- START Packing signal 13 ------------------
       *  startBit                = 36
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.Compare_o);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
            }
          }
        }
      }

      /* --------------- START Packing signal 14 ------------------
       *  startBit                = 0
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.VCU_Pst_b);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x1U));
            }
          }
        }
      }

      /* --------------- START Packing signal 15 ------------------
       *  startBit                = 2
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
            }
          }
        }
      }

      /* --------------- START Packing signal 16 ------------------
       *  startBit                = 45
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
            }
          }
        }
      }

      /* --------------- START Packing signal 17 ------------------
       *  startBit                = 1
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.Compare_e);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
            }
          }
        }
      }

      /* --------------- START Packing signal 18 ------------------
       *  startBit                = 48
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[6] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[6] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 19 ------------------
       *  startBit                = 38
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (BodyLoadSw);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
            }
          }
        }
      }

      /* --------------- START Packing signal 20 ------------------
       *  startBit                = 34
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
            }
          }
        }
      }

      /* --------------- START Packing signal 21 ------------------
       *  startBit                = 37
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[4] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
            }
          }
        }
      }

      /* --------------- START Packing signal 22 ------------------
       *  startBit                = 8
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_VehSpd_kmh;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[1] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 23 ------------------
       *  startBit                = 47
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[5] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
            }
          }
        }
      }

      /* --------------- START Packing signal 24 ------------------
       *  startBit                = 7
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.Ready);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S190>/FCAN_Send_ID_0x180128D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2ICUInfor1.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 16);
      FLEXCAN_DRV_ConfigTxMb(0, 16, &txInfo, 0x180128D0);
      FLEXCAN_DRV_Send(0, 16, &txInfo, 0x180128D0, data);
    }

    /* S-Function (scanpack): '<S190>/VCU2ICUInfor3' incorporates:
     *  Constant: '<S190>/Constant12'
     *  Constant: '<S190>/Constant13'
     *  Constant: '<S190>/Constant14'
     *  Constant: '<S190>/Constant15'
     *  Constant: '<S190>/Constant16'
     */
    /* S-Function (scanpack): '<S190>/VCU2ICUInfor3' */
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.ID = 402860240U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 48
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 0.1
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.Vol_Bat;

          /* no offset to apply */
          result = result * (1 / 0.1F);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[6] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[6] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[7] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 24
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[3] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 32
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[4] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 40
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.FaultMax;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[5] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 0
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[0] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 5 ------------------
       *  startBit                = 8
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[1] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 6 ------------------
       *  startBit                = 16
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[2] | (uint8_T)
                (packedValue);
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S190>/FCAN_Send_ID_0x180328D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2ICUInfor3.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 18);
      FLEXCAN_DRV_ConfigTxMb(0, 18, &txInfo, 0x180328D0);
      FLEXCAN_DRV_Send(0, 18, &txInfo, 0x180328D0, data);
    }

    /* S-Function (scanpack): '<S190>/VCU2ICUInfor4' incorporates:
     *  Constant: '<S190>/Constant17'
     */
    /* S-Function (scanpack): '<S190>/VCU2ICUInfor4' */
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.ID = 403777744U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 48
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -40.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.Statistic_TemperatureHTMax;

          /* no factor to apply */
          result = result - -40.0F;
          outValue = result;
        }

        {
          int8_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (127)) {
            packedValue = 127;
          } else if (scaledValue < (int32_T)((-(127)-1))) {
            packedValue = (-(127)-1);
          } else {
            packedValue = (int8_T) (scaledValue);
          }

          {
            uint8_T* tempValuePtr = (uint8_T*)&packedValue;
            uint8_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[6] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[6] | (uint8_T)
                (tempValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 40
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -40.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.Statistic_TemperatureLTMax;

          /* no factor to apply */
          result = result - -40.0F;
          outValue = result;
        }

        {
          int8_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (127)) {
            packedValue = 127;
          } else if (scaledValue < (int32_T)((-(127)-1))) {
            packedValue = (-(127)-1);
          } else {
            packedValue = (int8_T) (scaledValue);
          }

          {
            uint8_T* tempValuePtr = (uint8_T*)&packedValue;
            uint8_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[5] | (uint8_T)
                (tempValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 16
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -40.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = RadiatorTempOut;

          /* no factor to apply */
          result = result - -40.0F;
          outValue = result;
        }

        {
          int8_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (127)) {
            packedValue = 127;
          } else if (scaledValue < (int32_T)((-(127)-1))) {
            packedValue = (-(127)-1);
          } else {
            packedValue = (int8_T) (scaledValue);
          }

          {
            uint8_T* tempValuePtr = (uint8_T*)&packedValue;
            uint8_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[2] | (uint8_T)
                (tempValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 32
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -40.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_DrvMtCtlUnitTemp_deg;

          /* no factor to apply */
          result = result - -40.0F;
          outValue = result;
        }

        {
          int8_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (127)) {
            packedValue = 127;
          } else if (scaledValue < (int32_T)((-(127)-1))) {
            packedValue = (-(127)-1);
          } else {
            packedValue = (int8_T) (scaledValue);
          }

          {
            uint8_T* tempValuePtr = (uint8_T*)&packedValue;
            uint8_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[4] | (uint8_T)
                (tempValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 24
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -40.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_DrvMtTemp_deg;

          /* no factor to apply */
          result = result - -40.0F;
          outValue = result;
        }

        {
          int8_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (127)) {
            packedValue = 127;
          } else if (scaledValue < (int32_T)((-(127)-1))) {
            packedValue = (-(127)-1);
          } else {
            packedValue = (int8_T) (scaledValue);
          }

          {
            uint8_T* tempValuePtr = (uint8_T*)&packedValue;
            uint8_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[3] | (uint8_T)
                (tempValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 5 ------------------
       *  startBit                = 8
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -40.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_OilMtCtlUnitTemp_deg;

          /* no factor to apply */
          result = result - -40.0F;
          outValue = result;
        }

        {
          int8_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (127)) {
            packedValue = 127;
          } else if (scaledValue < (int32_T)((-(127)-1))) {
            packedValue = (-(127)-1);
          } else {
            packedValue = (int8_T) (scaledValue);
          }

          {
            uint8_T* tempValuePtr = (uint8_T*)&packedValue;
            uint8_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[1] | (uint8_T)
                (tempValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 6 ------------------
       *  startBit                = 0
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -40.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_OilMtTemp_deg;

          /* no factor to apply */
          result = result - -40.0F;
          outValue = result;
        }

        {
          int8_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (127)) {
            packedValue = 127;
          } else if (scaledValue < (int32_T)((-(127)-1))) {
            packedValue = (-(127)-1);
          } else {
            packedValue = (int8_T) (scaledValue);
          }

          {
            uint8_T* tempValuePtr = (uint8_T*)&packedValue;
            uint8_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[0] | (uint8_T)
                (tempValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 7 ------------------
       *  startBit                = 56
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[7] | (uint8_T)
                (packedValue);
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S190>/FCAN_Send_ID_0x181128D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2ICUInfor4.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 19);
      FLEXCAN_DRV_ConfigTxMb(0, 19, &txInfo, 0x181128D0);
      FLEXCAN_DRV_Send(0, 19, &txInfo, 0x181128D0, data);
    }

    /* S-Function (scanpack): '<S190>/VCU2ICUInfor5' */
    /* S-Function (scanpack): '<S190>/VCU2ICUInfor5' */
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.ID = 403843280U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 48
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -1000.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_DrvMtSpd_rpm;

          /* no factor to apply */
          result = result - -1000.0F;
          outValue = result;
        }

        {
          int16_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (32767)) {
            packedValue = 32767;
          } else if (scaledValue < (int32_T)((-(32767)-1))) {
            packedValue = (-(32767)-1);
          } else {
            packedValue = (int16_T) (scaledValue);
          }

          {
            uint16_T* tempValuePtr = (uint16_T*)&packedValue;
            uint16_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[6] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[6] | (uint8_T)
                ((uint16_T)(tempValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[7] | (uint8_T)
                ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 32
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_DrvMtTrq_Nm;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[4] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[5] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 0
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -30000.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_DrvMCUBusVolt_V;

          /* no factor to apply */
          result = result - -30000.0F;
          outValue = result;
        }

        {
          int16_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (32767)) {
            packedValue = 32767;
          } else if (scaledValue < (int32_T)((-(32767)-1))) {
            packedValue = (-(32767)-1);
          } else {
            packedValue = (int16_T) (scaledValue);
          }

          {
            uint16_T* tempValuePtr = (uint16_T*)&packedValue;
            uint16_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[0] | (uint8_T)
                ((uint16_T)(tempValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[1] | (uint8_T)
                ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 16
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_DrvMCUBusCurr_A;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[2] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[3] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S190>/FCAN_Send_ID_0x181228D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2ICUInfor5.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 20);
      FLEXCAN_DRV_ConfigTxMb(0, 20, &txInfo, 0x181228D0);
      FLEXCAN_DRV_Send(0, 20, &txInfo, 0x181228D0, data);
    }

    /* S-Function (scanpack): '<S190>/VCU2ICUInfor6' */
    /* S-Function (scanpack): '<S190>/VCU2ICUInfor6' */
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.ID = 403908816U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 48
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 1.0
       *  offset                  = -1000.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_OilMtSpd_rpm;

          /* no factor to apply */
          result = result - -1000.0F;
          outValue = result;
        }

        {
          int16_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (32767)) {
            packedValue = 32767;
          } else if (scaledValue < (int32_T)((-(32767)-1))) {
            packedValue = (-(32767)-1);
          } else {
            packedValue = (int16_T) (scaledValue);
          }

          {
            uint16_T* tempValuePtr = (uint16_T*)&packedValue;
            uint16_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[6] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[6] | (uint8_T)
                ((uint16_T)(tempValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[7] | (uint8_T)
                ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 32
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_OilMtTrq_Nm;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[4] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[5] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 0
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_OilMCUBusVolt_V;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[0] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[1] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 16
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_OilMCUBusCurr_A;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[2] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[3] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S190>/FCAN_Send_ID_0x181328D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2ICUInfor6.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 21);
      FLEXCAN_DRV_ConfigTxMb(0, 21, &txInfo, 0x181328D0);
      FLEXCAN_DRV_Send(0, 21, &txInfo, 0x181328D0, data);
    }

    /* S-Function (scanpack): '<S190>/VCU2ICUInfor7' incorporates:
     *  Constant: '<S190>/Constant18'
     *  Constant: '<S190>/Constant19'
     */
    /* S-Function (scanpack): '<S190>/VCU2ICUInfor7' */
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.ID = 403974352U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 0
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 0.1
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_DisChargePwr_kw;

          /* no offset to apply */
          result = result * (1 / 0.1F);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[0] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[1] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 48
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[6] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[6] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[7] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 16
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 0.1
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.VCU_RegenPwr_kw;

          /* no offset to apply */
          result = result * (1 / 0.1F);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[2] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[3] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 32
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = 0.0F;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[4] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[5] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S190>/FCAN_Send_ID_0x181428D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2ICUInfor7.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 22);
      FLEXCAN_DRV_ConfigTxMb(0, 22, &txInfo, 0x181428D0);
      FLEXCAN_DRV_Send(0, 22, &txInfo, 0x181428D0, data);
    }

    /* DataStoreWrite: '<S190>/Data Store Write' incorporates:
     *  Constant: '<S190>/Constant'
     *  DataStoreRead: '<S190>/Data Store Read'
     *  Sum: '<S190>/Add'
     */
    Cnt_ICU_OUT1++;
  }

  /* End of Outputs for SubSystem: '<S6>/ICU1 ' */

  /* Outputs for Triggered SubSystem: '<S6>/ICU2' incorporates:
   *  TriggerPort: '<S191>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.ICU2_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator6));
  if (zcEvent != NO_ZCEVENT) {
    /* S-Function (scanpack): '<S191>/VCU2ICUInfor2' */
    /* S-Function (scanpack): '<S191>/VCU2ICUInfor2' */
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.ID = 402794704U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 24
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = AccPadle;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[3] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 8
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = SIGNED
       *  factor                  = 0.1
       *  offset                  = -1000.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.Cur_Bat;

          /* full scaling operation */
          result = (result - -1000.0F) * (1 / 0.1F);
          outValue = result;
        }

        {
          int16_T packedValue;
          int32_T scaledValue;
          if (outValue > 2147483647.0) {
            scaledValue = 2147483647;
          } else if (outValue < -2147483648.0) {
            scaledValue = -2147483647 - 1;
          } else {
            scaledValue = (int32_T) outValue;
          }

          if (scaledValue > (int32_T) (32767)) {
            packedValue = 32767;
          } else if (scaledValue < (int32_T)((-(32767)-1))) {
            packedValue = (-(32767)-1);
          } else {
            packedValue = (int16_T) (scaledValue);
          }

          {
            uint16_T* tempValuePtr = (uint16_T*)&packedValue;
            uint16_T tempValue = *tempValuePtr;

            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[1] | (uint8_T)
                ((uint16_T)(tempValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[2] | (uint8_T)
                ((uint16_T)((uint16_T)(tempValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 32
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion2;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[4] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 0
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 0.1
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion3;

          /* no offset to apply */
          result = result * (1 / 0.1F);
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[0] | (uint8_T)
                (packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 40
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion4;

          /* no scaling required */
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[5] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[6] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[6] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 5 ------------------
       *  startBit                = 56
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion5;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[7] | (uint8_T)
                (packedValue);
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S191>/FCAN_Send_ID_0x180228D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2ICUInfor2.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 17);
      FLEXCAN_DRV_ConfigTxMb(0, 17, &txInfo, 0x180228D0);
      FLEXCAN_DRV_Send(0, 17, &txInfo, 0x180228D0, data);
    }

    /* DataStoreWrite: '<S191>/Data Store Write' incorporates:
     *  Constant: '<S191>/Constant'
     *  DataStoreRead: '<S191>/Data Store Read'
     *  Sum: '<S191>/Add'
     */
    Cnt_ICU_OUT2++;
  }

  /* End of Outputs for SubSystem: '<S6>/ICU2' */

  /* Outputs for Triggered SubSystem: '<S6>/PDU' incorporates:
   *  TriggerPort: '<S195>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.PDU_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* DataStoreRead: '<S195>/Data Store Read9' */
    ZT_VehCtrl_18B_1009_B.DataStoreRead9 = VCU_DCCpstRlyCtl;

    /* DataStoreRead: '<S195>/Data Store Read6' */
    ZT_VehCtrl_18B_1009_B.DataStoreRead6 = VCU_HVACRlyCtl;

    /* DataTypeConversion: '<S195>/Data Type Conversion4' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion4 = (real32_T)
      ZT_VehCtrl_18B_1009_B.VCU_HghVtgCtl;

    /* DataTypeConversion: '<S195>/Data Type Conversion' incorporates:
     *  DataStoreRead: '<S195>/Data Store Read1'
     */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion_mm = Cnt_PDU_OUT;

    /* DataStoreRead: '<S195>/Data Store Read7' */
    ZT_VehCtrl_18B_1009_B.DataStoreRead7 = VCU_PTCRlyCtl;

    /* DataTypeConversion: '<S195>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion3 = (real32_T)
      ZT_VehCtrl_18B_1009_B.VCU_ShrRlyCtl;

    /* S-Function (scanpack): '<S195>/VCU_PDU' */
    /* S-Function (scanpack): '<S195>/VCU_PDU' */
    ZT_VehCtrl_18B_1009_B.VCU_PDU.ID = 217206843U;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 40
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataStoreRead9;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[5] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x3U));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 6
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataStoreRead6;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x3U) << 6));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 16
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion4;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[2] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x3U));
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 56
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion_mm;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[7] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 8
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataStoreRead7;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[1] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x3U));
            }
          }
        }
      }

      /* --------------- START Packing signal 5 ------------------
       *  startBit                = 0
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion3;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x3U));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S195>/FCAN_Send_ID_0x0CF2503B' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU_PDU.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU_PDU.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 52);
      FLEXCAN_DRV_ConfigTxMb(0, 52, &txInfo, 0x0CF2503B);
      FLEXCAN_DRV_Send(0, 52, &txInfo, 0x0CF2503B, data);
    }

    /* DataStoreWrite: '<S195>/Data Store Write' incorporates:
     *  Constant: '<S195>/Constant'
     *  DataStoreRead: '<S195>/Data Store Read'
     *  Sum: '<S195>/Add'
     */
    Cnt_PDU_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/PDU' */

  /* Outputs for Triggered SubSystem: '<S6>/TWV' incorporates:
   *  TriggerPort: '<S198>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.TWV_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator));
  if (zcEvent != NO_ZCEVENT) {
    /* DataStoreRead: '<S198>/Data Store Read10' */
    ZT_VehCtrl_18B_1009_B.DataStoreRead10 = TWV_ON_Ctr;

    /* S-Function (scanpack): '<S198>/VCU_TWV' */
    /* S-Function (scanpack): '<S198>/VCU_TWV' */
    ZT_VehCtrl_18B_1009_B.VCU_TWV.ID = 217933600U;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 0
       *  length                  = 7
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataStoreRead10;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(127)) {
            packedValue = (uint8_T) 127;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x7FU));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S198>/FCAN_Send_ID_0x0CFD6720' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU_TWV.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU_TWV.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 55);
      FLEXCAN_DRV_ConfigTxMb(1, 55, &txInfo, 0x0CFD6720);
      FLEXCAN_DRV_Send(1, 55, &txInfo, 0x0CFD6720, data);
    }

    /* DataStoreWrite: '<S198>/Data Store Write' incorporates:
     *  Constant: '<S198>/Constant'
     *  DataStoreRead: '<S198>/Data Store Read'
     *  Sum: '<S198>/Add'
     */
    Cnt_TWV_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/TWV' */

  /* Outputs for Triggered SubSystem: '<S6>/ISG' incorporates:
   *  TriggerPort: '<S192>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.ISG_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator1));
  if (zcEvent != NO_ZCEVENT) {
    /* DataTypeConversion: '<S192>/Data Type Conversion' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion_a = (real32_T)ISG_Control_Mode;

    /* DataTypeConversion: '<S192>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion1_f = (rtb_ManualSwitch1 != 0);

    /* S-Function (scanpack): '<S192>/ISG HCU Command' incorporates:
     *  Constant: '<S192>/Constant2'
     *  Constant: '<S192>/Constant3'
     *  Constant: '<S192>/Constant4'
     *  Constant: '<S192>/Constant5'
     *  Constant: '<S192>/Constant6'
     *  Constant: '<S192>/Constant7'
     *  Constant: '<S192>/Constant8'
     *  Constant: '<S192>/Constant9'
     */
    /* S-Function (scanpack): '<S192>/ISG HCU Command' */
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.ID = 218040047U;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Length = 8U;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Remote = 0;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 2
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion_a;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x3U) << 2));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 8
       *  length                  = 12
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 4.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 4.0);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(4095)) {
            packedValue = (uint16_T) 4095;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[1] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[1] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[2] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[2] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 20
       *  length                  = 12
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 4.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 4.0);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(4095)) {
            packedValue = (uint16_T) 4095;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[2] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[2] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFU) << 4));
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[3] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[3] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF0U) >> 4));
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 48
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = -15000.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no factor to apply */
          result = result - -15000.0;
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[6] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[6] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[7] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[7] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 32
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = -5000.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no factor to apply */
          result = result - -5000.0;
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[4] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[4] | (uint8_T)
                ((uint16_T)(packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[5] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[5] | (uint8_T)
                ((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 5 ------------------
       *  startBit                = 1
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
            }
          }
        }
      }

      /* --------------- START Packing signal 6 ------------------
       *  startBit                = 6
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
            }
          }
        }
      }

      /* --------------- START Packing signal 7 ------------------
       *  startBit                = 4
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x3U) << 4));
            }
          }
        }
      }

      /* --------------- START Packing signal 8 ------------------
       *  startBit                = 7
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
            }
          }
        }
      }

      /* --------------- START Packing signal 9 ------------------
       *  startBit                = 0
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.DataTypeConversion1_f);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x1U));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S192>/FCAN_Send_ID_0xCFF06EF' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.ISGHCUCommand.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 54);
      FLEXCAN_DRV_ConfigTxMb(1, 54, &txInfo, 0xCFF06EF);
      FLEXCAN_DRV_Send(1, 54, &txInfo, 0xCFF06EF, data);
    }

    /* DataStoreWrite: '<S192>/Data Store Write' incorporates:
     *  Constant: '<S192>/Constant'
     *  DataStoreRead: '<S192>/Data Store Read'
     *  Sum: '<S192>/Add'
     */
    Cnt_ISG_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/ISG' */

  /* Outputs for Triggered SubSystem: '<S6>/MCU1' incorporates:
   *  TriggerPort: '<S193>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.MCU1_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator1));
  if (zcEvent != NO_ZCEVENT) {
    /* DataTypeConversion: '<S193>/Data Type Conversion1' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion1_b = (real32_T)
      VCU2OilMotor_CtrlMode;

    /* DataTypeConversion: '<S193>/Data Type Conversion' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion_d = (rtb_ManualSwitch != 0);

    /* S-Function (scanpack): '<S193>/VCU2MCU1' incorporates:
     *  Constant: '<S193>/Constant1'
     *  Constant: '<S193>/Constant11'
     *  Constant: '<S193>/Constant12'
     *  Constant: '<S193>/Constant13'
     *  Constant: '<S193>/Constant2'
     *  Constant: '<S193>/Constant3'
     *  Constant: '<S193>/Constant4'
     *  Constant: '<S193>/Constant5'
     */
    /* S-Function (scanpack): '<S193>/VCU2MCU1' */
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.ID = 204599248U;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 5
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 4
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 8
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 4.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 4.0);
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[1] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 56
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[7] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 3
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion1_b;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
            }
          }
        }
      }

      /* --------------- START Packing signal 5 ------------------
       *  startBit                = 0
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.DataTypeConversion_d);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x1U));
            }
          }
        }
      }

      /* --------------- START Packing signal 6 ------------------
       *  startBit                = 48
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 4.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 4.0);
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[6] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[6] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 7 ------------------
       *  startBit                = 16
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 0.25
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 0.25);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[2] | (uint8_T)((uint16_T)
                (packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[3] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 8 ------------------
       *  startBit                = 32
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 0.1
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 0.1);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[4] | (uint8_T)((uint16_T)
                (packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[5] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 9 ------------------
       *  startBit                = 1
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x3U) << 1));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S193>/FCAN_Send_ID_0x0C31EFD0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2MCU1.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2MCU1.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 49);
      FLEXCAN_DRV_ConfigTxMb(1, 49, &txInfo, 0x0C31EFD0);
      FLEXCAN_DRV_Send(1, 49, &txInfo, 0x0C31EFD0, data);
    }

    /* DataStoreWrite: '<S193>/Data Store Write' incorporates:
     *  Constant: '<S193>/Constant'
     *  DataStoreRead: '<S193>/Data Store Read'
     *  Sum: '<S193>/Add'
     */
    Cnt_MCU1_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/MCU1' */

  /* Outputs for Triggered SubSystem: '<S6>/MCU2' incorporates:
   *  TriggerPort: '<S194>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.MCU2_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator1));
  if (zcEvent != NO_ZCEVENT) {
    /* DataTypeConversion: '<S194>/Data Type Conversion' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion_o = (real32_T)VCU2DrvMotor_CtrlMode;

    /* DataTypeConversion: '<S194>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion3_f = (rtb_ManualSwitch != 0);

    /* Switch: '<S229>/Switch2' */
    if (rtb_ManualSwitch > 0) {
      /* DataTypeConversion: '<S194>/Data Type Conversion1' */
      ZT_VehCtrl_18B_1009_B.DataTypeConversion1_l =
        ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_TarTrq;
    } else {
      /* DataTypeConversion: '<S194>/Data Type Conversion1' incorporates:
       *  Constant: '<S229>/Constant4'
       */
      ZT_VehCtrl_18B_1009_B.DataTypeConversion1_l = 0.0F;
    }

    /* End of Switch: '<S229>/Switch2' */

    /* DataTypeConversion: '<S194>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion2_i = (real32_T)
      ZT_VehCtrl_18B_1009_B.VCU2DrvMotor_WorkMode;

    /* S-Function (scanpack): '<S194>/VCU2MCU2' incorporates:
     *  Constant: '<S194>/Constant11'
     *  Constant: '<S194>/Constant12'
     *  Constant: '<S194>/Constant13'
     *  Constant: '<S194>/Constant14'
     *  Constant: '<S194>/Constant17'
     *  Constant: '<S194>/Constant18'
     */
    /* S-Function (scanpack): '<S194>/VCU2MCU2' */
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.ID = 204599760U;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Length = 8U;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Remote = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 5
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 4
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 8
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 4.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 4.0);
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[1] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[1] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 56
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[7] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[7] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 3
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion_o;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
            }
          }
        }
      }

      /* --------------- START Packing signal 5 ------------------
       *  startBit                = 0
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.DataTypeConversion3_f);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x1U));
            }
          }
        }
      }

      /* --------------- START Packing signal 6 ------------------
       *  startBit                = 48
       *  length                  = 8
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 4.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 4.0);
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[6] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[6] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 7 ------------------
       *  startBit                = 16
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 0.25
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 0.25);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[2] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[2] | (uint8_T)((uint16_T)
                (packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[3] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[3] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 8 ------------------
       *  startBit                = 32
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 0.1
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion1_l;

          /* no offset to apply */
          result = result * (1 / 0.1F);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[4] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[4] | (uint8_T)((uint16_T)
                (packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[5] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[5] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 9 ------------------
       *  startBit                = 1
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion2_i;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] =
                ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x3U) << 1));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S194>/FCAN_Send_ID_0x0C31F1D0' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.VCU2MCU2.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.VCU2MCU2.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 50);
      FLEXCAN_DRV_ConfigTxMb(1, 50, &txInfo, 0x0C31F1D0);
      FLEXCAN_DRV_Send(1, 50, &txInfo, 0x0C31F1D0, data);
    }

    /* DataStoreWrite: '<S194>/Data Store Write' incorporates:
     *  Constant: '<S194>/Constant'
     *  DataStoreRead: '<S194>/Data Store Read'
     *  Sum: '<S194>/Add'
     */
    Cnt_MCU2_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/MCU2' */

  /* Outputs for Triggered SubSystem: '<S6>/TM' incorporates:
   *  TriggerPort: '<S196>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.TM_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator1));
  if (zcEvent != NO_ZCEVENT) {
    /* DataTypeConversion: '<S196>/Data Type Conversion' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion_m = (real32_T)
      ZT_VehCtrl_18B_1009_B.TM_Control_Mode;

    /* Switch: '<S229>/Switch3' */
    if (rtb_ManualSwitch1 > 0) {
      /* DataTypeConversion: '<S196>/Data Type Conversion1' */
      ZT_VehCtrl_18B_1009_B.DataTypeConversion1 = TM_Demand_Torque;
    } else {
      /* DataTypeConversion: '<S196>/Data Type Conversion1' incorporates:
       *  Constant: '<S229>/Constant5'
       */
      ZT_VehCtrl_18B_1009_B.DataTypeConversion1 = 0.0F;
    }

    /* End of Switch: '<S229>/Switch3' */

    /* DataTypeConversion: '<S196>/Data Type Conversion2' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion2 = (real32_T)
      ZT_VehCtrl_18B_1009_B.TM_Gear;

    /* DataTypeConversion: '<S196>/Data Type Conversion3' */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion3_h = (rtb_ManualSwitch1 != 0);

    /* S-Function (scanpack): '<S196>/TM HCU Command' incorporates:
     *  Constant: '<S196>/Constant2'
     *  Constant: '<S196>/Constant3'
     *  Constant: '<S196>/Constant4'
     *  Constant: '<S196>/Constant6'
     *  Constant: '<S196>/Constant7'
     *  Constant: '<S196>/Constant9'
     */
    /* S-Function (scanpack): '<S196>/TM HCU Command' */
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.ID = 218039791U;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Length = 8U;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Remote = 0;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 2
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion_m;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x3U) << 2));
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 8
       *  length                  = 12
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 4.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 4.0);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(4095)) {
            packedValue = (uint16_T) 4095;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[1] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[1] | (uint8_T)((uint16_T)
                (packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[2] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[2] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 2 ------------------
       *  startBit                = 20
       *  length                  = 12
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 4.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no offset to apply */
          result = result * (1 / 4.0);
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(4095)) {
            packedValue = (uint16_T) 4095;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[2] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[2] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFU) << 4));
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[3] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[3] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFF0U) >> 4));
            }
          }
        }
      }

      /* --------------- START Packing signal 3 ------------------
       *  startBit                = 48
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = -15000.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no factor to apply */
          result = result - -15000.0;
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real64_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[6] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[6] | (uint8_T)((uint16_T)
                (packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[7] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[7] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 4 ------------------
       *  startBit                = 32
       *  length                  = 16
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = -5000.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion1;

          /* no factor to apply */
          result = result - -5000.0F;
          outValue = result;
        }

        {
          uint16_T packedValue;
          if (outValue > (real32_T)(65535)) {
            packedValue = (uint16_T) 65535;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint16_T) 0;
          } else {
            packedValue = (uint16_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[4] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[4] | (uint8_T)((uint16_T)
                (packedValue & (uint16_T)0xFFU));
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[5] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[5] | (uint8_T)((uint16_T)
                ((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
            }
          }
        }
      }

      /* --------------- START Packing signal 5 ------------------
       *  startBit                = 1
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
            }
          }
        }
      }

      /* --------------- START Packing signal 6 ------------------
       *  startBit                = 6
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
            }
          }
        }
      }

      /* --------------- START Packing signal 7 ------------------
       *  startBit                = 4
       *  length                  = 2
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real32_T outValue = 0;

        {
          real32_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion2;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real32_T)(3)) {
            packedValue = (uint8_T) 3;
          } else if (outValue < (real32_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x3U) << 4));
            }
          }
        }
      }

      /* --------------- START Packing signal 8 ------------------
       *  startBit                = 7
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = 0.0;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] | (uint8_T)((uint8_T)
                ((uint8_T)(packedValue & (uint8_T)0x1U) << 7));
            }
          }
        }
      }

      /* --------------- START Packing signal 9 ------------------
       *  startBit                = 0
       *  length                  = 1
       *  desiredSignalByteLayout = LITTLEENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T)
            (ZT_VehCtrl_18B_1009_B.DataTypeConversion3_h);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          if (packingValue > (boolean_T)(1)) {
            packedValue = (uint8_T) 1;
          } else if (packingValue < (boolean_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (packingValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] =
                ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0] | (uint8_T)((uint8_T)
                (packedValue & (uint8_T)0x1U));
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S196>/FCAN_Send_ID_0xCFF05EF' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.TMHCUCommand.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.TMHCUCommand.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(1, 53);
      FLEXCAN_DRV_ConfigTxMb(1, 53, &txInfo, 0xCFF05EF);
      FLEXCAN_DRV_Send(1, 53, &txInfo, 0xCFF05EF, data);
    }

    /* DataStoreWrite: '<S196>/Data Store Write' incorporates:
     *  Constant: '<S196>/Constant'
     *  DataStoreRead: '<S196>/Data Store Read'
     *  Sum: '<S196>/Add'
     */
    Cnt_TM_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/TM' */

  /* Outputs for Triggered SubSystem: '<S6>/TMS' incorporates:
   *  TriggerPort: '<S197>/Trigger'
   */
  zcEvent = rt_ZCFcn(RISING_ZERO_CROSSING,
                     &ZT_VehCtrl_18B_1009_PrevZCX.TMS_Trig_ZCE,
                     ((real_T)rtb_PulseGenerator2));
  if (zcEvent != NO_ZCEVENT) {
    /* DataTypeConversion: '<S197>/Data Type Conversion' incorporates:
     *  DataStoreRead: '<S197>/Data Store Read3'
     */
    ZT_VehCtrl_18B_1009_B.DataTypeConversion = VCU_FanSpeedLvl_num;

    /* DataStoreRead: '<S197>/Data Store Read1' */
    ZT_VehCtrl_18B_1009_B.DataStoreRead1 = Cnt_TMS_OUT;

    /* S-Function (scanpack): '<S197>/TMS' */
    /* S-Function (scanpack): '<S197>/TMS' */
    ZT_VehCtrl_18B_1009_B.TMS.ID = 419427143U;
    ZT_VehCtrl_18B_1009_B.TMS.Length = 8U;
    ZT_VehCtrl_18B_1009_B.TMS.Extended = 1U;
    ZT_VehCtrl_18B_1009_B.TMS.Remote = 0;
    ZT_VehCtrl_18B_1009_B.TMS.Data[0] = 0;
    ZT_VehCtrl_18B_1009_B.TMS.Data[1] = 0;
    ZT_VehCtrl_18B_1009_B.TMS.Data[2] = 0;
    ZT_VehCtrl_18B_1009_B.TMS.Data[3] = 0;
    ZT_VehCtrl_18B_1009_B.TMS.Data[4] = 0;
    ZT_VehCtrl_18B_1009_B.TMS.Data[5] = 0;
    ZT_VehCtrl_18B_1009_B.TMS.Data[6] = 0;
    ZT_VehCtrl_18B_1009_B.TMS.Data[7] = 0;

    {
      /* --------------- START Packing signal 0 ------------------
       *  startBit                = 0
       *  length                  = 8
       *  desiredSignalByteLayout = BIGENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        real64_T outValue = 0;

        {
          real64_T result = ZT_VehCtrl_18B_1009_B.DataTypeConversion;

          /* no scaling required */
          outValue = result;
        }

        {
          uint8_T packedValue;
          if (outValue > (real64_T)(255)) {
            packedValue = (uint8_T) 255;
          } else if (outValue < (real64_T)(0)) {
            packedValue = (uint8_T) 0;
          } else {
            packedValue = (uint8_T) (outValue);
          }

          {
            {
              ZT_VehCtrl_18B_1009_B.TMS.Data[0] =
                ZT_VehCtrl_18B_1009_B.TMS.Data[0] | (uint8_T)(packedValue);
            }
          }
        }
      }

      /* --------------- START Packing signal 1 ------------------
       *  startBit                = 56
       *  length                  = 8
       *  desiredSignalByteLayout = BIGENDIAN
       *  dataType                = UNSIGNED
       *  factor                  = 1.0
       *  offset                  = 0.0
       *  minimum                 = 0.0
       *  maximum                 = 0.0
       * -----------------------------------------------------------------------*/
      {
        uint32_T packingValue = 0;

        {
          uint32_T result = (uint32_T) (ZT_VehCtrl_18B_1009_B.DataStoreRead1);

          /* no scaling required */
          packingValue = result;
        }

        {
          uint8_T packedValue;
          packedValue = (uint8_T) (packingValue);

          {
            {
              ZT_VehCtrl_18B_1009_B.TMS.Data[7] =
                ZT_VehCtrl_18B_1009_B.TMS.Data[7] | (uint8_T)(packedValue);
            }
          }
        }
      }
    }

    /* S-Function (fcan_mpc_send): '<S197>/FCAN_Send_ID_0x18FFF347' */
    {
      uint8_t* data = &ZT_VehCtrl_18B_1009_B.TMS.Data[0];
      flexcan_data_info_t txInfo = {
        .msg_id_type = FLEXCAN_MSG_ID_EXT,
        .data_length = ZT_VehCtrl_18B_1009_B.TMS.Length,
        .is_remote = false
      };

      FLEXCAN_DRV_AbortTransfer(0, 15);
      FLEXCAN_DRV_ConfigTxMb(0, 15, &txInfo, 0x18FFF347);
      FLEXCAN_DRV_Send(0, 15, &txInfo, 0x18FFF347, data);
    }

    /* DataStoreWrite: '<S197>/Data Store Write' incorporates:
     *  Constant: '<S197>/Constant'
     *  DataStoreRead: '<S197>/Data Store Read'
     *  Sum: '<S197>/Add'
     */
    Cnt_TMS_OUT++;
  }

  /* End of Outputs for SubSystem: '<S6>/TMS' */

  /* S-Function (etimer_mpc_preload): '<S210>/eTimer_Preload2' */
  ETIMER_DRV_ReloadOnCompare(0, 5,
    ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion_b, true);//rolloverEnabled
  ETIMER_DRV_SetCompareThresholdBuffered(0, 5,
    ZT_VehCtrl_18B_1009_B.DataTypeConversion1_n,
    ZT_VehCtrl_18B_1009_B.DataTypeConversion2_if);

  /* S-Function (etimer_mpc_start_stop_timer): '<S210>/eTimer_Start_Stop_Timer1' */
  ETIMER_DRV_StartTimerChannels(0, ETIMER_ENABLE_CH5);

  /* S-Function (etimer_mpc_preload): '<S209>/eTimer_Preload2' */
  ETIMER_DRV_ReloadOnCompare(2, 2,
    ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion_p, true);//rolloverEnabled
  ETIMER_DRV_SetCompareThresholdBuffered(2, 2,
    ZT_VehCtrl_18B_1009_B.DataTypeConversion1_nq,
    ZT_VehCtrl_18B_1009_B.DataTypeConversion2_iv);

  /* S-Function (etimer_mpc_start_stop_timer): '<S209>/eTimer_Start_Stop_Timer1' */
  ETIMER_DRV_StartTimerChannels(2, ETIMER_ENABLE_CH2);

  /* S-Function (etimer_mpc_preload): '<S208>/eTimer_Preload2' */
  ETIMER_DRV_ReloadOnCompare(0, 3,
    ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion_h, true);//rolloverEnabled
  ETIMER_DRV_SetCompareThresholdBuffered(0, 3,
    ZT_VehCtrl_18B_1009_B.DataTypeConversion1_p,
    ZT_VehCtrl_18B_1009_B.DataTypeConversion2_p);

  /* S-Function (etimer_mpc_start_stop_timer): '<S208>/eTimer_Start_Stop_Timer1' */
  ETIMER_DRV_StartTimerChannels(0, ETIMER_ENABLE_CH3);

  /* S-Function (gpio_mpc_output): '<S204>/HS001' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_1009_B.DataStoreRead) {
    PINS_DRV_SetPins(PTF, (1 << 5));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 5));
  }

  /* S-Function (gpio_mpc_output): '<S204>/HS007' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_1009_B.DataStoreRead2) {
    PINS_DRV_SetPins(PTF, (1 << 7));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 7));
  }

  /* S-Function (gpio_mpc_output): '<S204>/HS002 ' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_1009_B.DataStoreRead4) {
    PINS_DRV_SetPins(PTF, (1 << 4));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 4));
  }

  /* S-Function (gpio_mpc_output): '<S204>/HS003' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_1009_B.DataStoreRead5) {
    PINS_DRV_SetPins(PTF, (1 << 3));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 3));
  }

  /* S-Function (gpio_mpc_output): '<S204>/HS004' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_1009_B.DataStoreRead6_n) {
    PINS_DRV_SetPins(PTB, (1 << 6));
  } else {
    PINS_DRV_ClearPins(PTB, (1 << 6));
  }

  /* S-Function (gpio_mpc_output): '<S204>/HS005' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_1009_B.DataStoreRead7_a) {
    PINS_DRV_SetPins(PTA, (1 << 12));
  } else {
    PINS_DRV_ClearPins(PTA, (1 << 12));
  }

  /* DataStoreRead: '<S204>/Data Store Read9' */
  ZT_VehCtrl_18B_1009_B.DataStoreRead9_g = HS010;

  /* S-Function (gpio_mpc_output): '<S204>/HS010' */
  /* Data Signal Update */
  if (ZT_VehCtrl_18B_1009_B.DataStoreRead9_g) {
    PINS_DRV_SetPins(PTF, (1 << 9));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 9));
  }

  /* S-Function (gpio_mpc_output): '<S206>/LS_EN' incorporates:
   *  Constant: '<S206>/Constant'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTA, (1 << 2));
  } else {
    PINS_DRV_ClearPins(PTA, (1 << 2));
  }

  /* S-Function (gpio_mpc_output): '<S206>/LS_rst2' incorporates:
   *  Constant: '<S206>/Constant1'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTA, (1 << 1));
  } else {
    PINS_DRV_ClearPins(PTA, (1 << 1));
  }

  /* S-Function (gpio_mpc_output): '<S206>/LS_rst1' incorporates:
   *  Constant: '<S206>/Constant2'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTC, (1 << 10));
  } else {
    PINS_DRV_ClearPins(PTC, (1 << 10));
  }

  /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
   *  DataStoreWrite: '<S2>/Data Store Write'
   */
  VCU_Mode = (uint8_T)(int32_T)fmod(rtb_Flg_k, 256.0);

  /* DiscretePulseGenerator: '<S2>/Pulse Generator' */
  ISG_Control_Mode = ((ZT_VehCtrl_18B_1009_DW.clockTickCounter_p < 1) &&
                      (ZT_VehCtrl_18B_1009_DW.clockTickCounter_p >= 0));
  if (ZT_VehCtrl_18B_1009_DW.clockTickCounter_p >= 1) {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter_p = 0;
  } else {
    ZT_VehCtrl_18B_1009_DW.clockTickCounter_p++;
  }

  /* End of DiscretePulseGenerator: '<S2>/Pulse Generator' */

  /* Logic: '<S206>/Logical Operator' incorporates:
   *  Constant: '<S218>/Constant'
   *  DataStoreRead: '<S206>/Data Store Read'
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   *  RelationalOperator: '<S218>/Compare'
   */
  rtb_LogicalOperator_o = ((VCU_Mode == 2) && (ISG_Control_Mode != 0.0));

  /* DataStoreWrite: '<S41>/Data Store Write3' */
  DI13 = ZT_VehCtrl_18B_1009_B.DI13_m;

  /* DataStoreRead: '<S5>/Data Store Read2' */
  HornSw = DI13;

  /* DataStoreWrite: '<S228>/Data Store Write16' */
  LS002 = HornSw;

  /* Outputs for Enabled SubSystem: '<S206>/LS_CTRL' incorporates:
   *  EnablePort: '<S219>/Enable'
   */
  /* Logic: '<S206>/Logical Operator1' */
  if (!rtb_LogicalOperator_o) {
    /* S-Function (spi_mpc_master_transfer): '<S219>/SPI_Master_Transfer_To1' */
    {
      DSPI_UpdateCS(0, 5);
      DSPI_MasterTransfer(0, &ZT_VehCtrl_18B_1009_B.VectorConcatenate1_l[0],
                          &ZT_VehCtrl_18B_1009_B.SPI_Master_Transfer_To1_j[0], 1);
    }

    /* Outputs for Atomic SubSystem: '<S219>/If Action Subsystem1' */
    /* Switch: '<S221>/Switch' incorporates:
     *  Constant: '<S221>/Constant1'
     *  Constant: '<S221>/Constant2'
     *  DataStoreRead: '<S221>/Data Store Read6'
     */
    if (LS002) {
      tmp_0 = 128U;
    } else {
      tmp_0 = 64U;
    }

    /* End of Switch: '<S221>/Switch' */

    /* Switch: '<S221>/Switch1' incorporates:
     *  Constant: '<S221>/Constant3'
     *  Constant: '<S221>/Constant4'
     *  DataStoreRead: '<S221>/Data Store Read5'
     */
    if (LS001) {
      tmp_1 = 32U;
    } else {
      tmp_1 = 16U;
    }

    /* End of Switch: '<S221>/Switch1' */

    /* Switch: '<S221>/Switch2' incorporates:
     *  Constant: '<S221>/Constant5'
     *  Constant: '<S221>/Constant6'
     *  DataStoreRead: '<S221>/Data Store Read4'
     */
    if (LS011) {
      tmp_2 = 8U;
    } else {
      tmp_2 = 4U;
    }

    /* End of Switch: '<S221>/Switch2' */

    /* Switch: '<S221>/Switch3' incorporates:
     *  Constant: '<S221>/Constant7'
     *  Constant: '<S221>/Constant8'
     *  DataStoreRead: '<S221>/Data Store Read'
     */
    if (LS004) {
      tmp_3 = 2U;
    } else {
      tmp_3 = 1U;
    }

    /* End of Switch: '<S221>/Switch3' */

    /* DataTypeConversion: '<S221>/Data Type Conversion1' incorporates:
     *  Sum: '<S221>/Add'
     */
    ZT_VehCtrl_18B_1009_B.VectorConcatenate1_l[1] = (uint8_T)((((uint32_T)tmp_0
      + tmp_1) + tmp_2) + tmp_3);

    /* End of Outputs for SubSystem: '<S219>/If Action Subsystem1' */

    /* SignalConversion: '<S219>/ConcatBufferAtVector Concatenate1In1' */
    ZT_VehCtrl_18B_1009_B.VectorConcatenate1_l[0] =
      ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion_ch;
  }

  /* End of Logic: '<S206>/Logical Operator1' */
  /* End of Outputs for SubSystem: '<S206>/LS_CTRL' */

  /* Outputs for Enabled SubSystem: '<S206>/LS_CTRL1' incorporates:
   *  EnablePort: '<S220>/Enable'
   */
  if (rtb_LogicalOperator_o) {
    /* S-Function (spi_mpc_master_transfer): '<S220>/SPI_Master_Transfer_To1' */
    {
      DSPI_UpdateCS(0, 1);
      DSPI_MasterTransfer(0, &ZT_VehCtrl_18B_1009_B.VectorConcatenate1[0],
                          &ZT_VehCtrl_18B_1009_B.SPI_Master_Transfer_To1[0], 1);
    }

    /* Outputs for Atomic SubSystem: '<S220>/If Action Subsystem1' */
    /* Switch: '<S222>/Switch' incorporates:
     *  Constant: '<S222>/Constant1'
     *  Constant: '<S222>/Constant2'
     *  DataStoreRead: '<S222>/Data Store Read6'
     */
    if (LS016) {
      tmp_0 = 128U;
    } else {
      tmp_0 = 64U;
    }

    /* End of Switch: '<S222>/Switch' */

    /* Switch: '<S222>/Switch1' incorporates:
     *  Constant: '<S222>/Constant3'
     *  Constant: '<S222>/Constant4'
     *  DataStoreRead: '<S222>/Data Store Read5'
     */
    if (LS009) {
      tmp_1 = 32U;
    } else {
      tmp_1 = 16U;
    }

    /* End of Switch: '<S222>/Switch1' */

    /* Switch: '<S222>/Switch2' incorporates:
     *  Constant: '<S222>/Constant5'
     *  Constant: '<S222>/Constant6'
     *  DataStoreRead: '<S222>/Data Store Read4'
     */
    if (LS015) {
      tmp_2 = 8U;
    } else {
      tmp_2 = 4U;
    }

    /* End of Switch: '<S222>/Switch2' */

    /* Switch: '<S222>/Switch3' incorporates:
     *  Constant: '<S222>/Constant7'
     *  Constant: '<S222>/Constant8'
     *  DataStoreRead: '<S222>/Data Store Read'
     */
    if (LS014) {
      tmp_3 = 2U;
    } else {
      tmp_3 = 1U;
    }

    /* End of Switch: '<S222>/Switch3' */

    /* DataTypeConversion: '<S222>/Data Type Conversion1' incorporates:
     *  Sum: '<S222>/Add'
     */
    ZT_VehCtrl_18B_1009_B.VectorConcatenate1[1] = (uint8_T)((((uint32_T)tmp_0 +
      tmp_1) + tmp_2) + tmp_3);

    /* End of Outputs for SubSystem: '<S220>/If Action Subsystem1' */

    /* SignalConversion: '<S220>/ConcatBufferAtVector Concatenate1In1' */
    ZT_VehCtrl_18B_1009_B.VectorConcatenate1[0] =
      ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion_k;
  }

  /* End of Outputs for SubSystem: '<S206>/LS_CTRL1' */

  /* S-Function (gpio_mpc_output): '<S207>/LS_EN1' incorporates:
   *  Constant: '<S207>/Constant1'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTF, (1 << 10));
  } else {
    PINS_DRV_ClearPins(PTF, (1 << 10));
  }

  /* S-Function (gpio_mpc_output): '<S207>/LS_rst' incorporates:
   *  Constant: '<S207>/Constant3'
   */
  /* Data Signal Update */
  if (true) {
    PINS_DRV_SetPins(PTC, (1 << 14));
  } else {
    PINS_DRV_ClearPins(PTC, (1 << 14));
  }

  /* DataStoreWrite: '<S228>/Data Store Write' */
  LS007 = BodyLoadSw;

  /* DataStoreWrite: '<S228>/Data Store Write13' */
  LS010 = ParkReleaseSw;

  /* DataStoreWrite: '<S41>/Data Store Write6' */
  DI17 = ZT_VehCtrl_18B_1009_B.DI17_c;

  /* DataStoreRead: '<S5>/Data Store Read19' */
  FourWSSw = DI17;

  /* DataStoreWrite: '<S228>/Data Store Write14' */
  LS012 = FourWSSw;

  /* DataStoreWrite: '<S41>/Data Store Write7' */
  DI18 = ZT_VehCtrl_18B_1009_B.DI18_k;

  /* DataStoreRead: '<S5>/Data Store Read20' */
  CrabSteerSw = DI18;

  /* DataStoreWrite: '<S228>/Data Store Write15' */
  LS013 = CrabSteerSw;

  /* DataStoreWrite: '<S41>/Data Store Write4' */
  DI15 = ZT_VehCtrl_18B_1009_B.DI15_b;

  /* DataStoreRead: '<S5>/Data Store Read3' */
  LegLoadSw = DI15;

  /* DataStoreWrite: '<S228>/Data Store Write4' */
  LS008 = LegLoadSw;

  /* Outputs for Enabled SubSystem: '<S207>/Subsystem' incorporates:
   *  EnablePort: '<S224>/Enable'
   */
  /* Logic: '<S207>/Logical Operator' incorporates:
   *  Constant: '<S223>/Constant'
   *  DataStoreRead: '<S207>/Data Store Read'
   *  DataStoreWrite: '<S2>/Data Store Write3'
   *  RelationalOperator: '<S223>/Compare'
   */
  if ((VCU_Mode == 2) && ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion1_o) {
    /* S-Function (spi_mpc_master_transfer): '<S224>/SPI_Master_Transfer_To2' */
    {
      DSPI_UpdateCS(3, 3);
      DSPI_MasterTransfer(3, &ZT_VehCtrl_18B_1009_B.VectorConcatenate2[0],
                          &ZT_VehCtrl_18B_1009_B.SPI_Master_Transfer_To2[0], 1);
    }

    /* Outputs for Atomic SubSystem: '<S224>/¿ØÖÆ' */
    /* DataTypeConversion: '<S225>/Data Type Conversion' incorporates:
     *  Constant: '<S225>/Constant9'
     *  DataStoreRead: '<S225>/Data Store Read1'
     *  DataStoreRead: '<S225>/Data Store Read2'
     *  Gain: '<S225>/Gain8'
     *  Gain: '<S225>/Gain9'
     *  Sum: '<S225>/Add1'
     */
    ZT_VehCtrl_18B_1009_B.VectorConcatenate2[0] = (uint8_T)(((((uint32_T)(LS012 <<
      7) << 1) + ((uint32_T)LS007 << 7)) + 5632U) >> 7);

    /* DataTypeConversion: '<S225>/Data Type Conversion1' incorporates:
     *  DataStoreRead: '<S225>/Data Store Read10'
     *  DataStoreRead: '<S225>/Data Store Read5'
     *  DataStoreRead: '<S225>/Data Store Read6'
     *  DataStoreRead: '<S225>/Data Store Read9'
     *  Gain: '<S225>/Gain2'
     *  Gain: '<S225>/Gain3'
     *  Gain: '<S225>/Gain6'
     *  Gain: '<S225>/Gain7'
     *  Sum: '<S225>/Add'
     */
    tmp = floor(((((((real_T)(LS013 << 7) * 0.5 + (real_T)(LS006 << 7)) +
                    ZT_VehCtrl_18B_1009_ConstB.Gain5) +
                   ZT_VehCtrl_18B_1009_ConstB.Gain4) + (real_T)(LS008 << 7) *
                  0.0625) + (real_T)(LS010 << 7) * 0.03125) +
                ZT_VehCtrl_18B_1009_ConstB.Gain1);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    ZT_VehCtrl_18B_1009_B.VectorConcatenate2[1] = (uint8_T)(tmp < 0.0 ? (int32_T)
      (uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* End of DataTypeConversion: '<S225>/Data Type Conversion1' */
    /* End of Outputs for SubSystem: '<S224>/¿ØÖÆ' */
  }

  /* End of Logic: '<S207>/Logical Operator' */
  /* End of Outputs for SubSystem: '<S207>/Subsystem' */

  /* DataStoreWrite: '<S154>/Data Store Write17' */
  DI34 = ZT_VehCtrl_18B_1009_B.DI34_p;

  /* DataStoreWrite: '<S154>/Data Store Write16' */
  DI33 = ZT_VehCtrl_18B_1009_B.DI33_b;

  /* DataStoreWrite: '<S154>/Data Store Write14' */
  DI31 = ZT_VehCtrl_18B_1009_B.DI31_g;

  /* DataStoreRead: '<S5>/Data Store Read' */
  MotorLevelSw = DI31;

  /* DataStoreWrite: '<S41>/Data Store Write11' */
  DI12 = ZT_VehCtrl_18B_1009_B.DI12_h;

  /* DataStoreWrite: '<S41>/Data Store Write13' */
  DI09 = ZT_VehCtrl_18B_1009_B.DI09_a;

  /* DataStoreWrite: '<S41>/Data Store Write12' */
  DI08 = ZT_VehCtrl_18B_1009_B.DI08_e;

  /* DataStoreWrite: '<S41>/Data Store Write' */
  DI07 = ZT_VehCtrl_18B_1009_B.DI07_f;

  /* DataStoreRead: '<S5>/Data Store Read14' */
  ParkLowWarn = DI07;

  /* DataStoreWrite: '<S41>/Data Store Write10' */
  DI04 = ZT_VehCtrl_18B_1009_B.DI04_o;

  /* DataStoreWrite: '<S41>/Data Store Write9' */
  DI03 = ZT_VehCtrl_18B_1009_B.DI03_h;

  /* Gain: '<S37>/Gain8' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write8'
   *  DataTypeConversion: '<S37>/Data Type Conversion4'
   */
  AI17 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[4];

  /* Gain: '<S37>/Gain13' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write9'
   *  DataTypeConversion: '<S37>/Data Type Conversion8'
   */
  AI19 = 0.00122100126F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start1[8];

  /* Gain: '<S37>/Gain9' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write10'
   *  DataTypeConversion: '<S37>/Data Type Conversion12'
   */
  AI03 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start[2];

  /* Gain: '<S37>/Gain11' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write11'
   *  DataTypeConversion: '<S37>/Data Type Conversion13'
   */
  AI04 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start[3];

  /* Gain: '<S37>/Gain5' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write12'
   *  DataTypeConversion: '<S37>/Data Type Conversion11'
   */
  AI05 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start[1];

  /* Gain: '<S37>/Gain15' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write13'
   *  DataTypeConversion: '<S37>/Data Type Conversion14'
   */
  AI09 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start[4];

  /* Gain: '<S37>/Gain4' incorporates:
   *  DataStoreWrite: '<S37>/Data Store Write14'
   *  DataTypeConversion: '<S37>/Data Type Conversion10'
   */
  AI20 = 0.00893772859F * (real32_T)ZT_VehCtrl_18B_1009_B.ADC_Start[0];

  /* Outputs for Atomic SubSystem: '<Root>/Init' */
  /* If: '<S1>/If1' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read1'
   */
  if (VCU_Mode == 2) {
    /* Outputs for IfAction SubSystem: '<S1>/CAN_init' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* S-Function (fcan_mpc_receive): '<S8>/ACU1' */
    FLEXCAN_DRV_Receive(0, 36, &canCom0_recvBuff36);

    /* S-Function (fcan_mpc_receive): '<S8>/ACU2' */
    FLEXCAN_DRV_Receive(0, 37, &canCom0_recvBuff37);

    /* S-Function (fcan_mpc_receive): '<S8>/ACU3' */
    FLEXCAN_DRV_Receive(0, 38, &canCom0_recvBuff38);

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

    /* S-Function (fcan_mpc_receive): '<S8>/BMS_Relay Status1' */
    FLEXCAN_DRV_Receive(0, 4, &canCom0_recvBuff4);

    /* S-Function (fcan_mpc_receive): '<S8>/BRS2VCU1' */
    FLEXCAN_DRV_Receive(0, 11, &canCom0_recvBuff11);

    /* S-Function (fcan_mpc_receive): '<S8>/BRS2VCU2' */
    FLEXCAN_DRV_Receive(0, 12, &canCom0_recvBuff12);

    /* S-Function (fcan_mpc_receive): '<S8>/BRS2VCU3' */
    FLEXCAN_DRV_Receive(0, 13, &canCom0_recvBuff13);

    /* S-Function (fcan_mpc_receive): '<S8>/DCDC1_1' */
    FLEXCAN_DRV_Receive(0, 24, &canCom0_recvBuff24);

    /* S-Function (fcan_mpc_receive): '<S8>/DCDC1_2' */
    FLEXCAN_DRV_Receive(0, 26, &canCom0_recvBuff26);

    /* S-Function (fcan_mpc_receive): '<S8>/HVC1_LV' */
    FLEXCAN_DRV_Receive(0, 25, &canCom0_recvBuff25);

    /* S-Function (fcan_mpc_receive): '<S8>/HVC3_Temp' */
    FLEXCAN_DRV_Receive(0, 27, &canCom0_recvBuff27);

    /* S-Function (fcan_mpc_receive): '<S8>/HVC4_RlySt' */
    FLEXCAN_DRV_Receive(0, 28, &canCom0_recvBuff28);

    /* S-Function (fcan_mpc_receive): '<S8>/HVC7_HV1' */
    FLEXCAN_DRV_Receive(0, 29, &canCom0_recvBuff29);

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
    FLEXCAN_DRV_Receive(0, 39, &canCom0_recvBuff39);

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
  if (ZT_VehCtrl_18B_1009_DW.Init_flg == 0) {
    /* Outputs for IfAction SubSystem: '<S1>/Init' incorporates:
     *  ActionPort: '<S9>/Action Port'
     */
    /* DataStoreWrite: '<S9>/Data Store Write3' */
    ZT_VehCtrl_18B_1009_DW.Init_flg =
      ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion_bd;

    /* DataStoreWrite: '<S9>/Data Store Write' */
    LS001 = ZT_VehCtrl_18B_1009_ConstB.DataTypeConversion2_g;

    /* End of Outputs for SubSystem: '<S1>/Init' */
  }

  /* End of If: '<S1>/If2' */
  /* End of Outputs for SubSystem: '<Root>/Init' */
  /* Product: '<S203>/Divide3' incorporates:
   *  Constant: '<S203>/Freq_MC3'
   *  Constant: '<S203>/Pre5'
   *  DataStoreRead: '<S203>/Data Store Read5'
   */
  ISG_Control_Mode = 1.25E+6 / LSO3_ETC_FRQ;

  /* Product: '<S203>/Product1' incorporates:
   *  DataStoreRead: '<S203>/Data Store Read4'
   */
  VCU2OilMotor_CtrlMode = LSO3_ETC_DC * ISG_Control_Mode;

  /* DataTypeConversion: '<S210>/Data Type Conversion1' */
  tmp = floor(VCU2OilMotor_CtrlMode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_1009_B.DataTypeConversion1_n = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S210>/Data Type Conversion1' */

  /* Sum: '<S203>/Add1' */
  VCU2OilMotor_CtrlMode = ISG_Control_Mode - VCU2OilMotor_CtrlMode;

  /* DataTypeConversion: '<S210>/Data Type Conversion2' */
  tmp = floor(VCU2OilMotor_CtrlMode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_1009_B.DataTypeConversion2_if = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S210>/Data Type Conversion2' */

  /* Product: '<S203>/Divide4' incorporates:
   *  Constant: '<S203>/Freq_MC4'
   *  Constant: '<S203>/Pre4'
   *  DataStoreRead: '<S203>/Data Store Read3'
   */
  VCU2OilMotor_CtrlMode = 1.25E+6 / LSO17_ETC_FRQ;

  /* Product: '<S203>/Product2' incorporates:
   *  DataStoreRead: '<S203>/Data Store Read1'
   */
  ISG_Control_Mode = LSO17_ETC_DC * VCU2OilMotor_CtrlMode;

  /* DataTypeConversion: '<S209>/Data Type Conversion1' */
  tmp = floor(ISG_Control_Mode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_1009_B.DataTypeConversion1_nq = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S209>/Data Type Conversion1' */

  /* Sum: '<S203>/Add2' */
  ISG_Control_Mode = VCU2OilMotor_CtrlMode - ISG_Control_Mode;

  /* DataTypeConversion: '<S209>/Data Type Conversion2' */
  tmp = floor(ISG_Control_Mode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_1009_B.DataTypeConversion2_iv = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S209>/Data Type Conversion2' */

  /* Product: '<S203>/Divide2' incorporates:
   *  Constant: '<S203>/Freq_MC5'
   *  Constant: '<S203>/Pre3'
   *  DataStoreRead: '<S203>/Data Store Read13'
   */
  VCU2OilMotor_CtrlMode = 1.25E+6 / LSO18_ETC_FRQ;

  /* Product: '<S203>/Product6' incorporates:
   *  DataStoreRead: '<S203>/Data Store Read12'
   */
  ISG_Control_Mode = LSO18_ETC_DC * VCU2OilMotor_CtrlMode;

  /* DataTypeConversion: '<S208>/Data Type Conversion1' */
  tmp = floor(ISG_Control_Mode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_1009_B.DataTypeConversion1_p = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S208>/Data Type Conversion1' */

  /* Sum: '<S203>/Add3' */
  ISG_Control_Mode = VCU2OilMotor_CtrlMode - ISG_Control_Mode;

  /* DataTypeConversion: '<S208>/Data Type Conversion2' */
  tmp = floor(ISG_Control_Mode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  ZT_VehCtrl_18B_1009_B.DataTypeConversion2_p = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<S208>/Data Type Conversion2' */
}

/* Model initialize function */
void ZT_VehCtrl_18B_1009_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(ZT_VehCtrl_18B_1009_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &ZT_VehCtrl_18B_1009_B), 0,
                sizeof(B_ZT_VehCtrl_18B_1009_T));

  /* exported global signals */
  AccPadle = 0.0F;
  VehSpd_mps = 0.0F;
  RadiatorTempOut = 0.0F;
  Gear = 0.0F;
  ParkReleaseSw = false;
  ChargeEnSw = false;
  BodyLoadSw = false;
  HornSw = false;
  FourWSSw = false;
  CrabSteerSw = false;
  LegLoadSw = false;
  MotorLevelSw = false;
  ParkLowWarn = false;

  /* states (dwork) */
  (void) memset((void *)&ZT_VehCtrl_18B_1009_DW, 0,
                sizeof(DW_ZT_VehCtrl_18B_1009_T));

  /* exported global states */
  EnergyFlag = 0.0F;
  VCU_FanSpeedLvl_num = 0.0F;
  DcacEpsCmd = 0.0F;
  DcacEpsMode = 0.0F;
  DcacAcCmd = 0.0F;
  VCU_HVACRlyCtl = 0.0F;
  VCU_PTCRlyCtl = 0.0F;
  VCU_DCCpstRlyCtl = 0.0F;
  TWV_ON_Ctr = 0.0F;
  Cnt_BMS6 = 0U;
  Cnt_TM_OUT = 0U;
  Cnt_HVC4 = 0U;
  VCU_Mode = 0U;
  Cnt_HVC7 = 0U;
  Cnt_ISG_OUT = 0U;
  Cnt_TWV_OUT = 0U;
  Cnt_MCU2_OUT = 0U;
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
  Cnt_TM1 = 0U;
  Cnt_TM2 = 0U;
  Cnt_TM3 = 0U;
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
  Cnt_MCU1_OUT = 0U;
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
  (void) memset(&EnergyReady, 0,
                8U*sizeof(boolean_T));
  Key = false;
  PaxAC_PowOnCmd = false;
  PTC_PowOnCmd = false;
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI01' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI02' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI03' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI04' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI07' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI08' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI09' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI10' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI12' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI13' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI15' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI16' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI17' */
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

  /* Start for S-Function (gpio_mpc_input): '<S41>/DI18' */
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

  /* Start for S-Function (gpio_mpc_input): '<S154>/DI31' */
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

  /* Start for S-Function (gpio_mpc_input): '<S154>/DI32' */
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

  /* Start for S-Function (gpio_mpc_input): '<S154>/DI33' */
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

  /* Start for S-Function (gpio_mpc_input): '<S154>/DI34' */
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

  /* Start for S-Function (fcan_mpc_isr): '<S5>/CAN0_Rx_500' incorporates:
   *  SubSystem: '<S5>/CAN0 '
   */
  ZT_VehCtrl_18B_1009_CAN0_Start();
  FLEXCAN_DRV_InstallEventCallback(0, fcan0_mpc_event_callback, (void *)0);

  /* End of Start for S-Function (fcan_mpc_isr): '<S5>/CAN0_Rx_500' */

  /* Start for S-Function (fcan_mpc_isr): '<S5>/CAN1_Rx_500' incorporates:
   *  SubSystem: '<S5>/CAN1'
   */
  ZT_VehCtrl_18B_1009_CAN1_Start();
  FLEXCAN_DRV_InstallEventCallback(1, fcan1_mpc_event_callback, (void *)0);

  /* End of Start for S-Function (fcan_mpc_isr): '<S5>/CAN1_Rx_500' */

  /* Start for DiscretePulseGenerator: '<S6>/Pulse Generator2' */
  ZT_VehCtrl_18B_1009_DW.clockTickCounter = 0;

  /* Start for DiscretePulseGenerator: '<S6>/Pulse Generator1' */
  ZT_VehCtrl_18B_1009_DW.clockTickCounter_i = 0;

  /* Start for DiscretePulseGenerator: '<S6>/Pulse Generator' */
  ZT_VehCtrl_18B_1009_DW.clockTickCounter_e = 0;

  /* Start for DiscretePulseGenerator: '<S6>/Pulse Generator6' */
  ZT_VehCtrl_18B_1009_DW.clockTickCounter_h = 0;

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

  /* Start for S-Function (gpio_mpc_output): '<S204>/HS001' */
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

  /* Start for S-Function (gpio_mpc_output): '<S204>/HS007' */
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

  /* Start for S-Function (gpio_mpc_output): '<S204>/HS002 ' */
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

  /* Start for S-Function (gpio_mpc_output): '<S204>/HS003' */
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

  /* Start for S-Function (gpio_mpc_output): '<S204>/HS004' */
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

  /* Start for S-Function (gpio_mpc_output): '<S204>/HS005' */
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

  /* Start for S-Function (gpio_mpc_output): '<S204>/HS010' */
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

  /* Start for S-Function (gpio_mpc_output): '<S206>/LS_EN' incorporates:
   *  Constant: '<S206>/Constant'
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

  /* Start for S-Function (gpio_mpc_output): '<S206>/LS_rst2' incorporates:
   *  Constant: '<S206>/Constant1'
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

  /* Start for S-Function (gpio_mpc_output): '<S206>/LS_rst1' incorporates:
   *  Constant: '<S206>/Constant2'
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

  /* Start for DiscretePulseGenerator: '<S2>/Pulse Generator' */
  ZT_VehCtrl_18B_1009_DW.clockTickCounter_p = 0;

  /* Start for S-Function (gpio_mpc_output): '<S207>/LS_EN1' incorporates:
   *  Constant: '<S207>/Constant1'
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

  /* Start for S-Function (gpio_mpc_output): '<S207>/LS_rst' incorporates:
   *  Constant: '<S207>/Constant3'
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

    FLEXCAN_DRV_ConfigRxMb(0, 36, &rxInfo, 0x0C08A79A);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 36, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/ACU2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 37, &rxInfo, 0x0C09A79B);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 37, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/ACU3' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 38, &rxInfo, 0x0C0AA79D);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 38, 0xFFFFFFFF);
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

  /* Start for S-Function (fcan_mpc_receive): '<S8>/BMS_Relay Status1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 4, &rxInfo, 0x351);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 4, 0xFFFFFFFF);
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

    FLEXCAN_DRV_ConfigRxMb(0, 24, &rxInfo, 0x1800D08F);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 24, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/DCDC1_2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 26, &rxInfo, 0x1801D08F);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 26, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/HVC1_LV' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 25, &rxInfo, 0x180105A1);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 25, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/HVC3_Temp' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 27, &rxInfo, 0x180305A1);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 27, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/HVC4_RlySt' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 28, &rxInfo, 0x180405A1);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 28, 0xFFFFFFFF);
  }

  /* Start for S-Function (fcan_mpc_receive): '<S8>/HVC7_HV1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_EXT,
      .data_length = 8,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 29, &rxInfo, 0x180705A1);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 29, 0xFFFFFFFF);
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

    FLEXCAN_DRV_ConfigRxMb(0, 39, &rxInfo, 0x18FF2BC8);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 39, 0xFFFFFFFF);
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

    FLEXCAN_DRV_ConfigRxMb(1, 46, &rxInfo, 0x18FD20B0);
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
  ZT_VehCtrl_18B_1009_PrevZCX.ACU_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.BMS_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.BRS_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.DCDC_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.HVC_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.ICU1_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.ICU2_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.ISG_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.MCU1_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.MCU2_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.PDU_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.TM_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.TMS_Trig_ZCE = UNINITIALIZED_ZCSIG;
  ZT_VehCtrl_18B_1009_PrevZCX.TWV_Trig_ZCE = UNINITIALIZED_ZCSIG;

  /* SystemInitialize for Chart: '<S5>/Chart' */
  ZT_VehCtrl_18B_1009_DW.is_active_c1_ZT_VehCtrl_18B_1009 = 0U;
  ZT_VehCtrl_18B_1009_DW.is_c1_ZT_VehCtrl_18B_1009 =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S226>/Chart' */
  ZT_VehCtrl_18B_1009_DW.is_OBCOn = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_OBC_HVC_path =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_OBC_PDU_path =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_OBC_FrontPwrOff =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_OBC_RearPwrOff =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_FrontPwrOff = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_RearPwrOff = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_PowerOn = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_BRS_path = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_HVC_path = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_PDU_path = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_active_c3_ZT_VehCtrl_18B_1009 = 0U;
  ZT_VehCtrl_18B_1009_DW.is_c3_ZT_VehCtrl_18B_1009 =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S229>/Chart' */
  ZT_VehCtrl_18B_1009_DW.is_FrontDrive = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_RearDrive = ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;
  ZT_VehCtrl_18B_1009_DW.is_active_c2_ZT_VehCtrl_18B_1009 = 0U;

  /* SystemInitialize for Chart: '<S2>/Chart1' */
  ZT_VehCtrl_18B_1009_DW.is_active_c23_ZT_VehCtrl_18B_1009 = 0U;
  ZT_VehCtrl_18B_1009_DW.is_c23_ZT_VehCtrl_18B_1009 =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S2>/Chart2' */
  ZT_VehCtrl_18B_1009_DW.is_active_c24_ZT_VehCtrl_18B_1009 = 0U;
  ZT_VehCtrl_18B_1009_DW.is_c24_ZT_VehCtrl_18B_1009 =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S2>/Chart' */
  ZT_VehCtrl_18B_1009_DW.is_active_c22_ZT_VehCtrl_18B_1009 = 0U;
  ZT_VehCtrl_18B_1009_DW.is_c22_ZT_VehCtrl_18B_1009 =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for IfAction SubSystem: '<S2>/CS1 LS' */
  /* SystemInitialize for Chart: '<S10>/Chart' */
  ZT_VehCtrl_18B_1009_DW.is_active_c11_ZT_VehCtrl_18B_1009 = 0U;
  ZT_VehCtrl_18B_1009_DW.is_c11_ZT_VehCtrl_18B_1009 =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<S2>/CS1 LS' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/CS3 LS' */
  /* SystemInitialize for Chart: '<S12>/Chart' */
  ZT_VehCtrl_18B_1009_DW.is_active_c14_ZT_VehCtrl_18B_1009 = 0U;
  ZT_VehCtrl_18B_1009_DW.is_c14_ZT_VehCtrl_18B_1009 =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<S2>/CS3 LS' */

  /* SystemInitialize for IfAction SubSystem: '<S2>/CS5 LS' */
  /* SystemInitialize for Chart: '<S13>/Chart' */
  ZT_VehCtrl_18B_1009_DW.is_active_c21_ZT_VehCtrl_18B_1009 = 0U;
  ZT_VehCtrl_18B_1009_DW.is_c21_ZT_VehCtrl_18B_1009 =
    ZT_VehCtrl_18B_1009_IN_NO_ACTIVE_CHILD;

  /* End of SystemInitialize for SubSystem: '<S2>/CS5 LS' */
}

/* Model terminate function */
void ZT_VehCtrl_18B_1009_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
