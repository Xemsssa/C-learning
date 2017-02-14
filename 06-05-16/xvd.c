bool check(const char* word)
{
    int index = 0;
    node * cur_node = root;
    char c ='a';
    int c_index;
    while(c!='\0')
    {
        c = word[index];
        c_index = (c == '\'') ? 26 : tolower(c)-'a';
        if(cur_node->children[c_index] == NULL)
        {
            return false;
        }
        else
        {
            cur_node = cur_node->children[c_index];
        }
        index ++;
        c = word[index];

    }
    if(cur_node->is_word)
    {
        return true;
    }
    return false;
}

/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{   

    node * cur_node = root;

    FILE* fp = fopen(dictionary, "r");
    if (fp == NULL)
    {
        printf("Could not open %s.\n", dictionary);
        return 1;
    }

    int index = 0;
    int c = fgetc(fp);

    while(c != EOF)
    {
        while(c!='\n' && c != EOF)
        {
            index = (c == '\'') ? 26 : tolower(c)-'a';
            if (cur_node->children[index]==NULL)
            {
                node * new_node = malloc(sizeof(node));
                if(new_node == NULL)
                {
                    printf("Unable to allocate memory\n");
                    return 0;
                }
                else
                {
                    new_node->is_word = 0;
                    for(int i=0; i<27; i++)
                    {
                        new_node->children[i]=NULL;
                    }
                    cur_node->children[index] = new_node;
                    cur_node = new_node;
                }

            }
            else
            {
                cur_node = cur_node->children[index];
            }
            c = fgetc(fp);      // read next character


        }
        cur_node->is_word=1;
        size_of_dict ++;
        cur_node = root;
        c = fgetc(fp);
    }
    fclose(fp);
    return true;
}


/**
 * Unloads the current branch of the trie from memory
 */

void unloadbranch(node* cursor)
{
    for (int i = 0; i < 27; i++)
    {
        if (cursor->children[i] != NULL);
        {
            unloadbranch(cursor->children[i]);
        }
    }
    free(cursor);
}

// Create a new node
        if (current->children[index] == NULL)
        {
            // create temporary node, and signpost current one to it
            node* temp = malloc(sizeof(struct node));
            if (temp == NULL)
            {
                printf("Not enough memory to create dictionary");
                return false;
            }
            for (int i = 0; i < 27; i++)
            {
                // ERROR 1
                root->children[i] = NULL;
            }
            temp->is_word = false;
            current->children[index] = temp;
            current = current->children[index];
            // ERROR 2
            free(temp);
        }