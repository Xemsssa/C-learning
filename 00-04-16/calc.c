#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	int x, y, result;
	printf("Please enter: \n");
	scanf("%i %c %i", x, char, y);

	if (char == '+')
	{
		result = x + y;
	}
	else if (char == '-')
	{
		result = x - y;
	}
	else if (char == '/')
	{
		result = x / y;
	}
	else if (char == '*' || char == 'x')
	{
		result = x * y;
	}
	printf("%i\n", result );

	return 0;
}