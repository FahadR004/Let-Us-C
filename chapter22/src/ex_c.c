#include <stdio.h>
#include <stdlib.h>

#define MAX_EMP 5

typedef struct {
	unsigned int day : 5;
	unsigned int month : 4;
	unsigned int year : 12;
} date;

int order_ascending(const void *a, const void *b);

int main() {
	int i;
	int day, month, year;
	date emp_joinings[MAX_EMP];

	for (i = 0; i < MAX_EMP; i++) {
		printf("Enter joining date of emp %d (format: dd mm yyyy): ", i+1);
		scanf("%d %d %d", &day, &month, &year);
		emp_joinings[i].day = day;
		emp_joinings[i].month = month;
		emp_joinings[i].year = year;
	}
	
	qsort(emp_joinings, MAX_EMP, sizeof(date), order_ascending);

	printf("Joining date in ascending year: \n");
	for (i = 0; i < MAX_EMP; i++) {
		printf("Employee %d: %d %d %d\n", i+1, emp_joinings[i].day, emp_joinings[i].month, emp_joinings[i].year);
	}

	return 0;
}

int order_ascending(const void *a, const void* b) {
	date *date1 = (date *) a;
	date *date2 = (date *) b;
	return (date1->year - date2->year);
}