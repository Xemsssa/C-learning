#include <stdio.h>
#include <cs50.h>


#define PI 3.1415926

float area(float rad);

int main(int argc, char const *argv[])
{
	/* code */
	printf("%f\n",  area(2.0));
	return 0;
}

float area(float rad)
{
	return PI * rad * rad;
}