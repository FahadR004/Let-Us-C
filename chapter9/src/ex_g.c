#include <stdio.h>
#include <stdlib.h>

int get_GCD(int J, int K, int *ans);

int main() {
	int J = 320;
	int K = 132;
	int ans;
	int *ptr_ans = &ans;
	
	get_GCD(J, K, ptr_ans);
	printf("the greatest common divisor is: %d\n", *ptr_ans);

	return 0;
}

int get_GCD(int J, int K, int *ans) {
	int remainder = 1;
	printf("For two numbers, %d and %d ", J, K);
	while (remainder != 0) {
		remainder = J % K;
		J = K;
		K = remainder;
	}
	*ans = J;
}

// Using recursion
// int findGCD(int a, int b) {
//     if (a == 0)
//         return b;
//     return findGCD(b % a, a);
// }

// int main() { 
//     int a = 35, b = 15;
//     int g = findGCD(a, b); 
//     printf("%d\n", g);
//     return 0; 
// }