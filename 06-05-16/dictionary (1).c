/**
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>

#include "dictionary.h"

#define HASHTABLE

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
    // TODO
    //pass string to check in dictionary.c
    //all type capitalization lower and ...
    //assume string with only alpha and apostro
    for (int i = 0; i < count; ++i)
    {
    	/* code */
    	if (children[i] == NULL)
    	{
    		/* code */
    		//word misspelled
    	}
    	else
    	{
    		//move to the next letter
    		while (children[i] == NULL)//'\0'))
    		{
    			if (is_word)
    			{
    				/* code */
    				printf("The word is correct!\n");
    			}
    			else
    			{
    				printf("NOT correct!\n");
    			}
    		}

    	}
    }
    // if (word)
    // {
    // 	/* code */
    // 	index = hashtable[hash(word)]
    // }
    
    //search in linked list in index
    // if (strcmp(s1, s2) == 0);
    // {
    // 	return true;
    // 	printf("equal\n");
    // }

    // if ( != NULL)
    // {
    // 	/* code */
    // 	//word didnt found in dictionary
    // }
    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    // TODO
    //load store in data structure hash_table or tries
    FILE* file = fopen(dictionary, 'r');
    
    if (file == NULL)
    {
        printf("ERROR: Coudnt load dictionary\n");
        return 1;
    }
    //hash tables

    //array of buckets
    
    //each bucket is a linked list
    typedef struct node
    {
        char word[LENGTH + 1];
        struct node* next;
    }
    node;
    
    node* hashtable[HASHTABLE];
    
	//hash function
	//dog  -> (hash_function) -> index

	//find dog -> (hash_function) -> find index -> find index in table -> compare

	//use of all info provides by key
	int hash_function(char* key)
	{
		//hash on first letter of string
		int hash = toupper(key[0])- 'A';
		return hash % SIZE;
	}

	//index = hash;
	
	//malloc a node* for each new word
    //node* new_node = malloc(sizeof(node));
	
	while (fscanf(file, "%s", new_node -> word)
	{
	    //malloc a node* for each new word
	    node* new_node = malloc(sizeof(node));
	    
	    //new_node -> word has the word from dict
	    strcpy(new_node -> word, word);
	    
	    //index = hash;
	    
	    if (index == NULL)
	    {
	        index = new_node;
	    }
	}
	
	//new_node -> word has the word from dict
	
	if (new_node -> word != NULL)
	{
		/* code */
		//insert into the liked list
		new_node -> next = next;
		head = new_node;
	}
	
	node* cursor = head;
	while (cursor != NULL)
	{
		//do something
		cursor = cursor -> next;
	}
	
	//tries

    //iterate through the trie
    //each element in children corresponds to a different letter
    for (int i = 0; i < count; ++i)
    {
    	/* code */
     	if (children[i] == NULL)
    	{
    		/* code */
    		new_node = malloc(sizeof(children[i]));
    		//point to it
    		//????????????
    		//new_node -> next =
    	}
    	else
    	{
    		//move to the new node and continue
    		//????????
    		//new_node = new_node ->next
    	}
    	if (//??? == '\0')
    	{
    		bool is_word =  true;
    	}
    }

	//root
    //every node contains an array of node*s
    //one for every alphabet + '\''
    typedef struct node
    {
    	//val[26] + '\''
    	bool is_word;
    	struct node* children[27];
    }
    node;

    node* root;

    if (node == NULL)
    {
    	//letter isn't letter of any word in that sequence
    	//???????????
    	//flag boolean
    }
    //every node indicate whether its the last
    //strlen() - 1

	//return the bucket that a given key belongs to 
    return false;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
	//return numbers of word given dictionary
	//count in every bucket
	//trie go thru all not null
	//track when load
    return 0;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
	//free anything you malloc
	//if linked list free all link
	node* cursor = head;

	while (cursor != NULL)
	{
		node* temp = cursor;
		cursor = cursor -> next;
		free(temp);
	}

	//unload from bottom to top
	//lowest possible node
		//free all pointers in children
		//bactrack upwards, free all element in each children array until roo 
	rec
    return false;
}
