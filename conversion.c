#include <stdio.h>

void conv()
{

    int i = 1;
    int num;
    int first;
    float second;

    while (i)
    {
        printf("\n1: Km to miles \n");
        printf("2: Inches to Feet \n");
        printf("3: Cm to Inches \n");
        printf("4: Pound to Kg \n");
        printf("5: Exit \n\n");
        printf("Enter a number: ");

        scanf("%d", &num);

        switch(num)
        {
            case 1:
                printf("Enter Km: ");
                scanf("%d", &first);

                second =  first * 0.6214;
                printf("\n%d km is: %f miles \n\n", first, second);

                break;

            case 2:
                printf("Enter Inches: ");
                scanf("%d", &first);

                second =  (float) first/12;
                printf("\n %d inches is: %f feet \n", first, second);

                break;

            case 3:
                printf("Enter Cm: ");
                scanf("%d", &first);

                second =  first * 0.393701;
                printf("\n%d cm is: %f inches \n", first, second);

                break;

            case 4:
                printf("Enter pounds: ");
                scanf("%d", &first);

                second = first * 0.45359237;
                printf("\n%d pounds is: %f kg \n", first, second);

                break;

            case 5:
                i = 0;
                break;

            default:
                printf("\nPlease enter a valid value!!\n");

        }
        
        // i = 1;
    }
    
}

int main()
{

    /*
        km to miles -> * distance in km to 0.6214
        inches to feet -> 1 foot -> 12 inches
        cm to inches -> * cm to 0.393701
        pound to kg -> * pound to 0.45359237
        
    */

   conv();

    return 0;
}