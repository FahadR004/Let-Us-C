#include <stdio.h>
#include <stdlib.h>

int check_leap( int );

int main () {
	int year, res;
	printf("Enter a year: ");
	scanf("%d", &year);

	res = check_leap( year );

	if (res) 
		printf("%d is a leap year\n", year);
	else 
		printf("%d is not a leap year\n", year); 
	
	return 0;
}

int check_leap( int year) {
	if (year % 4 == 0) 
		return 1;
	return 0;
}