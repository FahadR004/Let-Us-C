#include <stdio.h>
#include <stdlib.h>

int main() {
	int length, breadth;
	printf("Enter the length and breadth of a rectangle: ");
	scanf("%d %d", &length, &breadth);

	int area = length*breadth;
	int perimeter = 2* (length+breadth);

	if (area > perimeter)
		printf("Area is greater than perimeter");
	else 
		printf("Area is not greater than perimeter");

	return 0;

}