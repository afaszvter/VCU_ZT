/*
 * File: ZT_VehCtrl_18B.h
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

#ifndef RTW_HEADER_ZT_VehCtrl_18B_h_
#define RTW_HEADER_ZT_VehCtrl_18B_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef ZT_VehCtrl_18B_COMMON_INCLUDES_
# define ZT_VehCtrl_18B_COMMON_INCLUDES_
#include <stdint.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "flexcan_hw_access.h"
#include "flexcan_driver.h"
#include "interrupt_manager.h"
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
#endif                                 /* ZT_VehCtrl_18B_COMMON_INCLUDES_ */

#include "ZT_VehCtrl_18B_types.h"
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
  real_T high;                         /* '<S12>/Chart' */
  real_T low;                          /* '<S12>/Chart' */
  uint32_T CAN0_Rx_500_o3;             /* '<S5>/CAN0_Rx_500' */
  uint32_T CAN1_Rx_500_o3;             /* '<S5>/CAN1_Rx_500' */
  uint16_T ADC_Start[5];               /* '<S37>/ADC_Start' */
  uint16_T ADC_Start1[10];             /* '<S37>/ADC_Start1' */
  uint16_T CAN0_Rx_500_o6;             /* '<S5>/CAN0_Rx_500' */
  uint16_T CAN1_Rx_500_o6;             /* '<S5>/CAN1_Rx_500' */
  uint16_T DataTypeConversion1;        /* '<S204>/Data Type Conversion1' */
  uint16_T DataTypeConversion2;        /* '<S204>/Data Type Conversion2' */
  uint16_T DataTypeConversion1_n;      /* '<S203>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_i;      /* '<S203>/Data Type Conversion2' */
  uint16_T DataTypeConversion1_p;      /* '<S202>/Data Type Conversion1' */
  uint16_T DataTypeConversion2_p;      /* '<S202>/Data Type Conversion2' */
  uint8_T CAN0_Rx_500_o2;              /* '<S5>/CAN0_Rx_500' */
  uint8_T CAN0_Rx_500_o4[8];           /* '<S5>/CAN0_Rx_500' */
  uint8_T CAN0_Rx_500_o5;              /* '<S5>/CAN0_Rx_500' */
  uint8_T CAN1_Rx_500_o2;              /* '<S5>/CAN1_Rx_500' */
  uint8_T CAN1_Rx_500_o4[8];           /* '<S5>/CAN1_Rx_500' */
  uint8_T CAN1_Rx_500_o5;              /* '<S5>/CAN1_Rx_500' */
  uint8_T SPI_Master_Transfer_To2[2];  /* '<S218>/SPI_Master_Transfer_To2' */
  uint8_T VectorConcatenate2[2];       /* '<S218>/Vector Concatenate2' */
  uint8_T SPI_Master_Transfer_To1[2];  /* '<S214>/SPI_Master_Transfer_To1' */
  uint8_T VectorConcatenate1[2];       /* '<S214>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To1_j[2];/* '<S213>/SPI_Master_Transfer_To1' */
  uint8_T VectorConcatenate1_l[2];     /* '<S213>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To2_a[2];/* '<S12>/SPI_Master_Transfer_To2' */
  uint8_T VectorConcatenate1_a[2];     /* '<S12>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To1_c[2];/* '<S13>/SPI_Master_Transfer_To1' */
  uint8_T VectorConcatenate1_n[2];     /* '<S13>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To1_g[2];/* '<S10>/SPI_Master_Transfer_To1' */
  uint8_T VectorConcatenate1_m[2];     /* '<S10>/Vector Concatenate1' */
  uint8_T SPI_Master_Transfer_To2_h[2];/* '<S11>/SPI_Master_Transfer_To2' */
  boolean_T DI01_h;                    /* '<S40>/DI01' */
  boolean_T DI02_c;                    /* '<S40>/DI02' */
  boolean_T DI03_h;                    /* '<S40>/DI03' */
  boolean_T DI04_o;                    /* '<S40>/DI04' */
  boolean_T DI07_f;                    /* '<S40>/DI07' */
  boolean_T DI08_e;                    /* '<S40>/DI08' */
  boolean_T DI09_a;                    /* '<S40>/DI09' */
  boolean_T DI10_g;                    /* '<S40>/DI10' */
  boolean_T DI12_h;                    /* '<S40>/DI12' */
  boolean_T DI13_m;                    /* '<S40>/DI13' */
  boolean_T DI15_b;                    /* '<S40>/DI15' */
  boolean_T DI16_k;                    /* '<S40>/DI16' */
  boolean_T DI17_c;                    /* '<S40>/DI17' */
  boolean_T DI18_k;                    /* '<S40>/DI18' */
  boolean_T DI31_g;                    /* '<S153>/DI31' */
  boolean_T DI32_l;                    /* '<S153>/DI32' */
  boolean_T DI33_b;                    /* '<S153>/DI33' */
  boolean_T DI34_p;                    /* '<S153>/DI34' */
  boolean_T DataStoreRead9;            /* '<S198>/Data Store Read9' */
  boolean_T DataStoreRead7;            /* '<S198>/Data Store Read7' */
  boolean_T DataStoreRead6;            /* '<S198>/Data Store Read6' */
  boolean_T DataStoreRead5;            /* '<S198>/Data Store Read5' */
  boolean_T DataStoreRead4;            /* '<S198>/Data Store Read4' */
  boolean_T DataStoreRead2;            /* '<S198>/Data Store Read2' */
  boolean_T DataStoreRead;             /* '<S198>/Data Store Read' */
} B_ZT_VehCtrl_18B_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T cnt;                          /* '<S12>/Chart' */
  real_T cnt_o;                        /* '<S13>/Chart' */
  real_T cnt_p;                        /* '<S10>/Chart' */
  real_T cnt_c;                        /* '<S2>/Chart2' */
  real_T cnt_j;                        /* '<S2>/Chart1' */
  int32_T clockTickCounter;            /* '<S2>/Pulse Generator' */
  int32_T clockTickCounter_g;          /* '<S6>/Pulse Generator2' */
  int32_T clockTickCounter_i;          /* '<S6>/Pulse Generator1' */
  int32_T clockTickCounter_h;          /* '<S6>/Pulse Generator6' */
  int32_T clockTickCounter_e;          /* '<S6>/Pulse Generator' */
  int_T VCU_TWV_ModeSignalID;          /* '<S196>/VCU_TWV' */
  int_T TMS_ModeSignalID;              /* '<S195>/TMS' */
  int_T TMHCUCommand_ModeSignalID;     /* '<S194>/TM HCU Command' */
  int_T VCU_PDU_ModeSignalID;          /* '<S193>/VCU_PDU' */
  int_T VCU2MCU1_ModeSignalID;         /* '<S192>/VCU2MCU1' */
  int_T VCU2MCU2_ModeSignalID;         /* '<S192>/VCU2MCU2' */
  int_T ISGHCUCommand_ModeSignalID;    /* '<S191>/ISG HCU Command' */
  int_T VCU2ICUInfor2_ModeSignalID;    /* '<S190>/VCU2ICUInfor2' */
  int_T VCU2ICUInfor1_ModeSignalID;    /* '<S189>/VCU2ICUInfor1' */
  int_T VCU2ICUInfor3_ModeSignalID;    /* '<S189>/VCU2ICUInfor3' */
  int_T VCU2ICUInfor4_ModeSignalID;    /* '<S189>/VCU2ICUInfor4' */
  int_T VCU2ICUInfor5_ModeSignalID;    /* '<S189>/VCU2ICUInfor5' */
  int_T VCU2ICUInfor6_ModeSignalID;    /* '<S189>/VCU2ICUInfor6' */
  int_T VCU2ICUInfor7_ModeSignalID;    /* '<S189>/VCU2ICUInfor7' */
  int_T Ctrl_HVC_ModeSignalID;         /* '<S188>/Ctrl_HVC' */
  int_T VCU_DCDC1_ModeSignalID;        /* '<S186>/VCU_DCDC1' */
  int_T VCU2BRS_ModeSignalID;          /* '<S185>/VCU2BRS' */
  int_T VCU_BMS_ModeSignalID;          /* '<S184>/VCU_BMS' */
  int_T VCU_ACU1_ModeSignalID;         /* '<S183>/VCU_ACU1' */
  uint8_T Init_flg;                    /* '<Root>/Data Store Memory4' */
  uint8_T is_active_c14_ZT_VehCtrl_18B;/* '<S12>/Chart' */
  uint8_T is_c14_ZT_VehCtrl_18B;       /* '<S12>/Chart' */
  uint8_T is_active_c21_ZT_VehCtrl_18B;/* '<S13>/Chart' */
  uint8_T is_c21_ZT_VehCtrl_18B;       /* '<S13>/Chart' */
  uint8_T is_active_c11_ZT_VehCtrl_18B;/* '<S10>/Chart' */
  uint8_T is_c11_ZT_VehCtrl_18B;       /* '<S10>/Chart' */
  uint8_T is_active_c24_ZT_VehCtrl_18B;/* '<S2>/Chart2' */
  uint8_T is_c24_ZT_VehCtrl_18B;       /* '<S2>/Chart2' */
  uint8_T is_active_c23_ZT_VehCtrl_18B;/* '<S2>/Chart1' */
  uint8_T is_c23_ZT_VehCtrl_18B;       /* '<S2>/Chart1' */
  uint8_T is_active_c22_ZT_VehCtrl_18B;/* '<S2>/Chart' */
  uint8_T is_c22_ZT_VehCtrl_18B;       /* '<S2>/Chart' */
} DW_ZT_VehCtrl_18B_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TWV_Trig_ZCE;             /* '<S6>/TWV' */
  ZCSigState TMS_Trig_ZCE;             /* '<S6>/TMS' */
  ZCSigState TM_Trig_ZCE;              /* '<S6>/TM' */
  ZCSigState PDU_Trig_ZCE;             /* '<S6>/PDU' */
  ZCSigState MCU_Trig_ZCE;             /* '<S6>/MCU' */
  ZCSigState ISG_Trig_ZCE;             /* '<S6>/ISG' */
  ZCSigState ICU2_Trig_ZCE;            /* '<S6>/ICU2' */
  ZCSigState ICU1_Trig_ZCE;            /* '<S6>/ICU1 ' */
  ZCSigState HVC_Trig_ZCE;             /* '<S6>/HVC' */
  ZCSigState DCDC_Trig_ZCE;            /* '<S6>/DCDC' */
  ZCSigState BRS_Trig_ZCE;             /* '<S6>/BRS' */
  ZCSigState BMS_Trig_ZCE;             /* '<S6>/BMS' */
  ZCSigState ACU_Trig_ZCE;             /* '<S6>/ACU' */
} PrevZCX_ZT_VehCtrl_18B_T;

