/**
 * @file activity3.h
 * @author 256268 (arvindan.p.27@gmail.com)
 * @brief Configuration file to show PWM output according to temperature value
 * @version 0.1
 * @date 2021-04-27
 *
 * @copyright Copyright (c) 2021
 *
 */

#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

#include <avr/io.h>

/**
 * @brief Initialize Peripherals for PWM.
 * @note Oscilloscope is connected to port B1 to see the pwm output.
 * @note Pre-scaler=64
 * @note 10-bit Fast PWM is used.
 */
void setup_pwm();

/**
 * @brief Generating PWM waveform according to the value of temperature(ADC)
 * @param[in] uint16_t value is sent as input to initiate PWM according to the value
 * @note For 0-200 ADC value duty cycle of PWM is 20%, giving output as 20 degree Celsius
 * @note For 210-500 ADC value duty cycle of PWM is 40%, giving output as 25 degree Celsius
 * @note For 510-700 ADC value duty cycle of PWM is 70% , giving output as 29 degree Celsius
 * @note For 710-1024 ADC value duty cycle of PWM is 95% , giving output as 33 degree Celsius
 */
void pwm_waveform(uint16_t);

#endif // ACTIVITY3_H_INCLUDED
