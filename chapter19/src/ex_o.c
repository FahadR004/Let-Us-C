#include <stdio.h>
#include <stdlib.h>

#define FILENAME "docs/ex_o_emp.txt" // You can name the file as per the question which is EMPLOYEE.DAT. I named it based on my own naming

struct employee {
	int empno;
	char name[30];
	int basic, grade;
};

int main() {
	FILE *fs;
	struct employee emp;
	int emp_count = 1, missing_count = 0;
	
	fs = fopen(FILENAME, "r");

	if (fs == NULL) {
		printf("ERROR: File not found\n");
	}

	while (fscanf(fs, "%d %15s %6d %3d", &emp.empno, emp.name, &emp.basic, &emp.grade) != EOF) {
		if (emp_count != emp.empno) {
			printf("Missing Employee ID: %d\n", emp_count);
			missing_count++;
			emp_count++;
		}
		// printf("DEBUG: %d %-15s %-6d %-3d\n", emp.empno, emp.name, emp.basic, emp.grade);
		emp_count++;
	}
	printf("Total Employees Missing: %d\n", missing_count);
	rewind(fs);
	printf("---- Employees Present ----\n");
	while (fscanf(fs, "%d %15s %6d %3d", &emp.empno, emp.name, &emp.basic, &emp.grade) != EOF) {
		printf("%d %-15s %-6d %-3d\n", emp.empno, emp.name, emp.basic, emp.grade);
	}

	fclose(fs);

	return 0;
}