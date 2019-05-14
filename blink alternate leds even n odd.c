/*
 * EVENANDODD.c
 *
 * Created: 09-05-2019 22:23:50
 * Author : hp
 */ 
#ifndef F_CPU
#define F_CPU 16000000
#endif
#include<util/delay.h>
#include <avr/io.h>


int main(void)
{
    while (1) 
    {
				PORTA = 0X00;
				PORTA = 0X02;
				PORTA = 0X04;
				PORTA = 0X06;
				_delay_ms(5000);
				PORTA = 0X01;
				PORTA = 0X03;
				PORTA = 0X05;
				PORTA = 0X07;
				_delay_ms(5000);
    }
}

