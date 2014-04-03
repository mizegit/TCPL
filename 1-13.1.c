#include<stdio.h>

#define IN 1  /* in the word */
#define OUT 2 /* out the word*/

main(){
	int c, state, nw, i, j;
	int nword[10];
	
	i = j = nw = 0;
	state = OUT;
	
	for (i=0; i < 10; ++i){
		nword[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' '){
			if ( state == IN ){
				state = OUT;
				++nword[nw];
				nw = 0;
			}
		} else {
			if ( state == OUT ) 
				state = IN;
			++nw; 
		}
	}
	
	for ( i=1; i<10; ++i ){
		printf ( "%d ", nword[i]);
	}
	
	printf ("\n");
	
	for ( i=1; i < 10; ++i ){
		printf ("%d:", i);
		while ( j < nword[i] ){
			putchar('x');
			++j;
		}
		j = 0;
		printf ("\n");
	}
	
	getchar();
}