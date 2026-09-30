#include <stdio.h>
#include <stdlib.h>

void circular_shift(int *, int *, int *);

int main () {
	int x, y, z;
	x = 5, y = 8, z = 10;
	int *ptr_x = &x, *ptr_y = &y, *ptr_z = &z;
	circular_shift(ptr_x, ptr_y, ptr_z); // right shift
	printf("x: %d, y: %d, z: %d\n", *ptr_x, *ptr_y, *ptr_z);
	return 0;
}

void circular_shift(int *x, int *y, int *z){
	int temp;
	temp = *x;
	*x = *z;
	*z = *y;
	*y = temp;
}
