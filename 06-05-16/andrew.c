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

int words;

struct node* table[HASH_MAX];

unsigned int getHash(char* word);
void removeall(node* cursor);

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
    // TODO

	{
		if (word[i] != '\'' )
		{
			test[i] = tolower(word[i]);
		}
		else
		{
			test[i] = word[i];
		}

		test[strlen(word)] = '\0';
		unsigned int hash = getHash(test);

		if (table[hash] = NULL)
		{
			/* code */
			free(test);
			return false;
		}
		else
		{
			if (strcmp(table[hash] -> word, test) == 0)
			{
				/* code */
				free(test);
				return true;
			}

			struct node* cursor = table[hash];
			while (cursor -> next != NULL)
			{
				cursor = cursor -> next;
				if (strcmp(cursor -> word, text) == 0)
				{
					/* code */

				}
			}

		}  
	}

}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    // TODO
    typedef struct node
    {
    	char word[LENGTH + 1];
    	struct node* next;
    }
    node;
    //return false;

    char* word = malloc(sizeof(char) * (LENGTH + 1));
    int index = 0;

    //do

    for (int c = fgetc(fp); c != EOF; c = fgetc(fp))
    {
        // allow only alphabetical characters and apostrophes
        if (isalpha(c) || (c == '\'' && index > 0))
        {
            // append character to word
            word[index] = c;
            index++;

            // ignore alphabetical strings too long to be words
            if (index > LENGTH)
            {
                // consume remainder of alphabetical string
                while ((c = fgetc(fp)) != EOF && isalpha(c));

                // prepare for new word
                index = 0;
            }
        }

        hash = getHash(word);
        if (table[hash] == NULL)
        {
        	table[hash] = malloc(sizeof(node));
        	table[hash] -> next = NULL;
        	table[hash] -> word = malloc(sizeof(char) * (LENGTH + 1));
        	memcpy(table[hash] -> word, word, sizeof(char) * (LENGTH + 1 )); 
        }
        else
        {
        	struct node* newnode = malloc(sizeof(node));
        	newnode -> word = malloc(sizeof(char) * (LENGTH + 1));
        	memcpy(newnode -> word, word, sizeof(char) * (LENGTH +1));
        	newnode -> next = table
        }
    return false;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
    return 0;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    // TODO

    for (int i = 0; i < HASH_MAX; ++i)
    {
    	/* code */
    	node* cursor = table[i];
    	if (cursor != NULL)
    	{
    		/* code */
    		removeall(cursor);
    	}
    	return true;
    }

    void removeall(node* cursor)
    {
    	if (cursor -> next != NULL)
    	{
    		/* code */
    		removeall(cursor -> next);
    	}
    	//free(cursor -> word);
    	free(cursor);
    }
    return false;
}

Функция FAQ6

unsigned int HashFAQ6(const char * str)
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

// Additive Hash

// ub4 additive(char *key, ub4 len, ub4 prime)
// {
//   ub4 hash, i;
//   for (hash=len, i=0; i<len; ++i) 
//     hash += key[i];
//   return (hash % prime);
// }


// Rotating Hash

// ub4 rotating(char *key, ub4 len, ub4 prime)
// {
//   ub4 hash, i;
//   for (hash=len, i=0; i<len; ++i)
//     hash = (hash<<4)^(hash>>28)^key[i];
//   return (hash % prime);
// }

// One-at-a-Time Hash

// ub4 one_at_a_time(char *key, ub4 len)
// {
//   ub4   hash, i;
//   for (hash=0, i=0; i<len; ++i)
//   {
//     hash += key[i];
//     hash += (hash << 10);
//     hash ^= (hash >> 6);
//   }
//   hash += (hash << 3);
//   hash ^= (hash >> 11);
//   hash += (hash << 15);
//   return (hash & mask);
// } 

// Bernstein's hash

// ub4 bernstein(ub1 *key, ub4 len, ub4 level)
// {
//   ub4 hash = level;
//   ub4 i;
//   for (i=0; i<len; ++i) hash = 33*hash + key[i];
//   return hash;
// }



