#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 4

struct stud {
	int roll_no;
	char name[20];
	char dept[10];
	char course[20];
	int joining_year;
};

void print_data(struct stud s[MAX_STUDENTS], int roll_no);
void get_year_students(struct stud s[MAX_STUDENTS], int year);

int main () {
	int i;
	struct stud stud_list[MAX_STUDENTS];

	for ( i = 0 ; i < MAX_STUDENTS ; i++ ) { 
	  printf("Enter roll_no, name, dept, course, joining_year (separated by spaces): " ) ; 
	  scanf( "%d %s %s %s %d", &stud_list[i].roll_no, stud_list[i].name, stud_list[i].dept, stud_list[i].course, &stud_list[i].joining_year) ; 
	}

	print_data(stud_list, 114);
	get_year_students(stud_list, 2022);


	return 0;
}

void print_data(struct stud stud_list[MAX_STUDENTS], int roll_no) {
	int i;
	for (i = 0; i < MAX_STUDENTS; i++) {
		if (stud_list[i].roll_no == roll_no) {
			printf("Data of the student is: \n");
	 		printf( "Roll No: %d, Name: %s, Dept: %s, Course: %s, Joining Year: %d\n", stud_list[i].roll_no, stud_list[i].name, stud_list[i].dept, stud_list[i].course, stud_list[i].joining_year) ; 
			break;
		}
	}
}

void get_year_students(struct stud stud_list[MAX_STUDENTS], int year) {
	int i;
	printf("Data of the students of the year %d is: \n", year);
	for (i = 0; i < MAX_STUDENTS; i++) {
		if (stud_list[i].joining_year == year) {
	 		printf( "Roll No: %d, Name: %s, Dept: %s, Course: %s, Joining Year: %d\n", stud_list[i].roll_no, stud_list[i].name, stud_list[i].dept, stud_list[i].course, stud_list[i].joining_year) ; 
		}
	}
}
