/*
 * pir1.c
 *
 * Created: 13-05-2019 10:46:51
 * Author : hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>

#define LED_OUTPUT PORTB
#define PIR_INPUT PINC


int main(void)
{
	DDRC = 0x00;
	DDRB = 0xff;
    while (1) 
    {
		LED_OUTPUT = PIR_INPUT;
    }
}

