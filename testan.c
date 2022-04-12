#include <stdio.h>

void main()
{
	
	int n;
//	char n = 'A';
	
	switch (n = printf("one two three"))
	{
		
		
		case 'B':
			printf(" Case B %d", n);
			
			break;
			
		case 'C':
			printf(" Case C %d", n);
			
		case 14:
			printf(" case 13 %d", n);

		default:
			printf(" Tr ");
	}
}