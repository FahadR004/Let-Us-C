#include <stdio.h>
#include <stdlib.h>

int main() {
	float i, x;
	int y;

	for (y = 1; y <= 6; y++) {
		for (x = 5.5f; x <= 12.5f; x += 0.5) {
			i = 2 + (y + 0.5*x);
			printf("i = 2 + (%d + 0.5*%f) = %f\n", y, x, i);
		}
	}

	return 0;

}