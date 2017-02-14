#include <stdio.h>
#include <cs50.h>

int count_file_chars(char* filename)
{
	FILE* thefile;
	char ch;
	int count = 0;

	thefile = fopen(filename, "r");
	if (thefile == NULL)
		return -1;

	while ((ch = fgets(thefile)) != E0F)
		count++;

	fclose(thefile);
	
	return count;
}