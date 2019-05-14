/*
 * button.c
 *
 * Created: 10-05-2019 11:22:33
 * Author : hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include<util/delay.h>
#include <avr/io.h>


int main(void)
{
	DDRC |=0XFF; //makes first pppin of PORTC as Output
	//OR DDRC = 0X01;
	DDRD &= ~(1<<PD0);
	DDRD &= ~(1<<PD1);
    while (1) 
    {
		if((PIND & (1<<PD0)) == 0)
		{
			PORTC |= (1<<PC0);
			_delay_ms(500);
			PORTC &= ~(1<<PC0);
			_delay_ms(500);
			PORTC |= (1<<PC1);
			_delay_ms(500);
			PORTC &= ~(1<<PC1);
			_delay_ms(500);
			PORTC |= (1<<PC2);
			_delay_ms(500);
			PORTC &= ~(1<<PC2);
			_delay_ms(500);
			PORTC |= (1<<PC3);
			_delay_ms(500);
			PORTC &= ~(1<<PC3);
			_delay_ms(500);
			PORTC |= (1<<PC4);
			_delay_ms(500);
			PORTC &= ~(1<<PC4);
			_delay_ms(500);
			PORTC |= (1<<PC5);
			_delay_ms(500);
			PORTC &= ~(1<<PC5);
			_delay_ms(500);
			PORTC |= (1<<PC6);
			_delay_ms(500);
			PORTC &= ~(1<<PC6);
			_delay_ms(500);
			PORTC |= (1<<PC7);
			_delay_ms(500);
			PORTC &= ~(1<<PC7);
			_delay_ms(500);
		}
			if((PIND & (1<<PD1)) == 0)
			{
				PORTC |= (1<<PC7);
				_delay_ms(500);
						PORTC &= ~(1<<PC7);
						_delay_ms(500);
						PORTC |= (1<<PC6);
						_delay_ms(500);
						PORTC &= ~(1<<PC6);
						_delay_ms(500);
						PORTC |= (1<<PC5);
						_delay_ms(500);
						PORTC &= ~(1<<PC5);
						_delay_ms(500);
						PORTC |= (1<<PC4);
						_delay_ms(500);
						PORTC &= ~(1<<PC4);
						_delay_ms(500);
						PORTC |= (1<<PC3);
						_delay_ms(500);
						PORTC &= ~(1<<PC3);
						_delay_ms(500);
						PORTC |= (1<<PC2);
						_delay_ms(500);
						PORTC &= ~(1<<PC2);
						_delay_ms(500);
						PORTC |= (1<<PC1);
						_delay_ms(500);
						PORTC &= ~(1<<PC1);
						_delay_ms(500);
						PORTC |= (1<<PC0);
						_delay_ms(500);
						PORTC &= ~(1<<PC0);
						_delay_ms(500);
				
				
			}
	
    }
}

