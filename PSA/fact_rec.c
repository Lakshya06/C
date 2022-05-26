#include <stdio.h>

int fact(n)
{
	if(n==0)
		return 1;
		
	else
		return (n*fact(n-1));
}

int main()

{
	
	int n, res=1;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	res = fact(n);
	printf("%d", res);
	
	return 0;
}
