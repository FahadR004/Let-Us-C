#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	int side1, side2, side3;
	printf("Enter all three sides of a triangle (with spaces): ");
	scanf("%d %d %d", &side1, &side2, &side3);
	
	float s = (side1 + side2 + side3) / 2;
	float area = sqrt( s * (s-side1) * (s-side2) * (s-side3) );

	printf("The area of the triangle calculated using Heron's Formula %f\n", area);
	
}
