#include <stdio.h>
#include <stdlib.h>

int compare(const void* left, const void* rigth)
{
	return (*(int*)rigth - *(int*)left);
}

int main(int argc, char const *argv[])
{
	/* code */
	int (*cmp) (const void*, const void*);
	cmp = &compare;

	int intarray[] = {1,2,3,4,5,6,7,8,9};
	qsort(intarray, sizeof(intarray)/sizeof(*intarray), sizeof(*intarray), cmp);

	int c = 0;
	while (c < sizeof(intarray)/sizeof(*intarray))
	{
		printf("%d \t", intarray[c] );
		c++;
	}

	return 0;
}