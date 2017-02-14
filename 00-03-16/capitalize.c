#include <stdio.h>
#include <stdlib.>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int int main(void)
{
	/* code */
	string s = GetString();
if (s != NULL)
	{
		for (int i = 0, n = strlen(s); i < n; i++)
		{
		/* code */
		if (islower(s[i]))
			{
			/* code */
			printf("%c", toupper(s[i]));
			}

		}

		printf("\n");
	}
}