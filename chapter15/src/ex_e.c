#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_word(char *s, int order);

int main() {
	char string[20];
	int order;
	printf("Enter order of Fibonacci word: ");
	scanf("%d", &order);
	get_word(string, order);
	printf("F(%d) = %s\n", order, string);
	return 0;
}

void get_word(char *s, int order) {
	int i = 2;
	char term1[20] = "a", term2[20] = "ab", temp[20];
	if (order == 0) 
		strcat(s, term1);
	else if (order == 1) 
		strcpy(s, term2);
	else {
		while (i  <= order) {	
			strcpy(temp, term2);
			strcat(term2, term1);
			strcpy(term1, temp);
			i++;
		}
		strcat(s, term2);
	}
}

