#include <stdio.h>
#include <cs50.h>

int GetPositiveInt(void);

int main(int argc, char const *argv[])
{
	/* code */
	int n = GetPositiveInt();
	printf("Thanks fot positive: %i!\n", n);
	return 0;
}
int GetPositiveInt(void)
{
	int n;
	do
	{
		printf("Please give me a positive int: ");
		n = GetInt();
	}
	while ( n < 1 );
	return n;
}
