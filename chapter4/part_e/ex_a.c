#include <stdio.h>
#include <stdlib.h>

int main() {
	char character;

	printf("Enter a character: ");
	scanf("%c", &character);

	(character >= 97 && character <= 122) ? printf("Character is lowercase!\n") 
	: ( (!(character >= 65 && character <= 90)) && (!(character >= 48 && character <= 57))) 
		? printf("Character is special character!\n") : printf("Character is not special\n");

	return 0;

}