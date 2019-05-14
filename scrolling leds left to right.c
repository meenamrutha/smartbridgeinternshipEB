/*
 * scrollingallleds.c
 *
 * Created: 09-05-2019 22:28:50
 * Author : hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include<util/delay.h>
#include <avr/io.h>


int main(void)
{
	DDRB = 0XFF;
    while (1) 
    {
		PORTB = 0X00;
		_delay_ms(500);
		PORTB = 0X01;
		_delay_ms(500);
		PORTB = 0X02;
		_delay_ms(500);
		PORTB = 0X03;
		_delay_ms(500);
		PORTB = 0X04;
		_delay_ms(500);
		PORTB = 0X05;
		_delay_ms(500);
		PORTB = 0X06;
		_delay_ms(500);
		PORTB = 0X07;
		_delay_ms(500);
    }
}

