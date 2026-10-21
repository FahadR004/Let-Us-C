#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *f_src;
	char line[80];
	int num_lines = 1;	
	f_src = fopen("docs/chapter19_solutions.txt", "r");

	if (f_src == NULL) {
		printf("ERROR: Could not find source file\n");
		return 1;
	}

	while(fgets(line, sizeof(line), f_src) != NULL) {
		printf("%d: %s", num_lines, line);
		num_lines++;
	}
	printf("\n");

	fclose(f_src);

	return 0;
}