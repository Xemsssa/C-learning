#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char s[100], *p;
	gets(s);

	p = s;
	while(*p == ' ')
	{
		p++;
	}
	printf("%s\n", p);

	return 0;
}
