#include <stdio.h>
#include <stdlib.h>

void running_sum(int *, int);

int main() {
	int limit = 5, sum = 1;
	printf("Running sum of first %d natural numbers is: ", limit);
	running_sum(&sum, limit);	
	printf("%d ", sum);
	printf("\n");	
	return 0;
}

void running_sum(int *sum, int limit) {
	if (limit == 1) 
		return;
	else {
		*sum = *sum + (limit);
		limit--;
		running_sum(sum, limit); 
	}
}

// Using pointers for this purpose is slower as CPU reads and writes to RAM
// void running_sum(int *sum, int limit) {
// 	int i;
// 	for (i = 2; i <= limit; i++) {
// 		*sum += i;
// 	}
// }
