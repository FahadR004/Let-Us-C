#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int find_maclaurin_series_values(float, int, float *);

int get_factorial(int);

int main () {
	float sum = 0;
	float *ptr_sum = &sum;
	int x = 3;
	int num_terms = 6;
	find_maclaurin_series_values(x, num_terms, ptr_sum);
	printf("Value of Sin(%d) Using Maclaurins Series is: %f\n", x, *ptr_sum);
	return 0;
}

int find_maclaurin_series_values(float x, int num_terms, float *sum) {
	int i;
	float pow_x, fact;
	int power = 1; // value of power and whose factorial is being taken is same
	for (i = 1; i <= num_terms; i++) {
		pow_x = pow(x, power);
		fact = get_factorial(power);
		// printf("DEBUG: pow_x=%f, power=%d, fact=%f\n", pow_x, power, fact);
		if (i % 2 != 0)
			*sum += pow_x/fact;
		else
			*sum -= pow_x/fact;
		// printf("DEBUG: sum=%f\n", *sum);
		power+=2;
	}
}

int get_factorial(int num) {
	int i, fact = 1; 
	for (i = 1; i <= num; i++) {
		fact = fact*i;
	}
	return fact;
}
