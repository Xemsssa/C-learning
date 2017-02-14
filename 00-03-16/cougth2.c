#include <stdlib.h>
#include <stdio.h>

void cough(void);

int main(int argc, char const *argv[])
{
	cough(3);
    return 0;
}

void cough(int n)
{
	 for (int i = 0; i < n; i++)
    {
       printf("Cough\n"); 
    }
	
}