#include <stdlib.h>
#include <stdio.h>

int main() {
	const float PI = 3.14;
	float length, breadth, radius;

	printf("Enter the length and breadth of a rectangle (with spaces): ");
	scanf("%f %f", &length, &breadth);

	printf("Enter the radius of a circle: ");
	scanf("%f", &radius);

	float area = length * breadth;
	float perimeter = 2*(length + breadth);
	float area_c = PI*radius*radius; // Could also use pow()
	float circumference = 2*PI*radius;

	printf("Rectangle Area: %f, Rectangle Perimeter %f\n", area, perimeter);
	printf("Circle Area: %f, Circle Circumference: %f\n", area_c, circumference);
}
