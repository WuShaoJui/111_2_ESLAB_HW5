/*
 * Copyright (c) 2014-2020 Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

// Adjust pin name to your board specification.
// You can use LED1/LED2/LED3/LED4 if any is connected to PWM capable pin,
// or use any PWM capable pin, and see generated signal on logical analyzer.
PwmOut led(PWM_OUT);
PwmOut led2(D6);

int main()
{
    // specify period first
    led.period(0.05f);      // 0.05 second period
    led.write(0.50f);      // 50% duty cycle, relative to period
    led2.period(0.05f);
    led2.write(0.50f);
    //led = 0.5f;          // shorthand for led.write()
    //led.pulsewidth(2);   // alternative to led.write, set duty cycle time in seconds
    while (1);
}
