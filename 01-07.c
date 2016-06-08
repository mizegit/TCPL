#include<stdio.h>
main()
{
	printf("value of EOF %d\n", EOF);
	int c;
	while (c=getchar()){
        if (c != '\n')
        printf("%x.\n",c);
	}
}
