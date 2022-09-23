/*
 * dio.h
 *
 * Created: 9/13/2022 11:22:28 PM
 *  Author: Emad
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "c:\users\emad\Documents\Atmel Studio\7.0\Traffic_Light\Traffic_Light\Utilities\Registers.h"

#define PortA 'A'
#define PortB 'B'
#define PortC 'C'
#define PortD 'D'

#define INPUT 0
#define OUTPUT 1

#define HIGH 1
#define LOW 0

void init_pin(uint8_t portNumber, uint8_t pinNumber,uint8_t direction);//data direction
void pin_write(uint8_t portNumber, uint8_t pinNumber,uint8_t value);//port output
void pin_chmod(uint8_t portNumber, uint8_t pinNumber);//change state of pin
void pin_state(uint8_t portNumber, uint8_t pinNumber,uint8_t* state);//read the state of the pin


#endif /* DIO_H_ */