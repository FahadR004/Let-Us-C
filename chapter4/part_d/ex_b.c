#include <stdio.h> 
#include <stdlib.h>

int main( ) {
	char character;

	printf("Enter any character: ");
	scanf("%c", &character);

	if (character >= 65 && character <= 90)
		printf("It is an uppercase character");
	else if (character >= 97 && character <= 122)
		printf("It is a lowercase character");
	else if (character >= 48 && character <= 57)
		printf("It is a number");
	else if ( (character >= 0 && character <= 47) || ( character >=58 && character <= 64) 
		|| (character >= 91 && character <= 96) || (character >= 123 && character <= 127))
		printf("It is a special character");
	else
		printf("Unknown character");

	return 0;
} 