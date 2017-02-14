#include <stdlib.h>
#include <stdio.h>

void go_south_east(int lat, int lot)
{

	lat--;
	lot++;

}

int main(int argc, char const *argv[])
{
	int latitude = 32;
	int longitude = -64;

	go_south_east(latitude, longitude);
	printf("Stop!our coordinates is: [%i, %i]\n", latitude, longitude);
	return 0;
}
