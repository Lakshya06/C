#include <stdio.h>
#include <string.h>

int main()
{

    int check = 0;

    char str[10];
    gets(str);

    for(int i = 0; i < 10 ; i++)
    {

        if(str[2] != 'A' || str[2] != 'E' || str[2] != 'I' || str[2] != 'O' || str[2] != 'U')
        {

            if(i == 2 || i == 6)
            {
                continue;
            }
            else
            {

                if((str[i] + str[i + 1]) % 2 == 0)
                {
                    check = 1;
                    
                }
                else
                {
                    check = 0;
                }
            }
        }
    }

    if(check)
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }

}