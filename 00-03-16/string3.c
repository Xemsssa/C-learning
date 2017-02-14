#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	string input = GetString();
	printf("You said: %s\n", input);
	
	return 0;
}