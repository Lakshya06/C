#include <stdio.h>

int fibo()
{

	int n1 = 0, n2 = 1, n3 = 0;
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("%d\n", n1);
	printf("%d\n", n2);

	for(int i = 2; i <= num; i++)
	{

		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		printf("%d \n", n3);
	}

}

int main()
{

	fibo();

	return 0;
}