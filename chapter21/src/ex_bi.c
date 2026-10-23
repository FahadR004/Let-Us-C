#include <stdio.h>
#include <stdlib.h>

#define SHIFT(x, y) (x >> y)

void showbits(unsigned short n);

int main() {
	int i, temp;
	unsigned char num;
	printf("Enter a number: ");
	scanf("%d", &temp);
	num = temp;
	printf("Number before: Dec=%d, Binary: ", num);
	showbits(num);
	if (!(SHIFT(num, 3) & 1)) {
		num ^= (1 << 3);
	} else if (!(SHIFT(num, 5) & 1)) {
		num ^= (1 << 5);
	}
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
