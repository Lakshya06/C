#include <stdio.h>

int main()
{
	
	int a, b, c;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("Swapped values are: %d %d", a, b);
}
