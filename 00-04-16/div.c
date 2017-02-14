#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	int x, y;
	printf("Please enter your number: \n");
	scanf("%i %i", &x, &y);

	if (x % y == 0)
	{
		printf("Divide\n");
	}
	else
	{
		printf("Not divide\n");
	}

	return 0;
}