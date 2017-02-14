#include <stdio.h>

typedef int* IntPointer;

IntPointer p;

int main(int argc, char const *argv[])
{
	int* p;
	p = (int*)malloc(sizeof(int));
	if (p == NULL)
	{
		printf("ERROR: out of memory\n");
		return 1;
	}

	*p = 5;
	printf("%d\n", *p );
	free(p);
	return 0;
}


typedef struct 
{
	char name[21];
	char sity[21];
	char state[3];
}
Rec;

typedef Rec *RetPointer;

RetPointer r;

r = (RetPointer)malloc(sizeof(Rec));

strcpy((*r).name, "Leigh");
strcpy((*r).city, "Raleigh");
strcpy(r -> state, "NC");
printf("%s\n",(*r).city);
free(r);

int *p;
	int i;

	p = (int* )malloc(sizeof(int(10)));

	for (i = 0; i < 10; ++i)
	{
		*(p + i) = 0;
	}

	free(p);

typedef struct 
{
	char s1[81];
	char s2[81];
	char s3[81];
}
Rec;

Rec *a[10];

a[0] = (Rec*)malloc(sizeof(Rec));
strcpy(a[0] -> s1, "hello");
free(a[0]);

//comment

typedef struct 
{
	char name[21];
	char city[21];
	char phone[21];
	char *comment;
}
Addr s;

char comm[100];

gets(s.name, 20);
gets(s.city, 20);
gets(s.phone, 20);
gets(s.comm, 100);
s.comment = (char*)malloc(sizeof(char[strlen(comm) + 1]));
strcpy(s.comment, comm);

//handle

int **p;
int *p;
p = (int**)malloc(sizeof(int*));
*p =(int *)malloc(sizeof(int);
**p = 12;
q = *p;
printf("%d\n", *q );
free(q);
free(p);

\\

typedef struct 
{
	char name[21];
	char city[21];
	char phone[21];
	char *comment;
}
Addr;

Addr *s;
char comm[100];

s = (Addr*)malloc(sizeof(Addr));
gets(s -> name, 20);
gets(s -> city, 20);
gets(s -> phone, 20);
gets(comm, 100);

s -> comment = (char*)malloc(sizeof(char[strlen(comm) + 1]));
strcpy(s -> comment, comm);

//linked list

typedef struct 
{
	char name[21];
	char city[21];
	char state[21];
	Addr* next;
}
Addr;
Addr *first;

//

struct stack_rec
{
	stack_data data;
	struct stack_rec *next;	
};

struct stack_rec *top == NULL;

void stack_init()
{
	top = NULL;
}

void stack_clear()
{
	stack_data x;

	while(!stack_empty())
	{
		x = stack_pop;
	}
}

int stack_empty()
{
	if (top ==NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void stack_push(stack_data d)
{
	struct stack_rec *temp;
	temp = (struct_rec*)malloc(sizeof(struct stack_rec));
	temp -> data = d;
	remp -> next = top;
	top = temp;
}

stack_data stack_pop()
{
	struct stack_rec *temp;
	stack_data d = 0;

	if (top !=  NULL)
	{
		d = top -> data;
		temp = top;
		top = top -> next;
		free(temp);
	}
	return(d)
}











