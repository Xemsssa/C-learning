#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	/* code */
	char* s = GetString();
	if (s == NULL)
	{
		return 1;
	}

	for (int i = 0, n = strlen(s); i < n; ++i)
	{
		printf("%c\n", *(s + i));
	}

	return 0;
}