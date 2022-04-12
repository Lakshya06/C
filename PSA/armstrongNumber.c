#include <stdio.h>

void main()
{

	int num;
	int mod = 0;
	int res= 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		
		mod = num%10;
		
		res += mod*mod*mod;
		
		num /=10;
	}
	
	printf("%d", res);
	
}