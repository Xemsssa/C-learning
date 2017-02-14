#include <stdio.h>
#include <cs50.h>

int main(int argc, char const *argv[])
{
	int x;
    int acum = 0;
	int c;
	printf("Please enter: \n");

	scanf("%i %c", x, c);
    switch(c)
    {
        case 'S':
        	acum = x;
        case '/':
        	acum = acum / x;
        case '-':
        	acum = acum - x;
        case '*':
        	acum = acum * x;
    }
    printf("%i", acum);
}