#include <stdio.h>
#include <stdlib.h>

// 1  2  3
// 1  3  2
// 2  1  3
// 2  3  1
// 3  1  2
// 3  2  1

int main() {
	int i, j, k;
	int n = 3;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			for (k = 1; k <= n; k++) {
				// if (i != j && j != k && i != k)
					printf("%d %d %d\n", i, j, k);
			}	
		}
	}

	return 0;

}