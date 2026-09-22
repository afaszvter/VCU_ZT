/*
 * Copyright (c) 2018, NXP.
 * All rights reserved.
 */

#include "device_registers.h"
#include "clock_manager.h"
#include "mc_me_hw_access.h"
#include "mbdt_clock.h"

status_t MBDT_SetPeripheralClockControl(clock_names_t clockName, uint8_t runConfigIndex, uint8_t lowConfigIndex)
{
    status_t retValue = STATUS_TIMEOUT;

    /* Un-gate clock*/
    MC_ME_SetPeripheralClockControl(MC_ME, clockName, runConfigIndex, lowConfigIndex);

    MC_ME_ChangeMode(MC_ME);

    for (uint32_t i = 0U; i < 10000000U; i++)
    {
        /* Check whether transition completed */
        if (MC_ME_GetTransitionStatus(MC_ME))
        {
            retValue = STATUS_SUCCESS;
            break;
        }
    }
    return retValue;
}
