#include "adc0_params.h"

pin_settings_config_t adc0_PinsCfg[10U] = {
  {
    .base = SIUL2,
    .pinPortIdx = 34U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTC,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },

  {
    .base = SIUL2,
    .pinPortIdx = 66U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTE,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },

  {
    .base = SIUL2,
    .pinPortIdx = 24U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTB,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },

  {
    .base = SIUL2,
    .pinPortIdx = 71U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTE,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },

  {
    .base = SIUL2,
    .pinPortIdx = 25U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTB,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },

  {
    .base = SIUL2,
    .pinPortIdx = 33U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTC,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },

  {
    .base = SIUL2,
    .pinPortIdx = 68U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTE,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },

  {
    .base = SIUL2,
    .pinPortIdx = 23U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTB,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },

  {
    .base = SIUL2,
    .pinPortIdx = 70U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTE,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },

  {
    .base = SIUL2,
    .pinPortIdx = 69U,
    .mux = PORT_MUX_AS_GPIO,
    .outputBuffer = PORT_OUTPUT_BUFFER_DISABLED,
    .openDrain = PORT_OPEN_DRAIN_DISABLED,
    .slewRateCtrlSel = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
    .hysteresisSelect = PORT_HYSTERESYS_DISABLED,
    .safeMode = PORT_SAFE_MODE_DISABLED,
    .analogPadCtrlSel = PORT_ANALOG_PAD_CONTROL_ENABLED,
    .inputBuffer = PORT_INPUT_BUFFER_ENABLED,
    .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,

#ifdef FEATURE_SIUL2_HAS_INVERT_DATA_OUTPUT

    .invertOutput = PORT_INVERT_OUTPUT_DISABLED,

#endif

    .gpioBase = PTE,
    .intConfig =
    {
      .intEdgeSel = SIUL2_INT_DISABLE
    },
    .inputMuxReg[0] = 0U,
    .inputMux[0] = PORT_MUX_AS_GPIO,
    .inputMux[1] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[2] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[3] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[4] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[5] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[6] = PORT_INPUT_MUX_NO_INIT,
    .inputMux[7] = PORT_INPUT_MUX_NO_INIT,
  },
};

adc_chain_config_t adc0_chain_config = {
  .chanMaskNormal = { 2559U, 0U, 0U },
  .chanMaskInjected = { 0u, 0u, 0u },
  .interruptMask = { 0u, 0u, 0u },
};

adc_conv_config_t adc0_config = {
  .convMode = ADC_CONV_MODE_ONESHOT,
  .clkSelect = ADC_CLK_FULL_BUS,
  .refSelect = ADC_REF_VREFH,
  .ctuMode = ADC_CTU_MODE_DISABLED,
  .injectedEdge = ADC_INJECTED_EDGE_DISABLED,
  .sampleTime0 = 100U,
  .sampleTime1 = 100U,
  .sampleTime2 = 100U,
  .autoClockOff = false,
  .overwriteEnable = false,
  .dataAlign = ADC_DATA_ALIGNED_RIGHT,
  .decodeDelay = 0U,
  .powerDownDelay = 0U,
};
