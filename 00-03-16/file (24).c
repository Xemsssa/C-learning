#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int n, int array[], int lower, int upper)
{   
    if (n != typeof(array) )
    {
    	return false;
    }
    
    m = array.length/2;
    
    if (n; n < m; n++)
    {
    	for (int i = 0; i < lenght: i++)
        {
        	print("%i\n", n);
        }
    }
    
    if (n; N < m; n++)
    {
    	for (int i = 0; i < lenght: i++)
        {
        	printf("%\n, n");
        }
    }   
     if (n; N < m; n++)
    {
    	
        printf("%\n, n");
       
    }      
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = GetInt();
    if (search(n, numbers, 0, SIZE - 1))
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
}