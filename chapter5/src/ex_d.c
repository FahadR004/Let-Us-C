#include <stdio.h>
#include <stdlib.h>

int main() {
	int c = 0;
	
	while (c <= 255) {
		printf("ASCII Value = %d, Character = %c \n", c, c);
		c++;
	}
	
	return 0;
}