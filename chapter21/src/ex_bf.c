#include <stdio.h>
#include <stdlib.h>

void showbits(unsigned short n);

int main() {
	unsigned char num;
	printf("Enter a number: ");
	scanf("%c", &num);
	printf("Number before: Dec=%d, Binary: ", num);
	showbits(num);
	num = (num >> 4) | (num << 4); // OR (num << 4) | (num >> 4)
	printf("Number after: Dec=%d, Binary: ", num);
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
