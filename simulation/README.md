# Blinky Project In Action

|ON|OFF|
|:--:|:--:|
|\image html LED ON (s1 ON,s2 ON).png||

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