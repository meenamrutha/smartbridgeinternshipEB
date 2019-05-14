/*
 * AMRUTHALCD.c
 *
 * Created: 13-05-2019 12:19:55
 * Author : hp
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

#define RS 7
#define E 5


void send_command(unsigned char command)
{
	PORTC = command;
	PORTD&= ~(1<<RS);
	PORTD|= (1<<E);
	_delay_ms(50);
	PORTD &= ~(1<<E);
	PORTC=0;
}
void send_character(unsigned char character)
{
	PORTC = character;
	PORTD |= (1<<RS);
	PORTD |= (1<<E);
	_delay_ms(50);
	PORTD &= ~(1<<E);
	PORTC=0;
}




int main(void)
{
	DDRC = 0XFF;
	DDRD = 0XFF;
	_delay_ms(50);
	while(1)
	{
	send_command(0X01);
	send_command(0X38);
	send_command(0X0E);
	send_command(0X1c);
	
	send_character(0X41);
	send_character(0X4D);
	send_character(0X52);
	send_character(0X55);
	send_character(0X54);
	send_character(0X48);
	send_character(0X41);
	send_command(0X14);
	}
}

