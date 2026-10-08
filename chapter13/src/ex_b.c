#include <stdio.h>
#include <stdlib.h>
#include "ud_b.h"

void selection_sort(int *arr);
void bubble_sort(int *arr);
void insertion_sort(int *arr);
void display_arr(int *arr);

int main () {
	int arr[SIZE] = {22, 25, 12, 23, 11}; // Make sure initialization matches size
	int user_input;
	printf("Enter the sorting algorithm for array to sort on: \n");
	printf("1) Selection Sort\n");
	printf("2) Bubble Sort\n");
	printf("3) Insertion Sort\n");
	scanf("%d", &user_input);

	if (user_input < 1 || user_input > 3) {
		printf("ERROR: Invalid input!\n");
		return 1;
	}

	printf("Before %s sort: \n", (user_input == 1) ? "selection" : (user_input == 2) ? "bubble" : "insertion");
	display_arr(arr);

	if (user_input == 1) {		
		selection_sort(arr);
	} else if (user_input == 2) {
		bubble_sort(arr);
	} else {	
		insertion_sort(arr);
	} 

	printf("After %s sort: \n", (user_input == 1) ? "selection" : (user_input == 2) ? "bubble" : "insertion");
	display_arr(arr);

	return 0;
}

// Incorrect selection sort
// void selection_sort(int *arr) {
// 	int i, j, *ptr1, *ptr2, *min_ptr, temp;
// 	for (i = 0; i < SIZE - 1; i++) {
// 		ptr1 = arr+i;
// 		for (j = i; j < SIZE - 1; j++) {
// 			ptr2 = arr + j + 1;
// 			if (*ptr2 < *ptr1){ 
// 				temp = *ptr1;
// 				*ptr1 = *ptr2;
// 				*ptr2 = temp;
// 			}
// 		}
// 	}
// }

void selection_sort(int *arr) {
	int i, j, min_ptr, temp;
	for (i = 0; i < SIZE - 1; i++) {
		min_ptr = i;
		for (j = i + 1; j < SIZE; j++){
			if (arr[j] < arr[min_ptr])
				min_ptr = j;
		}
		if (min_ptr != i) {
			temp = arr[i];
			arr[i] = arr[min_ptr];
			arr[min_ptr] = temp;
		}
	}
}

// Pointer Variant
// void selection_sort(int *arr) {
// 	int i, j, *ptr, *min_ptr, temp;
// 	for (i = 0; i < SIZE - 1; i++) {
// 		min_ptr = (arr+i);
// 		for (j = i + 1; j < SIZE; j++) {
// 			ptr = (arr+j);
// 			if (*ptr < *min_ptr) 
// 				// min_ptr = (arr+j);
// 				min_ptr = ptr; // Copying the address in pointer to min_ptr
// 		}
// 		// if (*min_ptr != *(arr+i)) { 
// 		if (min_ptr != (arr+i)) { // Check lowest address is same; don't compare value
// 			temp = *(arr+i);
// 			*(arr+i) = *min_ptr;
// 			*min_ptr = temp;
// 		}
// 	}
// }

void bubble_sort(int *arr) {
	int i, j, k, temp;
	for (i = 0; i < SIZE - 1; i++) {
		for (j = 0; j < SIZE - i - 1; j++) {
			k = j + 1;
			if (arr[j] > arr[k]) {
				temp = arr[k];
				arr[k] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void insertion_sort(int *arr) {
	int i, j, key;
	for (i = 1; i < SIZE; i++) {
		key = arr[i]; // 33
		j = i - 1; // 44
		// arr[0(j)] = 44, arr[1(i)] = key = 33
		while (j >= 0 && arr[j] > key) { // 44 > 33
			arr[j+1] = arr[j]; // arr[1] = 44 => {44, 44,.....}
			j--;
		}
		arr[j+1] = key; // arr[-1+1] = 33
	}
}

