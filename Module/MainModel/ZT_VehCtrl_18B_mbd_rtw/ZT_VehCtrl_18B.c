/* 
 * File: ZT_VehCtrl_18B.c
 *  
 * Code generated for Simulink model 'ZT_VehCtrl_18B'.
 * 
 * Model version                   : 1.735
 * Simulink Coder version          : 9.0 (R2018b) 24-May-2018
 * MBDT for MPC57xx Series Version : 3.2.0 (R2016a-R2020a) 14-Apr-2020
 * C/C++ source code generated on  : Fri Sep 18 13:57:17 2026
 * 
 * Target selection: mbd_mpc574x.tlc
 * Embedded hardware selection: Motorola PowerPC
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */


    

          #include "ZT_VehCtrl_18B.h"

        #include "ZT_VehCtrl_18B_private.h"




  


  


  


    
  

/* Named constants for Chart: '<S2>/Chart' */
#define ZT_VehCtrl_18B_IN_Idle ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_Initialize ((uint8_T)2U)
#define ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define ZT_VehCtrl_18B_IN_Normal ((uint8_T)3U)

/* Named constants for Chart: '<S2>/Chart1' */
#define ZT_VehCtrl_18B_IN_CS1 ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_CS5 ((uint8_T)2U)
#define ZT_VehCtrl_18B_IN_Done ((uint8_T)3U)
#define ZT_VehCtrl_18B_IN_IDLE ((uint8_T)4U)

/* Named constants for Chart: '<S2>/Chart2' */
#define ZT_VehCtrl_18B_IN_CS2 ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_CS3 ((uint8_T)2U)

/* Named constants for Chart: '<S10>/Chart' */
#define ZT_VehCtrl_18B_IN_clear ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_config ((uint8_T)2U)
#define ZT_VehCtrl_18B_IN_en ((uint8_T)3U)

/* Named constants for Chart: '<S12>/Chart' */
#define ZT_VehCtrl_18B_IN_ConfigA ((uint8_T)1U)
#define ZT_VehCtrl_18B_IN_en_g ((uint8_T)2U)




  


  


  


  


  


  


                  dspi_state_t spiMasterState3;
                void spi_master_transfer_callback3(void *driverState, spi_event_t event, void *userData) __attribute__((weak));
                dspi_state_t spiMasterState0;
                void spi_master_transfer_callback0(void *driverState, spi_event_t event, void *userData) __attribute__((weak));
  
  
  
    
    /* Exported block states */
        	      
          real32_T VCU_FanSpeedLvl_num;  /* '<Root>/Data Store Memory138' */
      
      
	      
          real32_T VCU_DCDC1_En;  /* '<Root>/Data Store Memory140' */
      
      
	      
          real32_T DcdcCmd;  /* '<Root>/Data Store Memory145' */
      
      
	      
          real32_T DcacEpsCmd;  /* '<Root>/Data Store Memory146' */
      
      
	      
          real32_T DcacEpsMode;  /* '<Root>/Data Store Memory147' */
      
      
	      
          real32_T DcacAcCmd;  /* '<Root>/Data Store Memory148' */
      
      
	      
          real32_T VCU_ShrRlyCtl;  /* '<Root>/Data Store Memory149' */
      
      
	      
          real32_T VCU_HVACRlyCtl;  /* '<Root>/Data Store Memory150' */
      
      
	      
          real32_T VCU_PTCRlyCtl;  /* '<Root>/Data Store Memory151' */
      
      
	      
          real32_T VCU_HghVtgCnt;  /* '<Root>/Data Store Memory152' */
      
      
	      
          real32_T VCU_DCCpstRlyCtl;  /* '<Root>/Data Store Memory153' */
      
      
	      
          real32_T TWV_ON_Ctr;  /* '<Root>/Data Store Memory154' */
      
      
	      
          uint8_T Cnt_BMS6;  /* '<Root>/Data Store Memory1' */
      
      
	      
          uint8_T Cnt_TM_OUT;  /* '<Root>/Data Store Memory104' */
      
      
	      
          uint8_T Cnt_HVC4;  /* '<Root>/Data Store Memory12' */
      
      
	      
          uint8_T VCU_Mode;  /* '<Root>/Data Store Memory125' */
      
      
	      
          uint8_T Cnt_HVC7;  /* '<Root>/Data Store Memory13' */
      
      
	      
          uint8_T Cnt_ISG_OUT;  /* '<Root>/Data Store Memory133' */
      
      
	      
          uint8_T Cnt_TWV_OUT;  /* '<Root>/Data Store Memory134' */
      
      
	      
          uint8_T EnergyFlag;  /* '<Root>/Data Store Memory135' */
      
      
	      
          uint8_T Cnt_MCU2_OUT;  /* '<Root>/Data Store Memory136' */
      
      
	      
          uint8_T Cnt_DCDC1_1;  /* '<Root>/Data Store Memory14' */
      
      
	      
          uint8_T Cnt_DCDC1_2;  /* '<Root>/Data Store Memory15' */
      
      
	      
          uint8_T Cnt_MCU1_1;  /* '<Root>/Data Store Memory16' */
      
      
	      
          uint8_T Cnt_MCU1_2;  /* '<Root>/Data Store Memory17' */
      
      
	      
          uint8_T Cnt_BMS1;  /* '<Root>/Data Store Memory177' */
      
      
	      
          uint8_T Cnt_BMS2;  /* '<Root>/Data Store Memory178' */
      
      
	      
          uint8_T Cnt_BMS3;  /* '<Root>/Data Store Memory179' */
      
      
	      
          uint8_T Cnt_MCU1_3;  /* '<Root>/Data Store Memory18' */
      
      
	      
          uint8_T Cnt_BMS4;  /* '<Root>/Data Store Memory180' */
      
      
	      
          uint8_T Cnt_BMS5;  /* '<Root>/Data Store Memory181' */
      
      
	      
          uint8_T Cnt_MCU2_1;  /* '<Root>/Data Store Memory19' */
      
      
	      
          uint8_T Cnt_OBC;  /* '<Root>/Data Store Memory2' */
      
      
	      
          uint8_T Cnt_MCU2_2;  /* '<Root>/Data Store Memory20' */
      
      
	      
          uint8_T Cnt_MCU2_3;  /* '<Root>/Data Store Memory21' */
      
      
	      
          uint8_T Cnt_ACU1;  /* '<Root>/Data Store Memory22' */
      
      
	      
          uint8_T Cnt_ACU2;  /* '<Root>/Data Store Memory23' */
      
      
	      
          uint8_T Cnt_ACU3;  /* '<Root>/Data Store Memory24' */
      
      
	      
          uint8_T Cnt_PDU;  /* '<Root>/Data Store Memory25' */
      
      
	      
          uint8_T Cnt_TMS;  /* '<Root>/Data Store Memory3' */
      
      
	      
          uint8_T Cnt_TWV;  /* '<Root>/Data Store Memory33' */
      
      
	      
          uint8_T Cnt_TW1;  /* '<Root>/Data Store Memory46' */
      
      
	      
          uint8_T Cnt_TW2;  /* '<Root>/Data Store Memory47' */
      
      
	      
          uint8_T Cnt_TW3;  /* '<Root>/Data Store Memory48' */
      
      
	      
          uint8_T Cnt_ISG1;  /* '<Root>/Data Store Memory49' */
      
      
	      
          uint8_T Cnt_BRS1;  /* '<Root>/Data Store Memory5' */
      
      
	      
          uint8_T Cnt_ISG2;  /* '<Root>/Data Store Memory50' */
      
      
	      
          uint8_T Cnt_ISG3;  /* '<Root>/Data Store Memory56' */
      
      
	      
          uint8_T Cnt_BMS_OUT;  /* '<Root>/Data Store Memory57' */
      
      
	      
          uint8_T Cnt_TMS_OUT;  /* '<Root>/Data Store Memory58' */
      
      
	      
          uint8_T Cnt_ICU_OUT1;  /* '<Root>/Data Store Memory59' */
      
      
	      
          uint8_T Cnt_BRS2;  /* '<Root>/Data Store Memory6' */
      
      
	      
          uint8_T Cnt_ICU_OUT2;  /* '<Root>/Data Store Memory60' */
      
      
	      
          uint8_T Cnt_BRS_OUT;  /* '<Root>/Data Store Memory61' */
      
      
	      
          uint8_T Cnt_DCDC_OUT;  /* '<Root>/Data Store Memory62' */
      
      
	      
          uint8_T Cnt_HVC_OUT;  /* '<Root>/Data Store Memory63' */
      
      
	      
          uint8_T Cnt_MCU1_OUT;  /* '<Root>/Data Store Memory64' */
      
      
	      
          uint8_T Cnt_ACU_OUT;  /* '<Root>/Data Store Memory65' */
      
      
	      
          uint8_T Cnt_PDU_OUT;  /* '<Root>/Data Store Memory66' */
      
      
	      
          uint8_T Cnt_BRS3;  /* '<Root>/Data Store Memory7' */
      
      
	      
          uint8_T ResetFlg;  /* '<Root>/Data Store Memory72' */
      
      
	      
          uint8_T Cnt_HVC1;  /* '<Root>/Data Store Memory8' */
      
      
	      
          uint8_T Cnt_HVC3;  /* '<Root>/Data Store Memory9' */
      
      
	      
          uint8_T Init_flg_SPI;  /* '<Root>/Data Store Memory98' */
      
      
	      
          boolean_T VCU_PowerOnReq;  /* '<Root>/Data Store Memory' */
      
      
	      
          boolean_T LS007;  /* '<Root>/Data Store Memory100' */
      
      
	      
          boolean_T LS012;  /* '<Root>/Data Store Memory101' */
      
      
	      
          boolean_T LS013;  /* '<Root>/Data Store Memory103' */
      
      
	      
          boolean_T LS018;  /* '<Root>/Data Store Memory11' */
      
      
	      
          boolean_T LS019;  /* '<Root>/Data Store Memory116' */
      
      
	      
          boolean_T VCU_UrgencyCutOffPowerReq;  /* '<Root>/Data Store Memory137' */
      
      
	      
          boolean_T OnOffCmd;  /* '<Root>/Data Store Memory139' */
      
      
	      
          boolean_T EDrv1_PowOnCmd;  /* '<Root>/Data Store Memory141' */
      
      
	      
          boolean_T EDrv2_PowOnCmd;  /* '<Root>/Data Store Memory142' */
      
      
	      
          boolean_T PaxAC_PowOnCmd;  /* '<Root>/Data Store Memory143' */
      
      
	      
          boolean_T PTC_PowOnCmd;  /* '<Root>/Data Store Memory144' */
      
      
	      
          boolean_T LS003;  /* '<Root>/Data Store Memory34' */
      
      
	      
          boolean_T LS017;  /* '<Root>/Data Store Memory45' */
      
      
	      
          boolean_T LS014;  /* '<Root>/Data Store Memory86' */
      
      
	      
          boolean_T LS015;  /* '<Root>/Data Store Memory87' */
      
      
	      
          boolean_T LS009;  /* '<Root>/Data Store Memory88' */
      
      
	      
          boolean_T LS016;  /* '<Root>/Data Store Memory89' */
      
      
	      
          boolean_T LS004;  /* '<Root>/Data Store Memory91' */
      
      
	      
          boolean_T LS011;  /* '<Root>/Data Store Memory92' */
      
      
	      
          boolean_T LS001;  /* '<Root>/Data Store Memory93' */
      
      
	      
          boolean_T LS002;  /* '<Root>/Data Store Memory95' */
      
      
	      
          boolean_T LS010;  /* '<Root>/Data Store Memory96' */
      
      
	      
          boolean_T LS008;  /* '<Root>/Data Store Memory97' */
      
      
	      
          boolean_T LS006;  /* '<Root>/Data Store Memory99' */
      
      

   
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
                        flexcan_msgbuff_t canCom0_recvBuff36;
                        flexcan_msgbuff_t canCom0_recvBuff37;
                        flexcan_msgbuff_t canCom0_recvBuff38;
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
  
                      
      
      
      
  



                          
      
  



                                /* {S!d2028}SwitchCase: '<S44>/Switch Case' */
/*@>10b45*/if (/*@>10de7*/(int32_T)/*@>111e7*/ZT_VehCtrl_18B_B./*@>1156c*/CAN0_Rx_500_o3/*@>10b44*/ == /*@>10cd2*/201893786) {
    /* {S!d1997}Outputs for IfAction SubSystem: '<S44>/UNPACK' incorporates:
 *  ActionPort: '<S79>/Action Port'
 */
    /* {S!d2026}DataStoreWrite: '<S79>/Data Store Write' incorporates:
 *  Constant: '<S79>/Constant'
 *  DataStoreRead: '<S79>/Data Store Read'
 *  Sum: '<S79>/Add'
 */
    /*@>10c8a*/Cnt_ACU1/*@>11506*/++;
    /* {E!d1997}End of Outputs for SubSystem: '<S44>/UNPACK' */
}
/* {E!d2028}End of SwitchCase: '<S44>/Switch Case' */

/* {S!d2032}SwitchCase: '<S45>/Switch Case' */
/*@>10b4b*/if (/*@>10dd6*/(int32_T)/*@>111ed*/ZT_VehCtrl_18B_B./*@>1156f*/CAN0_Rx_500_o3/*@>10b4a*/ == /*@>10cd5*/201959323) {
    /* {S!d1999}Outputs for IfAction SubSystem: '<S45>/UNPACK' incorporates:
 *  ActionPort: '<S80>/Action Port'
 */
    /* {S!d2030}DataStoreWrite: '<S80>/Data Store Write' incorporates:
 *  Constant: '<S80>/Constant'
 *  DataStoreRead: '<S80>/Data Store Read'
 *  Sum: '<S80>/Add'
 */
    /*@>10c8c*/Cnt_ACU2/*@>11507*/++;
    /* {E!d1999}End of Outputs for SubSystem: '<S45>/UNPACK' */
}
/* {E!d2032}End of SwitchCase: '<S45>/Switch Case' */

/* {S!d2036}SwitchCase: '<S46>/Switch Case' */
/*@>10b51*/if (/*@>10dc5*/(int32_T)/*@>111f3*/ZT_VehCtrl_18B_B./*@>11572*/CAN0_Rx_500_o3/*@>10b50*/ == /*@>10cd8*/202024861) {
    /* {S!d2001}Outputs for IfAction SubSystem: '<S46>/UNPACK' incorporates:
 *  ActionPort: '<S81>/Action Port'
 */
    /* {S!d2034}DataStoreWrite: '<S81>/Data Store Write' incorporates:
 *  Constant: '<S81>/Constant'
 *  DataStoreRead: '<S81>/Data Store Read'
 *  Sum: '<S81>/Add'
 */
    /*@>10c8e*/Cnt_ACU3/*@>11508*/++;
    /* {E!d2001}End of Outputs for SubSystem: '<S46>/UNPACK' */
}
/* {E!d2036}End of SwitchCase: '<S46>/Switch Case' */

/* {S!d2040}SwitchCase: '<S55>/Switch Case' */
/*@>10b57*/if (/*@>10db4*/(int32_T)/*@>111f9*/ZT_VehCtrl_18B_B./*@>11575*/CAN0_Rx_500_o3/*@>10b56*/ == /*@>10cdb*/529) {
    /* {S!d2003}Outputs for IfAction SubSystem: '<S55>/UNPACK' incorporates:
 *  ActionPort: '<S90>/Action Port'
 */
    /* {S!d2038}DataStoreWrite: '<S90>/Data Store Write' incorporates:
 *  Constant: '<S90>/Constant'
 *  DataStoreRead: '<S90>/Data Store Read'
 *  Sum: '<S90>/Add'
 */
    /*@>10c90*/Cnt_BMS4/*@>11509*/++;
    /* {E!d2003}End of Outputs for SubSystem: '<S55>/UNPACK' */
}
/* {E!d2040}End of SwitchCase: '<S55>/Switch Case' */

/* {S!d2044}SwitchCase: '<S62>/Switch Case' */
/*@>10b5d*/if (/*@>10da3*/(int32_T)/*@>111ff*/ZT_VehCtrl_18B_B./*@>11578*/CAN0_Rx_500_o3/*@>10b5c*/ == /*@>10cde*/851) {
    /* {S!d2005}Outputs for IfAction SubSystem: '<S62>/UNPACK' incorporates:
 *  ActionPort: '<S97>/Action Port'
 */
    /* {S!d2042}DataStoreWrite: '<S97>/Data Store Write' incorporates:
 *  Constant: '<S97>/Constant'
 *  DataStoreRead: '<S97>/Data Store Read'
 *  Sum: '<S97>/Add'
 */
    /*@>10c92*/Cnt_BMS5/*@>1150a*/++;
    /* {E!d2005}End of Outputs for SubSystem: '<S62>/UNPACK' */
}
/* {E!d2044}End of SwitchCase: '<S62>/Switch Case' */

/* {S!d2048}SwitchCase: '<S66>/Switch Case' */
/*@>10b63*/if (/*@>10d92*/(int32_T)/*@>11205*/ZT_VehCtrl_18B_B./*@>1157b*/CAN0_Rx_500_o3/*@>10b62*/ == /*@>10ce1*/517) {
    /* {S!d2007}Outputs for IfAction SubSystem: '<S66>/UNPACK' incorporates:
 *  ActionPort: '<S101>/Action Port'
 */
    /* {S!d2046}DataStoreWrite: '<S101>/Data Store Write' incorporates:
 *  Constant: '<S101>/Constant'
 *  DataStoreRead: '<S101>/Data Store Read'
 *  Sum: '<S101>/Add'
 */
    /*@>10c94*/Cnt_BMS6/*@>1150b*/++;
    /* {E!d2007}End of Outputs for SubSystem: '<S66>/UNPACK' */
}
/* {E!d2048}End of SwitchCase: '<S66>/Switch Case' */

/* {S!d2052}SwitchCase: '<S67>/Switch Case' */
/*@>10b69*/if (/*@>10d81*/(int32_T)/*@>1120b*/ZT_VehCtrl_18B_B./*@>1157e*/CAN0_Rx_500_o3/*@>10b68*/ == /*@>10ce4*/501) {
    /* {S!d2009}Outputs for IfAction SubSystem: '<S67>/UNPACK' incorporates:
 *  ActionPort: '<S102>/Action Port'
 */
    /* {S!d2050}DataStoreWrite: '<S102>/Data Store Write' incorporates:
 *  Constant: '<S102>/Constant'
 *  DataStoreRead: '<S102>/Data Store Read'
 *  Sum: '<S102>/Add'
 */
    /*@>10c96*/Cnt_BMS3/*@>1150c*/++;
    /* {E!d2009}End of Outputs for SubSystem: '<S67>/UNPACK' */
}
/* {E!d2052}End of SwitchCase: '<S67>/Switch Case' */

/* {S!d2056}SwitchCase: '<S68>/Switch Case' */
/*@>10b6f*/if (/*@>10d70*/(int32_T)/*@>11211*/ZT_VehCtrl_18B_B./*@>11581*/CAN0_Rx_500_o3/*@>10b6e*/ == /*@>10ce7*/481) {
    /* {S!d2011}Outputs for IfAction SubSystem: '<S68>/UNPACK' incorporates:
 *  ActionPort: '<S103>/Action Port'
 */
    /* {S!d2054}DataStoreWrite: '<S103>/Data Store Write' incorporates:
 *  Constant: '<S103>/Constant'
 *  DataStoreRead: '<S103>/Data Store Read'
 *  Sum: '<S103>/Add'
 */
    /*@>10c98*/Cnt_BMS1/*@>1150d*/++;
    /* {E!d2011}End of Outputs for SubSystem: '<S68>/UNPACK' */
}
/* {E!d2056}End of SwitchCase: '<S68>/Switch Case' */

/* {S!d2060}SwitchCase: '<S69>/Switch Case' */
/*@>10b75*/if (/*@>10d5f*/(int32_T)/*@>11217*/ZT_VehCtrl_18B_B./*@>11584*/CAN0_Rx_500_o3/*@>10b74*/ == /*@>10cea*/484) {
    /* {S!d2013}Outputs for IfAction SubSystem: '<S69>/UNPACK' incorporates:
 *  ActionPort: '<S104>/Action Port'
 */
    /* {S!d2058}DataStoreWrite: '<S104>/Data Store Write' incorporates:
 *  Constant: '<S104>/Constant'
 *  DataStoreRead: '<S104>/Data Store Read'
 *  Sum: '<S104>/Add'
 */
    /*@>10c9a*/Cnt_BMS2/*@>1150e*/++;
    /* {E!d2013}End of Outputs for SubSystem: '<S69>/UNPACK' */
}
/* {E!d2060}End of SwitchCase: '<S69>/Switch Case' */

/* {S!d2064}SwitchCase: '<S73>/Switch Case' */
/*@>10b7b*/if (/*@>10d4e*/(int32_T)/*@>1121d*/ZT_VehCtrl_18B_B./*@>11587*/CAN0_Rx_500_o3/*@>10b7a*/ == /*@>10ced*/419309028) {
    /* {S!d2015}Outputs for IfAction SubSystem: '<S73>/UNPACK' incorporates:
 *  ActionPort: '<S108>/Action Port'
 */
    /* {S!d2062}DataStoreWrite: '<S108>/Data Store Write' incorporates:
 *  Constant: '<S108>/Constant'
 *  DataStoreRead: '<S108>/Data Store Read'
 *  Sum: '<S108>/Add'
 */
    /*@>10c9c*/Cnt_BRS1/*@>1150f*/++;
    /* {E!d2015}End of Outputs for SubSystem: '<S73>/UNPACK' */
}
/* {E!d2064}End of SwitchCase: '<S73>/Switch Case' */

/* {S!d2068}SwitchCase: '<S74>/Switch Case' */
/*@>10b81*/if (/*@>10d3d*/(int32_T)/*@>11223*/ZT_VehCtrl_18B_B./*@>1158a*/CAN0_Rx_500_o3/*@>10b80*/ == /*@>10cf0*/419309284) {
    /* {S!d2017}Outputs for IfAction SubSystem: '<S74>/UNPACK' incorporates:
 *  ActionPort: '<S109>/Action Port'
 */
    /* {S!d2066}DataStoreWrite: '<S109>/Data Store Write' incorporates:
 *  Constant: '<S109>/Constant'
 *  DataStoreRead: '<S109>/Data Store Read'
 *  Sum: '<S109>/Add'
 */
    /*@>10c9e*/Cnt_BRS2/*@>11510*/++;
    /* {E!d2017}End of Outputs for SubSystem: '<S74>/UNPACK' */
}
/* {E!d2068}End of SwitchCase: '<S74>/Switch Case' */

/* {S!d2072}SwitchCase: '<S75>/Switch Case' */
/*@>10b87*/if (/*@>10d2c*/(int32_T)/*@>11229*/ZT_VehCtrl_18B_B./*@>1158d*/CAN0_Rx_500_o3/*@>10b86*/ == /*@>10cf3*/419309540) {
    /* {S!d2019}Outputs for IfAction SubSystem: '<S75>/UNPACK' incorporates:
 *  ActionPort: '<S110>/Action Port'
 */
    /* {S!d2070}DataStoreWrite: '<S110>/Data Store Write' incorporates:
 *  Constant: '<S110>/Constant'
 *  DataStoreRead: '<S110>/Data Store Read'
 *  Sum: '<S110>/Add'
 */
    /*@>10ca0*/Cnt_BRS3/*@>11511*/++;
    /* {E!d2019}End of Outputs for SubSystem: '<S75>/UNPACK' */
}
/* {E!d2072}End of SwitchCase: '<S75>/Switch Case' */

/* {S!d2076}SwitchCase: '<S76>/Switch Case' */
/*@>10b8d*/if (/*@>10d1b*/(int32_T)/*@>1122f*/ZT_VehCtrl_18B_B./*@>11590*/CAN0_Rx_500_o3/*@>10b8c*/ == /*@>10cf6*/544) {
    /* {S!d2021}Outputs for IfAction SubSystem: '<S76>/UNPACK' incorporates:
 *  ActionPort: '<S111>/Action Port'
 */
    /* {S!d2074}DataStoreWrite: '<S111>/Data Store Write' incorporates:
 *  Constant: '<S111>/Constant'
 *  DataStoreRead: '<S111>/Data Store Read'
 *  Sum: '<S111>/Add'
 */
    /*@>10ca2*/Cnt_OBC/*@>11512*/++;
    /* {E!d2021}End of Outputs for SubSystem: '<S76>/UNPACK' */
}
/* {E!d2076}End of SwitchCase: '<S76>/Switch Case' */

