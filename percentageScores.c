/*EE2450
*Programming Assignment 4
*Problem 1: Program to determine the percentage of A, B, C, No Credit scores
*	    assigned in a class.
*Written by Edgar Palapa
*/
#include <stdio.h>
#define MAX_CLASS_SIZE 100
int main() {

	int scores[MAX_CLASS_SIZE];
	int numStudents = 0;
	int i, j, temp;
	int numAs = 0, numBs = 0, numCs = 0, numNCs = 0;
	double perAs, perBs, perCs, perNCs;
	char grade[5] = "ABCNC";

	//display menu
	printf("Score Range: \n");
	printf("\tA:  90 - 100\n\tB:  80 - 89\n\tC:  70 - 79\n\tNC: 00 - 69\n");

	//get number of students
	printf("Enter the number (0-100) of students in your class: \n");
	scanf("%d", &numStudents);
	printf("\n");
	
	//restricts user input for number of students to numbers between 0 and 100
	while ((numStudents < 0) || (numStudents > 100)) {
		printf("ERROR: Please enter a valid number of students: ");
		scanf("%d", &numStudents);
		printf("\n");
	}
	
	//get scores based on number of students
	printf("Please enter the scores: ");
	printf("\n");
	for (i = 0; i < numStudents; i++) {
		scanf("%d", &scores[i]);

		//retricts user input to scores between 0 and 100
		while ((scores[i] < 0) || (scores[i] > 100)) {
			printf("ERROR: Please enter a valid score: ");
			scanf("%d", &scores[i]);
			printf("\n");
		}
		printf("\n");
	}

	//displays the scores based on the number of students
	printf("The scores you have entered are: ");
	for (i = 0; i < numStudents; i++) {
		printf("%d ", scores[i]);
	}
	printf("\n\n");

	//counts the number of A's B's C's NC's
	for (i = 0; i < numStudents; i++) {
		if (scores[i] <= 100 && scores[i] >= 90) {
			numAs++;
		}
		if (scores[i] <= 89 && scores[i] >= 80) {
			numBs++;
		}
		if (scores[i] <= 79 && scores[i] >= 70) {
			numCs++;
		}
		if (scores[i] <= 69) {
			numNCs++;
		}
	}

	//computes the percentage of A's B's C's NC's
	perAs = ((double)(numAs) / (double)(numStudents)) * 100.0;
	perBs = ((double)(numBs) / (double)(numStudents)) * 100.0;
	perCs = ((double)(numCs) / (double)(numStudents)) * 100.0;
	perNCs = ((double)(numNCs) / (double)(numStudents)) * 100.0;
	printf("\n\n");

	//displays percentage of A's B's C's and NC's
	printf("Percentage of A's: %.2f%%\n", perAs);
	printf("Percentage of B's: %.2f%%\n", perBs);
	printf("Percentage of C's: %.2f%%\n", perCs);
	printf("Percentage of NC's: %.2f%%\n", perNCs);
	printf("\n\n");

	//sorts the scores in descending order
	printf("Score\tGrade\n");
	for (i = 0; i < numStudents; i++) {
		for (j = i + 1; j < numStudents; j++) {
			if (scores[i] < scores[j]) {
				temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}
		}
	}

	//displays the scores in descending order
	for (i = 0; i < numStudents; i++) {
		if (scores[i] <= 100 && scores[i] >= 90) {
			printf("%d\t%c\n", scores[i], grade[0]);
		}
		if (scores[i] <= 89 && scores[i] >= 80) {
			printf("%d\t%c\n", scores[i], grade[1]);
		}
		if (scores[i] <= 79 && scores[i] >= 70) {
			printf("%d\t%c\n", scores[i], grade[2]);
		}
		if (scores[i] <= 69) {
			printf("%d\t%c%c\n", scores[i], grade[3], grade[4]);
		}
	}
	printf("\n");
		
	return 0;
}
