#include "etimer0_channel3_config.h"

/*! eTimer0 Channel 3 configuration structure */
etimer_user_channel_config_t eTmr0Ch3Cfg = {
  .countMode = ETIMER_CNTMODE_PRIMARY,
  .inputFilter =
  {
    .samples = ETIMER_FILT_CNT_3,
    .rate = 0,
  },
  .primaryInput =
  {
    .source = ETIMER_IN_SRC_CLK_DIV_64,
    .polarity = ETIMER_POLARITY_POSITIVE
  },
  .secondaryInput =
  {
    .source = ETIMER_IN_SRC_CNT0_IN,
    .polarity = ETIMER_POLARITY_POSITIVE,
  },
  .outputPin =
  {
    .enable = true,
    .polarity = ETIMER_POLARITY_POSITIVE,
  },
  .countDirection = ETIMER_COUNT_UP,
  .compareValues =
  {
    3750U,
    3750U,
  },
  .compareLoading =
  {
    ETIMER_CLC_FROM_CMPLD1_WHEN_COMP2,
    ETIMER_CLC_FROM_CMPLD2_WHEN_COMP2,
  },
  .compareOutputControl = ETIMER_OUTMODE_COMPARE_ALT_TOGGLE,
  .compareMode = ETIMER_CMPMODE_COMP1_UP_COMP2_UP,
  .captureControl =
  {
    ETIMER_CPTMODE_DISABLED,
    ETIMER_CPTMODE_DISABLED,
  },
  .captureWords = 2,
  .interruptEnableMask = (0x0000
  | ETIMER_CH_IRQ_SOURCE_TCF2IE        /*!< Timer Compare 2 Flag Interrupt Enable */
  ),
  .oneshotCapture = false,
  .countOnce = false,
  .redundant = false,
  .masterMode = true,
  .coChannelForce = false,
  .coChannelInit = ETIMER_COINIT_NONE,
  .countLength = true
};

/* Device instance pins*/
pin_settings_config_t eTmr0Ch3PinsCfg[1] = {
  {
    .base = SIUL2,
    .pinPortIdx = 3U,
    .mux = PORT_MUX_ALT1,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_ENABLED,
    .safeMode = PORT_SAFE_MODE_ENABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_DISABLED,
    .inputBuffer = PORT_INPUT_BUFFER_DISABLED,
    .outputBuffer = PORT_OUTPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,
    .gpioBase = PTA,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMux[0] = PORT_MUX_ALT2,
    .inputInvert[0] = PORT_INVERT_INPUT_DISABLED,
    .inputMuxReg[0] = 62U,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },
};
