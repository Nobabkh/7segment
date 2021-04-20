/*
* microcontroler_with_C.c
*
* Created: 4/16/2021 3:04:06 PM
* Author : nirob
*/
//#define DEL _delay_ms(900)
/*#define GON PORTC = (1 << PC5)
#define GOFF PORTC = (0 << PC5)
#define OFF PORTB = 0X00*/

#ifndef F_CPU // if F_CPU was not defined in Project -> Properties
#define F_CPU 16000000UL // define it now as 16 MHz unsigned long
#endif

#include <avr/io.h> // this is always included in AVR programs
#include <util/delay.h> // add this to use the delay function
#include "7segment.h"

void prints(int i)
{
	if(i == 0){
		GOFF;
		OFF;
		PORTB= 0X7F;
	}
	else if(i == 1){
		OFF;
		PORTB = 0X30;
	}
	else if(i == 2){
		OFF;
		PORTB = 0X1B;
		GON;
	}
	else if(i ==3){
		OFF;
		PORTB = 0X0F;
		GON;
	}
	else if(i == 4){
		OFF;
		PORTB = 0X26;
		GON;
	}
	else if(i == 5){
		OFF;
		PORTB = 0X2D;
		GON;
	}
	else if(i == 6){
		OFF;
		PORTB = 0X3D;
		GON;
	}
	else if(i == 7){
		GOFF;
		OFF;
		PORTB = 0X07;
	}
	else if(i == 8){
		OFF;
		PORTB = 0xFF;
		GON;
	}
	else if(i == 9){
		OFF;
		PORTB = 0X2F;
	}
	else {
		i = 0;
		//continue;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////
int main(void) {
	int i = 0;
	DDRB |= (0XFF << PORTB); // set Port B pin PB5 for output
	DDRC |= (0XFF << PORTC);
	while (1) { // begin infinite loop
		if(i < 10){
			prints(i);
			_delay_ms(1000);
			i++;
		}
		else {
			i = 0;
		}	
		}
	return(0); // should never get here, this is to prevent a compiler warning
}
