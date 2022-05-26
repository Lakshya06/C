#include <stdio.h>

int main()
{
	
	int x1, x2, y1, y2, m, c;
	
	printf("Enter x1 and y1: ");
	scanf("%d %d", &x1, &y1);
	
	printf("Enter x2 and y2: ");
	scanf("%d %d", &x2, &y2);
	
	m = (y2-y1)/(x2-x1);
	
	c = y1-m*x1;
	
	printf("Equation: y = %dx + %d", m, c);
	
	return 0;
}
