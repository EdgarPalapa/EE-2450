/*EE2450
*Programming Assignment 3
*Problem 1: Program to calculate sum and average of non-negative numbers
*		    entered by a user.
*Written by Edgar Palapa
*/
#include <stdio.h>

int main() {

	//initialize variables
	double avg = 0.0;
	int firstNum = 0;
	int nextNum = 0;
	int sum = 0;
	int terms = 1;

	//display user prompt for the first number
	printf("\nProgram to compute the sum and average of non-negative numbers.\n\n\n");
	printf("Enter one negative number to stop.\n\n\n");
	printf("Enter the first number : ");
	scanf("%d", &firstNum);
	printf("\n");

	if (firstNum < 0) {								//if user doesn't input a positive number
		printf("No number was entered to sum and average.\n");			//display error message
	}
	else if (firstNum >= 0){											//if user inputs a positive number
		sum = firstNum;								//assign the first number to the total sum
		printf("Enter the next number : ");			//prompt user to enter the next number
		scanf("%d", &nextNum);
		printf("\n");

		//adds the next numbers to the overall sum until user inputs a negative number
		while (nextNum >= 0) {
			sum += nextNum;
			printf("Enter the next number : ");
			scanf("%d", &nextNum);
			printf("\n");
			++terms;								//counts the number of terms entered by the user except negative numbers
		}
		avg = ((double)(sum)) / ((double)(terms));							//computes the average and stores the result as a double
		printf("The sum is %d and the average is %lf.\n", sum, avg);		//displays final sum and average
	}
	return 0;
}