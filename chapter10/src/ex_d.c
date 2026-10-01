#include <stdio.h>
#include <stdlib.h>

void get_binary_num(int);

int main() {
	int num = 8;
	printf("Binary equivalent of %d is: ", num);
	get_binary_num(num);
	printf("\n");
	return 0;
}

// Recursive 
void get_binary_num(int num) {
	int remainder;
	if (num == 0) {
		return;
	} else {
		remainder = num % 2;
		num = num / 2;
		get_binary_num(num);
		printf("%d ", remainder);
	}
}

// Recursive (Optimized)
// void get_binary_num(int num) {
// 	if (num == 0) 
// 		return;
// 	else {
// 		get_binary_num(num >> 1);
// 		printf("%d ", num & 1);
// 	}
// }

// Non-recursive
// void get_binary_num(int num) {
// 	if (num == 0) {
// 		printf("0");
// 		return;
// 	}
// 	int flag = 0; // The purpose of the flag is to ignore the leading zeroes
// 	// Once the first one is found, flag is turned 1 and every bit 1 or 0 will be printed
// 	// sizeof(int) = 4 (bytes) * 8 = 32 - 1 = 31 => Loop goes from 31 - 0
// 	for (int i = (sizeof(int) * 8) - 1; i>=0;i++) {
// 		int bit = (num >> i) & 1;

// 		if (bit == 1) {
// 			flag = 1;
// 		} 

// 		if (flag) {
// 			printf("%d", bit);
// 		}
// 	}
// }