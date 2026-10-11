/*
 * File: ZT_VehCtrl_18B_1009.h
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

#ifndef RTW_HEADER_ZT_VehCtrl_18B_1009_h_
#define RTW_HEADER_ZT_VehCtrl_18B_1009_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef ZT_VehCtrl_18B_1009_COMMON_INCLUDES_
# define ZT_VehCtrl_18B_1009_COMMON_INCLUDES_
#include <stdint.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "flexcan_hw_access.h"
#include "flexcan_driver.h"
#include "interrupt_manager.h"
#include "can_message.h"
#include "device_registers.h"
#include "clock_manager.h"
#include "pins_driver.h"
#include "mbdt_clock.h"
#include "etimer_driver.h"
#include "adc_sar_driver.h"
#include "mbdt_adc.h"
#include "freemaster.h"
#include "freemaster_interface_init.h"
#include "dspi_driver.h"
#include "dspi_hw_access.h"
#include "osif.h"
#include "edma_driver.h"
#include "fcan0_mpc_event_callback.h"
#include "fcan1_mpc_event_callback.h"
#include "adc0_params.h"
#include "adc1_params.h"
#include "etimer0_channel2_config.h"
#include "etimer1_channel2_config.h"
#include "etimer0_channel3_config.h"
#include "etimer0_channel5_config.h"
#include "etimer2_channel2_config.h"
#include "etimer1_channel3_config.h"
#include "etimer1_channel1_config.h"
#endif                                 /* ZT_VehCtrl_18B_1009_COMMON_INCLUDES_ */

