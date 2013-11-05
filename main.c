#include <msp430.h> 
#include "LCD/LCD.h"
#include "buttons/button.h"
#include "game_shell/game.h"

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
