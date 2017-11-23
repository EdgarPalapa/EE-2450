/*EE2450
*Programming Assignment 1
*Problem 3: Program to compute the base area, surface area, and volume of a cube.
*Written by Edgar Palapa
*/
#include <stdio.h>
#include <math.h>

int main() {

	double side;				//s
	double height;				//h
	double faceArea;			//A_f
	double baseArea;			//A_b
	double surfaceArea;			//SA
	double volume;				//V

	//Prompt the user to input side length and height of the square pyramid
	printf("Enter the side length of the base: \n");
	scanf("%lf", &side);

	printf("Enter the height of the square pyramid: \n");
	scanf("%lf", &height);

	//Computes the face area, base area, surface area, and volume of the square pyramid
	faceArea = 0.5 * side * sqrt((0.25 * (side * side)) + (height * height));		//A_f = 0.5*s*sqrt(0.25*s^2 + h^2)
	baseArea = side * side;															//A_b = s^2
	surfaceArea = (4.0 * faceArea) + (baseArea);									//SA = 4*A_f + A_b
	volume = (side * side) * (height / 3.0);										//V = s^2 * h/3

	//Displays the output
	printf("The area of the base of the square pyramid is %lf\n", baseArea);
	printf("The surface area of the square pyramid is %lf\n", surfaceArea);
	printf("The volume of the square pyramid is %lf\n", volume);

	return 0;
}