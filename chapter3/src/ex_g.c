#include <stdio.h>
#include <stdlib.h>

int main() {
	int angle1, angle2, angle3;
	printf("Enter the three angles of a triangle: \n");
	scanf("%d %d %d", &angle1, &angle2, &angle3);

	int sum =  angle1 + angle2 + angle3;
	if ( sum != 180)
		printf("Triangle is invalid having angle sum equal to %d", sum);
	else 
		printf("Triangle is valid having angle sum equal to %d", sum);

	return 0;
}