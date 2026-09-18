#include <stdio.h>
#include <stdlib.h>

int main() {
	int year;

	printf("Enter the year: ");
	scanf("%d", &year);

	(year % 4 == 0) ? printf("The year is a leap year!") : printf("The year is not a leap year!");

	return 0;
}
