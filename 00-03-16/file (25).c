#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

	float c = .0;
		
	int coins = 0;
	
    do
    {
    	printf("Enter: ");
		c = GetFloat();
    }
    while ( c < 0);

     c = c*100;
     int r = round(c);


	while (r >= 25)
	{
		r = r - 25;
		coins = coins + 1; 
	} 

	while (r >= 10)
	{
		r = r - 10;
		coins = coins + 1;
	} 
 
	while (r >= 5)
	{
		r = r - 5;
		coins = coins + 1;
	} 

	while (r >= 1)
	{
		r = r - 1;
		coins = coins + 1;
	} 

	printf("%i\n", coins );

	return 0;
	
}