/* {S!d2080}SwitchCase: '<S77>/Switch Case' */
/*@>10b93*/if (/*@>10d0a*/(int32_T)/*@>11235*/ZT_VehCtrl_18B_B./*@>11593*/CAN0_Rx_500_o3/*@>10b92*/ == /*@>10cf9*/419427142) {
    /* {S!d2023}Outputs for IfAction SubSystem: '<S77>/UNPACK' incorporates:
 *  ActionPort: '<S112>/Action Port'
 */
    /* {S!d2078}DataStoreWrite: '<S112>/Data Store Write' incorporates:
 *  Constant: '<S112>/Constant'
 *  DataStoreRead: '<S112>/Data Store Read'
 *  Sum: '<S112>/Add'
 */
    /*@>10ca4*/Cnt_TMS/*@>11513*/++;
    /* {E!d2023}End of Outputs for SubSystem: '<S77>/UNPACK' */
}
/* {E!d2080}End of SwitchCase: '<S77>/Switch Case' */





      
  


        
    
      
          }
      
  



                





      

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
                  
      
       
    
  

          /* Output and update for function-call system: '<S5>/CAN1' */
      
              
  
  
      
  
      void ZT_VehCtrl_18B_CAN1(void)
  {
  
                      
      
      
      
  



                          
      
  



                                /* {S!d2124}SwitchCase: '<S113>/Switch Case' */
/*@>11fa3*/if (/*@>12365*/(int32_T)/*@>128c1*/ZT_VehCtrl_18B_B./*@>12d90*/CAN1_Rx_500_o3/*@>11fa2*/ == /*@>121d8*/402706575) {
    /* {S!d2081}Outputs for IfAction SubSystem: '<S113>/UNPACK' incorporates:
 *  ActionPort: '<S133>/Action Port'
 */
    /* {S!d2122}DataStoreWrite: '<S133>/Data Store Write' incorporates:
 *  Constant: '<S133>/Constant'
 *  DataStoreRead: '<S133>/Data Store Read'
 *  Sum: '<S133>/Add'
 */
    /*@>12172*/Cnt_DCDC1_1/*@>12d00*/++;
    /* {E!d2081}End of Outputs for SubSystem: '<S113>/UNPACK' */
}
/* {E!d2124}End of SwitchCase: '<S113>/Switch Case' */

/* {S!d2128}SwitchCase: '<S114>/Switch Case' */
/*@>11fa9*/if (/*@>12354*/(int32_T)/*@>128c7*/ZT_VehCtrl_18B_B./*@>12d93*/CAN1_Rx_500_o3/*@>11fa8*/ == /*@>121db*/402772111) {
    /* {S!d2083}Outputs for IfAction SubSystem: '<S114>/UNPACK' incorporates:
 *  ActionPort: '<S134>/Action Port'
 */
    /* {S!d2126}DataStoreWrite: '<S134>/Data Store Write' incorporates:
 *  Constant: '<S134>/Constant'
 *  DataStoreRead: '<S134>/Data Store Read'
 *  Sum: '<S134>/Add'
 */
    /*@>12174*/Cnt_DCDC1_2/*@>12d01*/++;
    /* {E!d2083}End of Outputs for SubSystem: '<S114>/UNPACK' */
}
/* {E!d2128}End of SwitchCase: '<S114>/Switch Case' */

/* {S!d2132}SwitchCase: '<S115>/Switch Case' */
/*@>11faf*/if (/*@>12343*/(int32_T)/*@>128cd*/ZT_VehCtrl_18B_B./*@>12d96*/CAN1_Rx_500_o3/*@>11fae*/ == /*@>121de*/402720161) {
    /* {S!d2085}Outputs for IfAction SubSystem: '<S115>/UNPACK' incorporates:
 *  ActionPort: '<S135>/Action Port'
 */
    /* {S!d2130}DataStoreWrite: '<S135>/Data Store Write' incorporates:
 *  Constant: '<S135>/Constant'
 *  DataStoreRead: '<S135>/Data Store Read'
 *  Sum: '<S135>/Add'
 */
    /*@>12176*/Cnt_HVC1/*@>12d02*/++;
    /* {E!d2085}End of Outputs for SubSystem: '<S115>/UNPACK' */
}
/* {E!d2132}End of SwitchCase: '<S115>/Switch Case' */

/* {S!d2136}SwitchCase: '<S116>/Switch Case' */
/*@>11fb5*/if (/*@>12332*/(int32_T)/*@>128d3*/ZT_VehCtrl_18B_B./*@>12d99*/CAN1_Rx_500_o3/*@>11fb4*/ == /*@>121e1*/402851233) {
    /* {S!d2087}Outputs for IfAction SubSystem: '<S116>/UNPACK' incorporates:
 *  ActionPort: '<S136>/Action Port'
 */
    /* {S!d2134}DataStoreWrite: '<S136>/Data Store Write' incorporates:
 *  Constant: '<S136>/Constant'
 *  DataStoreRead: '<S136>/Data Store Read'
 *  Sum: '<S136>/Add'
 */
    /*@>12178*/Cnt_HVC3/*@>12d03*/++;
    /* {E!d2087}End of Outputs for SubSystem: '<S116>/UNPACK' */
}
/* {E!d2136}End of SwitchCase: '<S116>/Switch Case' */

/* {S!d2140}SwitchCase: '<S117>/Switch Case' */
/*@>11fbb*/if (/*@>12321*/(int32_T)/*@>128d9*/ZT_VehCtrl_18B_B./*@>12d9c*/CAN1_Rx_500_o3/*@>11fba*/ == /*@>121e4*/402916769) {
    /* {S!d2089}Outputs for IfAction SubSystem: '<S117>/UNPACK' incorporates:
 *  ActionPort: '<S137>/Action Port'
 */
    /* {S!d2138}DataStoreWrite: '<S137>/Data Store Write' incorporates:
 *  Constant: '<S137>/Constant'
 *  DataStoreRead: '<S137>/Data Store Read'
 *  Sum: '<S137>/Add'
 */
    /*@>1217a*/Cnt_HVC4/*@>12d04*/++;
    /* {E!d2089}End of Outputs for SubSystem: '<S117>/UNPACK' */
}
/* {E!d2140}End of SwitchCase: '<S117>/Switch Case' */

/* {S!d2144}SwitchCase: '<S118>/Switch Case' */
/*@>11fc1*/if (/*@>12310*/(int32_T)/*@>128df*/ZT_VehCtrl_18B_B./*@>12d9f*/CAN1_Rx_500_o3/*@>11fc0*/ == /*@>121e7*/403113377) {
    /* {S!d2091}Outputs for IfAction SubSystem: '<S118>/UNPACK' incorporates:
 *  ActionPort: '<S138>/Action Port'
 */
    /* {S!d2142}DataStoreWrite: '<S138>/Data Store Write' incorporates:
 *  Constant: '<S138>/Constant'
 *  DataStoreRead: '<S138>/Data Store Read'
 *  Sum: '<S138>/Add'
 */
    /*@>1217c*/Cnt_HVC7/*@>12d05*/++;
    /* {E!d2091}End of Outputs for SubSystem: '<S118>/UNPACK' */
}
/* {E!d2144}End of SwitchCase: '<S118>/Switch Case' */

/* {S!d2148}SwitchCase: '<S119>/Switch Case' */
/*@>11fc7*/if (/*@>122ff*/(int32_T)/*@>128e5*/ZT_VehCtrl_18B_B./*@>12da2*/CAN1_Rx_500_o3/*@>11fc6*/ == /*@>121ea*/218038278) {
    /* {S!d2093}Outputs for IfAction SubSystem: '<S119>/UNPACK' incorporates:
 *  ActionPort: '<S139>/Action Port'
 */
    /* {S!d2146}DataStoreWrite: '<S139>/Data Store Write' incorporates:
 *  Constant: '<S139>/Constant'
 *  DataStoreRead: '<S139>/Data Store Read'
 *  Sum: '<S139>/Add'
 */
    /*@>1217e*/Cnt_ISG1/*@>12d06*/++;
    /* {E!d2093}End of Outputs for SubSystem: '<S119>/UNPACK' */
}
/* {E!d2148}End of SwitchCase: '<S119>/Switch Case' */

/* {S!d2152}SwitchCase: '<S120>/Switch Case' */
/*@>11fcd*/if (/*@>122ee*/(int32_T)/*@>128eb*/ZT_VehCtrl_18B_B./*@>12da5*/CAN1_Rx_500_o3/*@>11fcc*/ == /*@>121ed*/218038534) {
    /* {S!d2095}Outputs for IfAction SubSystem: '<S120>/UNPACK' incorporates:
 *  ActionPort: '<S140>/Action Port'
 */
    /* {S!d2150}DataStoreWrite: '<S140>/Data Store Write' incorporates:
 *  Constant: '<S140>/Constant'
 *  DataStoreRead: '<S140>/Data Store Read'
 *  Sum: '<S140>/Add'
 */
    /*@>12180*/Cnt_ISG2/*@>12d07*/++;
    /* {E!d2095}End of Outputs for SubSystem: '<S120>/UNPACK' */
}
/* {E!d2152}End of SwitchCase: '<S120>/Switch Case' */

/* {S!d2156}SwitchCase: '<S121>/Switch Case' */
/*@>11fd3*/if (/*@>122dd*/(int32_T)/*@>128f1*/ZT_VehCtrl_18B_B./*@>12da8*/CAN1_Rx_500_o3/*@>11fd2*/ == /*@>121f0*/218038790) {
    /* {S!d2097}Outputs for IfAction SubSystem: '<S121>/UNPACK' incorporates:
 *  ActionPort: '<S141>/Action Port'
 */
    /* {S!d2154}DataStoreWrite: '<S141>/Data Store Write' incorporates:
 *  Constant: '<S141>/Constant'
 *  DataStoreRead: '<S141>/Data Store Read'
 *  Sum: '<S141>/Add'
 */
    /*@>12182*/Cnt_ISG3/*@>12d08*/++;
    /* {E!d2097}End of Outputs for SubSystem: '<S121>/UNPACK' */
}
/* {E!d2156}End of SwitchCase: '<S121>/Switch Case' */

/* {S!d2160}SwitchCase: '<S122>/Switch Case' */
/*@>11fd9*/if (/*@>122cc*/(int32_T)/*@>128f7*/ZT_VehCtrl_18B_B./*@>12dab*/CAN1_Rx_500_o3/*@>11fd8*/ == /*@>121f3*/406245615) {
    /* {S!d2099}Outputs for IfAction SubSystem: '<S122>/UNPACK' incorporates:
 *  ActionPort: '<S142>/Action Port'
 */
    /* {S!d2158}DataStoreWrite: '<S142>/Data Store Write' incorporates:
 *  Constant: '<S142>/Constant'
 *  DataStoreRead: '<S142>/Data Store Read'
 *  Sum: '<S142>/Add'
 */
    /*@>12184*/Cnt_MCU1_1/*@>12d09*/++;
    /* {E!d2099}End of Outputs for SubSystem: '<S122>/UNPACK' */
}
/* {E!d2160}End of SwitchCase: '<S122>/Switch Case' */

/* {S!d2164}SwitchCase: '<S123>/Switch Case' */
/*@>11fdf*/if (/*@>122bb*/(int32_T)/*@>128fd*/ZT_VehCtrl_18B_B./*@>12dae*/CAN1_Rx_500_o3/*@>11fde*/ == /*@>121f6*/406311151) {
    /* {S!d2101}Outputs for IfAction SubSystem: '<S123>/UNPACK' incorporates:
 *  ActionPort: '<S143>/Action Port'
 */
    /* {S!d2162}DataStoreWrite: '<S143>/Data Store Write' incorporates:
 *  Constant: '<S143>/Constant'
 *  DataStoreRead: '<S143>/Data Store Read'
 *  Sum: '<S143>/Add'
 */
    /*@>12186*/Cnt_MCU1_2/*@>12d0a*/++;
    /* {E!d2101}End of Outputs for SubSystem: '<S123>/UNPACK' */
}
/* {E!d2164}End of SwitchCase: '<S123>/Switch Case' */

/* {S!d2168}SwitchCase: '<S124>/Switch Case' */
/*@>11fe5*/if (/*@>122aa*/(int32_T)/*@>12903*/ZT_VehCtrl_18B_B./*@>12db1*/CAN1_Rx_500_o3/*@>11fe4*/ == /*@>121f9*/406376687) {
    /* {S!d2103}Outputs for IfAction SubSystem: '<S124>/UNPACK' incorporates:
 *  ActionPort: '<S144>/Action Port'
 */
    /* {S!d2166}DataStoreWrite: '<S144>/Data Store Write' incorporates:
 *  Constant: '<S144>/Constant'
 *  DataStoreRead: '<S144>/Data Store Read'
 *  Sum: '<S144>/Add'
 */
    /*@>12188*/Cnt_MCU1_3/*@>12d0b*/++;
    /* {E!d2103}End of Outputs for SubSystem: '<S124>/UNPACK' */
}
/* {E!d2168}End of SwitchCase: '<S124>/Switch Case' */

/* {S!d2172}SwitchCase: '<S125>/Switch Case' */
/*@>11feb*/if (/*@>12299*/(int32_T)/*@>12909*/ZT_VehCtrl_18B_B./*@>12db4*/CAN1_Rx_500_o3/*@>11fea*/ == /*@>121fc*/406245617) {
    /* {S!d2105}Outputs for IfAction SubSystem: '<S125>/UNPACK' incorporates:
 *  ActionPort: '<S145>/Action Port'
 */
    /* {S!d2170}DataStoreWrite: '<S145>/Data Store Write' incorporates:
 *  Constant: '<S145>/Constant'
 *  DataStoreRead: '<S145>/Data Store Read'
 *  Sum: '<S145>/Add'
 */
    /*@>1218a*/Cnt_MCU2_1/*@>12d0c*/++;
    /* {E!d2105}End of Outputs for SubSystem: '<S125>/UNPACK' */
}
/* {E!d2172}End of SwitchCase: '<S125>/Switch Case' */

/* {S!d2176}SwitchCase: '<S126>/Switch Case' */
/*@>11ff1*/if (/*@>12288*/(int32_T)/*@>1290f*/ZT_VehCtrl_18B_B./*@>12db7*/CAN1_Rx_500_o3/*@>11ff0*/ == /*@>121ff*/406311153) {
    /* {S!d2107}Outputs for IfAction SubSystem: '<S126>/UNPACK' incorporates:
 *  ActionPort: '<S146>/Action Port'
 */
    /* {S!d2174}DataStoreWrite: '<S146>/Data Store Write' incorporates:
 *  Constant: '<S146>/Constant'
 *  DataStoreRead: '<S146>/Data Store Read'
 *  Sum: '<S146>/Add'
 */
    /*@>1218c*/Cnt_MCU2_2/*@>12d0d*/++;
    /* {E!d2107}End of Outputs for SubSystem: '<S126>/UNPACK' */
}
/* {E!d2176}End of SwitchCase: '<S126>/Switch Case' */

/* {S!d2180}SwitchCase: '<S127>/Switch Case' */
/*@>11ff7*/if (/*@>12277*/(int32_T)/*@>12915*/ZT_VehCtrl_18B_B./*@>12dba*/CAN1_Rx_500_o3/*@>11ff6*/ == /*@>12202*/406376689) {
    /* {S!d2109}Outputs for IfAction SubSystem: '<S127>/UNPACK' incorporates:
 *  ActionPort: '<S147>/Action Port'
 */
    /* {S!d2178}DataStoreWrite: '<S147>/Data Store Write' incorporates:
 *  Constant: '<S147>/Constant'
 *  DataStoreRead: '<S147>/Data Store Read'
 *  Sum: '<S147>/Add'
 */
    /*@>1218e*/Cnt_MCU2_3/*@>12d0e*/++;
    /* {E!d2109}End of Outputs for SubSystem: '<S127>/UNPACK' */
}
/* {E!d2180}End of SwitchCase: '<S127>/Switch Case' */

/* {S!d2184}SwitchCase: '<S128>/Switch Case' */
/*@>11ffd*/if (/*@>12266*/(int32_T)/*@>1291b*/ZT_VehCtrl_18B_B./*@>12dbd*/CAN1_Rx_500_o3/*@>11ffc*/ == /*@>12205*/419376072) {
    /* {S!d2111}Outputs for IfAction SubSystem: '<S128>/UNPACK' incorporates:
 *  ActionPort: '<S148>/Action Port'
 */
    /* {S!d2182}DataStoreWrite: '<S148>/Data Store Write' incorporates:
 *  Constant: '<S148>/Constant'
 *  DataStoreRead: '<S148>/Data Store Read'
 *  Sum: '<S148>/Add'
 */
    /*@>12190*/Cnt_PDU/*@>12d0f*/++;
    /* {E!d2111}End of Outputs for SubSystem: '<S128>/UNPACK' */
}
/* {E!d2184}End of SwitchCase: '<S128>/Switch Case' */

/* {S!d2188}SwitchCase: '<S129>/Switch Case' */
/*@>12003*/if (/*@>12255*/(int32_T)/*@>12921*/ZT_VehCtrl_18B_B./*@>12dc0*/CAN1_Rx_500_o3/*@>12002*/ == /*@>12208*/218038277) {
    /* {S!d2113}Outputs for IfAction SubSystem: '<S129>/UNPACK' incorporates:
 *  ActionPort: '<S149>/Action Port'
 */
    /* {S!d2186}DataStoreWrite: '<S149>/Data Store Write' incorporates:
 *  Constant: '<S149>/Constant'
 *  DataStoreRead: '<S149>/Data Store Read'
 *  Sum: '<S149>/Add'
 */
    /*@>12192*/Cnt_TW1/*@>12d10*/++;
    /* {E!d2113}End of Outputs for SubSystem: '<S129>/UNPACK' */
}
/* {E!d2188}End of SwitchCase: '<S129>/Switch Case' */

/* {S!d2192}SwitchCase: '<S130>/Switch Case' */
/*@>12009*/if (/*@>12244*/(int32_T)/*@>12927*/ZT_VehCtrl_18B_B./*@>12dc3*/CAN1_Rx_500_o3/*@>12008*/ == /*@>1220b*/218038533) {
    /* {S!d2115}Outputs for IfAction SubSystem: '<S130>/UNPACK' incorporates:
 *  ActionPort: '<S150>/Action Port'
 */
    /* {S!d2190}DataStoreWrite: '<S150>/Data Store Write' incorporates:
 *  Constant: '<S150>/Constant'
 *  DataStoreRead: '<S150>/Data Store Read'
 *  Sum: '<S150>/Add'
 */
    /*@>12194*/Cnt_TW2/*@>12d11*/++;
    /* {E!d2115}End of Outputs for SubSystem: '<S130>/UNPACK' */
}
/* {E!d2192}End of SwitchCase: '<S130>/Switch Case' */

/* {S!d2196}SwitchCase: '<S131>/Switch Case' */
/*@>1200f*/if (/*@>12233*/(int32_T)/*@>1292d*/ZT_VehCtrl_18B_B./*@>12dc6*/CAN1_Rx_500_o3/*@>1200e*/ == /*@>1220e*/218038789) {
    /* {S!d2117}Outputs for IfAction SubSystem: '<S131>/UNPACK' incorporates:
 *  ActionPort: '<S151>/Action Port'
 */
    /* {S!d2194}DataStoreWrite: '<S151>/Data Store Write' incorporates:
 *  Constant: '<S151>/Constant'
 *  DataStoreRead: '<S151>/Data Store Read'
 *  Sum: '<S151>/Add'
 */
    /*@>12196*/Cnt_TW3/*@>12d12*/++;
    /* {E!d2117}End of Outputs for SubSystem: '<S131>/UNPACK' */
}
/* {E!d2196}End of SwitchCase: '<S131>/Switch Case' */

/* {S!d2200}SwitchCase: '<S132>/Switch Case' */
/*@>12015*/if (/*@>12222*/(int32_T)/*@>12933*/ZT_VehCtrl_18B_B./*@>12dc9*/CAN1_Rx_500_o3/*@>12014*/ == /*@>12211*/419374139) {
    /* {S!d2119}Outputs for IfAction SubSystem: '<S132>/UNPACK' incorporates:
 *  ActionPort: '<S152>/Action Port'
 */
    /* {S!d2198}DataStoreWrite: '<S152>/Data Store Write' incorporates:
 *  Constant: '<S152>/Constant'
 *  DataStoreRead: '<S152>/Data Store Read'
 *  Sum: '<S152>/Add'
 */
    /*@>12198*/Cnt_TWV/*@>12d13*/++;
    /* {E!d2119}End of Outputs for SubSystem: '<S132>/UNPACK' */
}
/* {E!d2200}End of SwitchCase: '<S132>/Switch Case' */





      
  


        
    
      
          }
      
  



                





      

    
    
    
    
    
    
    
    
    
    
    
    
    
    

  
  
        
    
    
    
    /* Model step function */
    
            
    void ZT_VehCtrl_18B_step(void)   
    {
            


      
      
      
            
      
        
int32_T rtb_PulseGenerator2;
int32_T rtb_PulseGenerator;
ZCEventType zcEvent;
boolean_T rtb_LogicalOperator;
int32_T rtb_Flg_b;
real_T rtb_Add3;
real_T rtb_Divide2;
int32_T rtb_low_b;
real_T tmp;
uint8_T tmp_0;
uint8_T tmp_1;
uint8_T tmp_2;
uint8_T tmp_3;

        

      

        
  



          
        
  



                                  /* {S!d2254}S-Function (adc_mpc_start): '<S37>/ADC_Start' */
/*@[259c8*/                
        
            ADC_DRV_StartConversion(1U, ADC_CONV_CHAIN_NORMAL);
            
            {
                uint16_t *result_addr = &/*@<276a3*//*@>2769c*/ZT_VehCtrl_18B_B./*@>276a8*/ADC_Start[0];
                while (!(ADC_DRV_GetStatusFlags(1U) & ADC_FLAG_NORMAL_ENDCHAIN));                
                ADC_DRV_GetConvResultsToArray(1U, ADC_CONV_CHAIN_NORMAL, result_addr, 5U);
                ADC_DRV_ClearStatusFlags(1U, ADC_FLAG_NORMAL_ENDCHAIN);
            }

 
   
  
/*@]*//* {S!d2256}S-Function (adc_mpc_start): '<S37>/ADC_Start1' */
/*@[259ca*/                
        
            ADC_DRV_StartConversion(0U, ADC_CONV_CHAIN_NORMAL);
            
            {
                uint16_t *result_addr = &/*@<276e8*//*@>276e1*/ZT_VehCtrl_18B_B./*@>276ed*/ADC_Start1[0];
                while (!(ADC_DRV_GetStatusFlags(0U) & ADC_FLAG_NORMAL_ENDCHAIN));                
                ADC_DRV_GetConvResultsToArray(0U, ADC_CONV_CHAIN_NORMAL, result_addr, 10U);
                ADC_DRV_ClearStatusFlags(0U, ADC_FLAG_NORMAL_ENDCHAIN);
            }

 
   
  
/*@]*//* {S!d2258}Gain: '<S37>/Gain2' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write'
 *  DataTypeConversion: '<S37>/Data Type Conversion3'
 */
/*@[25b02*/AI11 = /*@>2c052*/0.00893772859F/*@>2c051*/ * /*@>2c053*/(real32_T)/*@>2c056*/ZT_VehCtrl_18B_B./*@>2c055*/ADC_Start1/*@>2c054*/[/*@>2c058*/3];
/*@]*//* {S!d2260}Gain: '<S37>/Gain3' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write1'
 *  DataTypeConversion: '<S37>/Data Type Conversion5'
 */
/*@[25b1e*/AI16 = /*@>2c06b*/0.00893772859F/*@>2c06a*/ * /*@>2c06c*/(real32_T)/*@>2c06f*/ZT_VehCtrl_18B_B./*@>2c06e*/ADC_Start1/*@>2c06d*/[/*@>2c071*/5];
/*@]*//* {S!d2262}Gain: '<S37>/Gain7' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write2'
 *  DataTypeConversion: '<S37>/Data Type Conversion1'
 */
/*@[25b3a*/AI18 = /*@>2c084*/0.00893772859F/*@>2c083*/ * /*@>2c085*/(real32_T)/*@>2c088*/ZT_VehCtrl_18B_B./*@>2c087*/ADC_Start1/*@>2c086*/[/*@>2c08a*/1];
/*@]*//* {S!d2264}Gain: '<S37>/Gain10' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write3'
 *  DataTypeConversion: '<S37>/Data Type Conversion6'
 */
/*@[25b56*/AI06 = /*@>2c09d*/0.00122100126F/*@>2c09c*/ * /*@>2c09e*/(real32_T)/*@>2c0a1*/ZT_VehCtrl_18B_B./*@>2c0a0*/ADC_Start1/*@>2c09f*/[/*@>2c0a3*/6];
/*@]*//* {S!d2266}Gain: '<S37>/Gain14' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write4'
 *  DataTypeConversion: '<S37>/Data Type Conversion9'
 */
/*@[25b72*/AI07 = /*@>2c0b6*/0.00122100126F/*@>2c0b5*/ * /*@>2c0b7*/(real32_T)/*@>2c0ba*/ZT_VehCtrl_18B_B./*@>2c0b9*/ADC_Start1/*@>2c0b8*/[/*@>2c0bc*/9];
/*@]*//* {S!d2268}Gain: '<S37>/Gain1' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write5'
 *  DataTypeConversion: '<S37>/Data Type Conversion2'
 */
/*@[25b8e*/AI08 = /*@>2c0cf*/0.00122100126F/*@>2c0ce*/ * /*@>2c0d0*/(real32_T)/*@>2c0d3*/ZT_VehCtrl_18B_B./*@>2c0d2*/ADC_Start1/*@>2c0d1*/[/*@>2c0d5*/2];
/*@]*//* {S!d2270}Gain: '<S37>/Gain12' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write6'
 *  DataTypeConversion: '<S37>/Data Type Conversion7'
 */
/*@[25baa*/AI12 = /*@>2c0e8*/0.00122100126F/*@>2c0e7*/ * /*@>2c0e9*/(real32_T)/*@>2c0ec*/ZT_VehCtrl_18B_B./*@>2c0eb*/ADC_Start1/*@>2c0ea*/[/*@>2c0ee*/7];
/*@]*//* {S!d2272}Gain: '<S37>/Gain6' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write7'
 *  DataTypeConversion: '<S37>/Data Type Conversion'
 */
/*@[25bc6*/AI15 = /*@>2c101*/0.00122100126F/*@>2c100*/ * /*@>2c102*/(real32_T)/*@>2c105*/ZT_VehCtrl_18B_B./*@>2c104*/ADC_Start1/*@>2c103*/[/*@>2c107*/0];
/*@]*//* {S!d2274}Gain: '<S37>/Gain8' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write8'
 *  DataTypeConversion: '<S37>/Data Type Conversion4'
 */
/*@[25be2*/AI17 = /*@>2c11a*/0.00122100126F/*@>2c119*/ * /*@>2c11b*/(real32_T)/*@>2c11e*/ZT_VehCtrl_18B_B./*@>2c11d*/ADC_Start1/*@>2c11c*/[/*@>2c120*/4];
/*@]*//* {S!d2276}Gain: '<S37>/Gain13' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write9'
 *  DataTypeConversion: '<S37>/Data Type Conversion8'
 */
/*@[25bfe*/AI19 = /*@>2c133*/0.00122100126F/*@>2c132*/ * /*@>2c134*/(real32_T)/*@>2c137*/ZT_VehCtrl_18B_B./*@>2c136*/ADC_Start1/*@>2c135*/[/*@>2c139*/8];
/*@]*//* {S!d2278}S-Function (gpio_mpc_input): '<S40>/DI01' */
/*@[259cc*/                            /* Signal update */
            /*@>2773f*/ZT_VehCtrl_18B_B./*@>2774c*/DI01_h = (PINS_DRV_ReadPins(PTG) >> 5) & 0x01;
 
   
  
/*@]*//* {S!d2280}DataStoreWrite: '<S40>/Data Store Write1' */
/*@[25c1a*/DI01 = /*@>2c155*/ZT_VehCtrl_18B_B./*@>2c154*/DI01_h;
/*@]*//* {S!d2282}S-Function (gpio_mpc_input): '<S40>/DI02' */
/*@[259ce*/                            /* Signal update */
            /*@>27784*/ZT_VehCtrl_18B_B./*@>27791*/DI02_c = (PINS_DRV_ReadPins(PTG) >> 9) & 0x01;
 
   
  
/*@]*//* {S!d2284}DataStoreWrite: '<S40>/Data Store Write8' */
/*@[25c36*/DI02 = /*@>2c172*/ZT_VehCtrl_18B_B./*@>2c171*/DI02_c;
/*@]*//* {S!d2286}S-Function (gpio_mpc_input): '<S40>/DI03' */
/*@[259d0*/                            /* Signal update */
            /*@>277c9*/ZT_VehCtrl_18B_B./*@>277d6*/DI03_h = (PINS_DRV_ReadPins(PTC) >> 11) & 0x01;
 
   
  
/*@]*//* {S!d2288}DataStoreWrite: '<S40>/Data Store Write9' */
/*@[25c52*/DI03 = /*@>2c18f*/ZT_VehCtrl_18B_B./*@>2c18e*/DI03_h;
/*@]*//* {S!d2290}S-Function (gpio_mpc_input): '<S40>/DI04' */
/*@[259d2*/                            /* Signal update */
            /*@>2780e*/ZT_VehCtrl_18B_B./*@>2781b*/DI04_o = (PINS_DRV_ReadPins(PTA) >> 9) & 0x01;
 
   
  
/*@]*//* {S!d2292}DataStoreWrite: '<S40>/Data Store Write10' */
/*@[25c6e*/DI04 = /*@>2c1ac*/ZT_VehCtrl_18B_B./*@>2c1ab*/DI04_o;
/*@]*//* {S!d2294}S-Function (gpio_mpc_input): '<S40>/DI07' */
/*@[259d4*/                            /* Signal update */
            /*@>27853*/ZT_VehCtrl_18B_B./*@>27860*/DI07_f = (PINS_DRV_ReadPins(PTA) >> 0) & 0x01;
 
   
  
/*@]*//* {S!d2296}DataStoreWrite: '<S40>/Data Store Write' */
/*@[25c8a*/DI07 = /*@>2c1c9*/ZT_VehCtrl_18B_B./*@>2c1c8*/DI07_f;
/*@]*//* {S!d2298}S-Function (gpio_mpc_input): '<S40>/DI08' */
/*@[259d6*/                            /* Signal update */
            /*@>27898*/ZT_VehCtrl_18B_B./*@>278a5*/DI08_e = (PINS_DRV_ReadPins(PTD) >> 11) & 0x01;
 
   
  
/*@]*//* {S!d2300}DataStoreWrite: '<S40>/Data Store Write12' */
/*@[25ca6*/DI08 = /*@>2c1e6*/ZT_VehCtrl_18B_B./*@>2c1e5*/DI08_e;
/*@]*//* {S!d2302}S-Function (gpio_mpc_input): '<S40>/DI09' */
/*@[259d8*/                            /* Signal update */
            /*@>278dd*/ZT_VehCtrl_18B_B./*@>278ea*/DI09_a = (PINS_DRV_ReadPins(PTG) >> 6) & 0x01;
 
   
  
/*@]*//* {S!d2304}DataStoreWrite: '<S40>/Data Store Write13' */
/*@[25cc2*/DI09 = /*@>2c203*/ZT_VehCtrl_18B_B./*@>2c202*/DI09_a;
/*@]*//* {S!d2306}S-Function (gpio_mpc_input): '<S40>/DI10' */
/*@[259da*/                            /* Signal update */
            /*@>27922*/ZT_VehCtrl_18B_B./*@>2792f*/DI10_g = (PINS_DRV_ReadPins(PTG) >> 2) & 0x01;
 
   
  
/*@]*//* {S!d2308}DataStoreWrite: '<S40>/Data Store Write2' */
/*@[25cde*/DI10 = /*@>2c220*/ZT_VehCtrl_18B_B./*@>2c21f*/DI10_g;
/*@]*//* {S!d2310}S-Function (gpio_mpc_input): '<S40>/DI12' */
/*@[259dc*/                            /* Signal update */
            /*@>27967*/ZT_VehCtrl_18B_B./*@>27974*/DI12_h = (PINS_DRV_ReadPins(PTF) >> 13) & 0x01;
 
   
  
/*@]*//* {S!d2312}DataStoreWrite: '<S40>/Data Store Write11' */
/*@[25cfa*/DI12 = /*@>2c23d*/ZT_VehCtrl_18B_B./*@>2c23c*/DI12_h;
/*@]*//* {S!d2314}S-Function (gpio_mpc_input): '<S40>/DI13' */
/*@[259de*/                            /* Signal update */
            /*@>279ac*/ZT_VehCtrl_18B_B./*@>279b9*/DI13_m = (PINS_DRV_ReadPins(PTG) >> 4) & 0x01;
 
   
  
/*@]*//* {S!d2316}DataStoreWrite: '<S40>/Data Store Write3' */
/*@[25d16*/DI13 = /*@>2c25a*/ZT_VehCtrl_18B_B./*@>2c259*/DI13_m;
/*@]*//* {S!d2318}S-Function (gpio_mpc_input): '<S40>/DI15' */
/*@[259e0*/                            /* Signal update */
            /*@>279f1*/ZT_VehCtrl_18B_B./*@>279fe*/DI15_b = (PINS_DRV_ReadPins(PTF) >> 12) & 0x01;
 
   
  
/*@]*//* {S!d2320}DataStoreWrite: '<S40>/Data Store Write4' */
/*@[25d32*/DI15 = /*@>2c277*/ZT_VehCtrl_18B_B./*@>2c276*/DI15_b;
/*@]*//* {S!d2322}S-Function (gpio_mpc_input): '<S40>/DI16' */
/*@[259e2*/                            /* Signal update */
            /*@>27a36*/ZT_VehCtrl_18B_B./*@>27a43*/DI16_k = (PINS_DRV_ReadPins(PTG) >> 7) & 0x01;
 
   
  
/*@]*//* {S!d2324}DataStoreWrite: '<S40>/Data Store Write5' */
/*@[25d4e*/DI16 = /*@>2c294*/ZT_VehCtrl_18B_B./*@>2c293*/DI16_k;
/*@]*//* {S!d2326}S-Function (gpio_mpc_input): '<S40>/DI17' */
/*@[259e4*/                            /* Signal update */
            /*@>27a7b*/ZT_VehCtrl_18B_B./*@>27a88*/DI17_c = (PINS_DRV_ReadPins(PTD) >> 10) & 0x01;
 
   
  
/*@]*//* {S!d2328}DataStoreWrite: '<S40>/Data Store Write6' */
/*@[25d6a*/DI17 = /*@>2c2b1*/ZT_VehCtrl_18B_B./*@>2c2b0*/DI17_c;
/*@]*//* {S!d2330}S-Function (gpio_mpc_input): '<S40>/DI18' */
/*@[259e6*/                            /* Signal update */
            /*@>27ac0*/ZT_VehCtrl_18B_B./*@>27acd*/DI18_k = (PINS_DRV_ReadPins(PTG) >> 10) & 0x01;
 
   
  
/*@]*//* {S!d2332}DataStoreWrite: '<S40>/Data Store Write7' */
/*@[25d86*/DI18 = /*@>2c2ce*/ZT_VehCtrl_18B_B./*@>2c2cd*/DI18_k;
/*@]*//* {S!d2334}S-Function (gpio_mpc_input): '<S153>/DI31' */
/*@[259e8*/                            /* Signal update */
            /*@>27b05*/ZT_VehCtrl_18B_B./*@>27b12*/DI31_g = (PINS_DRV_ReadPins(PTF) >> 0) & 0x01;
 
   
  
/*@]*//* {S!d2336}DataStoreWrite: '<S153>/Data Store Write14' */
/*@[25da2*/DI31 = /*@>2c2eb*/ZT_VehCtrl_18B_B./*@>2c2ea*/DI31_g;
/*@]*//* {S!d2338}S-Function (gpio_mpc_input): '<S153>/DI32' */
/*@[259ea*/                            /* Signal update */
            /*@>27b4a*/ZT_VehCtrl_18B_B./*@>27b57*/DI32_l = (PINS_DRV_ReadPins(PTD) >> 1) & 0x01;
 
   
  
/*@]*//* {S!d2340}DataStoreWrite: '<S153>/Data Store Write15' */
/*@[25dbe*/DI32 = /*@>2c308*/ZT_VehCtrl_18B_B./*@>2c307*/DI32_l;
/*@]*//* {S!d2342}S-Function (gpio_mpc_input): '<S153>/DI33' */
/*@[259ec*/                            /* Signal update */
            /*@>27b8f*/ZT_VehCtrl_18B_B./*@>27b9c*/DI33_b = (PINS_DRV_ReadPins(PTD) >> 2) & 0x01;
 
   
  
/*@]*//* {S!d2344}DataStoreWrite: '<S153>/Data Store Write16' */
/*@[25dda*/DI33 = /*@>2c325*/ZT_VehCtrl_18B_B./*@>2c324*/DI33_b;
/*@]*//* {S!d2346}S-Function (gpio_mpc_input): '<S153>/DI34' */
/*@[259ee*/                            /* Signal update */
            /*@>27bd4*/ZT_VehCtrl_18B_B./*@>27be1*/DI34_p = (PINS_DRV_ReadPins(PTC) >> 13) & 0x01;
 
   
  
/*@]*//* {S!d2348}DataStoreWrite: '<S153>/Data Store Write17' */
/*@[25df6*/DI34 = /*@>2c342*/ZT_VehCtrl_18B_B./*@>2c341*/DI34_p;
/*@]*//* {S!d2350}Gain: '<S37>/Gain9' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write10'
 *  DataTypeConversion: '<S37>/Data Type Conversion12'
 */
/*@[25e12*/AI03 = /*@>2c356*/0.00893772859F/*@>2c355*/ * /*@>2c357*/(real32_T)/*@>2c35a*/ZT_VehCtrl_18B_B./*@>2c359*/ADC_Start/*@>2c358*/[/*@>2c35c*/2];
/*@]*//* {S!d2352}Gain: '<S37>/Gain11' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write11'
 *  DataTypeConversion: '<S37>/Data Type Conversion13'
 */
/*@[25e2e*/AI04 = /*@>2c36f*/0.00893772859F/*@>2c36e*/ * /*@>2c370*/(real32_T)/*@>2c373*/ZT_VehCtrl_18B_B./*@>2c372*/ADC_Start/*@>2c371*/[/*@>2c375*/3];
/*@]*//* {S!d2354}Gain: '<S37>/Gain5' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write12'
 *  DataTypeConversion: '<S37>/Data Type Conversion11'
 */
/*@[25e4a*/AI05 = /*@>2c388*/0.00893772859F/*@>2c387*/ * /*@>2c389*/(real32_T)/*@>2c38c*/ZT_VehCtrl_18B_B./*@>2c38b*/ADC_Start/*@>2c38a*/[/*@>2c38e*/1];
/*@]*//* {S!d2356}Gain: '<S37>/Gain15' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write13'
 *  DataTypeConversion: '<S37>/Data Type Conversion14'
 */
/*@[25e66*/AI09 = /*@>2c3a1*/0.00893772859F/*@>2c3a0*/ * /*@>2c3a2*/(real32_T)/*@>2c3a5*/ZT_VehCtrl_18B_B./*@>2c3a4*/ADC_Start/*@>2c3a3*/[/*@>2c3a7*/4];
/*@]*//* {S!d2358}Gain: '<S37>/Gain4' incorporates:
 *  DataStoreWrite: '<S37>/Data Store Write14'
 *  DataTypeConversion: '<S37>/Data Type Conversion10'
 */
/*@[25e82*/AI20 = /*@>2c3ba*/0.00893772859F/*@>2c3b9*/ * /*@>2c3bb*/(real32_T)/*@>2c3be*/ZT_VehCtrl_18B_B./*@>2c3bd*/ADC_Start/*@>2c3bc*/[/*@>2c3c0*/0];
/*@]*//* {S!d2360}DataStoreWrite: '<S6>/Data Store Write4' incorporates:
 *  Constant: '<S6>/Constant'
 */
/*@[25e9e*/HS005 = /*@>2c3d2*/true;
/*@]*//* {S!d2362}DataStoreRead: '<S191>/Data Store Read7' */
/*@>22e20*/ZT_VehCtrl_18B_B./*@>2b72f*/DataStoreRead7_a/*@>ab77*/ = /*@[25eb8*/HS005/*@]*/;
/* {S!d2364}DataStoreRead: '<S191>/Data Store Read6' */
/*@>22e26*/ZT_VehCtrl_18B_B./*@>2b732*/DataStoreRead6_n/*@>ab79*/ = /*@[25ed4*/HS004/*@]*/;
/* {S!d2366}DataStoreRead: '<S191>/Data Store Read5' */
/*@>22e2c*/ZT_VehCtrl_18B_B./*@>2b735*/DataStoreRead5_i/*@>ab7b*/ = /*@[25ef0*/HS003/*@]*/;
/* {S!d2368}DataStoreRead: '<S191>/Data Store Read4' */
/*@>22e32*/ZT_VehCtrl_18B_B./*@>2b738*/DataStoreRead4/*@>ab7d*/ = /*@[25f0c*/HS002/*@]*/;
/* {S!d2370}DataStoreRead: '<S191>/Data Store Read2' */
/*@>22e38*/ZT_VehCtrl_18B_B./*@>2b73b*/DataStoreRead2/*@>ab7f*/ = /*@[25f28*/HS007/*@]*/;
/* {S!d2372}DataStoreRead: '<S191>/Data Store Read' */
/*@>22e3e*/ZT_VehCtrl_18B_B./*@>2b73e*/DataStoreRead/*@>ab81*/ = /*@[25f44*/HS001/*@]*/;
/* {S!d2374}DiscretePulseGenerator: '<S6>/Pulse Generator2' */
/*@>1d399*/rtb_PulseGenerator2/*@>aba2*/ = ((/*@>23456*/ZT_VehCtrl_18B_DW./*@>2b80d*/clockTickCounter/*@>ab9c*/ < /*@>1dc1d*/50)/*@>ab9f*/ && (/*@>2345c*/ZT_VehCtrl_18B_DW./*@>2b810*/clockTickCounter/*@>ab9e*/ >= /*@>1d398*/0));
/*@>20194*/if (/*@>23462*/ZT_VehCtrl_18B_DW./*@>2b813*/clockTickCounter/*@>aba8*/ >= /*@>1dc49*/99) {
    /*@>23474*/ZT_VehCtrl_18B_DW./*@>2b819*/clockTickCounter/*@>20197*/ = /*@>2aea9*/0;
} else {
    /*@>23468*/ZT_VehCtrl_18B_DW./*@>2b816*/clockTickCounter/*@>2afad*/++;
}
/* {E!d2374}End of DiscretePulseGenerator: '<S6>/Pulse Generator2' */

/* {S!d2376}DiscretePulseGenerator: '<S6>/Pulse Generator' */
/*@>1d3a8*/rtb_PulseGenerator/*@>abcf*/ = ((/*@>2347a*/ZT_VehCtrl_18B_DW./*@>2b81c*/clockTickCounter_e/*@>abc9*/ < /*@>1dc1e*/10)/*@>abcc*/ && (/*@>23480*/ZT_VehCtrl_18B_DW./*@>2b81f*/clockTickCounter_e/*@>abcb*/ >= /*@>1d3a7*/0));
/*@>20199*/if (/*@>23486*/ZT_VehCtrl_18B_DW./*@>2b822*/clockTickCounter_e/*@>abd5*/ >= /*@>1dc4a*/19) {
    /*@>23498*/ZT_VehCtrl_18B_DW./*@>2b828*/clockTickCounter_e/*@>2019c*/ = /*@>2aeac*/0;
} else {
    /*@>2348c*/ZT_VehCtrl_18B_DW./*@>2b825*/clockTickCounter_e/*@>2afae*/++;
}
/* {E!d2376}End of DiscretePulseGenerator: '<S6>/Pulse Generator' */
/* {E!d2201}End of Outputs for S-Function (fcan_mpc_isr): '<S5>/CAN0_Rx_500' */
/* {E!d2203}End of Outputs for S-Function (fcan_mpc_isr): '<S5>/CAN1_Rx_500' */

/* {S!d2205}Outputs for Triggered SubSystem: '<S6>/ACU' incorporates:
 *  TriggerPort: '<S171>/Trigger'
 */
/*@>1d3e5*/zcEvent/*@>ae40*/ = /*@[25a00*/rt_ZCFcn(/*@>1d3e3*/RISING_ZERO_CROSSING,&/*@>233d5*/ZT_VehCtrl_18B_PrevZCX./*@>2b7f5*/ACU_Trig_ZCE,
(/*@>1ecc1*/(real_T)/*@>1d3de*/rtb_PulseGenerator))/*@]*/;
/*@>ae43*/if (/*@>1d3e7*/zcEvent/*@>ae42*/ != /*@>1d3e9*/NO_ZCEVENT) {
    /* {S!d2378}Switch: '<S189>/Switch' incorporates:
 *  Constant: '<S189>/Constant1'
 *  Constant: '<S189>/Constant2'
 *  DataStoreRead: '<S171>/Data Store Read4'
 */
    /*@>2019e*/if (/*@>1d834*/DcacAcCmd/*@>d9e0*/ > /*@>1dc1f*/0.0F) {
        /*@>22e86*/ZT_VehCtrl_18B_B./*@>2b744*/Switch/*@>201a1*/ = /*@>1dc20*/85.0F;
    } else {
        /*@>22e80*/ZT_VehCtrl_18B_B./*@>2b741*/Switch/*@>1af0b*/ = /*@>1dc21*/170.0F;
    }
    /* {E!d2378}End of Switch: '<S189>/Switch' */

    /* {S!d2380}Switch: '<S188>/Switch' incorporates:
 *  Constant: '<S188>/Constant1'
 *  Constant: '<S188>/Constant2'
 *  DataStoreRead: '<S171>/Data Store Read2'
 */
    /*@>201a3*/if (/*@>1d838*/DcacEpsCmd/*@>d9f8*/ > /*@>1dc22*/0.0F) {
        /*@>22e9e*/ZT_VehCtrl_18B_B./*@>2b750*/Switch_f/*@>201a6*/ = /*@>1dc23*/85.0F;
    } else {
        /*@>22e98*/ZT_VehCtrl_18B_B./*@>2b74d*/Switch_f/*@>1af10*/ = /*@>1dc24*/170.0F;
    }
    /* {E!d2380}End of Switch: '<S188>/Switch' */

    /* {S!d2382}Switch: '<S187>/Switch' incorporates:
 *  Constant: '<S187>/Constant1'
 *  Constant: '<S187>/Constant2'
 *  DataStoreRead: '<S171>/Data Store Read3'
 */
    /*@>201a8*/if (/*@>1d83c*/DcacEpsMode/*@>da10*/ > /*@>1dc25*/0.0F) {
        /*@>22ed4*/ZT_VehCtrl_18B_B./*@>2b75c*/Switch_e/*@>201ab*/ = /*@>1dc26*/85.0F;
    } else {
        /*@>22ece*/ZT_VehCtrl_18B_B./*@>2b759*/Switch_e/*@>1af15*/ = /*@>1dc27*/170.0F;
    }
    /* {E!d2382}End of Switch: '<S187>/Switch' */

    /* {S!d2384}Switch: '<S186>/Switch' incorporates:
 *  Constant: '<S186>/Constant1'
 *  Constant: '<S186>/Constant2'
 *  DataStoreRead: '<S171>/Data Store Read1'
 */
    /*@>201ad*/if (/*@>1d840*/DcdcCmd/*@>da28*/ > /*@>1dc28*/0.0F) {
        /*@>22f10*/ZT_VehCtrl_18B_B./*@>2b765*/Switch_ef/*@>201b0*/ = /*@>1dc29*/85.0F;
    } else {
        /*@>22f0a*/ZT_VehCtrl_18B_B./*@>2b762*/Switch_ef/*@>1af1a*/ = /*@>1dc2a*/170.0F;
    }
    /* {E!d2384}End of Switch: '<S186>/Switch' */

    /* {S!d2386}S-Function (scanpack): '<S171>/VCU_ACU1' */
/*@[25a09*/                    /* S-Function (scanpack): '<S171>/VCU_ACU1' */


    /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.ID = 201824935U;
    /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Length = 8U;
    /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Extended = 1U;
    /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Remote = 0;
    
        /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[0] = 0;
        /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[1] = 0;
        /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[2] = 0;
        /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[3] = 0;
        /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[4] = 0;
        /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[5] = 0;
        /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[6] = 0;
        /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[7] = 0;
    
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
        real32_T result = /*@>27e2b*/ZT_VehCtrl_18B_B./*@>27e38*/Switch;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(255)){
                                packedValue = (uint8_T) 255;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[4]  =                     /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[4] |                     (uint8_T)(packedValue);
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
        real32_T result = /*@>27e5c*/ZT_VehCtrl_18B_B./*@>27e69*/Switch_f;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(255)){
                                packedValue = (uint8_T) 255;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[2]  =                     /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[2] |                     (uint8_T)(packedValue);
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
        real32_T result = /*@>27e8d*/ZT_VehCtrl_18B_B./*@>27e9a*/Switch_e;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(255)){
                                packedValue = (uint8_T) 255;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[3]  =                     /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[3] |                     (uint8_T)(packedValue);
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
        real32_T result = /*@>27ebe*/ZT_VehCtrl_18B_B./*@>27ecb*/Switch_ef;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(255)){
                                packedValue = (uint8_T) 255;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[0]  =                     /*@>27eef*/ZT_VehCtrl_18B_B./*@>27efc*/VCU_ACU1.Data[0] |                     (uint8_T)(packedValue);
    }

    }

        }
  
    }

    }    
 
   
  
