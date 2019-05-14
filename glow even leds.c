/*
 * evenled.c
 *
 * Created: 09-05-2019 21:35:05
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
    while (1) 
    {
		PORTA = 0X00;
		PORTA = 0X02;
		PORTA = 0X04;
		PORTA = 0X06;
    }
}

