#include <xc.h>
#include <stdint.h>
#define  _XTAL_FREQ 4000000
// globais

int8_t global2 = 0;
int16_t global3 = 0;
uint8_t global4 = 0;
int global1 = 0;


void main(void) {
	TRISB = 0x00;
	ANSEL = 0;
	ANSELH = 0;
	
	while(1){
		PORTB = global4;
		global4++;
		__delay_ms(1000);
	}
}