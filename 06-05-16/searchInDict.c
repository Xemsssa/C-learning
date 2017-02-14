
//struct
// struct entry
// {
// 	char word[15];
// 	char definition[51];
// };

// //variable
// struct entry word1 = {"blob", "an amorphous mass"};

// //create dictinary array
// struct entry dictionary[100];

// //seach
// entry = lookup(dictionary, word, entries);

// #include <stdlib.h>
// #include <stdbool.h>

// struct entry
// {
// 	char word[15];
// 	char definition[51];
// };

/***** Puts funct equalString here *****/

//search in dictionary
int lookup(const char s1[], const char s2[], const int entries)
{
	for (int i = 0; i < entries; ++i)
	{
		/* code */
		if (equalString (search,  dictionary[i].word ))
		{
			/* code */
			return i;
		}
		return -1;
	}
}

int main(int argc, char const *argv[])
{
	const struct entry dictionary[100] = {NULL};
	char word[10];
	int entries = 10;
	int entry;

	int lookup(const struct entry dictionary[], const char search[], const int entries);
	printf("Enter word: ");
	scanf("%14s", word);//?????
	entry = lookup(dictionary, word, entries);
	if (entry != -1)
	{
		/* code */
		printf("%s\n", dictionary[entry].definition);
	}
	else
	{
		printf("Sorry the word %s is not in dictionary.\n", word );
	}
	return 0;
}




