#include <cs50.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Say something: ");
	char* s = GetString();

	printf("Say something: ");
		char* t = GetString();
	if (s != NULL && t != NULL)
	{
		if (strcmp(s, t) == 0)
		{
			printf("You typed the same thing!\n");
		}
		else
		{
			printf("You typed the different thing!\n");
		}
		return 0;
	}
	
}