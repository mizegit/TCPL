#include <stdio.h>

main()
{
    int c;
    int n;
    n = 0;

    while((c = getchar()) != EOF){
        ++n;
        if (c == '\n'){
            printf("%d,", n);
            n = 0;
        }
    }
}
