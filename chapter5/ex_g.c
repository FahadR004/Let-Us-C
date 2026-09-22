#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	int num, pos_count, neg_count, zero_count;
	num = pos_count = neg_count = zero_count = 0;
	while (true) {
		printf("Enter a number (type anything else to stop): ");
		if (scanf("%d", &num) == 1) {
			(num > 0) ? pos_count++ : (num < 0) ? neg_count++ : (zero_count++);
			printf("Number entered correctly!\n");
			printf("Please type another number...\n");
		} else {
			printf("Exiting...\n");
			break;			
		}
	}
	printf("Positive Count: %d, Negative Count: %d, Zero Count: %d\n", pos_count, neg_count, zero_count);
}	