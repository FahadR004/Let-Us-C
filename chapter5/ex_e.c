#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int sum = 0, n = 1;

	while (n <= 500) {
		int temp = n;
		int digit;
		while (temp != 0) {
			digit = temp % 10;
			sum += pow(digit, 3.0);
			temp = temp/10;
		}
		if (sum == n) 
			printf("%d is an Armstrong number\n", n);
		sum = 0;
		n++;
	}


	return 0;
}