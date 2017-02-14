#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	char line[81];
	void readline(char buffer[]);

	for (int i = 0; i < 3; ++i)
	{
		/* code */
		readline(line);
		printf("%s\n\n", line );
	}
	return 0;
}

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
