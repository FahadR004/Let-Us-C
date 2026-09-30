#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calc(int, int, int, int, int, int*, int*, float*);

int main () {
	int sum, avg;
	float std_dev;
	int *ptr_s = &sum;
	int *ptr_avg = &avg;
	float *ptr_std = &std_dev;
	int num1, num2, num3, num4, num5;
	num1 = num2 = num3 = 5;
	num4 = num5 = 10;

	calc(num1, num2, num3, num4, num5, ptr_s, ptr_avg, ptr_std);

	printf("Sum: %d, Average: %d, Std. Deviation: %.2f\n", *ptr_s, *ptr_avg, *ptr_std);
	return 0;	
}

void calc(int n1, int n2, int n3, int n4, int n5, int *s, int *a, float *std_d) {
	int dev1, dev2, dev3, dev4, dev5, sum_sq;

	*s = n1 + n2 + n3 + n4 + n5; // Sum
	*a = *s/ 5; // Avg/Mean

	// For standard deviation
	dev1 = n1 - *a;
	dev2 = n2 - *a;
	dev3 = n3 - *a;
	dev4 = n4 - *a;
	dev5 = n5 - *a;

	dev1 = dev1*dev1;
	dev2 = dev2*dev2;
	dev3 = dev3*dev3;
	dev4 = dev4*dev4;
	dev5 = dev5*dev5;

	sum_sq = dev1+dev2+dev3+dev4+dev5;

	*std_d = sqrt(sum_sq/(5-1));
}