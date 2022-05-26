#include <stdio.h>
#include <math.h>

int main()
{
	
	float p, r, t, ci;
	
	printf("Enter Principle, Rate and time: ");
	scanf("%f %f %f", &p, &r, &t);
	
	ci = pow((1 + r/100), t);
	
	ci = p*(ci - 1);
	
	printf("CI: %0.2f", ci);
}
