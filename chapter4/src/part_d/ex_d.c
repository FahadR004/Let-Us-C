#include <stdio.h> 
#include <stdlib.h>

int main( ) {
	int side1, side2, side3;
	printf("Enter the three sides of a triangle (with spaces): ");
	scanf("%d %d %d", &side1, &side2, &side3);

	int max_side;

	if (side1 > side2 && side1 > side3)
		max_side = 1;
	else if (side2 > side1 && side2 > side3)
		max_side = 2;		   
	else
		max_side = 3;

	if (max_side == 1) {
		if (side1 < (side2+side3)) {
			printf("Max side is side%d: %d\n", max_side, side1);
			printf("Triangle is valid\n");			
		} else {
			printf("Triangle is invalid\n");
		}
	} else if (max_side == 2) {
		if (side2 < (side1+side3)) {
			printf("Max side is side%d: %d\n", max_side, side2);
			printf("Triangle is valid\n");			
		} else {
			printf("Triangle is invalid\n");
		}
	} else {
		if (side3 > (side1+side2)) {
			printf("Max side is side%d: %d\n", max_side, side3);
			printf("Triangle is valid\n");			
		} else {
			printf("Triangle is invalid\n");
		}

	}

	return 0;
} 