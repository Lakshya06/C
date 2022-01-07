    #include <stdio.h>
    #include <string.h>

    int i = 0, j = 0, k = 0;

    char seatType[5];
    int seatNo = 0;

    int main()
    {

        int testCases;

        scanf("%d", &testCases);

        int testCasesArr[testCases];

        int modifiedArr[testCases];

        for(int i = 0; i < testCases; i++)
        {

            scanf("%d", &testCasesArr[i]);
        }

        memcpy(modifiedArr, testCasesArr, sizeof(modifiedArr));

        for(int j = 0; j < testCases; j++)
        {
            while(!(modifiedArr[j] >= 1 && modifiedArr[j] <= 12))
            {
                modifiedArr[j] -= 12;
            }
        }


        for(int k = 0; k < testCases; k++)
        {

            // scanf("%d", &testCasesArr[k]);
            if(modifiedArr[k] == 1)
            {

                strcpy(seatType, "WS");
                seatNo = testCasesArr[k] + 11;
            }

            else if(modifiedArr[k] == 2)
            {

                strcpy(seatType, "MS");
                seatNo = testCasesArr[k] + 9;
            }

            else if(modifiedArr[k] == 3)
            {

                strcpy(seatType, "AS");
                seatNo = testCasesArr[k] + 7;
            }

            else if(modifiedArr[k] == 4)
            {

                strcpy(seatType, "AS");
                seatNo = testCasesArr[k] + 5;
            }

            else if(modifiedArr[k] == 5)
            {

                strcpy(seatType, "MS");
                seatNo = testCasesArr[k] + 3;
            }

            else if(modifiedArr[k] == 6)
            {

                strcpy(seatType, "WS");
                seatNo = testCasesArr[k] + 1;
            }

            else if(modifiedArr[k] == 7)
            {

                strcpy(seatType, "WS");
                seatNo = testCasesArr[k] - 1;
            }

            else if(modifiedArr[k] == 8)
            {

                strcpy(seatType, "MS");
                seatNo = testCasesArr[k] - 3;
            }

            else if(modifiedArr[k] == 9)
            {

                strcpy(seatType, "AS");
                seatNo = testCasesArr[k] - 5;
            }

            else if(modifiedArr[k] == 10)
            {

                strcpy(seatType, "AS");
                seatNo = testCasesArr[k] - 7;
            }

            else if(modifiedArr[k] == 11)
            {

                strcpy(seatType, "MS");
                seatNo = testCasesArr[k] - 9;
            }

            else if(modifiedArr[k] == 12)
            {

                strcpy(seatType, "WS");
                seatNo = testCasesArr[k] - 11;
            }

            else
                printf("Invalid Input");

            printf("%s %d\n", seatType, seatNo);

            seatNo = 0;
        }    


    }