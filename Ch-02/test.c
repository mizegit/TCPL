#include <stdio.h>
#include <limits.h>

main()
{
    printf("signed int max = %d\n", INT_MAX);
    int i;
    i = 1;
    pl(i);
    printf("%d",i);
}

void pl(int i)
{
    i = i * 2;
}
