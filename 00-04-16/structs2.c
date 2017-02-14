#include <stdio.h>
#include <cs50.h>
#include <stdib.h>
#include <string.h>

#include "structs.h"

#define STUDENTS 3

int main(int argc, char const *argv[])
{
	student students[STUDENTS];

	for (int i = 0; i < STUDENTS; ++i)
	{
		printf("Students name: \n");
		students[i].name = GetString();

		printf("Students house: \n");
		students[i].house = GetString();
	}
	FILE* file = fopen("students.csv", "w")
	if (file != NULL)
	{
		for (int i = 0; i < STUDENTS; ++i)
		{
			fprintf(file, "%s, %s\n", students[i].name, students[i].house);
		}
		fclose(file);
	}
	

	// for (int i = 0; i < STUDENTS; ++i)
	// {
	// 	printf("%s is in %s\n", students[i].name, students[i].house );
	// }

	for (int i = 0; i < STUDENTS; ++i)
	{
		free(students[i].name);
		free(students[i].house);
	}
	return 0;
}