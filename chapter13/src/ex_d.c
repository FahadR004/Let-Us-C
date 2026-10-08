#include <stdio.h>
#include <stdlib.h>
#include "ud_d.h"

int main() {
	int arr[SIZE], i, p_count = 0, n_count = 0, zero_count = 0;
	for (i = 0; i < SIZE; i++){
		printf("Enter %dth element of the array: ", i);
		scanf("%d", &arr[i]);
		if (arr[i] < 0) 
			n_count++;
		else if (arr[i] > 0)
			p_count++;
		else 
			zero_count++;
	}

	printf("Positive Numbers entered: %d\n", p_count);
	printf("Negative Numbers entered: %d\n", n_count);
	printf("Zeroes entered: %d\n", zero_count);

	return 0;
}