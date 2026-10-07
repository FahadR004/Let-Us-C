#include <stdio.h>
#include <stdlib.h>
#include "areaperi.h"

int main() {
	int sq_side;
	float tri_b, tri_h, radius;
	
	printf("Enter one side of a square: ");
	scanf("%d", &sq_side);

	printf("Enter the base and height of a triangle: ");
	scanf("%f %f", &tri_b, &tri_h);

	printf("Enter the radius of a circle: ");
	scanf("%f", &radius);

	printf("Area of Square: %d \n", AREA_SQ(sq_side));
	printf("Area of Triangle: %.2f \n", AREA_TRI(tri_b, tri_h));
	printf("Area of Circle: %.2f \n", AREA_CIRC(radius));

	return 0;
}