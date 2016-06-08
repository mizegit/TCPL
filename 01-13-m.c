#include <stdio.h>

#define IN      1
#define OUT     0
#define MAXWORD 11  /*max length of a word = 10*/
#define MAXHIST 15  /*max length of histogram*/

main()
{
    int c,i,state,n;
    int len;        /*length of histogram*/
    int maxlen;     /*max length*/
    int ovflow;     /*number of words-length > max-length*/
    int wl[MAXWORD];

    maxlen = 0;
    ovflow = 0;
    n = 0;

    for (i = 1; i <= MAXWORD; ++i)
        wl[i]=0;


    while ((c = getchar()) != EOF)
        if (c == '\t' || c == '\n' || c == ' '){
            if (state =  IN){
                state = OUT;
                if (n < MAXWORD)
                    ++wl[n];
                else
                    ++ovflow;
                n = 0;
            }
        }else{
            ++n;
            if (state = OUT)
                state = IN;
        }

    ++wl[n];

    for (i=1; i < MAXWORD; ++i){
        if (wl[i] > maxlen)
            maxlen = wl[i];
    }

    for (i=1; i < MAXWORD; ++i){
        printf("%2d - %5d |", i, wl[i]);
        if (wl[i] > 0){
            if ((len = wl[i] * MAXHIST / maxlen) <= 0)
                len = 1;
        }  else
            len = 0;
        while (len > 0){
            putchar('*');
            --len;
        }
        putchar('\n');
    }

    if (ovflow > 0)
        printf("There are %d words >= %d\n", ovflow, MAXWORD);
}
