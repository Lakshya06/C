#include <stdio.h>

int main()
{

    int date, dd, mm, yy, d, c, z;
    scanf("%d %d %d", &dd, &mm, &yy);
    // printf("d = %d\n", dd);
    // printf("m = %d\n", mm);
    // printf("y = %d\n", yy);

    if(mm < 1 || mm > 12)
    {
        printf("invalid");
        printf("1");
    }

    else if(mm == 2 && dd > 29)
    {
        printf("invalid");
        printf("2");
    }

    else if((mm == 4 || mm == 6 || mm == 9 || mm == 11)&& dd>30 )    // dd hoga d nhi
    {
        printf("invalid");
        printf("3");

    }

    else if((mm ==1 || mm ==3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)&& dd>31 )
    {
        printf("invalid");
        printf("4");
    }

    else 
    {
        if (mm == 1 || mm == 2)
        {
            mm += 10;
            yy -= 1;
        }
        else
        {
            mm -= 2;
            d = yy % 100;
            c = yy / 100;
            date=(dd+(13*mm-1)/5 + d + d/4 + c/4 + 5*c);
            z = date % 7;
            switch(z)
            {
                case 0:
                    printf("SUNDAY"); break;
                case 1:
                    printf("MONDAY"); break;
                case 2:
                    printf("TUESDAY"); break;
                case 3:
                    printf("WEDNESDAY"); break;
                case 4:
                    printf("THURSDAY"); break;
                case 5:
                    printf("FRIDAY"); break;
                case 6:
                    printf("SATURDAY"); break;
                default:
                    printf("invalid");
            }
        }
    
    }
        
   
    return 0;
}