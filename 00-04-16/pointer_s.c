#include <stdio.h>
#include <cs50.h>

int a = 3;
int b = 4;
int c = 5;

int* pa = &a;
int* pb = &b;
int* pc = &c;

void print(void);

int main(void)
{
	a = b * c;
	print();
    
   	a *= c;
    print();
    
    b = *pa;
    print();

    pc = pa;
	print();

    *pb = b * c;
	print();

    c = (*pa) * (*pc);
	print();

    *pc = a * (*pb);
	print();

	return 0;
}

void print(void)
{
	printf("a is %i\n", a);
	printf("b is %i\n", b);
	printf("c is %i\n", c);

	printf("adress of a is %p\n", &pa);
	printf("adress of b is %p\n", &pb);
	printf("adress of c is %p\n", &pc);
}