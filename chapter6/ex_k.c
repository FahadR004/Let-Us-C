#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b, c, d;
	int limit = 50;
	
	for (a = 1; a < limit; a++) {
		for (b = 1; b < limit; b++) {
			for (c = 1; c < limit; c++) {
				for (d = 1; d < limit; d++) {
					if (a != b && a != c && a != d && b != c && b != d && c != d) {
						int x = pow(a, 3) + pow(b, 3);
						int y = pow(c, 3) + pow(d, 3);
						if (x == y) {
							printf("For the numbers, a=%d, b=%d, c=%d, d=%d: ", a, b, c, d);
							printf("the number is: %d\n", x);
						}
					}
				}
			}
		}
	}

	return 0;
}