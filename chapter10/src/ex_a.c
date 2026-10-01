#include <stdio.h>
#include <stdlib.h>

int get_sum(int);

int main () {
	int num, sum;
	printf("Enter a five digit number: ");
	scanf("%d", &num);
	printf("Sum = %d\n", get_sum(num));

	return 0;
}

// Recursive
// int get_sum(int num) {
// 	int sum = 0, digit;
// 	if (num == 0)
// 		return num;
// 	else {
// 		digit = num % 10;
// 		sum = digit + get_sum(num/10);
// 	}
// 	return sum;
// }

// Recursive (Optimal)
// int get_sum(int num) {
// 	int sum = 0;
// 	if (num == 0)
// 		return num;
// 	else 
// 		return (num % 10) + get_sum(num/10);
// 	return sum;
// }


// Non-recursive
int get_sum(int num) {
	int sum = 0, digit;
	while (num != 0) {
		digit = num % 10;
		sum += digit;
		num = num / 10;
	}
	return sum;
}


// Non-recursive (Optimal)
// int get_sum(int num) {
// 	int sum = 0;
// 	while (num != 0) {
// 		sum += num % 10;
// 		num = num / 10;
// 	}
// 	return sum;
// }