#include <stdio.h>
#include <cs50.h>

int sigma(int a);

int main(int argc, char const *argv[])
{
	do
	{
		printf("Enter:\n");
		int i = GetInt();
	}
	while(i < 1);

	int answer = sigma(i);

	printf("%i\n", answer );

	return 0;
}

int sigma(int m)
{
	if (m <= 1)
	{
		return 0;
	}
	else
	{
		return m + sigma(m - 1);
	}
}