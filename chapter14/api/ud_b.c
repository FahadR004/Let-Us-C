#include <stdio.h>
#include "ud_b.h"

void display_matrix(int *matrix) {
	int i, j;
	printf("Elements of the matrix are: \n");
	for (i = 0; i < ROW_SIZE; i++) {
		for (j = 0; j < COL_SIZE; j++) {
			printf("%d ", *( matrix + i*COL_SIZE + j));
		}
		printf("\n");
	}
}

void show_matrix(int (*mat)[COL_SIZE]) {
	int i, j, *ptr;
	printf("Elements of the matrix are: \n");
	for (i = 0; i < ROW_SIZE; i++) {
		ptr = mat+i;
		for (j = 0; j < COL_SIZE; j++) {
			printf("%d", *(ptr+j));
		}
		printf("\n");
	}
}

int find_max(int (*matrix)[COL_SIZE]) {
	int i, j, max, *ptr;
	max = matrix[0][0];
	for (i = 0; i < ROW_SIZE; i++) {
		ptr = matrix+i;
		for (j = 0; j < COL_SIZE; j++) {
			if (max < *(ptr + j) ) {
				max = *(ptr+j);
			}
		}
	}
	return max;
}