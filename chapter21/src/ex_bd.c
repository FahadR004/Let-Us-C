#include <stdio.h>
#include <stdlib.h>

// #define _BV(x) (1 << x)
#define SHIFT(x, y) (x >> y)

int main() {
	int num, flag = 0;
	unsigned char num_c;
	printf("Enter a number: ");
	scanf("%d", &num);
	num_c = num;

	if ( ((SHIFT(num_c, 3)) & 1) == 1) {
		printf("3rd Bit is on!\n");
		flag = 1;
	} 
	if (((SHIFT(num_c, 6)) & 1) == 1) {
		printf("6th Bit is on!\n");
		flag = 1;
	}  
	if (((SHIFT(num_c, 7)) & 1) == 1) {
		printf("7th Bit is on!\n");
		flag = 1;
	} 

	if (!flag) {
		printf("3rd, 6th or 7th bits aren't on!\n");
	}

	return 0;
}