/*@]*/    /* {S!d2388}S-Function (fcan_mpc_send): '<S171>/FCAN_Send_ID_0x0C079AA7' */
/*@[25a0c*/                

    {
        uint8_t* data = &/*@<27f55*//*@>27f4d*/ZT_VehCtrl_18B_B./*@>27f5f*/VCU_ACU1./*@>27f5c*/Data[0];

        flexcan_data_info_t txInfo = {
            .msg_id_type = FLEXCAN_MSG_ID_EXT,
            .data_length = /*@>27fac*/ZT_VehCtrl_18B_B./*@>27fbf*/VCU_ACU1./*@>27fbc*/Length,
            .is_remote = false
        };

        FLEXCAN_DRV_AbortTransfer(0, 51);
        FLEXCAN_DRV_ConfigTxMb(0, 51, &txInfo, 0x0C079AA7);

            FLEXCAN_DRV_Send(0, 51, &txInfo, 0x0C079AA7, data);
    }

 
   
  
/*@]*/    /* {S!d2390}DataStoreWrite: '<S171>/Data Store Write' incorporates:
 *  Constant: '<S171>/Constant'
 *  DataStoreRead: '<S171>/Data Store Read'
 *  Sum: '<S171>/Add'
 */
    /*@>1d65e*/Cnt_ACU_OUT/*@>2afb2*/++;
}
/* {E!d2205}End of Outputs for SubSystem: '<S6>/ACU' */

/* {S!d2207}Outputs for Triggered SubSystem: '<S6>/BMS' incorporates:
 *  TriggerPort: '<S172>/Trigger'
 */
/*@>1d3f1*/zcEvent/*@>ae99*/ = /*@[25a10*/rt_ZCFcn(/*@>1d3ef*/RISING_ZERO_CROSSING,&/*@>233db*/ZT_VehCtrl_18B_PrevZCX./*@>2b7f8*/BMS_Trig_ZCE,
(/*@>1ecc7*/(real_T)/*@>1d3ea*/rtb_PulseGenerator))/*@]*/;
/*@>ae9c*/if (/*@>1d3f3*/zcEvent/*@>ae9b*/ != /*@>1d3f5*/NO_ZCEVENT) {
    /* {S!d2392}DataStoreRead: '<S172>/Data Store Read1' */
    /*@>22e8c*/ZT_VehCtrl_18B_B./*@>2b747*/DataStoreRead1_e/*@>d690*/ = /*@>1d660*/VCU_PowerOnReq;
    /* {S!d2394}DataStoreRead: '<S172>/Data Store Read2' */
    /*@>22e92*/ZT_VehCtrl_18B_B./*@>2b74a*/DataStoreRead2_l/*@>d692*/ = /*@>1d664*/VCU_UrgencyCutOffPowerReq;
    /* {S!d2396}S-Function (scanpack): '<S172>/VCU_BMS' */
/*@[25a17*/                    /* S-Function (scanpack): '<S172>/VCU_BMS' */


    /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.ID = 352U;
    /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Length = 8U;
    /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Extended = 0U;
    /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Remote = 0;
    
        /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[0] = 0;
        /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[1] = 0;
        /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[2] = 0;
        /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[3] = 0;
        /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[4] = 0;
        /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[5] = 0;
        /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[6] = 0;
        /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[7] = 0;
    
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
        uint32_T result = (uint32_T) (/*@>27ff7*/ZT_VehCtrl_18B_B./*@>28004*/DataStoreRead1_e);

      

             /* no scaling required */ 
        
        packingValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (packingValue > (boolean_T)(1)){
                                packedValue = (uint8_T) 1;
                            }else if (packingValue < (boolean_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (packingValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[0]  =                     /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[0] |                     (uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U));
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
        uint32_T result = (uint32_T) (/*@>28028*/ZT_VehCtrl_18B_B./*@>28035*/DataStoreRead2_l);

      

             /* no scaling required */ 
        
        packingValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (packingValue > (boolean_T)(1)){
                                packedValue = (uint8_T) 1;
                            }else if (packingValue < (boolean_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (packingValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[0]  =                     /*@>28059*/ZT_VehCtrl_18B_B./*@>28066*/VCU_BMS.Data[0] |                     (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 1));
    }

    }

        }

    }

    }    
 
   
  
/*@]*/    /* {S!d2398}S-Function (fcan_mpc_send): '<S172>/FCAN_Send_ID_0x160' */
/*@[25a1a*/                

    {
        uint8_t* data = &/*@<280bf*//*@>280b7*/ZT_VehCtrl_18B_B./*@>280c9*/VCU_BMS./*@>280c6*/Data[0];

        flexcan_data_info_t txInfo = {
            .msg_id_type = FLEXCAN_MSG_ID_STD,
            .data_length = /*@>28116*/ZT_VehCtrl_18B_B./*@>28129*/VCU_BMS./*@>28126*/Length,
            .is_remote = false
        };

        FLEXCAN_DRV_AbortTransfer(0, 14);
        FLEXCAN_DRV_ConfigTxMb(0, 14, &txInfo, 0x160);

            FLEXCAN_DRV_Send(0, 14, &txInfo, 0x160, data);
    }

 
   
  
/*@]*/    /* {S!d2400}DataStoreWrite: '<S172>/Data Store Write' incorporates:
 *  Constant: '<S172>/Constant2'
 *  DataStoreRead: '<S172>/Data Store Read'
 *  Sum: '<S172>/Add'
 */
    /*@>1d688*/Cnt_BMS_OUT/*@>2afaf*/++;
}
/* {E!d2207}End of Outputs for SubSystem: '<S6>/BMS' */

/* {S!d2209}Outputs for Triggered SubSystem: '<S6>/BRS' incorporates:
 *  TriggerPort: '<S173>/Trigger'
 */
/*@>1d3fd*/zcEvent/*@>aef2*/ = /*@[25a1e*/rt_ZCFcn(/*@>1d3fb*/RISING_ZERO_CROSSING,&/*@>233e1*/ZT_VehCtrl_18B_PrevZCX./*@>2b7fb*/BRS_Trig_ZCE,
(/*@>1ecd4*/(real_T)/*@>1d3f6*/rtb_PulseGenerator))/*@]*/;
/*@>aef5*/if (/*@>1d3ff*/zcEvent/*@>aef4*/ != /*@>1d401*/NO_ZCEVENT) {
    /* {S!d2402}DataTypeConversion: '<S173>/Data Type Conversion3' incorporates:
 *  DataStoreRead: '<S173>/Data Store Read1'
 */
    /*@>22eb6*/ZT_VehCtrl_18B_B./*@>2b753*/DataTypeConversion3/*@>d6d9*/ = /*@>1d68a*/Cnt_BRS_OUT;
    /* {S!d2404}DataStoreRead: '<S173>/Data Store Read4' */
    /*@>22ec8*/ZT_VehCtrl_18B_B./*@>2b756*/DataStoreRead4_n/*@>d6db*/ = /*@>1d68e*/OnOffCmd;
    /* {S!d2406}S-Function (scanpack): '<S173>/VCU2BRS' */
/*@[25a27*/                    /* S-Function (scanpack): '<S173>/VCU2BRS' */


    /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.ID = 217123239U;
    /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Length = 8U;
    /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Extended = 1U;
    /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Remote = 0;
    
        /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[0] = 0;
        /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[1] = 0;
        /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[2] = 0;
        /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[3] = 0;
        /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[4] = 0;
        /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[5] = 0;
        /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[6] = 0;
        /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[7] = 0;
    
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
        real32_T result = /*@>28161*/ZT_VehCtrl_18B_B./*@>2816e*/DataTypeConversion3;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(255)){
                                packedValue = (uint8_T) 255;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[7]  =                     /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[7] |                     (uint8_T)(packedValue);
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
        real32_T result = /*@>28192*/ZT_VehCtrl_18B_ConstB./*@>2819f*/DataTypeConversion;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint16_T packedValue;
                            if (outValue > (real32_T)(65535)){
                                packedValue = (uint16_T) 65535;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint16_T) 0;
                            }else{
                                packedValue = (uint16_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[2]  =                     /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[2] |                     (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            
            
            
            
            
            
                /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[3]  =                     /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[3] |                     (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
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
        uint32_T result = (uint32_T) (/*@>281c3*/ZT_VehCtrl_18B_B./*@>281d0*/DataStoreRead4_n);

      

             /* no scaling required */ 
        
        packingValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (packingValue > (boolean_T)(1)){
                                packedValue = (uint8_T) 1;
                            }else if (packingValue < (boolean_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (packingValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[5]  =                     /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[5] |                     (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
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
        real32_T result = /*@>281f4*/ZT_VehCtrl_18B_ConstB./*@>28201*/DataTypeConversion1;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint16_T packedValue;
                            if (outValue > (real32_T)(65535)){
                                packedValue = (uint16_T) 65535;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint16_T) 0;
                            }else{
                                packedValue = (uint16_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[0]  =                     /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[0] |                     (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            
            
            
            
            
            
                /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[1]  =                     /*@>28225*/ZT_VehCtrl_18B_B./*@>28232*/VCU2BRS.Data[1] |                     (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >> 8));
    }

    }

        }
  
    }

    }    
 
   
  
/*@]*/    /* {S!d2408}S-Function (fcan_mpc_send): '<S173>/FCAN_Send_ID_0x0CF109A7' */
/*@[25a2a*/                

    {
        uint8_t* data = &/*@<2828b*//*@>28283*/ZT_VehCtrl_18B_B./*@>28295*/VCU2BRS./*@>28292*/Data[0];

        flexcan_data_info_t txInfo = {
            .msg_id_type = FLEXCAN_MSG_ID_EXT,
            .data_length = /*@>282e2*/ZT_VehCtrl_18B_B./*@>282f5*/VCU2BRS./*@>282f2*/Length,
            .is_remote = false
        };

        FLEXCAN_DRV_AbortTransfer(0, 23);
        FLEXCAN_DRV_ConfigTxMb(0, 23, &txInfo, 0x0CF109A7);

            FLEXCAN_DRV_Send(0, 23, &txInfo, 0x0CF109A7, data);
    }

 
   
  
/*@]*/    /* {S!d2410}DataStoreWrite: '<S173>/Data Store Write' incorporates:
 *  Constant: '<S173>/Constant4'
 *  DataStoreRead: '<S173>/Data Store Read'
 *  Sum: '<S173>/Add'
 */
    /*@>1d6b8*/Cnt_BRS_OUT/*@>2afb0*/++;
}
/* {E!d2209}End of Outputs for SubSystem: '<S6>/BRS' */

/* {S!d2211}Outputs for Triggered SubSystem: '<S6>/DCDC' incorporates:
 *  TriggerPort: '<S174>/Trigger'
 */
/*@>1d409*/zcEvent/*@>af4b*/ = /*@[25a2e*/rt_ZCFcn(/*@>1d407*/RISING_ZERO_CROSSING,&/*@>233e7*/ZT_VehCtrl_18B_PrevZCX./*@>2b7fe*/DCDC_Trig_ZCE,
(/*@>1ece5*/(real_T)/*@>1d402*/rtb_PulseGenerator))/*@]*/;
/*@>af4e*/if (/*@>1d40b*/zcEvent/*@>af4d*/ != /*@>1d40d*/NO_ZCEVENT) {
    /* {S!d2412}DataStoreRead: '<S174>/Data Store Read5' */
    /*@>22eec*/ZT_VehCtrl_18B_B./*@>2b75f*/DataStoreRead5_j/*@>d726*/ = /*@>1d6ba*/VCU_DCDC1_En;
    /* {S!d2414}S-Function (scanpack): '<S174>/VCU_DCDC1' */
/*@[25a34*/                    /* S-Function (scanpack): '<S174>/VCU_DCDC1' */


    /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.ID = 402690000U;
    /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Length = 8U;
    /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Extended = 1U;
    /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Remote = 0;
    
        /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[0] = 0;
        /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[1] = 0;
        /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[2] = 0;
        /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[3] = 0;
        /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[4] = 0;
        /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[5] = 0;
        /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[6] = 0;
        /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[7] = 0;
    
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
        real32_T result = /*@>2832d*/ZT_VehCtrl_18B_B./*@>2833a*/DataStoreRead5_j;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(3)){
                                packedValue = (uint8_T) 3;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[0]  =                     /*@>2835e*/ZT_VehCtrl_18B_B./*@>2836b*/VCU_DCDC1.Data[0] |                     (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
    }

    }

        }
  
    }

    }    
 
   
  
