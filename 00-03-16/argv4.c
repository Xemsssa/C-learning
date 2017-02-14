#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
	/* code */
	for (int i = 0; i < argc; i++)
	{
		/* code */
		for (int j = 0, n = strlen(argv[i]); j < n; j++)
		{
			/* code */
			printf("%c\n", argv[i][j]);
		}
	}
}