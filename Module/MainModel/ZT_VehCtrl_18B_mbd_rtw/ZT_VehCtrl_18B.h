/* 
 * File: ZT_VehCtrl_18B.h
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
  #endif /* ZT_VehCtrl_18B_COMMON_INCLUDES_ */
  

    #include "ZT_VehCtrl_18B_types.h"    

#include "rt_zcfcn.h"

#include "rt_nonfinite.h"

#include "rtGetInf.h"



  


  


  


  
    /* Macros for accessing real-time model data structure */
    

    #ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm) ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val) ((rtm)->errorStatus = (val))
#endif


  
   
    
    
      



  


  


  


  


              /* Block signals (default storage) */
                  
          
  
     typedef struct   {
  

      /*@[2d344*/      



        
          
          
		
            
          
            

              /*@[2d345*/
                          
            
                   CAN_MESSAGE_BUS VCU_TWV; /* '<S185>/VCU_TWV' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d346*/
                          
            
                   CAN_MESSAGE_BUS TMS; /* '<S184>/TMS' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d347*/
                          
            
                   CAN_MESSAGE_BUS VCU_PDU; /* '<S182>/VCU_PDU' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d348*/
                          
            
                   CAN_MESSAGE_BUS Ctrl_HVC; /* '<S176>/Ctrl_HVC' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d349*/
                          
            
                   CAN_MESSAGE_BUS VCU_DCDC1; /* '<S174>/VCU_DCDC1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d34a*/
                          
            
                   CAN_MESSAGE_BUS VCU2BRS; /* '<S173>/VCU2BRS' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d34b*/
                          
            
                   CAN_MESSAGE_BUS VCU_BMS; /* '<S172>/VCU_BMS' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d34c*/
                          
            
                   CAN_MESSAGE_BUS VCU_ACU1; /* '<S171>/VCU_ACU1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d34d*/
                          
            
                   real_T DataTypeConversion; /* '<S184>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d34e*/
                          
            
                   real_T high; /* '<S12>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d34f*/
                          
            
                   real_T low; /* '<S12>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d350*/
                          
            
                   uint32_T CAN0_Rx_500_o3; /* '<S5>/CAN0_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d351*/
                          
            
                   uint32_T CAN1_Rx_500_o3; /* '<S5>/CAN1_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d352*/
                          
            
                   real32_T DataStoreRead10; /* '<S185>/Data Store Read10' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d353*/
                          
            
                   real32_T DataStoreRead9; /* '<S182>/Data Store Read9' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d354*/
                          
            
                   real32_T DataStoreRead6; /* '<S182>/Data Store Read6' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d355*/
                          
            
                   real32_T DataStoreRead8; /* '<S182>/Data Store Read8' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d356*/
                          
            
                   real32_T DataTypeConversion_m; /* '<S182>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d357*/
                          
            
                   real32_T DataStoreRead7; /* '<S182>/Data Store Read7' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d358*/
                          
            
                   real32_T DataStoreRead5; /* '<S182>/Data Store Read5' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d359*/
                          
            
                   real32_T DataTypeConversion15; /* '<S176>/Data Type Conversion15' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d35a*/
                          
            
                   real32_T DataStoreRead5_j; /* '<S174>/Data Store Read5' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d35b*/
                          
            
                   real32_T DataTypeConversion3; /* '<S173>/Data Type Conversion3' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d35c*/
                          
            
                   real32_T Switch; /* '<S189>/Switch' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d35d*/
                          
            
                   real32_T Switch_f; /* '<S188>/Switch' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d35e*/
                          
            
                   real32_T Switch_e; /* '<S187>/Switch' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d35f*/
                          
            
                   real32_T Switch_ef; /* '<S186>/Switch' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d360*/
                          
            
                   uint16_T ADC_Start[5]; /* '<S37>/ADC_Start' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d361*/
                          
            
                   uint16_T ADC_Start1[10]; /* '<S37>/ADC_Start1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d362*/
                          
            
                   uint16_T CAN0_Rx_500_o6; /* '<S5>/CAN0_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d363*/
                          
            
                   uint16_T CAN1_Rx_500_o6; /* '<S5>/CAN1_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d364*/
                          
            
                   uint16_T DataTypeConversion1; /* '<S197>/Data Type Conversion1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d365*/
                          
            
                   uint16_T DataTypeConversion2; /* '<S197>/Data Type Conversion2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d366*/
                          
            
                   uint16_T DataTypeConversion1_n; /* '<S196>/Data Type Conversion1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d367*/
                          
            
                   uint16_T DataTypeConversion2_i; /* '<S196>/Data Type Conversion2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d368*/
                          
            
                   uint16_T DataTypeConversion1_p; /* '<S195>/Data Type Conversion1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d369*/
                          
            
                   uint16_T DataTypeConversion2_p; /* '<S195>/Data Type Conversion2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d36a*/
                          
            
                   uint8_T CAN0_Rx_500_o2; /* '<S5>/CAN0_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d36b*/
                          
            
                   uint8_T CAN0_Rx_500_o4[8]; /* '<S5>/CAN0_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d36c*/
                          
            
                   uint8_T CAN0_Rx_500_o5; /* '<S5>/CAN0_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d36d*/
                          
            
                   uint8_T CAN1_Rx_500_o2; /* '<S5>/CAN1_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d36e*/
                          
            
                   uint8_T CAN1_Rx_500_o4[8]; /* '<S5>/CAN1_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d36f*/
                          
            
                   uint8_T CAN1_Rx_500_o5; /* '<S5>/CAN1_Rx_500' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d370*/
                          
            
                   uint8_T DataStoreRead1; /* '<S184>/Data Store Read1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d371*/
                          
            
                   uint8_T SPI_Master_Transfer_To2[2]; /* '<S211>/SPI_Master_Transfer_To2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d372*/
                          
            
                   uint8_T VectorConcatenate2[2]; /* '<S211>/Vector Concatenate2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d373*/
                          
            
                   uint8_T SPI_Master_Transfer_To1[2]; /* '<S207>/SPI_Master_Transfer_To1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d374*/
                          
            
                   uint8_T VectorConcatenate1[2]; /* '<S207>/Vector Concatenate1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d375*/
                          
            
                   uint8_T SPI_Master_Transfer_To1_j[2]; /* '<S206>/SPI_Master_Transfer_To1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d376*/
                          
            
                   uint8_T VectorConcatenate1_l[2]; /* '<S206>/Vector Concatenate1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d377*/
                          
            
                   uint8_T SPI_Master_Transfer_To2_a[2]; /* '<S12>/SPI_Master_Transfer_To2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d378*/
                          
            
                   uint8_T VectorConcatenate1_a[2]; /* '<S12>/Vector Concatenate1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d379*/
                          
            
                   uint8_T SPI_Master_Transfer_To1_c[2]; /* '<S13>/SPI_Master_Transfer_To1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d37a*/
                          
            
                   uint8_T VectorConcatenate1_n[2]; /* '<S13>/Vector Concatenate1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d37b*/
                          
            
                   uint8_T SPI_Master_Transfer_To1_g[2]; /* '<S10>/SPI_Master_Transfer_To1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d37c*/
                          
            
                   uint8_T VectorConcatenate1_m[2]; /* '<S10>/Vector Concatenate1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d37d*/
                          
            
                   uint8_T SPI_Master_Transfer_To2_h[2]; /* '<S11>/SPI_Master_Transfer_To2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d37e*/
                          
            
                   boolean_T DI01_h; /* '<S40>/DI01' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d37f*/
                          
            
                   boolean_T DI02_c; /* '<S40>/DI02' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d380*/
                          
            
                   boolean_T DI03_h; /* '<S40>/DI03' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d381*/
                          
            
                   boolean_T DI04_o; /* '<S40>/DI04' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d382*/
                          
            
                   boolean_T DI07_f; /* '<S40>/DI07' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d383*/
                          
            
                   boolean_T DI08_e; /* '<S40>/DI08' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d384*/
                          
            
                   boolean_T DI09_a; /* '<S40>/DI09' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d385*/
                          
            
                   boolean_T DI10_g; /* '<S40>/DI10' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d386*/
                          
            
                   boolean_T DI12_h; /* '<S40>/DI12' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d387*/
                          
            
                   boolean_T DI13_m; /* '<S40>/DI13' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d388*/
                          
            
                   boolean_T DI15_b; /* '<S40>/DI15' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d389*/
                          
            
                   boolean_T DI16_k; /* '<S40>/DI16' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d38a*/
                          
            
                   boolean_T DI17_c; /* '<S40>/DI17' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d38b*/
                          
            
                   boolean_T DI18_k; /* '<S40>/DI18' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d38c*/
                          
            
                   boolean_T DI31_g; /* '<S153>/DI31' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d38d*/
                          
            
                   boolean_T DI32_l; /* '<S153>/DI32' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d38e*/
                          
            
                   boolean_T DI33_b; /* '<S153>/DI33' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d38f*/
                          
            
                   boolean_T DI34_p; /* '<S153>/DI34' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d390*/
                          
            
                   boolean_T DataStoreRead7_a; /* '<S191>/Data Store Read7' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d391*/
                          
            
                   boolean_T DataStoreRead6_n; /* '<S191>/Data Store Read6' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d392*/
                          
            
                   boolean_T DataStoreRead5_i; /* '<S191>/Data Store Read5' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d393*/
                          
            
                   boolean_T DataStoreRead4; /* '<S191>/Data Store Read4' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d394*/
                          
            
                   boolean_T DataStoreRead2; /* '<S191>/Data Store Read2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d395*/
                          
            
                   boolean_T DataStoreRead; /* '<S191>/Data Store Read' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d396*/
                          
            
                   boolean_T DataStoreRead9_g; /* '<S191>/Data Store Read9' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d397*/
                          
            
                   boolean_T DataStoreRead6_b; /* '<S176>/Data Store Read6' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d398*/
                          
            
                   boolean_T DataStoreRead7_d; /* '<S176>/Data Store Read7' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d399*/
                          
            
                   boolean_T DataStoreRead9_h; /* '<S176>/Data Store Read9' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d39a*/
                          
            
                   boolean_T DataStoreRead8_c; /* '<S176>/Data Store Read8' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d39b*/
                          
            
                   boolean_T DataStoreRead4_n; /* '<S173>/Data Store Read4' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d39c*/
                          
            
                   boolean_T DataStoreRead1_e; /* '<S172>/Data Store Read1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d39d*/
                          
            
                   boolean_T DataStoreRead2_l; /* '<S172>/Data Store Read2' */
 
            
              
            /*@]*/ 

          
          
	  
		
      /*@]*/            
      



  }    B_ZT_VehCtrl_18B_T;
  

        
              
          /* Block states (default storage) for system '<Root>' */
              
        
  
     typedef struct   {
  

      /*@[2d39e*/      



        
          
          
		
            
          
            

              /*@[2d39f*/
                          
            
                   real_T cnt; /* '<S12>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a0*/
                          
            
                   real_T cnt_o; /* '<S13>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a1*/
                          
            
                   real_T cnt_p; /* '<S10>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a2*/
                          
            
                   real_T cnt_c; /* '<S2>/Chart2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a3*/
                          
            
                   real_T cnt_j; /* '<S2>/Chart1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a4*/
                          
            
                   int32_T clockTickCounter; /* '<S6>/Pulse Generator2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a5*/
                          
            
                   int32_T clockTickCounter_e; /* '<S6>/Pulse Generator' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a6*/
                          
            
                   int32_T clockTickCounter_p; /* '<S2>/Pulse Generator' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a7*/
                          
            
                   int_T VCU_TWV_ModeSignalID; /* '<S185>/VCU_TWV' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a8*/
                          
            
                   int_T TMS_ModeSignalID; /* '<S184>/TMS' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3a9*/
                          
            
                   int_T VCU_PDU_ModeSignalID; /* '<S182>/VCU_PDU' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3aa*/
                          
            
                   int_T Ctrl_HVC_ModeSignalID; /* '<S176>/Ctrl_HVC' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3ab*/
                          
            
                   int_T VCU_DCDC1_ModeSignalID; /* '<S174>/VCU_DCDC1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3ac*/
                          
            
                   int_T VCU2BRS_ModeSignalID; /* '<S173>/VCU2BRS' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3ad*/
                          
            
                   int_T VCU_BMS_ModeSignalID; /* '<S172>/VCU_BMS' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3ae*/
                          
            
                   int_T VCU_ACU1_ModeSignalID; /* '<S171>/VCU_ACU1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3af*/
                          
            
                   uint8_T Init_flg; /* '<Root>/Data Store Memory4' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b0*/
                          
            
                   uint8_T is_active_c14_ZT_VehCtrl_18B; /* '<S12>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b1*/
                          
            
                   uint8_T is_c14_ZT_VehCtrl_18B; /* '<S12>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b2*/
                          
            
                   uint8_T is_active_c21_ZT_VehCtrl_18B; /* '<S13>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b3*/
                          
            
                   uint8_T is_c21_ZT_VehCtrl_18B; /* '<S13>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b4*/
                          
            
                   uint8_T is_active_c11_ZT_VehCtrl_18B; /* '<S10>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b5*/
                          
            
                   uint8_T is_c11_ZT_VehCtrl_18B; /* '<S10>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b6*/
                          
            
                   uint8_T is_active_c24_ZT_VehCtrl_18B; /* '<S2>/Chart2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b7*/
                          
            
                   uint8_T is_c24_ZT_VehCtrl_18B; /* '<S2>/Chart2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b8*/
                          
            
                   uint8_T is_active_c23_ZT_VehCtrl_18B; /* '<S2>/Chart1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3b9*/
                          
            
                   uint8_T is_c23_ZT_VehCtrl_18B; /* '<S2>/Chart1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3ba*/
                          
            
                   uint8_T is_active_c22_ZT_VehCtrl_18B; /* '<S2>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3bb*/
                          
            
                   uint8_T is_c22_ZT_VehCtrl_18B; /* '<S2>/Chart' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3bc*/
                          
            
                   boolean_T SPI0_CS; /* '<Root>/Data Store Memory126' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3bd*/
                          
            
                   boolean_T SPI3_CS; /* '<Root>/Data Store Memory128' */
 
            
              
            /*@]*/ 

          
          
	  
		
      /*@]*/            
      



  }    DW_ZT_VehCtrl_18B_T;
  

      
        
              /* Zero-crossing (trigger) state */
              
      typedef struct  {
        

      /*@[2d3be*/      



        
          
          
		
            
          
            

              /*@[2d3bf*/
                          
            
                   ZCSigState TWV_Trig_ZCE; /* '<S6>/TWV' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3c0*/
                          
            
                   ZCSigState TMS_Trig_ZCE; /* '<S6>/TMS' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3c1*/
                          
            
                   ZCSigState PDU_Trig_ZCE; /* '<S6>/PDU' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3c2*/
                          
            
                   ZCSigState HVC_Trig_ZCE; /* '<S6>/HVC' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3c3*/
                          
            
                   ZCSigState DCDC_Trig_ZCE; /* '<S6>/DCDC' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3c4*/
                          
            
                   ZCSigState BRS_Trig_ZCE; /* '<S6>/BRS' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3c5*/
                          
            
                   ZCSigState BMS_Trig_ZCE; /* '<S6>/BMS' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d3c6*/
                          
            
                   ZCSigState ACU_Trig_ZCE; /* '<S6>/ACU' */
 
            
              
            /*@]*/ 

          
          
	  
		
      /*@]*/            
      



      } PrevZCX_ZT_VehCtrl_18B_T;
      
        
        /* Invariant block signals (default storage) */
          
    
      typedef  struct  {
      

      /*@[2d451*/      



        
          
          
		
            
          
            

              /*@[2d452*/
                          
            
             const      real_T Gain5; /* '<S212>/Gain5' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d453*/
                          
            
             const      real_T Gain4; /* '<S212>/Gain4' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d454*/
                          
            
             const      real_T Gain1; /* '<S212>/Gain1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d455*/
                          
            
             const      real32_T DataTypeConversion; /* '<S173>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d456*/
                          
            
             const      real32_T DataTypeConversion1; /* '<S173>/Data Type Conversion1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d457*/
                          
            
             const      uint16_T DataTypeConversion_b; /* '<S197>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d458*/
                          
            
             const      uint16_T DataTypeConversion_p; /* '<S196>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d459*/
                          
            
             const      uint16_T DataTypeConversion_h; /* '<S195>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d45a*/
                          
            
             const      uint8_T DataTypeConversion_k; /* '<S209>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d45b*/
                          
            
             const      uint8_T DataTypeConversion_c; /* '<S208>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d45c*/
                          
            
             const      uint8_T DataTypeConversion3; /* '<S11>/Data Type Conversion3' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d45d*/
                          
            
             const      uint8_T DataTypeConversion2; /* '<S11>/Data Type Conversion2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d45e*/
                          
            
             const      uint8_T VectorConcatenate2[2]; /* '<S11>/Vector Concatenate2' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d45f*/
                          
            
             const      uint8_T DataTypeConversion_bd; /* '<S9>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d460*/
                          
            
             const      boolean_T DataTypeConversion_cp; /* '<S3>/Data Type Conversion' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d461*/
                          
            
             const      boolean_T DataTypeConversion1_o; /* '<S2>/Data Type Conversion1' */
 
            
              
            /*@]*/ 

          
          
	  
		



        
          
          
		
            
          
            

              /*@[2d462*/
                          
            
             const      boolean_T DataTypeConversion2_g; /* '<S9>/Data Type Conversion2' */
 
            
              
            /*@]*/ 

          
          
	  
		
      /*@]*/            
      



      } ConstB_ZT_VehCtrl_18B_T;
    
    
          
    


      /* Real-time Model Data Structure */
      
  struct tag_RTM_ZT_VehCtrl_18B_T {
            const char_T *errorStatus;



  };
      
        
          



  


  


          
      
      /* Block signals (default storage) */
      


  extern         B_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_B;



      
        /* Block states (default storage) */
      


  extern         DW_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_DW;



                  


  extern           const  ConstB_ZT_VehCtrl_18B_T ZT_VehCtrl_18B_ConstB; /* constant block i/o */



          
    
 
	/*
	* Exported States
	*
	* Note: Exported states are block states with an exported global
	* storage class designation.  Code generation will declare the memory for these
	* states and exports their symbols.
	*
	*/
	    
         
    
          /*@[2d463*/
        
      /*@[2d464*/
        extern  real32_T VCU_FanSpeedLvl_num; /* '<Root>/Data Store Memory138' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d465*/
        
      /*@[2d466*/
        extern  real32_T VCU_DCDC1_En; /* '<Root>/Data Store Memory140' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d467*/
        
      /*@[2d468*/
        extern  real32_T DcdcCmd; /* '<Root>/Data Store Memory145' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d469*/
        
      /*@[2d46a*/
        extern  real32_T DcacEpsCmd; /* '<Root>/Data Store Memory146' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d46b*/
        
      /*@[2d46c*/
        extern  real32_T DcacEpsMode; /* '<Root>/Data Store Memory147' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d46d*/
        
      /*@[2d46e*/
        extern  real32_T DcacAcCmd; /* '<Root>/Data Store Memory148' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d46f*/
        
      /*@[2d470*/
        extern  real32_T VCU_ShrRlyCtl; /* '<Root>/Data Store Memory149' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d471*/
        
      /*@[2d472*/
        extern  real32_T VCU_HVACRlyCtl; /* '<Root>/Data Store Memory150' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d473*/
        
      /*@[2d474*/
        extern  real32_T VCU_PTCRlyCtl; /* '<Root>/Data Store Memory151' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d475*/
        
      /*@[2d476*/
        extern  real32_T VCU_HghVtgCnt; /* '<Root>/Data Store Memory152' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d477*/
        
      /*@[2d478*/
        extern  real32_T VCU_DCCpstRlyCtl; /* '<Root>/Data Store Memory153' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d479*/
        
      /*@[2d47a*/
        extern  real32_T TWV_ON_Ctr; /* '<Root>/Data Store Memory154' */
      /*@]*/
      
      /*@]*/

    

     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     
























    
    
         
    
          /*@[2d47b*/
        
      /*@[2d47c*/
        extern  uint8_T Cnt_BMS6; /* '<Root>/Data Store Memory1' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d47d*/
        
      /*@[2d47e*/
        extern  uint8_T Cnt_TM_OUT; /* '<Root>/Data Store Memory104' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d47f*/
        
      /*@[2d480*/
        extern  uint8_T Cnt_HVC4; /* '<Root>/Data Store Memory12' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d481*/
        
      /*@[2d482*/
        extern  uint8_T VCU_Mode; /* '<Root>/Data Store Memory125' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d483*/
        
      /*@[2d484*/
        extern  uint8_T Cnt_HVC7; /* '<Root>/Data Store Memory13' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d485*/
        
      /*@[2d486*/
        extern  uint8_T Cnt_ISG_OUT; /* '<Root>/Data Store Memory133' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d487*/
        
      /*@[2d488*/
        extern  uint8_T Cnt_TWV_OUT; /* '<Root>/Data Store Memory134' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d489*/
        
      /*@[2d48a*/
        extern  uint8_T EnergyFlag; /* '<Root>/Data Store Memory135' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d48b*/
        
      /*@[2d48c*/
        extern  uint8_T Cnt_MCU2_OUT; /* '<Root>/Data Store Memory136' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d48d*/
        
      /*@[2d48e*/
        extern  uint8_T Cnt_DCDC1_1; /* '<Root>/Data Store Memory14' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d48f*/
        
      /*@[2d490*/
        extern  uint8_T Cnt_DCDC1_2; /* '<Root>/Data Store Memory15' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d491*/
        
      /*@[2d492*/
        extern  uint8_T Cnt_MCU1_1; /* '<Root>/Data Store Memory16' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d493*/
        
      /*@[2d494*/
        extern  uint8_T Cnt_MCU1_2; /* '<Root>/Data Store Memory17' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d495*/
        
      /*@[2d496*/
        extern  uint8_T Cnt_BMS1; /* '<Root>/Data Store Memory177' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d497*/
        
      /*@[2d498*/
        extern  uint8_T Cnt_BMS2; /* '<Root>/Data Store Memory178' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d499*/
        
      /*@[2d49a*/
        extern  uint8_T Cnt_BMS3; /* '<Root>/Data Store Memory179' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d49b*/
        
      /*@[2d49c*/
        extern  uint8_T Cnt_MCU1_3; /* '<Root>/Data Store Memory18' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d49d*/
        
      /*@[2d49e*/
        extern  uint8_T Cnt_BMS4; /* '<Root>/Data Store Memory180' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d49f*/
        
      /*@[2d4a0*/
        extern  uint8_T Cnt_BMS5; /* '<Root>/Data Store Memory181' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4a1*/
        
      /*@[2d4a2*/
        extern  uint8_T Cnt_MCU2_1; /* '<Root>/Data Store Memory19' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4a3*/
        
      /*@[2d4a4*/
        extern  uint8_T Cnt_OBC; /* '<Root>/Data Store Memory2' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4a5*/
        
      /*@[2d4a6*/
        extern  uint8_T Cnt_MCU2_2; /* '<Root>/Data Store Memory20' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4a7*/
        
      /*@[2d4a8*/
        extern  uint8_T Cnt_MCU2_3; /* '<Root>/Data Store Memory21' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4a9*/
        
      /*@[2d4aa*/
        extern  uint8_T Cnt_ACU1; /* '<Root>/Data Store Memory22' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4ab*/
        
      /*@[2d4ac*/
        extern  uint8_T Cnt_ACU2; /* '<Root>/Data Store Memory23' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4ad*/
        
      /*@[2d4ae*/
        extern  uint8_T Cnt_ACU3; /* '<Root>/Data Store Memory24' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4af*/
        
      /*@[2d4b0*/
        extern  uint8_T Cnt_PDU; /* '<Root>/Data Store Memory25' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4b1*/
        
      /*@[2d4b2*/
        extern  uint8_T Cnt_TMS; /* '<Root>/Data Store Memory3' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4b3*/
        
      /*@[2d4b4*/
        extern  uint8_T Cnt_TWV; /* '<Root>/Data Store Memory33' */
      /*@]*/
      
      /*@]*/

    

     




    
    
         
    
          /*@[2d4b5*/
        
      /*@[2d4b6*/
        extern  uint8_T Cnt_TW1; /* '<Root>/Data Store Memory46' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4b7*/
        
      /*@[2d4b8*/
        extern  uint8_T Cnt_TW2; /* '<Root>/Data Store Memory47' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4b9*/
        
      /*@[2d4ba*/
        extern  uint8_T Cnt_TW3; /* '<Root>/Data Store Memory48' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4bb*/
        
      /*@[2d4bc*/
        extern  uint8_T Cnt_ISG1; /* '<Root>/Data Store Memory49' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4bd*/
        
      /*@[2d4be*/
        extern  uint8_T Cnt_BRS1; /* '<Root>/Data Store Memory5' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4bf*/
        
      /*@[2d4c0*/
        extern  uint8_T Cnt_ISG2; /* '<Root>/Data Store Memory50' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4c1*/
        
      /*@[2d4c2*/
        extern  uint8_T Cnt_ISG3; /* '<Root>/Data Store Memory56' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4c3*/
        
      /*@[2d4c4*/
        extern  uint8_T Cnt_BMS_OUT; /* '<Root>/Data Store Memory57' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4c5*/
        
      /*@[2d4c6*/
        extern  uint8_T Cnt_TMS_OUT; /* '<Root>/Data Store Memory58' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4c7*/
        
      /*@[2d4c8*/
        extern  uint8_T Cnt_ICU_OUT1; /* '<Root>/Data Store Memory59' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4c9*/
        
      /*@[2d4ca*/
        extern  uint8_T Cnt_BRS2; /* '<Root>/Data Store Memory6' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4cb*/
        
      /*@[2d4cc*/
        extern  uint8_T Cnt_ICU_OUT2; /* '<Root>/Data Store Memory60' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4cd*/
        
      /*@[2d4ce*/
        extern  uint8_T Cnt_BRS_OUT; /* '<Root>/Data Store Memory61' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4cf*/
        
      /*@[2d4d0*/
        extern  uint8_T Cnt_DCDC_OUT; /* '<Root>/Data Store Memory62' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4d1*/
        
      /*@[2d4d2*/
        extern  uint8_T Cnt_HVC_OUT; /* '<Root>/Data Store Memory63' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4d3*/
        
      /*@[2d4d4*/
        extern  uint8_T Cnt_MCU1_OUT; /* '<Root>/Data Store Memory64' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4d5*/
        
      /*@[2d4d6*/
        extern  uint8_T Cnt_ACU_OUT; /* '<Root>/Data Store Memory65' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4d7*/
        
      /*@[2d4d8*/
        extern  uint8_T Cnt_PDU_OUT; /* '<Root>/Data Store Memory66' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4d9*/
        
      /*@[2d4da*/
        extern  uint8_T Cnt_BRS3; /* '<Root>/Data Store Memory7' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4db*/
        
      /*@[2d4dc*/
        extern  uint8_T ResetFlg; /* '<Root>/Data Store Memory72' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4dd*/
        
      /*@[2d4de*/
        extern  uint8_T Cnt_HVC1; /* '<Root>/Data Store Memory8' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4df*/
        
      /*@[2d4e0*/
        extern  uint8_T Cnt_HVC3; /* '<Root>/Data Store Memory9' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4e1*/
        
      /*@[2d4e2*/
        extern  uint8_T Init_flg_SPI; /* '<Root>/Data Store Memory98' */
      /*@]*/
      
      /*@]*/

    

     


























    
    
         
    
          /*@[2d4e3*/
        
      /*@[2d4e4*/
        extern  boolean_T VCU_PowerOnReq; /* '<Root>/Data Store Memory' */
      /*@]*/
      
      /*@]*/

    

     


    
    
     
     


    
    
         
    
          /*@[2d4e5*/
        
      /*@[2d4e6*/
        extern  boolean_T LS007; /* '<Root>/Data Store Memory100' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4e7*/
        
      /*@[2d4e8*/
        extern  boolean_T LS012; /* '<Root>/Data Store Memory101' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4e9*/
        
      /*@[2d4ea*/
        extern  boolean_T LS013; /* '<Root>/Data Store Memory103' */
      /*@]*/
      
      /*@]*/

    

     


    
    
     
     


    
    
         
    
          /*@[2d4eb*/
        
      /*@[2d4ec*/
        extern  boolean_T LS018; /* '<Root>/Data Store Memory11' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4ed*/
        
      /*@[2d4ee*/
        extern  boolean_T LS019; /* '<Root>/Data Store Memory116' */
      /*@]*/
      
      /*@]*/

    

     




    
    
     
     




    
    
         
    
          /*@[2d4ef*/
        
      /*@[2d4f0*/
        extern  boolean_T VCU_UrgencyCutOffPowerReq; /* '<Root>/Data Store Memory137' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4f1*/
        
      /*@[2d4f2*/
        extern  boolean_T OnOffCmd; /* '<Root>/Data Store Memory139' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4f3*/
        
      /*@[2d4f4*/
        extern  boolean_T EDrv1_PowOnCmd; /* '<Root>/Data Store Memory141' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4f5*/
        
      /*@[2d4f6*/
        extern  boolean_T EDrv2_PowOnCmd; /* '<Root>/Data Store Memory142' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4f7*/
        
      /*@[2d4f8*/
        extern  boolean_T PaxAC_PowOnCmd; /* '<Root>/Data Store Memory143' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4f9*/
        
      /*@[2d4fa*/
        extern  boolean_T PTC_PowOnCmd; /* '<Root>/Data Store Memory144' */
      /*@]*/
      
      /*@]*/

    

     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
         
    
          /*@[2d4fb*/
        
      /*@[2d4fc*/
        extern  boolean_T LS003; /* '<Root>/Data Store Memory34' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d4fd*/
        
      /*@[2d4fe*/
        extern  boolean_T LS017; /* '<Root>/Data Store Memory45' */
      /*@]*/
      
      /*@]*/

    

     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
     
     


    
    
         
    
          /*@[2d4ff*/
        
      /*@[2d500*/
        extern  boolean_T LS014; /* '<Root>/Data Store Memory86' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d501*/
        
      /*@[2d502*/
        extern  boolean_T LS015; /* '<Root>/Data Store Memory87' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d503*/
        
      /*@[2d504*/
        extern  boolean_T LS009; /* '<Root>/Data Store Memory88' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d505*/
        
      /*@[2d506*/
        extern  boolean_T LS016; /* '<Root>/Data Store Memory89' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d507*/
        
      /*@[2d508*/
        extern  boolean_T LS004; /* '<Root>/Data Store Memory91' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d509*/
        
      /*@[2d50a*/
        extern  boolean_T LS011; /* '<Root>/Data Store Memory92' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d50b*/
        
      /*@[2d50c*/
        extern  boolean_T LS001; /* '<Root>/Data Store Memory93' */
      /*@]*/
      
      /*@]*/

    

     


    
    
     
     


    
    
         
    
          /*@[2d50d*/
        
      /*@[2d50e*/
        extern  boolean_T LS002; /* '<Root>/Data Store Memory95' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d50f*/
        
      /*@[2d510*/
        extern  boolean_T LS010; /* '<Root>/Data Store Memory96' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d511*/
        
      /*@[2d512*/
        extern  boolean_T LS008; /* '<Root>/Data Store Memory97' */
      /*@]*/
      
      /*@]*/

    

     


    
    
         
    
          /*@[2d513*/
        
      /*@[2d514*/
        extern  boolean_T LS006; /* '<Root>/Data Store Memory99' */
      /*@]*/
      
      /*@]*/

    

     







  
      /* Model entry point functions */
               extern void ZT_VehCtrl_18B_initialize(void);
             
        
                          extern void ZT_VehCtrl_18B_step(void);
                
    
               extern void ZT_VehCtrl_18B_terminate(void);
             



  


  /* Exported data declaration */

  	      /* Volatile memory section */
		  /* Declaration for custom storage class: Volatile */
		              
              
                /*@[2d3c7*/ 
              /*@[2d3c8*/ 
                extern volatile real32_T AI03;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3c9*/ 
              /*@[2d3ca*/ 
                extern volatile real32_T AI04;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3cb*/ 
              /*@[2d3cc*/ 
                extern volatile real32_T AI05;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3cd*/ 
              /*@[2d3ce*/ 
                extern volatile real32_T AI06;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3cf*/ 
              /*@[2d3d0*/ 
                extern volatile real32_T AI07;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3d1*/ 
              /*@[2d3d2*/ 
                extern volatile real32_T AI08;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3d3*/ 
              /*@[2d3d4*/ 
                extern volatile real32_T AI09;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3d5*/ 
              /*@[2d3d6*/ 
                extern volatile real32_T AI11;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3d7*/ 
              /*@[2d3d8*/ 
                extern volatile real32_T AI12;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3d9*/ 
              /*@[2d3da*/ 
                extern volatile real32_T AI15;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3db*/ 
              /*@[2d3dc*/ 
                extern volatile real32_T AI16;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3dd*/ 
              /*@[2d3de*/ 
                extern volatile real32_T AI17;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3df*/ 
              /*@[2d3e0*/ 
                extern volatile real32_T AI18;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3e1*/ 
              /*@[2d3e2*/ 
                extern volatile real32_T AI19;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3e3*/ 
              /*@[2d3e4*/ 
                extern volatile real32_T AI20;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3e5*/ 
              /*@[2d3e6*/ 
                extern volatile boolean_T DI01;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3e7*/ 
              /*@[2d3e8*/ 
                extern volatile boolean_T DI02;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3e9*/ 
              /*@[2d3ea*/ 
                extern volatile boolean_T DI03;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3eb*/ 
              /*@[2d3ec*/ 
                extern volatile boolean_T DI04;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3ed*/ 
              /*@[2d3ee*/ 
                extern volatile boolean_T DI07;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3ef*/ 
              /*@[2d3f0*/ 
                extern volatile boolean_T DI08;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3f1*/ 
              /*@[2d3f2*/ 
                extern volatile boolean_T DI09;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3f3*/ 
              /*@[2d3f4*/ 
                extern volatile boolean_T DI10;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3f5*/ 
              /*@[2d3f6*/ 
                extern volatile boolean_T DI12;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3f7*/ 
              /*@[2d3f8*/ 
                extern volatile boolean_T DI13;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3f9*/ 
              /*@[2d3fa*/ 
                extern volatile boolean_T DI15;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3fb*/ 
              /*@[2d3fc*/ 
                extern volatile boolean_T DI16;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3fd*/ 
              /*@[2d3fe*/ 
                extern volatile boolean_T DI17;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d3ff*/ 
              /*@[2d400*/ 
                extern volatile boolean_T DI18;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d401*/ 
              /*@[2d402*/ 
                extern volatile boolean_T DI31;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d403*/ 
              /*@[2d404*/ 
                extern volatile real32_T DI31_PWM_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d405*/ 
              /*@[2d406*/ 
                extern volatile real32_T DI31_PWM_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d407*/ 
              /*@[2d408*/ 
                extern volatile boolean_T DI32;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d409*/ 
              /*@[2d40a*/ 
                extern volatile real32_T DI32_PWM_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d40b*/ 
              /*@[2d40c*/ 
                extern volatile real32_T DI32_PWM_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d40d*/ 
              /*@[2d40e*/ 
                extern volatile boolean_T DI33;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d40f*/ 
              /*@[2d410*/ 
                extern volatile real32_T DI33_PWM_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d411*/ 
              /*@[2d412*/ 
                extern volatile real32_T DI33_PWM_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d413*/ 
              /*@[2d414*/ 
                extern volatile boolean_T DI34;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d415*/ 
              /*@[2d416*/ 
                extern volatile real32_T DI34_PWM_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d417*/ 
              /*@[2d418*/ 
                extern volatile real32_T DI34_PWM_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d419*/ 
              /*@[2d41a*/ 
                extern volatile boolean_T HS001;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d41b*/ 
              /*@[2d41c*/ 
                extern volatile boolean_T HS002;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d41d*/ 
              /*@[2d41e*/ 
                extern volatile boolean_T HS003;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d41f*/ 
              /*@[2d420*/ 
                extern volatile boolean_T HS004;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d421*/ 
              /*@[2d422*/ 
                extern volatile boolean_T HS005;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d423*/ 
              /*@[2d424*/ 
                extern volatile boolean_T HS006;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d425*/ 
              /*@[2d426*/ 
                extern volatile boolean_T HS007;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d427*/ 
              /*@[2d428*/ 
                extern volatile boolean_T HS008;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d429*/ 
              /*@[2d42a*/ 
                extern volatile real32_T HS008_ETC_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d42b*/ 
              /*@[2d42c*/ 
                extern volatile real32_T HS008_ETC_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d42d*/ 
              /*@[2d42e*/ 
                extern volatile boolean_T HS010;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d42f*/ 
              /*@[2d430*/ 
                extern volatile boolean_T HS014;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d431*/ 
              /*@[2d432*/ 
                extern volatile real32_T HS014_ETC_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d433*/ 
              /*@[2d434*/ 
                extern volatile real32_T HSO08_PWM_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d435*/ 
              /*@[2d436*/ 
                extern volatile real32_T HSO08_PWM_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d437*/ 
              /*@[2d438*/ 
                extern volatile real32_T HSO14_ETC_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d439*/ 
              /*@[2d43a*/ 
                extern volatile real32_T HSO14_PWM_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d43b*/ 
              /*@[2d43c*/ 
                extern volatile real32_T HSO14_PWM_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d43d*/ 
              /*@[2d43e*/ 
                extern volatile real32_T LSO17_ETC_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d43f*/ 
              /*@[2d440*/ 
                extern volatile real32_T LSO17_ETC_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d441*/ 
              /*@[2d442*/ 
                extern volatile real32_T LSO18_ETC_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d443*/ 
              /*@[2d444*/ 
                extern volatile real32_T LSO18_ETC_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d445*/ 
              /*@[2d446*/ 
                extern volatile real32_T LSO19_ETC_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d447*/ 
              /*@[2d448*/ 
                extern volatile real32_T LSO19_ETC_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d449*/ 
              /*@[2d44a*/ 
                extern volatile real32_T LSO19_PWM_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d44b*/ 
              /*@[2d44c*/ 
                extern volatile real32_T LSO19_PWM_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d44d*/ 
              /*@[2d44e*/ 
                extern volatile real32_T LSO3_ETC_DC;   
              /*@]*/ 
              /*@]*/ 
              
              
              
              
              
                /*@[2d44f*/ 
              /*@[2d450*/ 
                extern volatile real32_T LSO3_ETC_FRQ;   
              /*@]*/ 
              /*@]*/ 
              
              
              


          
          /* Real-time Model object */
          
          


  extern             RT_MODEL_ZT_VehCtrl_18B_T *const ZT_VehCtrl_18B_M;



          



  


  


  


    
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
     * Block '<S5>/1-D Lookup Table' : Unused code path elimination
     * Block '<S79>/Bus Creator' : Unused code path elimination
     * Block '<S79>/CAN Unpack6' : Unused code path elimination
     * Block '<S79>/Constant1' : Unused code path elimination
     * Block '<S79>/Constant4' : Unused code path elimination
     * Block '<S79>/Constant5' : Unused code path elimination
     * Block '<S79>/Data Type Conversion' : Unused code path elimination
     * Block '<S79>/Data Type Conversion1' : Unused code path elimination
     * Block '<S79>/Data Type Conversion14' : Unused code path elimination
     * Block '<S79>/Data Type Conversion15' : Unused code path elimination
     * Block '<S79>/Data Type Conversion17' : Unused code path elimination
     * Block '<S79>/Data Type Conversion18' : Unused code path elimination
     * Block '<S79>/Data Type Conversion19' : Unused code path elimination
     * Block '<S79>/Data Type Conversion2' : Unused code path elimination
     * Block '<S79>/Data Type Conversion3' : Unused code path elimination
     * Block '<S79>/Data Type Conversion4' : Unused code path elimination
     * Block '<S79>/Data Type Conversion5' : Unused code path elimination
     * Block '<S80>/Bus Creator' : Unused code path elimination
     * Block '<S80>/CAN Unpack6' : Unused code path elimination
     * Block '<S80>/Constant1' : Unused code path elimination
     * Block '<S80>/Constant4' : Unused code path elimination
     * Block '<S80>/Constant5' : Unused code path elimination
     * Block '<S80>/Data Type Conversion' : Unused code path elimination
     * Block '<S80>/Data Type Conversion1' : Unused code path elimination
     * Block '<S80>/Data Type Conversion14' : Unused code path elimination
     * Block '<S80>/Data Type Conversion15' : Unused code path elimination
     * Block '<S80>/Data Type Conversion17' : Unused code path elimination
     * Block '<S80>/Data Type Conversion18' : Unused code path elimination
     * Block '<S80>/Data Type Conversion19' : Unused code path elimination
     * Block '<S80>/Data Type Conversion2' : Unused code path elimination
     * Block '<S80>/Data Type Conversion3' : Unused code path elimination
     * Block '<S80>/Data Type Conversion4' : Unused code path elimination
     * Block '<S80>/Data Type Conversion5' : Unused code path elimination
     * Block '<S81>/Bus Creator' : Unused code path elimination
     * Block '<S81>/CAN Unpack6' : Unused code path elimination
     * Block '<S81>/Constant1' : Unused code path elimination
     * Block '<S81>/Constant4' : Unused code path elimination
     * Block '<S81>/Constant5' : Unused code path elimination
     * Block '<S81>/Data Type Conversion' : Unused code path elimination
     * Block '<S81>/Data Type Conversion1' : Unused code path elimination
     * Block '<S81>/Data Type Conversion14' : Unused code path elimination
     * Block '<S81>/Data Type Conversion15' : Unused code path elimination
     * Block '<S81>/Data Type Conversion17' : Unused code path elimination
     * Block '<S81>/Data Type Conversion18' : Unused code path elimination
     * Block '<S81>/Data Type Conversion19' : Unused code path elimination
     * Block '<S81>/Data Type Conversion2' : Unused code path elimination
     * Block '<S81>/Data Type Conversion3' : Unused code path elimination
     * Block '<S81>/Data Type Conversion4' : Unused code path elimination
     * Block '<S81>/Data Type Conversion5' : Unused code path elimination
     * Block '<S90>/Bus Creator' : Unused code path elimination
     * Block '<S90>/CAN Unpack6' : Unused code path elimination
     * Block '<S90>/Constant1' : Unused code path elimination
     * Block '<S90>/Constant4' : Unused code path elimination
     * Block '<S90>/Constant5' : Unused code path elimination
     * Block '<S90>/Data Type Conversion' : Unused code path elimination
     * Block '<S90>/Data Type Conversion1' : Unused code path elimination
     * Block '<S90>/Data Type Conversion14' : Unused code path elimination
     * Block '<S90>/Data Type Conversion15' : Unused code path elimination
     * Block '<S90>/Data Type Conversion17' : Unused code path elimination
     * Block '<S90>/Data Type Conversion18' : Unused code path elimination
     * Block '<S90>/Data Type Conversion19' : Unused code path elimination
     * Block '<S90>/Data Type Conversion2' : Unused code path elimination
     * Block '<S90>/Data Type Conversion3' : Unused code path elimination
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
     * Block '<S101>/Bus Creator' : Unused code path elimination
     * Block '<S101>/CAN Unpack6' : Unused code path elimination
     * Block '<S101>/Constant1' : Unused code path elimination
     * Block '<S101>/Constant4' : Unused code path elimination
     * Block '<S101>/Constant5' : Unused code path elimination
     * Block '<S101>/Data Type Conversion' : Unused code path elimination
     * Block '<S101>/Data Type Conversion1' : Unused code path elimination
     * Block '<S101>/Data Type Conversion14' : Unused code path elimination
     * Block '<S101>/Data Type Conversion15' : Unused code path elimination
     * Block '<S101>/Data Type Conversion17' : Unused code path elimination
     * Block '<S101>/Data Type Conversion18' : Unused code path elimination
     * Block '<S101>/Data Type Conversion19' : Unused code path elimination
     * Block '<S101>/Data Type Conversion2' : Unused code path elimination
     * Block '<S101>/Data Type Conversion3' : Unused code path elimination
     * Block '<S101>/Data Type Conversion4' : Unused code path elimination
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
     * Block '<S104>/Data Type Conversion10' : Unused code path elimination
     * Block '<S104>/Data Type Conversion11' : Unused code path elimination
     * Block '<S104>/Data Type Conversion12' : Unused code path elimination
     * Block '<S104>/Data Type Conversion13' : Unused code path elimination
     * Block '<S104>/Data Type Conversion14' : Unused code path elimination
     * Block '<S104>/Data Type Conversion15' : Unused code path elimination
     * Block '<S104>/Data Type Conversion17' : Unused code path elimination
     * Block '<S104>/Data Type Conversion18' : Unused code path elimination
     * Block '<S104>/Data Type Conversion19' : Unused code path elimination
     * Block '<S104>/Data Type Conversion2' : Unused code path elimination
     * Block '<S104>/Data Type Conversion3' : Unused code path elimination
     * Block '<S104>/Data Type Conversion4' : Unused code path elimination
     * Block '<S104>/Data Type Conversion5' : Unused code path elimination
     * Block '<S104>/Data Type Conversion6' : Unused code path elimination
     * Block '<S104>/Data Type Conversion7' : Unused code path elimination
     * Block '<S104>/Data Type Conversion8' : Unused code path elimination
     * Block '<S104>/Data Type Conversion9' : Unused code path elimination
     * Block '<S108>/Bus Creator' : Unused code path elimination
     * Block '<S108>/CAN Unpack6' : Unused code path elimination
     * Block '<S108>/Constant1' : Unused code path elimination
     * Block '<S108>/Constant4' : Unused code path elimination
     * Block '<S108>/Constant5' : Unused code path elimination
     * Block '<S108>/Data Type Conversion' : Unused code path elimination
     * Block '<S108>/Data Type Conversion1' : Unused code path elimination
     * Block '<S108>/Data Type Conversion14' : Unused code path elimination
     * Block '<S108>/Data Type Conversion15' : Unused code path elimination
     * Block '<S108>/Data Type Conversion17' : Unused code path elimination
     * Block '<S108>/Data Type Conversion18' : Unused code path elimination
     * Block '<S108>/Data Type Conversion19' : Unused code path elimination
     * Block '<S108>/Data Type Conversion2' : Unused code path elimination
     * Block '<S108>/Data Type Conversion3' : Unused code path elimination
     * Block '<S108>/Data Type Conversion4' : Unused code path elimination
     * Block '<S108>/Data Type Conversion5' : Unused code path elimination
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
     * Block '<S110>/Data Type Conversion3' : Unused code path elimination
     * Block '<S111>/Bus Creator' : Unused code path elimination
     * Block '<S111>/CAN Unpack6' : Unused code path elimination
     * Block '<S111>/Constant1' : Unused code path elimination
     * Block '<S111>/Constant4' : Unused code path elimination
     * Block '<S111>/Constant5' : Unused code path elimination
     * Block '<S111>/Data Type Conversion' : Unused code path elimination
     * Block '<S111>/Data Type Conversion1' : Unused code path elimination
     * Block '<S111>/Data Type Conversion14' : Unused code path elimination
     * Block '<S111>/Data Type Conversion15' : Unused code path elimination
     * Block '<S111>/Data Type Conversion17' : Unused code path elimination
     * Block '<S111>/Data Type Conversion18' : Unused code path elimination
     * Block '<S111>/Data Type Conversion19' : Unused code path elimination
     * Block '<S111>/Data Type Conversion2' : Unused code path elimination
     * Block '<S111>/Data Type Conversion3' : Unused code path elimination
     * Block '<S111>/Data Type Conversion4' : Unused code path elimination
     * Block '<S111>/Data Type Conversion5' : Unused code path elimination
     * Block '<S111>/Data Type Conversion6' : Unused code path elimination
     * Block '<S111>/Data Type Conversion7' : Unused code path elimination
     * Block '<S111>/Data Type Conversion8' : Unused code path elimination
     * Block '<S112>/Bus Creator' : Unused code path elimination
     * Block '<S112>/CAN Unpack6' : Unused code path elimination
     * Block '<S112>/Constant1' : Unused code path elimination
     * Block '<S112>/Constant4' : Unused code path elimination
     * Block '<S112>/Constant5' : Unused code path elimination
     * Block '<S112>/Data Type Conversion' : Unused code path elimination
     * Block '<S112>/Data Type Conversion1' : Unused code path elimination
     * Block '<S112>/Data Type Conversion14' : Unused code path elimination
     * Block '<S112>/Data Type Conversion15' : Unused code path elimination
     * Block '<S112>/Data Type Conversion17' : Unused code path elimination
     * Block '<S112>/Data Type Conversion18' : Unused code path elimination
     * Block '<S112>/Data Type Conversion19' : Unused code path elimination
     * Block '<S112>/Data Type Conversion2' : Unused code path elimination
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
     * Block '<S170>/Compare' : Unused code path elimination
     * Block '<S170>/Constant' : Unused code path elimination
     * Block '<S42>/Constant2' : Unused code path elimination
     * Block '<S42>/Data Type Conversion' : Unused code path elimination
     * Block '<S42>/Data Type Conversion1' : Unused code path elimination
     * Block '<S42>/Saturation' : Unused code path elimination
     * Block '<S42>/Saturation1' : Unused code path elimination
     * Block '<S42>/Subtract' : Unused code path elimination
     * Block '<S42>/Switch' : Unused code path elimination
     * Block '<S206>/Data Type Conversion3' : Unused code path elimination
     * Block '<S206>/Data Type Conversion4' : Unused code path elimination
     * Block '<S207>/Data Type Conversion3' : Unused code path elimination
     * Block '<S207>/Data Type Conversion4' : Unused code path elimination
     * Block '<S211>/Data Type Conversion' : Unused code path elimination
     * Block '<S211>/Data Type Conversion1' : Unused code path elimination
     * Block '<S6>/Rate Transition' : Unused code path elimination
     * Block '<S6>/Rate Transition1' : Unused code path elimination
     * Block '<S6>/Rate Transition10' : Unused code path elimination
     * Block '<S6>/Rate Transition13' : Unused code path elimination
     * Block '<S6>/Rate Transition2' : Unused code path elimination
     * Block '<S6>/Rate Transition7' : Unused code path elimination
     * Block '<S6>/Rate Transition8' : Unused code path elimination
     * Block '<S6>/Rate Transition9' : Unused code path elimination
     * Block '<S12>/Manual Switch' : Eliminated due to constant selection input
     * Block '<S171>/Data Type Conversion' : Eliminate redundant data type conversion
     * Block '<S171>/Data Type Conversion1' : Eliminate redundant data type conversion
     * Block '<S171>/Data Type Conversion2' : Eliminate redundant data type conversion
     * Block '<S171>/Data Type Conversion3' : Eliminate redundant data type conversion
     * Block '<S172>/Data Type Conversion' : Eliminate redundant data type conversion
     * Block '<S172>/Data Type Conversion1' : Eliminate redundant data type conversion
     * Block '<S173>/Data Type Conversion2' : Eliminate redundant data type conversion
     * Block '<S174>/Data Type Conversion' : Eliminate redundant data type conversion
     * Block '<S212>/Gain' : Eliminated nontunable gain of 1
     * Block '<S176>/Data Type Conversion' : Eliminate redundant data type conversion
     * Block '<S176>/Data Type Conversion1' : Eliminate redundant data type conversion
     * Block '<S176>/Data Type Conversion2' : Eliminate redundant data type conversion
     * Block '<S176>/Data Type Conversion3' : Eliminate redundant data type conversion
     * Block '<S182>/Data Type Conversion1' : Eliminate redundant data type conversion
     * Block '<S182>/Data Type Conversion2' : Eliminate redundant data type conversion
     * Block '<S182>/Data Type Conversion3' : Eliminate redundant data type conversion
     * Block '<S182>/Data Type Conversion4' : Eliminate redundant data type conversion
     * Block '<S182>/Data Type Conversion5' : Eliminate redundant data type conversion
     * Block '<S185>/Data Type Conversion' : Eliminate redundant data type conversion
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
      * '<S44>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /ACU1'
      * '<S45>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /ACU2'
      * '<S46>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /ACU3'
      * '<S47>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Battery Temperature'
      * '<S48>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell HeatingTemperature'
      * '<S49>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Pole Temperature'
      * '<S50>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Voltage Infor'
      * '<S51>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuCap Infor'
      * '<S52>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuTimeInfor1'
      * '<S53>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuTimeInfor2'
      * '<S54>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS HeatInfor'
      * '<S55>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Power Infor'
      * '<S56>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS StartDia_Infor1'
      * '<S57>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS StartDia_Infor2'
      * '<S58>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Cell ExtremumIndex Infor'
      * '<S59>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Cell Voltage Infor'
      * '<S60>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_HeatingTemperature'
      * '<S61>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_PoleTemperature'
      * '<S62>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Temperature of Battery'
      * '<S63>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS _SystemTime '
      * '<S64>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information1'
      * '<S65>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information2 '
      * '<S66>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information3'
      * '<S67>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMSWarning_Status'
      * '<S68>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Information1'
      * '<S69>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Information2'
      * '<S70>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status1'
      * '<S71>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status2'
      * '<S72>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status3'
      * '<S73>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU1'
      * '<S74>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU2'
      * '<S75>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU3'
      * '<S76>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /OBC_Charger Status'
      * '<S77>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /TMS2VCU'
      * '<S78>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 / BMS Power Control/UNPACK'
      * '<S79>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /ACU1/UNPACK'
      * '<S80>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /ACU2/UNPACK'
      * '<S81>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /ACU3/UNPACK'
      * '<S82>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Battery Temperature/UNPACK'
      * '<S83>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell HeatingTemperature/UNPACK'
      * '<S84>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Pole Temperature/UNPACK'
      * '<S85>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Cell Voltage Infor/UNPACK'
      * '<S86>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuCap Infor/UNPACK'
      * '<S87>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuTimeInfor1/UNPACK'
      * '<S88>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS CumuTimeInfor2/UNPACK'
      * '<S89>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS HeatInfor/UNPACK'
      * '<S90>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Power Infor/UNPACK'
      * '<S91>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS StartDia_Infor1/UNPACK'
      * '<S92>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS StartDia_Infor2/UNPACK'
      * '<S93>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Cell ExtremumIndex Infor/UNPACK'
      * '<S94>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Cell Voltage Infor/UNPACK'
      * '<S95>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_HeatingTemperature/UNPACK'
      * '<S96>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_PoleTemperature/UNPACK'
      * '<S97>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS Statistic_Temperature of Battery/UNPACK'
      * '<S98>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS _SystemTime /UNPACK'
      * '<S99>'  : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information1/UNPACK'
      * '<S100>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information2 /UNPACK'
      * '<S101>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS other Information3/UNPACK'
      * '<S102>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMSWarning_Status/UNPACK'
      * '<S103>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Information1/UNPACK'
      * '<S104>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Information2/UNPACK'
      * '<S105>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status1/UNPACK'
      * '<S106>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status2/UNPACK'
      * '<S107>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BMS_Relay Status3/UNPACK'
      * '<S108>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU1/UNPACK'
      * '<S109>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU2/UNPACK'
      * '<S110>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /BRS2VCU3/UNPACK'
      * '<S111>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /OBC_Charger Status/UNPACK'
      * '<S112>' : 'ZT_VehCtrl_18B/SigIn/CAN0 /TMS2VCU/UNPACK'
      * '<S113>' : 'ZT_VehCtrl_18B/SigIn/CAN1/DCDC1_1'
      * '<S114>' : 'ZT_VehCtrl_18B/SigIn/CAN1/DCDC1_2'
      * '<S115>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC1_LV'
      * '<S116>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC3_Temp'
      * '<S117>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC4_RlySt'
      * '<S118>' : 'ZT_VehCtrl_18B/SigIn/CAN1/HVC7_HV1'
      * '<S119>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ISG MCU STATUS 1'
      * '<S120>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ISG MCU STATUS 2'
      * '<S121>' : 'ZT_VehCtrl_18B/SigIn/CAN1/ISG MCU STATUS 3'
      * '<S122>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU1Msg1'
      * '<S123>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU1Msg2'
      * '<S124>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU1Msg3'
      * '<S125>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU2Msg1'
      * '<S126>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU2Msg2'
      * '<S127>' : 'ZT_VehCtrl_18B/SigIn/CAN1/MCU2Msg3'
      * '<S128>' : 'ZT_VehCtrl_18B/SigIn/CAN1/PDU_RelaySts'
      * '<S129>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TM MCU STATUS 1'
      * '<S130>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TM MCU STATUS 2'
      * '<S131>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TM MCU STATUS 3'
      * '<S132>' : 'ZT_VehCtrl_18B/SigIn/CAN1/TWV '
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
      * '<S161>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS2/Subsystem'
      * '<S162>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS2/Subsystem_capture'
      * '<S163>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS3/Subsystem'
      * '<S164>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS3/Subsystem_capture'
      * '<S165>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS4/Subsystem'
      * '<S166>' : 'ZT_VehCtrl_18B/SigIn/PWM/PWM_PTS4/Subsystem_capture'
      * '<S167>' : 'ZT_VehCtrl_18B/SigIn/PWM/Subsystem/Frequency_DutyCycle_Computation'
      * '<S168>' : 'ZT_VehCtrl_18B/SigIn/PWM/Subsystem/eTimer Configuration and Signal Measurements'
      * '<S169>' : 'ZT_VehCtrl_18B/SigIn/PWM/Subsystem/eTimer Configuration and Signal Measurements/Subsystem_capture'
      * '<S170>' : 'ZT_VehCtrl_18B/SigIn/Subsystem/Compare To Constant'
      * '<S171>' : 'ZT_VehCtrl_18B/SigOut/ACU'
      * '<S172>' : 'ZT_VehCtrl_18B/SigOut/BMS'
      * '<S173>' : 'ZT_VehCtrl_18B/SigOut/BRS'
      * '<S174>' : 'ZT_VehCtrl_18B/SigOut/DCDC'
      * '<S175>' : 'ZT_VehCtrl_18B/SigOut/GPIO '
      * '<S176>' : 'ZT_VehCtrl_18B/SigOut/HVC'
      * '<S177>' : 'ZT_VehCtrl_18B/SigOut/ICU1 '
      * '<S178>' : 'ZT_VehCtrl_18B/SigOut/ICU2'
      * '<S179>' : 'ZT_VehCtrl_18B/SigOut/ISG'
      * '<S180>' : 'ZT_VehCtrl_18B/SigOut/MCU1'
      * '<S181>' : 'ZT_VehCtrl_18B/SigOut/MCU2'
      * '<S182>' : 'ZT_VehCtrl_18B/SigOut/PDU'
      * '<S183>' : 'ZT_VehCtrl_18B/SigOut/TM'
      * '<S184>' : 'ZT_VehCtrl_18B/SigOut/TMS'
      * '<S185>' : 'ZT_VehCtrl_18B/SigOut/TWV'
      * '<S186>' : 'ZT_VehCtrl_18B/SigOut/ACU/Subsystem1'
      * '<S187>' : 'ZT_VehCtrl_18B/SigOut/ACU/Subsystem2'
      * '<S188>' : 'ZT_VehCtrl_18B/SigOut/ACU/Subsystem3'
      * '<S189>' : 'ZT_VehCtrl_18B/SigOut/ACU/Subsystem4'
      * '<S190>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC'
      * '<S191>' : 'ZT_VehCtrl_18B/SigOut/GPIO /HS'
      * '<S192>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT'
      * '<S193>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4'
      * '<S194>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19'
      * '<S195>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem'
      * '<S196>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem1'
      * '<S197>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem2'
      * '<S198>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem3'
      * '<S199>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem4'
      * '<S200>' : 'ZT_VehCtrl_18B/SigOut/GPIO /ETC/Subsystem5'
      * '<S201>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT/FreqCMD'
      * '<S202>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT/PWM Configuration and Frequency Update'
      * '<S203>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT/PWM Configuration and Frequency Update1'
      * '<S204>' : 'ZT_VehCtrl_18B/SigOut/GPIO /PWM_OUT/PWM Configuration and Frequency Update4'
      * '<S205>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/Compare To Constant'
      * '<S206>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL'
      * '<S207>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL1'
      * '<S208>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL/If Action Subsystem1'
      * '<S209>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI0: LS09_14_15_16_1_2_11_4/LS_CTRL1/If Action Subsystem1'
      * '<S210>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19/Compare To Constant'
      * '<S211>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19/Subsystem'
      * '<S212>' : 'ZT_VehCtrl_18B/SigOut/GPIO /SPI3: LS03_06_07_08_10_12_13_17_18_19/Subsystem/øÿ÷∆'
      * '<S213>' : 'ZT_VehCtrl_18B/VehCtrl/EnergyManage'
      * '<S214>' : 'ZT_VehCtrl_18B/VehCtrl/FaultProc'
      * '<S215>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl'
      * '<S216>' : 'ZT_VehCtrl_18B/VehCtrl/SpdCalc'
      * '<S217>' : 'ZT_VehCtrl_18B/VehCtrl/Subsystem'
      * '<S218>' : 'ZT_VehCtrl_18B/VehCtrl/TempertureControl'
      * '<S219>' : 'ZT_VehCtrl_18B/VehCtrl/EnergyManage/Chart'
      * '<S220>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/VehTrqBackward'
      * '<S221>' : 'ZT_VehCtrl_18B/VehCtrl/MontionControl/VehTrqForward'
   */



  


  #endif /* RTW_HEADER_ZT_VehCtrl_18B_h_ */

/* 
 * File trailer for generated code.
 * 
 * [EOF]
 */