/*@]*/    /* {S!d2416}S-Function (fcan_mpc_send): '<S174>/FCAN_Send_ID_0x18008FD0' */
/*@[25a37*/                

    {
        uint8_t* data = &/*@<283c4*//*@>283bc*/ZT_VehCtrl_18B_B./*@>283ce*/VCU_DCDC1./*@>283cb*/Data[0];

        flexcan_data_info_t txInfo = {
            .msg_id_type = FLEXCAN_MSG_ID_EXT,
            .data_length = /*@>2841b*/ZT_VehCtrl_18B_B./*@>2842e*/VCU_DCDC1./*@>2842b*/Length,
            .is_remote = false
        };

        FLEXCAN_DRV_AbortTransfer(1, 47);
        FLEXCAN_DRV_ConfigTxMb(1, 47, &txInfo, 0x18008FD0);

            FLEXCAN_DRV_Send(1, 47, &txInfo, 0x18008FD0, data);
    }

 
   
  
/*@]*/    /* {S!d2418}DataStoreWrite: '<S174>/Data Store Write' incorporates:
 *  Constant: '<S174>/Constant'
 *  DataStoreRead: '<S174>/Data Store Read'
 *  Sum: '<S174>/Add'
 */
    /*@>1d6db*/Cnt_DCDC_OUT/*@>2afb1*/++;
}
/* {E!d2211}End of Outputs for SubSystem: '<S6>/DCDC' */

/* {S!d2213}Outputs for Triggered SubSystem: '<S6>/HVC' incorporates:
 *  TriggerPort: '<S176>/Trigger'
 */
/*@>1d415*/zcEvent/*@>afa4*/ = /*@[25a3b*/rt_ZCFcn(/*@>1d413*/RISING_ZERO_CROSSING,&/*@>233ed*/ZT_VehCtrl_18B_PrevZCX./*@>2b801*/HVC_Trig_ZCE,
(/*@>1ecf4*/(real_T)/*@>1d40e*/rtb_PulseGenerator))/*@]*/;
/*@>afa7*/if (/*@>1d417*/zcEvent/*@>afa6*/ != /*@>1d419*/NO_ZCEVENT) {
    /* {S!d2420}DataStoreRead: '<S176>/Data Store Read6' */
    /*@>22f22*/ZT_VehCtrl_18B_B./*@>2b768*/DataStoreRead6_b/*@>d765*/ = /*@>1d6dd*/EDrv1_PowOnCmd;
    /* {S!d2422}DataStoreRead: '<S176>/Data Store Read7' */
    /*@>22f46*/ZT_VehCtrl_18B_B./*@>2b76b*/DataStoreRead7_d/*@>d767*/ = /*@>1d6e1*/EDrv2_PowOnCmd;
    /* {S!d2424}DataTypeConversion: '<S176>/Data Type Conversion15' incorporates:
 *  DataStoreRead: '<S176>/Data Store Read'
 */
    /*@>22f58*/ZT_VehCtrl_18B_B./*@>2b76e*/DataTypeConversion15/*@>d76c*/ = /*@>1d6e5*/Cnt_HVC_OUT;
    /* {S!d2426}DataStoreRead: '<S176>/Data Store Read9' */
    /*@>22f64*/ZT_VehCtrl_18B_B./*@>2b774*/DataStoreRead9_h/*@>d76e*/ = /*@>1d6e9*/PTC_PowOnCmd;
    /* {S!d2428}DataStoreRead: '<S176>/Data Store Read8' */
    /*@>22f70*/ZT_VehCtrl_18B_B./*@>2b77a*/DataStoreRead8_c/*@>d770*/ = /*@>1d6ed*/PaxAC_PowOnCmd;
    /* {S!d2430}S-Function (scanpack): '<S176>/Ctrl_HVC' */
/*@[25a45*/                    /* S-Function (scanpack): '<S176>/Ctrl_HVC' */


    /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.ID = 402694405U;
    /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Length = 8U;
    /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Extended = 1U;
    /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Remote = 0;
    
        /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[0] = 0;
        /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[1] = 0;
        /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[2] = 0;
        /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[3] = 0;
        /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[4] = 0;
        /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[5] = 0;
        /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[6] = 0;
        /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[7] = 0;
    
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
        uint32_T result = (uint32_T) (/*@>28466*/ZT_VehCtrl_18B_B./*@>28473*/DataStoreRead6_b);

      

             /* no scaling required */ 
        
        packingValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (packingValue > (boolean_T)(1)){
                                packedValue = (uint8_T) 1;
                            }else if (packingValue < (boolean_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (packingValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[0]  =                     /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[0] |                     (uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U));
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
        uint32_T result = (uint32_T) (/*@>28497*/ZT_VehCtrl_18B_B./*@>284a4*/DataStoreRead7_d);

      

             /* no scaling required */ 
        
        packingValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (packingValue > (boolean_T)(1)){
                                packedValue = (uint8_T) 1;
                            }else if (packingValue < (boolean_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (packingValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[0]  =                     /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[0] |                     (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
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
        real32_T result = /*@>284c8*/ZT_VehCtrl_18B_B./*@>284d5*/DataTypeConversion15;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(15)){
                                packedValue = (uint8_T) 15;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[7]  =                     /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[7] |                     (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0xFU) << 4));
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
        uint32_T result = (uint32_T) (/*@>284f9*/ZT_VehCtrl_18B_B./*@>28506*/DataStoreRead9_h);

      

             /* no scaling required */ 
        
        packingValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (packingValue > (boolean_T)(1)){
                                packedValue = (uint8_T) 1;
                            }else if (packingValue < (boolean_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (packingValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[0]  =                     /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[0] |                     (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 6));
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
        uint32_T result = (uint32_T) (/*@>2852a*/ZT_VehCtrl_18B_B./*@>28537*/DataStoreRead8_c);

      

             /* no scaling required */ 
        
        packingValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (packingValue > (boolean_T)(1)){
                                packedValue = (uint8_T) 1;
                            }else if (packingValue < (boolean_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (packingValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[0]  =                     /*@>2855b*/ZT_VehCtrl_18B_B./*@>28568*/Ctrl_HVC.Data[0] |                     (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
    }

    }

        }

    }

    }    
 
   
  
/*@]*/    /* {S!d2432}S-Function (fcan_mpc_send): '<S176>/FCAN_Send_ID_0x1800A105' */
/*@[25a48*/                

    {
        uint8_t* data = &/*@<285c1*//*@>285b9*/ZT_VehCtrl_18B_B./*@>285cb*/Ctrl_HVC./*@>285c8*/Data[0];

        flexcan_data_info_t txInfo = {
            .msg_id_type = FLEXCAN_MSG_ID_EXT,
            .data_length = /*@>28618*/ZT_VehCtrl_18B_B./*@>2862b*/Ctrl_HVC./*@>28628*/Length,
            .is_remote = false
        };

        FLEXCAN_DRV_AbortTransfer(1, 48);
        FLEXCAN_DRV_ConfigTxMb(1, 48, &txInfo, 0x1800A105);

            FLEXCAN_DRV_Send(1, 48, &txInfo, 0x1800A105, data);
    }

 
   
  
/*@]*/    /* {S!d2434}DataStoreWrite: '<S176>/Data Store Write1' incorporates:
 *  Constant: '<S176>/Constant6'
 *  DataStoreRead: '<S176>/Data Store Read1'
 *  Sum: '<S176>/Add1'
 */
    /*@>1d71a*/Cnt_HVC_OUT/*@>2afb3*/++;
}
/* {E!d2213}End of Outputs for SubSystem: '<S6>/HVC' */

/* {S!d2215}Outputs for Triggered SubSystem: '<S6>/PDU' incorporates:
 *  TriggerPort: '<S182>/Trigger'
 */
/*@>1d421*/zcEvent/*@>affd*/ = /*@[25a4c*/rt_ZCFcn(/*@>1d41f*/RISING_ZERO_CROSSING,&/*@>233f3*/ZT_VehCtrl_18B_PrevZCX./*@>2b804*/PDU_Trig_ZCE,
(/*@>1ed06*/(real_T)/*@>1d41a*/rtb_PulseGenerator))/*@]*/;
/*@>b000*/if (/*@>1d423*/zcEvent/*@>afff*/ != /*@>1d425*/NO_ZCEVENT) {
    /* {S!d2436}DataStoreRead: '<S182>/Data Store Read9' */
    /*@>22f5e*/ZT_VehCtrl_18B_B./*@>2b771*/DataStoreRead9/*@>d7c6*/ = /*@>1d71c*/VCU_DCCpstRlyCtl;
    /* {S!d2438}DataStoreRead: '<S182>/Data Store Read6' */
    /*@>22f6a*/ZT_VehCtrl_18B_B./*@>2b777*/DataStoreRead6/*@>d7c8*/ = /*@>1d720*/VCU_HVACRlyCtl;
    /* {S!d2440}DataStoreRead: '<S182>/Data Store Read8' */
    /*@>22f76*/ZT_VehCtrl_18B_B./*@>2b77d*/DataStoreRead8/*@>d7ca*/ = /*@>1d724*/VCU_HghVtgCnt;
    /* {S!d2442}DataTypeConversion: '<S182>/Data Type Conversion' incorporates:
 *  DataStoreRead: '<S182>/Data Store Read1'
 */
    /*@>22fa6*/ZT_VehCtrl_18B_B./*@>2b783*/DataTypeConversion_m/*@>d7cf*/ = /*@>1d728*/Cnt_PDU_OUT;
    /* {S!d2444}DataStoreRead: '<S182>/Data Store Read7' */
    /*@>22fc4*/ZT_VehCtrl_18B_B./*@>2b786*/DataStoreRead7/*@>d7d1*/ = /*@>1d72c*/VCU_PTCRlyCtl;
    /* {S!d2446}DataStoreRead: '<S182>/Data Store Read5' */
    /*@>22fd6*/ZT_VehCtrl_18B_B./*@>2b789*/DataStoreRead5/*@>d7d3*/ = /*@>1d730*/VCU_ShrRlyCtl;
    /* {S!d2448}S-Function (scanpack): '<S182>/VCU_PDU' */
/*@[25a57*/                    /* S-Function (scanpack): '<S182>/VCU_PDU' */


    /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.ID = 217206843U;
    /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Length = 8U;
    /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Extended = 1U;
    /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Remote = 0;
    
        /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[0] = 0;
        /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[1] = 0;
        /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[2] = 0;
        /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[3] = 0;
        /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[4] = 0;
        /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[5] = 0;
        /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[6] = 0;
        /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[7] = 0;
    
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
        real32_T result = /*@>28663*/ZT_VehCtrl_18B_B./*@>28670*/DataStoreRead9;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(3)){
                                packedValue = (uint8_T) 3;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[5]  =                     /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[5] |                     (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
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
        real32_T result = /*@>28694*/ZT_VehCtrl_18B_B./*@>286a1*/DataStoreRead6;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(3)){
                                packedValue = (uint8_T) 3;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[0]  =                     /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[0] |                     (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U) << 6));
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
        real32_T result = /*@>286c5*/ZT_VehCtrl_18B_B./*@>286d2*/DataStoreRead8;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(3)){
                                packedValue = (uint8_T) 3;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[2]  =                     /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[2] |                     (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
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
        real32_T result = /*@>286f6*/ZT_VehCtrl_18B_B./*@>28703*/DataTypeConversion_m;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(255)){
                                packedValue = (uint8_T) 255;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[7]  =                     /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[7] |                     (uint8_T)(packedValue);
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
        real32_T result = /*@>28727*/ZT_VehCtrl_18B_B./*@>28734*/DataStoreRead7;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(3)){
                                packedValue = (uint8_T) 3;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[1]  =                     /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[1] |                     (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
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
        real32_T result = /*@>28758*/ZT_VehCtrl_18B_B./*@>28765*/DataStoreRead5;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(3)){
                                packedValue = (uint8_T) 3;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[0]  =                     /*@>28789*/ZT_VehCtrl_18B_B./*@>28796*/VCU_PDU.Data[0] |                     (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
    }

    }

        }
  
    }

    }    
 
   
  
/*@]*/    /* {S!d2450}S-Function (fcan_mpc_send): '<S182>/FCAN_Send_ID_0x0CF2503B' */
/*@[25a5a*/                

    {
        uint8_t* data = &/*@<287ef*//*@>287e7*/ZT_VehCtrl_18B_B./*@>287f9*/VCU_PDU./*@>287f6*/Data[0];

        flexcan_data_info_t txInfo = {
            .msg_id_type = FLEXCAN_MSG_ID_EXT,
            .data_length = /*@>28846*/ZT_VehCtrl_18B_B./*@>28859*/VCU_PDU./*@>28856*/Length,
            .is_remote = false
        };

        FLEXCAN_DRV_AbortTransfer(1, 52);
        FLEXCAN_DRV_ConfigTxMb(1, 52, &txInfo, 0x0CF2503B);

            FLEXCAN_DRV_Send(1, 52, &txInfo, 0x0CF2503B, data);
    }

 
   
  
/*@]*/    /* {S!d2452}DataStoreWrite: '<S182>/Data Store Write' incorporates:
 *  Constant: '<S182>/Constant'
 *  DataStoreRead: '<S182>/Data Store Read'
 *  Sum: '<S182>/Add'
 */
    /*@>1d760*/Cnt_PDU_OUT/*@>2afb5*/++;
}
/* {E!d2215}End of Outputs for SubSystem: '<S6>/PDU' */

/* {S!d2217}Outputs for Triggered SubSystem: '<S6>/TWV' incorporates:
 *  TriggerPort: '<S185>/Trigger'
 */
/*@>1d42d*/zcEvent/*@>b056*/ = /*@[25a5e*/rt_ZCFcn(/*@>1d42b*/RISING_ZERO_CROSSING,&/*@>233f9*/ZT_VehCtrl_18B_PrevZCX./*@>2b807*/TWV_Trig_ZCE,
(/*@>1ed16*/(real_T)/*@>1d426*/rtb_PulseGenerator))/*@]*/;
/*@>b059*/if (/*@>1d42f*/zcEvent/*@>b058*/ != /*@>1d431*/NO_ZCEVENT) {
    /* {S!d2454}DataStoreRead: '<S185>/Data Store Read10' */
    /*@>22fa0*/ZT_VehCtrl_18B_B./*@>2b780*/DataStoreRead10/*@>d82e*/ = /*@>1d762*/TWV_ON_Ctr;
    /* {S!d2456}S-Function (scanpack): '<S185>/VCU_TWV' */
/*@[25a64*/                    /* S-Function (scanpack): '<S185>/VCU_TWV' */


    /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.ID = 217933600U;
    /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Length = 8U;
    /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Extended = 1U;
    /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Remote = 0;
    
        /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[0] = 0;
        /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[1] = 0;
        /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[2] = 0;
        /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[3] = 0;
        /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[4] = 0;
        /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[5] = 0;
        /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[6] = 0;
        /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[7] = 0;
    
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
        real32_T result = /*@>28891*/ZT_VehCtrl_18B_B./*@>2889e*/DataStoreRead10;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real32_T)(127)){
                                packedValue = (uint8_T) 127;
                            }else if (outValue < (real32_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[0]  =                     /*@>288c2*/ZT_VehCtrl_18B_B./*@>288cf*/VCU_TWV.Data[0] |                     (uint8_T)((uint8_T)(packedValue & (uint8_T)0x7FU));
    }

    }

        }
  
    }

    }    
 
   
  
/*@]*/    /* {S!d2458}S-Function (fcan_mpc_send): '<S185>/FCAN_Send_ID_0x18FF25EF' */
/*@[25a67*/                

    {
        uint8_t* data = &/*@<28928*//*@>28920*/ZT_VehCtrl_18B_B./*@>28932*/VCU_TWV./*@>2892f*/Data[0];

        flexcan_data_info_t txInfo = {
            .msg_id_type = FLEXCAN_MSG_ID_EXT,
            .data_length = /*@>2897f*/ZT_VehCtrl_18B_B./*@>28992*/VCU_TWV./*@>2898f*/Length,
            .is_remote = false
        };

        FLEXCAN_DRV_AbortTransfer(1, 55);
        FLEXCAN_DRV_ConfigTxMb(1, 55, &txInfo, 0x18FF25EF);

            FLEXCAN_DRV_Send(1, 55, &txInfo, 0x18FF25EF, data);
    }

 
   
  
/*@]*/    /* {S!d2460}DataStoreWrite: '<S185>/Data Store Write' incorporates:
 *  Constant: '<S185>/Constant'
 *  DataStoreRead: '<S185>/Data Store Read'
 *  Sum: '<S185>/Add'
 */
    /*@>1d783*/Cnt_TWV_OUT/*@>2afb4*/++;
}
/* {E!d2217}End of Outputs for SubSystem: '<S6>/TWV' */

/* {S!d2219}Outputs for Triggered SubSystem: '<S6>/TMS' incorporates:
 *  TriggerPort: '<S184>/Trigger'
 */
/*@>1d439*/zcEvent/*@>b0af*/ = /*@[25a6b*/rt_ZCFcn(/*@>1d437*/RISING_ZERO_CROSSING,&/*@>233ff*/ZT_VehCtrl_18B_PrevZCX./*@>2b80a*/TMS_Trig_ZCE,
(/*@>1ed29*/(real_T)/*@>1d432*/rtb_PulseGenerator2))/*@]*/;
/*@>b0b2*/if (/*@>1d43b*/zcEvent/*@>b0b1*/ != /*@>1d43d*/NO_ZCEVENT) {
    /* {S!d2462}DataTypeConversion: '<S184>/Data Type Conversion' incorporates:
 *  DataStoreRead: '<S184>/Data Store Read3'
 */
    /*@>22fdc*/ZT_VehCtrl_18B_B./*@>2b78c*/DataTypeConversion/*@>d870*/ = /*@>1d785*/VCU_FanSpeedLvl_num;
    /* {S!d2464}DataStoreRead: '<S184>/Data Store Read1' */
    /*@>23018*/ZT_VehCtrl_18B_B./*@>2b78f*/DataStoreRead1/*@>d872*/ = /*@>1d789*/Cnt_TMS_OUT;
    /* {S!d2466}S-Function (scanpack): '<S184>/TMS' */
/*@[25a72*/                    /* S-Function (scanpack): '<S184>/TMS' */


    /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.ID = 419427143U;
    /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Length = 8U;
    /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Extended = 1U;
    /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Remote = 0;
    
        /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[0] = 0;
        /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[1] = 0;
        /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[2] = 0;
        /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[3] = 0;
        /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[4] = 0;
        /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[5] = 0;
        /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[6] = 0;
        /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[7] = 0;
    
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
        real64_T result = /*@>289ca*/ZT_VehCtrl_18B_B./*@>289d7*/DataTypeConversion;



             /* no scaling required */ 
        
        outValue = result;
    }

                        {

                    uint8_T packedValue;
                            if (outValue > (real64_T)(255)){
                                packedValue = (uint8_T) 255;
                            }else if (outValue < (real64_T)(0)){
                                packedValue = (uint8_T) 0;
                            }else{
                                packedValue = (uint8_T) (outValue);
                            }
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[0]  =                     /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[0] |                     (uint8_T)(packedValue);
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
        uint32_T result = (uint32_T) (/*@>289fb*/ZT_VehCtrl_18B_B./*@>28a08*/DataStoreRead1);

      

             /* no scaling required */ 
        
        packingValue = result;
    }

                        {

                    uint8_T packedValue;
                            packedValue = (uint8_T) (packingValue);
                        {       
            
            {

        
        
        
            
            
            
            
            
            
                /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[7]  =                     /*@>28a2c*/ZT_VehCtrl_18B_B./*@>28a39*/TMS.Data[7] |                     (uint8_T)(packedValue);
    }

    }

        }

    }

    }    
 
   
  
/*@]*/    /* {S!d2468}S-Function (fcan_mpc_send): '<S184>/FCAN_Send_ID_0x18FFF347' */
/*@[25a75*/                

    {
        uint8_t* data = &/*@<28a92*//*@>28a8a*/ZT_VehCtrl_18B_B./*@>28a9c*/TMS./*@>28a99*/Data[0];

        flexcan_data_info_t txInfo = {
            .msg_id_type = FLEXCAN_MSG_ID_EXT,
            .data_length = /*@>28ae9*/ZT_VehCtrl_18B_B./*@>28afc*/TMS./*@>28af9*/Length,
            .is_remote = false
        };

        FLEXCAN_DRV_AbortTransfer(0, 15);
        FLEXCAN_DRV_ConfigTxMb(0, 15, &txInfo, 0x18FFF347);

            FLEXCAN_DRV_Send(0, 15, &txInfo, 0x18FFF347, data);
    }

 
   
  
/*@]*/    /* {S!d2470}DataStoreWrite: '<S184>/Data Store Write' incorporates:
 *  Constant: '<S184>/Constant'
 *  DataStoreRead: '<S184>/Data Store Read'
 *  Sum: '<S184>/Add'
 */
    /*@>1d7ad*/Cnt_TMS_OUT/*@>2afb6*/++;
}
/* {E!d2219}End of Outputs for SubSystem: '<S6>/TMS' */

/* {S!d2472}S-Function (etimer_mpc_preload): '<S197>/eTimer_Preload2' */
/*@[25a79*/                
        
        ETIMER_DRV_ReloadOnCompare(0, 5, /*@>28b34*/ZT_VehCtrl_18B_ConstB./*@>28b41*/DataTypeConversion_b, true); //rolloverEnabled
        ETIMER_DRV_SetCompareThresholdBuffered(0, 5, /*@>28b65*/ZT_VehCtrl_18B_B./*@>28b72*/DataTypeConversion1, /*@>28b96*/ZT_VehCtrl_18B_B./*@>28ba3*/DataTypeConversion2);
 
   
  
/*@]*//* {S!d2474}S-Function (etimer_mpc_start_stop_timer): '<S197>/eTimer_Start_Stop_Timer1' */
/*@[25a7a*/                            ETIMER_DRV_StartTimerChannels(0, ETIMER_ENABLE_CH5);
 
   
  
/*@]*//* {S!d2476}S-Function (etimer_mpc_preload): '<S196>/eTimer_Preload2' */
/*@[25a7e*/                
        
        ETIMER_DRV_ReloadOnCompare(2, 2, /*@>28bef*/ZT_VehCtrl_18B_ConstB./*@>28bfc*/DataTypeConversion_p, true); //rolloverEnabled
        ETIMER_DRV_SetCompareThresholdBuffered(2, 2, /*@>28c20*/ZT_VehCtrl_18B_B./*@>28c2d*/DataTypeConversion1_n, /*@>28c51*/ZT_VehCtrl_18B_B./*@>28c5e*/DataTypeConversion2_i);
 
   
  
/*@]*//* {S!d2478}S-Function (etimer_mpc_start_stop_timer): '<S196>/eTimer_Start_Stop_Timer1' */
/*@[25a7f*/                            ETIMER_DRV_StartTimerChannels(2, ETIMER_ENABLE_CH2);
 
   
  
/*@]*//* {S!d2480}S-Function (etimer_mpc_preload): '<S195>/eTimer_Preload2' */
/*@[25a83*/                
        
        ETIMER_DRV_ReloadOnCompare(0, 3, /*@>28caa*/ZT_VehCtrl_18B_ConstB./*@>28cb7*/DataTypeConversion_h, true); //rolloverEnabled
        ETIMER_DRV_SetCompareThresholdBuffered(0, 3, /*@>28cdb*/ZT_VehCtrl_18B_B./*@>28ce8*/DataTypeConversion1_p, /*@>28d0c*/ZT_VehCtrl_18B_B./*@>28d19*/DataTypeConversion2_p);
 
   
  
/*@]*//* {S!d2482}S-Function (etimer_mpc_start_stop_timer): '<S195>/eTimer_Start_Stop_Timer1' */
/*@[25a84*/                            ETIMER_DRV_StartTimerChannels(0, ETIMER_ENABLE_CH3);
 
   
  
/*@]*//* {S!d2484}S-Function (gpio_mpc_output): '<S191>/HS001' */
/*@[25a86*/                            /* Data Signal Update */
            if (/*@>28d65*/ZT_VehCtrl_18B_B./*@>28d72*/DataStoreRead) {
                PINS_DRV_SetPins(PTF, (1 << 5));
            } else {
                PINS_DRV_ClearPins(PTF, (1 << 5));
            }
 
   
  
/*@]*//* {S!d2486}S-Function (gpio_mpc_output): '<S191>/HS007' */
/*@[25a88*/                            /* Data Signal Update */
            if (/*@>28daa*/ZT_VehCtrl_18B_B./*@>28db7*/DataStoreRead2) {
                PINS_DRV_SetPins(PTF, (1 << 7));
            } else {
                PINS_DRV_ClearPins(PTF, (1 << 7));
            }
 
   
  
/*@]*//* {S!d2488}S-Function (gpio_mpc_output): '<S191>/HS002 ' */
/*@[25a8a*/                            /* Data Signal Update */
            if (/*@>28def*/ZT_VehCtrl_18B_B./*@>28dfc*/DataStoreRead4) {
                PINS_DRV_SetPins(PTF, (1 << 4));
            } else {
                PINS_DRV_ClearPins(PTF, (1 << 4));
            }
 
   
  
/*@]*//* {S!d2490}S-Function (gpio_mpc_output): '<S191>/HS003' */
/*@[25a8c*/                            /* Data Signal Update */
            if (/*@>28e34*/ZT_VehCtrl_18B_B./*@>28e41*/DataStoreRead5_i) {
                PINS_DRV_SetPins(PTF, (1 << 3));
            } else {
                PINS_DRV_ClearPins(PTF, (1 << 3));
            }
 
   
  
/*@]*//* {S!d2492}S-Function (gpio_mpc_output): '<S191>/HS004' */
/*@[25a8e*/                            /* Data Signal Update */
            if (/*@>28e79*/ZT_VehCtrl_18B_B./*@>28e86*/DataStoreRead6_n) {
                PINS_DRV_SetPins(PTB, (1 << 6));
            } else {
                PINS_DRV_ClearPins(PTB, (1 << 6));
            }
 
   
  
/*@]*//* {S!d2494}S-Function (gpio_mpc_output): '<S191>/HS005' */
/*@[25a90*/                            /* Data Signal Update */
            if (/*@>28ebe*/ZT_VehCtrl_18B_B./*@>28ecb*/DataStoreRead7_a) {
                PINS_DRV_SetPins(PTA, (1 << 12));
            } else {
                PINS_DRV_ClearPins(PTA, (1 << 12));
            }
 
   
  
/*@]*//* {S!d2496}DataStoreRead: '<S191>/Data Store Read9' */
/*@>23084*/ZT_VehCtrl_18B_B./*@>2b792*/DataStoreRead9_g/*@>b2f8*/ = /*@[25f60*/HS010/*@]*/;
/* {S!d2498}S-Function (gpio_mpc_output): '<S191>/HS010' */
/*@[25a92*/                            /* Data Signal Update */
            if (/*@>28f03*/ZT_VehCtrl_18B_B./*@>28f10*/DataStoreRead9_g) {
                PINS_DRV_SetPins(PTF, (1 << 9));
            } else {
                PINS_DRV_ClearPins(PTF, (1 << 9));
            }
 
   
  
/*@]*//* {S!d2500}S-Function (gpio_mpc_output): '<S193>/LS_EN' incorporates:
 *  Constant: '<S193>/Constant'
 */
/*@[25a94*/                            /* Data Signal Update */
            if (true) {
                PINS_DRV_SetPins(PTA, (1 << 2));
            } else {
                PINS_DRV_ClearPins(PTA, (1 << 2));
            }
 
   
  
/*@]*//* {S!d2502}S-Function (gpio_mpc_output): '<S193>/LS_rst2' incorporates:
 *  Constant: '<S193>/Constant1'
 */
/*@[25a96*/                            /* Data Signal Update */
            if (true) {
                PINS_DRV_SetPins(PTA, (1 << 1));
            } else {
                PINS_DRV_ClearPins(PTA, (1 << 1));
            }
 
   
  
/*@]*//* {S!d2504}S-Function (gpio_mpc_output): '<S193>/LS_rst1' incorporates:
 *  Constant: '<S193>/Constant2'
 */
/*@[25a98*/                            /* Data Signal Update */
            if (true) {
                PINS_DRV_SetPins(PTC, (1 << 10));
            } else {
                PINS_DRV_ClearPins(PTC, (1 << 10));
            }
 
   
  
