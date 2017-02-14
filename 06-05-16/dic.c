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

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word)
{
    // TODO
    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    // TODO
    //hashtable

    //check if our index < 10
        //put in first
    //if index > 10  index < 20
        //put in second    
    typedef struct node
    {
        char word[LENGTH + 1];
        struct node* next;
    }
    node;

    node* hashtable[500];

    node* new_node = malloc(sizeof(node));

    fscanf(file, "%s", new_node -> word);

    node* cursor = head;

    while (cursor != NULL)
    {
        //do something

        //d is new_node
        new_node -> next = cursor -> next;
        //??????????????????????????????????
        //cursor -> next = new_node;
        cursor = cursor -> next;
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
    return false;
}
