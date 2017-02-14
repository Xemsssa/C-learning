#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(int argc, string argv[])
{
    // declare array storage for Pokemon
    string pokemon[5];
    // collect and store Pokemon
    for (int i = 0; i < 5; ++i)
    {
         /* code */
         printf("Give me a Pokemon:");
         pokemon[i] = GetString();
    }
   // choose and print out random Pokemon
   printf("%d\n", rand() %5);

}