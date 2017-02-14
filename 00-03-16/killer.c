#include <stdio.h>

int main() 
{
	char masked_raider[] = "Live!";
	char *jimmy = masked_raider;

	printf("Thief - %s, jimmy - %s\n", masked_raider, jimmy);

	masked_raider[0] = 'D';
	masked_raider[1] = 'E';
	masked_raider[2] = 'A';
	masked_raider[3] = 'D';
    masked_raider[4] = '!';

	printf("Thief - %s, jimmy - %s\n", masked_raider, jimmy);

	rerurn 0;

}include 