
#include<avr\io.h>
#include <avr\interrupt.h>
#define F_CPU 12000000ul
#include<util/delay.h>
#include "BitHandle.h"
#include "TimerDrv.h"

static unsigned char Count;
static unsigned char Flag;

ISR(TIMER1_COMPA_vect)
{
	if(Flag==1)
	{
		Flag = 0;
		if(++Count>9)
		{
			Count=0;
		}
		PORTC=0x30;
		PORTC|=Count;
	}
	else
	{
		Flag = 1;	
	}
}


int main (void)
{
	sei();
	TIMSK=0x14;
	DDRC=0xFF;
	PORTC=0x30;
	InitTimer();

	while(1)
	{
	}
}

