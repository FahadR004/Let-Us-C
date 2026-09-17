#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Absolute value is: %db", abs(num));

	return 0;
}