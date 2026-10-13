#include <stdio.h>
#include <stdlib.h>

int validate_credit_card(char *s);

int main() {
	char cc[16]; 
	int result;
	
	printf("Enter credit card number: ");
	scanf("%s", cc);
	result = validate_credit_card(cc);

	if (result) 
		printf("Credit Card Number is valid\n");
	else 
		printf("Credit Card Number is not valid\n");

	return 0;
}

