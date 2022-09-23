/*
 * Registers.h
 *
 * Created: 9/13/2022 10:39:16 PM
 *  Author: Emad
 */ 



/************************************************************************/
/* Atmega 32 microcontroller registers                                  */
/************************************************************************/

#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "Type.h"


/************************************************************************/
/* define DIO registers                                                 */
/************************************************************************/

//define Port A registers 

#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA *((volatile uint8_t*)0x3A)
#define PINA *((volatile uint8_t*)0x39)


//define Port B registers

#define PORTB *((volatile uint8_t*)0x38)
#define DDRB *((volatile uint8_t*)0x37)
#define PINB *((volatile uint8_t*)0x36)


//define Port C registers

#define PORTC *((volatile uint8_t*)0x35)
#define DDRC *((volatile uint8_t*)0x34)
#define PINC *((volatile uint8_t*)0x33)


//define Port D registers

#define PORTD *((volatile uint8_t*)0x32)
#define DDRD *((volatile uint8_t*)0x31)
#define PIND *((volatile uint8_t*)0x30)


/************************************************************************/
/* Interrupts registers                                                 */
/************************************************************************/

//
#define SREG *((volatile uint8_t*)0x5F)
#define GICR *((volatile uint8_t*)0x5B)
#define GIFR *((volatile uint8_t*)0x5A)
#define MCUCR *((volatile uint8_t*)0x55)
#define MCUCSR *((volatile uint8_t*)0x54)


/************************************************************************/
/* Timer0 registers                                                      */
/************************************************************************/


#define TCCR0 *((volatile uint8_t*)0x53)
#define TCNT0 *((volatile uint8_t*)0x52)
#define TCNT0 *((volatile uint8_t*)0x52)


#endif /* REGISTERS_H_ */