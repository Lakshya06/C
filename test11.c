#include <stdio.h>
#include <math.h>

int fact(int n)
{

    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{

    float x, sum = 0;
    int n, i;
    scanf("%f", &x);
    scanf("%d", &n);

    for(i=1; i<n; i+=2)
    {

        sum += pow(x, i)/fact(i);
    }

    printf("%f", sum);

    // printf("%d", fact(5));
}