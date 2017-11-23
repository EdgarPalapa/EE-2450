/*EE2450
*Programming Assignment 3
*Problem 3: Program that will take inputs for time and power level.
*Written by Edgar Palapa
*/
#include <stdio.h>

int main() {

	int power;
	int i = 0;
	int time = 0;

	//display welcome
	printf("\nWelcome to the Microwave Control Menu\n\n");
	printf("Enter a cooking time greater than 0 seconds and a power level between 0 and 100 watts.\n\n\n");

	//prompt user for cooking time
	printf("Enter a valid cooking time : ");
	scanf("%d", &time);
	while (time < 1) {							//checks for valid time input
		printf("\a");
		printf("Invalid cooking time, try again.\n\n");
		printf("Enter a valid cooking time (Greater than 0 seconds) : ");
		scanf("%d", &time);
	}

	//prompt user for power level
	printf("\n\nEnter a valid power level : ");
	scanf("%d", &power);
	while ((power < 0) || (power > 101)) {		//checks for valid power input
		printf("\a");
		printf("Invalid power level, try again.\n\n");		
		printf("Enter a valid power level (0 Watts - 100 Watts) : ");
		scanf("%d", &power);
	}

	printf("\n\n");

	//counts down from given time to zero
	for (i = time; i >= 0; i--)
	{
		if (i == time / 2)						//power is halved when timer is halfway to zero
		{
			power /= 2;							
			printf("Power level is now: %d Watt(s)\n\n", power);			//displays updated power level
		}
		printf("Time remaning: %d seconds(s)\n\n", i);					//displays time remaining in seconds
	}
	printf("\a");
	return 0;
}