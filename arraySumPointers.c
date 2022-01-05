#include <stdio.h>

int arraySum(int arr[], int num)
{

    int arrayEnd = arr + num;

    int * ptr;
    int sum = 0;

    for(ptr = arr; ptr<arrayEnd; ptr++)
    {

        sum += *ptr;
    }

    return sum;
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    int a = arraySum(arr, 5);

    printf("%d", a);

    return 0;
}
