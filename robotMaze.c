/*EE2450
*Programming Assignment 3
*Problem 2: Program to determine the location of a robot moving
			through a maze.
*Written by Edgar Palapa
*/
#include <stdio.h>

int main() {
	
	//initialize variables
	int x = 0; 
	int y = 0;
	char cmd = '-';
	char ch;

	//display AWESOME-O 3000 Menu
	printf("Program to control AWESOME-O 3000.\n\n\n");
	printf("Enter a valid (x, y) start position.\n");
	printf("Valid start positions include x or y values between 1 and 7.\n\n\n");

	//prompt user for x-coordinate
	printf("Enter a valid x-coordinate start position : \n\n");
	printf("x: ");
	scanf("%d", &x);
	while ( (x < 1) || (x > 7) ) {			//prevents start positions outside of the maze
		printf("Not a valid x-coordinate, try again.\n");
		printf("x: ");
		scanf("%d", &x);
	}

	//prompt user for y-coordinate
	printf("Enter a valid y-coordinate start position : \n\n");
	printf("y: ");
	scanf("%d", &y);
	while ( (y < 1) || (y > 7) ) {			//prevents start positions outside of the maze
		printf("Not a valid y-coordinate, try again.\n");
		printf("y: ");
		scanf("%d", &y);
	}

	printf("\n\n\n");
	printf("AWESOME-O 3000's current position is: (%d, %d).\n\n\n", x, y);			//displays current position

	printf("Commands to control AWESOME-O 3000 include : \n\n\n");					//display valid user controls
	printf("   u - up   d - down   r - right   l - left   s - stop   \n\n\n");
	printf("Enter the first command : ");						//prompt user for first movement command
	while (cmd != 's') {										//controls user commands
		while ((ch = getchar() != '\n') && (ch != EOF));		//clears input buffer after every scan
		scanf("%c", &cmd);
		printf("\n\n");
		switch (cmd) {											
		
			case 'u':						//moves up one unit in the y direction
					y += 1;					//updates the value of the y coordinate
					if (y > 7) {			//if AWESOME-O 3000 moves too far up
						printf("AWESOME-O 3000 has hit a wall, try again.\n\n");		//display error for invalid coordinate position
						y -= 1;				//restores previous y value
					}
					else {					
						printf("AWESOME-O 3000's current position is: (%d, %d).\n\n", x, y);	//display AWESOME-O 3000's updated position
						printf("Enter the next Command: \n\n");				//prompt user for next movement command
					}
					break;

			case 'd':						//moves down one unit in the y direction
					y -= 1;
					if (y < 1){				//if AWESOME-O 3000 moves too far down
						printf("AWESOME-O 3000 has hit a wall, try again.\n\n");
						y += 1;
					}
					else {
						printf("AWESOME-O 3000's current position is: (%d, %d).\n\n", x, y);
						printf("Enter the next Command: \n\n");
					}
					break;

			case 'r':						//moves right one unit in the x direction
					x += 1;
					if (x > 7){				//if AWESOME-O 3000 moves too far right
						printf("AWESOME-O 3000 has hit a wall, try again.\n\n");
						x -= 1;				//restores previous x value
					}
					else {
						printf("AWESOME-O 3000's current position is: (%d, %d).\n\n", x, y);
						printf("Enter the next Command: \n\n");
					}
					break;

			case 'l':						//moves left one unit in the x direction
					x -= 1;
					if (x < 1){				//if AWESOME-O 3000 moves too far left
						printf("AWESOME-O 3000 has hit a wall, try again.\n\n");
						x += 1;			
					}
					else {
						printf("AWESOME-O 3000's current position is: (%d, %d).\n\n", x, y);
						printf("Enter the next Command: \n\n");
					}
					break;

			case 's': 
					printf("AWESOME-O 3000's final position is: (%d, %d)\n\n", x, y);			//display AWESOME-O 3000's final position
					break;

			default: 
					printf("Invalid command, try again.\n\n");				//display error for invalid user command
					break;
		}
	}
	return 0;
}