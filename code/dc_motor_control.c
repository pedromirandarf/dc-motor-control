#include <xc.h>
#include <stdint.h>
#define	_XTAL_FREQ	4000000
// VARIAVEIS GLOBAIS
int8_t global2=0;
int16_t global3=0;
uint8_t global4=0;

int global1 = 0;
in16_t valor = 0;
void main(void){	
	// CONFIGURAÇÃO DOS PERIFÉRICOS
	
	//TRISA == TRISA | (1<<0)
		
		TRISA |= (1<<0); //RA COMO 
		ANSEL |= (1<<0); //RA0 COMO ANALÓGICO 
		// ADCON : ADCS = Fosc/8, CHS = ANO, GO =0,  ADON=1
		ADCON0 = 0x00;
		ADCON0 |= 0b01000001;
		//ADCON1: ADFM = RIGHT. VCFG1= VSS, VCFG0 = VDD
		ADCON1 = 0X00;
		ADCON1 |= (1<<7);
		
		
	while(1)
	{
		ADCON0 |= (1<<1);
		while(ADCON0 & (-(1<<1)))
		valor = (ADRESH<< 8) + (ADRESL);
		
		
	}
}