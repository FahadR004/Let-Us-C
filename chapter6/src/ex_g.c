#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float p, r, n, q, a;

	for (int i = 0; i < 10; i++) {
		printf("Enter values of p, r, n and q (with spaces): ");
		scanf("%f %f %f %f", &p, &r, &n, &q);
		a = pow((p*(1 + r/q)), n*q);	
		printf("Value of a = (p*(1 + r/q))^nq = %f\n", a);
	}

	return 0;
}