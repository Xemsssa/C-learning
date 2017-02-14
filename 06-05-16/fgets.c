#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE* f;
	char s[1000];

	f = fopen("infile", "r");
	if (!f)
	{
		return 1;
	}

	while(fgets(s, 1000, f)!= NULL)
	{
		printf("%s", s);
	}

	fclose(f);
	return 0;

}