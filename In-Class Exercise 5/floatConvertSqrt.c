/*EE2450
*In-Class Exercise 5
*Problem 1: Program to convert an array of 5 non-negative floating point numbers
*			into the square root.
*Written by Edgar Palapa
*/
#include <stdio.h>
#include <math.h>

int main() {

	const int NUMINPUTS = 5;
	double num[5];
	double sqrtNum;
	int i, j;

	for (i = 0; i < NUMINPUTS; i++) {
		printf("\nPlease enter a positive number: \n");
		scanf("%lf", &num[i]);
		if (num[i] < 0.0) {
			num[i] = 0;
		}
		sqrtNum = sqrt(num[i]);
		printf("\n%lf converted to the square root is %lf\n", num[i], sqrtNum);
		num[i] = sqrtNum;
	}
	for (j = 0; j < NUMINPUTS; j++){
		printf("\nThe converted numbers are: %lf\n", num[j]);
	}
	return 0;
}

