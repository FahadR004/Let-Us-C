#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main () {
	int arr[SIZE], i, num, count = 0;
	// int *ptr_arr = arr;	
	for (i = 0; i < SIZE; i++){
		printf("Enter element %d of the array: ", i);
		scanf("%d", &arr[i]);
	}

	printf("Enter the number to be searched in the array: ");
	scanf("%d", &num);

	for (i = 0; i < SIZE; i++) {
		if (arr[i] == num) 
			count++;
	}

	if (count)
		printf("The number %d is present in the array %d times\n", num, count);
	else 
		printf("The number %d is not present in the array\n", num);

	return 0;
}