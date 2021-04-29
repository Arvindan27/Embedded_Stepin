/**
 * @file activity1.c
 * @author 256268 (arvindan.p.27@gmail.com)
 * @brief Change LED state
 * @version 0.1
 * @date 2021-04-24
 *
 * @copyright Copyright (c) 2021
 *
 */
// include files
#include<avr/io.h>
#include "activity1.h"
/**
 * @brief Change the state of the LED Pin according to the value of S1 and S2.
 *
 * @param state Voltage level to which the LED Pin should be set
 */
void ledchange(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
