//Written by Edgar Palapa
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
	int choice, num1, num2, ans;		/*declares local variables*/
	
	printf("Math Tutor\n");		/*displays menu*/
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.Exit\n");
	
	printf("Select your choice: ");		/*prompts user to choose a section*/
	scanf("%d",&choice);	/*reads user's choice*/
	
	while(choice != 5)		/*user enters loop if user choice was not 5, to exit*/
	{
		if(choice == 1)		/*choice for addition*/
		{
			num1 = rand()%10;	/*assigns a random number from 1-10*/
			num2 = rand()%10;
			printf("What is %d + %d? ",num1,num2);
			scanf("%d", &ans);
			if(ans ==(num1 + num2))
				printf("Correct\n");
			else
				printf("Incorrect. The answer is %d\n",(num1 + num2));
			
			printf("Enter a choice to continue: ");
			scanf("%d",&choice);
		}
		else if(choice == 2)	/*choice for subtraction*/
		{
			num1 = rand()%10;
			num2 = rand()%10;
			printf("What is %d - %d? ",num1,num2);
			scanf("%d", &ans);
			if(ans == (num1 - num2))
				printf("Correct\n");
			else
				printf("Incorrect. The answer is %d\n",(num1 - num2));
			
			printf("Enter a choice to continue: ");
			scanf("%d",&choice);
		}
		else if(choice == 3)	/*choice for multiplication*/
		{
			num1 = rand()%10;
			num2 = rand()%10;
			printf("What is %d * %d? ",num1,num2);
			scanf("%d", &ans);
			if(ans == (num1 * num2))
				printf("Correct\n");
			else
				printf("Incorrect. The answer is %d\n",(num1 * num2));
			
			printf("Enter a choice to continue: ");
			scanf("%d",&choice);
		}
		else if(choice == 4)	/*choice for division*/
		{
			num1 = rand()%10;
			num2 = rand()%9+1;
			printf("What is %d / %d? ",num1,num2);
			scanf("%d", &ans);
			if(ans == (num1 / num2))
				printf("Correct\n");
			else
				printf("Incorrect. The answer is %d\n",(num1 / num2));
			
			printf("Enter a choice to continue: ");
			scanf("%d",&choice);
		}
		else
		{
			exit(0);	/*end of loop*/
		}
		
	}
system("Pause");
return 0;
}