/*
 * interrupt.c
 *
 * Created: 9/22/2022 7:36:38 PM
 *  Author: Emad
 */ 

#include "interrupts.h"
void EXT_INT_SET(uint8_t intNumber,EXT_sense sense)
{
	if(intNumber==0){
		switch(sense){
			case 0:
				clear_bit(MCUCR,0);
				set_bit(MCUCR,1);
				break;
			case 1:
				set_bit(MCUCR,0);
				set_bit(MCUCR,1);
				break;
			case 2:
				set_bit(MCUCR,0);
				clear_bit(MCUCR,1);
				break;
			case 3:
				clear_bit(MCUCR,0);
				clear_bit(MCUCR,1);
				break;
		}
	}
	
	else if(intNumber==1){
		switch(sense){
			case 0:
			clear_bit(MCUCR,2);
			set_bit(MCUCR,3);
			break;
			case 1:
			set_bit(MCUCR,2);
			set_bit(MCUCR,3);
			break;
			case 2:
			set_bit(MCUCR,2);
			clear_bit(MCUCR,3);
			break;
			case 3:
			clear_bit(MCUCR,2);
			clear_bit(MCUCR,3);
			break;
		}
	}
	
	else if(intNumber==0){
		switch(sense){
			case 0:
				clear_bit(MCUCSR,6);
				break;
			case 1:
				set_bit(MCUCSR,6);
				break;
			
		}
	}
	
}

void EXT_INT_EN(uint8_t intNumber)
{
	switch(intNumber){
		case 0:
			set_bit(GICR,6);
		case 1:
			set_bit(GICR,7);
		case 2:
			set_bit(GICR,5);
	}
}
void EXT_INT_DE(uint8_t intNumber)
{
	switch(intNumber){
		case 0:
		clear_bit(GICR,6);
		case 1:
		clear_bit(GICR,7);
		case 2:
		clear_bit(GICR,5);
	}
}