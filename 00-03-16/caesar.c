#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("ERROR: return 1\n");
        return 1;
    }

    int k = atoi(argv[1]);
    string string = GetString();
        
    for (int i = 0, n =  strlen(string); i < n; i++)
    {
        if (isalpha(string[i]))
        {
            if (islower(string[i]))
            {
                string[i] = (((string[i] - 97) + k) % 26) + 97;
                printf("%c", string[i]);
            }
            else
            {
                string[i] =(((string[i] - 65) + k) % 26) + 65;
                printf("%c", string[i]);
            }
        }
        else
        {
            printf("%c", string[i]);
        }
    }
    printf("\n");
    return 0;
}
