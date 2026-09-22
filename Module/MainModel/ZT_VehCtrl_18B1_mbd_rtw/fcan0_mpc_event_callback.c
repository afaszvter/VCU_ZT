/*
 * File: fcan0_mpc_event_callback.c
 *
 * Code generated for Simulink model 'ZT_VehCtrl_18B1'.
 *
 * Model version                   : 1.4
 * Simulink Coder version          : 9.0 (R2018b) 24-May-2018
 * MBDT for MPC57xx Series Version : 3.2.0 (R2016a-R2020a) 14-Apr-2020
 * C/C++ source code generated on  : Fri Sep 18 14:28:20 2026
 *
 * Target selection: mbd_mpc574x.tlc
 * Embedded hardware selection: Motorola PowerPC
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "flexcan_driver.h"
#include "fcan0_mpc_event_callback.h"
#include "ZT_VehCtrl_18B1.h"
#include "ZT_VehCtrl_18B1_private.h"

void fcan0_mpc_event_callback(uint8_t instance, flexcan_event_type_t eventType,
  uint32_t buffIdx, flexcan_state_t *flexcanState)
{
  if (eventType == FLEXCAN_EVENT_RX_COMPLETE) {
    uint8_t i;
    flexcan_msgbuff_t* mb_message = flexcanState->mbs[buffIdx].mb_message;
    ZT_VehCtrl_18B1_B.CAN0_Rx_500_o2 = buffIdx;
    ZT_VehCtrl_18B1_B.CAN0_Rx_500_o3 = mb_message->msgId;
    ZT_VehCtrl_18B1_B.CAN0_Rx_500_o5 = mb_message->dataLen;
    for (i = 0; i < mb_message->dataLen; i++) {
      (&ZT_VehCtrl_18B1_B.CAN0_Rx_500_o4[0])[i] = mb_message->data[i];
    }

    ZT_VehCtrl_18B1_B.CAN0_Rx_500_o6 = (mb_message->cs & CAN_CS_TIME_STAMP_MASK)
      >> CAN_CS_TIME_STAMP_SHIFT;
    ZT_VehCtrl_18B1_CAN0();
    return;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
