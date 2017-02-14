int main(int argc, char const *argv[])
{
	int x;
	printf("Number\n");
	scanf("%i", &x);
	printf("%i\n", x);
	return 0;
}

char* s;
scanf("%s", s);
printf("%s\n", s);

char s[16];
scanf("%s", s);
printf("%s\n", s);

stack

stack s;
s.top = 0;
push(&s, 28);

s.top = 1;
push(&s, 33);

VALUE pop(stack* s);

int x = pop(&s);

int x = pop(&s);
push(&s, 40);

typedef struct _stack
{
	VALUE val;
	struct _stack *next;		
}
stack;

list = push (list, 12);

pop(list);

trav = trav -> next;


//queues

enqueue
dequeue

typedef struct _queue
{
	VALUE array[CAPACITY];
	int front;
	int size;
}
queue;

queue q;
q.front = 0;
q.s = 0;

void enqueue(queue* q, VALUE data);

enqueue(&q, 28);
//pos + size
0 + 1;
enqueue(&q, 33);
0 + 2;
enqueue(&q, 19);

VALUE dequeue(queue* q);

int x = dequeue(&q);
1

enqueue(&q, 40);
//q.front + q.size

typedef struct _queue
{
	VALUE val;
	struct _queue *prev;
	struct _queue *next;
}
queue;

enqueue(tail, 10);

//hash tables

string hash[10];
int x = hash("John");
//x is now 4
hash[x] = "John";

int y = hash("Paul");
//y is now is 6
hash[y] = "Paul";

unsigned int hash(char* str)
{
	int sum = 0;
	for (int j = 0; str[j] != '\0'; ++j)
	{
		sum += str[j];
	}
	return sum % HASH_MAX;
}

hash("Bart");
return 6;
hash("Lisa");
return 6;// + 1
hash("Homer");
return 7;
hash("Maggie");
return 3;
hash("Marge");
return 6;//9

node* hash[10];
hash("Joey");return 6
hash("Ross"); return 2
hash("Rachel"); return 4
hash("Phoebe"); return 6

//tries

typedef struct _trie
{
	char univesity[20];
	struct _trie* paths[10];
}
trie;

insert "Harvard"
founded 1636

insert "Yale"
founded 1701

insert "Dartmouth"
founded 1765














