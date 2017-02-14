#include <stdio.h>

void addone(int* n) {
	(*n)++;

}

int main(void)
{
    int n = 2;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);
    
}