/*
 * bluetoothrelay.c
 *
 * Created: 16-05-2019 12:45:08
 * Author : hp
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <inttypes.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#define LED PORTB
#define LED1 PORTB
char buffer [10];


void USARTinit(uint16_t ubrr_value)

{
	UBRRL = ubrr_value;
	UBRRH = (ubrr_value>>8);
	UCSRC = (1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	UCSRB = (1<<RXEN)|(1<<TXEN);
}
char USARTreadChar()
{
	while(!(UCSRA & (1<<RXC)))
	{
		
	}
	return UDR;
}

void USARTWriteChar(char data)
{
	
	while(!(UCSRA & (1<<UDRE)))
	{
		
	}
}
int main()
{
	USARTinit(77);
	DDRB=0xff;
	char data;
	LED = 0;
	LED1 = 0;
	
	while(1)
	{
		data=USARTreadChar();
		switch(data)
		{
			case '1':LED |= (1<<PB0);
			break;
			case '2':LED1 |= (1<<PB1);
			break;
			case'3':LED &= ~(1<<PB0);
			break;
			case'4':LED1 &= ~(1<<PB1);
			break;
		}
		
	}
	return 0;
	
}
