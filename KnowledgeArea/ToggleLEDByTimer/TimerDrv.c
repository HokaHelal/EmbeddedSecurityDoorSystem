///////////////// included files //////////////////
#include<avr\io.h>
#include "TimerDrv.h"
#define F_CPU 12000000ul
#include <util/delay.h>
#include "BitHandle.h"

///////////////////////////////////////////////////



void InitTimer()
{
	DDRD=0xFF;
	TCCR1A=0x5C;
	TCCR1B=0x0D;
	OCR1AH=0x1F;
	OCR1AL=0xF0;
	OCR1BH=0x0F;
	OCR1BL=0xF0;
	
	//OCR1B=0x00;
}

