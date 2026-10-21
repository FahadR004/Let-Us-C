#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "docs/ex_r_sample.txt"

void rev_str(char *str);

int main() {

	FILE *fs;
	char buffer[10];
	fs = fopen(FILENAME, "r");

	if (fs == NULL) {
		printf("ERROR: File not found!\n");
		return 1;
	}

	while (fscanf(fs, "%s", buffer) != EOF) {
		printf("Original: %-12s | ", buffer);
		rev_str(buffer);
		printf("Reverse: %s \n", buffer);
	}


	return 0;
}

void rev_str(char *str) {
	int i = 0;
	int j = strlen(str) - 1;
	char c;

	while (i < j) {
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
}