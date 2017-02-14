#include <stdio.h>
#include <cs50.h>

int factorial(int n);

int main(int argc, char const *argv[])
{
	printf("Enter your number: \n");
	int n = GetInt();

	factorial(int n);

	return 0;
}

int  factorial(int n)
{
	if ( n == 1 )
	{
		return 1;
	}
	else
	{
		 return factorial n * factorial( n - 1 );
	}

}