#include <string.h>

int main(int argc, char const *argv[])
{
	char s1[100], s2[100];
	strcpy(s1, 'hello');
	strcpy(s2, s1);
	return 0;
}