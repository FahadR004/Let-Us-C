#include <stdio.h>
#include <stdlib.h>
#include "ud_id.h"

int main() {
	int arr[SIZE], i;

	for (i = 0; i < SIZE; i++) {
		arr[i] = i;
	} 

	printf("Before modify: \n");
	display_arr(arr);

	modify(arr);

	printf("After modify: \n");
	display_arr(arr);
}