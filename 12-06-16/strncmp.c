#include <stdio.h>

int main(int argc, char const *argv[])
{
	char* name = "John";

	/* code */
	if (strncmp(name, "John", 4) == 0)
	{
		/* code */
		printf("Hello, %s\n", name);
	}
	else
	{
		printf("You not a John. Go away\n");
	}


	return 0;
}