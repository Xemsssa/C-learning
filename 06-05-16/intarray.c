#include <stdio.h>

int main(int argc, char const *argv[])
{
	int intarray[5] = {10,20,30,40,50};

	for (int i = 0; i < 5; ++i)
	{
		/* code */
		printf("[%d] is %d adress %d\n", i, intarray[i], &intarray[i]);
	}

	int *intpointer = &intarray[3];
	printf("%x id %d\n", intpointer, *intpointer);

	intpointer++;

	printf("%x id %d\n", intpointer, *intpointer);

	return 0;
}