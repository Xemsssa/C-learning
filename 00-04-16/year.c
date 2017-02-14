#include <stdio.h>

int main(int argc, char const *argv[])
{
	int rem_4,  rem_100, rem_400;

	printf("Please enter your year: \n");
	scanf("%i",  &year);

	rem_4 = year % 4;
	rem_100 = year % 100;
	rem_400 = year % 400;

	if (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//if  ( ( (rem_4 == 0) && (rem_100 != 0) ) || (rem_400 == 0) )
	{
		printf("its is a leap year.\n");
	}
	else
	{
		printf("its is not a leap year.\n");
	}
	return 0;
}
