/**
 * @file project_main.c
 * @author Arvindan.P()
 * @brief Project to Blink an LED at 1000ms ON and 500 ms OFF Interval
 * @version 0.1
 * @date 2021-04-25
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"

#include "user_utils.h"
#include "blinky.h"

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTD4 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTD4 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void){
    DDRD=DDRD|(1<<4);
    DDRC=DDRC&~(1<<4);
    DDRC=DDRC &~(1<<5);
    while(1){
        if((PINC & (1<<5))&&(PINC & (1<<4))){
                PORTD=PORTD|(1<<4);
            }else{
            PORTD=PORTD &~(1<<4);
        }
    }
	return 0;}

