//Written by Edgar Palapa

#include <stdio.h>
int main()
{
	int max;		/*stores the largest integer*/
	int count = 0;	/*stores the occurrence of the largest integer*/
	int num = 0;	/*stores the user input*/

	printf("Enter a set of integers or enter 0 to stop:\n");		/*prompts user input*/
	scanf("%d", &num);		/*reads user input*/
	
	max = num;		/*assigns user input to the max integer*/
	count = 1;		/*assigns the number of occurrences, starting at one*/

	while(num != 0)		
	{
		printf("Enter a set of integers or enter 0 to stop:\n");
		scanf("%d", &num);
		if(max < num)		/*if the maximum integer is less than the user input, max replaces num as the max integer*/
		{
			count=1;
			max = num;
		}
		else if(num == max)		/*if the user input is equal to the max integer, the occurrence of the max integer is incremented*/
		{
			count++;
		}
	}

	printf("The largest integer is: %d\n", max);		/*displays user output for the maximum integer*/
	printf("The occurrence of the largest integer is %d times.\n", count);		/*displays user output for occurrance of the max integer*/

system("pause");
return 0;
}