/*@]*//* {S!d2506}Logic: '<S193>/Logical Operator' incorporates:
 *  Constant: '<S205>/Constant'
 *  DataStoreRead: '<S193>/Data Store Read'
 *  DataStoreRead: '<S193>/Data Store Read1'
 *  RelationalOperator: '<S205>/Compare'
 */
/*@>1d51d*/rtb_LogicalOperator/*@>b3fa*/ = ((/*@>1db9a*/VCU_Mode/*@>14a0e*/ == /*@>1dc33*/2)/*@>b3f9*/ && /*@>234ce*/ZT_VehCtrl_18B_DW./*@>2b82b*/SPI0_CS);
/* {S!d2221}Outputs for Enabled SubSystem: '<S193>/LS_CTRL' incorporates:
 *  EnablePort: '<S206>/Enable'
 */
/* {S!d2522}Logic: '<S193>/Logical Operator1' */
/*@>b41e*/if (!/*@<14a15*//*@>1db9c*/rtb_LogicalOperator) {
    /* {S!d2508}S-Function (spi_mpc_master_transfer): '<S206>/SPI_Master_Transfer_To1' */
/*@[25a9b*/                            {
                DSPI_UpdateCS(0, 5);
                    DSPI_MasterTransfer(0, &/*@<28f72*//*@>28f6b*/ZT_VehCtrl_18B_B./*@>28f77*/VectorConcatenate1_l[0],
                    &/*@<28fa3*//*@>28f9c*/ZT_VehCtrl_18B_B./*@>28fa8*/SPI_Master_Transfer_To1_j[0], 1);
            }
 
   
  
/*@]*/    /* {S!d2222}Outputs for Atomic SubSystem: '<S206>/If Action Subsystem1' */
    /* {S!d2510}Switch: '<S208>/Switch' incorporates:
 *  Constant: '<S208>/Constant1'
 *  Constant: '<S208>/Constant2'
 *  DataStoreRead: '<S208>/Data Store Read6'
 */
    /*@>20225*/if (/*@>1f5dd*/LS002) {
        /*@>20229*/tmp_0/*@>20228*/ = /*@>2aeb2*/128U;
    } else {
        /*@>201e6*/tmp_0/*@>201e8*/ = /*@>2aeaf*/64U;
    }
    /* {E!d2510}End of Switch: '<S208>/Switch' */

    /* {S!d2512}Switch: '<S208>/Switch1' incorporates:
 *  Constant: '<S208>/Constant3'
 *  Constant: '<S208>/Constant4'
 *  DataStoreRead: '<S208>/Data Store Read5'
 */
    /*@>2022a*/if (/*@>1f5e3*/LS001) {
        /*@>2022e*/tmp_1/*@>2022d*/ = /*@>2aebe*/32U;
    } else {
        /*@>201ee*/tmp_1/*@>201f0*/ = /*@>2aebb*/16U;
    }
    /* {E!d2512}End of Switch: '<S208>/Switch1' */

    /* {S!d2514}Switch: '<S208>/Switch2' incorporates:
 *  Constant: '<S208>/Constant5'
 *  Constant: '<S208>/Constant6'
 *  DataStoreRead: '<S208>/Data Store Read4'
 */
    /*@>20234*/if (/*@>1f5e9*/LS011) {
        /*@>20238*/tmp_2/*@>20237*/ = /*@>2aeca*/8U;
    } else {
        /*@>201f6*/tmp_2/*@>201f8*/ = /*@>2aec7*/4U;
    }
    /* {E!d2514}End of Switch: '<S208>/Switch2' */

    /* {S!d2516}Switch: '<S208>/Switch3' incorporates:
 *  Constant: '<S208>/Constant7'
 *  Constant: '<S208>/Constant8'
 *  DataStoreRead: '<S208>/Data Store Read'
 */
    /*@>2023e*/if (/*@>1f5ef*/LS004) {
        /*@>20242*/tmp_3/*@>20241*/ = /*@>2aed6*/2U;
    } else {
        /*@>201fe*/tmp_3/*@>20200*/ = /*@>2aed3*/1U;
    }
    /* {E!d2516}End of Switch: '<S208>/Switch3' */

    /* {S!d2518}DataTypeConversion: '<S208>/Data Type Conversion1' incorporates:
 *  Sum: '<S208>/Add'
 */
    /*@>230c0*/ZT_VehCtrl_18B_B./*@>2b79b*/VectorConcatenate1_l/*@>fd23*/[/*@>1db7e*/1]/*@>da51*/ = /*@>1ee3d*/(uint8_T)(((/*@>1ee34*/(uint32_T)/*@>201ea*/tmp_0/*@>1e75b*/ + /*@>201f2*/tmp_1)/*@>1e74e*/ + /*@>201fa*/tmp_2)/*@>1e741*/ + /*@>20202*/tmp_3);
    /* {E!d2222}End of Outputs for SubSystem: '<S206>/If Action Subsystem1' */

    /* {S!d2520}SignalConversion: '<S206>/ConcatBufferAtVector Concatenate1In1' */
    /*@>230c6*/ZT_VehCtrl_18B_B./*@>2b79e*/VectorConcatenate1_l/*@>fd30*/[/*@>1db7f*/0]/*@>d8bb*/ = /*@>2335b*/ZT_VehCtrl_18B_ConstB./*@>2b7e6*/DataTypeConversion_c;
}
/* {E!d2522}End of Logic: '<S193>/Logical Operator1' */
/* {E!d2221}End of Outputs for SubSystem: '<S193>/LS_CTRL' */

/* {S!d2225}Outputs for Enabled SubSystem: '<S193>/LS_CTRL1' incorporates:
 *  EnablePort: '<S207>/Enable'
 */
/*@>b44b*/if (/*@>1d51f*/rtb_LogicalOperator) {
    /* {S!d2524}S-Function (spi_mpc_master_transfer): '<S207>/SPI_Master_Transfer_To1' */
/*@[25a9e*/                            {
                DSPI_UpdateCS(0, 1);
                    DSPI_MasterTransfer(0, &/*@<28fe8*//*@>28fe1*/ZT_VehCtrl_18B_B./*@>28fed*/VectorConcatenate1[0],
                    &/*@<29019*//*@>29012*/ZT_VehCtrl_18B_B./*@>2901e*/SPI_Master_Transfer_To1[0], 1);
            }
 
   
  
/*@]*/    /* {S!d2226}Outputs for Atomic SubSystem: '<S207>/If Action Subsystem1' */
    /* {S!d2526}Switch: '<S209>/Switch' incorporates:
 *  Constant: '<S209>/Constant1'
 *  Constant: '<S209>/Constant2'
 *  DataStoreRead: '<S209>/Data Store Read6'
 */
    /*@>2022f*/if (/*@>1f5f7*/LS016) {
        /*@>20233*/tmp_0/*@>20232*/ = /*@>2aeb8*/128U;
    } else {
        /*@>20206*/tmp_0/*@>20208*/ = /*@>2aeb5*/64U;
    }
    /* {E!d2526}End of Switch: '<S209>/Switch' */

    /* {S!d2528}Switch: '<S209>/Switch1' incorporates:
 *  Constant: '<S209>/Constant3'
 *  Constant: '<S209>/Constant4'
 *  DataStoreRead: '<S209>/Data Store Read5'
 */
    /*@>20239*/if (/*@>1f5fd*/LS009) {
        /*@>2023d*/tmp_1/*@>2023c*/ = /*@>2aec4*/32U;
    } else {
        /*@>2020e*/tmp_1/*@>20210*/ = /*@>2aec1*/16U;
    }
    /* {E!d2528}End of Switch: '<S209>/Switch1' */

    /* {S!d2530}Switch: '<S209>/Switch2' incorporates:
 *  Constant: '<S209>/Constant5'
 *  Constant: '<S209>/Constant6'
 *  DataStoreRead: '<S209>/Data Store Read4'
 */
    /*@>20243*/if (/*@>1f603*/LS015) {
        /*@>20247*/tmp_2/*@>20246*/ = /*@>2aed0*/8U;
    } else {
        /*@>20216*/tmp_2/*@>20218*/ = /*@>2aecd*/4U;
    }
    /* {E!d2530}End of Switch: '<S209>/Switch2' */

    /* {S!d2532}Switch: '<S209>/Switch3' incorporates:
 *  Constant: '<S209>/Constant7'
 *  Constant: '<S209>/Constant8'
 *  DataStoreRead: '<S209>/Data Store Read'
 */
    /*@>20248*/if (/*@>1f609*/LS014) {
        /*@>2024c*/tmp_3/*@>2024b*/ = /*@>2aefa*/2U;
    } else {
        /*@>2021e*/tmp_3/*@>20220*/ = /*@>2aef7*/1U;
    }
    /* {E!d2532}End of Switch: '<S209>/Switch3' */

    /* {S!d2534}DataTypeConversion: '<S209>/Data Type Conversion1' incorporates:
 *  Sum: '<S209>/Add'
 */
    /*@>230cc*/ZT_VehCtrl_18B_B./*@>2b7a1*/VectorConcatenate1/*@>fd4d*/[/*@>1db80*/1]/*@>da8b*/ = /*@>1ee74*/(uint8_T)(((/*@>1ee6b*/(uint32_T)/*@>2020a*/tmp_0/*@>1e72e*/ + /*@>20212*/tmp_1)/*@>1e721*/ + /*@>2021a*/tmp_2)/*@>1e714*/ + /*@>20222*/tmp_3);
    /* {E!d2226}End of Outputs for SubSystem: '<S207>/If Action Subsystem1' */

    /* {S!d2536}SignalConversion: '<S207>/ConcatBufferAtVector Concatenate1In1' */
    /*@>230d2*/ZT_VehCtrl_18B_B./*@>2b7a4*/VectorConcatenate1/*@>fd5a*/[/*@>1db81*/0]/*@>d8d9*/ = /*@>23361*/ZT_VehCtrl_18B_ConstB./*@>2b7e9*/DataTypeConversion_k;
}
/* {E!d2225}End of Outputs for SubSystem: '<S193>/LS_CTRL1' */

/* {S!d2538}S-Function (gpio_mpc_output): '<S194>/LS_EN1' incorporates:
 *  Constant: '<S194>/Constant1'
 */
/*@[25aa0*/                            /* Data Signal Update */
            if (true) {
                PINS_DRV_SetPins(PTF, (1 << 10));
            } else {
                PINS_DRV_ClearPins(PTF, (1 << 10));
            }
 
   
  
/*@]*//* {S!d2540}S-Function (gpio_mpc_output): '<S194>/LS_rst' incorporates:
 *  Constant: '<S194>/Constant3'
 */
/*@[25aa2*/                            /* Data Signal Update */
            if (true) {
                PINS_DRV_SetPins(PTC, (1 << 14));
            } else {
                PINS_DRV_ClearPins(PTC, (1 << 14));
            }
 
   
  
/*@]*//* {S!d2229}Outputs for Enabled SubSystem: '<S194>/Subsystem' incorporates:
 *  EnablePort: '<S211>/Enable'
 */
/* {S!d2548}Logic: '<S194>/Logical Operator' incorporates:
 *  Constant: '<S210>/Constant'
 *  DataStoreRead: '<S194>/Data Store Read'
 *  DataStoreRead: '<S194>/Data Store Read3'
 *  RelationalOperator: '<S210>/Compare'
 */
/*@>b502*/if ((/*@>1dbb6*/VCU_Mode/*@>14cc4*/ == /*@>1dc44*/2)/*@>14a62*/ && /*@>234d4*/ZT_VehCtrl_18B_DW./*@>2b82e*/SPI3_CS) {
    /* {S!d2542}S-Function (spi_mpc_master_transfer): '<S211>/SPI_Master_Transfer_To2' */
/*@[25aa5*/                            {
                DSPI_UpdateCS(3, 3);
                    DSPI_MasterTransfer(3, &/*@<29086*//*@>2907f*/ZT_VehCtrl_18B_B./*@>2908b*/VectorConcatenate2[0],
                    &/*@<290b7*//*@>290b0*/ZT_VehCtrl_18B_B./*@>290bc*/SPI_Master_Transfer_To2[0], 1);
            }
 
   
  
/*@]*/    /* {S!d2230}Outputs for Atomic SubSystem: '<S211>/¿ØÖÆ' */
    /* {S!d2544}DataTypeConversion: '<S212>/Data Type Conversion' incorporates:
 *  Constant: '<S212>/Constant9'
 *  DataStoreRead: '<S212>/Data Store Read1'
 *  DataStoreRead: '<S212>/Data Store Read2'
 *  Gain: '<S212>/Gain8'
 *  Gain: '<S212>/Gain9'
 *  Sum: '<S212>/Add1'
 */
    /*@>230b4*/ZT_VehCtrl_18B_B./*@>2b795*/VectorConcatenate2/*@>fd8e*/[/*@>1db82*/0]/*@>dacc*/ = /*@>1ed83*/(uint8_T)((((/*@>1ed7d*/(uint32_T)(/*@>1dbb8*/LS012/*@>1e6fe*/ << /*@>1e6fd*/7)/*@>1e6f3*/ << /*@>1e6f2*/1)/*@>1e8e8*/ + (/*@>1ed80*/(uint32_T)/*@>1dbba*/LS007/*@>1e70c*/ << /*@>1e70b*/7))/*@>1e8e9*/ + /*@>1dc4b*/5632U)/*@>1e6cd*/ >> /*@>1e6cc*/7);
    /* {S!d2546}DataTypeConversion: '<S212>/Data Type Conversion1' incorporates:
 *  DataStoreRead: '<S212>/Data Store Read10'
 *  DataStoreRead: '<S212>/Data Store Read5'
 *  DataStoreRead: '<S212>/Data Store Read6'
 *  DataStoreRead: '<S212>/Data Store Read9'
 *  Gain: '<S212>/Gain2'
 *  Gain: '<S212>/Gain3'
 *  Gain: '<S212>/Gain6'
 *  Gain: '<S212>/Gain7'
 *  Sum: '<S212>/Add'
 */
    /*@>1e642*/tmp/*@>1e644*/ = /*@>218cc*/floor((((((/*@>1ed8f*/(real_T)(/*@>1dbbe*/LS013/*@>1e6a1*/ << /*@>1e6a0*/7)/*@>1e694*/ * /*@>1e693*/0.5/*@>14aac*/ + /*@>1ed8b*/(real_T)(/*@>1dbbc*/LS006/*@>1e68e*/ << /*@>1e68d*/7))/*@>14aab*/ + /*@>23349*/ZT_VehCtrl_18B_ConstB./*@>2b7dd*/Gain5)/*@>14aaa*/ + /*@>2334f*/ZT_VehCtrl_18B_ConstB./*@>2b7e0*/Gain4)/*@>14aa9*/ + /*@>1ed95*/(real_T)(/*@>1dbc0*/LS008/*@>1e6b4*/ << /*@>1e6b3*/7)/*@>1e6a7*/ * /*@>1e6a6*/0.0625)/*@>14aa8*/ + /*@>1ed99*/(real_T)(/*@>1dbc2*/LS010/*@>1e6c7*/ << /*@>1e6c6*/7)/*@>1e6ba*/ * /*@>1e6b9*/0.03125)/*@>14aa7*/ + /*@>23355*/ZT_VehCtrl_18B_ConstB./*@>2b7e3*/Gain1);
    /*@>201b2*/if (/*@>218ce*/rtIsNaN(/*@>1e646*/tmp)/*@>1e650*/ || /*@>218d0*/rtIsInf(/*@>1e64b*/tmp)) {
        /*@>201b6*/tmp/*@>201b5*/ = /*@>1e652*/0.0;
    } else {
        /*@>1e653*/tmp/*@>1e655*/ = /*@>218d2*/fmod(/*@>1e657*/tmp, /*@>1e65b*/256.0);
    }
    /*@>230ba*/ZT_VehCtrl_18B_B./*@>2b798*/VectorConcatenate2/*@>fdf2*/[/*@>1db83*/1]/*@>db02*/ = /*@>1edeb*/(uint8_T)(/*@>1e669*/tmp/*@>1e66c*/ < /*@>1e668*/0.0/*@>1e66c*/ ? (int32_T)/*@>1e674*/(uint8_T)-/*@<1e67d*//*@>1e672*/(int8_T)/*@>1e680*/(uint8_T)-/*@<1e670*//*@>1e66d*/tmp : (int32_T)/*@>1e683*/(uint8_T)/*@>1e675*/tmp);
    /* {E!d2546}End of DataTypeConversion: '<S212>/Data Type Conversion1' */
    /* {E!d2230}End of Outputs for SubSystem: '<S211>/¿ØÖÆ' */
}
/* {E!d2548}End of Logic: '<S194>/Logical Operator' */
/* {E!d2229}End of Outputs for SubSystem: '<S194>/Subsystem' */

/* {S!d2550}Chart: '<S2>/Chart1' incorporates:
 *  DataStoreRead: '<S2>/Data Store Read'
 */
/*@>db5f*/if (/*@>234da*/ZT_VehCtrl_18B_DW./*@>2b831*/is_active_c23_ZT_VehCtrl_18B/*@>db5e*/ == /*@>1d846*/0U) {
    /*@>234e6*/ZT_VehCtrl_18B_DW./*@>2b837*/is_active_c23_ZT_VehCtrl_18B/*@>dbc3*/ = /*@>2aed9*/1U;
    /*@>234ec*/ZT_VehCtrl_18B_DW./*@>2b83a*/is_c23_ZT_VehCtrl_18B/*@>dbc7*/ = /*@>1d890*/ZT_VehCtrl_18B_IN_IDLE;
    /*@>1d891*/rtb_PulseGenerator2/*@>dbc9*/ = /*@>2aee8*/0;
} else {
/*@>db61*/    switch (/*@>234e0*/ZT_VehCtrl_18B_DW./*@>2b834*/is_c23_ZT_VehCtrl_18B) {
      case /*@>1d849*/ZT_VehCtrl_18B_IN_CS1:
        /*@>1d85e*/rtb_PulseGenerator2/*@>db82*/ = /*@>2aedf*/1;
        /*@>db7d*/if (/*@>234f2*/ZT_VehCtrl_18B_DW./*@>2b83d*/cnt_j/*@>db86*/ > /*@>1d863*/20.0) {
            /*@>23510*/ZT_VehCtrl_18B_DW./*@>2b849*/is_c23_ZT_VehCtrl_18B/*@>db80*/ = /*@>1d85d*/ZT_VehCtrl_18B_IN_CS5;
            /*@>1d869*/rtb_PulseGenerator2/*@>db91*/ = /*@>2aeee*/2;
            /*@>2353a*/ZT_VehCtrl_18B_DW./*@>2b85b*/cnt_j/*@>db92*/ = /*@>1d86e*/0.0;
        } else {
            /*@>23504*/ZT_VehCtrl_18B_DW./*@>2b846*/cnt_j/*@>2afb7*/++;
        }
        break;
      case /*@>1d84a*/ZT_VehCtrl_18B_IN_CS5:
        /*@>1d872*/rtb_PulseGenerator2/*@>db9e*/ = /*@>2aee2*/2;
        /*@>db99*/if (/*@>234f8*/ZT_VehCtrl_18B_DW./*@>2b840*/cnt_j/*@>dba2*/ > /*@>1d877*/20.0) {
            /*@>23522*/ZT_VehCtrl_18B_DW./*@>2b84f*/is_c23_ZT_VehCtrl_18B/*@>db9c*/ = /*@>1d871*/ZT_VehCtrl_18B_IN_Done;
            /*@>1d87d*/rtb_PulseGenerator2/*@>dbad*/ = /*@>2aef1*/9;
        } else {
            /*@>23516*/ZT_VehCtrl_18B_DW./*@>2b84c*/cnt_j/*@>2afb8*/++;
        }
        break;
      case /*@>1d84b*/ZT_VehCtrl_18B_IN_Done:
        /*@>1d883*/rtb_PulseGenerator2/*@>dbb6*/ = /*@>2aee5*/9;
        /*@>dbb1*/if (/*@>1d886*/VCU_Mode/*@>dbba*/ == /*@>1d888*/0) {
            /*@>23528*/ZT_VehCtrl_18B_DW./*@>2b852*/is_c23_ZT_VehCtrl_18B/*@>dbb4*/ = /*@>1d882*/ZT_VehCtrl_18B_IN_IDLE;
            /*@>1d889*/rtb_PulseGenerator2/*@>dbbe*/ = /*@>2aef4*/0;
        }
        break;
      default:
        /*@>1d84f*/rtb_PulseGenerator2/*@>db6d*/ = /*@>2aedc*/0;
        /*@>db68*/if (/*@>1d852*/VCU_Mode/*@>db71*/ == /*@>1d854*/1) {
            /*@>234fe*/ZT_VehCtrl_18B_DW./*@>2b843*/is_c23_ZT_VehCtrl_18B/*@>db6b*/ = /*@>1d84e*/ZT_VehCtrl_18B_IN_CS1;
            /*@>1d855*/rtb_PulseGenerator2/*@>db75*/ = /*@>2aeeb*/1;
            /*@>23534*/ZT_VehCtrl_18B_DW./*@>2b858*/cnt_j/*@>db76*/ = /*@>1d85a*/0.0;
        }
        break;
    }
}
/* {E!d2550}End of Chart: '<S2>/Chart1' */

/* {S!d2552}Chart: '<S2>/Chart2' incorporates:
 *  DataStoreRead: '<S2>/Data Store Read'
 */
/*@>dbe0*/if (/*@>2352e*/ZT_VehCtrl_18B_DW./*@>2b855*/is_active_c24_ZT_VehCtrl_18B/*@>dbdf*/ == /*@>1d897*/0U) {
    /*@>23546*/ZT_VehCtrl_18B_DW./*@>2b861*/is_active_c24_ZT_VehCtrl_18B/*@>dc44*/ = /*@>2aefd*/1U;
    /*@>2354c*/ZT_VehCtrl_18B_DW./*@>2b864*/is_c24_ZT_VehCtrl_18B/*@>dc48*/ = /*@>1d8e1*/ZT_VehCtrl_18B_IN_IDLE;
    /*@>1d8e2*/rtb_PulseGenerator/*@>dc4a*/ = /*@>2af0c*/0;
} else {
/*@>dbe2*/    switch (/*@>23540*/ZT_VehCtrl_18B_DW./*@>2b85e*/is_c24_ZT_VehCtrl_18B) {
      case /*@>1d89a*/ZT_VehCtrl_18B_IN_CS2:
        /*@>1d8af*/rtb_PulseGenerator/*@>dc03*/ = /*@>2af03*/1;
        /*@>dbfe*/if (/*@>23552*/ZT_VehCtrl_18B_DW./*@>2b867*/cnt_c/*@>dc07*/ > /*@>1d8b4*/20.0) {
            /*@>23570*/ZT_VehCtrl_18B_DW./*@>2b873*/is_c24_ZT_VehCtrl_18B/*@>dc01*/ = /*@>1d8ae*/ZT_VehCtrl_18B_IN_CS3;
            /*@>1d8ba*/rtb_PulseGenerator/*@>dc12*/ = /*@>2af12*/2;
            /*@>23594*/ZT_VehCtrl_18B_DW./*@>2b882*/cnt_c/*@>dc13*/ = /*@>1d8bf*/0.0;
        } else {
            /*@>23564*/ZT_VehCtrl_18B_DW./*@>2b870*/cnt_c/*@>2afb9*/++;
        }
        break;
      case /*@>1d89b*/ZT_VehCtrl_18B_IN_CS3:
        /*@>1d8c3*/rtb_PulseGenerator/*@>dc1f*/ = /*@>2af06*/2;
        /*@>dc1a*/if (/*@>23558*/ZT_VehCtrl_18B_DW./*@>2b86a*/cnt_c/*@>dc23*/ > /*@>1d8c8*/20.0) {
            /*@>23582*/ZT_VehCtrl_18B_DW./*@>2b879*/is_c24_ZT_VehCtrl_18B/*@>dc1d*/ = /*@>1d8c2*/ZT_VehCtrl_18B_IN_Done;
            /*@>1d8ce*/rtb_PulseGenerator/*@>dc2e*/ = /*@>2af15*/9;
        } else {
            /*@>23576*/ZT_VehCtrl_18B_DW./*@>2b876*/cnt_c/*@>2afba*/++;
        }
        break;
      case /*@>1d89c*/ZT_VehCtrl_18B_IN_Done:
        /*@>1d8d4*/rtb_PulseGenerator/*@>dc37*/ = /*@>2af09*/9;
        /*@>dc32*/if (/*@>1d8d7*/VCU_Mode/*@>dc3b*/ == /*@>1d8d9*/0) {
            /*@>23588*/ZT_VehCtrl_18B_DW./*@>2b87c*/is_c24_ZT_VehCtrl_18B/*@>dc35*/ = /*@>1d8d3*/ZT_VehCtrl_18B_IN_IDLE;
            /*@>1d8da*/rtb_PulseGenerator/*@>dc3f*/ = /*@>2af18*/0;
        }
        break;
      default:
        /*@>1d8a0*/rtb_PulseGenerator/*@>dbee*/ = /*@>2af00*/0;
        /*@>dbe9*/if (/*@>1d8a3*/VCU_Mode/*@>dbf2*/ == /*@>1d8a5*/1) {
            /*@>2355e*/ZT_VehCtrl_18B_DW./*@>2b86d*/is_c24_ZT_VehCtrl_18B/*@>dbec*/ = /*@>1d89f*/ZT_VehCtrl_18B_IN_CS2;
            /*@>1d8a6*/rtb_PulseGenerator/*@>dbf6*/ = /*@>2af0f*/1;
            /*@>2358e*/ZT_VehCtrl_18B_DW./*@>2b87f*/cnt_c/*@>dbf7*/ = /*@>1d8ab*/0.0;
        }
        break;
    }
}
/* {E!d2552}End of Chart: '<S2>/Chart2' */

/* {S!d2554}DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
 *  Constant: '<S17>/Constant'
 *  Constant: '<S18>/Constant'
 *  DataStoreWrite: '<S2>/Data Store Write4'
 *  Logic: '<S2>/Logical Operator'
 *  RelationalOperator: '<S17>/Compare'
 *  RelationalOperator: '<S18>/Compare'
 */
/*@>1d53b*/Init_flg_SPI/*@>b5b7*/ = /*@>1ee82*/(uint8_T)((/*@>1dbc4*/rtb_PulseGenerator2/*@>14cf9*/ == /*@>1dc46*/9)/*@>14ad1*/ && (/*@>1dbc6*/rtb_PulseGenerator/*@>14cff*/ == /*@>1dc47*/9));
/* {S!d2556}Chart: '<S2>/Chart' incorporates:
 *  DataStoreRead: '<S2>/Data Store Read1'
 *  DataStoreRead: '<S2>/Data Store Read2'
 */
/*@>dc61*/if (/*@>2359a*/ZT_VehCtrl_18B_DW./*@>2b885*/is_active_c22_ZT_VehCtrl_18B/*@>dc60*/ == /*@>1d8e8*/0U) {
    /*@>235a6*/ZT_VehCtrl_18B_DW./*@>2b88b*/is_active_c22_ZT_VehCtrl_18B/*@>dcaa*/ = /*@>2af1b*/1U;
    /*@>235ac*/ZT_VehCtrl_18B_DW./*@>2b88e*/is_c22_ZT_VehCtrl_18B/*@>dcae*/ = /*@>1d91e*/ZT_VehCtrl_18B_IN_Idle;
    /*@>1d91f*/rtb_Flg_b/*@>dcb0*/ = /*@>2af27*/0;
} else {
/*@>dc63*/    switch (/*@>235a0*/ZT_VehCtrl_18B_DW./*@>2b888*/is_c22_ZT_VehCtrl_18B) {
      case /*@>1d8eb*/ZT_VehCtrl_18B_IN_Idle:
        /*@>1d8fc*/rtb_Flg_b/*@>dc7f*/ = /*@>2af21*/0;
        /*@>dc7a*/if (/*@>1d8ff*/ResetFlg/*@>dc83*/ == /*@>1d901*/0) {
            /*@>235b8*/ZT_VehCtrl_18B_DW./*@>2b894*/is_c22_ZT_VehCtrl_18B/*@>dc7d*/ = /*@>1d8fb*/ZT_VehCtrl_18B_IN_Initialize;
            /*@>1d902*/rtb_Flg_b/*@>dc87*/ = /*@>2af2d*/1;
        }
        break;
      case /*@>1d8ec*/ZT_VehCtrl_18B_IN_Initialize:
        /*@>1d90b*/rtb_Flg_b/*@>dc95*/ = /*@>2af24*/1;
        /*@>dc8b*/if (/*@>1d90e*/Init_flg_SPI/*@>dc99*/ > /*@>1d910*/0) {
            /*@>235be*/ZT_VehCtrl_18B_DW./*@>2b897*/is_c22_ZT_VehCtrl_18B/*@>dc8f*/ = /*@>1d907*/ZT_VehCtrl_18B_IN_Normal;
            /*@>1d917*/rtb_Flg_b/*@>dca5*/ = /*@>2af30*/2;
        } else {
            /*@>dc8c*/if (/*@>1d911*/ResetFlg/*@>dc9d*/ == /*@>1d913*/1) {
                /*@>235c4*/ZT_VehCtrl_18B_DW./*@>2b89a*/is_c22_ZT_VehCtrl_18B/*@>dc93*/ = /*@>1d90a*/ZT_VehCtrl_18B_IN_Idle;
                /*@>1d914*/rtb_Flg_b/*@>dca1*/ = /*@>2af33*/0;
            }
        }
        break;
      default:
        /*@>1d8f0*/rtb_Flg_b/*@>dc6e*/ = /*@>2af1e*/2;
        /*@>dc69*/if (/*@>1d8f3*/ResetFlg/*@>dc72*/ == /*@>1d8f5*/1) {
            /*@>235b2*/ZT_VehCtrl_18B_DW./*@>2b891*/is_c22_ZT_VehCtrl_18B/*@>dc6c*/ = /*@>1d8ef*/ZT_VehCtrl_18B_IN_Idle;
            /*@>1d8f6*/rtb_Flg_b/*@>dc76*/ = /*@>2af2a*/0;
        }
        break;
    }
}
/* {E!d2556}End of Chart: '<S2>/Chart' */

