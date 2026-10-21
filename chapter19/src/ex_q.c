#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "docs/ex_q_source.txt"
#define MAX_WORDS 25

int compare(const void* a, const void* b);

int main() {
	int i = 0, words_written = 0;
	// int max_len = 0;
	FILE *fs;
	char words[MAX_WORDS][16];
	char buffer[16];
	fs = fopen(FILENAME, "r");

	if (fs == NULL) {
		printf("ERROR: File not found!\n");
		return 1;
	}

	while (fscanf(fs, "%15s", words[words_written]) != EOF){  // Max. take 15 chars to prevent overflow
		words_written++;
	}

	// for (i = 0; i < words_written; i++) {
	// 	printf("Unsorted Data: %d. %s\n", i+1, words[i]);
	// }

	qsort(words, words_written, 16, compare);


	printf("Total number of words in the list: %d", words_written);
	printf("Alphabetical listing of words: \n");
	for (i = 0; i < words_written; i++) {
		printf("%s\n", words[i]);
	}

	fclose(fs);

	return 0;
}

int compare(const void* a, const void* b) {
	return strcmp((const char*)a, (const char*)b);
}

// You get first element in a and b
// So, you have char*
// Then, that element is also a address, so have char**
// Then, you get the value at the address using the dereference operator outside ()
// int compare(const void* a, const void* b) {
// 	return strcmp(*(const char**)a, *(const char**)b)
// }
