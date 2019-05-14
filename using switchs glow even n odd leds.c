/*
 * SWITCHEVEN0DD.c
 *
 * Created: 10-05-2019 13:55:17
 * Author : hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include<util/delay.h>
#include <avr/io.h>


int main(void)
{
	DDRD = 0X00; 
	DDRC = 0XFF;
	
    while (1) 
    {
		if((PIND & (1<<PD0)) == 0)
		PORTC |= 1<<PC0;
		PORTC |= 1<<PC2;
		PORTC |= 1<<PC4;
		PORTC |= 1<<PC6;
		_delay_ms(1000);
		if((PIND & (1<<PD1)) == 0)
		PORTC = 1<<PC1;
		PORTC = 1<<PC3;
		PORTC = 1<<PC5;
		PORTC = 1<<PC7;
		_delay_ms(1000);
    }
}

