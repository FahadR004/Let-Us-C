#include <stdio.h>
#include <stdlib.h>
#include "ud_ia.h"

void display_arr(int *arr) {
	int i;
	printf("Elements of the array are: ");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}