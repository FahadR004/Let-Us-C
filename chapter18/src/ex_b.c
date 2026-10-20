#include <stdio.h>
#include <stdlib.h>

int getint();

int main() {
	int a;
	a = getint();
	printf("You entered %d\n", a);
	return 0;
}

int getint() {
	char s[30];
	char *endptr; // Pointer to a character pointer and used to store the pointer to the first character after the numeric value
	printf("Enter a number: ");
	scanf("%s", s);
	// return atoi(s);
	return strtol(s, &endptr, 10);
}