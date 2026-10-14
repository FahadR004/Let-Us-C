#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_vowels_in_succession(char *s);
int check_vowels(char s);

int main() {
	char sentence[80] = "Please rea this application and give me gratuity";
	int count = count_vowels_in_succession(sentence);
	printf("Vowels in succession in the sentence, '%s' , are %d\n", sentence, count);
	return 0;
}

int count_vowels_in_succession(char * s) {
	int i, count = 0;
	int length = strlen(s);	
	for (i = 0; i < length - 1; (isspace(s[i]) ? (i++) : (i+=2))) {
		if (!isspace(s[i]) && check_vowels(s[i]) && check_vowels(s[i+1])) {
			count++;
		}
	}
	return count; 
}

int check_vowels(char s) {
	if (toupper(s) == 'A' || 
		toupper(s) == 'E' ||
		toupper(s) == 'I' ||
		toupper(s) == 'O' ||
		toupper(s) == 'U' ) {
			return 1;
	}
	return 0;
}