/*
 * GccApplication2.c
 *
 * Created: 08/09/2019 02:33:01 م
 *  Author: new
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "macros.h"
#include "DIO.h"

int main(void)
{
	DIO_set_port_direction('A', 0xff);
    while(1)
    {
        //TODO:: Please write your application code
		DIO_write_port('A', 0xff);
		_delay_ms(1000);
		DIO_write_port('A', 0x00);
		_delay_ms(1000); 
    }
}