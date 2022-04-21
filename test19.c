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
