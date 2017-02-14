#include <stdio.h>
#include <cs50.h>

void increment(int a);

int main(int argc, char const *argv[])
{
	/* code */
	int x = 1;
	printf(" x is equal %d\n", x);
	printf("Incrementing by 1\n" );
	increment(x);
	printf("Value incremented!\n");
	printf("x is now %d!\n", x);
	return 0;
}

int increment(int x)
{
	return x + 1;
}