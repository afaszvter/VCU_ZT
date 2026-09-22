/* 
 * File: fcan1_mpc_event_callback.c
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


    

  


  


  


  


  


  


  


  


                  #include "flexcan_driver.h"
                #include "fcan1_mpc_event_callback.h"

                #include "ZT_VehCtrl_18B.h"
                #include "ZT_VehCtrl_18B_private.h"

                void fcan1_mpc_event_callback(uint8_t instance, flexcan_event_type_t eventType, uint32_t buffIdx, flexcan_state_t *flexcanState)
                {



  


  


  


  


  


  


  


  
                    if (eventType == FLEXCAN_EVENT_RX_COMPLETE) {
                        uint8_t i;
                        flexcan_msgbuff_t* mb_message = flexcanState->mbs[buffIdx].mb_message;

                        /*@>29dd9*/ZT_VehCtrl_18B_B./*@>29de6*/CAN1_Rx_500_o2 = buffIdx;
                        /*@>29e0a*/ZT_VehCtrl_18B_B./*@>29e17*/CAN1_Rx_500_o3 = mb_message->msgId;
                        /*@>29e6c*/ZT_VehCtrl_18B_B./*@>29e79*/CAN1_Rx_500_o5 = mb_message->dataLen;

                        for(i = 0; i < mb_message->dataLen; i++) {
                            (&/*@<29e29*//*@>29e22*/ZT_VehCtrl_18B_B./*@>29e2e*/CAN1_Rx_500_o4[0])[i] = mb_message->data[i];
                        }

                        /*@>29e9d*/ZT_VehCtrl_18B_B./*@>29eaa*/CAN1_Rx_500_o6 = (mb_message->cs & CAN_CS_TIME_STAMP_MASK) >> CAN_CS_TIME_STAMP_SHIFT;

                        


                    
      
        /*@[2634c*/ZT_VehCtrl_18B_CAN1/*@]*/();
      


                        return;
                    }



  


  


  


                  }



/* 
 * File trailer for generated code.
 * 
 * [EOF]
 */

