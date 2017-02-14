#include <stdio.h>

struct entry
{
	int value;
	struct entry* next;
};

struct entry *findEntry (struct entry *listPtr, int match)
	{
		while (listPtr != (struct entry *) 0)
		{
			if (listPtr -> value == match)
			{
				/* code */
				return (listPtr);
			}
			else
			{
				listPtr = listPtr -> next;
			}
		}
		return (struct entry*) 0;
	}

int main(int argc, char const *argv[])
{
	/* code */
	struct entry* findEntry(struct entry* listPtr, int match);
	struct entry n1, n2, n3;
	struct entry *list listPtr, listStart = &n1;
	int search;

	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = 0;

	printf("Enter:\n");
	scanf("%i", &search);

	listPtr = findEntry(listStart, search);

	if (listPtr != (struct entry*) 0)
	{
		/* code */
		printf("Found %i\n", listPtr -> value );
	}
	else
	{
		printf("Not found\n");
	}

return 0;

}

























