#include <stdio.h>
#include <cs50.h>

int add_two_int(int a, int b);

int main(void)
{
	/* code */
	printf("Give me an integer: ");
	int x = GetInt();
	printf("Give me an integer: ");
	int y = GetInt();

	int z = add_two_int(x, y);

	printf("The sum of %i and %i  is %i!\n", x, y, z );
	return 0;
}

int add_two_int(int a, int b)
{
	return a + b;
}