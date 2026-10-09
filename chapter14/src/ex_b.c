#include <stdio.h>
#include <stdlib.h>
#include "ud_b.h"

int main() {

	int matrix [ROW_SIZE][COL_SIZE] = {
		1,1, 4,2 
	};
	show_matrix(matrix);
	int max_val = find_max(matrix);
	printf("\nMaximum Value in array is %d\n", max_val); 

	return 0;
}





