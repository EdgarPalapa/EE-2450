/*EE2450
*In-Class Exercise 6
*Problem 3: Program to display a rectangle defined by three
*			user inputs: number of rows, number of columns,
*			and the type of symbol.	
*Written by Blair Vidana
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void PrintRectangle(int rows, int columns, char rec_symbol) {
	int i = 0;
	int j = 0;
	
	for (i = 1 ; i <= rows; i++) {
		
		for (j = 1; j < columns; j++) {
			printf("%c", rec_symbol);

		}

		printf("%c\n", rec_symbol);
	}
	return 0;
}
int main() {

	int rows = 0;
	int columns = 0;
	char rec_symbol = 'A';
	

	printf("Please enter a symbol: ");
	scanf("%c", &rec_symbol);
	printf("\n\n");

	printf("Please enter the number of rows: ");
	scanf("%d", &rows);
	printf("\n\n");

	printf("Please enter the number of columns: ");
	scanf("%d", &columns);

	printf("\n\n");

	printf("Number of rows is: %d", rows);
	printf("\n\n");
	printf("Number of Columns is: %d", columns);
	printf("\n\n");
	printf("The symbol you have chosen is: %c\n", rec_symbol);

	PrintRectangle(rows, columns, rec_symbol);

	return 0;

}
