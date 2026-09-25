#include <stdio.h>
#include <stdlib.h>

int main() {
   // int n = 3; // length of array
   // int k = 2; // values range from 0 to k
   // int total = pow(k + 1, n);
   // for (int row = 0; row < total; row++) {
   //     for (int col = n - 1; col >= 0; col--) {
   //         int divisor = pow(k + 1, col);
   //         int value = (row / divisor) % (k + 1);
   //         printf("%d ", value);
   //     }
   //     printf("\n");
   // }
	int a, b, c;

	for (a = 1; a <= 30; a++) {
		for (b = a; b <= 30; b++) {
			for (c = b; c <= 30; c++) {
				// int lhs = pow(c, 2.0); // This prints duplicates
				// int rhs = pow(a, 2.0) + pow(b, 2.0);
				int lhs = a*a + b*b;
				int rhs = c*c;
				if (lhs == rhs) printf("%d^2 = %d^2 + %d^2\n", a, b, c);
			}
		}
	}
	return 0;
}