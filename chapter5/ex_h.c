#include <stdio.h>
#include <stdlib.h>

int main () {
	int num, remainder, count = 1, octal = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	// Best way to do this if simply finding equivalent and printing
	// printf("Octal equivalent: %o\n", num);

	// Second way
	// int num, temp, rev = 0, octal = 0; // For first loop
	// while (temp != 0) {
	// 	rev = rev*10 + temp % 8;
	// 	temp = temp/8;
	// }

	// while (rev != 0) {
	// 	octal = octal*10 + rev%10;
	// 	rev = rev/10;
	// }
	// octal = (num == 8 || num == 9) ? (octal+10) : (octal);

	// Best 
	while (num != 0) {
		remainder = num % 8;
		octal += remainder*count;
		count *= 10;
		num = num/8;
	}

	printf("Octal equivalent: %d\n", octal);
}