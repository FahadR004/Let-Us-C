#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ud_f.h"

int main() {
	char isbn[10];
	int result;
	printf("Enter a 10-digit ISBN: ");
	scanf("%s", isbn);
	result = get_checksum(isbn);
	
	if (result) 
		printf("ISBN is valid\n");
	else 
		printf("ISBN is not valid\n");


	return 0;
}
