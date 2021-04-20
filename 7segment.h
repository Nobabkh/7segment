/*
 * 7segment.h
 *
 * Created: 4/16/2021 3:04:06 PM
 * Author : nirob
 */ 
#define GON PORTC = (1 << PC5)
#define GOFF PORTC = (0 << PC5)
#define OFF PORTB = 0X00
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
