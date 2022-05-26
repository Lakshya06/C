#include <stdio.h>

int main()
{
	
	int a, i=0, res=1;
	
	printf("Enter a number: ");
	scanf("%d", &a);
	
	for(i=1; i<=a; i++)
	{
		
		res = res*i;
//		printf("%d dfdf",a);
	}
	
	printf("%d",res);
	
	return 0;
}
