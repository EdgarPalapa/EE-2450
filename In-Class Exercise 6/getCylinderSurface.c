/*EE2450
*In-Class Exercise 6
*Problem 4: Program to display the surface area of a cylinder
*			based on two user inputs: height and radius.
*Written by Blair Vidana
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

double surfaceArea(double heightCyl, double radiusCyl) {
	const double PI = 3.14159;
	double surfaceCyl = 0.0;

	surfaceCyl = ((2 * PI*radiusCyl*heightCyl) + (2 * PI*(radiusCyl*radiusCyl)));

	return(surfaceCyl);
}

int main() {

	double heightCyl = 0.0;// the height of the cylinder
	double radiusCyl = 0.0;// the raduius of the cylinder
	double surface = 0.0;
	printf("\n\n");
	printf("Please enter the height if the cylinder: ");
	scanf("%lf", &heightCyl);
	printf("\n\n");
	
	printf("Please enter the radius of the cylinder: ");
	scanf("%lf", &radiusCyl);
	
	printf("\n\n");
	surface = surfaceArea(heightCyl, radiusCyl);
	printf(" The surface are is: %lf", surface);


	return 0;

}
