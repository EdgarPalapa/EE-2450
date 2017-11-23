//Written by Edgar Palapa
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rate(int age) 	/*function returning insurance rate and age*/
{
	double initial;	/*local variables for initial rate*/	
	initial = 1000;
	if(age >= 16 && age <= 19)	/*insurance rate for ages 16 through 19*/
	{
		initial = initial + (initial * .15);
	}
	if(age >= 20 && age <= 25)	/*insurance rate for ages 20 throught 25*/
	{
		initial = initial + (initial * 0.05);
	}
	if (age > 25)	/*insurance rate for ages 25 and above*/
	{
		initial = initial - (initial * 0.10);
	}
	
	return initial;
}

int rate(int age);	/*function returning insurance rate and age*/

int main()
{
	int age;	/*local variable for age*/
		printf("Enter your age: ");		/*prompts user for age*/
		scanf("%d",&age);
		printf("Your insurance rate will be %d dollars per year.\n",rate(age));		/*outputs final insurance rate*/
	
	system("Pause");
	return 0;
}