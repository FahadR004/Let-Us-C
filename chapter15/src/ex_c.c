#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ud_c.h"

int main () {
	char str1[20] = "Working with strings", str2[20];
	int char_num, position;
	printf("Enter number of characters to be extracted and from which position (separated by spaces): ");
	scanf("%d %d", &char_num, &position);
	extract_string(str1, str2, char_num, position);
	printf("The extracted string is: %s\n", str2);
	return 0;
}

