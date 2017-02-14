
//scruct

typedef struct node {
    int val;
    struct node * next;
} node_t;

//

// create new node
node_t * head = NULL;
// malloc
head = malloc(sizeof(node_t));
// check
if (head == NULL) {
    return 1;
}
// put values and 
head->val = 1;
//add pointer
head->next = NULL;

//

// create new node
node_t * head = NULL;
// malloc
head = malloc(sizeof(node_t));
// put values
head->val = 1;
// create another node
head->next = malloc(sizeof(node_t));
// put values
head->next->val = 2;
// pointer to null
head->next->next = NULL;

// iterate

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

// add to the end

void push(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}