#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calc_area(int, int, int, float *);

int main () {
	int a, b, c;
	float area;
	float *ptr_area = &area;
	a = 30, b = 20, c = 30;
	calc_area(a, b, c, ptr_area);
	printf("Area of triangle is %.2f\n", *ptr_area)	;
	return 0;
}

int calc_area(int a, int b, int c, float* area) {
	float S;
	S = (a + b + c)/(2.0);
	*area = sqrt(S*(S-a)*(S-b)*(S-c));
}