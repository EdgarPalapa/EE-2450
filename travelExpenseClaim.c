/*
* Written by Edgar Palapa
* EE2450
* Dr. Yi Zhao
* 01 November 2017
*/
#include <stdio.h>
int main() {

	char category[6][10] = { "Airfare", "Hotel", "Brkfast", "Lunch", "Dinner", "Taxi" };
	double expenses[30][6];
	double totalDays[30];
	int i, j, numDays;
	int selection = 0;
	
	double totalExpense = 0;
	double totalCategory[6];

	//display menu and get number of days travelled
	printf("\nTravel Expense Claim Assistant\n");
	printf("\nEnter the number of days of travel : ");
	scanf("%d", &numDays);
	printf("\n");

	//display error and get user for number of days travelled
	while (numDays < 0 || numDays > 30) {
		printf("Invalid number of days entered, try again : ");
		scanf("%d", &numDays);
	}
	printf("\n\n");

	//get expenses per category based on the number of days travelled 
	for (i = 0; i < numDays; i++) {
		printf("Enter expenses for day %d\n", i + 1);
		for (j = 0; j < 6; j++) {
			printf("\t%s", category[j]);
			printf("\t: $");
			scanf("%lf", &expenses[i][j]);
		}
	}
	printf("\n");

	while (selection != 5) {

		//display menu while user does not select five and get user selection
		printf("Select travel expense claim views\n");
		printf("\t1.Expense claim total\n");
		printf("\t2.Category totals\n");
		printf("\t3.Daily totals\n");
		printf("\t4.Expense claim details\n");
		printf("\t5.Exit\n");
		printf("Selection : ");
		scanf("%d", &selection);
		printf("\n");

		switch (selection) {

			//selection one; computes and displays total expenses
			case 1:	for (i = 0; i < numDays; i++) {
						for (j = 0; j < 6; j++) {
							totalExpense += expenses[i][j];
						}
					}
					printf("The total travel expense is : $%.2f\n", totalExpense);
					printf("\n");
					break;

			//selection two; computes and displays expenses by category
			case 2:	printf("Totals by category\n");
				for (i = 0; i < 6; i++) {
					totalCategory[i] = 0;
					for (j = 0; j < numDays; j++) {
						totalCategory[i] += expenses[j][i];
					}
				}
				for (i = 0; i < 6; i++) {
					printf("\t%s", category[i]);
					printf("\t: $%.2f\n", totalCategory[i]);
				}
				printf("\n");
				break;

			//selection three; computes and displays daily expenses 
			case 3:	printf("Totals by day\n");
					for (i = 0; i < numDays; i++) {
						totalDays[i] = 0;
						for (j = 0; j < 6; j++) {
							totalDays[i] += expenses[i][j];
						}
					}
					for (i = 0; i < numDays; i++) {
						printf("\tDay %d : $%.2f\n", i + 1, totalDays[i]);
					}
					printf("\n");
					break;

			//selection four; displays expense claim details
			case 4:	printf("Expense claim details: \n");
					for (j = 0; j < 6; j++) {
						printf("\t%s", category[j]);
					}
					for (i = 0; i < numDays; i++) {
						printf("\nDay %d:", i + 1);
						for (j = 0; j < 6; j++) {
							printf("\t$%.2f", expenses[i][j]);
						}
					}
					printf("\n\n");
					break;
			//selection five; exits the program
			case 5:
					break;

			//displays error for user inputs outside of the range of values one through five
			default: printf("** Error: invalid selection. **\n\n");
			break;
		}
	}
	return 0;
}
