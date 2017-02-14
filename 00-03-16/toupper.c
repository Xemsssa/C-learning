#include <stdio.h>
#include <CS50.h>
#include <string.h>

int int main(int argc, char const *argv[])
{
	printf("Type:\n");
	string s = GetString();

	for (int i = 0, n = strlen(s); i < n; i++)
	{
		/* code */
		s[i] = s[i] - 32;
		printf("%c\n", s[i] );
	}
	return 0;
}