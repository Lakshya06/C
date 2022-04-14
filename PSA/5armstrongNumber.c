#include <stdio.h>

int main()
{

    int count = 1, i = 100, num, digitCount, rem, sum;

    while(count <= 5)
    {

        num = i;

        digitCount = 0;

        while(num != 0)
        {

            digitCount++;
            num /= 10;
        }

        num = i;
        sum = 0;
        while(num != 0)
        {

            rem = num % 10;
            sum += pow(rem, digitCount);
            num = num / 10;
        }

        if(sum == i)
        {
            printf("%d\n", i);
            count++;
        }

        i++;
    }

    return 0;
}