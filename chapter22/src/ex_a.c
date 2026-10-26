#include <stdio.h>
#include <stdlib.h>

float func1(int n1, int n2);
float func2(int n1, int n2);
float func3(int n1, int n2);
float func4(int n1, int n2);

int main()  {
	int i;

	float (*arr[4]) (int, int); // array declaration

	// 4 function pointers
	float (*func_ptr1)(int, int);
	float (*func_ptr2)(int, int);
	float (*func_ptr3)(int, int);
	float (*func_ptr4)(int, int);

	// Pointer assignment 
	func_ptr1 = func1;
	func_ptr2 = func2;
	func_ptr3 = func3;
	func_ptr4 = func4;

	// Array assignment
	arr[0] = func_ptr1;
	arr[1] = func_ptr2;
	arr[2] = func_ptr3;
	arr[3] = func_ptr4;

	for (i = 0; i < 4; i++) { // Function Calls in a loop
		arr[i](i, i+1);
	}
	return 0;
}

float func1(int n1, int n2) {
	float f = n1+n2;
	printf("This is function 1, printing values: \n");
	printf("int n1 = %d, int n2 = %d\n", n1, n2);
	printf("Result of addition in float: %f\n", f);
	return f;
}

float func2(int n1, int n2) {
	float f = n1+n2;
	printf("This is function 2, printing values: \n");
	printf("int n1 = %d, int n2 = %d\n", n1, n2);
	printf("Result of addition in float: %f\n", f);
	return f;
}

float func3(int n1, int n2) {
	float f = n1+n2;
	printf("This is function 3, printing values: \n");
	printf("int n1 = %d, int n2 = %d\n", n1, n2);
	printf("Result of addition in float: %f\n", f);
	return f;
}

float func4(int n1, int n2) {
	float f = n1+n2;
	printf("This is function 4, printing values: \n");
	printf("int n1 = %d, int n2 = %d\n", n1, n2);
	printf("Result of addition in float: %f\n", f);
	return f;
}