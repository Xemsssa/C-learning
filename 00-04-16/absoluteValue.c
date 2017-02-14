#include <stdio.h>

float absoluteValue(float x)
{
	if ( x < 0 )
	{
		x = -x;
	}

	return x;
}

int main(void)
{
	float f1 = -15.5; f2 = 20.0, f3 = -5.0;
	int i1 = -716;
	float result;

	result = absoluteValue(f1);
	printf(" result = %.2f\n", result);
	printf("f1 = %.2f\n", f1); 

	return 0;
}