/* Invariant block signals (default storage) */
typedef struct {
  const CAN_MESSAGE_BUS VCU_TWV;       /* '<S196>/VCU_TWV' */
  const CAN_MESSAGE_BUS TMS;           /* '<S195>/TMS' */
  const CAN_MESSAGE_BUS TMHCUCommand;  /* '<S194>/TM HCU Command' */
  const CAN_MESSAGE_BUS VCU_PDU;       /* '<S193>/VCU_PDU' */
  const CAN_MESSAGE_BUS VCU2MCU1;      /* '<S192>/VCU2MCU1' */
  const CAN_MESSAGE_BUS VCU2MCU2;      /* '<S192>/VCU2MCU2' */
  const CAN_MESSAGE_BUS ISGHCUCommand; /* '<S191>/ISG HCU Command' */
  const CAN_MESSAGE_BUS VCU2ICUInfor2; /* '<S190>/VCU2ICUInfor2' */
  const CAN_MESSAGE_BUS VCU2ICUInfor1; /* '<S189>/VCU2ICUInfor1' */
  const CAN_MESSAGE_BUS VCU2ICUInfor3; /* '<S189>/VCU2ICUInfor3' */
  const CAN_MESSAGE_BUS VCU2ICUInfor4; /* '<S189>/VCU2ICUInfor4' */
  const CAN_MESSAGE_BUS VCU2ICUInfor5; /* '<S189>/VCU2ICUInfor5' */
  const CAN_MESSAGE_BUS VCU2ICUInfor6; /* '<S189>/VCU2ICUInfor6' */
  const CAN_MESSAGE_BUS VCU2ICUInfor7; /* '<S189>/VCU2ICUInfor7' */
  const CAN_MESSAGE_BUS Ctrl_HVC;      /* '<S188>/Ctrl_HVC' */
  const CAN_MESSAGE_BUS VCU_DCDC1;     /* '<S186>/VCU_DCDC1' */
  const CAN_MESSAGE_BUS VCU2BRS;       /* '<S185>/VCU2BRS' */
  const CAN_MESSAGE_BUS VCU_BMS;       /* '<S184>/VCU_BMS' */
  const CAN_MESSAGE_BUS VCU_ACU1;      /* '<S183>/VCU_ACU1' */
  const real_T Gain5;                  /* '<S219>/Gain5' */
  const real_T Gain4;                  /* '<S219>/Gain4' */
  const real_T Gain1;                  /* '<S219>/Gain1' */
  const uint16_T DataTypeConversion;   /* '<S204>/Data Type Conversion' */
  const uint16_T DataTypeConversion_p; /* '<S203>/Data Type Conversion' */
  const uint16_T DataTypeConversion_h; /* '<S202>/Data Type Conversion' */
  const uint8_T DataTypeConversion_k;  /* '<S216>/Data Type Conversion' */
  const uint8_T DataTypeConversion_c;  /* '<S215>/Data Type Conversion' */
  const uint8_T DataTypeConversion3;   /* '<S11>/Data Type Conversion3' */
  const uint8_T DataTypeConversion2;   /* '<S11>/Data Type Conversion2' */
  const uint8_T VectorConcatenate2[2]; /* '<S11>/Vector Concatenate2' */
  const uint8_T DataTypeConversion_b;  /* '<S9>/Data Type Conversion' */
  const boolean_T DataTypeConversion_cp;/* '<S3>/Data Type Conversion' */
  const boolean_T DataTypeConversion1; /* '<S2>/Data Type Conversion1' */
  const boolean_T DataTypeConversion2_g;/* '<S9>/Data Type Conversion2' */
} ConstB_ZT_VehCtrl_18B_T;

/* Real-time Model Data Structure */
struct tag_RTM_ZT_VehCtrl_18B_T {
  const char_T *errorStatus;
};

/* Block signals (default storage) */
extern B_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_B;

