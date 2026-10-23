#include <stdio.h>
#include <stdlib.h>

void showbits(unsigned short n);

int main() {
	int i, temp;
	unsigned char num;
	printf("Enter a number: ");
	scanf("%d", &temp);
	num = temp;
	printf("Number before odd bits set to 1: Dec=%d, Binary: ", num);
	showbits(num);
	// for (i = 0; i < 8; i++) {
	// 	if (i % 2 != 0) {
	// 		num |= (1 << i);
	// 	}
	// }
	num |= 0xAA; // Since, total bits are fixed
	printf("Number after odd bits set to 1: Dec=%d, Binary: ", num);
	showbits(num);	
	return 0;
}

void showbits(unsigned short n) {
	int i;
	unsigned short k, andmask;
	for (i = 7; i >= 0; i--) {
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
