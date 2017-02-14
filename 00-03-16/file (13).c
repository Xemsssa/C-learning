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
        int c = 1;
        int n = 1;
        while(c < h)
        {
            printf("@");
            c++;
            n= n - 1;
            
        }
        
        printf("#\n");
        
    }
    
}