/* {S!d2558}DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
 *  DataStoreWrite: '<S2>/Data Store Write'
 */
/*@>1d53f*/VCU_Mode/*@>b606*/ = /*@>1eec1*/(uint8_T)/*@>1f615*/(int32_T)/*@>218d4*/fmod(/*@>1f61a*/rtb_Flg_b, /*@>1f61b*/256.0);
/* {S!d2568}If: '<S2>/If1' */
/*@>b60e*/if (/*@>1d541*/rtb_PulseGenerator2/*@>b60d*/ == /*@>1d543*/1) {
    /* {S!d2233}Outputs for IfAction SubSystem: '<S2>/CS1 LS' incorporates:
 *  ActionPort: '<S10>/Action Port'
 */
    /* {S!d2560}Chart: '<S10>/Chart' */
    /*@>df3f*/if (/*@>235ca*/ZT_VehCtrl_18B_DW./*@>2b89d*/is_active_c11_ZT_VehCtrl_18B/*@>df3e*/ == /*@>1da81*/0U) {
        /*@>235d6*/ZT_VehCtrl_18B_DW./*@>2b8a3*/is_active_c11_ZT_VehCtrl_18B/*@>df98*/ = /*@>2af36*/1U;
        /*@>235dc*/ZT_VehCtrl_18B_DW./*@>2b8a6*/is_c11_ZT_VehCtrl_18B/*@>df9c*/ = /*@>1dac2*/ZT_VehCtrl_18B_IN_clear;
        /*@>1dac3*/rtb_Flg_b/*@>df9e*/ = /*@>2af4b*/135;
        /*@>1dac5*/rtb_low_b/*@>df9f*/ = /*@>2af4e*/1;
        /*@>23630*/ZT_VehCtrl_18B_DW./*@>2b8c7*/cnt_p/*@>dfa0*/ = /*@>1daca*/0.0;
    } else {
/*@>df41*/        switch (/*@>235d0*/ZT_VehCtrl_18B_DW./*@>2b8a0*/is_c11_ZT_VehCtrl_18B) {
          case /*@>1da84*/ZT_VehCtrl_18B_IN_clear:
            /*@>1daa3*/rtb_Flg_b/*@>df71*/ = /*@>2af3c*/135;
            /*@>1daa0*/rtb_low_b/*@>df6d*/ = /*@>2af45*/1;
            /*@>df68*/if (/*@>235ee*/ZT_VehCtrl_18B_DW./*@>2b8af*/cnt_p/*@>df74*/ > /*@>1daa7*/5.0) {
                /*@>2362a*/ZT_VehCtrl_18B_DW./*@>2b8c4*/is_c11_ZT_VehCtrl_18B/*@>df6b*/ = /*@>1da9f*/ZT_VehCtrl_18B_IN_en;
                /*@>1daad*/rtb_Flg_b/*@>df7f*/ = /*@>2af54*/193;
                /*@>1daaf*/rtb_low_b/*@>df80*/ = /*@>2af5a*/0;
                /*@>23672*/ZT_VehCtrl_18B_DW./*@>2b8e5*/cnt_p/*@>df81*/ = /*@>1dab4*/0.0;
            } else {
                /*@>2361e*/ZT_VehCtrl_18B_DW./*@>2b8c1*/cnt_p/*@>2afbd*/++;
            }
            break;
          case /*@>1da85*/ZT_VehCtrl_18B_IN_config:
            /*@>1dab7*/rtb_Flg_b/*@>df8d*/ = /*@>2af3f*/199;
            /*@>1dab5*/rtb_low_b/*@>df8a*/ = /*@>2af48*/129;
            /*@>235f4*/ZT_VehCtrl_18B_DW./*@>2b8b2*/cnt_p/*@>2afbb*/++;
            break;
          default:
            /*@>1da8c*/rtb_Flg_b/*@>df50*/ = /*@>2af39*/193;
            /*@>1da89*/rtb_low_b/*@>df4c*/ = /*@>2af42*/0;
            /*@>df47*/if (/*@>235e8*/ZT_VehCtrl_18B_DW./*@>2b8ac*/cnt_p/*@>df53*/ > /*@>1da90*/5.0) {
                /*@>23618*/ZT_VehCtrl_18B_DW./*@>2b8be*/is_c11_ZT_VehCtrl_18B/*@>df4a*/ = /*@>1da88*/ZT_VehCtrl_18B_IN_config;
                /*@>1da96*/rtb_Flg_b/*@>df5e*/ = /*@>2af51*/199;
                /*@>1da98*/rtb_low_b/*@>df5f*/ = /*@>2af57*/129;
                /*@>2366c*/ZT_VehCtrl_18B_DW./*@>2b8e2*/cnt_p/*@>df60*/ = /*@>1da9c*/0.0;
            } else {
                /*@>2360c*/ZT_VehCtrl_18B_DW./*@>2b8bb*/cnt_p/*@>2afbc*/++;
            }
            break;
        }
    }
    /* {E!d2560}End of Chart: '<S10>/Chart' */

    /* {S!d2562}S-Function (spi_mpc_master_transfer): '<S10>/SPI_Master_Transfer_To1' */
/*@[25aa8*/                            {
                DSPI_UpdateCS(0, 5);
                    DSPI_MasterTransfer(0, &/*@<290fc*//*@>290f5*/ZT_VehCtrl_18B_B./*@>29101*/VectorConcatenate1_m[0],
                    &/*@<2912d*//*@>29126*/ZT_VehCtrl_18B_B./*@>29132*/SPI_Master_Transfer_To1_g[0], 1);
            }
 
   
  
/*@]*/    /* {S!d2564}DataTypeConversion: '<S10>/Data Type Conversion' */
    /*@>2311a*/ZT_VehCtrl_18B_B./*@>2b7b3*/VectorConcatenate1_m/*@>fe05*/[/*@>1db84*/0]/*@>d930*/ = /*@>1ef56*/(uint8_T)/*@>1f61d*/(int32_T)/*@>218d8*/fmod(/*@>1f622*/rtb_Flg_b, /*@>1f623*/256.0);
    /* {S!d2566}DataTypeConversion: '<S10>/Data Type Conversion1' */
    /*@>23126*/ZT_VehCtrl_18B_B./*@>2b7b9*/VectorConcatenate1_m/*@>fe1f*/[/*@>1db86*/1]/*@>d933*/ = /*@>1ef96*/(uint8_T)/*@>1f626*/(int32_T)/*@>218da*/fmod(/*@>1f62b*/rtb_low_b, /*@>1f62c*/256.0);
    /* {E!d2233}End of Outputs for SubSystem: '<S2>/CS1 LS' */
}
/* {E!d2568}End of If: '<S2>/If1' */

/* {S!d2572}If: '<S2>/If' */
/*@>b63f*/if (/*@>1d544*/rtb_PulseGenerator/*@>b63e*/ == /*@>1d546*/1) {
    /* {S!d2235}Outputs for IfAction SubSystem: '<S2>/CS2 CANB' incorporates:
 *  ActionPort: '<S11>/Action Port'
 */
    /* {S!d2570}S-Function (spi_mpc_master_transfer): '<S11>/SPI_Master_Transfer_To2' */
/*@[25aab*/                            {
                DSPI_UpdateCS(3, 2);
                    DSPI_MasterTransfer(3, &/*@<29172*//*@>2916b*/ZT_VehCtrl_18B_ConstB./*@>29177*/VectorConcatenate2[0],
                    &/*@<291a3*//*@>2919c*/ZT_VehCtrl_18B_B./*@>291a8*/SPI_Master_Transfer_To2_h[0], 1);
            }
 
   
  
/*@]*/    /* {E!d2235}End of Outputs for SubSystem: '<S2>/CS2 CANB' */
}
/* {E!d2572}End of If: '<S2>/If' */

/* {S!d2582}If: '<S2>/If3' */
/*@>b69a*/if (/*@>1d547*/rtb_PulseGenerator/*@>b699*/ == /*@>1d549*/2) {
    /* {S!d2237}Outputs for IfAction SubSystem: '<S2>/CS3 LS' incorporates:
 *  ActionPort: '<S12>/Action Port'
 */
    /* {S!d2574}Chart: '<S12>/Chart' incorporates:
 *  Constant: '<S12>/PIN'
 */
    /*@>dfc0*/if (/*@>235e2*/ZT_VehCtrl_18B_DW./*@>2b8a9*/is_active_c14_ZT_VehCtrl_18B/*@>dfbf*/ == /*@>1dad6*/0U) {
        /*@>23606*/ZT_VehCtrl_18B_DW./*@>2b8b8*/is_active_c14_ZT_VehCtrl_18B/*@>dfe4*/ = /*@>2af5d*/1U;
        /*@>23642*/ZT_VehCtrl_18B_DW./*@>2b8d0*/is_c14_ZT_VehCtrl_18B/*@>dfe8*/ = /*@>1daef*/ZT_VehCtrl_18B_IN_ConfigA;
        /*@>230de*/ZT_VehCtrl_18B_B./*@>2b7a7*/high/*@>dfea*/ = /*@>1dc8e*/90.0;
        /*@>23102*/ZT_VehCtrl_18B_B./*@>2b7ad*/low/*@>dfec*/ = /*@>1dc8f*/10.0;
        /*@>2367e*/ZT_VehCtrl_18B_DW./*@>2b8eb*/cnt/*@>dfee*/ = /*@>1daf6*/0.0;
    } else {
        /*@>1afa2*/if (/*@>23600*/ZT_VehCtrl_18B_DW./*@>2b8b5*/is_c14_ZT_VehCtrl_18B/*@>1afa1*/ == /*@>2379c*/ZT_VehCtrl_18B_IN_ConfigA) {
            /*@>dfc7*/if (/*@>2363c*/ZT_VehCtrl_18B_DW./*@>2b8cd*/cnt/*@>dfcc*/ > /*@>1dadc*/4.0) {
                /*@>23660*/ZT_VehCtrl_18B_DW./*@>2b8dc*/is_c14_ZT_VehCtrl_18B/*@>dfca*/ = /*@>1dad9*/ZT_VehCtrl_18B_IN_en_g;
                /*@>230fc*/ZT_VehCtrl_18B_B./*@>2b7aa*/high/*@>dfd7*/ = /*@>1dae4*/96.0;
                /*@>23114*/ZT_VehCtrl_18B_B./*@>2b7b0*/low/*@>dfd8*/ = /*@>1dae7*/0.0;
                /*@>2369c*/ZT_VehCtrl_18B_DW./*@>2b8fa*/cnt/*@>dfd9*/ = /*@>1daea*/0.0;
            } else {
                /*@>23654*/ZT_VehCtrl_18B_DW./*@>2b8d9*/cnt/*@>2afbe*/++;
            }
        }
    }
    /* {E!d2574}End of Chart: '<S12>/Chart' */

    /* {S!d2576}S-Function (spi_mpc_master_transfer): '<S12>/SPI_Master_Transfer_To2' */
/*@[25aae*/                            {
                DSPI_UpdateCS(3, 3);
                    DSPI_MasterTransfer(3, &/*@<291e8*//*@>291e1*/ZT_VehCtrl_18B_B./*@>291ed*/VectorConcatenate1_a[0],
                    &/*@<29219*//*@>29212*/ZT_VehCtrl_18B_B./*@>2921e*/SPI_Master_Transfer_To2_a[0], 1);
            }
 
   
  
/*@]*/    /* {S!d2578}DataTypeConversion: '<S12>/Data Type Conversion2' */
    /*@>1e507*/tmp/*@>1e509*/ = /*@>218e0*/floor(/*@>23120*/ZT_VehCtrl_18B_B./*@>2b7b6*/high);
    /*@>201bc*/if (/*@>218e2*/rtIsNaN(/*@>1e50b*/tmp)/*@>1e515*/ || /*@>218e4*/rtIsInf(/*@>1e510*/tmp)) {
        /*@>201c0*/tmp/*@>201bf*/ = /*@>1e517*/0.0;
    } else {
        /*@>1e518*/tmp/*@>1e51a*/ = /*@>218e6*/fmod(/*@>1e51c*/tmp, /*@>1e520*/256.0);
    }
    /*@>23144*/ZT_VehCtrl_18B_B./*@>2b7bf*/VectorConcatenate1_a/*@>fe12*/[/*@>1db85*/0]/*@>d96e*/ = /*@>1ef7b*/(uint8_T)(/*@>1e52e*/tmp/*@>1e531*/ < /*@>1e52d*/0.0/*@>1e531*/ ? (int32_T)/*@>1e539*/(uint8_T)-/*@<1e542*//*@>1e537*/(int8_T)/*@>1e545*/(uint8_T)-/*@<1e535*//*@>1e532*/tmp : (int32_T)/*@>1e548*/(uint8_T)/*@>1e53a*/tmp);
    /* {E!d2578}End of DataTypeConversion: '<S12>/Data Type Conversion2' */

    /* {S!d2580}DataTypeConversion: '<S12>/Data Type Conversion3' */
    /*@>1e4bf*/tmp/*@>1e4c1*/ = /*@>218e8*/floor(/*@>23150*/ZT_VehCtrl_18B_B./*@>2b7c5*/low);
    /*@>201c1*/if (/*@>218ea*/rtIsNaN(/*@>1e4c3*/tmp)/*@>1e4cd*/ || /*@>218ec*/rtIsInf(/*@>1e4c8*/tmp)) {
        /*@>201c5*/tmp/*@>201c4*/ = /*@>1e4cf*/0.0;
    } else {
        /*@>1e4d0*/tmp/*@>1e4d2*/ = /*@>218ee*/fmod(/*@>1e4d4*/tmp, /*@>1e4d8*/256.0);
    }
    /*@>23156*/ZT_VehCtrl_18B_B./*@>2b7c8*/VectorConcatenate1_a/*@>fe2c*/[/*@>1db87*/1]/*@>d971*/ = /*@>1efba*/(uint8_T)(/*@>1e4e6*/tmp/*@>1e4e9*/ < /*@>1e4e5*/0.0/*@>1e4e9*/ ? (int32_T)/*@>1e4f1*/(uint8_T)-/*@<1e4fa*//*@>1e4ef*/(int8_T)/*@>1e4fd*/(uint8_T)-/*@<1e4ed*//*@>1e4ea*/tmp : (int32_T)/*@>1e500*/(uint8_T)/*@>1e4f2*/tmp);
    /* {E!d2580}End of DataTypeConversion: '<S12>/Data Type Conversion3' */
    /* {E!d2237}End of Outputs for SubSystem: '<S2>/CS3 LS' */
}
/* {E!d2582}End of If: '<S2>/If3' */

/* {S!d2592}If: '<S2>/If2' */
/*@>b6cb*/if (/*@>1d54a*/rtb_PulseGenerator2/*@>b6ca*/ == /*@>1d54c*/2) {
    /* {S!d2239}Outputs for IfAction SubSystem: '<S2>/CS5 LS' incorporates:
 *  ActionPort: '<S13>/Action Port'
 */
    /* {S!d2584}Chart: '<S13>/Chart' */
    /*@>e00c*/if (/*@>23636*/ZT_VehCtrl_18B_DW./*@>2b8ca*/is_active_c21_ZT_VehCtrl_18B/*@>e00b*/ == /*@>1dafa*/0U) {
        /*@>2364e*/ZT_VehCtrl_18B_DW./*@>2b8d6*/is_active_c21_ZT_VehCtrl_18B/*@>e05e*/ = /*@>2af60*/1U;
        /*@>23666*/ZT_VehCtrl_18B_DW./*@>2b8df*/is_c21_ZT_VehCtrl_18B/*@>e062*/ = /*@>1db36*/ZT_VehCtrl_18B_IN_clear;
        /*@>1db37*/rtb_PulseGenerator2/*@>e064*/ = /*@>2af75*/135;
        /*@>1db39*/rtb_PulseGenerator/*@>e065*/ = /*@>2af78*/1;
        /*@>236cc*/ZT_VehCtrl_18B_DW./*@>2b90c*/cnt_o/*@>e066*/ = /*@>1db3e*/0.0;
    } else {
/*@>e00e*/        switch (/*@>23648*/ZT_VehCtrl_18B_DW./*@>2b8d3*/is_c21_ZT_VehCtrl_18B) {
          case /*@>1dafd*/ZT_VehCtrl_18B_IN_clear:
            /*@>1db1c*/rtb_PulseGenerator2/*@>e03e*/ = /*@>2af66*/135;
            /*@>1db19*/rtb_PulseGenerator/*@>e03a*/ = /*@>2af6f*/1;
            /*@>e035*/if (/*@>23696*/ZT_VehCtrl_18B_DW./*@>2b8f7*/cnt_o/*@>e041*/ > /*@>1db20*/5.0) {
                /*@>236c6*/ZT_VehCtrl_18B_DW./*@>2b909*/is_c21_ZT_VehCtrl_18B/*@>e038*/ = /*@>1db18*/ZT_VehCtrl_18B_IN_en;
                /*@>1db26*/rtb_PulseGenerator2/*@>e04c*/ = /*@>2af7e*/193;
                /*@>1db28*/rtb_PulseGenerator/*@>e04d*/ = /*@>2af84*/0;
                /*@>236f0*/ZT_VehCtrl_18B_DW./*@>2b91b*/cnt_o/*@>e04e*/ = /*@>1db2d*/0.0;
            } else {
                /*@>236ba*/ZT_VehCtrl_18B_DW./*@>2b906*/cnt_o/*@>2afc0*/++;
            }
            break;
          case /*@>1dafe*/ZT_VehCtrl_18B_IN_config:
            /*@>1db30*/rtb_PulseGenerator2/*@>e05a*/ = /*@>2af69*/199;
            /*@>1db2e*/rtb_PulseGenerator/*@>e057*/ = /*@>2af72*/129;
            break;
          default:
            /*@>1db05*/rtb_PulseGenerator2/*@>e01d*/ = /*@>2af63*/193;
            /*@>1db02*/rtb_PulseGenerator/*@>e019*/ = /*@>2af6c*/0;
            /*@>e014*/if (/*@>23690*/ZT_VehCtrl_18B_DW./*@>2b8f4*/cnt_o/*@>e020*/ > /*@>1db09*/5.0) {
                /*@>236b4*/ZT_VehCtrl_18B_DW./*@>2b903*/is_c21_ZT_VehCtrl_18B/*@>e017*/ = /*@>1db01*/ZT_VehCtrl_18B_IN_config;
                /*@>1db0f*/rtb_PulseGenerator2/*@>e02b*/ = /*@>2af7b*/199;
                /*@>1db11*/rtb_PulseGenerator/*@>e02c*/ = /*@>2af81*/129;
                /*@>236ea*/ZT_VehCtrl_18B_DW./*@>2b918*/cnt_o/*@>e02d*/ = /*@>1db15*/0.0;
            } else {
                /*@>236a8*/ZT_VehCtrl_18B_DW./*@>2b900*/cnt_o/*@>2afbf*/++;
            }
            break;
        }
    }
    /* {E!d2584}End of Chart: '<S13>/Chart' */

    /* {S!d2586}S-Function (spi_mpc_master_transfer): '<S13>/SPI_Master_Transfer_To1' */
/*@[25ab1*/                            {
                DSPI_UpdateCS(0, 1);
                    DSPI_MasterTransfer(0, &/*@<2925e*//*@>29257*/ZT_VehCtrl_18B_B./*@>29263*/VectorConcatenate1_n[0],
                    &/*@<2928f*//*@>29288*/ZT_VehCtrl_18B_B./*@>29294*/SPI_Master_Transfer_To1_c[0], 1);
            }
 
   
  
/*@]*/    /* {S!d2588}DataTypeConversion: '<S13>/Data Type Conversion' */
    /*@>2313e*/ZT_VehCtrl_18B_B./*@>2b7bc*/VectorConcatenate1_n/*@>fe39*/[/*@>1db88*/0]/*@>d996*/ = /*@>1efb1*/(uint8_T)/*@>1f63b*/(int32_T)/*@>218f2*/fmod(/*@>1f640*/rtb_PulseGenerator2, /*@>1f641*/256.0);
    /* {S!d2590}DataTypeConversion: '<S13>/Data Type Conversion1' */
    /*@>2314a*/ZT_VehCtrl_18B_B./*@>2b7c2*/VectorConcatenate1_n/*@>fe46*/[/*@>1db89*/1]/*@>d999*/ = /*@>1efd1*/(uint8_T)/*@>1f644*/(int32_T)/*@>218f4*/fmod(/*@>1f649*/rtb_PulseGenerator, /*@>1f64a*/256.0);
    /* {E!d2239}End of Outputs for SubSystem: '<S2>/CS5 LS' */
}
/* {E!d2592}End of If: '<S2>/If2' */

/* {S!d2594}S-Function (gpio_mpc_output): '<S3>/HS1' */
/*@[25ab3*/                            /* Data Signal Update */
            if (/*@>292e6*/ZT_VehCtrl_18B_ConstB./*@>292f3*/DataTypeConversion_cp) {
                PINS_DRV_SetPins(PTF, (1 << 6));
            } else {
                PINS_DRV_ClearPins(PTF, (1 << 6));
            }
 
   
  
/*@]*//* {S!d2596}S-Function (gpio_mpc_output): '<S3>/HS4' */
/*@[25ab5*/                            /* Data Signal Update */
            if (/*@>2932b*/ZT_VehCtrl_18B_ConstB./*@>29338*/DataTypeConversion_cp) {
                PINS_DRV_SetPins(PTA, (1 << 13));
            } else {
                PINS_DRV_ClearPins(PTA, (1 << 13));
            }
 
   
  
/*@]*//* {S!d2598}DataStoreWrite: '<S2>/Data Store Write3' */
/*@>23678*/ZT_VehCtrl_18B_DW./*@>2b8e8*/SPI3_CS/*@>b77b*/ = /*@>23379*/ZT_VehCtrl_18B_ConstB./*@>2b7ec*/DataTypeConversion1_o;
/* {S!d2600}DiscretePulseGenerator: '<S2>/Pulse Generator' */
/*@>1d570*/rtb_Add3/*@>b79c*/ = ((/*@>23684*/ZT_VehCtrl_18B_DW./*@>2b8ee*/clockTickCounter_p/*@>b796*/ < /*@>1dc48*/1)/*@>b799*/ && (/*@>2368a*/ZT_VehCtrl_18B_DW./*@>2b8f1*/clockTickCounter_p/*@>b798*/ >= /*@>1d56f*/0));
/*@>201b7*/if (/*@>236a2*/ZT_VehCtrl_18B_DW./*@>2b8fd*/clockTickCounter_p/*@>b7a2*/ >= /*@>1dc4c*/1) {
    /*@>236de*/ZT_VehCtrl_18B_DW./*@>2b912*/clockTickCounter_p/*@>201ba*/ = /*@>2af87*/0;
} else {
    /*@>236d2*/ZT_VehCtrl_18B_DW./*@>2b90f*/clockTickCounter_p/*@>2afc1*/++;
}
/* {E!d2600}End of DiscretePulseGenerator: '<S2>/Pulse Generator' */

/* {S!d2602}DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
 *  DataStoreWrite: '<S2>/Data Store Write2'
 */
/*@>236e4*/ZT_VehCtrl_18B_DW./*@>2b915*/SPI0_CS/*@>b7ab*/ = (/*@>1d57a*/rtb_Add3/*@>1e421*/ != /*@>1e41f*/0.0);
/* {S!d2241}Outputs for Atomic SubSystem: '<Root>/Init' */
/* {S!d2672}If: '<S1>/If1' incorporates:
 *  DataStoreRead: '<S1>/Data Store Read1'
 */
