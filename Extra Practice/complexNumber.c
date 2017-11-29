/*
*Written by Edgar Palapa
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ComplexNum_struct{
	float Re;
	float Im;
}ComplexNum;

ComplexNum sumComplex(ComplexNum *a, ComplexNum *b);
ComplexNum diffComplex(ComplexNum *c, ComplexNum *d);
ComplexNum multComplex(ComplexNum *x, ComplexNum *y);
ComplexNum divComplex(ComplexNum *w, ComplexNum *z);
void conjComplex(ComplexNum *p, ComplexNum *q);

int main(int argc, char* argv[]) {

	int choice = 0;

	ComplexNum Z_1;
	ComplexNum Z_2;
	ComplexNum Z_3;

	printf("\nEnter the real part of the first complex number: ");
	scanf("%f", &Z_1.Re);
	printf("\nEnter the imaginary part of the first complex number: ");
	scanf("%f", &Z_1.Im);
	printf("\nThe first complex number you have entered is: %.2f + j%.2f\n", Z_1.Re, Z_1.Im);

	printf("\nEnter the real part of the second complex number: ");
	scanf("%f", &Z_2.Re);
	printf("\nEnter the imaginary part of the second complex number: ");
	scanf("%f", &Z_2.Im);
	printf("\nThe second complex number you have entered is: %.2f + j%.2f\n", Z_2.Re, Z_2.Im);

	while (choice != 6) {
		printf("\n\nPlease Make a selection\n");
		printf("\n1. Add Two Complex Numbers\n");
		printf("\n2. Subtract Two Complex Numbers\n");
		printf("\n3. Multiply Two Complex Numbers\n");
		printf("\n4. Divide Two Complex Numbers\n");
		printf("\n5. Conjugate of a Complex Number\n");
		printf("\n6. Exit Program\n\n");
		scanf("%d", &choice);

		switch (choice) {
			
		case 1: 
			Z_3 = sumComplex(&Z_1, &Z_2);
			printf("\nThe sum of two complex numbers is: (%.2f) + j(%.2f)\n", Z_3.Re, Z_3.Im);
			break;

		case 2:
			Z_3 = diffComplex(&Z_1, &Z_2);
			printf("\nThe difference of two complex numbers is: (%.2f) + j(%.2f)\n", Z_3.Re, Z_3.Im);
			break;

		case 3:
			Z_3 = multComplex(&Z_1, &Z_2);
			printf("\nThe product of two complex numbers is: (%.2f) + j(%.2f)\n", Z_3.Re, Z_3.Im);
			break;
		
		case 4:
			Z_3 = divComplex(&Z_1, &Z_2);
			printf("\nThe quotient of two complex numbers is: (%.2f) + j(%.2f)\n", Z_3.Re, Z_3.Im);
			break;

		case 5:
			conjComplex(&Z_1, &Z_2);
			break;

		case 6:
			printf("Goodbye!\a");
			exit(0);

		default: 
			printf("Invalid Selection: try again.\n");
			scanf("%d", &choice);
			break;
		}
	}
	return 0;
}

ComplexNum sumComplex(ComplexNum *a, ComplexNum *b) {

	ComplexNum sum;

	sum.Re = (a->Re) + (b->Re);
	sum.Im = (a->Im) + (b->Im);

	return sum;
}

ComplexNum diffComplex(ComplexNum *c, ComplexNum *d) {

	ComplexNum diff;

	diff.Re = (c->Re) - (d->Re);
	diff.Im = (c->Im) - (d->Im);

	return diff;
}

ComplexNum multComplex(ComplexNum *x, ComplexNum *y) {

	ComplexNum mult;

	mult.Re = (((x->Re) * (y->Re)) - ((x->Im)) * ((y->Im)));
	mult.Im = (((x->Re)) * ((y->Im)) + ((x->Im)) * ((y->Re)));

	return mult;
}

ComplexNum divComplex(ComplexNum *w, ComplexNum *z) {

	ComplexNum div;

	div.Re = ( ((w->Re) * (z->Re)) + ((w->Im) * (z->Im)) ) / ( ((z->Re) * (z->Re)) + ((z->Im) * (z->Im)) );
	div.Im = (((w->Im)) * ((z->Re)) - ((w->Re)) * ((z->Im))) / (((z->Re) * (z->Re)) + ((z->Im) * (z->Im)));

	return div;
}

void conjComplex(ComplexNum *p, ComplexNum *q) {
	
	p->Im = -1 * (p->Im);
	q->Im = -1 * (q->Im);

	printf("\nThe conjugate of the first complex number is: %.2f + j(%.2f)\n", p->Re, p->Im);
	printf("\nThe conjugate of the second complex number is: %.2f + j(%.2f)\n", q->Re, q->Im);

}
