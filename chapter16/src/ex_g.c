#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void remove_vowels(char* s);

int main() {
	char sentence[80] = "Fahad is an engineer";
	
	// printf("Enter a string: ");
	// scanf("%s", sentence);
	printf("Original sentence: %s\n", sentence);
	remove_vowels(sentence);
	printf("Sentence without vowels is: %s\n", sentence);
	return 0;
}

void remove_vowels(char *sentence) {
	int i;
	int length = strlen(sentence);
	for (i = 0; i < length; i++) {
		if (toupper(sentence[i]) == 'A' || 
			toupper(sentence[i]) == 'E' ||
			toupper(sentence[i]) == 'I' ||
			toupper(sentence[i]) == 'O' ||
			toupper(sentence[i]) == 'U' ) {
			sentence[i] = ' ';
		}

	}
}
