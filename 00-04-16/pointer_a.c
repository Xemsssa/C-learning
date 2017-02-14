#include <stdio.h>
#include <cs50.h>

    int a = 3;
	int b = 4;
	int c = 5;

	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
void print(void);

int main(int argc, char const *argv[])
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

void print(void)//, *pa, *pb, *pc)
{
	printf("a is %i\n", a);
	printf("b is %i\n", b);
	printf("c is %i\n", c);

	// printf("adress of a is %i\n", *pa);
	// printf("adress of b is %i\n", *pb);
	// printf("adress of c is %i\n", *pc);

	printf("adress of pa is %p\n", &pa);
	printf("adress of pb is %p\n", &pb);
	printf("adress of pc is %p\n", &pc);

	// printf("adress of a is %p\n", &a);
	// printf("adress of b is %p\n", &b);
	// printf("adress of c is %p\n", &c);

}