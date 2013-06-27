#ifndef BitHandle_h
#define BitHandle_h

#define SetBit(PORT,PIN) PORT|=(1<<PIN)
#define ClearBit(PORT,PIN) PORT &=~(1<<PIN)
#define ToggleBit(PORT,PIN) PORT^=(1<<PIN)
#define ReadBit(PORT,PIN) Debounce(&PORT,PIN)

#define SetBitOut(PORT,PIN) *(PORT-1)|=(1<<PIN)
#define SetBitIn(PORT,PIN) *(PORT-1)&=~(1<<PIN)

#define SetPortIn(PORT) *(PORT-1)=0x00
#define SetPortOut(PORT) *(PORT-1)=0xFF

#endif
