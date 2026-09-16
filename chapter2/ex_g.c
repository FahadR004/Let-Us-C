#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float angle;
	printf("Enter the value of angle: ");
	scanf("%f", &angle);

	printf("Cos(%f): %f, Sin(%f): %f, Tan(%f): %f\n", angle, cos(angle), angle, sin(angle), angle, tan(angle));

}