#include "ZT_VehCtrl_18B_1009_types.h"
#include "rt_zcfcn.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  CAN_MESSAGE_BUS VCU_TWV;             /* '<S198>/VCU_TWV' */
  CAN_MESSAGE_BUS TMS;                 /* '<S197>/TMS' */
  CAN_MESSAGE_BUS TMHCUCommand;        /* '<S196>/TM HCU Command' */
  CAN_MESSAGE_BUS VCU_PDU;             /* '<S195>/VCU_PDU' */
  CAN_MESSAGE_BUS VCU2MCU2;            /* '<S194>/VCU2MCU2' */
  CAN_MESSAGE_BUS VCU2MCU1;            /* '<S193>/VCU2MCU1' */
  CAN_MESSAGE_BUS ISGHCUCommand;       /* '<S192>/ISG HCU Command' */
  CAN_MESSAGE_BUS VCU2ICUInfor2;       /* '<S191>/VCU2ICUInfor2' */
  CAN_MESSAGE_BUS VCU2ICUInfor1;       /* '<S190>/VCU2ICUInfor1' */
  CAN_MESSAGE_BUS VCU2ICUInfor3;       /* '<S190>/VCU2ICUInfor3' */
  CAN_MESSAGE_BUS VCU2ICUInfor4;       /* '<S190>/VCU2ICUInfor4' */
  CAN_MESSAGE_BUS VCU2ICUInfor5;       /* '<S190>/VCU2ICUInfor5' */
  CAN_MESSAGE_BUS VCU2ICUInfor6;       /* '<S190>/VCU2ICUInfor6' */
  CAN_MESSAGE_BUS VCU2ICUInfor7;       /* '<S190>/VCU2ICUInfor7' */
  CAN_MESSAGE_BUS Ctrl_HVC;            /* '<S189>/Ctrl_HVC' */
  CAN_MESSAGE_BUS VCU_DCDC1;           /* '<S187>/VCU_DCDC1' */
  CAN_MESSAGE_BUS VCU2BRS;             /* '<S186>/VCU2BRS' */
  CAN_MESSAGE_BUS VCU_BMS;             /* '<S185>/VCU_BMS' */
  CAN_MESSAGE_BUS VCU_ACU1;            /* '<S184>/VCU_ACU1' */
  CAN_MESSAGE_BUS CAN_Msg_In;          /* '<S152>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_h;        /* '<S151>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_p;        /* '<S150>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_hr;       /* '<S149>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_hq;       /* '<S148>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_f;        /* '<S147>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_m;        /* '<S146>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_l;        /* '<S145>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_g;        /* '<S144>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_d;        /* '<S143>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_pn;       /* '<S142>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_gp;       /* '<S141>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_dh;       /* '<S127>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_lb;       /* '<S126>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_c;        /* '<S125>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_b;        /* '<S124>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_k;        /* '<S123>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_d0;       /* '<S116>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_e;        /* '<S113>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_c0;       /* '<S112>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_ky;       /* '<S111>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_hp;       /* '<S105>/Bus Creator' */
  CAN_MESSAGE_BUS CAN_Msg_In_fc;       /* '<S98>/Bus Creator' */
  real_T VCU2DrvMotor_WorkMode;        /* '<S229>/Chart' */
  real_T TM_Gear;                      /* '<S229>/Chart' */
  real_T TM_Control_Mode;              /* '<S229>/Chart' */
  real_T VCU_PowerOnReq;               /* '<S226>/Chart' */
  real_T VCU_UrgencyCutOffPowerReq;    /* '<S226>/Chart' */
  real_T VCU_DCDC1_En;                 /* '<S226>/Chart' */
  real_T OnOffCmd;                     /* '<S226>/Chart' */
  real_T EDrv1_PowOnCmd;               /* '<S226>/Chart' */
  real_T EDrv2_PowOnCmd;               /* '<S226>/Chart' */
  real_T DcdcCmd;                      /* '<S226>/Chart' */
  real_T VCU_ShrRlyCtl;                /* '<S226>/Chart' */
  real_T VCU_HghVtgCtl;                /* '<S226>/Chart' */
  real_T OBCEnSig;                     /* '<S226>/Chart' */
  real_T DataTypeConversion;           /* '<S197>/Data Type Conversion' */
  real_T CANUnpack6_o1;                /* '<S152>/CAN Unpack6' */
  real_T CANUnpack6_o2;                /* '<S152>/CAN Unpack6' */
  real_T CANUnpack6_o3;                /* '<S152>/CAN Unpack6' */
  real_T CANUnpack6_o4;                /* '<S152>/CAN Unpack6' */
  real_T CANUnpack6_o5;                /* '<S152>/CAN Unpack6' */
  real_T CANUnpack6_o1_j;              /* '<S151>/CAN Unpack6' */
  real_T CANUnpack6_o2_j;              /* '<S151>/CAN Unpack6' */
  real_T CANUnpack6_o3_l;              /* '<S151>/CAN Unpack6' */
  real_T CANUnpack6_o4_g;              /* '<S151>/CAN Unpack6' */
  real_T CANUnpack6_o5_m;              /* '<S151>/CAN Unpack6' */
  real_T CANUnpack6_o6;                /* '<S151>/CAN Unpack6' */
  real_T CANUnpack6_o1_d;              /* '<S150>/CAN Unpack6' */
  real_T CANUnpack6_o2_p;              /* '<S150>/CAN Unpack6' */
  real_T CANUnpack6_o3_e;              /* '<S150>/CAN Unpack6' */
  real_T CANUnpack6_o4_i;              /* '<S150>/CAN Unpack6' */
  real_T CANUnpack6_o5_a;              /* '<S150>/CAN Unpack6' */
  real_T CANUnpack6_o6_m;              /* '<S150>/CAN Unpack6' */
  real_T CANUnpack6_o7;                /* '<S150>/CAN Unpack6' */
  real_T CANUnpack6_o1_i;              /* '<S149>/CAN Unpack6' */
  real_T CANUnpack6_o2_n;              /* '<S149>/CAN Unpack6' */
  real_T CANUnpack6_o3_g;              /* '<S149>/CAN Unpack6' */
  real_T CANUnpack6_o4_j;              /* '<S149>/CAN Unpack6' */
  real_T CANUnpack6_o5_f;              /* '<S149>/CAN Unpack6' */
  real_T CANUnpack6_o6_n;              /* '<S149>/CAN Unpack6' */
  real_T CANUnpack6_o1_f;              /* '<S148>/CAN Unpack6' */
  real_T CANUnpack6_o2_d;              /* '<S148>/CAN Unpack6' */
  real_T CANUnpack6_o3_i;              /* '<S148>/CAN Unpack6' */
  real_T CANUnpack6_o4_is;             /* '<S148>/CAN Unpack6' */
  real_T CANUnpack6_o5_o;              /* '<S148>/CAN Unpack6' */
  real_T CANUnpack6_o6_m4;             /* '<S148>/CAN Unpack6' */
  real_T CANUnpack6_o7_j;              /* '<S148>/CAN Unpack6' */
  real_T CANUnpack6_o8;                /* '<S148>/CAN Unpack6' */
  real_T CANUnpack6_o9;                /* '<S148>/CAN Unpack6' */
  real_T CANUnpack6_o1_l;              /* '<S147>/CAN Unpack6' */
  real_T CANUnpack6_o2_dz;             /* '<S147>/CAN Unpack6' */
  real_T CANUnpack6_o3_k;              /* '<S147>/CAN Unpack6' */
  real_T CANUnpack6_o4_f;              /* '<S147>/CAN Unpack6' */
  real_T CANUnpack6_o1_k;              /* '<S146>/CAN Unpack6' */
  real_T CANUnpack6_o2_k;              /* '<S146>/CAN Unpack6' */
  real_T CANUnpack6_o3_lu;             /* '<S146>/CAN Unpack6' */
  real_T CANUnpack6_o4_p;              /* '<S146>/CAN Unpack6' */
  real_T CANUnpack6_o5_i;              /* '<S146>/CAN Unpack6' */
  real_T CANUnpack6_o6_l;              /* '<S146>/CAN Unpack6' */
  real_T CANUnpack6_o1_m;              /* '<S145>/CAN Unpack6' */
  real_T CANUnpack6_o2_ks;             /* '<S145>/CAN Unpack6' */
  real_T CANUnpack6_o3_n;              /* '<S145>/CAN Unpack6' */
  real_T CANUnpack6_o4_d;              /* '<S145>/CAN Unpack6' */
  real_T CANUnpack6_o5_l;              /* '<S145>/CAN Unpack6' */
  real_T CANUnpack6_o6_h;              /* '<S145>/CAN Unpack6' */
  real_T CANUnpack6_o7_m;              /* '<S145>/CAN Unpack6' */
  real_T CANUnpack6_o8_d;              /* '<S145>/CAN Unpack6' */
  real_T CANUnpack6_o9_o;              /* '<S145>/CAN Unpack6' */
  real_T CANUnpack6_o1_c;              /* '<S144>/CAN Unpack6' */
  real_T CANUnpack6_o2_h;              /* '<S144>/CAN Unpack6' */
  real_T CANUnpack6_o3_d;              /* '<S144>/CAN Unpack6' */
  real_T CANUnpack6_o4_pj;             /* '<S144>/CAN Unpack6' */
  real_T CANUnpack6_o1_lt;             /* '<S143>/CAN Unpack6' */
  real_T CANUnpack6_o2_dg;             /* '<S143>/CAN Unpack6' */
  real_T CANUnpack6_o3_ln;             /* '<S143>/CAN Unpack6' */
  real_T CANUnpack6_o4_c;              /* '<S143>/CAN Unpack6' */
  real_T CANUnpack6_o5_d;              /* '<S143>/CAN Unpack6' */
  real_T CANUnpack6_o1_g;              /* '<S142>/CAN Unpack6' */
  real_T CANUnpack6_o2_a;              /* '<S142>/CAN Unpack6' */
  real_T CANUnpack6_o3_f;              /* '<S142>/CAN Unpack6' */
  real_T CANUnpack6_o4_b;              /* '<S142>/CAN Unpack6' */
  real_T CANUnpack6_o5_il;             /* '<S142>/CAN Unpack6' */
  real_T CANUnpack6_o6_mk;             /* '<S142>/CAN Unpack6' */
  real_T CANUnpack6_o1_du;             /* '<S141>/CAN Unpack6' */
  real_T CANUnpack6_o2_jp;             /* '<S141>/CAN Unpack6' */
  real_T CANUnpack6_o3_lh;             /* '<S141>/CAN Unpack6' */
  real_T CANUnpack6_o4_bb;             /* '<S141>/CAN Unpack6' */
  real_T CANUnpack6_o5_lc;             /* '<S141>/CAN Unpack6' */
  real_T CANUnpack6_o6_b;              /* '<S141>/CAN Unpack6' */
  real_T CANUnpack6_o7_p;              /* '<S141>/CAN Unpack6' */
  real_T CANUnpack6_o1_gz;             /* '<S127>/CAN Unpack6' */
  real_T CANUnpack6_o2_h2;             /* '<S127>/CAN Unpack6' */
  real_T CANUnpack6_o1_e;              /* '<S126>/CAN Unpack6' */
  real_T CANUnpack6_o2_l;              /* '<S126>/CAN Unpack6' */
  real_T CANUnpack6_o3_nf;             /* '<S126>/CAN Unpack6' */
  real_T CANUnpack6_o4_dm;             /* '<S126>/CAN Unpack6' */
  real_T CANUnpack6_o5_oy;             /* '<S126>/CAN Unpack6' */
  real_T CANUnpack6_o6_n3;             /* '<S126>/CAN Unpack6' */
  real_T CANUnpack6_o7_b;              /* '<S126>/CAN Unpack6' */
  real_T CANUnpack6_o1_b;              /* '<S125>/CAN Unpack6' */
  real_T CANUnpack6_o2_hb;             /* '<S125>/CAN Unpack6' */
  real_T CANUnpack6_o3_f4;             /* '<S125>/CAN Unpack6' */
  real_T CANUnpack6_o4_o;              /* '<S125>/CAN Unpack6' */
  real_T CANUnpack6_o5_h;              /* '<S125>/CAN Unpack6' */
  real_T CANUnpack6_o6_k;              /* '<S125>/CAN Unpack6' */
  real_T CANUnpack6_o7_o;              /* '<S125>/CAN Unpack6' */
  real_T CANUnpack6_o8_k;              /* '<S125>/CAN Unpack6' */
  real_T CANUnpack6_o1_jk;             /* '<S124>/CAN Unpack6' */
  real_T CANUnpack6_o2_a2;             /* '<S124>/CAN Unpack6' */
  real_T CANUnpack6_o3_gp;             /* '<S124>/CAN Unpack6' */
  real_T CANUnpack6_o4_h;              /* '<S124>/CAN Unpack6' */
  real_T CANUnpack6_o5_k;              /* '<S124>/CAN Unpack6' */
  real_T CANUnpack6_o6_d;              /* '<S124>/CAN Unpack6' */
  real_T CANUnpack6_o1_l5;             /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o2_m;              /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o3_j;              /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o4_oa;             /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o5_dt;             /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o6_hb;             /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o7_n;              /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o8_o;              /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o9_p;              /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o10;               /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o11;               /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o12;               /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o13;               /* '<S123>/CAN Unpack6' */
  real_T CANUnpack6_o1_cy;             /* '<S116>/CAN Unpack6' */
  real_T CANUnpack6_o2_ps;             /* '<S116>/CAN Unpack6' */
  real_T CANUnpack6_o3_m;              /* '<S116>/CAN Unpack6' */
  real_T CANUnpack6_o4_hj;             /* '<S116>/CAN Unpack6' */
  real_T CANUnpack6_o5_c;              /* '<S116>/CAN Unpack6' */
  real_T CANUnpack6_o1_br;             /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o2_e;              /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o3_de;             /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o4_k;              /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o5_af;             /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o6_bn;             /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o7_g;              /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o8_b;              /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o9_m;              /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o10_j;             /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o11_n;             /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o12_d;             /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o13_c;             /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o14;               /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o15;               /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o16;               /* '<S113>/CAN Unpack6' */
  real_T CANUnpack6_o1_h;              /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o2_ec;             /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o3_h;              /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o4_hn;             /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o5_iq;             /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o6_i;              /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o7_i;              /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o8_bo;             /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o9_oi;             /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o10_l;             /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o11_a;             /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o12_i;             /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o13_d;             /* '<S112>/CAN Unpack6' */
  real_T CANUnpack6_o1_o;              /* '<S111>/CAN Unpack6' */
  real_T CANUnpack6_o2_jk;             /* '<S111>/CAN Unpack6' */
  real_T CANUnpack6_o3_gr;             /* '<S111>/CAN Unpack6' */
  real_T CANUnpack6_o4_a;              /* '<S111>/CAN Unpack6' */
  real_T CANUnpack6_o1_n;              /* '<S105>/CAN Unpack6' */
  real_T CANUnpack6_o2_b;              /* '<S105>/CAN Unpack6' */
  real_T CANUnpack6_o3_it;             /* '<S105>/CAN Unpack6' */
  real_T CANUnpack6_o4_ja;             /* '<S105>/CAN Unpack6' */
  real_T CANUnpack6_o1_gr;             /* '<S98>/CAN Unpack6' */
  real_T CANUnpack6_o2_c;              /* '<S98>/CAN Unpack6' */
  real_T CANUnpack6_o3_o;              /* '<S98>/CAN Unpack6' */
  real_T high;                         /* '<S12>/Chart' */
  real_T low;                          /* '<S12>/Chart' */
  uint32_T CAN0_Rx_500_o3;             /* '<S5>/CAN0_Rx_500' */
  uint32_T CAN1_Rx_500_o3;             /* '<S5>/CAN1_Rx_500' */
  real32_T FaultMax;                   /* '<S227>/Max' */
  real32_T VCU_DisChargePwr_kw;        /* '<S232>/Abs' */
  real32_T VCU_VehSpd_kmh;             /* '<S232>/Gain' */
  real32_T VCU_OilMtSpd_rpm;           /* '<S232>/Max10' */
  real32_T VCU_OilMtTrq_Nm;            /* '<S232>/Max11' */
  real32_T VCU_OilMCUBusVolt_V;        /* '<S232>/Max12' */
  real32_T VCU_OilMCUBusCurr_A;        /* '<S232>/Max13' */
  real32_T VCU_OilMtTemp_deg;          /* '<S232>/Max2' */
  real32_T VCU_DrvMtTemp_deg;          /* '<S232>/Max3' */
  real32_T VCU_OilMtCtlUnitTemp_deg;   /* '<S232>/Max4' */
  real32_T VCU_DrvMtCtlUnitTemp_deg;   /* '<S232>/Max5' */
  real32_T VCU_DrvMtSpd_rpm;           /* '<S232>/Max6' */
  real32_T VCU_DrvMtTrq_Nm;            /* '<S232>/Max7' */
  real32_T VCU_DrvMCUBusVolt_V;        /* '<S232>/Max8' */
  real32_T VCU_DrvMCUBusCurr_A;        /* '<S232>/Max9' */
  real32_T VCU_RegenPwr_kw;            /* '<S232>/Saturation1' */
  real32_T VCU2DrvMotor_TarTrq;        /* '<S229>/Chart' */
  real32_T Flag;                       /* '<S226>/Chart' */
  real32_T DataStoreRead10;            /* '<S198>/Data Store Read10' */
  real32_T DataTypeConversion_m;       /* '<S196>/Data Type Conversion' */
  real32_T DataTypeConversion1;        /* '<S196>/Data Type Conversion1' */
  real32_T DataTypeConversion2;        /* '<S196>/Data Type Conversion2' */
  real32_T DataStoreRead9;             /* '<S195>/Data Store Read9' */
  real32_T DataStoreRead6;             /* '<S195>/Data Store Read6' */
  real32_T DataTypeConversion4;        /* '<S195>/Data Type Conversion4' */
  real32_T DataTypeConversion_mm;      /* '<S195>/Data Type Conversion' */
  real32_T DataStoreRead7;             /* '<S195>/Data Store Read7' */
  real32_T DataTypeConversion3;        /* '<S195>/Data Type Conversion3' */
  real32_T DataTypeConversion_o;       /* '<S194>/Data Type Conversion' */
  real32_T DataTypeConversion1_l;      /* '<S194>/Data Type Conversion1' */
  real32_T DataTypeConversion2_i;      /* '<S194>/Data Type Conversion2' */
  real32_T DataTypeConversion1_b;      /* '<S193>/Data Type Conversion1' */
  real32_T DataTypeConversion_a;       /* '<S192>/Data Type Conversion' */
  real32_T DataTypeConversion15;       /* '<S189>/Data Type Conversion15' */
  real32_T DataTypeConversion_e;       /* '<S187>/Data Type Conversion' */
  real32_T DataTypeConversion3_b;      /* '<S186>/Data Type Conversion3' */
  real32_T Switch_e;                   /* '<S202>/Switch' */
  real32_T Switch_f;                   /* '<S201>/Switch' */
  real32_T Switch_ex;                  /* '<S200>/Switch' */
  real32_T Switch_ef;                  /* '<S199>/Switch' */
  real32_T DC_Current_A;               /* '<S152>/Data Type Conversion2' */
  real32_T DC_Voltage_A;               /* '<S152>/Data Type Conversion3' */
  real32_T Fail_Grade;                 /* '<S151>/Data Type Conversion1' */
  real32_T MCU_temperature;            /* '<S151>/Data Type Conversion3' */
  real32_T Motor_Temperature;          /* '<S151>/Data Type Conversion4' */
  real32_T Motor_Speed;                /* '<S150>/Data Type Conversion5' */
  real32_T Motor_Torque;               /* '<S150>/Data Type Conversion6' */
  real32_T DrvMotorMCUTemp1;           /* '<S149>/Data Type Conversion1' */
  real32_T DrvMotorMCUTemp2;           /* '<S149>/Data Type Conversion2' */
  real32_T DrvMotorMCUTemp3;           /* '<S149>/Data Type Conversion3' */
  real32_T DrvMotorTemp1;              /* '<S149>/Data Type Conversion4' */
  real32_T DrvMotorTemp2;              /* '<S149>/Data Type Conversion5' */
  real32_T DrvMotorTemp3;              /* '<S149>/Data Type Conversion6' */
  real32_T DrvMotorFaultLevel;         /* '<S148>/Data Type Conversion4' */
  real32_T DrvMotorBusCur;             /* '<S147>/Data Type Conversion1' */
  real32_T DrvMotorBusVolt;            /* '<S147>/Data Type Conversion2' */
  real32_T DrvMotorSpd;                /* '<S147>/Data Type Conversion3' */
  real32_T DrvMotorTrq;                /* '<S147>/Data Type Conversion4' */
  real32_T OilMotorMCUTemp1;           /* '<S146>/Data Type Conversion1' */
  real32_T OilMotorMCUTemp2;           /* '<S146>/Data Type Conversion2' */
  real32_T OilMotorMCUTemp3;           /* '<S146>/Data Type Conversion3' */
  real32_T OilMotorTemp1;              /* '<S146>/Data Type Conversion4' */
  real32_T OilMotorTemp2;              /* '<S146>/Data Type Conversion5' */
  real32_T OilMotorTemp3;              /* '<S146>/Data Type Conversion6' */
  real32_T OilMotorFaultLevel;         /* '<S145>/Data Type Conversion4' */
  real32_T OilMotorBusCur;             /* '<S144>/Data Type Conversion1' */
  real32_T OilMotorBusVolt;            /* '<S144>/Data Type Conversion2' */
  real32_T OilMotorSpd;                /* '<S144>/Data Type Conversion3' */
  real32_T OilMotorTrq;                /* '<S144>/Data Type Conversion4' */
  real32_T DC_Current_A_m;             /* '<S143>/Data Type Conversion2' */
  real32_T DC_Voltage_V;               /* '<S143>/Data Type Conversion3' */
  real32_T Fail_Grade_d;               /* '<S142>/Data Type Conversion1' */
  real32_T MCU_temperature_g;          /* '<S142>/Data Type Conversion3' */
  real32_T Motor_Temperature_p;        /* '<S142>/Data Type Conversion4' */
  real32_T Motor_Speed_e;              /* '<S141>/Data Type Conversion5' */
  real32_T Motor_Torque_d;             /* '<S141>/Data Type Conversion6' */
  real32_T TMS_FanSpeedLvl_num;        /* '<S127>/Data Type Conversion1' */
  real32_T PDU_PosRlyPcgRlySts;        /* '<S126>/Data Type Conversion5' */
  real32_T PDU_PosRlySts;              /* '<S126>/Data Type Conversion6' */
  real32_T PDU_ShrRlySts;              /* '<S126>/Data Type Conversion7' */
  real32_T HVC_FaultLevel;             /* '<S123>/Data Type Conversion11' */
  real32_T FaultLevel;                 /* '<S116>/Data Type Conversion2' */
  real32_T BMS_AlarmLevel;             /* '<S112>/Data Type Conversion1' */
  real32_T BMS_ChargeStatus;           /* '<S112>/Data Type Conversion4' */
  real32_T BMS_SelfCheckStatus;        /* '<S112>/Data Type Conversion9' */
  real32_T Cur_Bat;                    /* '<S111>/Data Type Conversion1' */
  real32_T Display_SOC;                /* '<S111>/Data Type Conversion2' */
  real32_T SOC;                        /* '<S111>/Data Type Conversion3' */
  real32_T Vol_Bat;                    /* '<S111>/Data Type Conversion4' */
  real32_T Statistic_TemperatureHTMax; /* '<S105>/Data Type Conversion1' */
  real32_T Statistic_TemperatureLTMax; /* '<S105>/Data Type Conversion3' */
  real32_T BMS_InsulationResistance;   /* '<S98>/Data Type Conversion2' */
  real32_T BMS_BatteryPower;           /* '<S98>/Data Type Conversion3' */
  uint16_T ADC_Start[5];               /* '<S37>/ADC_Start' */
  uint16_T ADC_Start1[10];             /* '<S37>/ADC_Start1' */
  uint16_T CAN0_Rx_500_o6;             /* '<S5>/CAN0_Rx_500' */
  uint16_T CAN1_Rx_500_o6;             /* '<S5>/CAN1_Rx_500' */
  uint16_T DataTypeConversion1_n;      /* '<S210>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_if;     /* '<S210>/Data Type Conversion2' */
  uint16_T DataTypeConversion1_nq;     /* '<S209>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_iv;     /* '<S209>/Data Type Conversion2' */
  uint16_T DataTypeConversion1_p;      /* '<S208>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_p;      /* '<S208>/Data Type Conversion2' */
  uint8_T CAN0_Rx_500_o2;              /* '<S5>/CAN0_Rx_500' */
  uint8_T CAN0_Rx_500_o4[8];           /* '<S5>/CAN0_Rx_500' */
  uint8_T CAN0_Rx_500_o5;              /* '<S5>/CAN0_Rx_500' */
  uint8_T CAN1_Rx_500_o2;              /* '<S5>/CAN1_Rx_500' */
  uint8_T CAN1_Rx_500_o4[8];           /* '<S5>/CAN1_Rx_500' */
  uint8_T CAN1_Rx_500_o5;              /* '<S5>/CAN1_Rx_500' */
  uint8_T DataStoreRead1;              /* '<S197>/Data Store Read1' */
  uint8_T SPI_Master_Transfer_To2[2];  /* '<S224>/SPI_Master_Transfer_To2' */
  uint8_T VectorConcatenate2[2];       /* '<S224>/Vector Concatenate2' */
  uint8_T SPI_Master_Transfer_To1[2];  /* '<S220>/SPI_Master_Transfer_To1' */
  uint8_T VectorConcatenate1[2];       /* '<S220>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To1_j[2];/* '<S219>/SPI_Master_Transfer_To1' */
  uint8_T VectorConcatenate1_l[2];     /* '<S219>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To2_a[2];/* '<S12>/SPI_Master_Transfer_To2' */
  uint8_T VectorConcatenate1_a[2];     /* '<S12>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To1_c[2];/* '<S13>/SPI_Master_Transfer_To1' */
  uint8_T VectorConcatenate1_n[2];     /* '<S13>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To1_g[2];/* '<S10>/SPI_Master_Transfer_To1' */
  uint8_T VectorConcatenate1_m[2];     /* '<S10>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To2_h[2];/* '<S11>/SPI_Master_Transfer_To2' */
  boolean_T DI01_h;                    /* '<S41>/DI01' */
  boolean_T DI02_c;                    /* '<S41>/DI02' */
  boolean_T DI03_h;                    /* '<S41>/DI03' */
  boolean_T DI04_o;                    /* '<S41>/DI04' */
  boolean_T DI07_f;                    /* '<S41>/DI07' */
  boolean_T DI08_e;                    /* '<S41>/DI08' */
  boolean_T DI09_a;                    /* '<S41>/DI09' */
  boolean_T DI10_g;                    /* '<S41>/DI10' */
  boolean_T DI12_h;                    /* '<S41>/DI12' */
  boolean_T DI13_m;                    /* '<S41>/DI13' */
  boolean_T DI15_b;                    /* '<S41>/DI15' */
  boolean_T DI16_k;                    /* '<S41>/DI16' */
  boolean_T DI17_c;                    /* '<S41>/DI17' */
  boolean_T DI18_k;                    /* '<S41>/DI18' */
  boolean_T DI31_g;                    /* '<S154>/DI31' */
  boolean_T DI32_l;                    /* '<S154>/DI32' */
  boolean_T DI33_b;                    /* '<S154>/DI33' */
  boolean_T DI34_p;                    /* '<S154>/DI34' */
  boolean_T ShutDown;                  /* '<S227>/Logical Operator' */
  boolean_T DataStoreRead7_a;          /* '<S204>/Data Store Read7' */
  boolean_T DataStoreRead6_n;          /* '<S204>/Data Store Read6' */
  boolean_T DataStoreRead5;            /* '<S204>/Data Store Read5' */
  boolean_T DataStoreRead4;            /* '<S204>/Data Store Read4' */
  boolean_T DataStoreRead2;            /* '<S204>/Data Store Read2' */
  boolean_T DataStoreRead;             /* '<S204>/Data Store Read' */
  boolean_T Compare_f;                 /* '<S260>/Compare' */
  boolean_T Compare_e;                 /* '<S261>/Compare' */
  boolean_T Compare_o;                 /* '<S262>/Compare' */
  boolean_T Compare_os;                /* '<S263>/Compare' */
  boolean_T VCU_CoolFanWrkIdc_b;       /* '<S232>/Data Type Conversion3' */
  boolean_T VCU_Pst_b;                 /* '<S232>/Logical Operator1' */
  boolean_T DataStoreRead9_g;          /* '<S204>/Data Store Read9' */
  boolean_T Ready;                     /* '<S226>/Chart' */
  boolean_T HVCReady;                  /* '<S226>/Chart' */
  boolean_T PDUReady;                  /* '<S226>/Chart' */
  boolean_T OBC_HVCReady;              /* '<S226>/Chart' */
  boolean_T OBC_PDUReady;              /* '<S226>/Chart' */
  boolean_T OBC_Front_OffDone;         /* '<S226>/Chart' */
  boolean_T OBC_Rear_OffDone;          /* '<S226>/Chart' */
  boolean_T Front_OffDone;             /* '<S226>/Chart' */
  boolean_T Rear_OffDone;              /* '<S226>/Chart' */
  boolean_T DataTypeConversion3_h;     /* '<S196>/Data Type Conversion3' */
  boolean_T DataTypeConversion3_f;     /* '<S194>/Data Type Conversion3' */
  boolean_T DataTypeConversion_d;      /* '<S193>/Data Type Conversion' */
  boolean_T DataTypeConversion1_f;     /* '<S192>/Data Type Conversion1' */
  boolean_T DataTypeConversion_ma;     /* '<S189>/Data Type Conversion' */
  boolean_T DataTypeConversion3_c;     /* '<S189>/Data Type Conversion3' */
  boolean_T DataStoreRead9_h;          /* '<S189>/Data Store Read9' */
  boolean_T DataStoreRead8;            /* '<S189>/Data Store Read8' */
  boolean_T DataTypeConversion2_c;     /* '<S186>/Data Type Conversion2' */
  boolean_T DataTypeConversion_g;      /* '<S185>/Data Type Conversion' */
  boolean_T DataTypeConversion1_i;     /* '<S185>/Data Type Conversion1' */
  boolean_T OBC_HwFault;               /* '<S125>/Data Type Conversion3' */
  boolean_T OBC_InputVoltage;          /* '<S125>/Data Type Conversion4' */
  boolean_T OBC_OutputShortCircuit;    /* '<S125>/Data Type Conversion5' */
  boolean_T OBC_StartSt;               /* '<S125>/Data Type Conversion6' */
  boolean_T OBC_Temp;                  /* '<S125>/Data Type Conversion7' */
  boolean_T MotDrv2_PowOnSt;           /* '<S123>/Data Type Conversion3' */
  boolean_T MotDrv1_PowOnSt;           /* '<S123>/Data Type Conversion4' */
  boolean_T Relay_NegativeStatus;      /* '<S113>/Data Type Conversion10' */
} B_ZT_VehCtrl_18B_1009_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Cnt1;                         /* '<S226>/Chart' */
  real_T Cnt2;                         /* '<S226>/Chart' */
  real_T Cnt3;                         /* '<S226>/Chart' */
  real_T Cnt4;                         /* '<S226>/Chart' */
  real_T cnt;                          /* '<S12>/Chart' */
  real_T cnt_p;                        /* '<S13>/Chart' */
  real_T cnt_b;                        /* '<S10>/Chart' */
  real_T cnt_m;                        /* '<S2>/Chart2' */
  real_T cnt_j;                        /* '<S2>/Chart1' */
  int32_T clockTickCounter;            /* '<S6>/Pulse Generator2' */
  int32_T clockTickCounter_i;          /* '<S6>/Pulse Generator1' */
  int32_T clockTickCounter_e;          /* '<S6>/Pulse Generator' */
  int32_T clockTickCounter_h;          /* '<S6>/Pulse Generator6' */
  int32_T clockTickCounter_p;          /* '<S2>/Pulse Generator' */
  int_T VCU_TWV_ModeSignalID;          /* '<S198>/VCU_TWV' */
  int_T TMS_ModeSignalID;              /* '<S197>/TMS' */
  int_T TMHCUCommand_ModeSignalID;     /* '<S196>/TM HCU Command' */
  int_T VCU_PDU_ModeSignalID;          /* '<S195>/VCU_PDU' */
  int_T VCU2MCU2_ModeSignalID;         /* '<S194>/VCU2MCU2' */
  int_T VCU2MCU1_ModeSignalID;         /* '<S193>/VCU2MCU1' */
  int_T ISGHCUCommand_ModeSignalID;    /* '<S192>/ISG HCU Command' */
  int_T VCU2ICUInfor2_ModeSignalID;    /* '<S191>/VCU2ICUInfor2' */
  int_T VCU2ICUInfor1_ModeSignalID;    /* '<S190>/VCU2ICUInfor1' */
  int_T VCU2ICUInfor3_ModeSignalID;    /* '<S190>/VCU2ICUInfor3' */
  int_T VCU2ICUInfor4_ModeSignalID;    /* '<S190>/VCU2ICUInfor4' */
  int_T VCU2ICUInfor5_ModeSignalID;    /* '<S190>/VCU2ICUInfor5' */
  int_T VCU2ICUInfor6_ModeSignalID;    /* '<S190>/VCU2ICUInfor6' */
  int_T VCU2ICUInfor7_ModeSignalID;    /* '<S190>/VCU2ICUInfor7' */
  int_T Ctrl_HVC_ModeSignalID;         /* '<S189>/Ctrl_HVC' */
  int_T VCU_DCDC1_ModeSignalID;        /* '<S187>/VCU_DCDC1' */
  int_T VCU2BRS_ModeSignalID;          /* '<S186>/VCU2BRS' */
  int_T VCU_BMS_ModeSignalID;          /* '<S185>/VCU_BMS' */
  int_T VCU_ACU1_ModeSignalID;         /* '<S184>/VCU_ACU1' */
  int_T CANUnpack6_ModeSignalID;       /* '<S152>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID;       /* '<S152>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_l;     /* '<S151>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_n;     /* '<S151>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_g;     /* '<S150>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_d;     /* '<S150>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_h;     /* '<S149>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_c;     /* '<S149>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_e;     /* '<S148>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_p;     /* '<S148>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_g2;    /* '<S147>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_j;     /* '<S147>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_i;     /* '<S146>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_i;     /* '<S146>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_p;     /* '<S145>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_g;     /* '<S145>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_n;     /* '<S144>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_cm;    /* '<S144>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_b;     /* '<S143>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_jk;    /* '<S143>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_h0;    /* '<S142>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_np;    /* '<S142>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_k;     /* '<S141>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_cb;    /* '<S141>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_m;     /* '<S127>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_ny;    /* '<S127>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_o;     /* '<S126>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_l;     /* '<S126>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_hu;    /* '<S125>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_lv;    /* '<S125>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_bi;    /* '<S124>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_o;     /* '<S124>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_a;     /* '<S123>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_j4;    /* '<S123>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_av;    /* '<S116>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_jg;    /* '<S116>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_mq;    /* '<S113>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_b;     /* '<S113>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_ma;    /* '<S112>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_ji;    /* '<S112>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_ij;    /* '<S111>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_m;     /* '<S111>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_mk;    /* '<S105>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_dw;    /* '<S105>/CAN Unpack6' */
  int_T CANUnpack6_ModeSignalID_d;     /* '<S98>/CAN Unpack6' */
  int_T CANUnpack6_StatusPortID_f;     /* '<S98>/CAN Unpack6' */
  uint8_T Init_flg;                    /* '<Root>/Data Store Memory4' */
  uint8_T is_active_c2_ZT_VehCtrl_18B_1009;/* '<S229>/Chart' */
  uint8_T is_FrontDrive;               /* '<S229>/Chart' */
  uint8_T is_RearDrive;                /* '<S229>/Chart' */
  uint8_T is_active_c3_ZT_VehCtrl_18B_1009;/* '<S226>/Chart' */
  uint8_T is_c3_ZT_VehCtrl_18B_1009;   /* '<S226>/Chart' */
  uint8_T is_OBC_FrontPwrOff;          /* '<S226>/Chart' */
  uint8_T is_OBC_RearPwrOff;           /* '<S226>/Chart' */
  uint8_T is_FrontPwrOff;              /* '<S226>/Chart' */
  uint8_T is_RearPwrOff;               /* '<S226>/Chart' */
  uint8_T is_OBCOn;                    /* '<S226>/Chart' */
  uint8_T is_OBC_HVC_path;             /* '<S226>/Chart' */
  uint8_T is_OBC_PDU_path;             /* '<S226>/Chart' */
  uint8_T is_PowerOn;                  /* '<S226>/Chart' */
  uint8_T is_HVC_path;                 /* '<S226>/Chart' */
  uint8_T is_BRS_path;                 /* '<S226>/Chart' */
  uint8_T is_PDU_path;                 /* '<S226>/Chart' */
  uint8_T is_active_c1_ZT_VehCtrl_18B_1009;/* '<S5>/Chart' */
  uint8_T is_c1_ZT_VehCtrl_18B_1009;   /* '<S5>/Chart' */
  uint8_T is_active_c14_ZT_VehCtrl_18B_1009;/* '<S12>/Chart' */
  uint8_T is_c14_ZT_VehCtrl_18B_1009;  /* '<S12>/Chart' */
  uint8_T is_active_c21_ZT_VehCtrl_18B_1009;/* '<S13>/Chart' */
  uint8_T is_c21_ZT_VehCtrl_18B_1009;  /* '<S13>/Chart' */
  uint8_T is_active_c11_ZT_VehCtrl_18B_1009;/* '<S10>/Chart' */
  uint8_T is_c11_ZT_VehCtrl_18B_1009;  /* '<S10>/Chart' */
  uint8_T is_active_c24_ZT_VehCtrl_18B_1009;/* '<S2>/Chart2' */
  uint8_T is_c24_ZT_VehCtrl_18B_1009;  /* '<S2>/Chart2' */
  uint8_T is_active_c23_ZT_VehCtrl_18B_1009;/* '<S2>/Chart1' */
  uint8_T is_c23_ZT_VehCtrl_18B_1009;  /* '<S2>/Chart1' */
  uint8_T is_active_c22_ZT_VehCtrl_18B_1009;/* '<S2>/Chart' */
  uint8_T is_c22_ZT_VehCtrl_18B_1009;  /* '<S2>/Chart' */
} DW_ZT_VehCtrl_18B_1009_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TWV_Trig_ZCE;             /* '<S6>/TWV' */
  ZCSigState TMS_Trig_ZCE;             /* '<S6>/TMS' */
  ZCSigState TM_Trig_ZCE;              /* '<S6>/TM' */
  ZCSigState PDU_Trig_ZCE;             /* '<S6>/PDU' */
  ZCSigState MCU2_Trig_ZCE;            /* '<S6>/MCU2' */
  ZCSigState MCU1_Trig_ZCE;            /* '<S6>/MCU1' */
  ZCSigState ISG_Trig_ZCE;             /* '<S6>/ISG' */
  ZCSigState ICU2_Trig_ZCE;            /* '<S6>/ICU2' */
  ZCSigState ICU1_Trig_ZCE;            /* '<S6>/ICU1 ' */
  ZCSigState HVC_Trig_ZCE;             /* '<S6>/HVC' */
  ZCSigState DCDC_Trig_ZCE;            /* '<S6>/DCDC' */
  ZCSigState BRS_Trig_ZCE;             /* '<S6>/BRS' */
  ZCSigState BMS_Trig_ZCE;             /* '<S6>/BMS' */
  ZCSigState ACU_Trig_ZCE;             /* '<S6>/ACU' */
} PrevZCX_ZT_VehCtrl_18B_1009_T;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Gain5;                  /* '<S225>/Gain5' */
  const real_T Gain4;                  /* '<S225>/Gain4' */
  const real_T Gain1;                  /* '<S225>/Gain1' */
  const real32_T DataTypeConversion1;  /* '<S229>/Data Type Conversion1' */
  const real32_T DataTypeConversion;   /* '<S229>/Data Type Conversion' */
  const real32_T DataTypeConversion2;  /* '<S191>/Data Type Conversion2' */
  const real32_T DataTypeConversion3;  /* '<S191>/Data Type Conversion3' */
  const real32_T DataTypeConversion4;  /* '<S191>/Data Type Conversion4' */
  const real32_T DataTypeConversion5;  /* '<S191>/Data Type Conversion5' */
  const real32_T DataTypeConversion_c; /* '<S186>/Data Type Conversion' */
  const real32_T DataTypeConversion1_f;/* '<S186>/Data Type Conversion1' */
  const uint16_T DataTypeConversion_b; /* '<S210>/Data Type Conversion' */
  const uint16_T DataTypeConversion_p; /* '<S209>/Data Type Conversion' */
  const uint16_T DataTypeConversion_h; /* '<S208>/Data Type Conversion' */
  const uint8_T DataTypeConversion_k;  /* '<S222>/Data Type Conversion' */
  const uint8_T DataTypeConversion_ch; /* '<S221>/Data Type Conversion' */
  const uint8_T DataTypeConversion3_o; /* '<S11>/Data Type Conversion3' */
  const uint8_T DataTypeConversion2_h; /* '<S11>/Data Type Conversion2' */
  const uint8_T VectorConcatenate2[2]; /* '<S11>/Vector Concatenate2' */
  const uint8_T DataTypeConversion_bd; /* '<S9>/Data Type Conversion' */
  const boolean_T DataTypeConversion_cp;/* '<S3>/Data Type Conversion' */
  const boolean_T DataTypeConversion1_o;/* '<S2>/Data Type Conversion1' */
  const boolean_T DataTypeConversion2_g;/* '<S9>/Data Type Conversion2' */
} ConstB_ZT_VehCtrl_18B_1009_T;

