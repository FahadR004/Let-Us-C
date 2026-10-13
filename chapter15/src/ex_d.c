#include <stdio.h>
#include <stdlib.h>

int convert_str_to_num(char *s);

int main() {
	char str_num[] = "124";

	int result = convert_str_to_num(str_num);

	printf("The string %s has been converted to an integer: %d ", str_num, result);

	return 0;
}

int convert_str_to_num(char *s) {
	int i = 0, result = 0;
	while (s[i] != '\0') {
		result = s[i] - '0' + (result*10);
		i++;
	}

	return result;
}