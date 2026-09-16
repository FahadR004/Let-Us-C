#include <stdlib.h>
#include <stdio.h>

int main() {
	int dim1 = 1189; // long side
	int dim2 = 841; // shorter side
	int temp;
	printf("Dimension of A0 is: %d mm x %d mm \n", dim1, dim2);
	for (int i = 1; i < 9; i++) {
		temp = dim2;
		dim2 = dim1/2;
		dim1 = temp;
		printf("Dimension of A%d is: %d mm x %d mm \n", i, dim1, dim2);
	}
}
