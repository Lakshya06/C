#include <stdio.h>
#include<string.h>

int sizeArr(char*);

void main()
{

    int i=0, index1, index2, minDist;

    char input[100], word1[20], word2[20];
    char* argv[20];
    char* token;
    // scanf("%s", input);
    gets(input);
    gets(word1);
    gets(word2);

    token = strtok(input, " ");

    while( token != NULL )
    {
        argv[i] = token;
        i++;
        token = strtok(NULL, " ");
    }

    argv[i] = NULL;

    // int length = sizeof(argv) / sizeof(argv[0]);
    int length = sizeArr(argv);

    char a[10] = "Hey";
    char b[10] = "Hey";

    // printf("%d", strcmp(a, b));

    // printf("%s", argv);
    // printf("len=%d", length);

    for(i=0; i<length; i++)
    {

        if(strcmp(argv[i], word1) == 0)
            index1 = i;

        if(strcmp(argv[i], word2) == 0)
            index2 = i;

        if(index2 != -1 && index1 != -1)
            minDist = abs(index2-index1);
    }

    printf("in1 = %d\nind2= %d\n min = %d\n", index1, index2,  minDist);

    printf("%d", minDist);

}

int sizeArr(char* arr)
{

    int i = 0;

    while(arr[i]!=NULL)
        i++;

    return i;
}