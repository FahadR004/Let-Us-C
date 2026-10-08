#include <stdio.h>
#include <stdlib.h>
#include "ud_ic.h"

int main() {
	int i, arr[SIZE], *ptr_arr, *min;
	ptr_arr = min = arr;
	for (i = 0; i < SIZE; i++) {
		printf("Enter element %d of array:", i+1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < SIZE; i++) {
		if (*(ptr_arr) < *min) {
			min = ptr_arr;
		}
		ptr_arr++;
	}

	printf("Smallest element in array is:  %d\n", *min);
	
	return 0;
}
