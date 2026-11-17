#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_word(char *sentence, char *tok);

int main() {
	char sent[128] = "This is the sentence having the word 'the' in it";	
    printf("Before removing 'the': %s\n", sent);
	remove_word(sent, "the");	
    printf("After removing 'the': %s\n", sent);	
	return 0;
}

void remove_word(char *sentence, char *tok) {
   int i = 0, index;
   char *result, buffer[128];
   int length = strlen(sentence);
   int tok_len = strlen(tok);
   strcpy(buffer, sentence);
   while ((result = strstr(sentence, tok)) != NULL) {
   	// printf("This is result and i: %c, %d\n", *result, i);
	index = result - sentence;
	// printf("INDEX: %d, RESULT: %s, SENTENCE: %s\n", index, result, sentence);
	sentence[index] = '\0';
	strcat(sentence, buffer+index+tok_len);
	strcpy(buffer, sentence);
	i++;
	// printf("This is result: %s\n", strstr(sentence, tok));
   }   	
}
