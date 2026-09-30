#include <stdio.h>
#include <stdlib.h>

int swap(int*, int*);

int main () {
	int i = 3;
	int *j = &i;
	
	printf("Address: %p, %p, %p, %d\n", &i, j, &j, *j);

	int a = 10;
	int b = 20;

	printf("Before Swap: \n");
	printf("Address of a: %p, Address of b: %p\n", &a, &b);
	printf("Value of a: %d, Value of b: %d\n", a, b);

	swap(&a, &b);

	printf("After Swap: \n");
	printf("Address of a: %p, Address of b: %p\n", &a, &b);
	printf("Value of a: %d, Value of b: %d\n", a, b);	
}

int swap(int *a, int *b) {
	int temp;
	printf("In swap:- Values: %d, %d, Addresses: %p, %p\n", *a, *b, a, b);
	temp = *a;
	*a = *b;
	*b = temp;
}