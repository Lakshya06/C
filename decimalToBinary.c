#include <stdio.h>
#include <math.h>

long long convert(int n);

void main()
{

    int res = convert(5);
    printf("%d", res);
}

long long convert(int n)
{
    int bin = 0;

    int rem, i = 1;

    while(n!=0)
    {

        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }

    return bin;
}