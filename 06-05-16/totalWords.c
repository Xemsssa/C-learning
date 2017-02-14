#include <stdlib.h>
#include <stdbool.h>

void readline(char buffer[])
{
	do
	{
		char character;
		int i = 0;
		buffer[i] = character;
		++i;
	}
	while (character != '\n');
	buffer(i - 1) ='\0';
}

bool alphabetic(const char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		/* code */
	return 0;
	}
	else
	{
		return false;
	}
}

int countWords(const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic(const char c);
	for (i = 0; string[i] != '\0' ; ++i)
	{
		/* code */
		if (alphabetic(string[i]))
		{
			/* code */
			if (lookingForWord)
			{
				/* code */
				++wordCount;
				lookingForWord = false;
			}
		}
		else
		{
			lookingForWord = true;
		}
	}
	return wordCount;
}

int main(int argc, char const *argv[])
{
	char text[81];
	int totalWord = 0;
	int countWords(const char string[]);
	void readline(char buffer);
	bool endOfText = false;

	printf("Type:\n");
	printf("When you done, press 'return'.\n\n");
	while (!endOfText)
	{
		readline(text);
		if (text[0] == '\0')
		{
			endOfText = true;
		}
		else
		{
			totalWord += countWords(text);
		}
	}
	printf("\nThere a %i words in above text.\n", totalWord);

	return 0;
}