#include <stdio.h>
#include <stdlib.h>

struct date {
	int day;
	int month;
	int year;
};


int main () {
	struct date date1;
	struct date date2;

	printf("Enter two dates to compare them...\n");
	printf("Use the format ( DD MM YYYY )!\n");

	printf("Enter date1: ");
	scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

	printf("Enter date2: ");
	scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

	if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
		printf("The dates are same!\n");
	} else {
		printf("The dates are not the same\n");
	}

	return 0;
}