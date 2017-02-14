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
    
     
    for (int i = 0; i < h; i++)
    {
       for(int a = 0; a < h - i - 1; a++)
       {
           printf(" ");
       }
       for (int c = 0; c < i + 2 ; c++)
       {
            printf("#");
       }
    printf("\n");
    }
    
    return 0;

}