#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	int table[3][3] = { {2, 4, 6}, {3, 6, 9}, {4, 8, 12} };
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			ptintf("%i",  table[i][j]);
		}
	}

	return 0;
}