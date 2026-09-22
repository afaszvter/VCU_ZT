#ifndef ADC0_PARAMS_H
#define ADC0_PARAMS_H
#include "adc_sar_driver.h"
#include "pins_driver.h"
#include "mbdt_adc.h"
#define INST_ADC0                      0U

extern pin_settings_config_t adc0_PinsCfg[10U];
extern adc_chain_config_t adc0_chain_config;
extern adc_conv_config_t adc0_config;

#endif
