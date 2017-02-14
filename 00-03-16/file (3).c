#include <cs50.h>
#include <stdio.h>

int main()
{
	int a, b, c;
    printf("Please enter first value: ");
    scanf("%d", &a);
    printf("Please enter second value: ");
    scanf("%d", &b);
    
    c = a + b;
    
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}