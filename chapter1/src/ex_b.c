#include <stdlib.h>
#include <stdio.h>

int main() {
	float distance, meters, feet, inches, centimeters;

	printf("Enter distance between two cities (in km): ");
	scanf("%f", &distance);
	
	meters = distance * 1000;
	feet = distance * 3280.8399;
	inches = distance * 39370.0787;
	centimeters = distance * 100000;

	printf("Distance in meters: %f; in feet: %f; in inches: %f; in cm: %f\n", meters, feet, inches, centimeters);
	
}
