#include <stdio.h>

void main()
{

    int size, sum;

    scanf("%d %d", &size, &sum);

    int arr[size];

    for(int i = 0; i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i <size; i++)
    {

        for(int j = 0; j<size; j++)
        {
            if(arr[i] == arr[j])
                continue;

            else
            {
                if(arr[i] + arr[j] == sum)
                    printf("%d %d \n", arr[i], arr[j]);
            }
        }
    }
}