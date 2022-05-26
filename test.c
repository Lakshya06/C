#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strLength(char *);
void strCat(char*, char*);

int main()
{

    char str[] = "Hey";
    char str1[] = "Hey";
    // printf("%d", strCat(str));
    // strCat(str, str1);
    printf("%d", strEqual(str, str1));

    return 0;
}

int strLength(char *str)
{

    int i , counter = 0;

    for(i = 0; str[i] != '\0'; i++)
        counter++;

    return counter;
}

void strCat(char *str1, char *str2)
{

    char res[100];
    // int len1 = strLength(str1);
    // int len2 = strLength(str2);
    // int totalLen = len1 + len2;
    // int i, j;

    // for(i = len1, j = 0; i<totalLen, j<len2; i++, j++)
    // {

    //     str1[i] = str2[j];
    //     printf("j = %d i = %d\n", j, i);
    // }

    int i = 0, j = 0;

    while (str1[i] != '\0')
    {

        res[i] = str1[i];
        i++;   
    }

    while (str2[j] != '\0')
    {
        res[i+j] = str2[j];
    }
    
    

    printf("%s", str1);
}

int strEqual(char *str1, char *str2)
{

    int i = 0, flag = 1;

    while(str1[i] != '\0' || str2[i] != '\0')
    {

        if(str1[i] != str2[i])
        {
            flag = 0;
            // printf("str1 = %c, str2 = %c", str1[i], str2[i]);
            break;
        }

            // printf("str1 = %c, str2 = %c\n", str1[i], str2[i]);


        i++;
    }

    return flag;

}