#include <stdio.h>
#include <stdlib.h>
#include "ud_ib.h"

int main () {
	int i, arr[SIZE];

	printf("For array of size %d, ", SIZE);
	for (i = 0; i < SIZE; i++) {
		printf("Enter element %d of array:", i+1);
		scanf("%d", &arr[i]);
	}

	display_arr(arr);

	for (i = 0; i < (SIZE/2); i++) {
		if (arr[i] == arr[SIZE-i-1]) {
			printf("Element at %d and %d - %d = %d are the same\n", i, SIZE, i+1, SIZE-i-1);
		}
	}

	return 0;
}