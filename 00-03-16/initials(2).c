#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string string = GetString();
    
    printf("%c", toupper(string[0]));
    
    for (int i = 0,  n = strlen(string); i < n; i++ )
    {
        if (string[i] == ' ')
        {
            printf("%c", toupper(string[i + 1]));
        }
    }
    printf("\n");
}