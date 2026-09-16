#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	float l1, g1, l2, g2;	
	
	printf("Enter latitude and longitude of city1 in degrees (with spaces)");
	scanf("%f %f", &l1, &g1);

	printf("Enter latitude and longitude of city2 in degrees (with spaces)");
	scanf("%f %f", &l2, &g2);

	float sin_val = sin(l1) * sin(l2); // automatically converted to double
	float cos_val = cos(l1) * cos(l2);
        float cos_val_g = cos(g2 - g1);
	float inv_val = sin_val + cos_val * cos_val_g;
	float distance = 3963 * acos(inv_val);

	printf("The distance in nautical miles between city 1 and 2 is: %f miles \n", distance);


}
