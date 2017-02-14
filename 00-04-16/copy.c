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

	string t = s;

	printf("Capitaliazing copy...\n");

	if (strlen(t) > 0)
	{
		t[0] = toupper(t[0]);
	}

	printf("Original: %s\n", s);
	printf("copy: %s\n", t);
	return 0;
}