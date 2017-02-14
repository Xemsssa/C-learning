#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		printf("Usage: ./asciimath key");
		return 1;
	}

	int key = atoi(argv[1]);

	int letter = 'A';

	printf("\nCalculating:%c + %d...\n", letter, key);

	int result = (letter + key);

	printf("The ascii value of %c is %d. \n\n", result, result );

	return 0;
}
