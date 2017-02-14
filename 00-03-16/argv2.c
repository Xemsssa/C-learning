#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int int main(int argc, string argv[])
{
	//
	for (int i = 0; i < argc; i++)
	{
		for (int j = 0, n = strlen(argv[i]); j < n; j++)
		{
			/* code */
			printf("%c\n", argv[i][j]);
		}
		printf("\n");
	}
}