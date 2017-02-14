#include <sc50.h>
#include <stdio.h>

void say_hello(char* name)
{
	printf("Hello, %s\n", name);
}

int main(void)
{
	/* code */
	say_hello("Chris");

	return 0;
}