/* Constant parameters (default storage) */
typedef struct {
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
  real_T pooled4;

  /* Pooled Parameter (Mixed Expressions)
   * Referenced by:
   *   '<S5>/1-D Lookup Table'
   *   '<S229>/1-D Lookup Table'
   *   '<S229>/1-D Lookup Table2'
   */
  real32_T pooled15[2];

  /* Pooled Parameter (Expression: [0,1])
   * Referenced by:
   *   '<S43>/1-D Lookup Table'
   *   '<S43>/1-D Lookup Table1'
   *   '<S229>/1-D Lookup Table'
   *   '<S229>/1-D Lookup Table1'
   *   '<S229>/1-D Lookup Table2'
   *   '<S229>/1-D Lookup Table3'
   */
  real32_T pooled16[2];

  /* Computed Parameter: uDLookupTable3_tableData
   * Referenced by: '<S229>/1-D Lookup Table3'
   */
  real32_T uDLookupTable3_tableData[2];

  /* Computed Parameter: uDLookupTable1_tableData
   * Referenced by: '<S229>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_tableData[2];

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S43>/1-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data[2];

  /* Computed Parameter: uDLookupTable1_bp01Data
   * Referenced by: '<S43>/1-D Lookup Table1'
   */
  real32_T uDLookupTable1_bp01Data[2];

  /* Computed Parameter: uDLookupTable_bp01Data_f
   * Referenced by: '<S5>/1-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data_f[2];
} ConstP_ZT_VehCtrl_18B_1009_T;

/* Real-time Model Data Structure */
struct tag_RTM_ZT_VehCtrl_18B_1009_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_B;

/* Block states (default storage) */
extern DW_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_DW;
extern const ConstB_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_ConstB;/* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP_ZT_VehCtrl_18B_1009_T ZT_VehCtrl_18B_1009_ConstP;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real32_T AccPadle;              /* '<S43>/Switch' */
extern real32_T VehSpd_mps;            /* '<S231>/Product' */
extern real32_T RadiatorTempOut;       /* '<S5>/1-D Lookup Table' */
extern real32_T Gear;                  /* '<S5>/Chart' */
extern boolean_T ParkReleaseSw;        /* '<S5>/Data Store Read4' */
extern boolean_T ChargeEnSw;           /* '<S5>/Data Store Read6' */
extern boolean_T BodyLoadSw;           /* '<S5>/Data Store Read1' */
extern boolean_T HornSw;               /* '<S5>/Data Store Read2' */
extern boolean_T FourWSSw;             /* '<S5>/Data Store Read19' */
extern boolean_T CrabSteerSw;          /* '<S5>/Data Store Read20' */
extern boolean_T LegLoadSw;            /* '<S5>/Data Store Read3' */
extern boolean_T MotorLevelSw;         /* '<S5>/Data Store Read' */
extern boolean_T ParkLowWarn;          /* '<S5>/Data Store Read14' */

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern real32_T EnergyFlag;            /* '<Root>/Data Store Memory135' */
extern real32_T VCU_FanSpeedLvl_num;   /* '<Root>/Data Store Memory139' */
extern real32_T DcacEpsCmd;            /* '<Root>/Data Store Memory147' */
extern real32_T DcacEpsMode;           /* '<Root>/Data Store Memory148' */
extern real32_T DcacAcCmd;             /* '<Root>/Data Store Memory149' */
extern real32_T VCU_HVACRlyCtl;        /* '<Root>/Data Store Memory151' */
extern real32_T VCU_PTCRlyCtl;         /* '<Root>/Data Store Memory152' */
extern real32_T VCU_DCCpstRlyCtl;      /* '<Root>/Data Store Memory154' */
extern real32_T TWV_ON_Ctr;            /* '<Root>/Data Store Memory155' */
extern uint8_T Cnt_BMS6;               /* '<Root>/Data Store Memory1' */
extern uint8_T Cnt_TM_OUT;             /* '<Root>/Data Store Memory104' */
extern uint8_T Cnt_HVC4;               /* '<Root>/Data Store Memory12' */
extern uint8_T VCU_Mode;               /* '<Root>/Data Store Memory125' */
extern uint8_T Cnt_HVC7;               /* '<Root>/Data Store Memory13' */
extern uint8_T Cnt_ISG_OUT;            /* '<Root>/Data Store Memory133' */
extern uint8_T Cnt_TWV_OUT;            /* '<Root>/Data Store Memory134' */
extern uint8_T Cnt_MCU2_OUT;           /* '<Root>/Data Store Memory136' */
extern uint8_T Cnt_DCDC1_1;            /* '<Root>/Data Store Memory14' */
extern uint8_T Cnt_DCDC1_2;            /* '<Root>/Data Store Memory15' */
extern uint8_T Cnt_MCU1_1;             /* '<Root>/Data Store Memory16' */
extern uint8_T Cnt_MCU1_2;             /* '<Root>/Data Store Memory17' */
extern uint8_T Cnt_BMS1;               /* '<Root>/Data Store Memory177' */
extern uint8_T Cnt_BMS2;               /* '<Root>/Data Store Memory178' */
extern uint8_T Cnt_BMS3;               /* '<Root>/Data Store Memory179' */
extern uint8_T Cnt_MCU1_3;             /* '<Root>/Data Store Memory18' */
extern uint8_T Cnt_BMS4;               /* '<Root>/Data Store Memory180' */
extern uint8_T Cnt_BMS5;               /* '<Root>/Data Store Memory181' */
extern uint8_T Cnt_MCU2_1;             /* '<Root>/Data Store Memory19' */
extern uint8_T Cnt_OBC;                /* '<Root>/Data Store Memory2' */
extern uint8_T Cnt_MCU2_2;             /* '<Root>/Data Store Memory20' */
extern uint8_T Cnt_MCU2_3;             /* '<Root>/Data Store Memory21' */
extern uint8_T Cnt_ACU1;               /* '<Root>/Data Store Memory22' */
extern uint8_T Cnt_ACU2;               /* '<Root>/Data Store Memory23' */
extern uint8_T Cnt_ACU3;               /* '<Root>/Data Store Memory24' */
extern uint8_T Cnt_PDU;                /* '<Root>/Data Store Memory25' */
extern uint8_T Cnt_TMS;                /* '<Root>/Data Store Memory3' */
extern uint8_T Cnt_TWV;                /* '<Root>/Data Store Memory33' */
extern uint8_T Cnt_TM1;                /* '<Root>/Data Store Memory46' */
extern uint8_T Cnt_TM2;                /* '<Root>/Data Store Memory47' */
extern uint8_T Cnt_TM3;                /* '<Root>/Data Store Memory48' */
extern uint8_T Cnt_ISG1;               /* '<Root>/Data Store Memory49' */
extern uint8_T Cnt_BRS1;               /* '<Root>/Data Store Memory5' */
extern uint8_T Cnt_ISG2;               /* '<Root>/Data Store Memory50' */
extern uint8_T Cnt_ISG3;               /* '<Root>/Data Store Memory56' */
extern uint8_T Cnt_BMS_OUT;            /* '<Root>/Data Store Memory57' */
extern uint8_T Cnt_TMS_OUT;            /* '<Root>/Data Store Memory58' */
extern uint8_T Cnt_ICU_OUT1;           /* '<Root>/Data Store Memory59' */
extern uint8_T Cnt_BRS2;               /* '<Root>/Data Store Memory6' */
extern uint8_T Cnt_ICU_OUT2;           /* '<Root>/Data Store Memory60' */
extern uint8_T Cnt_BRS_OUT;            /* '<Root>/Data Store Memory61' */
extern uint8_T Cnt_DCDC_OUT;           /* '<Root>/Data Store Memory62' */
extern uint8_T Cnt_HVC_OUT;            /* '<Root>/Data Store Memory63' */
extern uint8_T Cnt_MCU1_OUT;           /* '<Root>/Data Store Memory64' */
extern uint8_T Cnt_ACU_OUT;            /* '<Root>/Data Store Memory65' */
extern uint8_T Cnt_PDU_OUT;            /* '<Root>/Data Store Memory66' */
extern uint8_T Cnt_BRS3;               /* '<Root>/Data Store Memory7' */
extern uint8_T ResetFlg;               /* '<Root>/Data Store Memory72' */
extern uint8_T Cnt_HVC1;               /* '<Root>/Data Store Memory8' */
extern uint8_T Cnt_HVC3;               /* '<Root>/Data Store Memory9' */
extern uint8_T Init_flg_SPI;           /* '<Root>/Data Store Memory98' */
extern boolean_T LS007;                /* '<Root>/Data Store Memory100' */
extern boolean_T LS012;                /* '<Root>/Data Store Memory101' */
extern boolean_T LS013;                /* '<Root>/Data Store Memory103' */
extern boolean_T LS018;                /* '<Root>/Data Store Memory11' */
extern boolean_T LS019;                /* '<Root>/Data Store Memory116' */
extern boolean_T EnergyReady[8];       /* '<Root>/Data Store Memory137' */
extern boolean_T Key;                  /* '<Root>/Data Store Memory138' */
extern boolean_T PaxAC_PowOnCmd;       /* '<Root>/Data Store Memory144' */
extern boolean_T PTC_PowOnCmd;         /* '<Root>/Data Store Memory145' */
extern boolean_T LS003;                /* '<Root>/Data Store Memory34' */
extern boolean_T LS017;                /* '<Root>/Data Store Memory45' */
extern boolean_T LS014;                /* '<Root>/Data Store Memory86' */
extern boolean_T LS015;                /* '<Root>/Data Store Memory87' */
extern boolean_T LS009;                /* '<Root>/Data Store Memory88' */
extern boolean_T LS016;                /* '<Root>/Data Store Memory89' */
extern boolean_T LS004;                /* '<Root>/Data Store Memory91' */
extern boolean_T LS011;                /* '<Root>/Data Store Memory92' */
extern boolean_T LS001;                /* '<Root>/Data Store Memory93' */
extern boolean_T LS002;                /* '<Root>/Data Store Memory95' */
extern boolean_T LS010;                /* '<Root>/Data Store Memory96' */
extern boolean_T LS008;                /* '<Root>/Data Store Memory97' */
extern boolean_T LS006;                /* '<Root>/Data Store Memory99' */

/* Model entry point functions */
extern void ZT_VehCtrl_18B_1009_initialize(void);
extern void ZT_VehCtrl_18B_1009_step(void);
extern void ZT_VehCtrl_18B_1009_terminate(void);

/* Exported data declaration */

/* Volatile memory section */
/* Declaration for custom storage class: Volatile */
extern volatile real32_T AI03;
extern volatile real32_T AI04;
extern volatile real32_T AI05;
extern volatile real32_T AI06;
extern volatile real32_T AI07;
extern volatile real32_T AI08;
extern volatile real32_T AI09;
extern volatile real32_T AI11;
extern volatile real32_T AI12;
extern volatile real32_T AI15;
extern volatile real32_T AI16;
extern volatile real32_T AI17;
extern volatile real32_T AI18;
extern volatile real32_T AI19;
extern volatile real32_T AI20;
extern volatile boolean_T DI01;
extern volatile boolean_T DI02;
extern volatile boolean_T DI03;
extern volatile boolean_T DI04;
extern volatile boolean_T DI07;
extern volatile boolean_T DI08;
extern volatile boolean_T DI09;
extern volatile boolean_T DI10;
extern volatile boolean_T DI12;
extern volatile boolean_T DI13;
extern volatile boolean_T DI15;
extern volatile boolean_T DI16;
extern volatile boolean_T DI17;
extern volatile boolean_T DI18;
extern volatile boolean_T DI31;
extern volatile real32_T DI31_PWM_DC;
extern volatile real32_T DI31_PWM_FRQ;
extern volatile boolean_T DI32;
extern volatile real32_T DI32_PWM_DC;
extern volatile real32_T DI32_PWM_FRQ;
extern volatile boolean_T DI33;
extern volatile real32_T DI33_PWM_DC;
extern volatile real32_T DI33_PWM_FRQ;
extern volatile boolean_T DI34;
extern volatile real32_T DI34_PWM_DC;
extern volatile real32_T DI34_PWM_FRQ;
extern volatile boolean_T HS001;
extern volatile boolean_T HS002;
extern volatile boolean_T HS003;
extern volatile boolean_T HS004;
extern volatile boolean_T HS005;
extern volatile boolean_T HS006;
extern volatile boolean_T HS007;
extern volatile boolean_T HS008;
extern volatile real32_T HS008_ETC_DC;
extern volatile real32_T HS008_ETC_FRQ;
extern volatile boolean_T HS010;
extern volatile boolean_T HS014;
extern volatile real32_T HS014_ETC_DC;
extern volatile real32_T HSO08_PWM_DC;
extern volatile real32_T HSO08_PWM_FRQ;
extern volatile real32_T HSO14_ETC_FRQ;
extern volatile real32_T HSO14_PWM_DC;
extern volatile real32_T HSO14_PWM_FRQ;
extern volatile real32_T LSO17_ETC_DC;
extern volatile real32_T LSO17_ETC_FRQ;
extern volatile real32_T LSO18_ETC_DC;
extern volatile real32_T LSO18_ETC_FRQ;
extern volatile real32_T LSO19_ETC_DC;
extern volatile real32_T LSO19_ETC_FRQ;
extern volatile real32_T LSO19_PWM_DC;
extern volatile real32_T LSO19_PWM_FRQ;
extern volatile real32_T LSO3_ETC_DC;
extern volatile real32_T LSO3_ETC_FRQ;

/* Real-time Model object */
extern RT_MODEL_ZT_VehCtrl_18B_1009_T *const ZT_VehCtrl_18B_1009_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/Data Type Conversion3' : Unused code path elimination
 * Block '<S10>/Data Type Conversion4' : Unused code path elimination
 * Block '<S11>/Data Type Conversion' : Unused code path elimination
 * Block '<S11>/Data Type Conversion1' : Unused code path elimination
 * Block '<S12>/Data Type Conversion' : Unused code path elimination
 * Block '<S12>/Data Type Conversion1' : Unused code path elimination
 * Block '<S13>/Data Type Conversion3' : Unused code path elimination
 * Block '<S13>/Data Type Conversion4' : Unused code path elimination
 * Block '<S87>/Bus Creator' : Unused code path elimination
 * Block '<S87>/CAN Unpack6' : Unused code path elimination
 * Block '<S87>/Constant1' : Unused code path elimination
 * Block '<S87>/Constant4' : Unused code path elimination
 * Block '<S87>/Constant5' : Unused code path elimination
 * Block '<S87>/Data Type Conversion' : Unused code path elimination
 * Block '<S87>/Data Type Conversion1' : Unused code path elimination
 * Block '<S87>/Data Type Conversion14' : Unused code path elimination
 * Block '<S87>/Data Type Conversion15' : Unused code path elimination
 * Block '<S87>/Data Type Conversion17' : Unused code path elimination
 * Block '<S87>/Data Type Conversion18' : Unused code path elimination
 * Block '<S87>/Data Type Conversion19' : Unused code path elimination
 * Block '<S87>/Data Type Conversion2' : Unused code path elimination
 * Block '<S87>/Data Type Conversion3' : Unused code path elimination
 * Block '<S87>/Data Type Conversion4' : Unused code path elimination
 * Block '<S87>/Data Type Conversion5' : Unused code path elimination
 * Block '<S88>/Bus Creator' : Unused code path elimination
 * Block '<S88>/CAN Unpack6' : Unused code path elimination
 * Block '<S88>/Constant1' : Unused code path elimination
 * Block '<S88>/Constant4' : Unused code path elimination
 * Block '<S88>/Constant5' : Unused code path elimination
 * Block '<S88>/Data Type Conversion' : Unused code path elimination
 * Block '<S88>/Data Type Conversion1' : Unused code path elimination
 * Block '<S88>/Data Type Conversion14' : Unused code path elimination
 * Block '<S88>/Data Type Conversion15' : Unused code path elimination
 * Block '<S88>/Data Type Conversion17' : Unused code path elimination
 * Block '<S88>/Data Type Conversion18' : Unused code path elimination
 * Block '<S88>/Data Type Conversion19' : Unused code path elimination
 * Block '<S88>/Data Type Conversion2' : Unused code path elimination
 * Block '<S88>/Data Type Conversion3' : Unused code path elimination
 * Block '<S88>/Data Type Conversion4' : Unused code path elimination
 * Block '<S88>/Data Type Conversion5' : Unused code path elimination
 * Block '<S89>/Bus Creator' : Unused code path elimination
 * Block '<S89>/CAN Unpack6' : Unused code path elimination
 * Block '<S89>/Constant1' : Unused code path elimination
 * Block '<S89>/Constant4' : Unused code path elimination
 * Block '<S89>/Constant5' : Unused code path elimination
 * Block '<S89>/Data Type Conversion' : Unused code path elimination
 * Block '<S89>/Data Type Conversion1' : Unused code path elimination
 * Block '<S89>/Data Type Conversion14' : Unused code path elimination
 * Block '<S89>/Data Type Conversion15' : Unused code path elimination
 * Block '<S89>/Data Type Conversion17' : Unused code path elimination
 * Block '<S89>/Data Type Conversion18' : Unused code path elimination
 * Block '<S89>/Data Type Conversion19' : Unused code path elimination
 * Block '<S89>/Data Type Conversion2' : Unused code path elimination
 * Block '<S89>/Data Type Conversion3' : Unused code path elimination
 * Block '<S89>/Data Type Conversion4' : Unused code path elimination
 * Block '<S89>/Data Type Conversion5' : Unused code path elimination
 * Block '<S98>/Data Type Conversion1' : Unused code path elimination
 * Block '<S105>/Data Type Conversion2' : Unused code path elimination
 * Block '<S105>/Data Type Conversion4' : Unused code path elimination
 * Block '<S109>/Bus Creator' : Unused code path elimination
 * Block '<S109>/CAN Unpack6' : Unused code path elimination
 * Block '<S109>/Constant1' : Unused code path elimination
 * Block '<S109>/Constant4' : Unused code path elimination
 * Block '<S109>/Constant5' : Unused code path elimination
 * Block '<S109>/Data Type Conversion' : Unused code path elimination
 * Block '<S109>/Data Type Conversion1' : Unused code path elimination
 * Block '<S109>/Data Type Conversion14' : Unused code path elimination
 * Block '<S109>/Data Type Conversion15' : Unused code path elimination
 * Block '<S109>/Data Type Conversion17' : Unused code path elimination
 * Block '<S109>/Data Type Conversion18' : Unused code path elimination
 * Block '<S109>/Data Type Conversion19' : Unused code path elimination
 * Block '<S109>/Data Type Conversion2' : Unused code path elimination
 * Block '<S109>/Data Type Conversion3' : Unused code path elimination
 * Block '<S109>/Data Type Conversion4' : Unused code path elimination
 * Block '<S110>/Bus Creator' : Unused code path elimination
 * Block '<S110>/CAN Unpack6' : Unused code path elimination
 * Block '<S110>/Constant1' : Unused code path elimination
 * Block '<S110>/Constant4' : Unused code path elimination
 * Block '<S110>/Constant5' : Unused code path elimination
 * Block '<S110>/Data Type Conversion' : Unused code path elimination
 * Block '<S110>/Data Type Conversion1' : Unused code path elimination
 * Block '<S110>/Data Type Conversion14' : Unused code path elimination
 * Block '<S110>/Data Type Conversion15' : Unused code path elimination
 * Block '<S110>/Data Type Conversion17' : Unused code path elimination
 * Block '<S110>/Data Type Conversion18' : Unused code path elimination
 * Block '<S110>/Data Type Conversion19' : Unused code path elimination
 * Block '<S110>/Data Type Conversion2' : Unused code path elimination
 * Block '<S112>/Data Type Conversion10' : Unused code path elimination
 * Block '<S112>/Data Type Conversion11' : Unused code path elimination
 * Block '<S112>/Data Type Conversion12' : Unused code path elimination
 * Block '<S112>/Data Type Conversion13' : Unused code path elimination
 * Block '<S112>/Data Type Conversion2' : Unused code path elimination
 * Block '<S112>/Data Type Conversion3' : Unused code path elimination
 * Block '<S112>/Data Type Conversion5' : Unused code path elimination
 * Block '<S112>/Data Type Conversion6' : Unused code path elimination
 * Block '<S112>/Data Type Conversion8' : Unused code path elimination
 * Block '<S113>/Data Type Conversion1' : Unused code path elimination
 * Block '<S113>/Data Type Conversion11' : Unused code path elimination
 * Block '<S113>/Data Type Conversion12' : Unused code path elimination
 * Block '<S113>/Data Type Conversion13' : Unused code path elimination
 * Block '<S113>/Data Type Conversion16' : Unused code path elimination
 * Block '<S113>/Data Type Conversion2' : Unused code path elimination
 * Block '<S113>/Data Type Conversion20' : Unused code path elimination
 * Block '<S113>/Data Type Conversion21' : Unused code path elimination
 * Block '<S113>/Data Type Conversion3' : Unused code path elimination
 * Block '<S113>/Data Type Conversion4' : Unused code path elimination
 * Block '<S113>/Data Type Conversion5' : Unused code path elimination
 * Block '<S113>/Data Type Conversion6' : Unused code path elimination
 * Block '<S113>/Data Type Conversion7' : Unused code path elimination
 * Block '<S113>/Data Type Conversion8' : Unused code path elimination
 * Block '<S113>/Data Type Conversion9' : Unused code path elimination
 * Block '<S116>/Data Type Conversion1' : Unused code path elimination
 * Block '<S116>/Data Type Conversion3' : Unused code path elimination
 * Block '<S116>/Data Type Conversion4' : Unused code path elimination
 * Block '<S116>/Data Type Conversion5' : Unused code path elimination
 * Block '<S117>/Bus Creator' : Unused code path elimination
 * Block '<S117>/CAN Unpack6' : Unused code path elimination
 * Block '<S117>/Constant1' : Unused code path elimination
 * Block '<S117>/Constant4' : Unused code path elimination
 * Block '<S117>/Constant5' : Unused code path elimination
 * Block '<S117>/Data Type Conversion' : Unused code path elimination
 * Block '<S117>/Data Type Conversion1' : Unused code path elimination
 * Block '<S117>/Data Type Conversion14' : Unused code path elimination
 * Block '<S117>/Data Type Conversion15' : Unused code path elimination
 * Block '<S117>/Data Type Conversion17' : Unused code path elimination
 * Block '<S117>/Data Type Conversion18' : Unused code path elimination
 * Block '<S117>/Data Type Conversion19' : Unused code path elimination
 * Block '<S117>/Data Type Conversion2' : Unused code path elimination
 * Block '<S117>/Data Type Conversion3' : Unused code path elimination
 * Block '<S117>/Data Type Conversion4' : Unused code path elimination
 * Block '<S118>/Bus Creator' : Unused code path elimination
 * Block '<S118>/CAN Unpack6' : Unused code path elimination
 * Block '<S118>/Constant1' : Unused code path elimination
 * Block '<S118>/Constant4' : Unused code path elimination
 * Block '<S118>/Constant5' : Unused code path elimination
 * Block '<S118>/Data Type Conversion' : Unused code path elimination
 * Block '<S118>/Data Type Conversion1' : Unused code path elimination
 * Block '<S118>/Data Type Conversion14' : Unused code path elimination
 * Block '<S118>/Data Type Conversion15' : Unused code path elimination
 * Block '<S118>/Data Type Conversion17' : Unused code path elimination
 * Block '<S118>/Data Type Conversion18' : Unused code path elimination
 * Block '<S118>/Data Type Conversion19' : Unused code path elimination
 * Block '<S118>/Data Type Conversion2' : Unused code path elimination
 * Block '<S118>/Data Type Conversion3' : Unused code path elimination
 * Block '<S119>/Bus Creator' : Unused code path elimination
 * Block '<S119>/CAN Unpack6' : Unused code path elimination
 * Block '<S119>/Constant1' : Unused code path elimination
 * Block '<S119>/Constant4' : Unused code path elimination
 * Block '<S119>/Constant5' : Unused code path elimination
 * Block '<S119>/Data Type Conversion' : Unused code path elimination
 * Block '<S119>/Data Type Conversion1' : Unused code path elimination
 * Block '<S119>/Data Type Conversion14' : Unused code path elimination
 * Block '<S119>/Data Type Conversion15' : Unused code path elimination
 * Block '<S119>/Data Type Conversion17' : Unused code path elimination
 * Block '<S119>/Data Type Conversion18' : Unused code path elimination
 * Block '<S119>/Data Type Conversion19' : Unused code path elimination
 * Block '<S119>/Data Type Conversion2' : Unused code path elimination
 * Block '<S119>/Data Type Conversion3' : Unused code path elimination
 * Block '<S119>/Data Type Conversion4' : Unused code path elimination
 * Block '<S120>/Bus Creator' : Unused code path elimination
 * Block '<S120>/CAN Unpack6' : Unused code path elimination
 * Block '<S120>/Constant1' : Unused code path elimination
 * Block '<S120>/Constant4' : Unused code path elimination
 * Block '<S120>/Constant5' : Unused code path elimination
 * Block '<S120>/Data Type Conversion' : Unused code path elimination
 * Block '<S120>/Data Type Conversion1' : Unused code path elimination
 * Block '<S120>/Data Type Conversion14' : Unused code path elimination
 * Block '<S120>/Data Type Conversion15' : Unused code path elimination
 * Block '<S120>/Data Type Conversion17' : Unused code path elimination
 * Block '<S120>/Data Type Conversion18' : Unused code path elimination
 * Block '<S120>/Data Type Conversion19' : Unused code path elimination
 * Block '<S120>/Data Type Conversion2' : Unused code path elimination
 * Block '<S120>/Data Type Conversion3' : Unused code path elimination
 * Block '<S120>/Data Type Conversion4' : Unused code path elimination
 * Block '<S120>/Data Type Conversion5' : Unused code path elimination
 * Block '<S121>/Bus Creator' : Unused code path elimination
 * Block '<S121>/CAN Unpack6' : Unused code path elimination
 * Block '<S121>/Constant1' : Unused code path elimination
 * Block '<S121>/Constant4' : Unused code path elimination
 * Block '<S121>/Constant5' : Unused code path elimination
 * Block '<S121>/Data Type Conversion' : Unused code path elimination
 * Block '<S121>/Data Type Conversion1' : Unused code path elimination
 * Block '<S121>/Data Type Conversion14' : Unused code path elimination
 * Block '<S121>/Data Type Conversion15' : Unused code path elimination
 * Block '<S121>/Data Type Conversion17' : Unused code path elimination
 * Block '<S121>/Data Type Conversion18' : Unused code path elimination
 * Block '<S121>/Data Type Conversion19' : Unused code path elimination
 * Block '<S121>/Data Type Conversion2' : Unused code path elimination
 * Block '<S121>/Data Type Conversion3' : Unused code path elimination
 * Block '<S121>/Data Type Conversion4' : Unused code path elimination
 * Block '<S121>/Data Type Conversion5' : Unused code path elimination
 * Block '<S122>/Bus Creator' : Unused code path elimination
 * Block '<S122>/CAN Unpack6' : Unused code path elimination
 * Block '<S122>/Constant1' : Unused code path elimination
 * Block '<S122>/Constant4' : Unused code path elimination
 * Block '<S122>/Constant5' : Unused code path elimination
 * Block '<S122>/Data Type Conversion' : Unused code path elimination
 * Block '<S122>/Data Type Conversion1' : Unused code path elimination
 * Block '<S122>/Data Type Conversion14' : Unused code path elimination
 * Block '<S122>/Data Type Conversion15' : Unused code path elimination
 * Block '<S122>/Data Type Conversion17' : Unused code path elimination
 * Block '<S122>/Data Type Conversion18' : Unused code path elimination
 * Block '<S122>/Data Type Conversion19' : Unused code path elimination
 * Block '<S122>/Data Type Conversion2' : Unused code path elimination
 * Block '<S122>/Data Type Conversion3' : Unused code path elimination
 * Block '<S122>/Data Type Conversion4' : Unused code path elimination
 * Block '<S123>/Data Type Conversion1' : Unused code path elimination
 * Block '<S123>/Data Type Conversion10' : Unused code path elimination
 * Block '<S123>/Data Type Conversion12' : Unused code path elimination
 * Block '<S123>/Data Type Conversion13' : Unused code path elimination
 * Block '<S123>/Data Type Conversion2' : Unused code path elimination
 * Block '<S123>/Data Type Conversion5' : Unused code path elimination
 * Block '<S123>/Data Type Conversion6' : Unused code path elimination
 * Block '<S123>/Data Type Conversion7' : Unused code path elimination
 * Block '<S123>/Data Type Conversion8' : Unused code path elimination
 * Block '<S123>/Data Type Conversion9' : Unused code path elimination
 * Block '<S124>/Data Type Conversion2' : Unused code path elimination
 * Block '<S124>/Data Type Conversion3' : Unused code path elimination
 * Block '<S124>/Data Type Conversion4' : Unused code path elimination
 * Block '<S124>/Data Type Conversion5' : Unused code path elimination
 * Block '<S124>/Data Type Conversion6' : Unused code path elimination
 * Block '<S125>/Data Type Conversion1' : Unused code path elimination
 * Block '<S125>/Data Type Conversion2' : Unused code path elimination
 * Block '<S125>/Data Type Conversion8' : Unused code path elimination
 * Block '<S126>/Data Type Conversion1' : Unused code path elimination
 * Block '<S126>/Data Type Conversion2' : Unused code path elimination
 * Block '<S126>/Data Type Conversion3' : Unused code path elimination
 * Block '<S126>/Data Type Conversion4' : Unused code path elimination
 * Block '<S127>/Data Type Conversion2' : Unused code path elimination
 * Block '<S141>/Data Type Conversion1' : Unused code path elimination
 * Block '<S141>/Data Type Conversion2' : Unused code path elimination
 * Block '<S141>/Data Type Conversion3' : Unused code path elimination
 * Block '<S141>/Data Type Conversion4' : Unused code path elimination
 * Block '<S141>/Data Type Conversion7' : Unused code path elimination
 * Block '<S142>/Data Type Conversion2' : Unused code path elimination
 * Block '<S142>/Data Type Conversion5' : Unused code path elimination
 * Block '<S142>/Data Type Conversion6' : Unused code path elimination
 * Block '<S143>/Data Type Conversion1' : Unused code path elimination
 * Block '<S143>/Data Type Conversion4' : Unused code path elimination
 * Block '<S143>/Data Type Conversion5' : Unused code path elimination
 * Block '<S145>/Data Type Conversion1' : Unused code path elimination
 * Block '<S145>/Data Type Conversion2' : Unused code path elimination
 * Block '<S145>/Data Type Conversion3' : Unused code path elimination
 * Block '<S145>/Data Type Conversion5' : Unused code path elimination
 * Block '<S145>/Data Type Conversion6' : Unused code path elimination
 * Block '<S145>/Data Type Conversion7' : Unused code path elimination
 * Block '<S145>/Data Type Conversion8' : Unused code path elimination
 * Block '<S145>/Data Type Conversion9' : Unused code path elimination
 * Block '<S148>/Data Type Conversion1' : Unused code path elimination
 * Block '<S148>/Data Type Conversion2' : Unused code path elimination
 * Block '<S148>/Data Type Conversion3' : Unused code path elimination
 * Block '<S148>/Data Type Conversion5' : Unused code path elimination
 * Block '<S148>/Data Type Conversion6' : Unused code path elimination
 * Block '<S148>/Data Type Conversion7' : Unused code path elimination
 * Block '<S148>/Data Type Conversion8' : Unused code path elimination
 * Block '<S148>/Data Type Conversion9' : Unused code path elimination
 * Block '<S150>/Data Type Conversion1' : Unused code path elimination
 * Block '<S150>/Data Type Conversion2' : Unused code path elimination
 * Block '<S150>/Data Type Conversion3' : Unused code path elimination
 * Block '<S150>/Data Type Conversion4' : Unused code path elimination
 * Block '<S150>/Data Type Conversion7' : Unused code path elimination
 * Block '<S151>/Data Type Conversion2' : Unused code path elimination
 * Block '<S151>/Data Type Conversion5' : Unused code path elimination
 * Block '<S151>/Data Type Conversion6' : Unused code path elimination
 * Block '<S152>/Data Type Conversion1' : Unused code path elimination
 * Block '<S152>/Data Type Conversion4' : Unused code path elimination
 * Block '<S152>/Data Type Conversion5' : Unused code path elimination
 * Block '<S153>/Bus Creator' : Unused code path elimination
 * Block '<S153>/CAN Unpack6' : Unused code path elimination
 * Block '<S153>/Constant1' : Unused code path elimination
 * Block '<S153>/Constant4' : Unused code path elimination
 * Block '<S153>/Constant5' : Unused code path elimination
 * Block '<S153>/Data Type Conversion' : Unused code path elimination
 * Block '<S153>/Data Type Conversion1' : Unused code path elimination
 * Block '<S153>/Data Type Conversion14' : Unused code path elimination
 * Block '<S153>/Data Type Conversion15' : Unused code path elimination
 * Block '<S153>/Data Type Conversion17' : Unused code path elimination
 * Block '<S153>/Data Type Conversion18' : Unused code path elimination
 * Block '<S153>/Data Type Conversion19' : Unused code path elimination
 * Block '<S153>/Data Type Conversion2' : Unused code path elimination
 * Block '<S5>/Data Type Conversion10' : Unused code path elimination
 * Block '<S5>/Data Type Conversion11' : Unused code path elimination
 * Block '<S5>/Data Type Conversion12' : Unused code path elimination
 * Block '<S5>/Data Type Conversion13' : Unused code path elimination
 * Block '<S5>/Data Type Conversion14' : Unused code path elimination
 * Block '<S219>/Data Type Conversion3' : Unused code path elimination
 * Block '<S219>/Data Type Conversion4' : Unused code path elimination
 * Block '<S220>/Data Type Conversion3' : Unused code path elimination
 * Block '<S220>/Data Type Conversion4' : Unused code path elimination
 * Block '<S224>/Data Type Conversion' : Unused code path elimination
 * Block '<S224>/Data Type Conversion1' : Unused code path elimination
 * Block '<S6>/Rate Transition13' : Unused code path elimination
 * Block '<S6>/Rate Transition7' : Unused code path elimination
 * Block '<S246>/Compare' : Unused code path elimination
 * Block '<S246>/Constant' : Unused code path elimination
 * Block '<S247>/Compare' : Unused code path elimination
 * Block '<S247>/Constant' : Unused code path elimination
 * Block '<S248>/Compare' : Unused code path elimination
 * Block '<S248>/Constant' : Unused code path elimination
 * Block '<S249>/Compare' : Unused code path elimination
 * Block '<S249>/Constant' : Unused code path elimination
 * Block '<S227>/Logical Operator4' : Unused code path elimination
 * Block '<S231>/Abs3' : Unused code path elimination
 * Block '<S231>/Abs4' : Unused code path elimination
 * Block '<S231>/Add2' : Unused code path elimination
 * Block '<S231>/Add3' : Unused code path elimination
 * Block '<S231>/Gain2' : Unused code path elimination
 * Block '<S231>/Gain3' : Unused code path elimination
 * Block '<S231>/Product3' : Unused code path elimination
 * Block '<S231>/Product4' : Unused code path elimination
 * Block '<S232>/Logical Operator' : Unused code path elimination
 * Block '<S232>/Logical Operator2' : Unused code path elimination
 * Block '<S12>/Manual Switch' : Eliminated due to constant selection input
 * Block '<S98>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S98>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S98>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S98>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S98>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S105>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S105>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S105>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S105>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S105>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S111>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S111>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S111>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S111>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S111>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S112>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S112>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S112>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S112>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S112>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S113>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S113>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S113>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S113>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S113>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S116>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S116>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S116>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S116>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S116>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S123>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S123>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S123>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S123>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S123>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S124>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S124>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S124>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S124>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S124>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S125>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S125>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S125>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S125>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S125>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S126>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S127>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S127>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S127>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S127>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S127>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S141>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S141>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S141>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S141>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S141>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S142>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S142>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S142>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S142>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S142>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S143>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S143>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S143>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S143>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S143>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S144>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S144>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S144>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S144>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S144>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S145>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S145>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S145>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S145>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S145>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S146>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S146>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S146>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S146>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S146>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S147>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S147>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S147>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S147>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S147>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S148>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S148>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S148>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S148>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S148>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S149>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S149>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S149>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S149>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S149>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S150>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S150>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S150>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S150>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S150>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S151>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S151>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S151>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S151>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S151>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S152>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S152>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S152>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S152>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S152>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion16' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion19' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion7' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion8' : Eliminate redundant data type conversion
 * Block '<S5>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S43>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S43>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S184>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S184>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S184>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S184>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S225>/Gain' : Eliminated nontunable gain of 1
 * Block '<S189>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S189>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion10' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion11' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion12' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion13' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion14' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion15' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion16' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion17' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion18' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion19' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion7' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion8' : Eliminate redundant data type conversion
 * Block '<S190>/Data Type Conversion9' : Eliminate redundant data type conversion
 * Block '<S191>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S191>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S195>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S195>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S195>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S198>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S227>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S230>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S232>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S232>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S232>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S232>/Data Type Conversion5' : Eliminate redundant data type conversion
 * Block '<S232>/Data Type Conversion6' : Eliminate redundant data type conversion
 * Block '<S232>/Data Type Conversion7' : Eliminate redundant data type conversion
 * Block '<S232>/Data Type Conversion8' : Eliminate redundant data type conversion
 * Block '<S12>/SPI' : Unused code path elimination
 */

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
 * '<Root>' : 'ZT_VehCtrl_18B_1009'
 * '<S1>'   : 'ZT_VehCtrl_18B_1009/Init'
 * '<S2>'   : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1'
 * '<S3>'   : 'ZT_VehCtrl_18B_1009/Power Managment'
 * '<S4>'   : 'ZT_VehCtrl_18B_1009/SPI_EEPROM'
 * '<S5>'   : 'ZT_VehCtrl_18B_1009/SigIn'
 * '<S6>'   : 'ZT_VehCtrl_18B_1009/SigOut'
 * '<S7>'   : 'ZT_VehCtrl_18B_1009/VehCtrl'
 * '<S8>'   : 'ZT_VehCtrl_18B_1009/Init/CAN_init'
 * '<S9>'   : 'ZT_VehCtrl_18B_1009/Init/Init'
 * '<S10>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS1 LS'
 * '<S11>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS2 CANB'
 * '<S12>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS3 LS'
 * '<S13>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS5 LS'
 * '<S14>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/Chart'
 * '<S15>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/Chart1'
 * '<S16>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/Chart2'
 * '<S17>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/Compare To Constant'
 * '<S18>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/Compare To Constant1'
 * '<S19>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS1 LS/Chart'
 * '<S20>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS1 LS/Subsystem'
 * '<S21>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS1 LS/Subsystem/SPI_en'
 * '<S22>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS1 LS/Subsystem/clear '
 * '<S23>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS1 LS/Subsystem/confi_enbit'
 * '<S24>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS3 LS/Chart'
 * '<S25>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS3 LS/Subsystem'
 * '<S26>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS3 LS/Subsystem/A◊È≈‰÷√'
 * '<S27>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS3 LS/Subsystem/B◊È≈‰÷√'
 * '<S28>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS5 LS/Chart'
 * '<S29>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS5 LS/Subsystem'
 * '<S30>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS5 LS/Subsystem/SPI_en'
 * '<S31>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS5 LS/Subsystem/clear '
 * '<S32>'  : 'ZT_VehCtrl_18B_1009/Initialization & SPI timer1/CS5 LS/Subsystem/confi_enbit'
 * '<S33>'  : 'ZT_VehCtrl_18B_1009/SPI_EEPROM/SPI_read'
 * '<S34>'  : 'ZT_VehCtrl_18B_1009/SPI_EEPROM/SPI_write'
 * '<S35>'  : 'ZT_VehCtrl_18B_1009/SPI_EEPROM/SPI_write/SPI_enable'
 * '<S36>'  : 'ZT_VehCtrl_18B_1009/SPI_EEPROM/SPI_write/SPI_write'
 * '<S37>'  : 'ZT_VehCtrl_18B_1009/SigIn/AI'
 * '<S38>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 '
 * '<S39>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN1'
 * '<S40>'  : 'ZT_VehCtrl_18B_1009/SigIn/Chart'
 * '<S41>'  : 'ZT_VehCtrl_18B_1009/SigIn/DI'
 * '<S42>'  : 'ZT_VehCtrl_18B_1009/SigIn/PWM'
 * '<S43>'  : 'ZT_VehCtrl_18B_1009/SigIn/Subsystem'
 * '<S44>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 / BMS Power Control'
 * '<S45>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /ACU1'
 * '<S46>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /ACU2'
 * '<S47>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /ACU3'
 * '<S48>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Cell Battery Temperature'
 * '<S49>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Cell HeatingTemperature'
 * '<S50>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Cell Pole Temperature'
 * '<S51>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Cell Voltage Infor'
 * '<S52>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS CumuCap Infor'
 * '<S53>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS CumuTimeInfor1'
 * '<S54>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS CumuTimeInfor2'
 * '<S55>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS HeatInfor'
 * '<S56>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Power Infor'
 * '<S57>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS StartDia_Infor1'
 * '<S58>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS StartDia_Infor2'
 * '<S59>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_Cell ExtremumIndex Infor'
 * '<S60>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_Cell Voltage Infor'
 * '<S61>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_HeatingTemperature'
 * '<S62>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_PoleTemperature'
 * '<S63>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_Temperature of Battery'
 * '<S64>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS _SystemTime '
 * '<S65>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS other Information1'
 * '<S66>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS other Information2 '
 * '<S67>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS other Information3'
 * '<S68>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMSWarning_Status'
 * '<S69>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Information1'
 * '<S70>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Information2'
 * '<S71>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Relay Status1'
 * '<S72>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Relay Status2'
 * '<S73>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Relay Status3'
 * '<S74>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BRS2VCU1'
 * '<S75>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BRS2VCU2'
 * '<S76>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BRS2VCU3'
 * '<S77>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /DCDC1_1'
 * '<S78>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /DCDC1_2'
 * '<S79>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /HVC1_LV'
 * '<S80>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /HVC3_Temp'
 * '<S81>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /HVC4_RlySt'
 * '<S82>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /HVC7_HV1'
 * '<S83>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /OBC_Charger Status'
 * '<S84>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /PDU_RelaySts'
 * '<S85>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /TMS2VCU'
 * '<S86>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 / BMS Power Control/UNPACK'
 * '<S87>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /ACU1/UNPACK'
 * '<S88>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /ACU2/UNPACK'
 * '<S89>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /ACU3/UNPACK'
 * '<S90>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Cell Battery Temperature/UNPACK'
 * '<S91>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Cell HeatingTemperature/UNPACK'
 * '<S92>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Cell Pole Temperature/UNPACK'
 * '<S93>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Cell Voltage Infor/UNPACK'
 * '<S94>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS CumuCap Infor/UNPACK'
 * '<S95>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS CumuTimeInfor1/UNPACK'
 * '<S96>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS CumuTimeInfor2/UNPACK'
 * '<S97>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS HeatInfor/UNPACK'
 * '<S98>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Power Infor/UNPACK'
 * '<S99>'  : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS StartDia_Infor1/UNPACK'
 * '<S100>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS StartDia_Infor2/UNPACK'
 * '<S101>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_Cell ExtremumIndex Infor/UNPACK'
 * '<S102>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_Cell Voltage Infor/UNPACK'
 * '<S103>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_HeatingTemperature/UNPACK'
 * '<S104>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_PoleTemperature/UNPACK'
 * '<S105>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS Statistic_Temperature of Battery/UNPACK'
 * '<S106>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS _SystemTime /UNPACK'
 * '<S107>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS other Information1/UNPACK'
 * '<S108>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS other Information2 /UNPACK'
 * '<S109>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS other Information3/UNPACK'
 * '<S110>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMSWarning_Status/UNPACK'
 * '<S111>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Information1/UNPACK'
 * '<S112>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Information2/UNPACK'
 * '<S113>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Relay Status1/UNPACK'
 * '<S114>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Relay Status2/UNPACK'
 * '<S115>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BMS_Relay Status3/UNPACK'
 * '<S116>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BRS2VCU1/UNPACK'
 * '<S117>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BRS2VCU2/UNPACK'
 * '<S118>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /BRS2VCU3/UNPACK'
 * '<S119>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /DCDC1_1/UNPACK'
 * '<S120>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /DCDC1_2/UNPACK'
 * '<S121>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /HVC1_LV/UNPACK'
 * '<S122>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /HVC3_Temp/UNPACK'
 * '<S123>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /HVC4_RlySt/UNPACK'
 * '<S124>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /HVC7_HV1/UNPACK'
 * '<S125>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /OBC_Charger Status/UNPACK'
 * '<S126>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /PDU_RelaySts/UNPACK'
 * '<S127>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN0 /TMS2VCU/UNPACK'
 * '<S128>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/ISG MCU STATUS 1'
 * '<S129>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/ISG MCU STATUS 2'
 * '<S130>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/ISG MCU STATUS 3'
 * '<S131>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU1Msg1'
 * '<S132>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU1Msg2'
 * '<S133>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU1Msg3'
 * '<S134>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU2Msg1'
 * '<S135>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU2Msg2'
 * '<S136>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU2Msg3'
 * '<S137>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/TM MCU STATUS 1'
 * '<S138>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/TM MCU STATUS 2'
 * '<S139>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/TM MCU STATUS 3'
 * '<S140>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/TWV '
 * '<S141>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/ISG MCU STATUS 1/UNPACK'
 * '<S142>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/ISG MCU STATUS 2/UNPACK'
 * '<S143>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/ISG MCU STATUS 3/UNPACK'
 * '<S144>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU1Msg1/UNPACK'
 * '<S145>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU1Msg2/UNPACK'
 * '<S146>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU1Msg3/UNPACK'
 * '<S147>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU2Msg1/UNPACK'
 * '<S148>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU2Msg2/UNPACK'
 * '<S149>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/MCU2Msg3/UNPACK'
 * '<S150>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/TM MCU STATUS 1/UNPACK'
 * '<S151>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/TM MCU STATUS 2/UNPACK'
 * '<S152>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/TM MCU STATUS 3/UNPACK'
 * '<S153>' : 'ZT_VehCtrl_18B_1009/SigIn/CAN1/TWV /UNPACK'
 * '<S154>' : 'ZT_VehCtrl_18B_1009/SigIn/DI/DI_31_32_33_34'
 * '<S155>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS1'
 * '<S156>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS2'
 * '<S157>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS3'
 * '<S158>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS4'
 * '<S159>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/Subsystem'
 * '<S160>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS1/Subsystem'
 * '<S161>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS1/Subsystem_capture'
 * '<S162>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS1/Subsystem_capture/Counter Limited'
 * '<S163>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS1/Subsystem_capture/Counter Limited/Increment Real World'
 * '<S164>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS1/Subsystem_capture/Counter Limited/Wrap To Zero'
 * '<S165>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS2/Subsystem'
 * '<S166>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS2/Subsystem_capture'
 * '<S167>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS2/Subsystem_capture/Counter Limited'
 * '<S168>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS2/Subsystem_capture/Counter Limited/Increment Real World'
 * '<S169>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS2/Subsystem_capture/Counter Limited/Wrap To Zero'
 * '<S170>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS3/Subsystem'
 * '<S171>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS3/Subsystem_capture'
 * '<S172>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS3/Subsystem_capture/Counter Limited'
 * '<S173>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS3/Subsystem_capture/Counter Limited/Increment Real World'
 * '<S174>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS3/Subsystem_capture/Counter Limited/Wrap To Zero'
 * '<S175>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS4/Subsystem'
 * '<S176>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS4/Subsystem_capture'
 * '<S177>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS4/Subsystem_capture/Counter Limited'
 * '<S178>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS4/Subsystem_capture/Counter Limited/Increment Real World'
 * '<S179>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/PWM_PTS4/Subsystem_capture/Counter Limited/Wrap To Zero'
 * '<S180>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/Subsystem/Frequency_DutyCycle_Computation'
 * '<S181>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/Subsystem/eTimer Configuration and Signal Measurements'
 * '<S182>' : 'ZT_VehCtrl_18B_1009/SigIn/PWM/Subsystem/eTimer Configuration and Signal Measurements/Subsystem_capture'
 * '<S183>' : 'ZT_VehCtrl_18B_1009/SigIn/Subsystem/Compare To Constant'
 * '<S184>' : 'ZT_VehCtrl_18B_1009/SigOut/ACU'
 * '<S185>' : 'ZT_VehCtrl_18B_1009/SigOut/BMS'
 * '<S186>' : 'ZT_VehCtrl_18B_1009/SigOut/BRS'
 * '<S187>' : 'ZT_VehCtrl_18B_1009/SigOut/DCDC'
 * '<S188>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO '
 * '<S189>' : 'ZT_VehCtrl_18B_1009/SigOut/HVC'
 * '<S190>' : 'ZT_VehCtrl_18B_1009/SigOut/ICU1 '
 * '<S191>' : 'ZT_VehCtrl_18B_1009/SigOut/ICU2'
 * '<S192>' : 'ZT_VehCtrl_18B_1009/SigOut/ISG'
 * '<S193>' : 'ZT_VehCtrl_18B_1009/SigOut/MCU1'
 * '<S194>' : 'ZT_VehCtrl_18B_1009/SigOut/MCU2'
 * '<S195>' : 'ZT_VehCtrl_18B_1009/SigOut/PDU'
 * '<S196>' : 'ZT_VehCtrl_18B_1009/SigOut/TM'
 * '<S197>' : 'ZT_VehCtrl_18B_1009/SigOut/TMS'
 * '<S198>' : 'ZT_VehCtrl_18B_1009/SigOut/TWV'
 * '<S199>' : 'ZT_VehCtrl_18B_1009/SigOut/ACU/Subsystem1'
 * '<S200>' : 'ZT_VehCtrl_18B_1009/SigOut/ACU/Subsystem2'
 * '<S201>' : 'ZT_VehCtrl_18B_1009/SigOut/ACU/Subsystem3'
 * '<S202>' : 'ZT_VehCtrl_18B_1009/SigOut/ACU/Subsystem4'
 * '<S203>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /ETC'
 * '<S204>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /HS'
 * '<S205>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /PWM_OUT'
 * '<S206>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4'
 * '<S207>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19'
 * '<S208>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /ETC/Subsystem'
 * '<S209>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /ETC/Subsystem1'
 * '<S210>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /ETC/Subsystem2'
 * '<S211>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /ETC/Subsystem3'
 * '<S212>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /ETC/Subsystem4'
 * '<S213>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /ETC/Subsystem5'
 * '<S214>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /PWM_OUT/FreqCMD'
 * '<S215>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /PWM_OUT/PWM Configuration and Frequency Update'
 * '<S216>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /PWM_OUT/PWM Configuration and Frequency Update1'
 * '<S217>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /PWM_OUT/PWM Configuration and Frequency Update4'
 * '<S218>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/Compare To Constant'
 * '<S219>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL'
 * '<S220>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL1'
 * '<S221>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL/If Action Subsystem1'
 * '<S222>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL1/If Action Subsystem1'
 * '<S223>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19/Compare To Constant'
 * '<S224>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19/Subsystem'
 * '<S225>' : 'ZT_VehCtrl_18B_1009/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19/Subsystem/øÿ÷∆'
 * '<S226>' : 'ZT_VehCtrl_18B_1009/VehCtrl/EnergyManage'
 * '<S227>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc'
 * '<S228>' : 'ZT_VehCtrl_18B_1009/VehCtrl/HardWareOUT'
 * '<S229>' : 'ZT_VehCtrl_18B_1009/VehCtrl/MontionControl'
 * '<S230>' : 'ZT_VehCtrl_18B_1009/VehCtrl/OBCcharger'
 * '<S231>' : 'ZT_VehCtrl_18B_1009/VehCtrl/SpdCalc'
 * '<S232>' : 'ZT_VehCtrl_18B_1009/VehCtrl/Subsystem'
 * '<S233>' : 'ZT_VehCtrl_18B_1009/VehCtrl/TempertureControl'
 * '<S234>' : 'ZT_VehCtrl_18B_1009/VehCtrl/EnergyManage/Chart'
 * '<S235>' : 'ZT_VehCtrl_18B_1009/VehCtrl/EnergyManage/Compare To Constant'
 * '<S236>' : 'ZT_VehCtrl_18B_1009/VehCtrl/EnergyManage/Compare To Constant1'
 * '<S237>' : 'ZT_VehCtrl_18B_1009/VehCtrl/EnergyManage/Compare To Constant2'
 * '<S238>' : 'ZT_VehCtrl_18B_1009/VehCtrl/EnergyManage/Compare To Constant3'
 * '<S239>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant'
 * '<S240>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant1'
 * '<S241>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant11'
 * '<S242>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant12'
 * '<S243>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant13'
 * '<S244>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant14'
 * '<S245>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant2'
 * '<S246>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant20'
 * '<S247>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant21'
 * '<S248>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant22'
 * '<S249>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant23'
 * '<S250>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant3'
 * '<S251>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant4'
 * '<S252>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant5'
 * '<S253>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant6'
 * '<S254>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant7'
 * '<S255>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant8'
 * '<S256>' : 'ZT_VehCtrl_18B_1009/VehCtrl/FaultProc/Compare To Constant9'
 * '<S257>' : 'ZT_VehCtrl_18B_1009/VehCtrl/MontionControl/Chart'
 * '<S258>' : 'ZT_VehCtrl_18B_1009/VehCtrl/OBCcharger/Compare To Constant'
 * '<S259>' : 'ZT_VehCtrl_18B_1009/VehCtrl/OBCcharger/Compare To Constant1'
 * '<S260>' : 'ZT_VehCtrl_18B_1009/VehCtrl/Subsystem/Compare To Constant'
 * '<S261>' : 'ZT_VehCtrl_18B_1009/VehCtrl/Subsystem/Compare To Constant1'
 * '<S262>' : 'ZT_VehCtrl_18B_1009/VehCtrl/Subsystem/Compare To Constant2'
 * '<S263>' : 'ZT_VehCtrl_18B_1009/VehCtrl/Subsystem/Compare To Constant3'
 */
#endif                                 /* RTW_HEADER_ZT_VehCtrl_18B_1009_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
