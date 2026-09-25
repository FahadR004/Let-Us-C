#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, fact = 1, user_input;
	printf("Enter a number: ");
	scanf("%d", &n);

	if (n < 0) {
		printf("Value cannot be negative!\n");
	  	return 1;
	}

	user_input = n;

	while (n > 0) {
		fact = fact*n;
		n--;
	}

	printf("The factorial of %d is %d\n", user_input, fact);
	
	return 0;
}