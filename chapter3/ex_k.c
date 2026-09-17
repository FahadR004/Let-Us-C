#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x, y, cx, cy, radius;
	printf("Enter x & y coordinates of the center of a circle, separated by radius: ");
	scanf("%d %d %d", &cx, &cy, &radius);
	
	printf("Enter x & y coordinates of a point: ");
	scanf("%d %d",&x, &y);
	// Equation: (x-cx)^2 + (y-cy)^2 = r^2
	float eq_lhs = pow(x-cx, 2.0) + pow(y-cy, 2.0);
	float eq_rhs = 	pow(radius, 2.0);

	if (eq_lhs == eq_rhs)
		printf("Point lies on the circle");
	else if (eq_lhs < eq_rhs)
		printf("Point lies inside the circle");
	else
		printf("Point lies outside the circle");

	return 0;
}