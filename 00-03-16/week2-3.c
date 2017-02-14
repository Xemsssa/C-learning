#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>

int int main(int argc, char const *argv[])
{
	for (int i = 65; i < 65 + 26 ; i++)
	{
		printf("%c: %i\n", (char) i, i);
	}
	return 0;

	for (int i = 97; i < 97 + 26; i++)
	{
		prinf("%c: %i\n", (char) i, i);
	}
}