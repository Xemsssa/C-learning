#include <cs50.h>
#include <stdio.h>

int  square(int x)
{
	return(x * x);
}

int main(void)
{
	int six_squared = square(6);
    printf("%d\n", six_squared);
    
    int a = 7;
    int a_squared = square(a);
    printf("%d\n", a_squared);
    
    printf("%d\n", square(10));
    
    return 0;
}