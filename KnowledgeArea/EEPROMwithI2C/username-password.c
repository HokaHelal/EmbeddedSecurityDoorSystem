#include <avr/io.h>
#include <util/delay.h>
#include "my_eeprom.h"

void USERNAME_Write (unsigned char)
{
  unsigned int W_addr;
  unsigned char username[10];
  EEPROM_Init();
  for(i=0;i<=10;i++)
    {
    
    EEPROM_WriteByte(W_addr, username[i]);
	W_addr ++;
	}
}	
unsigned char USERNAME_Read (unsigned int)
{
	unsigned int W_addr;
	unsigned char *u_val[10];
	EEPROM_Init();
  for(i=0;i<=10;i++)
    {
    
    EEPROM_ReadByte(W_addr, &u_val[i]);
	W_addr ++;
	}
}
void PASSWORD_Write (unsigned char)
{
  unsigned int W_addr;
  unsigned char password[10];
  EEPROM_Init();
  for(i=0;i<=10;i++)
    {
    
    EEPROM_WriteByte(W_addr, password[i]);
	W_addr ++;
	}
}
unsigned char PASSWORD_Read (unsigned int)
{
	unsigned int W_addr;
	unsigned char *p_val[10];
	EEPROM_Init();
  for(i=0;i<=10;i++)
    {
    
    EEPROM_ReadByte(W_addr, &p_val[i]);
	W_addr ++;
	}
}	 
