/*EE2450
*Programming Assignment 2
*Problem 1: ATM machine program.
*Written by Edgar Palapa
*/
#include <stdio.h>
int main() {

	int acctPass = 331996;					//Account Password
	int inputPass;							//User Input Password
	int userChoice = 0;						//User Choice
	char acctName[25] = "Dennis Ritchie";	//Account Name
	double acctNum = 9171994201;			//Account Number
	double inputNum;						//User Input Account Number
	double acctBalance = 123456.0;			//Account Balance
	double balanceDeposit = 0.0;			//User Deposit
	double balanceWithdrawal = 0.0;			//User Withdrawal

	//Display Greeting and prompt user for their account number
	printf("-----Welcome to Bank of C Language ATM-----\n");
	printf("Please enter your account number: \n");
	scanf("%lf", &inputNum);				//gets user input account number

	if (inputNum != acctNum) {				//if user enters wrong account number
		printf("Error: invalid account number, try again.\n");				//Display error message
	}
	else if (inputNum == acctNum) {			//if user enters correct account number
		printf("Please enter your account password: \n");					//prompt user for account password
		scanf("%d", &inputPass);			//gets user input account password

		if (inputPass != acctPass) {		//if user enters wrong account password
			printf("Error: invalid account password, try again.\n");		//Display error message
		}
		else if (inputPass == acctPass) {		//if user enters correct account password

			//Menu display
			printf("Welcome %s!\n", acctName);
			printf("What would you like to do today?\n");
			printf("1 - Check Account Balance\n");
			printf("2 - Deposit Cash\n");
			printf("3 - Withdraw Cash\n");
			scanf("%d", &userChoice);			//gets user choice in menu

			switch (userChoice) {	
				//if user enters 1
				case 1: 
					printf("Your account balance is: %lf\n", acctBalance);		//Display account balance
					break;
				//if user enters 2
				case 2:
					printf("How much would you like to deposit?\n");			//Prompt user for deposit amount
					scanf("%lf", &balanceDeposit);								//gets user deposit amount
					printf("Your new balance is: %lf\n", acctBalance + balanceDeposit);		//displays new account balance after deposit
					break;
				//if user enters 3
				case 3:
					printf("How much would you like to withdraw?\n");			//Prompt user for withdrawal amount
					scanf("%lf", &balanceWithdrawal);							//gets user withdrawal amount
					
					if (balanceWithdrawal > acctBalance) {						//if balance withdrawn exceeds account balance
						printf("You do not have enough funds to complete this transaction.\n");		//display insuficient funds
					}
					else {
						printf("Your new balance is: %lf\n", acctBalance - balanceWithdrawal);		//if balance withdrawn is less than withdrawal amount
					}																				//display new account balance after withdrawal
					break;
				default: 
					printf("Invalid selection, please input a number between 1 and 3\n");		//if the user enters a value other than 1,2 ,or 3
					break;
			}
		}
	}
	return 0;
}
