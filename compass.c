/*EE2450
*Programming Assignment 2
*Problem 2: Program to take inputs for angle (in radians)
*			and display direction.
*Written by Edgar Palapa
*/
#include <stdio.h>
#include <math.h>

int main() {

	int angle;

	printf("Input an angle (in degrees): \n");			//prompt user for angle in radians
	scanf("%d", &angle);								//gets user input for angle
	angle = angle % 360;								//converts angles greater than 359 into angles from 0 to 359

	if ( ( (angle >= 0) && (angle <= 22) ) || ( (angle >= 338) && (angle <= 359) ) ) {			//for angles between 0 and 22 or 338 and 359
		printf("Your direction is: North\n");			//compass faces north
	}
	else if ( (angle >= 23) && (angle <= 67) ) {		//for angles between 23 and 67
		printf("Your direction is: North-East \n");		//compass faces north-east
	}
	else if ( (angle >= 68) && (angle <= 112) ) {		//for angles between 68 and 112
		printf("Your direction is: East\n");			//compass faces east
	}
	else if ( (angle >= 113) && (angle <= 157) ) {		//for angles between 113 and 157
		printf("Your direction is: South-East\n");		//compass faces south-east
	}
	else if ( (angle >= 158) && (angle <= 202) ) {		//for angles between 158 and 202
		printf("Your direction is: South\n");			//compass faces south
	}
	else if ( (angle >= 203) && (angle <= 247) ) {		//for angles between 203 and 247
		printf("Your direction is: South-West\n");		//compass faces south-west
	}
	else if ( (angle >= 248) && (angle <= 292) ) {		//for angles between 248 and 292
		printf("Your direction is: West\n");			//compass faces west
	}
	else if ( (angle >= 293) && (angle <= 337) ) {		//for angles between 293 and 337
		printf("Your direction is: North-West\n");		//compass faces north-west
	}
	else {
		printf("Invalid Input: Please enter an angle greater than zero.");			//display error for angles less than zero
	}
}