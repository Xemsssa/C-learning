#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int int main(int argc, char const *argv[])
{
	string s = GetString();

	for (int i = 0, n = strlen(s); i < n; ++i)
	{
		/* code */
		printf("%c\n", s[i]);
	}
	return 0;
}