#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c  = 'Q';

	char *char_pointer = &c;

	printf("%c %c\n", c, *char_pointer);

	c = '/';

	printf("%c %c\n", c, *char_pointer);

	*char_pointer = '(';

	printf("%c %c\n", c, *char_pointer);


	return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i1, i2;
	int *p1, *p2;

	i1 = 5;
	p1 = &i1;
	i2 = *p1 / 2 + 10;
	p2 = p1;
	printf("%s\n", ); 

	return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct date
	{
		int mounth;
		int day;
		int year;	
	};

	struct date today, *datePtr;

	datePtr = &today;
	datePtr -> mounth = 9;
	datePtr -> day= 25;
	datePtr -> year = 2004;

	printf("TOday is %i/%i/%.2i. \n", datePtr -> mounth, datePtr -> day
	, datePtr -> year );

	return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct intPtrs
	{
		int *p1;
		int *p2;

	}
	intPtrs;

	struct intPtrs pointers;

	int i1 = 100, i2;

	pointers.p1 = &i1;
	pointers.p2 = &i2;

	*pointers.p2 = -97;
	printf(" i1 = %i, *pointers.p1 = %i \n", i1, *pointers.p1);
	printf(" i2 = %i, *pointers.p2 = %i \n", i2, *pointers.p2);

	return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct entry
	{
		int value;
		struct entry* next;
	};

	struct entry n1, n2, n3;
	int i;

	n1.value = 100;
	n2.value = 200;
	n3.value = 300;
	n1.next = &n2;
	n2.next = &n3;

	i = n1.next -> value;
	printf("%i \n", i );
	printf("%i\n", n2.next -> value );

	return 0;
}


