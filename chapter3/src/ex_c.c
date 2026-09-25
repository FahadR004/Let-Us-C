#include <stdio.h>
#include <stdlib.h>

int main( ) { 
	int year;

	printf("Enter the year to check if it's leap or not: ");
	scanf("%d", &year);

	if (year % 4 == 0) {
		printf("It is a leap year");
	} else {
		printf("It is not a leap year");
	}
}	
