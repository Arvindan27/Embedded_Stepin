/**
 * @file activity3.c
 * @author 256268 (arvindan.p.27@gmail.com)
 * @brief Change LED state
 * @version 0.1
 * @date 2021-04-26
 *
 * @copyright Copyright (c) 2021
 *
 */

/**
 * Include files
 */
#include "Activity3.h"
/**
 * @brief To set up the PWM settings .
 */
void setup_pwm()
{
    TCCR1A |= (1<<COM1A1) | (1<<WGM11) | (1<<WGM10); //Non inverting mode and 10 bit fast adc is configured
    TCCR1B |= (1<<WGM12) | (1<<CS11) | (1<<CS10);   //prescalar=64
    DDRB |= (1<<PB1);//seting Port B1 as output pin
}

void pwm_waveform(uint16_t temp){
    if(temp >= 0 && temp <= 200){
        OCR1A = 0xcc; //Duty=20%
    }
    else if(temp >= 210 && temp <= 500){
        OCR1A = 0x199; //Duty=40%
    }
    else if(temp >= 510 && temp <= 700){
        OCR1A = 0x2cc;   //Duty=70%
    }
    else if(temp >= 710 && temp <= 1024){
        OCR1A = 0x3cb;  //Duty=95%
    }
    else{
        OCR1A = 0x3ff;   //Duty=100%
    }
}

