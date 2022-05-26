#include <stdio.h>

int main()
{
	float p, t, r, si;
	
	printf("Enter Principle, Time and Rate: ");
	scanf("%f %f %f", &p, &t, &r);
	
	si = (p*t*r)/100;
	
	printf("SI: %0.2f", si);
}
