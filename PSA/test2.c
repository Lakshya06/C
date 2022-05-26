#include <stdio.h>

int main()
{


    int n = 10;
    char str[20];

    sprintf(str, "%d",  n);

    printf("%s", str);

    return 0;
}