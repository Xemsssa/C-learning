#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int n = 0;
    do
    {
    	printf("Please enter your number: ");
        n = GetInt();
    }
     while (n < 0);
    
   printf("Thanks for positive number");
   
   return 0;
}