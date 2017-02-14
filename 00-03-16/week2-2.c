#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//
	int n;
	do
	{
		printf("Enter: ");
		n = GetInt();
	}
	while (n < 1);

	int ages[n];

	// Do Staff
	for (int i = 0; i < n; i++)
	{
		printf(" Ages of person %i: ", i + 1);
		ages[i] = GetInt();
	}
	printf("Time passes...\n");

	for (int i = 0; i < n; i++)
	{
		printf(" A year from now, person #%i will be %i years old.\n", i + 1 , ages[i] + 1);
	}
}