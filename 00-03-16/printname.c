#include <cs50.h>
#include <stdio.h>

void PrintName(string name);

int int main(int argc, char const *argv[])
{
	printf("Enter your name: ");
	string s = GetString();
	PrintName(s);
	return 0;
}

void PrintName(string name)
{
	printf("hello, %s\n", name );
}