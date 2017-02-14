#include <stdio.h>
#include <cs50.h>

#define MAX 10

int a;
int rand_seed = 10;

int rand()
{
	rand_seed = rand_seed * 1103515245 +12345;
	return (usigned int)(rand_seed / 65536) % 32768;
}

int main()
{
	int i, t, x, y;

	for (int i = 0; i < MAX; i++)
	{
		a = rand();
		printf("%d\n", a);
	}

	for (int x = 0; x < MAX - 1; x++)
	{
		/* code */
		for (int y = 0; y < MAX - x - 1; y++)
		{
			/* code */
			if (a > a[y + 1])
			{
				/* code */
				t = a;
				a = a[u + 1];
				a[y + 1] = t;
			}
		}
		printf("_____________\n");
		for (int i = 0; i < MAX; i++)
			{
				/* code */
				printf("%d\n", a);
			}	
		
	}
	return 0;
}