/*EE2450
*In-Class Exercise 5
*Problem 2: Program to sort an array in non-ascending order.
*Written by Edgar Palapa
*/
#include <stdio.h>

int main(){
	const int SIZE = 8;
	int numArray[8];
	int i, j, k, temp;

	printf("\nEnter the first integer : \n");
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &numArray[i]);
		printf("\nEnter the next integer: \n");

		for (j = i + 1; j < SIZE; j++) {
			if (numArray[i] > numArray[j]) {
				temp = numArray[i];
				numArray[i] = numArray[j];
				numArray[j] = temp;
			}
		}
	}
	printf("\nList of non-ascending numbers : \n");

	for (k = 0; k < SIZE; k++) {
		printf(" %d \n", numArray[k]);
	}
}