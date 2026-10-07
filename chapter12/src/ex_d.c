#include <stdio.h>
#include <stdlib.h>

#define GET_MEAN(n1, n2) ((n1+n2)/2.0f) // 2.0 to get value in fp
#define GET_ABS_VAL(n) ((n > 0) ? n : -n) // Or just use abs()
#define LOWER(ch) (ch + 32)
#define IS_BIGGER_NUM(n1, n2) ((n1 > n2) ? n1 : n2) // From ex_a

int main() {
	int num1 = 10, num2 = 20, num3 = -30;
	char ch = 'C';

	printf("Numbers are %d and %d. Mean is: %f\n", num1, num2, GET_MEAN(num1, num2));
	printf("Absolute value of %d is %d\n", num3, GET_ABS_VAL(num3));
	printf("Lowercase of letter %c is %c\n", ch, LOWER(ch));

	return 0;
}