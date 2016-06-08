/* 
 * File:   main.c
 * Author: mize
 *
 * Created on April 2, 2014, 5:58 PM
 */
#include<stdio.h>
#define TABINC 8
main(){
    int c, pos = 0; // position of char
    int nb;         // nub of blank
    
    while ( (c = getchar()) != EOF ){
        if( c == '\t' ){
            nb = TABINC - pos % TABINC ;
            while (nb > 0){
                putchar(' ');
                --nb;
                ++pos;
            }
        } else if( c == '\n' ){
            putchar(c);
            pos = 0;
        } else {
            ++pos;
            putchar(c);
        }
    }
}