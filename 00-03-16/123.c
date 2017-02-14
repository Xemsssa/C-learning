#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h = 0;
    do
    {
    	printf("height: ");
        h = GetInt();
    }
     while (h < 0 || h > 23);
     
    for(int i = 1; i < h; i++)
    {
        {
        for(int a = 1; a < h; a++)
        }
    	printf("@");
    }
   
   		//int a;
    	//a = h - i; 
    	//for(int b = 2; b < a; b++)
         
    printf("#");
    return 0;
}