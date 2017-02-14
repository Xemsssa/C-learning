#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float c = 0.0;
    int quarter;
    int dime;
    int coin;
    int sum
    do
    {
    	printf("Enter: ");
		c = GetFloat();
    }
     while (c < 0.0);

	do
	{
	    quarter++;
	    dime++;
	    coin++;
		c = c - .25; 
	} while (c <= .25);

	do
	{
		c = c - .10; 
	} while (c <= .10);

	do
	{
		c = c - .5; 
	} while (c <= .5);

	do
	{
		c = c - 1; 
	} while (c <= 1);

}