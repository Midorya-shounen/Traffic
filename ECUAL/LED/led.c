/*
 * led.c
 *
 * Created: 9/14/2022 12:26:52 PM
 *  Author: Emad
 */ 
#include "led.h"


void INIT_LED(uint8_t port,uint8_t pin)
{
	init_pin(port,pin,OUTPUT);
}
void LED_ON(uint8_t port,uint8_t pin)
{
	pin_write(port,pin,HIGH);
}
void LED_OFF(uint8_t port,uint8_t pin)
{
	pin_write(port,pin,LOW);
}
void LED_TOGGLE(uint8_t port,uint8_t pin)
{/*
	char check=0;
	pin_state(PortA,&check);
	if(check)
	{
		pin_write(port,pin,LOW);
	}
	else
	{
		pin_write(port,pin,HIGH);
	}*/
}