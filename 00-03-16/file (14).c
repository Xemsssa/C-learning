#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    int r;
    int i;
    int a;
    
    do
    {
        printf("Enter:");
        h = GetInt();
    }
    while (h < 0 || h > 23);

    for (r = 0; r <= h; r++) 
    {
        for (i = (h - r); i > 0; i--)
        {
            printf(" "); 
        }

        for (a = 0; a <= (r + 1); a++)
        {   
            printf("#"); 
        }

        printf("\n");
    }
    return 0;
}