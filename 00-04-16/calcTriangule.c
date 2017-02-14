#include <stdio.h>

void calucateTriangle(int n)
{
	int i, triangularNumber;

	for (i = 1; i <= n; ++i)
	{
		triangularNumber++;
	}
	printf("triangularNumber %i is %i\n", n, triangularNumber);
}

int main(void)
{
	calucateTriangle(10);
	calucateTriangle(20);
	calucateTriangle(50);
	
	return 0;
}