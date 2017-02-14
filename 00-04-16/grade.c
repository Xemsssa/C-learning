#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int numberOfGrades, i, grade;
	int gradeTotal = 0;
	int failCount = 0;
	float average;

	printf("Please enter your grades: \n");
	scanf("%i", &numberOfGrades);

	for (int i = 1; i < numberOfGrades; ++i)
	{
		/* code */
		printf("Enter #%i: ", i );
		scanf("%i", &grade);
		gradeTotal = gradeTotal + grade;

		if ( gradeTotal < 65)
		{
			/* code */
			failCount++;
		}
	}	

	average = (float) gradeTotal / numberOfGrades;

	printf("\nGrade average = %.2f\n", average);
	printf("Number of Falure =  %i\n", failCount );

	
	return 0;
}