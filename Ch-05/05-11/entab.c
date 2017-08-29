#include <stdio.h>

#define MAXLINE 100 /* maxline size */
#define TABINC 8    /* tab increment size */
#define YES 1
#define NO 0

void settab(int argc, char *argv[], char *tab);
void entab(char *tab);
int tabpos(int pos, char *tab);

/* replace strings of blanks with tab and blanks */
main(int argc, char *argv[])
{
	char tab[MAXLINE+1];
	
	settab(argc, argv, tab); /* initialize tab stops */
	entab(tab);	             /* replace blanks with tab */
	return 0;
}

/* entab: replace strings of blanks with tabs and blanks */
void entab(char *tab)
{
    int c, pos;
	int nb = 0;					/* # of blanks necessary */
	int nt = 0;					/* # of tabs necessary */
	    
    for (pos = 1; (c = getchar()) != EOF; ++pos)
        if (c == ' '){
            if (tabpos(pos, tab) == NO)
                ++nb;       	/* increment # of blanks */
            else {
                nb = 0;     	/* reset # of blanks */
                ++nt;
            }
        } else {
            for (; nt > 0; --nt)
                putchar('\t');  /* output tabs */
            if (c == '\t')
                nb = 0;
            else
                for (;nb > 0; --nb)
                    putchar(' ');
            putchar(c);
            if (c == '\n')
                pos = 0;
            else if (c == '\t')
                while (tabpos (pos, tab) != YES)
                	++pos;
        }
}
