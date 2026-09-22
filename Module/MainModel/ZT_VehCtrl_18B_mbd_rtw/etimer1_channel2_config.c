    #include "etimer1_channel2_config.h"

    /*! eTimer1 Channel 2 configuration structure */
    etimer_user_channel_config_t eTmr1Ch2Cfg = {
        .countMode = ETIMER_CNTMODE_PRIMARY,
        .inputFilter =
        {
            .samples = ETIMER_FILT_CNT_3,
            .rate = 0,
        },
        .primaryInput =
        {
            .source = ETIMER_IN_SRC_CLK_DIV_32,
            .polarity = ETIMER_POLARITY_POSITIVE
        },
        .secondaryInput =
        {
            .source = ETIMER_IN_SRC_CNT0_IN,
            .polarity = ETIMER_POLARITY_POSITIVE,
        },
        .outputPin =
        {
            .enable = false,
            .polarity = ETIMER_POLARITY_POSITIVE,
        },
        .countDirection = ETIMER_COUNT_UP,
        .compareValues =
        {
            0U,
            0U,
        },
        .compareLoading =
        {
            ETIMER_CLC_NEVER,
            ETIMER_CLC_NEVER,
        },
        .compareOutputControl = ETIMER_OUTMODE_COMPARE_ALT_TOGGLE,
        .compareMode = ETIMER_CMPMODE_COMP1_UP_COMP2_UP,
        .captureControl =
        {
            ETIMER_CPTMODE_RISING,
            ETIMER_CPTMODE_FALLING,
        },
        .captureWords = 2,
        .interruptEnableMask = (0x0000
        | ETIMER_CH_IRQ_SOURCE_ICF2IE   /*!< Input Capture 2 Flag Interrupt Enable */
        ),
        .oneshotCapture = false,
        .countOnce = false,
        .redundant = false, 
        .masterMode =  false, 
        .coChannelForce =  false, 
        .coChannelInit =  ETIMER_COINIT_NONE, 
        .countLength = false
    };


    /* Device instance pins*/
    pin_settings_config_t eTmr1Ch2PinsCfg[1] = {
    {
        .base              = SIUL2,
        .pinPortIdx        = 49U,
        .mux               = PORT_MUX_AS_GPIO,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .slewRateCtrlSel   = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .hysteresisSelect  = PORT_HYSTERESYS_ENABLED,
        .safeMode          = PORT_SAFE_MODE_ENABLED,
        .analogPadCtrlSel  = PORT_ANALOG_PAD_CONTROL_DISABLED,
        .inputBuffer       = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer      = PORT_OUTPUT_BUFFER_DISABLED,
        .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
        .invertOutput      = PORT_INVERT_OUTPUT_DISABLED,
        .gpioBase          = PTD,
        .intConfig         =
        {
            .intEdgeSel    = SIUL2_INT_DISABLE
        },
        .inputMux[0]       = PORT_MUX_ALT3,
        .inputInvert[0]    = PORT_INVERT_INPUT_DISABLED,
        .inputMuxReg[0]    = 67U,
        .inputMux[1]       = PORT_INPUT_MUX_NO_INIT,
        .inputMux[2]       = PORT_INPUT_MUX_NO_INIT,
        .inputMux[3]       = PORT_INPUT_MUX_NO_INIT,
        .inputMux[4]       = PORT_INPUT_MUX_NO_INIT,
        .inputMux[5]       = PORT_INPUT_MUX_NO_INIT,
        .inputMux[6]       = PORT_INPUT_MUX_NO_INIT,
        .inputMux[7]       = PORT_INPUT_MUX_NO_INIT,
    },
    };

