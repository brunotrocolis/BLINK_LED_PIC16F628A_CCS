/*
 * File:   main.c
 * Author: bruno
 *
 * Created on 3 de Setembro de 2022, 02:06
 */


#include <16F628A.h>

#fuses INTRC_IO NOMCLR

#use delay(clock=4000000)

#define LED PIN_B0
#define TEMPO 500

void main(void) {
    while(TRUE) {
        output_toggle(LED);
        delay_ms(TEMPO);
    }
}
