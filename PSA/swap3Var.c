#include <stdio.h>

int main()
{
	
	//y in x, z in y, x in z
	
	int x, y, z, temp;
	
	scanf("%d %d %d", &x, &y, &z);
	
	temp = x;
	
	x = y;
	
	y = z;
	
	z = temp;
	
	printf("%d %d %d", x, y, z);
	
	return 0;
}
