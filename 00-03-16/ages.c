#include <stdio.h>
#include <cs50.h>

int int main(void)
{
	/* code */
	int n;
	do
	{
		printf("Number of people; ");
		n = GetInt();
	}
	while (n < 1);
	return 0;

	int ages[n];

	for (int i = 0; i < n; i++)
	{
		/* code */
		printf("Print age of #%i:\n", i + 1);
		ages[i] = GetInt();
	}

	printf("Time ....\n");

	for (int i = 0; i < n; i++)
	{
		/* code */
		printf("A year from now person #%i will %i years old\n", i + 1, ages[i] + 1);
	}
}