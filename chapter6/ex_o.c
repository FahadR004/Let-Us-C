#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	// 1-based indexing
	int max = 6;
	int lines = 1;
	int current_val = 1;	

	while (lines <= max) {
		for (i = max; i > lines; i--) {
			printf(" ");
		}
		for (j = 1; current_val != 0; j++) {
			printf("%d ", current_val);
			current_val = (current_val * (lines - j))/j;
		}
		printf("\n");
		current_val = 1;
		lines++;
	}

	return 0;
	
	// Zero-Based Indexing
	// int i,j;
	// int max = 6;
	// int lines = 0;
	// int current_val = 1;	

	// while (lines < max) {
	// 	for (i = max; i > lines; i--) {
	// 		printf(" ");
	// 	}
	// 	for (j = 0; current_val != 0; j++) {
	// 		printf("%d ", current_val);
	// 		current_val = (current_val * (lines - j))/(j+1);
	// 	}
	// 	printf("\n");
	// 	current_val = 1;
	// 	lines++;
	// }

	// while (lines <= max) {
	// 	for (i = max; i > lines; i--) {
	// 		printf(" ");
	// 	}
	// 	for (j = 1; j <= lines; j++) {
	// 		if (lines < 3) printf("1 ");
	// 		else {
	// 				mid = lines / 2 + 1;
	// 				if (j == 1 || j == lines) {
	// 					printf("1 ");
	// 				} else if (lines % 2 == 0 && (j == mid || j == (mid-1))) {
	// 					printf("%d ", even+odd);
	// 					even++;
	// 					odd++;
	// 				}
	// 				else if (lines % 2 != 0 && (j == mid)) {
	// 				  printf("%d ", even + odd);
	// 					even++;
	// 					odd++;
	// 				} 
	// 		}
	// 	}
	// 	printf("\n");
	// 	lines++;
	// }
}	