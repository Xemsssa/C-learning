#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <cs50.h>

void swap(int a, int b);

int main(void)
{
	int x = 1;
	int y = 2;
	swap(x, y);
	printf("x is %i\n", x );
	printf("y is %i\n", y );
}

void swap(int a, int b)
{
	/* code */
	int tmp = a;
	a = b;
	b = tmp;
}