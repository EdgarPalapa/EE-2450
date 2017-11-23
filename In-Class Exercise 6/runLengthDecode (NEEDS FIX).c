/*EE2450
*In-Class Exercise 6
*Problem 2: Program to run-length decode an encoded sparse array.
*Written by Edgar Palapa
*/
#include <stdio.h>
#define SIZE 12

int main() {

	int encodedArr[SIZE];
	int i, j;
	int count = 0;

	printf("Enter the encoded array : \n");
	for (i = 0; i < SIZE; i++) {
		printf("\n");
		scanf("%d", &encodedArr[i]);
	}
	for (i = 0; i < SIZE; i++) {
		count = 0;
		if (encodedArr[i] == 0){
			if (encodedArr[i + 1] != 0) {
				encodedArr[i] = encodedArr[i + 1];
				printf("%d ", encodedArr[i]);
				continue;
			}
		}
		else {
			for (j = 0; j <= encodedArr[i]; j++) {
				count++;
			}
			encodedArr[i] = count;
			printf("%d %d ", count, encodedArr[i + 1]);
		}
	}
	return 0;
}