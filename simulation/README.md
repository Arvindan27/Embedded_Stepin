# Blinky Project In Act
LED ON

![LED ON](<img src="simulation/../LED%20ON%20(s1%20ON,s2%20ON).png" width="200">)

LED OFF


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