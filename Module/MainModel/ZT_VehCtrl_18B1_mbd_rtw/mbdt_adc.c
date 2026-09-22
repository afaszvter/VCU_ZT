/*
 * Copyright (c) 2018-2020, NXP.
 * All rights reserved.
 */
#include "mbdt_adc.h"

#include "device_registers.h"
#include "adc_sar_hw_access.h"

void ADC_MBDT_ClearWTISR(const uint32_t instance, const uint32_t mask)
{
    DEV_ASSERT(instance < ADC_INSTANCE_COUNT);

    static ADC_Type * const s_adcBase[ADC_INSTANCE_COUNT] = ADC_BASE_PTRS;
    ADC_Type * const base = s_adcBase[instance];

    base->WTISR = mask;
}

void ADC_MBDT_ClearAWORR(const uint32_t instance, const uint32_t mask)
{
    DEV_ASSERT(instance < ADC_INSTANCE_COUNT);

    static ADC_Type * const s_adcBase[ADC_INSTANCE_COUNT] = ADC_BASE_PTRS;
    ADC_Type * const base = s_adcBase[instance];

    /* For MPC574xP there is only one AWORR register*/
    base->AWORR[0u] = mask;
}

uint32_t ADC_MBDT_GetWTISR(const uint32_t instance)
{
    DEV_ASSERT(instance < ADC_INSTANCE_COUNT);

    static ADC_Type * const s_adcBase[ADC_INSTANCE_COUNT] = ADC_BASE_PTRS;
    ADC_Type * const base = s_adcBase[instance];

    return base->WTISR;
}

uint32_t ADC_MBDT_GetAWORR(const uint32_t instance)
{
    DEV_ASSERT(instance < ADC_INSTANCE_COUNT);

    static ADC_Type * const s_adcBase[ADC_INSTANCE_COUNT] = ADC_BASE_PTRS;
    ADC_Type * const base = s_adcBase[instance];

    return base->AWORR[0u];
}

void ADC_MBDT_EnableThresholdInterrupt(const uint32_t instance, const uint32_t thIdx)
{
    DEV_ASSERT(instance < ADC_INSTANCE_COUNT);

    static ADC_Type * const s_adcBase[ADC_INSTANCE_COUNT] = ADC_BASE_PTRS;
    ADC_Type * const base = s_adcBase[instance];

    switch (thIdx)
    {
        case 0:
            base -> WTIMR |= ADC_WTIMR_MSKWDG0L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG0H(1u);
            break;
        case 1:
            base -> WTIMR |= ADC_WTIMR_MSKWDG1L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG1H(1u);
            break;
        case 2:
            base -> WTIMR |= ADC_WTIMR_MSKWDG2L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG2H(1u);
            break;
        case 3:
            base -> WTIMR |= ADC_WTIMR_MSKWDG3L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG3H(1u);
            break;
        #if (!defined(MPC5743R_SERIES) && !defined(MPC5745R_SERIES) && !defined(MPC5746R_SERIES))
        case 4:
            base -> WTIMR |= ADC_WTIMR_MSKWDG4L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG4H(1u);
            break;
        case 5:
            base -> WTIMR |= ADC_WTIMR_MSKWDG5L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG5H(1u);
            break;
        #if (!defined(MPC5744B_SERIES) && !defined(MPC5745B_SERIES) && !defined(MPC5746B_SERIES) && \
            !defined(MPC5744C_SERIES) && !defined(MPC5745C_SERIES) && !defined(MPC5746C_SERIES) && !defined(MPC5747C_SERIES) && !defined (MPC5748C_SERIES) && \
            !defined(MPC5746G_SERIES) && !defined(MPC5747G_SERIES) && !defined(MPC5748G_SERIES))
        case 6:
            base -> WTIMR |= ADC_WTIMR_MSKWDG6L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG6H(1u);
            break;
        case 7:
            base -> WTIMR |= ADC_WTIMR_MSKWDG7L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG7H(1u);
            break;
        case 8:
            base -> WTIMR |= ADC_WTIMR_MSKWDG8L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG8H(1u);
            break;
        case 9:
            base -> WTIMR |= ADC_WTIMR_MSKWDG9L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG9H(1u);
            break;
        case 10:
            base -> WTIMR |= ADC_WTIMR_MSKWDG10L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG10H(1u);
            break;
        case 11:
            base -> WTIMR |= ADC_WTIMR_MSKWDG11L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG11H(1u);
            break;
        case 12:
            base -> WTIMR |= ADC_WTIMR_MSKWDG12L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG12H(1u);
            break;
        case 13:
            base -> WTIMR |= ADC_WTIMR_MSKWDG13L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG13H(1u);
            break;
        case 14:
            base -> WTIMR |= ADC_WTIMR_MSKWDG14L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG14H(1u);
            break;
        case 15:
            base -> WTIMR |= ADC_WTIMR_MSKWDG15L(1u);
            base -> WTIMR |= ADC_WTIMR_MSKWDG15H(1u);
            break;
        #endif  /* Calypso */
        #endif  /* Rainier */
        default:
            /* no-op */
            break;
    }
}

void ADC_MBDT_DisableThresholdInterrupt(const uint32_t instance, const uint32_t thIdx)
{
    DEV_ASSERT(instance < ADC_INSTANCE_COUNT);

    static ADC_Type * const s_adcBase[ADC_INSTANCE_COUNT] = ADC_BASE_PTRS;
    ADC_Type * const base = s_adcBase[instance];

    switch (thIdx)
    {
        case 0:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG0L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG0H(1u));
            break;
        case 1:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG1L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG1H(1u));
            break;
        case 2:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG2L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG2H(1u));
            break;
        case 3:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG3L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG3H(1u));
            break;
        #if (!defined(MPC5743R_SERIES) && !defined(MPC5745R_SERIES) && !defined(MPC5746R_SERIES))
        case 4:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG4L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG4H(1u));
            break;
        case 5:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG5L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG5H(1u));
            break;
        #if (!defined(MPC5744B_SERIES) && !defined(MPC5745B_SERIES) && !defined(MPC5746B_SERIES) && \
            !defined(MPC5744C_SERIES) && !defined(MPC5745C_SERIES) && !defined(MPC5746C_SERIES) && !defined(MPC5747C_SERIES) && !defined (MPC5748C_SERIES) && \
            !defined(MPC5746G_SERIES) && !defined(MPC5747G_SERIES) && !defined(MPC5748G_SERIES))
        case 6:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG6L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG6H(1u));
            break;
        case 7:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG7L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG7H(1u));
            break;
        case 8:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG8L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG8H(1u));
            break;
        case 9:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG9L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG9H(1u));
            break;
        case 10:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG10L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG10H(1u));
            break;
        case 11:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG11L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG11H(1u));
            break;
        case 12:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG12L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG12H(1u));
            break;
        case 13:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG13L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG13H(1u));
            break;
        case 14:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG14L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG14H(1u));
            break;
        case 15:
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG15L(1u));
            base -> WTIMR &= ~(ADC_WTIMR_MSKWDG15H(1u));
            break;
        #endif  /* Calypso */
        #endif  /* Rainier */
        default:
            /* no-op */
            break;
    }
}
