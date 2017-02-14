#include <stdio.h>
#include <stdbool.h>

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
	/* code */
	const char text1[] = "Well, here goes.";
	const char text2[] = "And here we go... again.";

	int countWords(const char string[]);

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));

	return 0;
}



