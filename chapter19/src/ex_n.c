#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SOURCE "docs/ex_n_sample.txt"
#define TARGET "docs/ex_n_target.txt"

void remove_word(char *word, char *tok);

int main() {
	char buffer[60];
	FILE *fs;
	FILE *ft;
	fs = fopen(SOURCE, "r");
	if (fs == NULL) {
		printf("ERROR: File not found\n");
		return 1;
	}	

	ft = fopen(TARGET, "w");
	if (ft == NULL) {
		printf("ERROR\n");
		return 1;
	}

	while (fgets(buffer, sizeof(buffer), fs) != NULL) {
		remove_word(buffer, "an");
		remove_word(buffer, "the");				
		remove_word(buffer, " a ");	
		// replace_word(buffer, "an", " ");							
		// replace_word(buffer, "the", " ");							
		// replace_word(buffer, " a ", " ");							
		fprintf(ft, "%s", buffer);
	}
	
	// while(fgets(buffer, sizeof(buffer), fs)) {
	// 	remove_word(buffer, " an ");
	// 	remove_word(buffer, " the ");
	// 	remove_word(buffer, " a "); // a will be in the middle of the sentence
	// 	printf("String to be added: %s\n", buffer);
	// 	fprintf(fs, "%s", buffer);
	// }

	fclose(fs);
	fclose(ft);
	return 0;
}

void remove_word(char *word, char *tok) {
	char *p, temp[1000];
	int index = 0;
	int tok_len = strlen(tok);
	while ((p = strstr(word, tok))!= NULL) {
		strcpy(temp, word);

		index = p - word;

		word[index] = '\0';

		strcat(word, " ");

		strcat(word, temp+index+tok_len);
	}
}