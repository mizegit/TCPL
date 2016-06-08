/*************************************************************************
 Author: 
 Created Time: Mon 24 Mar 2014 04:33:33 PM CST
 File Name: /home/mize/c/1-20.c
 Description: 
 ************************************************************************/
#include <stdio.h>
#define TABINC 30

main()
{
	int nc, c;
	nc = 0;

	while (( c = getchar() ) != EOF)
	{
		if ( c == '\t' ){
			while ( nc < TABINC )
			{
				putchar (' ');
				++nc;
			}
		}else if ( c == '\n'){
			putchar ('\n');
			nc = 0;
		}else{
			putchar(c);
			++nc;
		}
		if ( nc == TABINC ){
			nc = 1;
		}
	}
}
