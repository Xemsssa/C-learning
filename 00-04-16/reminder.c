#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int number, reminder;

	printf("Plese enter your number: \n");
	scanf("%i", &number);

	reminder = number % 2;

	if (reminder == 0)
	{
		printf("The number is even.\n");
	}
	else
	{
		printf("The number is odd.\n");
	}

	return 0;
}