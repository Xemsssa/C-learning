#include <stdio.h>
#include <util.h>

#define MAX 10

int a;

void main()
{
	int i, x, y, t;
	for (int i = 0; i < MAX; ++i)
	{
		/* code */
		a = rand();
		printf("%d\n", a);
	}

	bubble_ sort(MAX, a);

	/* print sorted array */
	printf("---------------------\n");
	for (int i = 0; i < MAX; ++i)
	{
		/* code */
		printf("%d\n", a);
	}
}