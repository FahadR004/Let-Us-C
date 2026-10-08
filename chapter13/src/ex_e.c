#include <stdio.h>
#include <stdlib.h>
#include "ud_e.h"

int main() {
	int arr[SIZE], i, odd_count = 1, even_count = 2, temp;
	
	for (i = 0; i < SIZE; i++) {
		if (i % 2 == 0){
			arr[i] = even_count;
			even_count+=2;
		} else {
			arr[i] = odd_count;
			odd_count+=2;
		}	
	}

	printf("Before interchanging: \n");
	display_arr(arr);

	for (i = 0; i < SIZE; i+=2) {
		temp = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = temp;
	}

	printf("After interchanging: \n");
	display_arr(arr);

	return 0;
}

