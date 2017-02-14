#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	int x, y;
	printf("Please enter your number: \n");
	scanf("%i %i", &x, &y);
    
    if(y == 0)
    {
        printf("Divide  by %i", y);
    }
    else
    {
        float d = (float)x / y; 
		printf("%.3f\n", d);
    }
	return 0;
}