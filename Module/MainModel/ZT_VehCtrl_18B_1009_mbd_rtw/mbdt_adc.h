/*
 * Copyright (c) 2018, NXP.
 * All rights reserved.
 */

#ifndef ADC_MBDT_DRIVER_H
#define ADC_MBDT_DRIVER_H

#include "device_registers.h"

#if defined (__cplusplus)
extern "C" {
#endif

void ADC_MBDT_ClearWTISR(const uint32_t instance, const uint32_t mask);

void ADC_MBDT_ClearAWORR(const uint32_t instance, const uint32_t mask);

uint32_t ADC_MBDT_GetWTISR(const uint32_t instance);

uint32_t ADC_MBDT_GetAWORR(const uint32_t instance);

void ADC_MBDT_EnableThresholdInterrupt(const uint32_t instance, const uint32_t chnIdx);
void ADC_MBDT_DisableThresholdInterrupt(const uint32_t instance, const uint32_t chnIdx);

#if defined (__cplusplus)
}
#endif

/*! @} */

#endif /* ADC_MBDT_DRIVER_H */
