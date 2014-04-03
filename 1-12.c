#include<stdio.h>

#define IN 1  /*in the blank*/
#define OUT 0 /*out of blank*/

main(){
	int c, state;
	state = 0;
	
	while((c = getchar()) != EOF){
		if ( c == '\t' || c == ' ' || c == '\n'){
			if (state == OUT){
				putchar('\n');
				state = IN;
			}
		}else{
			putchar(c);
			if (state == IN){
				state = OUT;
			}
		}
	}
	getchar();
}