#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, k;
	char min = 'A';
	char max = 'G';
	int spaces = 1;
	int lines = max-min+1;
	int char_iter = 0;

	while (lines > 0) {
		for (i = min; i < max; i++) {
			printf("%c ", i);
		}	
		char_iter = i;

		for (j = 2; j < spaces; j++) {
			printf("  ");
		}

		if (spaces == 1) printf("%c ", max);

		for (k = char_iter-1; k >= min; k--) 
			printf("%c ", k);

		printf("\n");

		if (spaces != 1) max--;

		spaces+=2;
		lines--;
	}

	return 0;
}