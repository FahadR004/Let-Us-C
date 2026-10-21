#include <stdio.h>
#include <stdlib.h>

#define FILENAME "docs/ex_m_emp.txt"

struct emp {
	int emp_no;
	char name[15];
	char sex;
	int gross_sal;
};

void add_emp(FILE *fs);
void remove_emp(FILE *fs);
void increment_sal(FILE *fs);

int main() {
	int user_input;
	FILE *fs;

	fs = fopen(FILENAME, "r+");

	if (fs == NULL) {
		printf("ERROR: File not found!\n");
		return 1;
	}	

	while (1) {
		printf("1. Add Employee\n");
		printf("2. Remove Employee\n");
		printf("3. Increment Salary\n");
		printf("4. Exit\n");

		printf("Enter your choice: ");
		scanf("%d", &user_input);

		if (user_input == 4) {
			printf("Exited!\n");
			return 1;
		}

		switch (user_input) {
			case 1:
				add_emp(fs);
				break;
			case 2:
				remove_emp(fs);
				break;
			case 3:
				increment_sal(fs);
				break;
			default:
				printf("Invalid input\n");
		}
	}
	

	fclose(fs);

	return 0;
}

void add_emp(FILE *fs) {
	struct emp new_emp;
	printf("Enter emp number, name, sex, gross_sal (separated by spaces): ");
	scanf("%d %15s %c %6d", &new_emp.emp_no, new_emp.name, &new_emp.sex, &new_emp.gross_sal);
	getchar(); // Remove newline
	fseek(fs, 0, SEEK_END);
	fprintf(fs, "%d%-15s%c%-6d\n", new_emp.emp_no, new_emp.name, new_emp.sex, new_emp.gross_sal);
	printf("Employee added!\n");
	rewind(fs);
}

void remove_emp(FILE *fs) {
	int emp_no;
	struct emp del_emp;
	printf("Enter the emp no. of the employee to remove: ");
	scanf("%d", &emp_no);
	getchar(); // Remove newline
	while (fscanf(fs, "%d %15s %c %6d", &del_emp.emp_no, del_emp.name, &del_emp.sex, &del_emp.gross_sal) != EOF) {
		if (del_emp.emp_no == emp_no) {
			fseek(fs, -23, SEEK_CUR);
			fprintf(fs, "%d%-15s%c%-6d\n", del_emp.emp_no, del_emp.name, del_emp.sex, 0);
			break;
		}
	}
}

void increment_sal(FILE *fs) {
	int emp_no, new_sal;
	struct emp empl;
	printf("Enter the emp no. of the employee and salary to increase: ");
	scanf("%d %d", &emp_no, &new_sal);
	getchar(); // Remove newline
	while (fscanf(fs, "%d %15s %c %6d", &empl.emp_no, empl.name, &empl.sex, &empl.gross_sal)!=EOF) {
		if (empl.emp_no == emp_no) {
			fseek(fs, -23, SEEK_CUR);
			fprintf(fs, "%d%-15s%c%-6d\n", empl.emp_no, empl.name, empl.sex, new_sal);
			break;
		}
	}
}
