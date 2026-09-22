/*
 * File: freemaster_interface_init.c
 *
 * Code generated for Simulink model 'ZT_VehCtrl_18B_CAN'.
 *
 * Model version                   : 1.7
 * Simulink Coder version          : 9.0 (R2018b) 24-May-2018
 * MBDT for MPC57xx Series Version : 3.2.0 (R2016a-R2020a) 14-Apr-2020
 * C/C++ source code generated on  : Mon Sep 21 10:04:31 2026
 *
 * Target selection: mbd_mpc574x.tlc
 * Embedded hardware selection: Motorola PowerPC
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

/********************  Dependent Include files here **********************/
#include "freemaster.h"
#include "freemaster_interface_init.h"
#include "clock_manager.h"
#include "device_registers.h"
#include "interrupt_manager.h"
#include "mbdt_clock.h"
#include "flexcan_driver.h"

/**********************  Initialization Function *************************/
void freemaster_interface_init(void)
{
  static flexcan_state_t canCom2_State;
  const flexcan_user_config_t canCom2_InitConfig = {
    .pe_clock = FLEXCAN_CLK_SOURCE_OSC,
    .max_num_mb = 15,
    .num_id_filters = FLEXCAN_RX_FIFO_ID_FILTERS_8,
    .is_rx_fifo_needed = false,
    .flexcanMode = FLEXCAN_NORMAL_MODE,
    .bitrate = {
      .propSeg = 6,
      .phaseSeg1 = 5,
      .phaseSeg2 = 5,
      .preDivider = 3,
      .rJumpwidth = 3
    },
    .transfer_type = FLEXCAN_RXFIFO_USING_INTERRUPTS,
  };

  MBDT_SetPeripheralClockControl(FLEXCAN2_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_2);
  FLEXCAN_DRV_Init(2, &canCom2_State, &canCom2_InitConfig);
}

/*
 *######################################################################
 *                           End of File
 *######################################################################
 */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
