/*
 * File:   main.c
 * Author: MARWAN
 *
 * Created on April 7, 2020, 9:07 PM
 */


#include <xc.h>
#define relay 2

void main(void) {
    DDRA |= (1<<relay) ;
    PORTA |= (1<<relay) ;
    return;
}
