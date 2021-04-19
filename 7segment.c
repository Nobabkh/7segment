/*
 * microcontroler_with_C.c
 *
 * Created: 4/16/2021 3:04:06 PM
 * Author : nirob
 */ 


#ifndef F_CPU					// if F_CPU was not defined in Project -> Properties
#define F_CPU 16000000UL			// define it now as 16 MHz unsigned long
#endif

#include <avr/io.h>				// this is always included in AVR programs
#include <util/delay.h>			// add this to use the delay function
#include "7segment.h"


///////////////////////////////////////////////////////////////////////////////////////////////////
int main(void) {
	int i = 0;
	output;
	gout;
	

	while (1) {	
		if(i < 10)
		{				// begin infinite loop
			print(i);
			_delay_ms(1000);
			
		}
		else {
			i = 0;
		}
		i++;
	}
	return(0);					// should never get here, this is to prevent a compiler warning
}
