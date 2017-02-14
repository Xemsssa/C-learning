#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define NUMBER 4

int main(void)
{

	float c;
	int coins = 0;
    int array[NUMBER] = {25, 10, 5, 1};
        
	do
    {
    	printf("Enter: ");
		c = GetFloat();
    }
    while ( c < 0);
	
    c = round(c*100);

	for (int i = 0; i < NUMBER ; i++ )
	{
	    while ( c >= array[i] )
	    	{
                c -= array[i];
	    		coins++;
	    	}
	}

	printf("%i\n", coins );
	return 0;
}