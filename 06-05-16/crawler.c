typedef struct node
{
	int n;
	struct node* left;
	struct node* right;
}
node;

sllnode* create(VALUE val);
sllnode* new = create(6);
bool find(sllnode* head, VALUE val);
sllnode* insert(sllnode* head, VALUE val);
void destroy(sllnode* head);

dllnote* insert(dllnote* head, VALUE val);
void delete(dllnote* target);


bool search(int n,  node* tree)
{
	if ( tree == NULL)
	{
		return false;
	}
	else if ( n < tree -> n )
	{
		return search(n, tree -> left);
	}
	else if ( n > tree -> n )
	{
		return search(n, tree -> right);
	}
	else
	{
		return true;
	}
}

typedef struct node
{
	int val;
	struct node* next;
}
node;

void print_last()
{
	if (head == NULL)
	{
		/* code */
		printf("List empty. No last element.\n");
	}
	else
	{
		node* crawler = head;

		while (crawler -> next != NULL )
		{
			crawler = crawler -> next;
		}

		printf("the LAST integer id &d\n", crawler -> val);

	}
}

void insert_after_third()
{
	if (head == NULL)
	{
		/* code */
		printf("List empty.\n");
	}
	else
	{
		node* crawler = head;

		for (int i = 1; i < 3; ++i)
		{
			/* code */
			if (crawler -> next == NULL)
			{
				/* code */
				printf("LIst not long enough\n");
				return;
			}
			else
			{
				crawler = crawler -> next;
			}

		}

		node* new_node = malloc(sizeof(node));

		if (new_node == NULL)
		{
			/* code */
			printf("Out of heap memory\n");
			return;
		}

		new_node -> val = to_insert;

		new_node -> next = crawler -> next;
	}
}

