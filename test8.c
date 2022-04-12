#include <stdio.h>

void main()
{
    int i,j;

    for(i=1;i<3;i++)

    for(j=1;j<4;j++)
    {
        if(i==2)break;
        printf("%d%d  ",i,j);
    }

}