/* Clock summary for MPC5744P
 * IRCOSC       - 16MHz
 * XOSC         - 40MHz
 * PLL0_PHI0    - 200MHz
 * PLL0_PHI1    - 100MHz
 * PLL1_PHI0    - 80MHz
 *
 * SYS_CLK      - 200MHz
 * MOTC_CLK     - 80MHz (80.001MHz)
 *
 * ADCn_CLK     - 80MHz (80.001MHz)
 * CTUn_CLK     - 80MHz (80.001MHz)
 * DMA0_CLK     - 100MHz
 * DMAMUXn_CLK  - 100MHz
 * ETIMERn_CLK  - 80MHz (80.001MHz)
 * FLEXCAN_CLK  - 200MHz
 * FLEX_PWM_CLK - 80MHz (80.001MHz)
 * LINn_CLK     - 100MHz
 * SGEN_CLK     - 80MHz (80.001MHz)
 * SPIn_CLK     - 100MHz
 *
 */

#include "clock_manager.h"
#include "clock_MPC57xx.h"
 
clock_manager_user_config_t clockMan1_InitConfig0_panther = {

    /*! @brief Configuration of MC_ME */
    .mcmeConfig =
    {
        .run0 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .run1 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .run2 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .run3 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .drun =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = true,
                .pll0          = true,
                .pll1          = true,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_PLL0_PHI0,
        },

        .stop0 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },


        .safe =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .reset =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .test =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },

        .halt0 =
        {
            .clocksEnabled =
            {
                .irc0          = true,
                .xosc0         = false,
                .pll0          = false,
                .pll1          = false,
            },
            .sysclk            = CGM_SYSTEM_CLOCK_SRC_IRCOSC,
        },




        .periphRunConfig =
        {
            {
                /* MC_ME_PERIPH_CONFIG_0 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_1 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = true,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_2 */
                .reset              = false,
                .safe               = true,
                .test               = true,
                .drun               = true,
                .run0               = true,
                .run1               = true,
                .run2               = true,
                .run3               = true,
            },
            {
                /* MC_ME_PERIPH_CONFIG_3 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_4 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_5 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_6 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_7 */
                .reset              = false,
                .safe               = false,
                .test               = false,
                .drun               = false,
                .run0               = false,
                .run1               = false,
                .run2               = false,
                .run3               = false,
            },
        },
        .periphLowPowerConfig =
        {
            {
                /* MC_ME_PERIPH_CONFIG_0 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_1 */
                .halt0               = true,
                .standby0            = false,
                .stop0               = true,
            },
            {
                /* MC_ME_PERIPH_CONFIG_2 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_3 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_4 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_5 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_6 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
            {
                /* MC_ME_PERIPH_CONFIG_7 */
                .halt0               = false,
                .standby0            = false,
                .stop0               = false,
            },
        },
		/* Note: If you regenerate this file using PEX, it will update the count of peripherals
		 * but in our toolbox, we set every peripheral clock separately, only when needed
		 * in the application.
		 */
        .count                    = 0,
        .peripherals              = (void*)0,
    },

    .cgmConfig =
    {
        .sc_dc0              = CGM_CLOCK_DIV_BY_4,

        .ac0_sc              = CGM_ADCx_SOURCE_PLL1_PHI0,
        .ac0_dc0             = CGM_CLOCK_DIV_BY_1,
        .ac0_dc1             = CGM_CLOCK_DIV_BY_4,                   /*!< SGEN divider */
        .ac0_dc2             = CGM_CLOCK_DIV_BY_1,                   /*!< ADC divider */

        .ac1_sc              = CGM_FLEXRAYx_SOURCE_PLL0_PHI0,
        .ac1_dc0             = CGM_CLOCK_DIV_BY_1,
        .ac1_dc1             = CGM_CLOCK_DIV_BY_1,

        .ac2_dc0             = CGM_CLOCK_DIV_BY_3,                   /*!< FLEXCAN divider */                      

        .ac3_sc              = CGM_PLL_REFERENCE_XOSC,

        .ac4_sc              = CGM_PLL_REFERENCE_PLL0_PHI1,

        .ac5_sc              = CGM_LFASTx_SOURCE_XOSC,
        .ac5_dc0             = CGM_CLOCK_DIV_BY_1,

        .ac6_sc              = CGM_CLOCKOUT0_SRC_IRCOSC,
        .ac6_dc0             = CGM_CLOCK_DIV_BY_1,

        .ac10_sc              = CGM_ENETx_SOURCE_IRCOSC,
        .ac10_dc0             = CGM_CLOCK_DIV_BY_1,

        .ac11_sc              = CGM_ENETx_SOURCE_IRCOSC,
        .ac11_dc0             = CGM_CLOCK_DIV_BY_1,                  /*!< ENET0_TIM divider */

    },

    .cgmcsConfig =
    {
        .irc0Config =
        {
            .trimmingValue = IRC_CLOCK_NO_TRIMMING,
        },
        .xosc0Config =
        {
            .freq               = 40000000U,
            .startupDelay       = 1,
            .bypassOption       = XOSC_USE_CRYSTAL,
            .mode               = XOSC_FULL_SWING_PIERCE_MODE,
        },
        .pll0Config =
        {
            .predivider         = PLLDIG_CLOCK_PREDIV_BY_2,
            .mulFactorDiv       = 20,
            .phi0Divider        = PLLDIG_PHI_DIV_BY_2,
            .phi1Divider        = PLLDIG_PHI_DIV_BY_4,
        },
        .pll1Config =
        {
            .mulFactorDiv       = 8,
            .fracDivider        = true,
            .fracDividerValue   = 0,
            .phi0Divider        = PLLDIG_PHI_DIV_BY_5,
            .modulation         = false,
            .modulationType     = CENTRE_SPREAD_MODULATION,
            .modulationPeriod   = 0,
            .incrementStep      = 0,
        },
    },

};
