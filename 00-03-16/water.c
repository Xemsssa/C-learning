#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("minutes: ");
    int min = GetInt();
    
    int b = min * (192 / 16);
    printf("bottles: %i\n", b);
   
    return 0;
    
}