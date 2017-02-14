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

	char* t = malloc((strlen(s) + 1) * sizeof(char));
	if (t == Null)
	{
		free(s);
		return 1;
	}

	for (int i = 0, n = strlen(s)  i < n; ++i)
	{
		t[i] = s[i];
	}

	printf("Capitalization copy...\n");
	if (strlen(t) > 0)
	{
		t[0] = toupper(t[0]);
	}

	printf("Original: %s\n", s);
	printf("Capital %s\n", t );

	free(s);
	free(t);

	return 0;
}