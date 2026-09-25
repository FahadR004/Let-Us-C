#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int iterations = 7;
	float x, res;
	float half_value;

	printf("Enter value of x: ");
	scanf("%f", &x);

	for (int i = 0; i < iterations; i++) {
		half_value = (i == 0) ? 1 : (0.5);
		res = (half_value) * pow( (x-1)/x, i+1 );
		printf("Term %d: %.2f*(((x-1)/x)^%d) = %f\n", i+1, half_value, i+1, res);
	}
	
	return 0;
}