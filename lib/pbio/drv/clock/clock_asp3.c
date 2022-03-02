// SPDX-License-Identifier: MIT
// Copyright (c) 2013, 2014 Damien P. George
// Copyright (c) 2018-2021 The Pybricks Authors

#include <contiki.h>

#include <pbdrv/config.h>

#if PBDRV_CONFIG_CLOCK_ASP3

#include STM32_H

// NB: pbdrv_clock_ticks is intended to be private, but making it static
// breaks things.
volatile uint32_t pbdrv_clock_ticks;

void pbdrv_clock_init(void) {
}

uint32_t pbdrv_clock_get_ms(void) {
    return pbdrv_clock_ticks;
}

uint32_t pbdrv_clock_get_us(void) {
    return pbdrv_clock_ticks * 1000;
}

void pbdrv_timer_handler(void) {
    pbdrv_clock_ticks++;
    void debug_puts(const char *s);
    // debug_puts("timer");
    etimer_request_poll();
}

// Do not define HAL_GetTick here. Instead, use HAL_GetTick() defined in ASP3.
// uint32_t HAL_GetTick(void) {
//     return pbdrv_clock_ticks;
// }

#endif // PBDRV_CONFIG_CLOCK_ASP3
