

#ifndef _MPC_CLOCK_INIT_H
#define _MPC_CLOCK_INIT_H

#include <stdint.h>

#define XTAL_FREQ        40000000UL
#define CORE_CLK_FREQ    200000000UL

void Clock_Setup(void);

#endif
