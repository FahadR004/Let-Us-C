#include <stdio.h>
#include <stdlib.h>
#include "ud_ia.h"

int main () {
	int arr1[SIZE], arr2[SIZE], i;

	for (i = 0; i < SIZE; i++) {
		printf("Enter element %d of array:", i+1);
		scanf("%d", &arr1[i]);
	}

	display_arr(arr1);

	printf("Placing elements in arr2 in reverse order: \n");
	for (i = SIZE -1 ; i >= 0; i--) {
		arr2[SIZE-i-1] = arr1[i];
	}
	display_arr(arr2);
	return 0;
}
