#include <stdio.h>

int main()
{

    int n, i, j, sum=0;
    scanf("%d", &n);

    int arr[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &arr[i][j]);
    }

    for(i=0;i<n;i++)
    {
        sum += arr[i][i];
    }

    printf("%d", sum);

    return 0;
}