/*
 * Copyright (c) 2018, NXP.
 * All rights reserved.
 */
#include "device_registers.h"
#include "clock_manager.h"
#include "clock_MPC57xx.h"


void Clock_Setup(void)
{
#if defined(CPU_MPC5741P) || defined(CPU_MPC5742P) || defined(CPU_MPC5743P) || defined(CPU_MPC5744P)
    extern clock_manager_user_config_t clockMan1_InitConfig0_panther;
    CLOCK_SYS_SetConfiguration(&clockMan1_InitConfig0_panther);
#elif defined(CPU_MPC5743R) || defined(CPU_MPC5745R) || defined(CPU_MPC5746R)
    extern clock_manager_user_config_t clockMan1_InitConfig0_mpc574xR;
    CLOCK_SYS_SetConfiguration(&clockMan1_InitConfig0_mpc574xR);
#else
    extern clock_manager_user_config_t clockMan1_InitConfig0_calypso;
    CLOCK_SYS_SetConfiguration(&clockMan1_InitConfig0_calypso);
#endif
}