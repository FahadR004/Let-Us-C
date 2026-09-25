#include <stdio.h>
#include <stdlib.h>

int main() {
	float x1, y1;
	float x2, y2;
	float x3, y3;

	printf("Enter all six points separated by spaces: ");
	scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

	printf("We calculate Slope AB and Slope BC");

	float slope_ab = (y2 - y1)/ (x2 - x1);
	float slope_bc = (y3 - y2)/ (x3 - x2);

	printf("SlopeAB: %f, SlopeBC: %f", slope_ab, slope_bc);

	if (slope_ab == slope_bc)
		printf("All three points lie on the same line");
	else
		printf("All three points don't lie on the same line");

	return 0;
}