/*@>d9bd*/if (/*@>1d82e*/VCU_Mode/*@>d9bc*/ == /*@>1d830*/2) {
    /* {S!d2242}Outputs for IfAction SubSystem: '<S1>/CAN_init' incorporates:
 *  ActionPort: '<S8>/Action Port'
 */
    /* {S!d2604}S-Function (fcan_mpc_receive): '<S8>/ACU1' */
/*@[25ab6*/                

                        FLEXCAN_DRV_Receive(0, 36, &canCom0_recvBuff36);

 
   
  
/*@]*/    /* {S!d2606}S-Function (fcan_mpc_receive): '<S8>/ACU2' */
/*@[25ab7*/                

                        FLEXCAN_DRV_Receive(0, 37, &canCom0_recvBuff37);

 
   
  
/*@]*/    /* {S!d2608}S-Function (fcan_mpc_receive): '<S8>/ACU3' */
/*@[25ab8*/                

                        FLEXCAN_DRV_Receive(0, 38, &canCom0_recvBuff38);

 
   
  
/*@]*/    /* {S!d2610}S-Function (fcan_mpc_receive): '<S8>/BMS Power Infor' */
/*@[25ab9*/                

                        FLEXCAN_DRV_Receive(0, 3, &canCom0_recvBuff3);

 
   
  
/*@]*/    /* {S!d2612}S-Function (fcan_mpc_receive): '<S8>/BMS Statistic_Temperature of Battery' */
/*@[25aba*/                

                        FLEXCAN_DRV_Receive(0, 5, &canCom0_recvBuff5);

 
   
  
/*@]*/    /* {S!d2614}S-Function (fcan_mpc_receive): '<S8>/BMS other Information3' */
/*@[25abb*/                

                        FLEXCAN_DRV_Receive(0, 6, &canCom0_recvBuff6);

 
   
  
/*@]*/    /* {S!d2616}S-Function (fcan_mpc_receive): '<S8>/BMSWarning Status' */
/*@[25abc*/                

                        FLEXCAN_DRV_Receive(0, 2, &canCom0_recvBuff2);

 
   
  
/*@]*/    /* {S!d2618}S-Function (fcan_mpc_receive): '<S8>/BMS_Information 1' */
/*@[25abd*/                

                        FLEXCAN_DRV_Receive(0, 0, &canCom0_recvBuff0);

 
   
  
/*@]*/    /* {S!d2620}S-Function (fcan_mpc_receive): '<S8>/BMS_Information 2' */
/*@[25abe*/                

                        FLEXCAN_DRV_Receive(0, 1, &canCom0_recvBuff1);

 
   
  
/*@]*/    /* {S!d2622}S-Function (fcan_mpc_receive): '<S8>/BRS2VCU1' */
/*@[25abf*/                

                        FLEXCAN_DRV_Receive(0, 11, &canCom0_recvBuff11);

 
   
  
/*@]*/    /* {S!d2624}S-Function (fcan_mpc_receive): '<S8>/BRS2VCU2' */
/*@[25ac0*/                

                        FLEXCAN_DRV_Receive(0, 12, &canCom0_recvBuff12);

 
   
  
/*@]*/    /* {S!d2626}S-Function (fcan_mpc_receive): '<S8>/BRS2VCU3' */
/*@[25ac1*/                

                        FLEXCAN_DRV_Receive(0, 13, &canCom0_recvBuff13);

 
   
  
/*@]*/    /* {S!d2628}S-Function (fcan_mpc_receive): '<S8>/DCDC1_1' */
/*@[25ac2*/                

                        FLEXCAN_DRV_Receive(1, 24, &canCom1_recvBuff24);

 
   
  
/*@]*/    /* {S!d2630}S-Function (fcan_mpc_receive): '<S8>/DCDC1_2' */
/*@[25ac3*/                

                        FLEXCAN_DRV_Receive(1, 26, &canCom1_recvBuff26);

 
   
  
/*@]*/    /* {S!d2632}S-Function (fcan_mpc_receive): '<S8>/HVC1_LV' */
/*@[25ac4*/                

                        FLEXCAN_DRV_Receive(1, 25, &canCom1_recvBuff25);

 
   
  
/*@]*/    /* {S!d2634}S-Function (fcan_mpc_receive): '<S8>/HVC3_Temp' */
/*@[25ac5*/                

                        FLEXCAN_DRV_Receive(1, 27, &canCom1_recvBuff27);

 
   
  
/*@]*/    /* {S!d2636}S-Function (fcan_mpc_receive): '<S8>/HVC4_RlySt' */
/*@[25ac6*/                

                        FLEXCAN_DRV_Receive(1, 28, &canCom1_recvBuff28);

 
   
  
/*@]*/    /* {S!d2638}S-Function (fcan_mpc_receive): '<S8>/HVC7_HV1' */
/*@[25ac7*/                

                        FLEXCAN_DRV_Receive(1, 29, &canCom1_recvBuff29);

 
   
  
/*@]*/    /* {S!d2640}S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS1' */
/*@[25ac8*/                

                        FLEXCAN_DRV_Receive(1, 43, &canCom1_recvBuff43);

 
   
  
/*@]*/    /* {S!d2642}S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS2' */
/*@[25ac9*/                

                        FLEXCAN_DRV_Receive(1, 44, &canCom1_recvBuff44);

 
   
  
/*@]*/    /* {S!d2644}S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS3' */
/*@[25aca*/                

                        FLEXCAN_DRV_Receive(1, 45, &canCom1_recvBuff45);

 
   
  
/*@]*/    /* {S!d2646}S-Function (fcan_mpc_receive): '<S8>/MCU1Msg1' */
/*@[25acb*/                

                        FLEXCAN_DRV_Receive(1, 30, &canCom1_recvBuff30);

 
   
  
/*@]*/    /* {S!d2648}S-Function (fcan_mpc_receive): '<S8>/MCU1Msg2' */
/*@[25acc*/                

                        FLEXCAN_DRV_Receive(1, 31, &canCom1_recvBuff31);

 
   
  
/*@]*/    /* {S!d2650}S-Function (fcan_mpc_receive): '<S8>/MCU1Msg3' */
/*@[25acd*/                

                        FLEXCAN_DRV_Receive(1, 32, &canCom1_recvBuff32);

 
   
  
/*@]*/    /* {S!d2652}S-Function (fcan_mpc_receive): '<S8>/MCU2Msg1' */
/*@[25ace*/                

                        FLEXCAN_DRV_Receive(1, 33, &canCom1_recvBuff33);

 
   
  
/*@]*/    /* {S!d2654}S-Function (fcan_mpc_receive): '<S8>/MCU2Msg2' */
/*@[25acf*/                

                        FLEXCAN_DRV_Receive(1, 34, &canCom1_recvBuff34);

 
   
  
/*@]*/    /* {S!d2656}S-Function (fcan_mpc_receive): '<S8>/MCU2Msg3' */
/*@[25ad0*/                

                        FLEXCAN_DRV_Receive(1, 35, &canCom1_recvBuff35);

 
   
  
/*@]*/    /* {S!d2658}S-Function (fcan_mpc_receive): '<S8>/OBC_Charger Status' */
/*@[25ad1*/                

                        FLEXCAN_DRV_Receive(0, 9, &canCom0_recvBuff9);

 
   
  
/*@]*/    /* {S!d2660}S-Function (fcan_mpc_receive): '<S8>/PDU_RelaySts' */
/*@[25ad2*/                

                        FLEXCAN_DRV_Receive(1, 39, &canCom1_recvBuff39);

 
   
  
/*@]*/    /* {S!d2662}S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS1' */
/*@[25ad3*/                

                        FLEXCAN_DRV_Receive(1, 40, &canCom1_recvBuff40);

 
   
  
/*@]*/    /* {S!d2664}S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS2' */
/*@[25ad4*/                

                        FLEXCAN_DRV_Receive(1, 41, &canCom1_recvBuff41);

 
   
  
/*@]*/    /* {S!d2666}S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS3' */
/*@[25ad5*/                

                        FLEXCAN_DRV_Receive(1, 42, &canCom1_recvBuff42);

 
   
  
/*@]*/    /* {S!d2668}S-Function (fcan_mpc_receive): '<S8>/TMS2VCU' */
/*@[25ad6*/                

                        FLEXCAN_DRV_Receive(0, 10, &canCom0_recvBuff10);

 
   
  
/*@]*/    /* {S!d2670}S-Function (fcan_mpc_receive): '<S8>/TWV' */
/*@[25ad7*/                

                        FLEXCAN_DRV_Receive(1, 46, &canCom1_recvBuff46);

 
   
  
/*@]*/    /* {E!d2242}End of Outputs for SubSystem: '<S1>/CAN_init' */
}
/* {E!d2672}End of If: '<S1>/If1' */

/* {S!d2678}If: '<S1>/If2' incorporates:
 *  DataStoreRead: '<S1>/Data Store Read3'
 */
/*@>d9c4*/if (/*@>236f6*/ZT_VehCtrl_18B_DW./*@>2b91e*/Init_flg/*@>d9c3*/ == /*@>1d833*/0) {
    /* {S!d2244}Outputs for IfAction SubSystem: '<S1>/Init' incorporates:
 *  ActionPort: '<S9>/Action Port'
 */
    /* {S!d2674}DataStoreWrite: '<S9>/Data Store Write3' */
    /*@>236fc*/ZT_VehCtrl_18B_DW./*@>2b921*/Init_flg/*@>de85*/ = /*@>2337f*/ZT_VehCtrl_18B_ConstB./*@>2b7ef*/DataTypeConversion_bd;
    /* {S!d2676}DataStoreWrite: '<S9>/Data Store Write' */
    /*@>1da7d*/LS001/*@>de87*/ = /*@>23385*/ZT_VehCtrl_18B_ConstB./*@>2b7f2*/DataTypeConversion2_g;
    /* {E!d2244}End of Outputs for SubSystem: '<S1>/Init' */
}
/* {E!d2678}End of If: '<S1>/If2' */
/* {E!d2241}End of Outputs for SubSystem: '<Root>/Init' */
/* {S!d2704}Product: '<S190>/Divide3' incorporates:
 *  Constant: '<S190>/Freq_MC3'
 *  Constant: '<S190>/Pre5'
 *  DataStoreRead: '<S190>/Data Store Read5'
 */
/*@>1d5f8*/rtb_Add3/*@>ba49*/ = /*@>1dc90*/1.25E+6/*@>1e41c*/ / /*@[25f7c*/LSO3_ETC_FRQ/*@]*/;
/* {S!d2706}Product: '<S190>/Product1' incorporates:
 *  DataStoreRead: '<S190>/Data Store Read4'
 */
/*@>1d5fe*/rtb_Divide2/*@>ba50*/ = /*@[25f98*/LSO3_ETC_DC/*@]*//*@>1e418*/ * /*@>1d5fc*/rtb_Add3;
/* {S!d2708}DataTypeConversion: '<S197>/Data Type Conversion1' */
/*@>1e3d3*/tmp/*@>1e3d5*/ = /*@>21956*/floor(/*@>1d600*/rtb_Divide2);
/*@>201c6*/if (/*@>21958*/rtIsNaN(/*@>1e3d7*/tmp)/*@>1e3e1*/ || /*@>2195a*/rtIsInf(/*@>1e3dc*/tmp)) {
    /*@>201ca*/tmp/*@>201c9*/ = /*@>1e3e3*/0.0;
} else {
    /*@>1e3e4*/tmp/*@>1e3e6*/ = /*@>2195c*/fmod(/*@>1e3e8*/tmp, /*@>1e3ec*/65536.0);
}
/*@>2315c*/ZT_VehCtrl_18B_B./*@>2b7cb*/DataTypeConversion1/*@>ba53*/ = /*@>1efe5*/(uint16_T)(/*@>1e3fa*/tmp/*@>1e3fd*/ < /*@>1e3f9*/0.0/*@>1e3fd*/ ? (int32_T)/*@>1e405*/(uint16_T)-/*@<1e40e*//*@>1e403*/(int16_T)/*@>1e411*/(uint16_T)-/*@<1e401*//*@>1e3fe*/tmp : (int32_T)/*@>1e414*/(uint16_T)/*@>1e406*/tmp);
/* {E!d2708}End of DataTypeConversion: '<S197>/Data Type Conversion1' */

/* {S!d2710}Sum: '<S190>/Add1' */
/*@>1db48*/rtb_Divide2/*@>ebe4*/ = /*@>1d606*/rtb_Add3/*@>ebe1*/ - /*@>1d604*/rtb_Divide2;
/* {S!d2712}DataTypeConversion: '<S197>/Data Type Conversion2' */
/*@>1e38b*/tmp/*@>1e38d*/ = /*@>2195e*/floor(/*@>1d608*/rtb_Divide2);
/*@>201cb*/if (/*@>21960*/rtIsNaN(/*@>1e38f*/tmp)/*@>1e399*/ || /*@>21962*/rtIsInf(/*@>1e394*/tmp)) {
    /*@>201cf*/tmp/*@>201ce*/ = /*@>1e39b*/0.0;
} else {
    /*@>1e39c*/tmp/*@>1e39e*/ = /*@>21964*/fmod(/*@>1e3a0*/tmp, /*@>1e3a4*/65536.0);
}
/*@>23162*/ZT_VehCtrl_18B_B./*@>2b7ce*/DataTypeConversion2/*@>ba65*/ = /*@>1eff7*/(uint16_T)(/*@>1e3b2*/tmp/*@>1e3b5*/ < /*@>1e3b1*/0.0/*@>1e3b5*/ ? (int32_T)/*@>1e3bd*/(uint16_T)-/*@<1e3c6*//*@>1e3bb*/(int16_T)/*@>1e3c9*/(uint16_T)-/*@<1e3b9*//*@>1e3b6*/tmp : (int32_T)/*@>1e3cc*/(uint16_T)/*@>1e3be*/tmp);
/* {E!d2712}End of DataTypeConversion: '<S197>/Data Type Conversion2' */

/* {S!d2714}Product: '<S190>/Divide4' incorporates:
 *  Constant: '<S190>/Freq_MC4'
 *  Constant: '<S190>/Pre4'
 *  DataStoreRead: '<S190>/Data Store Read3'
 */
/*@>1d60e*/rtb_Divide2/*@>ba7e*/ = /*@>1dc91*/1.25E+6/*@>1e384*/ / /*@[25fb4*/LSO17_ETC_FRQ/*@]*/;
/* {S!d2716}Product: '<S190>/Product2' incorporates:
 *  DataStoreRead: '<S190>/Data Store Read1'
 */
/*@>1d614*/rtb_Add3/*@>ba85*/ = /*@[25fd0*/LSO17_ETC_DC/*@]*//*@>1e380*/ * /*@>1d612*/rtb_Divide2;
/* {S!d2718}DataTypeConversion: '<S196>/Data Type Conversion1' */
/*@>1e33b*/tmp/*@>1e33d*/ = /*@>21966*/floor(/*@>1d616*/rtb_Add3);
/*@>201d0*/if (/*@>21968*/rtIsNaN(/*@>1e33f*/tmp)/*@>1e349*/ || /*@>2196a*/rtIsInf(/*@>1e344*/tmp)) {
    /*@>201d4*/tmp/*@>201d3*/ = /*@>1e34b*/0.0;
} else {
    /*@>1e34c*/tmp/*@>1e34e*/ = /*@>2196c*/fmod(/*@>1e350*/tmp, /*@>1e354*/65536.0);
}
/*@>23168*/ZT_VehCtrl_18B_B./*@>2b7d1*/DataTypeConversion1_n/*@>ba88*/ = /*@>1f00f*/(uint16_T)(/*@>1e362*/tmp/*@>1e365*/ < /*@>1e361*/0.0/*@>1e365*/ ? (int32_T)/*@>1e36d*/(uint16_T)-/*@<1e376*//*@>1e36b*/(int16_T)/*@>1e379*/(uint16_T)-/*@<1e369*//*@>1e366*/tmp : (int32_T)/*@>1e37c*/(uint16_T)/*@>1e36e*/tmp);
/* {E!d2718}End of DataTypeConversion: '<S196>/Data Type Conversion1' */

/* {S!d2720}Sum: '<S190>/Add2' */
/*@>1db4a*/rtb_Add3/*@>ebe9*/ = /*@>1d61c*/rtb_Divide2/*@>ebe6*/ - /*@>1d61a*/rtb_Add3;
/* {S!d2722}DataTypeConversion: '<S196>/Data Type Conversion2' */
/*@>1e2f3*/tmp/*@>1e2f5*/ = /*@>2196e*/floor(/*@>1d61e*/rtb_Add3);
/*@>201d5*/if (/*@>21970*/rtIsNaN(/*@>1e2f7*/tmp)/*@>1e301*/ || /*@>21972*/rtIsInf(/*@>1e2fc*/tmp)) {
    /*@>201d9*/tmp/*@>201d8*/ = /*@>1e303*/0.0;
} else {
    /*@>1e304*/tmp/*@>1e306*/ = /*@>21974*/fmod(/*@>1e308*/tmp, /*@>1e30c*/65536.0);
}
/*@>2316e*/ZT_VehCtrl_18B_B./*@>2b7d4*/DataTypeConversion2_i/*@>ba9a*/ = /*@>1f021*/(uint16_T)(/*@>1e31a*/tmp/*@>1e31d*/ < /*@>1e319*/0.0/*@>1e31d*/ ? (int32_T)/*@>1e325*/(uint16_T)-/*@<1e32e*//*@>1e323*/(int16_T)/*@>1e331*/(uint16_T)-/*@<1e321*//*@>1e31e*/tmp : (int32_T)/*@>1e334*/(uint16_T)/*@>1e326*/tmp);
/* {E!d2722}End of DataTypeConversion: '<S196>/Data Type Conversion2' */

/* {S!d2724}Product: '<S190>/Divide2' incorporates:
 *  Constant: '<S190>/Freq_MC5'
 *  Constant: '<S190>/Pre3'
 *  DataStoreRead: '<S190>/Data Store Read13'
 */
/*@>1d624*/rtb_Divide2/*@>bab3*/ = /*@>1dc92*/1.25E+6/*@>1e2ec*/ / /*@[25fec*/LSO18_ETC_FRQ/*@]*/;
/* {S!d2726}Product: '<S190>/Product6' incorporates:
 *  DataStoreRead: '<S190>/Data Store Read12'
 */
/*@>1d62a*/rtb_Add3/*@>baba*/ = /*@[26008*/LSO18_ETC_DC/*@]*//*@>1e2e8*/ * /*@>1d628*/rtb_Divide2;
/* {S!d2728}DataTypeConversion: '<S195>/Data Type Conversion1' */
/*@>1e2a3*/tmp/*@>1e2a5*/ = /*@>21976*/floor(/*@>1d62c*/rtb_Add3);
/*@>201da*/if (/*@>21978*/rtIsNaN(/*@>1e2a7*/tmp)/*@>1e2b1*/ || /*@>2197a*/rtIsInf(/*@>1e2ac*/tmp)) {
    /*@>201de*/tmp/*@>201dd*/ = /*@>1e2b3*/0.0;
} else {
    /*@>1e2b4*/tmp/*@>1e2b6*/ = /*@>2197c*/fmod(/*@>1e2b8*/tmp, /*@>1e2bc*/65536.0);
}
/*@>23174*/ZT_VehCtrl_18B_B./*@>2b7d7*/DataTypeConversion1_p/*@>babd*/ = /*@>1f035*/(uint16_T)(/*@>1e2ca*/tmp/*@>1e2cd*/ < /*@>1e2c9*/0.0/*@>1e2cd*/ ? (int32_T)/*@>1e2d5*/(uint16_T)-/*@<1e2de*//*@>1e2d3*/(int16_T)/*@>1e2e1*/(uint16_T)-/*@<1e2d1*//*@>1e2ce*/tmp : (int32_T)/*@>1e2e4*/(uint16_T)/*@>1e2d6*/tmp);
/* {E!d2728}End of DataTypeConversion: '<S195>/Data Type Conversion1' */

/* {S!d2730}Sum: '<S190>/Add3' */
/*@>1db4c*/rtb_Add3/*@>ebee*/ = /*@>1d632*/rtb_Divide2/*@>ebeb*/ - /*@>1d630*/rtb_Add3;
/* {S!d2732}DataTypeConversion: '<S195>/Data Type Conversion2' */
/*@>1e23b*/tmp/*@>1e23d*/ = /*@>2197e*/floor(/*@>1d634*/rtb_Add3);
/*@>201df*/if (/*@>21980*/rtIsNaN(/*@>1e23f*/tmp)/*@>1e25d*/ || /*@>21982*/rtIsInf(/*@>1e24e*/tmp)) {
    /*@>201e3*/tmp/*@>201e2*/ = /*@>1e25f*/0.0;
} else {
    /*@>1e260*/tmp/*@>1e262*/ = /*@>21984*/fmod(/*@>1e264*/tmp, /*@>1e268*/65536.0);
}
/*@>2317a*/ZT_VehCtrl_18B_B./*@>2b7da*/DataTypeConversion2_p/*@>bacf*/ = /*@>1f047*/(uint16_T)(/*@>1e282*/tmp/*@>1e285*/ < /*@>1e281*/0.0/*@>1e285*/ ? (int32_T)/*@>1e28d*/(uint16_T)-/*@<1e296*//*@>1e28b*/(int16_T)/*@>1e299*/(uint16_T)-/*@<1e289*//*@>1e286*/tmp : (int32_T)/*@>1e29c*/(uint16_T)/*@>1e28e*/tmp);
/* {E!d2732}End of DataTypeConversion: '<S195>/Data Type Conversion2' */






        
  


            
      
      
      
      
            
  
  
    
    

      
        

    


    
    
  
  

        

      
      
      


      
          
  

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
    
        

    
        
                    
          
          (void) memset((void *)&ZT_VehCtrl_18B_DW,  0,
 sizeof(DW_ZT_VehCtrl_18B_T));
          
          
        
        

        
    
        
/* exported global states */





























        


            VCU_FanSpeedLvl_num = 0.0F;
        

        


            VCU_DCDC1_En = 0.0F;
        

        


            DcdcCmd = 0.0F;
        

        


            DcacEpsCmd = 0.0F;
        

        


            DcacEpsMode = 0.0F;
        

        


            DcacAcCmd = 0.0F;
        

        


            VCU_ShrRlyCtl = 0.0F;
        

        


            VCU_HVACRlyCtl = 0.0F;
        

        


            VCU_PTCRlyCtl = 0.0F;
        

        


            VCU_HghVtgCnt = 0.0F;
        

        


            VCU_DCCpstRlyCtl = 0.0F;
        

        


            TWV_ON_Ctr = 0.0F;
        






























        


            Cnt_BMS6 = 0U;
        

        


            Cnt_TM_OUT = 0U;
        

        


            Cnt_HVC4 = 0U;
        

        


            VCU_Mode = 0U;
        

        


            Cnt_HVC7 = 0U;
        

        


            Cnt_ISG_OUT = 0U;
        

        


            Cnt_TWV_OUT = 0U;
        

        


            EnergyFlag = 0U;
        

        


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
        

        


            Cnt_MCU1_OUT = 0U;
        

        


            Cnt_ACU_OUT = 0U;
        

        


            Cnt_PDU_OUT = 0U;
        

        


            Cnt_BRS3 = 0U;
        

        


            ResetFlg = 0U;
        

        


            Cnt_HVC1 = 0U;
        

        


            Cnt_HVC3 = 0U;
        

        


            Init_flg_SPI = 0U;
        













        


            VCU_PowerOnReq = false;
        


        


            LS007 = false;
        

        


            LS012 = false;
        

        


            LS013 = false;
        


        


            LS018 = false;
        

        


            LS019 = false;
        




        


            VCU_UrgencyCutOffPowerReq = false;
        

        


            OnOffCmd = false;
        

        


            EDrv1_PowOnCmd = false;
        

        


            EDrv2_PowOnCmd = false;
        

        


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


          





    
  
    

    


  

          

  
      
      

    
    
    
        




      
                                

    

    
 
    

    
 
/* {S!d2764}Start for S-Function (fcan_mpc_config): '<Root>/FCAN_Config4' */
/*@[26097*/          
      

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
        MBDT_SetPeripheralClockControl(FLEXCAN0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_3);
        
        /* pin config */
        pin_settings_config_t pin_vect[] = {
        /* Tx pin */
        {
            .base              = SIUL2,
            .pinPortIdx        = 16U,
            .mux               = PORT_MUX_ALT1,
            .direction         = GPIO_OUTPUT_DIRECTION,
            .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
            .openDrain         = PORT_OPEN_DRAIN_DISABLED,
            .slewRateCtrlSel   = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
            .hysteresisSelect  = PORT_HYSTERESYS_DISABLED,
            .safeMode          = PORT_SAFE_MODE_ENABLED,
            .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
            .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
            .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
            .gpioBase          = PTB,
        },
        /* Rx pin */
        {
            .base              = SIUL2,
            .pinPortIdx        = 17U,
            .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
            .openDrain         = PORT_OPEN_DRAIN_DISABLED,
            .mux               = PORT_MUX_AS_GPIO,
            .gpioBase          = PTB,
            .inputMuxReg[0]    = 32U,
            .inputMux[0]       = PORT_MUX_ALT2,
            .inputMux[1]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[2]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[3]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[4]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[5]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[6]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[7]       = PORT_INPUT_MUX_NO_INIT,
            .outputBuffer      = PORT_OUTPUT_BUFFER_DISABLED,
            .inputBuffer       = PORT_INPUT_BUFFER_ENABLED,
            .safeMode          = PORT_SAFE_MODE_DISABLED,
            .slewRateCtrlSel   = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
            .hysteresisSelect  = PORT_HYSTERESYS_DISABLED,
            .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
        }};
        PINS_DRV_Init(2, pin_vect);

        FLEXCAN_DRV_Init(0, &canCom0_State, &canCom0_InitConfig);



        }


 /*@]*//* {S!d2766}Start for S-Function (fcan_mpc_config): '<Root>/FCAN_Config6' */
/*@[26098*/          
      

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
        MBDT_SetPeripheralClockControl(FLEXCAN1_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_3);
        
        /* pin config */
        pin_settings_config_t pin_vect[] = {
        /* Tx pin */
        {
            .base              = SIUL2,
            .pinPortIdx        = 14U,
            .mux               = PORT_MUX_ALT1,
            .direction         = GPIO_OUTPUT_DIRECTION,
            .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
            .openDrain         = PORT_OPEN_DRAIN_DISABLED,
            .slewRateCtrlSel   = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
            .hysteresisSelect  = PORT_HYSTERESYS_DISABLED,
            .safeMode          = PORT_SAFE_MODE_ENABLED,
            .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
            .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
            .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
            .gpioBase          = PTA,
        },
        /* Rx pin */
        {
            .base              = SIUL2,
            .pinPortIdx        = 15U,
            .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
            .openDrain         = PORT_OPEN_DRAIN_DISABLED,
            .mux               = PORT_MUX_AS_GPIO,
            .gpioBase          = PTA,
            .inputMuxReg[0]    = 33U,
            .inputMux[0]       = PORT_MUX_ALT1,
            .inputMux[1]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[2]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[3]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[4]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[5]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[6]       = PORT_INPUT_MUX_NO_INIT,
            .inputMux[7]       = PORT_INPUT_MUX_NO_INIT,
            .outputBuffer      = PORT_OUTPUT_BUFFER_DISABLED,
            .inputBuffer       = PORT_INPUT_BUFFER_ENABLED,
            .safeMode          = PORT_SAFE_MODE_DISABLED,
            .slewRateCtrlSel   = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
            .hysteresisSelect  = PORT_HYSTERESYS_DISABLED,
            .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
        }};
        PINS_DRV_Init(2, pin_vect);

        FLEXCAN_DRV_Init(1, &canCom1_State, &canCom1_InitConfig);



        }


 /*@]*//* {S!d2772}Start for S-Function (gpio_mpc_input): '<S40>/DI01' */
