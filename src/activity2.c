/**
 * @file activity2.c
 * @author 256268 (arvindan.p.27@gmail.com)
 * @brief A Read ADC fucntion to read the analog values from potentiometer(temp sensor) and store the converted digital value.
 * @version 0.1
 * @date 2021-04-25
 *
 * @copyright Copyright (c) 2021
 *
 */
#include<avr/io.h>
#include "activity2.h"

/**
 * @brief initializing ADC
 */
void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

/**
 * @brief Read ADC function to read the potentiometer values(temperature sensor)
 *
 * @param c setting channel 0.
 */
uint16_t ReadADC(uint8_t c)
{
    /*Selecting ADC channel0*/
    ADMUX&=0xf8;
    c=c&0b00000111;
    ADMUX|=ch;
    /*Start  conversion*/
    ADCSRA|=(1<<ADSC);
    /*Wait for conversion to complete*/
    while(!(ADCSRA & (1<<ADIF)));
    /*Clear ADIF by writing 1 .*/
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
