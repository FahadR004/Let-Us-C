#include <stdio.h>
#include <stdlib.h>

int calc_fact(int);

int main() {
	int fact, num = 4;
	fact = calc_fact(num);
	printf("Factorial of %d is %d\n", num, fact);
	return 0;
}

int calc_fact(int n) {
	int i, fact = 1;
	for (int i = 1; i <= n; i++) {
		fact = fact*i;
	}
	return fact;
}