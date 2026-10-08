#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ud_c.h"

// Sieve of Erasthothenes
int main () {
	int arr[SIZE], i, index = 1, num;
	for (i = 1; i <= SIZE; i++) {
		arr[i-1] = i;
	}
	printf("Before: \n");
	display_arr(arr);
	num = arr[index];
	while (index < sqrt(SIZE)) {
		// For zeroing out elements
		for (int j = index+1; j < SIZE; j++) {
			if (arr[j] % num == 0){
				arr[j] = 0;
			}
		}
		// Counting to the next non-zero element
		index++;
		while (arr[index] == 0 && index < sqrt(SIZE)) {
			index++;
		}
		num = arr[index];
	}
	printf("After: \n");
	display_arr(arr);
	return 0;
}