/**
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



#include "dictionary.h"

#define HASHTABLE 30000

unsigned int hash(const char* word);

int dict = 0;

typedef struct node
    {
        char word[LENGTH + 1];
        struct node* next;
    }
    node;

node* hashtable[HASHTABLE];

char word[LENGTH + 1];

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
    // TODO
    //pass string to check in dictionary.c
    //all type capitalization lower and ...
    //assume string with only alpha and apostro
    char tmp[LENGTH + 1];
    //int length = strlen(word);
    //assume string with only alpha and apostro
    for (int i = 0, n = strlen(word); i < n; ++i)
    {
    	/* code */
		if (word[i] != '\'' )
		{
			tmp[i] = tolower(word[i]);
		}
		else
		{
			tmp[i] = word[i];
		}

    }
    tmp[strlen(word)] = '\0';

    int index = hash(tmp);

    if (hashtable[index] == NULL)
    {
    	/* code */
    	free(tmp);
 		return false;
    }

    //cursor to the head
    node* cursor = hashtable[index];
    
    while (cursor != NULL)
    {
    	/* code */ //search in linked list in index
	    if (strcmp(tmp, cursor -> word) == 0)
	    {
	    	free(tmp);
	    	return true;
	    	printf("equal\n");
	    }
	    cursor = cursor -> next;
    }
    //word didnt found in dictionary
    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    // TODO
    //load store in data structure hash_table or tries
    FILE* file = fopen(dictionary, "r");
    
    if (file == NULL)
    {
        printf("ERROR: Coudnt load dictionary\n");
        return 1;
    }
    //hash tables

    //array of buckets
    
    //each bucket is a linked list
    // typedef struct node
    // {
    //     char word[LENGTH + 1];
    //     struct node* next;
    // }
    // node;
    
    // node* hashtable[HASHTABLE];
    
    //char word[LENGTH + 1];
    //node* new_node = malloc(sizeof(node));
	
	while (fscanf(file, "%s\n", word) == EOF)
	{
	    //malloc a node* for each new word
	    node* new_node = malloc(sizeof(node));
	    
	    // if (new_node == NULL)
     //   {
     //       unload();
     //       fclose(file);
     //       return false;
     //   }
	    
	    //new_node -> word has the word from dict
	    //new_node -> word = malloc(strlen(word) + 1);

		strcpy(new_node -> word, word);
		
		//printf("%s", new_node -> word);
	    //index = hash;
	    int index = hash(word);
	    
	    if (hashtable[index] == NULL)
	    {
			hashtable[index] = new_node;
			new_node -> next = NULL;
			//free(new_node);
	    }
	    else
		{
			new_node -> next = hashtable[index];
			hashtable[index] = new_node;
		}
		
		dict++;

	}
    fclose(file);
    return true;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
	//return numbers of word given dictionary
	return dict;
	//count in every bucket
	//trie go thru all not null
	//track when load
    //return 0;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
	//free anything you malloc
	//if linked list free all link
	int index = 0;
	//node* cursor = head;
	while (index <  HASHTABLE)
	{
		if (hashtable[index] == NULL)	
		{
			index++;
		}
		else
		{
			while (hashtable[index] != NULL)
			{
				node* cursor = hashtable[index];
				hashtable[index] = cursor -> next;
				free(cursor);
			}
			index++;
		}	
	}
		
    return true;
}

//Функция FAQ6

unsigned int hash(const char* str)
{

	unsigned int hash = 0;

	for (; *str; str++)
	{
		hash += (unsigned char)(*str);
		hash += (hash << 10);
		hash ^= (hash >> 6);
	}
	hash += (hash << 3);
	hash ^= (hash >> 11);
	hash += (hash << 15);

	return hash;

}