#include <stdio.h>
#include <stdlib.h>
#include "ud_id.h"

void display_arr(int *arr) {
	int i;
	printf("Elements of the array are: ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int modify(int *arr) {
	int i;
	for (i = 0; i < SIZE; i++) {
		arr[i] = arr[i]*3;
	}
}