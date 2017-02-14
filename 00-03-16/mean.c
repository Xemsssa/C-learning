#include <cs50.h>
#include <stdio.h>

//#define n 5
int main(int argc, string argv[])
{
    // array storage for ints
    int mean = 0;
	int array[5];
    // collect and store ints
	for (int i = 0 ; i < 5; i++)
	{
		printf("Enter: ");
		array[i] = GetInt();
        //printf("%d\n", array[i] );
        mean = mean + array[i];
	}
	
    // calculate mean
    mean = mean/5;
    // print mean
    printf("%i\n",  mean);
}
