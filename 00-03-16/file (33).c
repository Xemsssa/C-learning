#include <stdlib.h>
#include <stdio.h>

void cough(void);

int main(int argc, char const *argv[])
{
	
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
	return 0;
}

void cough(void)
{
	printf("Cough\n");
}