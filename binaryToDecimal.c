#include <stdio.h>
#include <math.h>

int convert(int n);

void main()
{

    int res = convert(10);
    printf("%d", res);

}

int convert(int n)
{

    int dec = 0, i = 0, rem;

    while(n!=0)
    {

        rem = n % 10;
        n /= 10;

        dec += rem * pow(2, i);
        i++;
    }

    return dec;
}