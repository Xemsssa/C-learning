typedef struct node
{
	int val;
	struct node* next;
}
node_t;

node_t* head = NULL;

node_t = malloc(sizeof(node_t));

if (head == NULL)
{
	/* code */
	return 1;
}

head -> val = 1;
//head -> next = NULL;
head -> next -> malloc(sizeof(node_t));
head -> next -> val = 2;
head -> next -> next = NULL;

void print_list(node_t* head)
{
	node_t* curent = head; 

	while( curent -> next != NULL)
	{
		printf("%d\n", curent -> val );
		current = curent -> next; 
	}
}


void push_to_end(node_t* head, int val)
{
	node_t* current = head;

	while( current -> next != NULL)
	{
		current = current -> next;
	}

	current -> next = malloc(sizeof(node_t));
	current -> next -> val = val;
	current -> next -> next = NULL;
}

void push_to_begin( node_t** head,  int val)
{
	node_t* new_node;
	new_node = malloc(sizeof(node_t));

	new_node -> val = val;
	new_node -> next = *head;
	*head = new_node;

}

void pop(node_t** head)
{
	int retval = -1;
	node_t * next_node = NULL;

	if (*head == NULL)
	{
		/* code */
		return 1;
	}

	new_node = (*head) -> next;
	retval = (*head) -> val;
	free(*head);
	*head = new_node;

	return retval;
}

int remove_last(node_t* head)
{
	int retval = 0;

	if (head -> next == NULL)
	{
		/* code */
		head -> val free(head);
		head = NULL;
		return retval;
	}

	node_t* current = head;
	while (current -> next -> next != NULL)
	{
		current = current -> next;
	}
}

int remove_by_index(node_t** head)
{
	int i = 0;
	int retval = 1;

	node_t* current = *head;
	node_t* temp_node = NULL;

	if (n == 0)
	 	{
	 		/* code */
	 		return pop(head);
	 	} 	

	for (int i = 0; i < n - 1; ++i)
	 	{
	 		/* code */
	 		if (current -> next == NULL)
	 		{
	 			/* code */
	 			return -1;
	 		}

	 		current = current -> next;
	 	}	

	temp_node = current -> next;
	retval = temp_node -> val;
	current -> next = temp_node -> next;
	free(temp_node);

	return retval; 
}

