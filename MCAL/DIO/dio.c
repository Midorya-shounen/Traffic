/*
 * dio.c
 *
 * Created: 9/13/2022 11:22:46 PM
 *  Author: Emad
 */ 
#include "dio.h"
void init_pin(uint8_t portNumber, uint8_t pinNumber,uint8_t direction)
{
	switch(portNumber)
	{
		case 'A':
			if (direction == OUTPUT)//output
			{
				DDRA |=(1<<pinNumber);
			}
			else if(direction == INPUT)//input
			{
				DDRA &=~(1<<pinNumber);
			}
			else
			{
				
			}
			break;
		case 'B':
			if (direction == OUTPUT)//output
			{
				DDRB |=(1<<pinNumber);
			}
			else if(direction == INPUT)//input
			{
				DDRB &=~(1<<pinNumber);
			}
			else
			{
				
			}
			break;
		case 'C':
			if (direction == OUTPUT)//output
			{
				DDRC |=(1<<pinNumber);
			}
			else if(direction == INPUT)//input
			{
				DDRC &=~(1<<pinNumber);
			}
			else
			{
				
			}
			break;
		case 'D':
			if (direction == OUTPUT)//output
			{
				DDRD |=(1<<pinNumber);
			}
			else if(direction == INPUT)//input
			{
				DDRD &=~(1<<pinNumber);
			}
			else
			{
				
			}
			break;
	}
	
}
void pin_write(uint8_t portNumber, uint8_t pinNumber,uint8_t value)
{
	switch(portNumber)
	{
		case 'A':
		if (value == 1)//High
		{
			PORTA |=(1<<pinNumber);
		}
		else if(value == 0)//Low
		{
			PORTA &=~(1<<pinNumber);
		}
		else
		{
			
		}
		break;
		case 'B':
		if (value == 1)//High
		{
			PORTB |=(1<<pinNumber);
		}
		else if(value == 0)//Low
		{
			PORTB &=~(1<<pinNumber);
		}
		else
		{
			
		}
		break;
		case 'C':
		if (value == 1)//High
		{
			PORTC |=(1<<pinNumber);
		}
		else if(value == 0)//Low
		{
			PORTC &=~(1<<pinNumber);
		}
		else
		{
			
		}
		break;
		case 'D':
		if (value == 1)//High
		{
			PORTD |=(1<<pinNumber);
		}
		else if(value == 0)//Low
		{
			PORTD &=~(1<<pinNumber);
		}
		else
		{
			
		}
		break;
	}
	
}
void pin_chmod(uint8_t portNumber, uint8_t pinNumber)
{
	
}
void pin_state(uint8_t portNumber, uint8_t pinNumber,uint8_t* state)
{
	
}