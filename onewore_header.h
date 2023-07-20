 
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> 

#define ow_port PORTBbits.RB0
#define ow_port_H ow_port = 1
#define ow_port_L ow_port = 0

#define _XTAL_FREQ 8000000

#define ow_tris TRISBbits.TRISB0
#define ow_tris_in ow_tris = 1
#define ow_tris_out ow_tris = 0

void ow_reset(void);
void ow_testdevice(void);
void ow_write_bit(unsigned char b);
void ow_write_byte(unsigned char by);
unsigned char ow_read_bit();
unsigned int ow_read_byte();
unsigned int ow_search();
#define ds_convert 0x44
#endif	/* XC_HEADER_TEMPLATE_H */

