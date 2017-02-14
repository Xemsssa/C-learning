#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int u, v, temp;

	printf("Please enter two int.\n");
	scanf("%i%i", &u, &v);

	while (v != 0)
	{
		temp = v % u;
		u = v;
		v = temp;
	}

	printf("The greates divisior is % i\n", u );
	return 0;
}