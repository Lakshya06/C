#include <stdio.h>

int main()
{

    char str[30];
    int z = 0;
    int o = 0;

    int res;

    scanf("%s", &str);

    for(int i = 0; i < 30; i++)
    {

        if(str[i] == 'z')
            z+= 1;

        else if(str[i] == 'o')
            o += 1;

    }

    //res = o / z;

    if(2*z == o)
        printf("Yes");

    else
        printf("No");

    return 0;
}
