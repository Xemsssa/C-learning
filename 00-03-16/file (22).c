#include <cs50.h>
#include <stdio.h>
#include <math.h>

int sigma(int n)
{
    if ( n == 0)
    {
    	return 0;
    }
    
    return n * 3; 
}

int main(int argc, char* argv[])
{
    // ask user for a positive integer
    int n;
    do
    {
        printf("Enter a positive integer: ");
        n = GetInt();
    }
    while (n < 1);
    
    // report answer
    printf("%i\n", sigma(n));
}