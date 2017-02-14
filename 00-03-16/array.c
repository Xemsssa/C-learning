#include <stio.h>
#include <cs50.h>

int int main(void)
{
	int a[5];
	int i;

	for (int i = 0; i < 5; i++)
	{
		a = i;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a);
	}
	return 0;
}