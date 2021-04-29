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

uint16_t ReadADC(uint8_t ch)
{
    //Selecting ADC channel(0-7)
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;
    //Start single conversion
    ADCSRA|=(1<<ADSC);
    //Wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));
    //Clear ADIF by writing 1 .
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
void InitADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
