/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm

    int min = 0;
    int max = n - 1;
    int midpoint = (max + min) / 2;

    if (min > max)
        {
            return -1;
        }

    if (value = values[midpoint])
    {
        return true;
    }
    else if ( value < values[midpoint])
    {
        search(value, values[], min, midpoint - 1);
    }
    else if ( value > values[midpoint])
    {
        search(value, values[], midpoint + 1, max );
    }

}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int count;

    do
    {
    	count = 0;
        for (int i = 0; i < n; i++)
        {
            if (values[i] > values[i + 1])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                count++;
            }
        }
    }
    while (count != 0)

    return;
}