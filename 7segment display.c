/*
 * 7segmentdisplay.c
 *
 * Created: 14-05-2019 09:53:34
 * Author : hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include <util/delay.h>
#include <avr/io.h>



int main(void)
{
	DDRA = 0XFF;
    while (1) 
    {
		PORTA=0b00111111; //porta=0bhgfedcba in base of seven segment display
		_delay_ms(2000);
	    PORTA=0b00000110;
		_delay_ms(2000);
		PORTA=0b01011011;
        _delay_ms(2000);
		PORTA=0b01001111;
		_delay_ms(2000);
		PORTA=0b01100110;
		_delay_ms(2000);
		PORTA=0b01101101;
		_delay_ms(2000);
		PORTA=0b01111101;
		_delay_ms(2000);
		PORTA=0b00000111;
		_delay_ms(2000);
		PORTA=0b01111111;
		_delay_ms(2000);
		PORTA=0b01001111;
		_delay_ms(2000);
		
    }
}

