    #ifndef ADC1_PARAMS_H
    #define ADC1_PARAMS_H

    #include "adc_sar_driver.h"
    #include "pins_driver.h"
    #include "mbdt_adc.h"

    #define INST_ADC1 1U

        extern pin_settings_config_t adc1_PinsCfg[5U];
    extern adc_chain_config_t adc1_chain_config;
    extern adc_conv_config_t adc1_config;



    #endif
