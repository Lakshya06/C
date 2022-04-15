#include <stdio.h>

int main()
{
	
	float a, b, c;
	
	printf("Enter two numbers: ");
	scanf("%f %f", &a, &b);
	
	c = a + b;
	
	printf("Sum: %0.3f", c);
}
