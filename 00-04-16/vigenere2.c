#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//bacon
//check50 2015.fall.pset2.vigenere vigenere.c
//Meet me at the park at eleven am
//Negh zf av huf pcfx bt gzrwep oz

int main(int argc, string argv[])
{
	/* code */
	if (argc != 2)
	{
		printf("ERROR: No command-line argument\n");
		return 1;
	}
	
	for (int j = 0, m = strlen(argv[1]); j < m; j++) 
	{
		if (!isalpha(argv[1][j]))
		{
			printf("ERROR\n");
			return 1;
		}
	}
	
	string key = argv[1];
	string string = GetString();
	int count = 0;
	
	for (int i = 0, n = strlen(string); i < n; i++)
	{
		if (isalpha(string[i]))
		{
			int k = count % strlen(key);
			if (islower(string[i]))
			{
				if (islower(key[k]))
				{
					string[i] = (((string[i] - 97) + key[k] - 97) % 26) + 97;
					printf("%c", string[i]);
				}
				else if (isupper(key[k]))
				{
					string[i] = (((string[i] - 97) + key[k] - 65) % 26) + 97;
					printf("%c", string[i]);
				}
			}
			else if(isupper(string[i]))
			{
				if (islower(key[k]))
				{
					string[i] = (((string[i] - 65) + key[k] - 97) % 26) + 65;
					printf("%c", string[i]);
				}
				else if(isupper(key[k]))
				{
					string[i] = (((string[i] - 65) + key[k] - 65) % 26) + 65;
					printf("%c", string[i]);
				}
			}
			count++;
		}	
		else
		{
			printf("%c", string[i]);
		}
	}
	printf("\n");
	return 0;
}
