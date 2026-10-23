#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _BV(x) (1 << x)

int checkbits(unsigned int x, int p, int n); // x is number, p is starting index, n is total bits
void showbits(unsigned int n);

int main() {
	int status, position, num_bits;
	unsigned int num;

	printf("Enter number, starting position and the number of bits: ");
	scanf("%u %d %d", &num, &position, &num_bits);

	if (num_bits == 0) {
		printf("ERROR: Number of bits to check cannot be zero\n");
		return 1;
	}

	status = checkbits(num, position, num_bits);

	if (!status) {
		printf("Bits from position %d till %d are all ones!\n", position, position + num_bits);
	} else {
		printf("Bits from position %d till %d are not all ones!\n", position, position + num_bits);
	}

	return 0;
}

// int checkbits(unsigned int x, int p, int n) {
// 	int i = 0, flag = 1;
// 	x >>= p;
// 	while (i < n) {
// 		if (((x & 1) == 0) ){
// 			return 1;
// 		}
// 		x >>= 1;
// 		i++;
// 	}
// 	return 0;
// }

int checkbits(unsigned int x, int p, int n) {
	int i;
	unsigned int mask = pow(2, n) - 1;
	// printf("mask %d   ", mask);
	// showbits(mask);
	// printf("x: ");
	// showbits(x);
	x >>= p;
	if ((x & mask) == mask) {
		return 0;
	} else {
		return 1;
	}
	// for (i = 0; i < n; i++) {
	// 	if (((x & 1) == 0) ){
	// 		return 1;
	// 	}
	// 	x >>= 1;
	// }
	// return 0;
}


void showbits(unsigned int n) {
	int i;
	unsigned int k, andmask;
	for (i = 31; i >= 0; i--) {
		andmask = 1 << i;
		k = n & andmask;
		if (i % 4 == 0 && i != 0) {
			(k == 0) ? printf("0_") : printf("1_");
		} else {
			(k == 0) ? printf("0") : printf("1");
		}
	}
	printf("\n");
}