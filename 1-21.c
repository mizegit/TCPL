/*************************************************************************
 Author: 
 Created Time: Fri 04 Apr 2014 01:26:37 PM HKT
 File Name: /home/mize/test.c
 Description:  
 * File:   main.c
 * Author: mize
 *
 * Created on April 2, 2014, 5:58 PM
 */

#include<stdio.h>
#define TABINC 8
main(){
    int c, pos = 0;      // position of char
    int nb = 0 ;         // nub of blank
    
    while ( (c = getchar()) != EOF ){
        if ( c == ' '){
            ++pos;
            ++nb;
            if (  pos % TABINC  ==  0 && nb > 1 ){
				putchar ( '\t' );
				nb = 0;
            }
        } else if( c == '\n' ) {
            pos = 0;
            nb = 0;
            putchar('\n');
        } else {
            if ( c == '\t'){
                pos = pos + ( TABINC - pos % TABINC );
            }else{
                ++pos;            
            }
            while ( nb > 0 ){
                --nb;
                putchar(' ');
            }
            putchar(c);
        }
    }
}
