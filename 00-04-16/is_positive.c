#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;

	printf("Please enter your digit: \n");
	scanf("%i",  & number);

	if (number < 0)
	{
		/* code */
		number = -number;
	}

	printf("%i\n", number );

	return 0;
}