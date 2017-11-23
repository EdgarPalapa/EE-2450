/*EE2450
*In-Class Exercise 6
*Problem 1: Program to run-length encode one sparse array
			such that each non-zero element and its preceding
			zeros will be coded as two numbers.
*Written by Edgar Palapa
*/
#include <stdio.h>
#define SIZE 12
int main() {

	int sparseArr[SIZE];
	int i;
	int count = 0;

	printf("\nEnter the sequence of integers : \n");
	for (i = 0; i < SIZE; i++) {
		printf("\n");
		scanf("%d", &(sparseArr[i]));
	}
	printf("\n");

	printf("The sparse array is : \n");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", sparseArr[i]);
	}

	printf("\n");

	printf("\nThe encoded result is : \n");
	for (i = 0; i < SIZE; i++) {
		if (sparseArr[i] == 0) {
			count++;
		}

		if (sparseArr[i] != 0) {
			printf("%d %d ", count, sparseArr[i]);
			count = 0;
		}
	}
	printf("\n\n");
	return 0;
}