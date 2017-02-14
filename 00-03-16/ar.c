#include <cs50.h>
#include <stdio.h>

#define SIZE 8

bool search(int needle, int haystack[], int size)
{
    // define upper and lower bounds

    // halve array until bounds overlap
    for (int i = 0, n = strlen(i); i < n; i++ ){

        // define middle

        // if needle is at middle
    	if (array[3] == 7)
        {
            // return true
            return true;
        }

        // if needle is left of middle
        if (array[3] < 7)
        {
            // reset upper bound
        }

        // if needle is right of middle
        if (array[3] > 7)
        {
            // reset lower bound
        }

    // return false
    return false; 
}

int main(void)
{
    int numbers[SIZE] = { 4, 8, 15, 16, 23, 42, 50, 108 };
    printf("> ");
    int n = GetInt();
    if (search(n, numbers, SIZE))
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
}