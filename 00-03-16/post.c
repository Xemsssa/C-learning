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

     c *= 100;
     int r = round(c);


	while (r >= 25)
	{
		r -= 25;
		coins += 1; 
	} 

	while (r >= 10)
	{
		r -= 10;
		coins += 1;
	} 
 
	while (r >= 5)
	{
		r -= 5;
		coins += 1;
	} 

	while (r >= 1)
	{
		r -= 1;
		coins += 1;
	} 

	printf("%i\n", coins );

	return 0;
	
}