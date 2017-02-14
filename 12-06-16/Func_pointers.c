#include <stdio.h>

void someFunction(int arg)
{
	printf("someFunction with  arg: %d\n", arg);
	printf("The end!\n");
}

int main(int argc, char const *argv[])
{
	/* code */
	void (*pt)(int);
	pt = &someFunction;
	printf("WE call someFunction() using pointer\n");
	(pf)(5);
	printf("Cool\n");

	return 0;
}