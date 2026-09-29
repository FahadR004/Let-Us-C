#include <stdio.h>
#include <stdlib.h>

int power(int , int);

int main () {
	int pow, a = 2, b = 4;
	pow = power(a, b);
	printf("Value of %d to the power of %d is %d\n", a, b, pow);
	return 0;
}

int power(int a, int b) {
	int i, res = 1;
	for (i = 0; i < b; i++) {
		res = res * a;
	}
	return res;
}