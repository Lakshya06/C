#include <stdio.h>

void main()
{
	
	int num1, num2;
	int res = 0;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	for(int i = 1; i <=num1 && i <= num2; i++)
	{
		
		if(num1%i == 0 && num2%i == 0)
		{
			res = i;
		}
	}
	
	printf("%d", res);
}