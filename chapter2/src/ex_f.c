#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int temp, w_vel;
	printf("Enter the values of temperature and wind velocity (with spaces): ");
	scanf("%d %d", &temp, &w_vel);

	printf("Calculating wind chill factor: ");
	float wcf = 35.74 + 0.6215*temp + (0.4275*temp - 35.75) * pow(w_vel, 0.16);

	printf("The wind chill factor is: %.2f\n", wcf);	
}
