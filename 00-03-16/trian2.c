#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int n = 5,
        tN;

	do
	{
		/* code */
        printf("%i ", n );
		tN = n * (n + 1) / 2;
        
        printf("%i\n", tN );
		n = n + 5;
        //printf("%i\n", n );
	}
    while ( n <= 50);
	

	
	return 0;
}