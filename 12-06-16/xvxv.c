#include <stdio.h>
int arraySum(int array[], const int n)
{
	int sum = 0, *ptr;
	int * const arrayEnd = array + n;
	for (int ptr = array; ptr < arrayEnd; ++ptr)
	{
		/* code */
		sum += *ptr;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	/* code */
	arraySum (int array[], const int n);
	int value[10] = {3, 7, -9, 3, -1, 7, 9, 1, -5};
	printf("The sum is %i\n", arraySum(value, 10));

	return 0;
}

