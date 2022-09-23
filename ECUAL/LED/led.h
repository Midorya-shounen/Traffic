/*
 * led.h
 *
 * Created: 9/14/2022 12:27:11 PM
 *  Author: Emad
 */ 


#ifndef LED_H_
#define LED_H_

#include "c:\users\emad\Documents\Atmel Studio\7.0\Traffic_Light\Traffic_Light\MCAL\DIO\dio.h"

void INIT_LED(uint8_t port,uint8_t pin);
void LED_ON(uint8_t port,uint8_t pin);
void LED_OFF(uint8_t port,uint8_t pin);
void LED_TOGGLE(uint8_t port,uint8_t pin);



#endif /* LED_H_ */