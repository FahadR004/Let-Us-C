#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LEN 80
#define MAX_LINES 50
#define FILENAME "docs/ex_p_trial.txt"

int main() {
	FILE *fs;
	char word[20];
	int word_count = 0, four_ltr_words = 0;
	
	fs = fopen(FILENAME, "r");

	if (fs == NULL) {
		printf("ERROR: File not found\n");
		return 1;
	}

	while (fscanf(fs, "%s", word) != EOF) {
		if (strlen(word) == 4) {
			four_ltr_words++;
			printf("This is a four letter word: %s\n", word);
		}
		printf("This is a word from the file: %s\n", word);
		word_count++;
	}

	printf("Total Number of Words: %d\n", word_count);
	printf("Total Number of Four Letter Words: %d\n", four_ltr_words);

	fclose(fs);


	return 0;
}