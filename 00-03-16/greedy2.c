#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

	float c;
		
	int coins = 0;
	do
    {
    	printf("Enter: ");
		c = GetFloat();
    }
    while ( c < 0);

    c = round(c *=100);

	while (c >= 25)
	{
		c -= 25;
		coins++; 
	} 

	while (c >= 10)
	{
		c -= 10;
		coins++;
	} 
 
	while (c >= 5)
	{
		c -= 5;
		coins++;
	} 

	while (c >= 1)
	{
		c -=1;
		coins++;
	} 

	printf("%i\n", coins );

	return 0;
	
}