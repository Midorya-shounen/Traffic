/*
 * interrupts.h
 *
 * Created: 9/14/2022 12:44:40 PM
 *  Author: Emad
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

#include "c:\users\emad\Documents\Atmel Studio\7.0\Traffic_Light\Traffic_Light\Utilities\Registers.h"

#define EXT0 __vector_1
#define EXT1 __vector_2
#define EXT2 __vector_3
#define TIMER0_OVF __vector_11
#define TIMER0_COMP __vector_12


//////////////////////////////////////////////////////////////
#define ISR(INT_VECT) void INT_VECT(void) __attribute__((signal,used));\
void INT_VECT(void)
////////////////////////////////////////

typedef enum EXT_sense{FALING, RISING, ANY_CHANGE,LOW_LEVEL}EXT_sense;

void EXT_INT_SET(uint8_t intNumber,EXT_sense sense);
void EXT_INT_EN(uint8_t intNumber);
void EXT_INT_DE(uint8_t intNumber);

	
#endif /* INTERRUPTS_H_ */