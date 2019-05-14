/*
 * pa0topa7scrollandreverse.c
 *
 * Created: 09-05-2019 22:39:30
 * Author : hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include <util/delay.h>
#include <avr/io.h>


int main(void)
{
	DDRB = 0XFF;
    while (1) 
    {
		PORTB = 0X01;
		_delay_ms(500);
		PORTB = 0X02;
		_delay_ms(500);
		PORTB = 0X04;
		_delay_ms(500);
		PORTB = 0X08;
		_delay_ms(500);
		PORTB = 0X10;
		_delay_ms(500);
		PORTB = 0X20;
		_delay_ms(500);
		PORTB = 0X40;
		_delay_ms(500);
		PORTB = 0X80;
		_delay_ms(500);
		PORTB = 0X00;
		_delay_ms(500);
		PORTB = 0X40;
		_delay_ms(500);
		PORTB = 0X20;
		_delay_ms(500);
		PORTB = 0X10;
		_delay_ms(500);
		PORTB = 0X08;
		_delay_ms(500);
		PORTB = 0X04;
		_delay_ms(500);
		PORTB = 0X02;
		_delay_ms(500);
		PORTB = 0X01;
		_delay_ms(500);
    }
}

