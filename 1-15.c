#include<stdio.h>

float f2c(int f);

main(){
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	step = 20;
	upper = 300;
	fahr = lower;
	
	while ( fahr < upper ){
		fahr = fahr + step;
		celsius = f2c(fahr);
		printf ("%3.0f %6.1f\n", fahr, celsius);
	}
	
	getchar();
}

float f2c(f){
	int c;
	c = 5 * ( f - 32 ) / 9;
	return c;
}