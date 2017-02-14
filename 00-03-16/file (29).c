#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int larger(int a, int b)
{
    if ( a > b)
    {
        return a;
    }
    return b;
}

int main()
{
	int greatest = larger(100, 1000);
    printf("%i is larger\n", greatest);
    
    return 0;
}