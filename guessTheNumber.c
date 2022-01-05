#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    time_t t;

    srand((unsigned) time(&t));

    int r = rand() % 21;

    // printf("%d", r);

    int num, chk = 0;

    for(int i = 5; i > 0; i--)
    {

        printf("You have %d tries left!\n", i);
        printf("Enter a guess: ");
        scanf("%d", &num);

        if(num < r)
        {
            printf("Sorry, My number is greater than %d \n", num);
        }

        else if(num > 20 || num < 0)
            printf("Number is between 0 and 20");

        else if(num > r)
            printf("Sorry, My number is smaller than %d \n", num);

        else
        {
            chk = 1;
            break;
        }
    }

    if(chk)
    {
        printf("You guessed right!");
    }
    else
        printf("Sorry, You are out of turns!");


    return 0;
}