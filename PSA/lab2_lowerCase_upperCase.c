#include <stdio.h>

int main()
{
	char a, b;
	int ascii, res;
	
	printf("Enter a lowercase letter: ");
	scanf("%c", &a);
	
	ascii = a;
	
	res = ascii- 32;
	
	printf("Uppercase: %c\n", res);
	
	printf("Enter a Uppercase letter: ");
	
	scanf(" %c", &b);
	
	ascii = b;
	
	res = ascii+32;
	
	printf("Lowercase: %c", res);
	
	return 0;
}
