#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j;
	float fact, sum = 0;
	for (i = 1; i <= 7; i++) {
		fact = 1;
		for (j = i; j > 0; j--){
			fact = fact*j;
		}
		sum += i/fact;
		printf("%d/%.0f = %.2f | ", i, fact, i/fact);
	}
	printf("Sum of First Seven Terms is : %.2f\n", sum);

	return 0;
}