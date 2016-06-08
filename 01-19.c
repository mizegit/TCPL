/*************************************************************************
 Author:
 Created Time: Sun 23 Mar 2014 09:31:36 PM CST
 File Name: /home/mize/c1-19.c
 Description:
 ************************************************************************/
#include<stdio.h>
#define MAXLINE 1000

char reverse( char s[] );

main(){
	int i, c;
	char s[MAXLINE];

	for (i=0; (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	s[i+1] = '\0';

	reverse(s) ;
	printf ("%s", s);
}

char reverse(char s[]){
	int i,j;
	i = j = 0;
	char tmp;

	while (s[i] != '\0')
		++i;
	if (s[i] = '\n')
		--i;

	while ( j < i ){
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		--i;
		++j;
	}
}
