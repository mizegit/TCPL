#include <stdio.h>
/* binsearch : find x in v[0] <= v[1] <= v[2] <= . . . <= v[n-1] */

int binsearch( int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    mid = (low + high)/2;
    while (low <= high && x != v[mid]) {
        printf ("%d\n", mid);
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high)/2;
    }
    if (x == v[mid])
        return mid;
    else
        return -1;
}

main(){
     int a[5];
     int b;
     a[0] = 1;
     a[1] = 2;
     a[2] = 4;
     a[3] = 8;
     a[4] = 16;
     a[5] = 19;
     b = 19;

     printf ( "  %d", binsearch(b, a, 6) );
}
