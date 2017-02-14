#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int n, tN;
	printf("Please enter your number: \n");
	scanf("%i", &n);

	tN = n * (n + 1) / 2;

	printf("%i\n", tN );

	return 0;
}