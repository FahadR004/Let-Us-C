#include <stdlib.h>
#include <stdio.h>

int main() {
	float temp_f;
	printf("Enter temp of city in Fahrentheit: ");
	scanf("%f", &temp_f);

	float temp_c = (temp_f - 32)/1.8;
	printf("Temp in Celsius is: %f\n", temp_c);
}
