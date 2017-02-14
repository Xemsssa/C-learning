//hash_function

int hash_function(char* key)
{
	//hash on first letter of string
	int hash = toupper(key[0])- 'A';
	return hash % SIZE;
}

int* p = (int*)malloc(sizeof(int));

dog  -> (hash_function) -> index

find dog -> (hash_function) -> find index -> find index in table -> compare

use of all info provides by key

//fifo

//queue

typedef struct queue
{
	int head;
	int length;
	int elements[CAPACITY];
	//int tail;
}

//queue;

bool dequeue(queue* q, int* element )
{
	if(q -> length > 0)
	{
		*element = q -> elements[q -> head];
		q -> head = (q -> head + 1) % CAPACITY;
		q -> length--;
		printf("dequeue(); %d\n",  *element);
		return  true;
	}
	return 0;
}

bool queue(queue* q, int element)
{
	if (q -> length < CAPACITY)
	{
		q -> elements[(q -> head + q -> length) % CAPACITY] = element;
		q -> length++;
		printf("enqueue(); %d\n", element );
		return true;
	}
	return false;
}

bool is_empty(queue* q)
{
	return q -> length == 0; 
}

int length(queue* q)
{
	return q -> length;
}

//trees

bool search(node* root,int value)
{
	while (root != NULL)
	{
		if (root -> data == value)
		{
			return true;
		}
		else if (value < root -> data)
		{
			root = root -> left; 
		}
		else
		{
			root = root -> right;
		}
	}
	//value not found
	return false;
}

//tires

#define SIZE 26
struct node
{
	/* data */

	//pointers to other nodes
	struct node* children[SIZE];
}
node;

int index = tolower(c) - 'a';

1. declare a string called word and set it to "van"

2. declare a variable called index and set it to word[0] - 'a'
// ensure memory is allocated only once for any root node
3. if root[index] doesn't have memory allocated for it
    4. allocate memory for root[index]
5. declare a variable called current and set it to root[index]
6. for each character in word starting with the second character
    7. calculate the index of the current character and assign it to index
    // ensure memory is allocated only once for the same node
    8. if current->children[index] doesn't have memory allocated for it
        9. allocate memory for current->children[index]
      // update current
    10. set current to current->children[index]

// mark the end of the word
11. set current->isWord to true

