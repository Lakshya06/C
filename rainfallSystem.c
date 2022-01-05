// C program for a rainfall system

#include <stdio.h>

void main()
{

    float yearTotal = 0, yearlyAverage = 0, monthTotal = 0;

    // Array for months name

    char months[12][20] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    // Rainfall value of 5 years acc to months

    float rainfall[5][12] = {

                                {2.0, 3.6, 4.5, 0.2, 1.2, 5.4, 1.6, 0.6, 9.1, 6.6, 7.8, 11.0},
                                {3.2, 5.6, 4.6, 7.6, 7.1, 0.1, 5.2, 7.4, 3.2, 7.1, 10.3, 0.4},
                                {2.3, 5.6, 7.5, 0.4, 8.9, 4.2, 3.2, 9.3, 4.3, 1.2, 10.1, 0.7},
                                {9.3, 6.3, 6.1, 5.3, 0.3, 10.2, 19.5, 1.3, 0.5, 12.0, 6.3, 2.0},
                                {10.3, 0.3, 1.4, 2.4, 5.3, 2.3, 6.2, 0.3, 4.5, 2.3, 9.3, 10.3}

                            };

    // Loop to calculate total rainfall in a year.

    for(int i = 0; i < 5; i++)
    {

        for(int j = 0; j < 12; j++)
        {
            // printf("%0.1f\n", rainfall[i][j]);
            yearTotal += rainfall[i][j];
        }

        printf("201%d : %0.1f\n", i, yearTotal);
        yearlyAverage += yearTotal;
        yearTotal = 0;
    }

    printf("\nThe yearly average is: %0.1f\n", yearlyAverage/5.0);

    // Loop to calculate average rainfall in month in each year.

    printf("\nMONTHLY AVERAGES: \n");

    for(int k = 0; k < 12; k++)
    {

        for(int l = 0; l < 5; l++)
        {

            monthTotal += rainfall[l][k];
        }

        printf("%s : %0.1f\n", months[k], monthTotal/12);
        monthTotal = 0;

    }

}