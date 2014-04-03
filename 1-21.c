/*************************************************************************
 Author: 
 Created Time: Tue 25 Mar 2014 12:44:50 PM CST
 File Name: /c/1-21.c
 Description: 
 ************************************************************************/
#include<stdio.h>
#define TABINC 8

main(){
	int nb, nc, c, i;
	nc = nb = i = 0;

	while ( ( c = getchar() ) != EOF ){
		if ( c == ' ' ){
			++nb;
			if ( nc == TABINC ){
				putchar('\t');
				putchar(' ');
				nb = 0;
			}
		}else if ( nb > 0 ){
			if ( nc == TABINC ){
				putchar('\t');
				putchar(c);
				nb = 0;
			}else{
				while ( i < nb ){
					putchar(' ');
					++i;
				}
				putchar (c);
				nb = 0;
			}
		}else{
			putchar(c);
		}
		++nc;
		if ( nc > TABINC ){
			nc = 1;
		}
	}
}
