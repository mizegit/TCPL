/* setbits: set n bits of x at position p with bits of y */

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return x & ^(^(^(0 << n) << (p+1-n))) |
            (^(^0 << 0) & y) << (p+1-n);
}
