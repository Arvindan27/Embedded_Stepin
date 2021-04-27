# Blinky Project In Act
|ON|

|![LED ON](LED%20ON%20(s1%20ON,s2%20ON).png)|

## Code 
```
	for(;;)
	{
        change_led_state(HIGH);
		delay_ms(LED_ON_TIME);
        change_led_state(LOW);
		delay_ms(LED_OFF_TIME);	
	}
```