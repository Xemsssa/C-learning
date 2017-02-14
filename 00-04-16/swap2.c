#include <stdio.h>
#include <cs50.h>

void swap(int a, int b);

int main(int argc, char const *argv[])
{
	int x = 1;
	int y = 2;

	printf("x is %i\n", x );
	printf("y is %i\n", y );

	printf("Swapping...\n");
	swap(&x, &y);
	printf("Swapped...\n");

	printf("x is %i\n", x );
	printf("y is %i\n", y );

	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}