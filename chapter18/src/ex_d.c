#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("%-40s%-20s%10.2f\n", "Discovery of India", "Jawaharlal Nehru", 425.50f);
	printf("%-40s%-20s%10.2f\n", "My Experiments with the Truth", "Mahatma Gandhi", 375.70f);
	printf("%-40s%-20s%10.2f\n", "Sunny Days", "Sunil Gavaskar", 95.50f);
	printf("%-40s%-20s%10.2f\n", "One More Over", "Erapilli Prasana", 95.50f);

	printf("# %-34s= %-13d #\n", "Register1", 10000);
	printf("# %-34s= %-13d #\n", "Reg2", 20000000);
	printf("# %-34s= %-13ld #\n", "Register Number is 3", 3000000000000000000);
	return 0;
}
    