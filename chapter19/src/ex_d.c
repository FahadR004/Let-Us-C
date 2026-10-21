#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SRC "docs/chapter19_solutions.txt"
#define TARGET "docs/ex_d_target.txt"


int main() {
	FILE *fs, *ft;
	char ch;

	fs = fopen(SRC, "r");
	if (fs == NULL) {
		printf("ERROR: File not found!\n");
		return 1;
	}

	ft = fopen(TARGET, "w");
	if (ft == NULL) {
		printf("ERROR: File not found!\n");
		return 1;
	}

	while (1) {
		ch = fgetc(fs);
		
		if (ch == EOF) 
			break;
		
		fputc(toupper(ch), ft);
	}

	fclose(fs);
	fclose(ft);

	return 0;
}