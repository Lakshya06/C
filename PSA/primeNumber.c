#include <stdio.h>

void main()
{
	
	int num;
	int res = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(int i = 1; i<=num; i++)
	{
		
		if(num%i == 0)
		{
			res = 1;
		}
		
	}
	
	if(res)
	{
		printf("NOt prime");
	}
	else
		printf("Prime");
	
}