#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace_word(char* sentence, char *old, char *new);

int main(int argc, char *argv[]) {
	FILE *fp;
	int og_len = 0, offset = 0;
	char buffer[1000];

	if (argc != 4) {
		printf("ERROR: Missing arguments -> old_word, new_word, filename\n");
		return 1;
	}

	fp = fopen(argv[3], "r+");

	if (fp == NULL) {
		printf("ERROR: File not found!\n");
		return 1;
	}

	while (fgets(buffer, sizeof(buffer), fp)) {
		// og_len = strlen(buffer);
		replace_word(buffer, argv[1], argv[2]);
		// if (og_len > strlen(buffer)) {
		// 	printf("Before: %s %ld\n", buffer, strlen(buffer));
		// 	buffer[strlen(buffer) - 1] = ' ';
		// 	buffer[strlen(buffer)] = '\n';
		// 	buffer[og_len] = '\0';
		// 	printf("After: %s %ld\n", buffer, strlen(buffer));
		// }
		fseek(fp, -strlen(buffer), SEEK_CUR); 
		fprintf(fp, "%s", buffer);

	}


	return 0;
}

void replace_word(char *sentence, char *old, char *new){
	char *p, temp[1000];
	int index = 0;
	int tok_len = strlen(old);
	while ((p = strstr(sentence, old))!= NULL) {
		strcpy(temp, sentence); // temp has old value
		index = p - sentence; // p - sentence = 8 (let's say)
		// printf("DEBUG: %p, %p, %ld\n", p, sentence, p-sentence);
		sentence[index] = '\0'; // sentence[8] = '\0' => "This is ";

		strcat(sentence, new); // sentence -> "This is FAHAD";

		// printf("This is DEBUG: %s | %s | %d | %d\n", temp+index+tok_len, temp, index, tok_len);
		strcat(sentence, temp+index+tok_len); // 0 + 8 + 5 = 13 -> "This is FAHAD|" -> Write from where | is 
		// Concatenating "Rasheed, an engineer\n" from temp;
		// printf("THIS IS DEBUG SENTENCE: %s\n", sentence);
	}
}
