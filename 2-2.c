/*  
 * File:   main.c
 * Author: Mize
 * enum make it easy to declare constant:
 * DEFINE YES 1
 * DEFINT NO 0
 * could be write as: 
 * enum  loop {NO, YES}
 * Created on April 4, 2014, 3:49 PM
 */

#include<stdio.h>
main(){
    enum loop {NO, YES};
    enum loop okloop = YES;
    
    int i, c;
    int lim = 10;
    char s[lim];
    i = 0;
    
    while (okloop == YES){
        if ( i >= lim - 1)
            okloop = NO;
        else if ( (c = getchar()) == '\n' )
            okloop = NO;
        else if ( c == EOF )
            okloop = NO;
        else {
            s[i] = c;
            ++i;
        }
    }
}
