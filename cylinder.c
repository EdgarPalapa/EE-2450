/*EE2450
*Programming Assignment 1
*Problem 2: Program to compute the base area, surface area, and volume of a cylinder.
*Written by Edgar Palapa
*/
#include <stdio.h>
#include <math.h>

int main() {

	const double PI = 3.14159265;		//pi
	double radius;						//r
	double height;						//h
	double baseArea;					//A
	double surfaceArea;					//SA
	double volume;						//V

	//Prompts the user for radius and height input
	printf("Enter the radius of the cylinder: \n");
	scanf("%lf", &radius);

	printf("Enter the height of the cylinder: \n");
	scanf("%lf", &height);

	//Computes the base area, surface area, and volume of the cylinder
	baseArea = (PI * radius * radius);								//A = pi*r^2
	surfaceArea = (2 * baseArea) + (2 * PI * radius * height);		//SA = 2*pi*r^2 + 2*pi*r*h
	volume = baseArea * height;										//V = pi*r^2*h

	//Displays the output
	printf("The area of the base of a cylinder is %lf\n", baseArea);
	printf("The surface area of a cylinder is %lf\n", surfaceArea);
	printf("The volume of a cylinder is %lf\n", volume);

	return 0;
}