/* Block states (default storage) */
extern DW_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_DW;
extern const ConstB_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_ConstB;/* constant block i/o */

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern uint8_T Cnt_BMS6;               /* '<Root>/Data Store Memory1' */
extern uint8_T Cnt_TM_OUT;             /* '<Root>/Data Store Memory104' */
extern uint8_T Cnt_HVC4;               /* '<Root>/Data Store Memory12' */
extern uint8_T VCU_Mode;               /* '<Root>/Data Store Memory125' */
extern uint8_T Cnt_HVC7;               /* '<Root>/Data Store Memory13' */
extern uint8_T Cnt_ISG_OUT;            /* '<Root>/Data Store Memory133' */
extern uint8_T Cnt_TWV_OUT;            /* '<Root>/Data Store Memory134' */
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
extern uint8_T Cnt_TW1;                /* '<Root>/Data Store Memory46' */
extern uint8_T Cnt_TW2;                /* '<Root>/Data Store Memory47' */
extern uint8_T Cnt_TW3;                /* '<Root>/Data Store Memory48' */
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
extern uint8_T Cnt_MCU_OUT;            /* '<Root>/Data Store Memory64' */
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
extern void ZT_VehCtrl_18B_initialize(void);
extern void ZT_VehCtrl_18B_step(void);
extern void ZT_VehCtrl_18B_terminate(void);

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
extern RT_MODEL_ZT_VehCtrl_18B_T *const ZT_VehCtrl_18B_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Constant10' : Unused code path elimination
 * Block '<Root>/Constant11' : Unused code path elimination
 * Block '<Root>/Constant12' : Unused code path elimination
 * Block '<Root>/Constant2' : Unused code path elimination
 * Block '<Root>/Constant3' : Unused code path elimination
 * Block '<Root>/Constant4' : Unused code path elimination
 * Block '<Root>/Constant5' : Unused code path elimination
 * Block '<Root>/Constant6' : Unused code path elimination
 * Block '<Root>/Constant7' : Unused code path elimination
 * Block '<Root>/Constant8' : Unused code path elimination
 * Block '<Root>/Constant9' : Unused code path elimination
 * Block '<S10>/Data Type Conversion3' : Unused code path elimination
 * Block '<S10>/Data Type Conversion4' : Unused code path elimination
 * Block '<S11>/Data Type Conversion' : Unused code path elimination
 * Block '<S11>/Data Type Conversion1' : Unused code path elimination
 * Block '<S12>/Data Type Conversion' : Unused code path elimination
 * Block '<S12>/Data Type Conversion1' : Unused code path elimination
 * Block '<S13>/Data Type Conversion3' : Unused code path elimination
 * Block '<S13>/Data Type Conversion4' : Unused code path elimination
 * Block '<S5>/1-D Lookup Table' : Unused code path elimination
 * Block '<S84>/Bus Creator' : Unused code path elimination
 * Block '<S84>/CAN Unpack6' : Unused code path elimination
 * Block '<S84>/Constant1' : Unused code path elimination
 * Block '<S84>/Constant4' : Unused code path elimination
 * Block '<S84>/Constant5' : Unused code path elimination
 * Block '<S84>/Data Type Conversion' : Unused code path elimination
 * Block '<S84>/Data Type Conversion1' : Unused code path elimination
 * Block '<S84>/Data Type Conversion14' : Unused code path elimination
 * Block '<S84>/Data Type Conversion15' : Unused code path elimination
 * Block '<S84>/Data Type Conversion17' : Unused code path elimination
 * Block '<S84>/Data Type Conversion18' : Unused code path elimination
 * Block '<S84>/Data Type Conversion19' : Unused code path elimination
 * Block '<S84>/Data Type Conversion2' : Unused code path elimination
 * Block '<S84>/Data Type Conversion3' : Unused code path elimination
 * Block '<S91>/Bus Creator' : Unused code path elimination
 * Block '<S91>/CAN Unpack6' : Unused code path elimination
 * Block '<S91>/Constant1' : Unused code path elimination
 * Block '<S91>/Constant4' : Unused code path elimination
 * Block '<S91>/Constant5' : Unused code path elimination
 * Block '<S91>/Data Type Conversion' : Unused code path elimination
 * Block '<S91>/Data Type Conversion1' : Unused code path elimination
 * Block '<S91>/Data Type Conversion14' : Unused code path elimination
 * Block '<S91>/Data Type Conversion15' : Unused code path elimination
 * Block '<S91>/Data Type Conversion17' : Unused code path elimination
 * Block '<S91>/Data Type Conversion18' : Unused code path elimination
 * Block '<S91>/Data Type Conversion19' : Unused code path elimination
 * Block '<S91>/Data Type Conversion2' : Unused code path elimination
 * Block '<S91>/Data Type Conversion3' : Unused code path elimination
 * Block '<S91>/Data Type Conversion4' : Unused code path elimination
 * Block '<S95>/Bus Creator' : Unused code path elimination
 * Block '<S95>/CAN Unpack6' : Unused code path elimination
 * Block '<S95>/Constant1' : Unused code path elimination
 * Block '<S95>/Constant4' : Unused code path elimination
 * Block '<S95>/Constant5' : Unused code path elimination
 * Block '<S95>/Data Type Conversion' : Unused code path elimination
 * Block '<S95>/Data Type Conversion1' : Unused code path elimination
 * Block '<S95>/Data Type Conversion14' : Unused code path elimination
 * Block '<S95>/Data Type Conversion15' : Unused code path elimination
 * Block '<S95>/Data Type Conversion17' : Unused code path elimination
 * Block '<S95>/Data Type Conversion18' : Unused code path elimination
 * Block '<S95>/Data Type Conversion19' : Unused code path elimination
 * Block '<S95>/Data Type Conversion2' : Unused code path elimination
 * Block '<S95>/Data Type Conversion3' : Unused code path elimination
 * Block '<S95>/Data Type Conversion4' : Unused code path elimination
 * Block '<S96>/Bus Creator' : Unused code path elimination
 * Block '<S96>/CAN Unpack6' : Unused code path elimination
 * Block '<S96>/Constant1' : Unused code path elimination
 * Block '<S96>/Constant4' : Unused code path elimination
 * Block '<S96>/Constant5' : Unused code path elimination
 * Block '<S96>/Data Type Conversion' : Unused code path elimination
 * Block '<S96>/Data Type Conversion1' : Unused code path elimination
 * Block '<S96>/Data Type Conversion14' : Unused code path elimination
 * Block '<S96>/Data Type Conversion15' : Unused code path elimination
 * Block '<S96>/Data Type Conversion17' : Unused code path elimination
 * Block '<S96>/Data Type Conversion18' : Unused code path elimination
 * Block '<S96>/Data Type Conversion19' : Unused code path elimination
 * Block '<S96>/Data Type Conversion2' : Unused code path elimination
 * Block '<S97>/Bus Creator' : Unused code path elimination
 * Block '<S97>/CAN Unpack6' : Unused code path elimination
 * Block '<S97>/Constant1' : Unused code path elimination
 * Block '<S97>/Constant4' : Unused code path elimination
 * Block '<S97>/Constant5' : Unused code path elimination
 * Block '<S97>/Data Type Conversion' : Unused code path elimination
 * Block '<S97>/Data Type Conversion1' : Unused code path elimination
 * Block '<S97>/Data Type Conversion14' : Unused code path elimination
 * Block '<S97>/Data Type Conversion15' : Unused code path elimination
 * Block '<S97>/Data Type Conversion17' : Unused code path elimination
 * Block '<S97>/Data Type Conversion18' : Unused code path elimination
 * Block '<S97>/Data Type Conversion19' : Unused code path elimination
 * Block '<S97>/Data Type Conversion2' : Unused code path elimination
 * Block '<S97>/Data Type Conversion3' : Unused code path elimination
 * Block '<S97>/Data Type Conversion4' : Unused code path elimination
 * Block '<S98>/Bus Creator' : Unused code path elimination
 * Block '<S98>/CAN Unpack6' : Unused code path elimination
 * Block '<S98>/Constant1' : Unused code path elimination
 * Block '<S98>/Constant4' : Unused code path elimination
 * Block '<S98>/Constant5' : Unused code path elimination
 * Block '<S98>/Data Type Conversion' : Unused code path elimination
 * Block '<S98>/Data Type Conversion1' : Unused code path elimination
 * Block '<S98>/Data Type Conversion10' : Unused code path elimination
 * Block '<S98>/Data Type Conversion11' : Unused code path elimination
 * Block '<S98>/Data Type Conversion12' : Unused code path elimination
 * Block '<S98>/Data Type Conversion13' : Unused code path elimination
 * Block '<S98>/Data Type Conversion14' : Unused code path elimination
 * Block '<S98>/Data Type Conversion15' : Unused code path elimination
 * Block '<S98>/Data Type Conversion17' : Unused code path elimination
 * Block '<S98>/Data Type Conversion18' : Unused code path elimination
 * Block '<S98>/Data Type Conversion19' : Unused code path elimination
 * Block '<S98>/Data Type Conversion2' : Unused code path elimination
 * Block '<S98>/Data Type Conversion3' : Unused code path elimination
 * Block '<S98>/Data Type Conversion4' : Unused code path elimination
 * Block '<S98>/Data Type Conversion5' : Unused code path elimination
 * Block '<S98>/Data Type Conversion6' : Unused code path elimination
 * Block '<S98>/Data Type Conversion7' : Unused code path elimination
 * Block '<S98>/Data Type Conversion8' : Unused code path elimination
 * Block '<S98>/Data Type Conversion9' : Unused code path elimination
 * Block '<S102>/Bus Creator' : Unused code path elimination
 * Block '<S102>/CAN Unpack6' : Unused code path elimination
 * Block '<S102>/Constant1' : Unused code path elimination
 * Block '<S102>/Constant4' : Unused code path elimination
 * Block '<S102>/Constant5' : Unused code path elimination
 * Block '<S102>/Data Type Conversion' : Unused code path elimination
 * Block '<S102>/Data Type Conversion1' : Unused code path elimination
 * Block '<S102>/Data Type Conversion14' : Unused code path elimination
 * Block '<S102>/Data Type Conversion15' : Unused code path elimination
 * Block '<S102>/Data Type Conversion17' : Unused code path elimination
 * Block '<S102>/Data Type Conversion18' : Unused code path elimination
 * Block '<S102>/Data Type Conversion19' : Unused code path elimination
 * Block '<S102>/Data Type Conversion2' : Unused code path elimination
 * Block '<S102>/Data Type Conversion3' : Unused code path elimination
 * Block '<S102>/Data Type Conversion4' : Unused code path elimination
 * Block '<S102>/Data Type Conversion5' : Unused code path elimination
 * Block '<S103>/Bus Creator' : Unused code path elimination
 * Block '<S103>/CAN Unpack6' : Unused code path elimination
 * Block '<S103>/Constant1' : Unused code path elimination
 * Block '<S103>/Constant4' : Unused code path elimination
 * Block '<S103>/Constant5' : Unused code path elimination
 * Block '<S103>/Data Type Conversion' : Unused code path elimination
 * Block '<S103>/Data Type Conversion1' : Unused code path elimination
 * Block '<S103>/Data Type Conversion14' : Unused code path elimination
 * Block '<S103>/Data Type Conversion15' : Unused code path elimination
 * Block '<S103>/Data Type Conversion17' : Unused code path elimination
 * Block '<S103>/Data Type Conversion18' : Unused code path elimination
 * Block '<S103>/Data Type Conversion19' : Unused code path elimination
 * Block '<S103>/Data Type Conversion2' : Unused code path elimination
 * Block '<S103>/Data Type Conversion3' : Unused code path elimination
 * Block '<S103>/Data Type Conversion4' : Unused code path elimination
 * Block '<S104>/Bus Creator' : Unused code path elimination
 * Block '<S104>/CAN Unpack6' : Unused code path elimination
 * Block '<S104>/Constant1' : Unused code path elimination
 * Block '<S104>/Constant4' : Unused code path elimination
 * Block '<S104>/Constant5' : Unused code path elimination
 * Block '<S104>/Data Type Conversion' : Unused code path elimination
 * Block '<S104>/Data Type Conversion1' : Unused code path elimination
 * Block '<S104>/Data Type Conversion14' : Unused code path elimination
 * Block '<S104>/Data Type Conversion15' : Unused code path elimination
 * Block '<S104>/Data Type Conversion17' : Unused code path elimination
 * Block '<S104>/Data Type Conversion18' : Unused code path elimination
 * Block '<S104>/Data Type Conversion19' : Unused code path elimination
 * Block '<S104>/Data Type Conversion2' : Unused code path elimination
 * Block '<S104>/Data Type Conversion3' : Unused code path elimination
 * Block '<S105>/Bus Creator' : Unused code path elimination
 * Block '<S105>/CAN Unpack6' : Unused code path elimination
 * Block '<S105>/Constant1' : Unused code path elimination
 * Block '<S105>/Constant4' : Unused code path elimination
 * Block '<S105>/Constant5' : Unused code path elimination
 * Block '<S105>/Data Type Conversion' : Unused code path elimination
 * Block '<S105>/Data Type Conversion1' : Unused code path elimination
 * Block '<S105>/Data Type Conversion14' : Unused code path elimination
 * Block '<S105>/Data Type Conversion15' : Unused code path elimination
 * Block '<S105>/Data Type Conversion17' : Unused code path elimination
 * Block '<S105>/Data Type Conversion18' : Unused code path elimination
 * Block '<S105>/Data Type Conversion19' : Unused code path elimination
 * Block '<S105>/Data Type Conversion2' : Unused code path elimination
 * Block '<S105>/Data Type Conversion3' : Unused code path elimination
 * Block '<S105>/Data Type Conversion4' : Unused code path elimination
 * Block '<S105>/Data Type Conversion5' : Unused code path elimination
 * Block '<S105>/Data Type Conversion6' : Unused code path elimination
 * Block '<S105>/Data Type Conversion7' : Unused code path elimination
 * Block '<S105>/Data Type Conversion8' : Unused code path elimination
 * Block '<S106>/Bus Creator' : Unused code path elimination
 * Block '<S106>/CAN Unpack6' : Unused code path elimination
 * Block '<S106>/Constant1' : Unused code path elimination
 * Block '<S106>/Constant4' : Unused code path elimination
 * Block '<S106>/Constant5' : Unused code path elimination
 * Block '<S106>/Data Type Conversion' : Unused code path elimination
 * Block '<S106>/Data Type Conversion1' : Unused code path elimination
 * Block '<S106>/Data Type Conversion14' : Unused code path elimination
 * Block '<S106>/Data Type Conversion15' : Unused code path elimination
 * Block '<S106>/Data Type Conversion17' : Unused code path elimination
 * Block '<S106>/Data Type Conversion18' : Unused code path elimination
 * Block '<S106>/Data Type Conversion19' : Unused code path elimination
 * Block '<S106>/Data Type Conversion2' : Unused code path elimination
 * Block '<S130>/Bus Creator' : Unused code path elimination
 * Block '<S130>/CAN Unpack6' : Unused code path elimination
 * Block '<S130>/Constant1' : Unused code path elimination
 * Block '<S130>/Constant4' : Unused code path elimination
 * Block '<S130>/Constant5' : Unused code path elimination
 * Block '<S130>/Data Type Conversion' : Unused code path elimination
 * Block '<S130>/Data Type Conversion1' : Unused code path elimination
 * Block '<S130>/Data Type Conversion14' : Unused code path elimination
 * Block '<S130>/Data Type Conversion15' : Unused code path elimination
 * Block '<S130>/Data Type Conversion17' : Unused code path elimination
 * Block '<S130>/Data Type Conversion18' : Unused code path elimination
 * Block '<S130>/Data Type Conversion19' : Unused code path elimination
 * Block '<S130>/Data Type Conversion2' : Unused code path elimination
 * Block '<S130>/Data Type Conversion3' : Unused code path elimination
 * Block '<S130>/Data Type Conversion4' : Unused code path elimination
 * Block '<S130>/Data Type Conversion5' : Unused code path elimination
 * Block '<S131>/Bus Creator' : Unused code path elimination
 * Block '<S131>/CAN Unpack6' : Unused code path elimination
 * Block '<S131>/Constant1' : Unused code path elimination
 * Block '<S131>/Constant4' : Unused code path elimination
 * Block '<S131>/Constant5' : Unused code path elimination
 * Block '<S131>/Data Type Conversion' : Unused code path elimination
 * Block '<S131>/Data Type Conversion1' : Unused code path elimination
 * Block '<S131>/Data Type Conversion14' : Unused code path elimination
 * Block '<S131>/Data Type Conversion15' : Unused code path elimination
 * Block '<S131>/Data Type Conversion17' : Unused code path elimination
 * Block '<S131>/Data Type Conversion18' : Unused code path elimination
 * Block '<S131>/Data Type Conversion19' : Unused code path elimination
 * Block '<S131>/Data Type Conversion2' : Unused code path elimination
 * Block '<S131>/Data Type Conversion3' : Unused code path elimination
 * Block '<S131>/Data Type Conversion4' : Unused code path elimination
 * Block '<S131>/Data Type Conversion5' : Unused code path elimination
 * Block '<S132>/Bus Creator' : Unused code path elimination
 * Block '<S132>/CAN Unpack6' : Unused code path elimination
 * Block '<S132>/Constant1' : Unused code path elimination
 * Block '<S132>/Constant4' : Unused code path elimination
 * Block '<S132>/Constant5' : Unused code path elimination
 * Block '<S132>/Data Type Conversion' : Unused code path elimination
 * Block '<S132>/Data Type Conversion1' : Unused code path elimination
 * Block '<S132>/Data Type Conversion14' : Unused code path elimination
 * Block '<S132>/Data Type Conversion15' : Unused code path elimination
 * Block '<S132>/Data Type Conversion17' : Unused code path elimination
 * Block '<S132>/Data Type Conversion18' : Unused code path elimination
 * Block '<S132>/Data Type Conversion19' : Unused code path elimination
 * Block '<S132>/Data Type Conversion2' : Unused code path elimination
 * Block '<S132>/Data Type Conversion3' : Unused code path elimination
 * Block '<S132>/Data Type Conversion4' : Unused code path elimination
 * Block '<S132>/Data Type Conversion5' : Unused code path elimination
 * Block '<S133>/Bus Creator' : Unused code path elimination
 * Block '<S133>/CAN Unpack6' : Unused code path elimination
 * Block '<S133>/Constant1' : Unused code path elimination
 * Block '<S133>/Constant4' : Unused code path elimination
 * Block '<S133>/Constant5' : Unused code path elimination
 * Block '<S133>/Data Type Conversion' : Unused code path elimination
 * Block '<S133>/Data Type Conversion1' : Unused code path elimination
 * Block '<S133>/Data Type Conversion14' : Unused code path elimination
 * Block '<S133>/Data Type Conversion15' : Unused code path elimination
 * Block '<S133>/Data Type Conversion17' : Unused code path elimination
 * Block '<S133>/Data Type Conversion18' : Unused code path elimination
 * Block '<S133>/Data Type Conversion19' : Unused code path elimination
 * Block '<S133>/Data Type Conversion2' : Unused code path elimination
 * Block '<S133>/Data Type Conversion3' : Unused code path elimination
 * Block '<S133>/Data Type Conversion4' : Unused code path elimination
 * Block '<S134>/Bus Creator' : Unused code path elimination
 * Block '<S134>/CAN Unpack6' : Unused code path elimination
 * Block '<S134>/Constant1' : Unused code path elimination
 * Block '<S134>/Constant4' : Unused code path elimination
 * Block '<S134>/Constant5' : Unused code path elimination
 * Block '<S134>/Data Type Conversion' : Unused code path elimination
 * Block '<S134>/Data Type Conversion1' : Unused code path elimination
 * Block '<S134>/Data Type Conversion14' : Unused code path elimination
 * Block '<S134>/Data Type Conversion15' : Unused code path elimination
 * Block '<S134>/Data Type Conversion17' : Unused code path elimination
 * Block '<S134>/Data Type Conversion18' : Unused code path elimination
 * Block '<S134>/Data Type Conversion19' : Unused code path elimination
 * Block '<S134>/Data Type Conversion2' : Unused code path elimination
 * Block '<S134>/Data Type Conversion3' : Unused code path elimination
 * Block '<S134>/Data Type Conversion4' : Unused code path elimination
 * Block '<S134>/Data Type Conversion5' : Unused code path elimination
 * Block '<S135>/Bus Creator' : Unused code path elimination
 * Block '<S135>/CAN Unpack6' : Unused code path elimination
 * Block '<S135>/Constant1' : Unused code path elimination
 * Block '<S135>/Constant4' : Unused code path elimination
 * Block '<S135>/Constant5' : Unused code path elimination
 * Block '<S135>/Data Type Conversion' : Unused code path elimination
 * Block '<S135>/Data Type Conversion1' : Unused code path elimination
 * Block '<S135>/Data Type Conversion14' : Unused code path elimination
 * Block '<S135>/Data Type Conversion15' : Unused code path elimination
 * Block '<S135>/Data Type Conversion17' : Unused code path elimination
 * Block '<S135>/Data Type Conversion18' : Unused code path elimination
 * Block '<S135>/Data Type Conversion19' : Unused code path elimination
 * Block '<S135>/Data Type Conversion2' : Unused code path elimination
 * Block '<S135>/Data Type Conversion3' : Unused code path elimination
 * Block '<S135>/Data Type Conversion4' : Unused code path elimination
 * Block '<S135>/Data Type Conversion5' : Unused code path elimination
 * Block '<S136>/Bus Creator' : Unused code path elimination
 * Block '<S136>/CAN Unpack6' : Unused code path elimination
 * Block '<S136>/Constant1' : Unused code path elimination
 * Block '<S136>/Constant4' : Unused code path elimination
 * Block '<S136>/Constant5' : Unused code path elimination
 * Block '<S136>/Data Type Conversion' : Unused code path elimination
 * Block '<S136>/Data Type Conversion1' : Unused code path elimination
 * Block '<S136>/Data Type Conversion14' : Unused code path elimination
 * Block '<S136>/Data Type Conversion15' : Unused code path elimination
 * Block '<S136>/Data Type Conversion17' : Unused code path elimination
 * Block '<S136>/Data Type Conversion18' : Unused code path elimination
 * Block '<S136>/Data Type Conversion19' : Unused code path elimination
 * Block '<S136>/Data Type Conversion2' : Unused code path elimination
 * Block '<S136>/Data Type Conversion3' : Unused code path elimination
 * Block '<S136>/Data Type Conversion4' : Unused code path elimination
 * Block '<S137>/Bus Creator' : Unused code path elimination
 * Block '<S137>/CAN Unpack6' : Unused code path elimination
 * Block '<S137>/Constant1' : Unused code path elimination
 * Block '<S137>/Constant4' : Unused code path elimination
 * Block '<S137>/Constant5' : Unused code path elimination
 * Block '<S137>/Data Type Conversion' : Unused code path elimination
 * Block '<S137>/Data Type Conversion1' : Unused code path elimination
 * Block '<S137>/Data Type Conversion10' : Unused code path elimination
 * Block '<S137>/Data Type Conversion11' : Unused code path elimination
 * Block '<S137>/Data Type Conversion12' : Unused code path elimination
 * Block '<S137>/Data Type Conversion13' : Unused code path elimination
 * Block '<S137>/Data Type Conversion14' : Unused code path elimination
 * Block '<S137>/Data Type Conversion15' : Unused code path elimination
 * Block '<S137>/Data Type Conversion17' : Unused code path elimination
 * Block '<S137>/Data Type Conversion18' : Unused code path elimination
 * Block '<S137>/Data Type Conversion19' : Unused code path elimination
 * Block '<S137>/Data Type Conversion2' : Unused code path elimination
 * Block '<S137>/Data Type Conversion3' : Unused code path elimination
 * Block '<S137>/Data Type Conversion4' : Unused code path elimination
 * Block '<S137>/Data Type Conversion5' : Unused code path elimination
 * Block '<S137>/Data Type Conversion6' : Unused code path elimination
 * Block '<S137>/Data Type Conversion7' : Unused code path elimination
 * Block '<S137>/Data Type Conversion8' : Unused code path elimination
 * Block '<S137>/Data Type Conversion9' : Unused code path elimination
 * Block '<S138>/Bus Creator' : Unused code path elimination
 * Block '<S138>/CAN Unpack6' : Unused code path elimination
 * Block '<S138>/Constant1' : Unused code path elimination
 * Block '<S138>/Constant4' : Unused code path elimination
 * Block '<S138>/Constant5' : Unused code path elimination
 * Block '<S138>/Data Type Conversion' : Unused code path elimination
 * Block '<S138>/Data Type Conversion1' : Unused code path elimination
 * Block '<S138>/Data Type Conversion14' : Unused code path elimination
 * Block '<S138>/Data Type Conversion15' : Unused code path elimination
 * Block '<S138>/Data Type Conversion17' : Unused code path elimination
 * Block '<S138>/Data Type Conversion18' : Unused code path elimination
 * Block '<S138>/Data Type Conversion19' : Unused code path elimination
 * Block '<S138>/Data Type Conversion2' : Unused code path elimination
 * Block '<S138>/Data Type Conversion3' : Unused code path elimination
 * Block '<S138>/Data Type Conversion4' : Unused code path elimination
 * Block '<S138>/Data Type Conversion5' : Unused code path elimination
 * Block '<S138>/Data Type Conversion6' : Unused code path elimination
 * Block '<S139>/Bus Creator' : Unused code path elimination
 * Block '<S139>/CAN Unpack6' : Unused code path elimination
 * Block '<S139>/Constant1' : Unused code path elimination
 * Block '<S139>/Constant4' : Unused code path elimination
 * Block '<S139>/Constant5' : Unused code path elimination
 * Block '<S139>/Data Type Conversion' : Unused code path elimination
 * Block '<S139>/Data Type Conversion1' : Unused code path elimination
 * Block '<S139>/Data Type Conversion14' : Unused code path elimination
 * Block '<S139>/Data Type Conversion15' : Unused code path elimination
 * Block '<S139>/Data Type Conversion17' : Unused code path elimination
 * Block '<S139>/Data Type Conversion18' : Unused code path elimination
 * Block '<S139>/Data Type Conversion19' : Unused code path elimination
 * Block '<S139>/Data Type Conversion2' : Unused code path elimination
 * Block '<S139>/Data Type Conversion3' : Unused code path elimination
 * Block '<S139>/Data Type Conversion4' : Unused code path elimination
 * Block '<S139>/Data Type Conversion5' : Unused code path elimination
 * Block '<S139>/Data Type Conversion6' : Unused code path elimination
 * Block '<S139>/Data Type Conversion7' : Unused code path elimination
 * Block '<S140>/Bus Creator' : Unused code path elimination
 * Block '<S140>/CAN Unpack6' : Unused code path elimination
 * Block '<S140>/Constant1' : Unused code path elimination
 * Block '<S140>/Constant4' : Unused code path elimination
 * Block '<S140>/Constant5' : Unused code path elimination
 * Block '<S140>/Data Type Conversion' : Unused code path elimination
 * Block '<S140>/Data Type Conversion1' : Unused code path elimination
 * Block '<S140>/Data Type Conversion14' : Unused code path elimination
 * Block '<S140>/Data Type Conversion15' : Unused code path elimination
 * Block '<S140>/Data Type Conversion17' : Unused code path elimination
 * Block '<S140>/Data Type Conversion18' : Unused code path elimination
 * Block '<S140>/Data Type Conversion19' : Unused code path elimination
 * Block '<S140>/Data Type Conversion2' : Unused code path elimination
 * Block '<S140>/Data Type Conversion3' : Unused code path elimination
 * Block '<S140>/Data Type Conversion4' : Unused code path elimination
 * Block '<S140>/Data Type Conversion5' : Unused code path elimination
 * Block '<S140>/Data Type Conversion6' : Unused code path elimination
 * Block '<S141>/Bus Creator' : Unused code path elimination
 * Block '<S141>/CAN Unpack6' : Unused code path elimination
 * Block '<S141>/Constant1' : Unused code path elimination
 * Block '<S141>/Constant4' : Unused code path elimination
 * Block '<S141>/Constant5' : Unused code path elimination
 * Block '<S141>/Data Type Conversion' : Unused code path elimination
 * Block '<S141>/Data Type Conversion1' : Unused code path elimination
 * Block '<S141>/Data Type Conversion14' : Unused code path elimination
 * Block '<S141>/Data Type Conversion15' : Unused code path elimination
 * Block '<S141>/Data Type Conversion17' : Unused code path elimination
 * Block '<S141>/Data Type Conversion18' : Unused code path elimination
 * Block '<S141>/Data Type Conversion19' : Unused code path elimination
 * Block '<S141>/Data Type Conversion2' : Unused code path elimination
 * Block '<S141>/Data Type Conversion3' : Unused code path elimination
 * Block '<S141>/Data Type Conversion4' : Unused code path elimination
 * Block '<S141>/Data Type Conversion5' : Unused code path elimination
 * Block '<S142>/Bus Creator' : Unused code path elimination
 * Block '<S142>/CAN Unpack6' : Unused code path elimination
 * Block '<S142>/Constant1' : Unused code path elimination
 * Block '<S142>/Constant4' : Unused code path elimination
 * Block '<S142>/Constant5' : Unused code path elimination
 * Block '<S142>/Data Type Conversion' : Unused code path elimination
 * Block '<S142>/Data Type Conversion1' : Unused code path elimination
 * Block '<S142>/Data Type Conversion14' : Unused code path elimination
 * Block '<S142>/Data Type Conversion15' : Unused code path elimination
 * Block '<S142>/Data Type Conversion17' : Unused code path elimination
 * Block '<S142>/Data Type Conversion18' : Unused code path elimination
 * Block '<S142>/Data Type Conversion19' : Unused code path elimination
 * Block '<S142>/Data Type Conversion2' : Unused code path elimination
 * Block '<S142>/Data Type Conversion3' : Unused code path elimination
 * Block '<S142>/Data Type Conversion4' : Unused code path elimination
 * Block '<S143>/Bus Creator' : Unused code path elimination
 * Block '<S143>/CAN Unpack6' : Unused code path elimination
 * Block '<S143>/Constant1' : Unused code path elimination
 * Block '<S143>/Constant4' : Unused code path elimination
 * Block '<S143>/Constant5' : Unused code path elimination
 * Block '<S143>/Data Type Conversion' : Unused code path elimination
 * Block '<S143>/Data Type Conversion1' : Unused code path elimination
 * Block '<S143>/Data Type Conversion14' : Unused code path elimination
 * Block '<S143>/Data Type Conversion15' : Unused code path elimination
 * Block '<S143>/Data Type Conversion17' : Unused code path elimination
 * Block '<S143>/Data Type Conversion18' : Unused code path elimination
 * Block '<S143>/Data Type Conversion19' : Unused code path elimination
 * Block '<S143>/Data Type Conversion2' : Unused code path elimination
 * Block '<S143>/Data Type Conversion3' : Unused code path elimination
 * Block '<S143>/Data Type Conversion4' : Unused code path elimination
 * Block '<S143>/Data Type Conversion5' : Unused code path elimination
 * Block '<S143>/Data Type Conversion6' : Unused code path elimination
 * Block '<S143>/Data Type Conversion7' : Unused code path elimination
 * Block '<S143>/Data Type Conversion8' : Unused code path elimination
 * Block '<S143>/Data Type Conversion9' : Unused code path elimination
 * Block '<S144>/Bus Creator' : Unused code path elimination
 * Block '<S144>/CAN Unpack6' : Unused code path elimination
 * Block '<S144>/Constant1' : Unused code path elimination
 * Block '<S144>/Constant4' : Unused code path elimination
 * Block '<S144>/Constant5' : Unused code path elimination
 * Block '<S144>/Data Type Conversion' : Unused code path elimination
 * Block '<S144>/Data Type Conversion1' : Unused code path elimination
 * Block '<S144>/Data Type Conversion14' : Unused code path elimination
 * Block '<S144>/Data Type Conversion15' : Unused code path elimination
 * Block '<S144>/Data Type Conversion17' : Unused code path elimination
 * Block '<S144>/Data Type Conversion18' : Unused code path elimination
 * Block '<S144>/Data Type Conversion19' : Unused code path elimination
 * Block '<S144>/Data Type Conversion2' : Unused code path elimination
 * Block '<S144>/Data Type Conversion3' : Unused code path elimination
 * Block '<S144>/Data Type Conversion4' : Unused code path elimination
 * Block '<S144>/Data Type Conversion5' : Unused code path elimination
 * Block '<S144>/Data Type Conversion6' : Unused code path elimination
 * Block '<S145>/Bus Creator' : Unused code path elimination
 * Block '<S145>/CAN Unpack6' : Unused code path elimination
 * Block '<S145>/Constant1' : Unused code path elimination
 * Block '<S145>/Constant4' : Unused code path elimination
 * Block '<S145>/Constant5' : Unused code path elimination
 * Block '<S145>/Data Type Conversion' : Unused code path elimination
 * Block '<S145>/Data Type Conversion1' : Unused code path elimination
 * Block '<S145>/Data Type Conversion14' : Unused code path elimination
 * Block '<S145>/Data Type Conversion15' : Unused code path elimination
 * Block '<S145>/Data Type Conversion17' : Unused code path elimination
 * Block '<S145>/Data Type Conversion18' : Unused code path elimination
 * Block '<S145>/Data Type Conversion19' : Unused code path elimination
 * Block '<S145>/Data Type Conversion2' : Unused code path elimination
 * Block '<S145>/Data Type Conversion3' : Unused code path elimination
 * Block '<S145>/Data Type Conversion4' : Unused code path elimination
 * Block '<S146>/Bus Creator' : Unused code path elimination
 * Block '<S146>/CAN Unpack6' : Unused code path elimination
 * Block '<S146>/Constant1' : Unused code path elimination
 * Block '<S146>/Constant4' : Unused code path elimination
 * Block '<S146>/Constant5' : Unused code path elimination
 * Block '<S146>/Data Type Conversion' : Unused code path elimination
 * Block '<S146>/Data Type Conversion1' : Unused code path elimination
 * Block '<S146>/Data Type Conversion14' : Unused code path elimination
 * Block '<S146>/Data Type Conversion15' : Unused code path elimination
 * Block '<S146>/Data Type Conversion17' : Unused code path elimination
 * Block '<S146>/Data Type Conversion18' : Unused code path elimination
 * Block '<S146>/Data Type Conversion19' : Unused code path elimination
 * Block '<S146>/Data Type Conversion2' : Unused code path elimination
 * Block '<S146>/Data Type Conversion3' : Unused code path elimination
 * Block '<S146>/Data Type Conversion4' : Unused code path elimination
 * Block '<S146>/Data Type Conversion5' : Unused code path elimination
 * Block '<S146>/Data Type Conversion6' : Unused code path elimination
 * Block '<S146>/Data Type Conversion7' : Unused code path elimination
 * Block '<S146>/Data Type Conversion8' : Unused code path elimination
 * Block '<S146>/Data Type Conversion9' : Unused code path elimination
 * Block '<S147>/Bus Creator' : Unused code path elimination
 * Block '<S147>/CAN Unpack6' : Unused code path elimination
 * Block '<S147>/Constant1' : Unused code path elimination
 * Block '<S147>/Constant4' : Unused code path elimination
 * Block '<S147>/Constant5' : Unused code path elimination
 * Block '<S147>/Data Type Conversion' : Unused code path elimination
 * Block '<S147>/Data Type Conversion1' : Unused code path elimination
 * Block '<S147>/Data Type Conversion14' : Unused code path elimination
 * Block '<S147>/Data Type Conversion15' : Unused code path elimination
 * Block '<S147>/Data Type Conversion17' : Unused code path elimination
 * Block '<S147>/Data Type Conversion18' : Unused code path elimination
 * Block '<S147>/Data Type Conversion19' : Unused code path elimination
 * Block '<S147>/Data Type Conversion2' : Unused code path elimination
 * Block '<S147>/Data Type Conversion3' : Unused code path elimination
 * Block '<S147>/Data Type Conversion4' : Unused code path elimination
 * Block '<S147>/Data Type Conversion5' : Unused code path elimination
 * Block '<S147>/Data Type Conversion6' : Unused code path elimination
 * Block '<S148>/Bus Creator' : Unused code path elimination
 * Block '<S148>/CAN Unpack6' : Unused code path elimination
 * Block '<S148>/Constant1' : Unused code path elimination
 * Block '<S148>/Constant4' : Unused code path elimination
 * Block '<S148>/Constant5' : Unused code path elimination
 * Block '<S148>/Data Type Conversion' : Unused code path elimination
 * Block '<S148>/Data Type Conversion1' : Unused code path elimination
 * Block '<S148>/Data Type Conversion14' : Unused code path elimination
 * Block '<S148>/Data Type Conversion15' : Unused code path elimination
 * Block '<S148>/Data Type Conversion17' : Unused code path elimination
 * Block '<S148>/Data Type Conversion18' : Unused code path elimination
 * Block '<S148>/Data Type Conversion19' : Unused code path elimination
 * Block '<S148>/Data Type Conversion2' : Unused code path elimination
 * Block '<S148>/Data Type Conversion3' : Unused code path elimination
 * Block '<S148>/Data Type Conversion4' : Unused code path elimination
 * Block '<S148>/Data Type Conversion5' : Unused code path elimination
 * Block '<S148>/Data Type Conversion6' : Unused code path elimination
 * Block '<S148>/Data Type Conversion7' : Unused code path elimination
 * Block '<S149>/Bus Creator' : Unused code path elimination
 * Block '<S149>/CAN Unpack6' : Unused code path elimination
 * Block '<S149>/Constant1' : Unused code path elimination
 * Block '<S149>/Constant4' : Unused code path elimination
 * Block '<S149>/Constant5' : Unused code path elimination
 * Block '<S149>/Data Type Conversion' : Unused code path elimination
 * Block '<S149>/Data Type Conversion1' : Unused code path elimination
 * Block '<S149>/Data Type Conversion14' : Unused code path elimination
 * Block '<S149>/Data Type Conversion15' : Unused code path elimination
 * Block '<S149>/Data Type Conversion17' : Unused code path elimination
 * Block '<S149>/Data Type Conversion18' : Unused code path elimination
 * Block '<S149>/Data Type Conversion19' : Unused code path elimination
 * Block '<S149>/Data Type Conversion2' : Unused code path elimination
 * Block '<S149>/Data Type Conversion3' : Unused code path elimination
 * Block '<S149>/Data Type Conversion4' : Unused code path elimination
 * Block '<S149>/Data Type Conversion5' : Unused code path elimination
 * Block '<S149>/Data Type Conversion6' : Unused code path elimination
 * Block '<S149>/Data Type Conversion7' : Unused code path elimination
 * Block '<S150>/Bus Creator' : Unused code path elimination
 * Block '<S150>/CAN Unpack6' : Unused code path elimination
 * Block '<S150>/Constant1' : Unused code path elimination
 * Block '<S150>/Constant4' : Unused code path elimination
 * Block '<S150>/Constant5' : Unused code path elimination
 * Block '<S150>/Data Type Conversion' : Unused code path elimination
 * Block '<S150>/Data Type Conversion1' : Unused code path elimination
 * Block '<S150>/Data Type Conversion14' : Unused code path elimination
 * Block '<S150>/Data Type Conversion15' : Unused code path elimination
 * Block '<S150>/Data Type Conversion17' : Unused code path elimination
 * Block '<S150>/Data Type Conversion18' : Unused code path elimination
 * Block '<S150>/Data Type Conversion19' : Unused code path elimination
 * Block '<S150>/Data Type Conversion2' : Unused code path elimination
 * Block '<S150>/Data Type Conversion3' : Unused code path elimination
 * Block '<S150>/Data Type Conversion4' : Unused code path elimination
 * Block '<S150>/Data Type Conversion5' : Unused code path elimination
 * Block '<S150>/Data Type Conversion6' : Unused code path elimination
 * Block '<S151>/Bus Creator' : Unused code path elimination
 * Block '<S151>/CAN Unpack6' : Unused code path elimination
 * Block '<S151>/Constant1' : Unused code path elimination
 * Block '<S151>/Constant4' : Unused code path elimination
 * Block '<S151>/Constant5' : Unused code path elimination
 * Block '<S151>/Data Type Conversion' : Unused code path elimination
 * Block '<S151>/Data Type Conversion1' : Unused code path elimination
 * Block '<S151>/Data Type Conversion14' : Unused code path elimination
 * Block '<S151>/Data Type Conversion15' : Unused code path elimination
 * Block '<S151>/Data Type Conversion17' : Unused code path elimination
 * Block '<S151>/Data Type Conversion18' : Unused code path elimination
 * Block '<S151>/Data Type Conversion19' : Unused code path elimination
 * Block '<S151>/Data Type Conversion2' : Unused code path elimination
 * Block '<S151>/Data Type Conversion3' : Unused code path elimination
 * Block '<S151>/Data Type Conversion4' : Unused code path elimination
 * Block '<S151>/Data Type Conversion5' : Unused code path elimination
 * Block '<S152>/Bus Creator' : Unused code path elimination
 * Block '<S152>/CAN Unpack6' : Unused code path elimination
 * Block '<S152>/Constant1' : Unused code path elimination
 * Block '<S152>/Constant4' : Unused code path elimination
 * Block '<S152>/Constant5' : Unused code path elimination
 * Block '<S152>/Data Type Conversion' : Unused code path elimination
 * Block '<S152>/Data Type Conversion1' : Unused code path elimination
 * Block '<S152>/Data Type Conversion14' : Unused code path elimination
 * Block '<S152>/Data Type Conversion15' : Unused code path elimination
 * Block '<S152>/Data Type Conversion17' : Unused code path elimination
 * Block '<S152>/Data Type Conversion18' : Unused code path elimination
 * Block '<S152>/Data Type Conversion19' : Unused code path elimination
 * Block '<S152>/Data Type Conversion2' : Unused code path elimination
 * Block '<S152>/Data Type Conversion3' : Unused code path elimination
 * Block '<S152>/Data Type Conversion4' : Unused code path elimination
 * Block '<S152>/Data Type Conversion5' : Unused code path elimination
 * Block '<S152>/Data Type Conversion6' : Unused code path elimination
 * Block '<S152>/Data Type Conversion7' : Unused code path elimination
 * Block '<S152>/Data Type Conversion8' : Unused code path elimination
 * Block '<S152>/Data Type Conversion9' : Unused code path elimination
 * Block '<S5>/Data Type Conversion' : Unused code path elimination
 * Block '<S5>/Data Type Conversion1' : Unused code path elimination
 * Block '<S5>/Data Type Conversion10' : Unused code path elimination
 * Block '<S5>/Data Type Conversion11' : Unused code path elimination
 * Block '<S5>/Data Type Conversion12' : Unused code path elimination
 * Block '<S5>/Data Type Conversion13' : Unused code path elimination
 * Block '<S5>/Data Type Conversion14' : Unused code path elimination
 * Block '<S5>/Data Type Conversion15' : Unused code path elimination
 * Block '<S5>/Data Type Conversion16' : Unused code path elimination
 * Block '<S5>/Data Type Conversion17' : Unused code path elimination
 * Block '<S5>/Data Type Conversion18' : Unused code path elimination
 * Block '<S5>/Data Type Conversion19' : Unused code path elimination
 * Block '<S5>/Data Type Conversion2' : Unused code path elimination
 * Block '<S5>/Data Type Conversion3' : Unused code path elimination
 * Block '<S5>/Data Type Conversion4' : Unused code path elimination
 * Block '<S5>/Data Type Conversion5' : Unused code path elimination
 * Block '<S5>/Data Type Conversion6' : Unused code path elimination
 * Block '<S5>/Data Type Conversion7' : Unused code path elimination
 * Block '<S5>/Data Type Conversion8' : Unused code path elimination
 * Block '<S5>/Data Type Conversion9' : Unused code path elimination
 * Block '<S5>/Saturation' : Unused code path elimination
 * Block '<S42>/1-D Lookup Table' : Unused code path elimination
 * Block '<S42>/1-D Lookup Table1' : Unused code path elimination
 * Block '<S42>/Abs' : Unused code path elimination
 * Block '<S182>/Compare' : Unused code path elimination
 * Block '<S182>/Constant' : Unused code path elimination
 * Block '<S42>/Constant1' : Unused code path elimination
 * Block '<S42>/Constant2' : Unused code path elimination
 * Block '<S42>/Data Type Conversion' : Unused code path elimination
 * Block '<S42>/Data Type Conversion1' : Unused code path elimination
 * Block '<S42>/Product' : Unused code path elimination
 * Block '<S42>/Saturation' : Unused code path elimination
 * Block '<S42>/Saturation1' : Unused code path elimination
 * Block '<S42>/Subtract' : Unused code path elimination
 * Block '<S42>/Subtract1' : Unused code path elimination
 * Block '<S42>/Switch' : Unused code path elimination
 * Block '<S213>/Data Type Conversion3' : Unused code path elimination
 * Block '<S213>/Data Type Conversion4' : Unused code path elimination
 * Block '<S214>/Data Type Conversion3' : Unused code path elimination
 * Block '<S214>/Data Type Conversion4' : Unused code path elimination
 * Block '<S218>/Data Type Conversion' : Unused code path elimination
 * Block '<S218>/Data Type Conversion1' : Unused code path elimination
 * Block '<S6>/Rate Transition' : Unused code path elimination
 * Block '<S6>/Rate Transition1' : Unused code path elimination
 * Block '<S6>/Rate Transition10' : Unused code path elimination
 * Block '<S6>/Rate Transition11' : Unused code path elimination
 * Block '<S6>/Rate Transition12' : Unused code path elimination
 * Block '<S6>/Rate Transition13' : Unused code path elimination
 * Block '<S6>/Rate Transition2' : Unused code path elimination
 * Block '<S6>/Rate Transition3' : Unused code path elimination
 * Block '<S6>/Rate Transition4' : Unused code path elimination
 * Block '<S6>/Rate Transition6' : Unused code path elimination
 * Block '<S6>/Rate Transition7' : Unused code path elimination
 * Block '<S6>/Rate Transition8' : Unused code path elimination
 * Block '<S6>/Rate Transition9' : Unused code path elimination
 * Block '<S12>/Manual Switch' : Eliminated due to constant selection input
 * Block '<S219>/Gain' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'ZT_VehCtrl_18B'
 * '<S1>'   : 'ZT_VehCtrl_18B/Init'
 * '<S2>'   : 'ZT_VehCtrl_18B/Initialization & SPI timer1'
 * '<S3>'   : 'ZT_VehCtrl_18B/Power Managment'
 * '<S4>'   : 'ZT_VehCtrl_18B/SPI_EEPROM'
 * '<S5>'   : 'ZT_VehCtrl_18B/SigIn'
 * '<S6>'   : 'ZT_VehCtrl_18B/SigOut'
 * '<S7>'   : 'ZT_VehCtrl_18B/VehCtrl'
 * '<S8>'   : 'ZT_VehCtrl_18B/Init/CAN_init'
 * '<S9>'   : 'ZT_VehCtrl_18B/Init/Init'
 * '<S10>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS1 LS'
 * '<S11>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS2 CANB'
 * '<S12>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS3 LS'
 * '<S13>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS5 LS'
 * '<S14>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/Chart'
 * '<S15>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/Chart1'
 * '<S16>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/Chart2'
 * '<S17>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/Compare To Constant'
 * '<S18>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/Compare To Constant1'
 * '<S19>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS1 LS/Chart'
 * '<S20>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS1 LS/Subsystem'
 * '<S21>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS1 LS/Subsystem/SPI_en'
 * '<S22>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS1 LS/Subsystem/clear '
 * '<S23>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS1 LS/Subsystem/confi_enbit'
 * '<S24>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS3 LS/Chart'
 * '<S25>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS3 LS/Subsystem'
 * '<S26>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS3 LS/Subsystem/A◊È≈‰÷√'
 * '<S27>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS3 LS/Subsystem/B◊È≈‰÷√'
 * '<S28>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS5 LS/Chart'
 * '<S29>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS5 LS/Subsystem'
 * '<S30>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS5 LS/Subsystem/SPI_en'
 * '<S31>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS5 LS/Subsystem/clear '
 * '<S32>'  : 'ZT_VehCtrl_18B/Initialization & SPI timer1/CS5 LS/Subsystem/confi_enbit'
 * '<S33>'  : 'ZT_VehCtrl_18B/SPI_EEPROM/SPI_read'
 * '<S34>'  : 'ZT_VehCtrl_18B/SPI_EEPROM/SPI_write'
 * '<S35>'  : 'ZT_VehCtrl_18B/SPI_EEPROM/SPI_write/SPI_enable'
 * '<S36>'  : 'ZT_VehCtrl_18B/SPI_EEPROM/SPI_write/SPI_write'
 * '<S37>'  : 'ZT_VehCtrl_18B/SigIn/AI'
 * '<S38>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 '
 * '<S39>'  : 'ZT_VehCtrl_18B/SigIn/CAN1'
 * '<S40>'  : 'ZT_VehCtrl_18B/SigIn/DI'
 * '<S41>'  : 'ZT_VehCtrl_18B/SigIn/PWM'
 * '<S42>'  : 'ZT_VehCtrl_18B/SigIn/Subsystem'
 * '<S43>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 / BMS Power Control'
 * '<S44>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Battery Temperature'
 * '<S45>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell HeatingTemperature'
 * '<S46>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Pole Temperature'
 * '<S47>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Voltage Infor'
 * '<S48>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuCap Infor'
 * '<S49>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuTimeInfor1'
 * '<S50>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuTimeInfor2'
 * '<S51>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS HeatInfor'
 * '<S52>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Power Infor'
 * '<S53>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS StartDia_Infor1'
 * '<S54>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS StartDia_Infor2'
 * '<S55>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Cell ExtremumIndex Infor'
 * '<S56>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Cell Voltage Infor'
 * '<S57>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_HeatingTemperature'
 * '<S58>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_PoleTemperature'
 * '<S59>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Temperature of Battery'
 * '<S60>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS _SystemTime '
 * '<S61>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information1'
 * '<S62>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information2 '
 * '<S63>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information3'
 * '<S64>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMSWarning_Status'
 * '<S65>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Information1'
 * '<S66>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Information2'
 * '<S67>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status1'
 * '<S68>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status2'
 * '<S69>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status3'
 * '<S70>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU1'
 * '<S71>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU2'
 * '<S72>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU3'
 * '<S73>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /OBC_Charger Status'
 * '<S74>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /TMS2VCU'
 * '<S75>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 / BMS Power Control/UNPACK'
 * '<S76>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Battery Temperature/UNPACK'
 * '<S77>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell HeatingTemperature/UNPACK'
 * '<S78>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Pole Temperature/UNPACK'
 * '<S79>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Voltage Infor/UNPACK'
 * '<S80>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuCap Infor/UNPACK'
 * '<S81>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuTimeInfor1/UNPACK'
 * '<S82>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuTimeInfor2/UNPACK'
 * '<S83>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS HeatInfor/UNPACK'
 * '<S84>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Power Infor/UNPACK'
 * '<S85>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS StartDia_Infor1/UNPACK'
 * '<S86>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS StartDia_Infor2/UNPACK'
 * '<S87>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Cell ExtremumIndex Infor/UNPACK'
 * '<S88>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Cell Voltage Infor/UNPACK'
 * '<S89>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_HeatingTemperature/UNPACK'
 * '<S90>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_PoleTemperature/UNPACK'
 * '<S91>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Temperature of Battery/UNPACK'
 * '<S92>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS _SystemTime /UNPACK'
 * '<S93>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information1/UNPACK'
 * '<S94>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information2 /UNPACK'
 * '<S95>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information3/UNPACK'
 * '<S96>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMSWarning_Status/UNPACK'
 * '<S97>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Information1/UNPACK'
 * '<S98>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Information2/UNPACK'
 * '<S99>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status1/UNPACK'
 * '<S100>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status2/UNPACK'
 * '<S101>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status3/UNPACK'
 * '<S102>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU1/UNPACK'
 * '<S103>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU2/UNPACK'
 * '<S104>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU3/UNPACK'
 * '<S105>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /OBC_Charger Status/UNPACK'
 * '<S106>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /TMS2VCU/UNPACK'
 * '<S107>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ACU1'
 * '<S108>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ACU2'
 * '<S109>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ACU3'
 * '<S110>' : 'ZT_VehCtrl_18B/SigIn/CAN1/DCDC1_1'
 * '<S111>' : 'ZT_VehCtrl_18B/SigIn/CAN1/DCDC1_2'
 * '<S112>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC1_LV'
 * '<S113>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC3_Temp'
 * '<S114>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC4_RlySt'
 * '<S115>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC7_HV1'
 * '<S116>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ISG MCU STATUS 1'
 * '<S117>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ISG MCU STATUS 2'
 * '<S118>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ISG MCU STATUS 3'
 * '<S119>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU1Msg1'
 * '<S120>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU1Msg2'
 * '<S121>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU1Msg3'
 * '<S122>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU2Msg1'
 * '<S123>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU2Msg2'
 * '<S124>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU2Msg3'
 * '<S125>' : 'ZT_VehCtrl_18B/SigIn/CAN1/PDU_RelaySts'
 * '<S126>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TM MCU STATUS 1'
 * '<S127>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TM MCU STATUS 2'
 * '<S128>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TM MCU STATUS 3'
 * '<S129>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TWV '
 * '<S130>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ACU1/UNPACK'
 * '<S131>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ACU2/UNPACK'
 * '<S132>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ACU3/UNPACK'
 * '<S133>' : 'ZT_VehCtrl_18B/SigIn/CAN1/DCDC1_1/UNPACK'
 * '<S134>' : 'ZT_VehCtrl_18B/SigIn/CAN1/DCDC1_2/UNPACK'
 * '<S135>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC1_LV/UNPACK'
 * '<S136>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC3_Temp/UNPACK'
 * '<S137>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC4_RlySt/UNPACK'
 * '<S138>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC7_HV1/UNPACK'
 * '<S139>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ISG MCU STATUS 1/UNPACK'
 * '<S140>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ISG MCU STATUS 2/UNPACK'
 * '<S141>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ISG MCU STATUS 3/UNPACK'
 * '<S142>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU1Msg1/UNPACK'
 * '<S143>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU1Msg2/UNPACK'
 * '<S144>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU1Msg3/UNPACK'
 * '<S145>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU2Msg1/UNPACK'
 * '<S146>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU2Msg2/UNPACK'
 * '<S147>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU2Msg3/UNPACK'
 * '<S148>' : 'ZT_VehCtrl_18B/SigIn/CAN1/PDU_RelaySts/UNPACK'
 * '<S149>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TM MCU STATUS 1/UNPACK'
 * '<S150>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TM MCU STATUS 2/UNPACK'
 * '<S151>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TM MCU STATUS 3/UNPACK'
 * '<S152>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TWV /UNPACK'
 * '<S153>' : 'ZT_VehCtrl_18B/SigIn/DI/DI_31_32_33_34'
 * '<S154>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS1'
 * '<S155>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS2'
 * '<S156>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS3'
 * '<S157>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS4'
 * '<S158>' : 'ZT_VehCtrl_18B/SigIn/PWM/Subsystem'
 * '<S159>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS1/Subsystem'
 * '<S160>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS1/Subsystem_capture'
 * '<S161>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS1/Subsystem_capture/Counter Limited'
 * '<S162>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS1/Subsystem_capture/Counter Limited/Increment Real World'
 * '<S163>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS1/Subsystem_capture/Counter Limited/Wrap To Zero'
 * '<S164>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS2/Subsystem'
 * '<S165>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS2/Subsystem_capture'
 * '<S166>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS2/Subsystem_capture/Counter Limited'
 * '<S167>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS2/Subsystem_capture/Counter Limited/Increment Real World'
 * '<S168>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS2/Subsystem_capture/Counter Limited/Wrap To Zero'
 * '<S169>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS3/Subsystem'
 * '<S170>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS3/Subsystem_capture'
 * '<S171>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS3/Subsystem_capture/Counter Limited'
 * '<S172>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS3/Subsystem_capture/Counter Limited/Increment Real World'
 * '<S173>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS3/Subsystem_capture/Counter Limited/Wrap To Zero'
 * '<S174>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS4/Subsystem'
 * '<S175>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS4/Subsystem_capture'
 * '<S176>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS4/Subsystem_capture/Counter Limited'
 * '<S177>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS4/Subsystem_capture/Counter Limited/Increment Real World'
 * '<S178>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS4/Subsystem_capture/Counter Limited/Wrap To Zero'
 * '<S179>' : 'ZT_VehCtrl_18B/SigIn/PWM/Subsystem/Frequency_DutyCycle_Computation'
 * '<S180>' : 'ZT_VehCtrl_18B/SigIn/PWM/Subsystem/eTimer Configuration and Signal Measurements'
 * '<S181>' : 'ZT_VehCtrl_18B/SigIn/PWM/Subsystem/eTimer Configuration and Signal Measurements/Subsystem_capture'
 * '<S182>' : 'ZT_VehCtrl_18B/SigIn/Subsystem/Compare To Constant'
 * '<S183>' : 'ZT_VehCtrl_18B/SigOut/ACU'
 * '<S184>' : 'ZT_VehCtrl_18B/SigOut/BMS'
 * '<S185>' : 'ZT_VehCtrl_18B/SigOut/BRS'
 * '<S186>' : 'ZT_VehCtrl_18B/SigOut/DCDC'
 * '<S187>' : 'ZT_VehCtrl_18B/SigOut/GPIO '
 * '<S188>' : 'ZT_VehCtrl_18B/SigOut/HVC'
 * '<S189>' : 'ZT_VehCtrl_18B/SigOut/ICU1 '
 * '<S190>' : 'ZT_VehCtrl_18B/SigOut/ICU2'
 * '<S191>' : 'ZT_VehCtrl_18B/SigOut/ISG'
 * '<S192>' : 'ZT_VehCtrl_18B/SigOut/MCU'
 * '<S193>' : 'ZT_VehCtrl_18B/SigOut/PDU'
 * '<S194>' : 'ZT_VehCtrl_18B/SigOut/TM'
 * '<S195>' : 'ZT_VehCtrl_18B/SigOut/TMS'
 * '<S196>' : 'ZT_VehCtrl_18B/SigOut/TWV'
 * '<S197>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC'
 * '<S198>' : 'ZT_VehCtrl_18B/SigOut/GPIO /HS'
 * '<S199>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT'
 * '<S200>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4'
 * '<S201>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19'
 * '<S202>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem'
 * '<S203>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem1'
 * '<S204>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem2'
 * '<S205>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem3'
 * '<S206>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem4'
 * '<S207>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem5'
 * '<S208>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT/FreqCMD'
 * '<S209>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT/PWM Configuration and Frequency Update'
 * '<S210>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT/PWM Configuration and Frequency Update1'
 * '<S211>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT/PWM Configuration and Frequency Update4'
 * '<S212>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/Compare To Constant'
 * '<S213>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL'
 * '<S214>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL1'
 * '<S215>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL/If Action Subsystem1'
 * '<S216>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL1/If Action Subsystem1'
 * '<S217>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19/Compare To Constant'
 * '<S218>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19/Subsystem'
 * '<S219>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19/Subsystem/øÿ÷∆'
 * '<S220>' : 'ZT_VehCtrl_18B/VehCtrl/EnergyManage1'
 * '<S221>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc'
 * '<S222>' : 'ZT_VehCtrl_18B/VehCtrl/LedControl'
 * '<S223>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl'
 * '<S224>' : 'ZT_VehCtrl_18B/VehCtrl/SpdCalc'
 * '<S225>' : 'ZT_VehCtrl_18B/VehCtrl/Subsystem'
 * '<S226>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl'
 * '<S227>' : 'ZT_VehCtrl_18B/VehCtrl/EnergyManage1/Chart'
 * '<S228>' : 'ZT_VehCtrl_18B/VehCtrl/EnergyManage1/Chart1'
 * '<S229>' : 'ZT_VehCtrl_18B/VehCtrl/EnergyManage1/Subsystem'
 * '<S230>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant1'
 * '<S231>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant10'
 * '<S232>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant11'
 * '<S233>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant12'
 * '<S234>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant13'
 * '<S235>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant14'
 * '<S236>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant15'
 * '<S237>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant16'
 * '<S238>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant17'
 * '<S239>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant18'
 * '<S240>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant19'
 * '<S241>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant2'
 * '<S242>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant20'
 * '<S243>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant21'
 * '<S244>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant22'
 * '<S245>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant23'
 * '<S246>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant24'
 * '<S247>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant25'
 * '<S248>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant26'
 * '<S249>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant27'
 * '<S250>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant28'
 * '<S251>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant29'
 * '<S252>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant3'
 * '<S253>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant30'
 * '<S254>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant31'
 * '<S255>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant32'
 * '<S256>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant33'
 * '<S257>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant34'
 * '<S258>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant4'
 * '<S259>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant5'
 * '<S260>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant6'
 * '<S261>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant7'
 * '<S262>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant8'
 * '<S263>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Compare To Constant9'
 * '<S264>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Subsystem5'
 * '<S265>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Subsystem5/PacketLoss_RMT'
 * '<S266>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Subsystem5/PacketLoss_RMT1'
 * '<S267>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Subsystem5/PacketLoss_RMT2'
 * '<S268>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Subsystem5/TimeOutLevel_RMT'
 * '<S269>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Subsystem5/TimeOutLevel_RMT1'
 * '<S270>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc/Subsystem5/TimeOutLevel_RMT2'
 * '<S271>' : 'ZT_VehCtrl_18B/VehCtrl/LedControl/Chart'
 * '<S272>' : 'ZT_VehCtrl_18B/VehCtrl/LedControl/Chart1'
 * '<S273>' : 'ZT_VehCtrl_18B/VehCtrl/LedControl/Compare To Constant'
 * '<S274>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl'
 * '<S275>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/PtoControl'
 * '<S276>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/SteerControl'
 * '<S277>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl'
 * '<S278>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Brake'
 * '<S279>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/DriveModeTrans'
 * '<S280>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor'
 * '<S281>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/Subsystem'
 * '<S282>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/Subsystem1'
 * '<S283>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/Subsystem2'
 * '<S284>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/Subsystem3'
 * '<S285>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/VehicleControl'
 * '<S286>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/WheelControl'
 * '<S287>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/Subsystem/Compare To Constant'
 * '<S288>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/Subsystem1/Compare To Constant'
 * '<S289>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/Subsystem2/Compare To Constant'
 * '<S290>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/Subsystem3/Compare To Constant'
 * '<S291>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/VehicleControl/VehTrqBackward'
 * '<S292>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/VehicleControl/VehTrqForward'
 * '<S293>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/DriveControl/Motor/WheelControl/Chart'
 * '<S294>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/PtoControl/Subsystem'
 * '<S295>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/PtoControl/Subsystem1'
 * '<S296>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/SteerControl/Chart'
 * '<S297>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/BrakeSys'
 * '<S298>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/EpbSys'
 * '<S299>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/PumpSys'
 * '<S300>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys'
 * '<S301>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SuspesionSys'
 * '<S302>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/WidthSys'
 * '<S303>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/BrakeSys/Chart'
 * '<S304>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/PumpSys/Compare To Zero'
 * '<S305>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Chart'
 * '<S306>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Chart1'
 * '<S307>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Controller'
 * '<S308>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/LEFT'
 * '<S309>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/NATURAL '
 * '<S310>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/RIGHT'
 * '<S311>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Subsystem'
 * '<S312>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Subsystem1'
 * '<S313>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/LEFT/Compare To Constant'
 * '<S314>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/LEFT/Compare To Constant1'
 * '<S315>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/RIGHT/Compare To Constant'
 * '<S316>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/RIGHT/Compare To Constant1'
 * '<S317>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Subsystem/LEFT1'
 * '<S318>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Subsystem/NATURAL 1'
 * '<S319>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Subsystem/RIGHT1'
 * '<S320>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Subsystem/LEFT1/Compare To Constant'
 * '<S321>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Subsystem/LEFT1/Compare To Constant1'
 * '<S322>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Subsystem/RIGHT1/Compare To Constant'
 * '<S323>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/ValveControl/SteerSys/Subsystem/RIGHT1/Compare To Constant1'
 * '<S324>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/Lv_to_Dut1'
 * '<S325>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/Lv_to_Dut2'
 * '<S326>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/Lv_to_Dut3'
 * '<S327>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/ThermFR_RRvRead1'
 * '<S328>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/ThermFR_RRvRead2'
 * '<S329>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/ThermLvRead3'
 * '<S330>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/ThermFR_RRvRead1/Cnt_To_s'
 * '<S331>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/ThermFR_RRvRead1/Way1_Cool_Level'
 * '<S332>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/ThermFR_RRvRead2/Cnt_To_s'
 * '<S333>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/ThermFR_RRvRead2/Way1_Cool_Level'
 * '<S334>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/ThermLvRead3/Cnt_To_s'
 * '<S335>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl/ThermLvRead3/Way1_Cool_Level'
 */
#endif                                 /* RTW_HEADER_ZT_VehCtrl_18B_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
