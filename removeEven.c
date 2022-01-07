#include <stdio.h>

int main()
{

    int num;
    int a = 0;

    scanf("%d", &num);

    while(num > 0) 
    {
        int mod = num % 10;   
    
        if(mod % 2 != 0)
        {
               
               // printf("%d", mod);
               a = a * 10 + mod;
        }
        num = num / 10;    
    }

    // printf("%d", a);

    int j = 0;

    while(a != 0)
    {

        int mod = a % 10;

        j = j * 10 + mod;

        a /= 10;
    }

    printf("%d", j);

    return 0;
}