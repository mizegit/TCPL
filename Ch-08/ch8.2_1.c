#include "stdio.h"
#include "unistd.h"

main ()
{
	int c;
	int getchar2();
	
	c = getchar2();
	putchar(c);
}

int getchar2()
{
	char c;

	return (read(0, &c, 1) == 1) ? (unsigned char) c : EOF;
}
