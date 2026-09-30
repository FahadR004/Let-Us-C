#include <stdio.h>
#include <stdlib.h>

void calc(int, int, int, float*, float*);

int main () {
	int marks1, marks2, marks3;
	marks1 = 87;
	marks2 = 91;
	marks3 = 83;
	float average, percentage;
	float *ptr_avg = &average, *ptr_prcnt = &percentage;

	calc(marks1, marks2, marks3, ptr_avg, ptr_prcnt);

	printf("Average: %.2f, Percentage: %.2f\n", *ptr_avg, *ptr_prcnt);

	return 0;
}

void calc(int marks1, int marks2, int marks3, float* avg, float* percentage) {
	*avg = (marks1 + marks2 + marks3)/3;
	*percentage = ((marks1 + marks2 + marks3)/300.0)*100; // Division by float converts to float
}

