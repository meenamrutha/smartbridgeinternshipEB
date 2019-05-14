/*
 * allports.c
 *
 * Created: 09-05-2019 15:15:47
 * Author : hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include<util/delay.h>
#include <avr/io.h>


int main(void)
{
	DDRA = 0XFF;
	DDRB = 0XFF;
	DDRC = 0XFF;
	DDRD = 0XFF;
    while (1) 
    {
		PORTA = 0XFF;
		_delay_ms(1000);
		PORTA = 0X00;
		_delay_ms(1000);
                PORTB = 0XFF;
		_delay_ms(1000);
		PORTB = 0X00;
		_delay_ms(1000);
		PORTC = 0XFF;
		_delay_ms(1000);
		PORTC = 0X00;
		_delay_ms(1000);
		PORTD = 0XFF;
		_delay_ms(1000);
		PORTD = 0X00;
		_delay_ms(1000);




    }
}

