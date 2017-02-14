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

    // for (int i = 0; i < n; ++i)
    // {
    //     if (value == values[i])
    //     {
    //         return true;
    //     }
    // }

    int min = 0;
    int max = n - 1;
    int midpoint = (max + min) / 2;
    //do
    //{
    
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

        // if (value < values[midpoint])
        // {
        //     max = midpoint - 1;
        // }
        // else
        // {
        //     min  = midpoint + 1;
        // }

    //} while (max >= min)

    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int count;
    //swap = false;
    do
    {
    	count = 0;
        //swap = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (values[i] > values[i + 1])
            {
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                count++;
                //swap = true;
                //swap(a[i], a[i + 1]);
            }
        }
    }
    while (count != 0)

    return;
}