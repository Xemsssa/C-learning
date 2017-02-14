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

int sigma(int a)
{
	if (a < 1)
	{
		return 0;
	}

	int sum = 0;
	for (int i = 0; i <= a; ++i)
	{
		sum = sum + i;
	}

return sum;

}