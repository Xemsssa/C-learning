#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	string s = GetString();

	if (s == NULL)
	{
		return 1;
	}

	string t = s;

	printf("Capitalization copy...\n");
	if (strlen(t) > 0)
	{
		t[0] = toupper(t[0]);
	}

	printf("Original: %s\n", s);
	printf("Capital %s\n", t );

	return 0;
}