#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EMPLOYEES 3

struct date {
	int date;
	int month;
	int year;
};

struct emp {
	int emp_code;
	char name[40];
	struct date joining_date;
};

int check_tenure(struct emp emp_lst[EMPLOYEES], struct date curr_date);

int main() {
	int i;
	struct emp emp_lst[EMPLOYEES];

	for (i = 0; i < EMPLOYEES; i++) {
		printf("Enter data of employees: \n");
		printf("Code: ");
		scanf("%d", &emp_lst[i].emp_code);
		printf("Name: ");
		scanf("%s", emp_lst[i].name);
		printf("Joining Date (in the format: DD MM YYYY): ");
		scanf("%d %d %d", &emp_lst[i].joining_date.date, &emp_lst[i].joining_date.month, &emp_lst[i].joining_date.year);
	}

	struct date curr_date;

	printf("Enter the current date (in the format: DD MM YYYY): ");
	scanf("%d %d %d", &curr_date.date, &curr_date.month, &curr_date.year);

	int res = check_tenure(emp_lst, curr_date);

	if (res){ 
		printf("No employees with tenure greater than equal to 3 years!");
		return 1;
	}

	return 0;
}

int check_tenure(struct emp emp_lst[EMPLOYEES], struct date curr_date) {
	int i, diff, flag = 0;
	int curr_year = curr_date.year;
	printf("Employees with tenure greater than equal to 3 years: \n");
	for (i = 0; i < EMPLOYEES; i++) {
		diff = curr_year - emp_lst[i].joining_date.year;
		if (diff >= 3) 
			printf("Emp. Code: %d, Emp. Name: %s\n", emp_lst[i].emp_code, emp_lst[i].name);
			flag = 1;
	}
	if (!flag)
		return 1;
	return 0;
}