#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE* f;
	int x;
	f = fopen("out", "w");
	if (!f)
	{
		return 1;
	}

	for (int i = 1; i < MAX; ++i)
	{
		fprintf(f, "%d\n", i);
	}

	fclose(f);
	return 0;
}