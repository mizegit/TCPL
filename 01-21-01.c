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
		if ( nb > 0 ){
			if ( nc == TABINC ){
				putchar('\t');
				if ( c == ' ' )
					nb = 1;
				else{
					nb = 0;
					putchar(c);
				}
			} else if ( c != ' ' ){
				while ( i < nb ){
					putchar(' ');
					++i;
				}
				putchar(c);
				nb = i = 0;
			} else {
				++nb;
			}
		}else if ( c == ' '){
			++nb;
		}else{
			putchar(c);
		}
		++nc;
		if ( nc > TABINC ){
			nc = 1;
		}
	}
}
