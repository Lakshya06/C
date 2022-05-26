<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fact(int i)
{
    int fact=1;
    while(i!=1){
    fact=fact*i;
    i--;
    }
    return fact;
}
int main() {

   int t,i,c;
    float n,sum=0.0;
    scanf("%f",&n);
    scanf("%d",&t);
    while(t!=0)
    {
        
     
        for(i=t;i>=1;i--)
        { 
           if(i%2==0)
               c=-1;
            else
                c=1;
            sum=sum+((pow(n,i)/fact(i))*c);
        }
        
               t--;
    }printf("%f",sum);
    return 0;
}
=======
#include<stdio.h>
#include<string.h>

int main()
{
	char s[50], secStr;
	gets(s);
	int count[20], i, j, len, first = 0;
	
	len = strlen(s);

	for (i=0; i < len; i++)
	{
	    count[i] = 0;
	    
		for (j=0; j < len; j++)
		{
			if (s[i] == s[j])
			{
				count[i]++;
			}
		}
    }
	
	for (i=0; i < len; i++)
	{
		if (count[i] > count[first])
		{
			first = i;
		}
	}
	
	
	
	printf("Most frequent character is = %c\n", s[first]);
	
	return 0;
}
>>>>>>> af181fbe9feba8388bf5b77d4a297e62e68f8d4c
