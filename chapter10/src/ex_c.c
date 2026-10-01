#include <stdio.h>
#include <stdlib.h>

void get_fibonacci_seq(int , int, int);

int main() {
	int a = 1, b = 1;
	int no_of_terms = 5;
	printf("Fibonacci Sequence: %d %d ", a, b);
	// printf("Fibonacci Sequence: ");
	// get_fibonacci_seq(a, b, no_of_terms-1);
	get_fibonacci_seq(a, b, no_of_terms	);
	printf("\n");
}

// Recursive
void get_fibonacci_seq(int a, int b, int no_of_terms) {
	int temp;
	if (no_of_terms <= 0) 	
		return;
	else  {
		temp = a;
		a = b;
		b = temp + a;
		printf("%d ", b);
		no_of_terms--;
		get_fibonacci_seq(a, b, no_of_terms);
	}
}

// Recursive (Optimized)
// void get_fibonacci_seq(int a, int b, int no_of_terms) {
// 	if (no_of_terms <= 0)
// 		return;
// 	else {
// 		printf("%d ", a);
// 		get_fibonacci_seq(b, a+b, --no_of_terms);
// 	}
// }

// Non-recursive
// void get_fibonacci_seq(int a, int b, int no_of_terms) {
// 	int i, temp;
// 	for (i = 1; i <= no_of_terms; i++) {
// 		temp = a;
// 		a = b;
// 		b = temp + a;
// 		printf("%d ", b);
// 	}
// }

// Non-recursive
// void get_fibonacci_seq(int a, int b, int no_of_terms) {
// 	for (int i = 1; i <= no_of_terms; i++) {
// 		int temp = a;
// 		a = b;
// 		b = temp + a;
// 		printf("%d ", b);
// 	}
// }