/*@[2609e*/          
                  {
                /* Enable clock */
                MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_3, MC_ME_PERIPH_CONFIG_2);

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2774}Start for S-Function (gpio_mpc_input): '<S40>/DI02' */
/*@[260a0*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2776}Start for S-Function (gpio_mpc_input): '<S40>/DI03' */
/*@[260a2*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2778}Start for S-Function (gpio_mpc_input): '<S40>/DI04' */
/*@[260a4*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2780}Start for S-Function (gpio_mpc_input): '<S40>/DI07' */
/*@[260a6*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2782}Start for S-Function (gpio_mpc_input): '<S40>/DI08' */
/*@[260a8*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2784}Start for S-Function (gpio_mpc_input): '<S40>/DI09' */
/*@[260aa*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2786}Start for S-Function (gpio_mpc_input): '<S40>/DI10' */
/*@[260ac*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2788}Start for S-Function (gpio_mpc_input): '<S40>/DI12' */
/*@[260ae*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2790}Start for S-Function (gpio_mpc_input): '<S40>/DI13' */
/*@[260b0*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2792}Start for S-Function (gpio_mpc_input): '<S40>/DI15' */
/*@[260b2*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2794}Start for S-Function (gpio_mpc_input): '<S40>/DI16' */
/*@[260b4*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2796}Start for S-Function (gpio_mpc_input): '<S40>/DI17' */
/*@[260b6*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2798}Start for S-Function (gpio_mpc_input): '<S40>/DI18' */
/*@[260b8*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2800}Start for S-Function (gpio_mpc_input): '<S153>/DI31' */
/*@[260ba*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2802}Start for S-Function (gpio_mpc_input): '<S153>/DI32' */
/*@[260bc*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2804}Start for S-Function (gpio_mpc_input): '<S153>/DI33' */
/*@[260be*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2806}Start for S-Function (gpio_mpc_input): '<S153>/DI34' */
/*@[260c0*/          
                  {

            /* Configure the input port init structure */
            const pin_settings_config_t pin =
            {
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


 /*@]*//* {S!d2808}Start for DiscretePulseGenerator: '<S6>/Pulse Generator2' */
/*@>23702*/ZT_VehCtrl_18B_DW./*@>2c927*/clockTickCounter/*@>e09f*/ = /*@>2c780*/0;
/* {S!d2810}Start for DiscretePulseGenerator: '<S6>/Pulse Generator' */
/*@>23708*/ZT_VehCtrl_18B_DW./*@>2c92a*/clockTickCounter_e/*@>e0b0*/ = /*@>2c783*/0;
/* {S!d2733}Start for S-Function (fcan_mpc_isr): '<S5>/CAN0_Rx_500' */
/*@[260c7*/          
      



        


            FLEXCAN_DRV_InstallEventCallback(0, fcan0_mpc_event_callback, (void *)0);

            

            

    



 /*@]*//* {E!d2733}End of Start for S-Function (fcan_mpc_isr): '<S5>/CAN0_Rx_500' */

/* {S!d2735}Start for S-Function (fcan_mpc_isr): '<S5>/CAN1_Rx_500' */
/*@[260ce*/          
      



        


            FLEXCAN_DRV_InstallEventCallback(1, fcan1_mpc_event_callback, (void *)0);

            

            

    



 /*@]*//* {E!d2735}End of Start for S-Function (fcan_mpc_isr): '<S5>/CAN1_Rx_500' */

/* {S!d2828}Start for S-Function (gpio_mpc_output): '<S191>/HS001' */
/*@[26101*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2830}Start for S-Function (gpio_mpc_output): '<S191>/HS007' */
/*@[26103*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2832}Start for S-Function (gpio_mpc_output): '<S191>/HS002 ' */
/*@[26105*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2834}Start for S-Function (gpio_mpc_output): '<S191>/HS003' */
/*@[26107*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2836}Start for S-Function (gpio_mpc_output): '<S191>/HS004' */
/*@[26109*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2838}Start for S-Function (gpio_mpc_output): '<S191>/HS005' */
/*@[2610b*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2840}Start for S-Function (gpio_mpc_output): '<S191>/HS010' */
/*@[2610d*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2842}Start for S-Function (gpio_mpc_output): '<S193>/LS_EN' incorporates:
 *  Constant: '<S193>/Constant'
 */
/*@[2610f*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2844}Start for S-Function (gpio_mpc_output): '<S193>/LS_rst2' incorporates:
 *  Constant: '<S193>/Constant1'
 */
/*@[26111*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2846}Start for S-Function (gpio_mpc_output): '<S193>/LS_rst1' incorporates:
 *  Constant: '<S193>/Constant2'
 */
/*@[26113*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2848}Start for S-Function (gpio_mpc_output): '<S194>/LS_EN1' incorporates:
 *  Constant: '<S194>/Constant1'
 */
/*@[26115*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2850}Start for S-Function (gpio_mpc_output): '<S194>/LS_rst' incorporates:
 *  Constant: '<S194>/Constant3'
 */
/*@[26117*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2852}Start for S-Function (gpio_mpc_output): '<S3>/HS1' */
/*@[26119*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2854}Start for S-Function (gpio_mpc_output): '<S3>/HS4' */
/*@[2611b*/          
      

            {

                /* Configure the output port init structure. */
                const pin_settings_config_t pin =
                {
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


 /*@]*//* {S!d2856}Start for DiscretePulseGenerator: '<S2>/Pulse Generator' */
/*@>2373e*/ZT_VehCtrl_18B_DW./*@>2c92d*/clockTickCounter_p/*@>e0d9*/ = /*@>2c786*/0;
/* {S!d2753}Start for Atomic SubSystem: '<Root>/Init' */
/* {S!d2754}Start for IfAction SubSystem: '<S1>/CAN_init' */
/* {S!d2858}Start for S-Function (fcan_mpc_receive): '<S8>/ACU1' */
/*@[2611c*/          
      


                    

                    

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



 /*@]*//* {S!d2860}Start for S-Function (fcan_mpc_receive): '<S8>/ACU2' */
/*@[2611d*/          
      


                    

                    

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



 /*@]*//* {S!d2862}Start for S-Function (fcan_mpc_receive): '<S8>/ACU3' */
/*@[2611e*/          
      


                    

                    

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



 /*@]*//* {S!d2864}Start for S-Function (fcan_mpc_receive): '<S8>/BMS Power Infor' */
/*@[2611f*/          
      


                    

                    

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



 /*@]*//* {S!d2866}Start for S-Function (fcan_mpc_receive): '<S8>/BMS Statistic_Temperature of Battery' */
/*@[26120*/          
      


                    

                    

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



 /*@]*//* {S!d2868}Start for S-Function (fcan_mpc_receive): '<S8>/BMS other Information3' */
/*@[26121*/          
      


                    

                    

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



 /*@]*//* {S!d2870}Start for S-Function (fcan_mpc_receive): '<S8>/BMSWarning Status' */
/*@[26122*/          
      


                    

                    

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



 /*@]*//* {S!d2872}Start for S-Function (fcan_mpc_receive): '<S8>/BMS_Information 1' */
/*@[26123*/          
      


                    

                    

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



 /*@]*//* {S!d2874}Start for S-Function (fcan_mpc_receive): '<S8>/BMS_Information 2' */
/*@[26124*/          
      


                    

                    

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



 /*@]*//* {S!d2876}Start for S-Function (fcan_mpc_receive): '<S8>/BRS2VCU1' */
/*@[26125*/          
      


                    

                    

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



 /*@]*//* {S!d2878}Start for S-Function (fcan_mpc_receive): '<S8>/BRS2VCU2' */
/*@[26126*/          
      


                    

                    

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



 /*@]*//* {S!d2880}Start for S-Function (fcan_mpc_receive): '<S8>/BRS2VCU3' */
/*@[26127*/          
      


                    

                    

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



 /*@]*//* {S!d2882}Start for S-Function (fcan_mpc_receive): '<S8>/DCDC1_1' */
/*@[26128*/          
      


                    

                    

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



 /*@]*//* {S!d2884}Start for S-Function (fcan_mpc_receive): '<S8>/DCDC1_2' */
/*@[26129*/          
      


                    

                    

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



 /*@]*//* {S!d2886}Start for S-Function (fcan_mpc_receive): '<S8>/HVC1_LV' */
/*@[2612a*/          
      


                    

                    

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



 /*@]*//* {S!d2888}Start for S-Function (fcan_mpc_receive): '<S8>/HVC3_Temp' */
/*@[2612b*/          
      


                    

                    

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



 /*@]*//* {S!d2890}Start for S-Function (fcan_mpc_receive): '<S8>/HVC4_RlySt' */
/*@[2612c*/          
      


                    

                    

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



 /*@]*//* {S!d2892}Start for S-Function (fcan_mpc_receive): '<S8>/HVC7_HV1' */
/*@[2612d*/          
      


                    

                    

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



 /*@]*//* {S!d2894}Start for S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS1' */
/*@[2612e*/          
      


                    

                    

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



 /*@]*//* {S!d2896}Start for S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS2' */
/*@[2612f*/          
      


                    

                    

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



 /*@]*//* {S!d2898}Start for S-Function (fcan_mpc_receive): '<S8>/ISG MCU STATUS3' */
/*@[26130*/          
      


                    

                    

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



 /*@]*//* {S!d2900}Start for S-Function (fcan_mpc_receive): '<S8>/MCU1Msg1' */
/*@[26131*/          
      


                    

                    

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



 /*@]*//* {S!d2902}Start for S-Function (fcan_mpc_receive): '<S8>/MCU1Msg2' */
/*@[26132*/          
      


                    

                    

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



 /*@]*//* {S!d2904}Start for S-Function (fcan_mpc_receive): '<S8>/MCU1Msg3' */
/*@[26133*/          
      


                    

                    

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



 /*@]*//* {S!d2906}Start for S-Function (fcan_mpc_receive): '<S8>/MCU2Msg1' */
/*@[26134*/          
      


                    

                    

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



 /*@]*//* {S!d2908}Start for S-Function (fcan_mpc_receive): '<S8>/MCU2Msg2' */
/*@[26135*/          
      


                    

                    

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



 /*@]*//* {S!d2910}Start for S-Function (fcan_mpc_receive): '<S8>/MCU2Msg3' */
/*@[26136*/          
      


                    

                    

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



 /*@]*//* {S!d2912}Start for S-Function (fcan_mpc_receive): '<S8>/OBC_Charger Status' */
/*@[26137*/          
      


                    

                    

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



 /*@]*//* {S!d2914}Start for S-Function (fcan_mpc_receive): '<S8>/PDU_RelaySts' */
/*@[26138*/          
      


                    

                    

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



 /*@]*//* {S!d2916}Start for S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS1' */
/*@[26139*/          
      


                    

                    

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



 /*@]*//* {S!d2918}Start for S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS2' */
/*@[2613a*/          
      


                    

                    

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



 /*@]*//* {S!d2920}Start for S-Function (fcan_mpc_receive): '<S8>/TM MCU STATUS3' */
/*@[2613b*/          
      


                    

                    

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



 /*@]*//* {S!d2922}Start for S-Function (fcan_mpc_receive): '<S8>/TMS2VCU' */
/*@[2613c*/          
      


                    

                    

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



 /*@]*//* {S!d2924}Start for S-Function (fcan_mpc_receive): '<S8>/TWV' */
/*@[2613d*/          
      


                    

                    

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



 /*@]*//* {E!d2754}End of Start for SubSystem: '<S1>/CAN_init' */
/* {E!d2753}End of Start for SubSystem: '<Root>/Init' */

/* {S!d2926}Start for S-Function (adc_mpc_config): '<Root>/ADC_Config' */
/*@[2613e*/          
      


    




        MBDT_SetPeripheralClockControl(ADC0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);

        PINS_DRV_Init(10U, adc0_PinsCfg);

    ADC_DRV_Reset(0);

        ADC_DRV_DoCalibration(0);

        ADC_DRV_SetPresamplingSource(0, ADC_CHAN_GROUP_0, ADC_PRESAMPLE_SRC0);
        ADC_DRV_SetPresamplingSource(0, ADC_CHAN_GROUP_1, ADC_PRESAMPLE_SRC0);
        ADC_DRV_SetPresamplingSource(0, ADC_CHAN_GROUP_2, ADC_PRESAMPLE_SRC0);

        ADC_DRV_ChainConfig(0, &adc0_chain_config);

    ADC_DRV_ConfigConverter(0, &adc0_config);




 /*@]*//* {S!d2928}Start for S-Function (adc_mpc_config): '<Root>/ADC_Config1' */
/*@[2613f*/          
      


    




        MBDT_SetPeripheralClockControl(ADC1_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);

        PINS_DRV_Init(5U, adc1_PinsCfg);

    ADC_DRV_Reset(1);

        ADC_DRV_DoCalibration(1);

        ADC_DRV_SetPresamplingSource(1, ADC_CHAN_GROUP_0, ADC_PRESAMPLE_SRC0);
        ADC_DRV_SetPresamplingSource(1, ADC_CHAN_GROUP_1, ADC_PRESAMPLE_SRC0);
        ADC_DRV_SetPresamplingSource(1, ADC_CHAN_GROUP_2, ADC_PRESAMPLE_SRC0);

        ADC_DRV_ChainConfig(1, &adc1_chain_config);

    ADC_DRV_ConfigConverter(1, &adc1_config);




 /*@]*//* {S!d2930}Start for S-Function (fm_mpc_config): '<Root>/FreeMaster_Config' */
/*@[26140*/          
                  pin_settings_config_t pin_vect[] = {
            /* Tx pin */
            {
                .base              = SIUL2,
                .pinPortIdx        = 94U,
                .mux               = PORT_MUX_ALT2,
                .direction         = GPIO_OUTPUT_DIRECTION,
                .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                .slewRateCtrlSel   = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
                .hysteresisSelect  = PORT_HYSTERESYS_DISABLED,
                .safeMode          = PORT_SAFE_MODE_ENABLED,
                .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                .gpioBase          = PTF,
            },
            /* Rx pin */
            {
                .base              = SIUL2,
                .pinPortIdx        = 95U,
                .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                .mux               = PORT_MUX_AS_GPIO,
                .gpioBase          = PTF,
                .inputMuxReg[0]    = 34U,
                .inputMux[0]       = PORT_MUX_ALT1,
                .inputMux[1]       = PORT_INPUT_MUX_NO_INIT,
                .inputMux[2]       = PORT_INPUT_MUX_NO_INIT,
                .inputMux[3]       = PORT_INPUT_MUX_NO_INIT,
                .inputMux[4]       = PORT_INPUT_MUX_NO_INIT,
                .inputMux[5]       = PORT_INPUT_MUX_NO_INIT,
                .inputMux[6]       = PORT_INPUT_MUX_NO_INIT,
                .inputMux[7]       = PORT_INPUT_MUX_NO_INIT,
                .outputBuffer      = PORT_OUTPUT_BUFFER_DISABLED,
                .inputBuffer       = PORT_INPUT_BUFFER_ENABLED,
                .safeMode          = PORT_SAFE_MODE_DISABLED,
                .slewRateCtrlSel   = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
                .hysteresisSelect  = PORT_HYSTERESYS_DISABLED,
                .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
            }};
        PINS_DRV_Init(2, pin_vect);

        
        

        /* Initialize FreeMaster. */
        freemaster_interface_init();

        FMSTR_Init();


 /*@]*//* {S!d2932}Start for S-Function (spi_mpc_config): '<Root>/SPI_Config_CANB&LS' */
/*@[26141*/          
      

        

        {
                /* Enable SPI clock */
                MBDT_SetPeripheralClockControl(SPI3_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_3);

                /* Enable clock for pins */
                MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_3);
        }

        {
                /* Setup SPI pins */
                pin_settings_config_t spi_pin_mux[5] = {
                    /* SIN pin settings */
                    {
                        /* PTE15 pin selected */
                        .base              = SIUL2,
                        .pinPortIdx        = 79U,
                        .mux               = PORT_MUX_AS_GPIO,
                        .outputBuffer      = PORT_OUTPUT_BUFFER_DISABLED,
                        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                        .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                        .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                        .safeMode          = PORT_SAFE_MODE_ENABLED,
                        .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                        .inputBuffer       = PORT_INPUT_BUFFER_ENABLED,
                        .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                        .gpioBase          = PTE,
                        .intConfig         =
                        {
                            .intEdgeSel    = SIUL2_INT_DISABLE
                        },
                        .inputMux[0]       = PORT_MUX_ALT4,
                        .inputInvert[0]    = PORT_INVERT_INPUT_DISABLED,
                        .inputMuxReg[0]    = 50U,
                        .inputMux[1]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[2]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[3]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[4]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[5]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[6]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[7]       = PORT_INPUT_MUX_NO_INIT
                    },
                    /* SOUT pin settings */
                    {
                        /* PTE14 pin selected */
                        .base              = SIUL2,
                        .pinPortIdx        = 78U,
                        .mux               = PORT_MUX_ALT2,
                        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                        .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                        .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                        .safeMode          = PORT_SAFE_MODE_ENABLED,
                        .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                        .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                        .gpioBase          = PTE
                    },
                        /* PCS settings */
                        {
                            /* PTD12 pin selected */
                            .base              = SIUL2,
                            .pinPortIdx        = 60U,
                            .mux               = PORT_MUX_ALT3,
                            .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                            .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                            .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                            .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                            .safeMode          = PORT_SAFE_MODE_ENABLED,
                            .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                            .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                            .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                            .gpioBase          = PTD
                        },
                        /* PCS settings */
                        {
                            /* PTD14 pin selected */
                            .base              = SIUL2,
                            .pinPortIdx        = 62U,
                            .mux               = PORT_MUX_ALT3,
                            .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                            .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                            .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                            .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                            .safeMode          = PORT_SAFE_MODE_ENABLED,
                            .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                            .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                            .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                            .gpioBase          = PTD
                        },
                    /* SCK */
                    {
                        /* PTE13 pin selected */
                        .base              = SIUL2,
                        .pinPortIdx        = 77U,
                        .mux               = PORT_MUX_ALT4,
                        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                        .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                        .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                        .safeMode          = PORT_SAFE_MODE_ENABLED,
                        .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                        .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                        .gpioBase          = PTE
                    }
                };
            PINS_DRV_Init(5, spi_pin_mux);

            /* Configure the SPI init structure. */
            dspi_master_config_t spiConfig3 =
            {
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


 /*@]*//* {S!d2934}Start for S-Function (spi_mpc_config): '<Root>/SPI_Config_EEPROM&LS' */
/*@[26142*/          
      

        

        {
                /* Enable SPI clock */
                MBDT_SetPeripheralClockControl(SPI0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_3);

                /* Enable clock for pins */
                MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_3);
        }

        {
                /* Setup SPI pins */
                pin_settings_config_t spi_pin_mux[6] = {
                    /* SIN pin settings */
                    {
                        /* PTC7 pin selected */
                        .base              = SIUL2,
                        .pinPortIdx        = 39U,
                        .mux               = PORT_MUX_AS_GPIO,
                        .outputBuffer      = PORT_OUTPUT_BUFFER_DISABLED,
                        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                        .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                        .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                        .safeMode          = PORT_SAFE_MODE_ENABLED,
                        .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                        .inputBuffer       = PORT_INPUT_BUFFER_ENABLED,
                        .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                        .gpioBase          = PTC,
                        .intConfig         =
                        {
                            .intEdgeSel    = SIUL2_INT_DISABLE
                        },
                        .inputMux[0]       = PORT_MUX_ALT1,
                        .inputInvert[0]    = PORT_INVERT_INPUT_DISABLED,
                        .inputMuxReg[0]    = 41U,
                        .inputMux[1]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[2]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[3]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[4]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[5]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[6]       = PORT_INPUT_MUX_NO_INIT,
                        .inputMux[7]       = PORT_INPUT_MUX_NO_INIT
                    },
                    /* SOUT pin settings */
                    {
                        /* PTC6 pin selected */
                        .base              = SIUL2,
                        .pinPortIdx        = 38U,
                        .mux               = PORT_MUX_ALT1,
                        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                        .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                        .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                        .safeMode          = PORT_SAFE_MODE_ENABLED,
                        .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                        .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                        .gpioBase          = PTC
                    },
                        /* PCS settings */
                        {
                            /* PTC4 pin selected */
                            .base              = SIUL2,
                            .pinPortIdx        = 36U,
                            .mux               = PORT_MUX_ALT1,
                            .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                            .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                            .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                            .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                            .safeMode          = PORT_SAFE_MODE_ENABLED,
                            .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                            .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                            .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                            .gpioBase          = PTC
                        },
                        /* PCS settings */
                        {
                            /* PTG8 pin selected */
                            .base              = SIUL2,
                            .pinPortIdx        = 104U,
                            .mux               = PORT_MUX_ALT2,
                            .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                            .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                            .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                            .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                            .safeMode          = PORT_SAFE_MODE_ENABLED,
                            .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                            .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                            .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                            .gpioBase          = PTG
                        },
                        /* PCS settings */
                        {
                            /* PTD8 pin selected */
                            .base              = SIUL2,
                            .pinPortIdx        = 56U,
                            .mux               = PORT_MUX_ALT3,
                            .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                            .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                            .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                            .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                            .safeMode          = PORT_SAFE_MODE_ENABLED,
                            .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                            .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                            .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                            .gpioBase          = PTD
                        },
                    /* SCK */
                    {
                        /* PTC5 pin selected */
                        .base              = SIUL2,
                        .pinPortIdx        = 37U,
                        .mux               = PORT_MUX_ALT1,
                        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
                        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
                        .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
                        .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
                        .safeMode          = PORT_SAFE_MODE_ENABLED,
                        .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
                        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
                        .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
                        .gpioBase          = PTC
                    }
                };
            PINS_DRV_Init(6, spi_pin_mux);

            /* Configure the SPI init structure. */
            dspi_master_config_t spiConfig0 =
            {
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


 /*@]*//* {S!d2936}Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config' */
/*@[26143*/          
      
    
    



    


    /* Enable clock for pins */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);
    PINS_DRV_Init(1, eTmr0Ch2PinsCfg);

    /* Un-gate eTimer clock*/
    MBDT_SetPeripheralClockControl(ETIMER0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);

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



 /*@]*//* {S!d2938}Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config1' */
/*@[26144*/          
      
    
    



    


    /* Enable clock for pins */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);
    PINS_DRV_Init(1, eTmr1Ch2PinsCfg);

    /* Un-gate eTimer clock*/
    MBDT_SetPeripheralClockControl(ETIMER1_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);

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



 /*@]*//* {S!d2940}Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config10' */
/*@[26145*/          
      
    
    



    


    /* Enable clock for pins */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);
    PINS_DRV_Init(1, eTmr0Ch3PinsCfg);


    /* Initializes the channel 3. */
    ETIMER_DRV_InitChannel(ETIMER_MODULE_0, ETIMER_IRQ_CH3, &eTmr0Ch3Cfg);
    
    /* Setting the CNTR channel 3 value. */
	ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_0, 3, 1U);






 /*@]*//* {S!d2942}Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config11' */
/*@[26146*/          
      
    
    



    


    /* Enable clock for pins */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);
    PINS_DRV_Init(1, eTmr0Ch5PinsCfg);


    /* Initializes the channel 5. */
    ETIMER_DRV_InitChannel(ETIMER_MODULE_0, ETIMER_IRQ_CH5, &eTmr0Ch5Cfg);
    
    /* Setting the CNTR channel 5 value. */
	ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_0, 5, 1U);






 /*@]*//* {S!d2944}Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config12' */
/*@[26147*/          
      
    
    



    


    /* Enable clock for pins */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);
    PINS_DRV_Init(1, eTmr2Ch2PinsCfg);

    /* Un-gate eTimer clock*/
    MBDT_SetPeripheralClockControl(ETIMER2_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);

    /* Initializes the ETIMER module. */
    ETIMER_DRV_Init(ETIMER_MODULE_2);

    /* Initializes the channel 2. */
    ETIMER_DRV_InitChannel(ETIMER_MODULE_2, ETIMER_IRQ_CH2, &eTmr2Ch2Cfg);
    
    /* Setting the CNTR channel 2 value. */
	ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_2, 2, 1U);






 /*@]*//* {S!d2946}Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config2' */
/*@[26148*/          
      
    
    



    


    /* Enable clock for pins */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);
    PINS_DRV_Init(1, eTmr1Ch3PinsCfg);


    /* Initializes the channel 3. */
    ETIMER_DRV_InitChannel(ETIMER_MODULE_1, ETIMER_IRQ_CH3, &eTmr1Ch3Cfg);
    
    /* Setting the CNTR channel 3 value. */
	ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_1, 3, 0U);


    /* Starts channel 3 counting. */
    ETIMER_DRV_StartTimerChannels(ETIMER_MODULE_1, ETIMER_ENABLE_CH3);

    /* Starts channel 3 capture arming*/
    ETIMER_DRV_StartCapture(ETIMER_MODULE_1, 3);



 /*@]*//* {S!d2948}Start for S-Function (etimer_mpc_config): '<Root>/eTimer_Config3' */
/*@[26149*/          
      
    
    



    


    /* Enable clock for pins */
    MBDT_SetPeripheralClockControl(SIUL0_CLK, MC_ME_PERIPH_CONFIG_2, MC_ME_PERIPH_CONFIG_2);
    PINS_DRV_Init(1, eTmr1Ch1PinsCfg);


    /* Initializes the channel 1. */
    ETIMER_DRV_InitChannel(ETIMER_MODULE_1, ETIMER_IRQ_CH1, &eTmr1Ch1Cfg);
    
    /* Setting the CNTR channel 1 value. */
	ETIMER_DRV_SetTimerTicks(ETIMER_MODULE_1, 1, 0U);


    /* Starts channel 1 counting. */
    ETIMER_DRV_StartTimerChannels(ETIMER_MODULE_1, ETIMER_ENABLE_CH1);

    /* Starts channel 1 capture arming*/
    ETIMER_DRV_StartCapture(ETIMER_MODULE_1, 1);



 /*@]*//* {S!d2950}Start for DataStoreMemory: '<Root>/Data Store Memory106' */
/*@[26327*/HSO08_PWM_FRQ = /*@>2d223*/200.0F;
/*@]*//* {S!d2952}Start for DataStoreMemory: '<Root>/Data Store Memory108' */
/*@[2630b*/HSO14_PWM_FRQ = /*@>2d235*/200.0F;
/*@]*//* {S!d2954}Start for DataStoreMemory: '<Root>/Data Store Memory110' */
/*@[262ef*/LSO18_ETC_FRQ = /*@>2d247*/200.0F;
/*@]*//* {S!d2956}Start for DataStoreMemory: '<Root>/Data Store Memory112' */
/*@[262d3*/LSO19_PWM_FRQ = /*@>2d259*/200.0F;
/*@]*//* {S!d2958}Start for DataStoreMemory: '<Root>/Data Store Memory113' */
/*@[262b7*/DI31_PWM_DC = /*@>2d26b*/0.5F;
/*@]*//* {S!d2960}Start for DataStoreMemory: '<Root>/Data Store Memory114' */
/*@[2629b*/DI31_PWM_FRQ = /*@>2d27d*/200.0F;
/*@]*//* {S!d2962}Start for DataStoreMemory: '<Root>/Data Store Memory115' */
/*@[2627f*/DI32_PWM_DC = /*@>2d28f*/0.5F;
/*@]*//* {S!d2964}Start for DataStoreMemory: '<Root>/Data Store Memory117' */
/*@[26263*/DI32_PWM_FRQ = /*@>2d2a1*/200.0F;
/*@]*//* {S!d2966}Start for DataStoreMemory: '<Root>/Data Store Memory118' */
/*@[26247*/DI33_PWM_DC = /*@>2d2b3*/0.5F;
/*@]*//* {S!d2968}Start for DataStoreMemory: '<Root>/Data Store Memory119' */
/*@[2622b*/DI33_PWM_FRQ = /*@>2d2c5*/200.0F;
/*@]*//* {S!d2970}Start for DataStoreMemory: '<Root>/Data Store Memory120' */
/*@[2620f*/DI34_PWM_DC = /*@>2d2d7*/0.5F;
/*@]*//* {S!d2972}Start for DataStoreMemory: '<Root>/Data Store Memory121' */
/*@[261f3*/DI34_PWM_FRQ = /*@>2d2e9*/200.0F;
/*@]*//* {S!d2974}Start for DataStoreMemory: '<Root>/Data Store Memory122' */
/*@[261d7*/LSO17_ETC_FRQ = /*@>2d2fb*/200.0F;
/*@]*//* {S!d2976}Start for DataStoreMemory: '<Root>/Data Store Memory124' */
/*@[261bb*/LSO3_ETC_FRQ = /*@>2d30d*/200.0F;
/*@]*//* {S!d2978}Start for DataStoreMemory: '<Root>/Data Store Memory129' */
/*@[2619f*/HS008_ETC_FRQ = /*@>2d31f*/200.0F;
/*@]*//* {S!d2980}Start for DataStoreMemory: '<Root>/Data Store Memory130' */
/*@[26183*/HSO14_ETC_FRQ = /*@>2d331*/200.0F;
/*@]*//* {S!d2982}Start for DataStoreMemory: '<Root>/Data Store Memory132' */
/*@[26167*/LSO19_ETC_FRQ = /*@>2d343*/200.0F;
/*@]*/    

    
 
ZT_VehCtrl_18B_PrevZCX.ACU_Trig_ZCE = UNINITIALIZED_ZCSIG;
ZT_VehCtrl_18B_PrevZCX.BMS_Trig_ZCE = UNINITIALIZED_ZCSIG;
ZT_VehCtrl_18B_PrevZCX.BRS_Trig_ZCE = UNINITIALIZED_ZCSIG;
ZT_VehCtrl_18B_PrevZCX.DCDC_Trig_ZCE = UNINITIALIZED_ZCSIG;
ZT_VehCtrl_18B_PrevZCX.HVC_Trig_ZCE = UNINITIALIZED_ZCSIG;
ZT_VehCtrl_18B_PrevZCX.PDU_Trig_ZCE = UNINITIALIZED_ZCSIG;
ZT_VehCtrl_18B_PrevZCX.TMS_Trig_ZCE = UNINITIALIZED_ZCSIG;
ZT_VehCtrl_18B_PrevZCX.TWV_Trig_ZCE = UNINITIALIZED_ZCSIG;
/* {S!d2984}SystemInitialize for Chart: '<S2>/Chart1' */
/*@>23744*/ZT_VehCtrl_18B_DW./*@>2c930*/is_active_c23_ZT_VehCtrl_18B/*@>e6f4*/ = /*@>2c789*/0U;
/*@>2374a*/ZT_VehCtrl_18B_DW./*@>2c933*/is_c23_ZT_VehCtrl_18B/*@>e6f5*/ = /*@>1dd60*/ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;
/* {S!d2986}SystemInitialize for Chart: '<S2>/Chart2' */
/*@>23750*/ZT_VehCtrl_18B_DW./*@>2c936*/is_active_c24_ZT_VehCtrl_18B/*@>e703*/ = /*@>2c78c*/0U;
/*@>23756*/ZT_VehCtrl_18B_DW./*@>2c939*/is_c24_ZT_VehCtrl_18B/*@>e704*/ = /*@>1dd5a*/ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;
/* {S!d2988}SystemInitialize for Chart: '<S2>/Chart' */
/*@>2375c*/ZT_VehCtrl_18B_DW./*@>2c93c*/is_active_c22_ZT_VehCtrl_18B/*@>e712*/ = /*@>2c78f*/0U;
/*@>23762*/ZT_VehCtrl_18B_DW./*@>2c93f*/is_c22_ZT_VehCtrl_18B/*@>e713*/ = /*@>1dd54*/ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;
/* {S!d2757}SystemInitialize for IfAction SubSystem: '<S2>/CS1 LS' */
/* {S!d2990}SystemInitialize for Chart: '<S10>/Chart' */
/*@>23768*/ZT_VehCtrl_18B_DW./*@>2c942*/is_active_c11_ZT_VehCtrl_18B/*@>e73f*/ = /*@>2c792*/0U;
/*@>2376e*/ZT_VehCtrl_18B_DW./*@>2c945*/is_c11_ZT_VehCtrl_18B/*@>e740*/ = /*@>1dd4e*/ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;
/* {E!d2757}End of SystemInitialize for SubSystem: '<S2>/CS1 LS' */

/* {S!d2759}SystemInitialize for IfAction SubSystem: '<S2>/CS3 LS' */
/* {S!d2992}SystemInitialize for Chart: '<S12>/Chart' */
/*@>23774*/ZT_VehCtrl_18B_DW./*@>2c948*/is_active_c14_ZT_VehCtrl_18B/*@>e74e*/ = /*@>2c795*/0U;
/*@>2377a*/ZT_VehCtrl_18B_DW./*@>2c94b*/is_c14_ZT_VehCtrl_18B/*@>e74f*/ = /*@>1dd48*/ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;
/* {E!d2759}End of SystemInitialize for SubSystem: '<S2>/CS3 LS' */

/* {S!d2761}SystemInitialize for IfAction SubSystem: '<S2>/CS5 LS' */
/* {S!d2994}SystemInitialize for Chart: '<S13>/Chart' */
/*@>23780*/ZT_VehCtrl_18B_DW./*@>2c94e*/is_active_c21_ZT_VehCtrl_18B/*@>e75d*/ = /*@>2c798*/0U;
/*@>23786*/ZT_VehCtrl_18B_DW./*@>2c951*/is_c21_ZT_VehCtrl_18B/*@>e75e*/ = /*@>1dd42*/ZT_VehCtrl_18B_IN_NO_ACTIVE_CHILD;
/* {E!d2761}End of SystemInitialize for SubSystem: '<S2>/CS5 LS' */
        








      
    
    
        

  


      
  


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

