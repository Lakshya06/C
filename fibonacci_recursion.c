#include <stdio.h>

void fibo(int num)
{
	static int n1 = 0, n2 = 1, n3;

	if(num > 0)
	{

		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		printf("%d\n", n3);
		fibo(num - 1);

	}

}

int main()
{
	fibo(10);
	return 0;
}