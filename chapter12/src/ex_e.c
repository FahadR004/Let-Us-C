#include <stdio.h>
#include <stdlib.h>
#include "interest.h"

int main() {
	float p_amt = 5000, rate = 5, time = 2;
	printf("Simple Interest is: %f\n", SIMPLE_INTEREST(p_amt, rate, time));

	float sim_int = 500;
	rate = 10, time = 2;
	printf("Principal Amount is: %f\n", PRINCIPAL_AMT(sim_int, rate, time));

	return 0;
}