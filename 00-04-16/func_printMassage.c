#include <stdio.h>

void printMessage(void)
{
	printf("Pr is fun\n");
}

int main(void)
{
	for (int i = 0; i <= 5; ++i)
	{
		printMessage();
	}
	//printMessage();
	//printMessage();

	return 0;
}