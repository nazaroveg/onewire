#include "onewore_header.h"


unsigned char test = 0;

void main(void) {
   
  ow_reset();
  
   
    
    return;
}
void ow_reset(void)
  {
    ow_tris_out;
    ow_port_L;
    __delay_us (480);
    ow_tris_in;
    __delay_us (70);  ///(410!!!)???
  }
void ow_testdevice(void)
{
   ow_tris_in;
   if(ow_port == 1)
   {
       test = 1;
   }
   else
   {
       test = 0;
   }
   __delay_us (410);
}
void ow_write_bit(unsigned char b)
{
    ow_tris_out;
  if (b == 0)
  {
    ow_port_L;
    __delay_us (60);
    ow_tris_in;
    __delay_us (10);
  }
  else if(b==1)
  {
    ow_port_L;
    __delay_us (6);
    ow_tris_in;
    __delay_us (64);
  }
}
void ow_write_byte(unsigned char by)
{
    
    for (unsigned char i =0; i<8; i++)
  {     
    ow_write_bit(by << 1);
  }
}
unsigned char ow_read_bit()
{
  unsigned char temp = 0;
  __delay_us (2);
  ow_tris_out;
  ow_port_L;
  __delay_us (15);
  ow_tris_in;
  __delay_us (15);
  if(ow_port == 1)
  {
      temp = 1;
  }
  else
  {
      temp = 0;
  }
  return temp;
}
unsigned int ow_read_byte()
{
   int result[16];
   for (unsigned char i; i<16; i++)
   {
       result[i] = ow_read_bit();
   }
   return result;
}
unsigned int ow_search()
{
    
    int result[64];
  
  
}