#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	chat s[1000];
	int count = 0;

	while (gets(s))
	{
		count += strlen(s);
	}
	printf("%d\n", count );
	return 0;
}