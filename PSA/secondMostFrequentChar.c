#include<stdio.h>
#include<string.h>

char mostFreq(char *);
char* removeChar(char *, char);

int main()
{
	char s[50], secStr, modStr[50];
	gets(s);
    secStr = mostFreq(s);

    // printf("%c", secStr);

    printf("%c", mostFreq(removeChar(s, secStr)));

    // modStr = removeChar(s, secStr);

    // char res[50] = mostFreq(modStr);
    // printf("%s", res); 
	
	return 0;
}
 
char* removeChar(char *str, char ch)
{

    int i, len, j;

    len = strlen(str);
	   	
  	for(i = 0; i < len; i++)
	{
		if(str[i] == ch)
		{
			for(j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
			len--;
			i--;	
		} 
	}

    return str;	
}

char mostFreq(char *s)
{

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
    return s[first];
}