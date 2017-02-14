#include <stdio.h>

void test(int *int_pointer)
{
	*int_pointer = 100;
}



int main(int argc, char const *argv[])
{
	/* code */

	void test(int *int_pointer);
	int i = 50, *p = &i;

	printf("i = %i\n", i );
	test(p);

	printf("i = %i\n", i );

	return 0;
}