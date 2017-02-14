#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h = 0;
    do
    {
    	printf("heigth: ");
        h = GetInt();
    }
     while (h < 0 || h > 23);
     
     
    
}