/*
 * pacd7.c
 *
 * Created: 09-05-2019 15:32:50
 * Author : hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include<util/delay.h>
#include <avr/io.h>


int main(void)
{
    DDRA = 0X80;
	DDRB = 0X80;
	DDRC = 0X80;
	DDRD = 0X08;
    while (1) 
    {
		PORTA = 0X80;
		PORTB = 0X80;
		PORTC = 0X80;
		PORTD = 0X80;
    }
}

