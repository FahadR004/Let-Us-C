#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main( ) {
	int side1, side2, side3, h_sq, b_p_sq;
	printf("Enter the three sides of a triangle in descending order (with spaces): ");
	scanf("%d %d %d", &side1, &side2, &side3);

	if (side1 == side2 && side2 == side3)
		printf("Triangle is equilateral.\n");
	else if ((side1 == side2) || (side2 == side3) || (side1 == side3))
		printf("Triangle is isosceles\n");
	else
		printf("Triangle is scalene.\n");

	h_sq = pow(side1, 2.0);
	b_p_sq = pow(side2, 2.0) + pow(side3, 2.0);
	if (h_sq == b_p_sq)
		printf("Triangle is also a right-angle triangle.\n");

	return 0;
} 