#include <stdio.h>
#include <cs50.h>
#include <string.h>

// 13
// Be sure to drink your Ovaltine!
// Or fher gb qevax lbhe Binygvar!

int isalpha(int c);
int islower(int c);

char user(char string[i] int k);

int main(int argc, char const *argv[])
{
	/* code */

	if ( argc != 2)
	{
		/* code */
		return 1;
	}
	else
	{
		int k = atoi(argv[1]);

		string string = GetString();
		int count = strlen(string);

		for (int i = 0; i < count; ++i)
		{
			/* code */
			if (isalpha(string[i]))
			{
				char user();
			}
            else
            {
            	printf("%c", string[i]);
            }
        }
        printf("\n");
		return 0;
	}
}

char user(char string[i] int k)
{
	if (islower(string[i]))
	{
		/* code */
		string[i] = (((string[i] - 97) + k) % 26) + 97;
		printf("%c", string[i]);
	}
	else
	{
		string[i] = (((string[i] - 65) + k) % 26) + 65;
		printf("%c", string[i]);
	}
}
