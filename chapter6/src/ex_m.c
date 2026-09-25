#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	int count = 1; 
	int lines = 1;

	while (lines <= 4) {
		for (i = 5; i > lines; i--) {
			printf(" ");
		}
		for (j = 1; j <= lines; j++) {
			printf("%d ", count);
			count++;
		}
		printf("\n");
		lines++;
	}

	return 0;
}