#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node* left;
	struct node* right;
}node_t;

void insert(node_t* tree, int val);
void print_tree(node_t* current);
void printDFS(node_t* current);

int main(int argc, char const *argv[])
{
	/* code */
	node_t* test_list = malloc(sizeof(node_t));
	insert(test_list, 5);
	insert(test_list, 8);
	insert(test_list, 4);
	insert(test_list, 3);

	printDFS(test_list);
}

void insert(node_t* tree,int val)
{
	if (tree -> val == NULL)
	{
		/* code */
		tree -> val = val;
	}
	else if (tree -> val > val)
	{
		/* code */
		if (tree -> left != NULL)
		{
			/* code */
			insert(tree -> left, val);
		}
		else
		{
			tree -> left = malloc(sizeof(node_t));
			tree -> left -> val = val; 
		}

	}
	else if (tree -> val <= val)
	{
		/* code */
		if (tree -> val != NULL)
		{
			/* code */
			insert(tree -> right);
		}
		else
		{
			/* code */
			tree -> right = malloc(sizeof(node_t));
			tree -> right -> val = val;
		}
	}

}

void print_tree(node_t* current)
{
	if (current != NULL)
	{
		/* code */
		printf("\n%d",current -> val);
	}

	if (current -> left != NULL)
	{
		/* code */
		printf("L%d", current -> left -> val);
	}

	if (current -> right != NULL)
	{
		/* code */
		printf("R%s", current -> right -> val);
	}

	if (current -> left != NULL)
	{
		/* code */
		print_tree(current -> left);
	}

	if (current -> right != NULL)
	{
		/* code */
		print_tree(current -> right);
	}
}

void printDFS(node_t* current)
{
	if (current -> left != NULL)
	{
		/* code */
		printDFS(current -> left);
	}

	if (current != NULL)
	{
		/* code */
		printf("%d",current -> val);
	}

	if (current -> right != NULL)
	{
		/* code */
		printDFS(current -> right);
	}
}


































