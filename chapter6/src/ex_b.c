#include <stdio.h>
#include <stdlib.h>

// In any regular ASCII set, ASCII character 1 represents a control character for the Start of Heading. The smiling face with ASCII value 1 belongs to an extended character set for MS-DOS consoles only. Hence, we use unicode for the smiling face


int main() {
	int i,j;

	for (i = 0; i <= 100; i++) {
		for (j = 0; j <= 100; j++) {
			printf("%s", "\u263A");
		}
		printf("\n");
	}

	return 0;
}