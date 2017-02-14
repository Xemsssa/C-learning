#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	printf("Say something: ");
	string s = GetString();
	if (s == NULL)
	{
		return 1;
	}

	char* t = malloc((strlen(s) + 1) * sizeof(char));
	if (t == NULL)
	{
		return 1;
	}

	for (int i = 0, n = strlen(s); i < n; ++i)
	{
		//t[i] = s[i];
		*(t + i) = *(s + i);
	}

	printf("Capitaliazing copy...\n");

	if (strlen(t) > 0)
	{
		//t[0] = toupper(t[0]);
		*t = toupper(*t);
	}

	printf("Original: %s\n", s);
	printf("copy: %s\n", t);
	return 0;
}