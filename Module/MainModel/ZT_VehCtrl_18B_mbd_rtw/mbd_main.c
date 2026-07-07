/*
 * File: mbd_main.c
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

/* Model's headers */
#include "device_registers.h"
#include "ZT_VehCtrl_18B.h"
#include "clock_manager.h"
#include "interrupt_manager.h"
#include "pit_driver.h"
#include "pins_driver.h"
#include "mpc_clock_init.h"
#include "mbdt_clock.h"

void SYSTEM_INIT_TASK(void)
{
  /* Initialize model */
  ZT_VehCtrl_18B_initialize();
}

void SYSTEM_TASK(void)
{
  ZT_VehCtrl_18B_step();

  /* Get model outputs here */
}

void PIT_Ch0_IRQHandler (void)
{
  SYSTEM_TASK();
  PIT_DRV_ClearStatusFlags(0U, 0U);    /* Clear channel PIT0, CH0 interrupt flag */
}

void pit0_init()
{
  MBDT_SetPeripheralClockControl(PITRTI0_CLK, MC_ME_PERIPH_CONFIG_2,
    MC_ME_PERIPH_CONFIG_3);
  const pit_config_t pit0_InitConfig = {
    .enableStandardTimers = true,

#if FEATURE_PIT_HAS_RTI_CHANNEL

    .enableRTITimer = false,

#endif

    .stopRunInDebug = false
  };

  /* Initialize PIT */
  PIT_DRV_Init(0u, &pit0_InitConfig);

  /*! User channel configuration 0 */
  pit_channel_config_t pit0_ChnConfig0 = {
    .hwChannel = 0U,
    .periodUnit = PIT_PERIOD_UNITS_MICROSECONDS,
    .period = 5000U,
    .enableChain = false,
    .enableInterrupt = true
  };

  /* Initialize channel 0 */
  PIT_DRV_InitChannel(0U, &pit0_ChnConfig0);

  /* Set priority for PIT ISR */
  INT_SYS_SetPriority(PIT_Ch0_IRQn, 1U);

  /* Start channel 0 counting */
  PIT_DRV_StartChannel(0U, pit0_ChnConfig0.hwChannel);
}

const uint32_t appKey __attribute__((__section__(".appKey"))) = 0x55AA55AA;
const uint32_t appDelay __attribute__((__section__(".appDelay"))) = 5000000;
const uint32_t appKeyAddr __attribute__((__section__(".appKeyAddr"))) =
  ( uint32_t )&appKey;
int main(void)
{
  /* Disable all interrupts.*/
  INT_SYS_DisableIRQGlobal();

  /* Setup the MCU clocks and modes */
  /* Clock initialization */
  Clock_Setup();

  /* Initialize the processor. */
  SYSTEM_INIT_TASK();

  /* The PIT is used to call the step function, the timing being set from Simulink (fundamental sample time) */
  pit0_init();

  /* Enable all interrupts.*/
  INT_SYS_EnableIRQGlobal();
  while (1) {
    /* FreeMaster Polling */
    FMSTR_Poll();
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
