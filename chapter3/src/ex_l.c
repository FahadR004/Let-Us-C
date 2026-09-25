#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int x, y;
	printf("Enter x & y coordinates of a point: ");
	scanf("%d %d",&x, &y);

	if (x == 0)
		printf("Point lies on the y-axis");
	else if (y == 0)
		printf("Point lies on the x-axis");
	else if (x == 0 && y == 0)
		printf("Point lies on the origin");
	else 
		printf("Point is neither on x-axis, y-axis or the origin");

	return 0;
}