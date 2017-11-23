/*EE2450
*Programming Assignment 1
*Problem 1: Program to compute the base area, surface area, and volume of a cube.
*Written by Edgar Palapa
*/
#include <stdio.h>
#include <math.h>

int main() {

	double sideLength;			//s
	double baseArea;			//A
	double surfaceArea;			//SA
	double volume;				//V

								//Prompts the user for side length input
	printf("Enter a side length: ");
	scanf("%lf", &sideLength);

	//Computes base area, surface area, and volume of a cube
	baseArea = sideLength * sideLength;		//A = s^2
	surfaceArea = 6.0 * baseArea;			//SA = 6(s^2)
	volume = pow(sideLength, 3.0);			//V = s^3

											//Displays the output
	printf("The area of the base of a cube is %lf\n", baseArea);
	printf("The surface area of a cube is %lf\n", surfaceArea);
	printf("The volume of a cube is %lf\n", volume);

	return 0;
}