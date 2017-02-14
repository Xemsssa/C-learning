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

 #define HASHTABLE 300000

int hash(const char* word)
{
    int hash = 0;
    int n;
    for (int i = 0; word[i] != '\0'; i++)
    {
        // alphabet case
        if (isalpha(word[i]))
        {
            n = word [i] - 'a' + 1;
        }

        // comma case
        else
        {
            n = 27;
        }

        hash = ((hash << 3) + n) % SIZE;
    }
    return hash;
}

int dictionarySize = 0;

//hash tables
typedef struct node
{
    char word[LENGTH + 1];
    struct node* next;
}
node;

// create hashtable
node* hashtable[SIZE] = {NULL};


/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    //load store in data structure hash_table or tries
    FILE* file = fopen(dictionary, "r");

    if (file == NULL)
    {
        printf("Dictionary could not load.");
        return false;
    }
    // create an array for word to be stored in
    char word[LENGTH + 1];

    // scan through the file, loading each word into the hash table
    while (fscanf(file, "%s\n", word) != EOF)
    {
        // increase dictionary size
        dictionarySize++;

        //malloc a node* for each new word head
		node* new_node = malloc(sizeof(node));

        strcpy(new_node->word, word);

        int index = hash(word);

        // if hashtable is empty at index, insert
        if (hashtable[index] == NULL)
        {
        	/* code */
            hashtable[index] = new_node;
            new_node->next = NULL;

            // hashtable[index] = malloc(sizeof(node));
   //      	hashtable[index] -> next = NULL;
   //      	hashtable[index] -> word = malloc(sizeof(char) * (LENGTH + 1));
   //      	memcpy(hashtable[index] -> word, word, sizeof(char) * (LENGTH + 1 ));
		}

        // if hashtable is not empty at index, append
        else
        {
            // struct node* new_node = malloc(sizeof(node));
			// new_node -> word = malloc(sizeof(char) * (LENGTH + 1));
			// memcpy(new_node -> word, word, sizeof(char) * (LENGTH + 1));
			new_node->next = hashtable[index];
			hashtable[index] = new_node;
        }
    }

    //return the bucket that a given key belongs to 
	fclose(file);
    return true;
    //return false;   
}

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
    // TODO
    //pass string to check in dictionary.c
    //all type capitalization lower and ...

    char temp[LENGTH + 1];
    int len = strlen(word);
    //assume string with only alpha and apostro
    for (int i = 0; i < len; i++)
    {
    	/* code */
		if (word[i] != '\'' )
		{
			temp[i] = tolower(word[i]);
		}
		else
		{
			temp[i] = word[i];
		}

    }
    temp[len] = '\0';

    nt index = hash(temp);

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
	    if (strcmp(temp, cursor->word) == 0)
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
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
	//return numbers of word given dictionary
	if (dictionarySize > 0 )
	{
		return dictionarySize;
	}
    else
    {
     return 0;
    }
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

	while (index < SIZE)
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
                hashtable[index] = cursor->next;
                free(cursor);
            }
			index++;
		}	
	}
		
    return true;
}

//Функция FAQ6

// unsigned int hash(const char* word)
// {

// 	unsigned int hash = 0;

// 	for (; *word; word++)
// 	{
// 		hash += (unsigned char)(*word);
// 		hash += (hash << 10);
// 		hash ^= (hash >> 6);
// 	}
// 	hash += (hash << 3);
// 	hash ^= (hash >> 11);
// 	hash += (hash << 15);

// 	return hash;

// }

