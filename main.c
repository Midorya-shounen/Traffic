/*
 * Traffic_Light.c
 *
 * Created: 9/13/2022 10:37:21 PM
 * Author : Emad
 */ 

//#include <avr/io.h>

#include "ECUAL/LED/led.h"
#include "Utilities/Registers.h"
#include "MCAL/Intrrupts/interrupts.h"
#include "Utilities/bit_manipulation.h"
//#include "avr/interrupt.h"
char ten =0;
int main(void)
{
    /* Replace with your application code */
	INIT_LED(PortA,1);
	set_bit(SREG,7);
	EXT_INT_SET(0,RISING);
	EXT_INT_EN(0);
	LED_ON(PortA,1);
    while (1) 
    {
    }
	
	
}
ISR(EXT0)
{
	LED_OFF(PortA,1);
}


