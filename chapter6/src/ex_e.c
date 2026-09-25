#include <stdio.h>
#include <stdlib.h>

int main() {
	int p_amt = 6000;
	float alt_prcnt = 0.09; // 9%
	int alt_invst = p_amt*alt_prcnt;
	int earning_per_year = 1000;
	int year_count = 1;

	while (earning_per_year < alt_invst)
		year_count++;

	printf("Minimum number of years required: %d\n", year_count);

	return 0;
}