#include <msp430.h> 
#include "LCD.h"
#include "button.h"
#include "game.h"

/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
    char message[] = "hello world";
	initSPI();
	LCDinit();
	while (1){
	LCDclear();
	writeString(message);
	}


}
