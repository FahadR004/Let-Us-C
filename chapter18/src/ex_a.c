#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void xgets(char *str, int word_limit, int string_size);
void xputs(char *str);

int main() {
	char s[30];
	xgets(s, 2, 30);
	xputs(s);
	return 0;
}

void xgets(char *str, int word_limit, int string_size) {
	char word1[string_size/2];
	char word2[string_size/2];
	if (word_limit > 2) {
		printf("WORD LIMIT CANNOT BE GREATER THAN 2\n");
	}
	printf("Enter words: ");
	scanf("%s", word1);
	scanf("%s", word2);
	strcat(word1, " ");
	strcat(str, word1);
	strcat(str, word2);

}

// puts only print one string
void xputs(char *str) {
	// printf("%s\n", str);
	while (*str != '\0') {  // Simply change to '\0' to change print the whole string
		printf("%c", *str);
		str++;
	}
	printf("\n");
}

