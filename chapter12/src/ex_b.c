#include <stdio.h> 
#include <stdlib.h>

#define IS_LOWERCASE(ch) (ch >= 'a' && ch <= 'z')
#define IS_UPPERCASE(ch) (ch >= 'A' && ch <= 'Z')
#define IS_ALPHABET(ch) (IS_LOWERCASE(ch) || IS_UPPERCASE(ch))
#define IS_BIGGER_NUM(n1, n2) ((n1 > n2) ? n1 : n2)

int main() {
	char ch1 = 'A';
	char ch2 = '1';
	char ch3 = 'a';

	printf("Test: %d %d %d \n", IS_UPPERCASE(ch1), IS_LOWERCASE(ch2), IS_ALPHABET(ch3));
	printf("The bigger number between %d and %d is: %d\n", 10, 20, IS_BIGGER_NUM(10, 20));
	return 0;
}