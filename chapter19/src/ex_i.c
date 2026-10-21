#include <stdio.h>
#include <stdlib.h>

#define MAX_EMP 100
#define FILENAME "docs/ex_i_emp.txt"

int sort_ascending(const void *a, const void *b);

struct date { 
	int  d, m, y; 
}; 

struct employee { 
	int  empcode; 
	char  empname[ 20 ] ; 
	struct  date join_date ; 
	float  salary ; 
}; 

int main() {
	int actual_count = 0;
	int i;
	FILE *fs;
	struct employee employees[MAX_EMP];

	fs = fopen(FILENAME, "r");
	if (fs == NULL) {
		printf("ERROR: File not found\n");
		exit(1);
	}

	while (fscanf(fs, "%d %s %d %d %d %f", 
				   &employees[i].empcode, 
				   employees[i].empname, 
				   &employees[i].join_date.d, 
				   &employees[i].join_date.m, 
				   &employees[i].join_date.y, 
				   &employees[i].salary
				  ) != EOF) {
		i++;
		actual_count++;
	}

	for (i = 0; i < actual_count; i++) {
		printf("Unsorted Data: %-5d %-15s %d %d %-5d %f\n", 
				   employees[i].empcode, 
				   employees[i].empname, 
				   employees[i].join_date.d, 
				   employees[i].join_date.m, 
				   employees[i].join_date.y, 
				   employees[i].salary
				  );
	}	

	qsort(employees, actual_count, sizeof(struct employee), sort_ascending);

	for (i = 0; i < actual_count; i++) {
		printf("Sorted   Data: %-5d %-15s %d %d %-5d %f\n", 
				   employees[i].empcode, 
				   employees[i].empname, 
				   employees[i].join_date.d, 
				   employees[i].join_date.m, 
				   employees[i].join_date.y, 
				   employees[i].salary
				  );
	}	

	fclose(fs);

	return 0;
}

int sort_ascending(const void *a, const void *b) {
	// return (*(int*)a < *(int*)b);
	struct employee *empA = (struct employee *)a;
	struct employee *empB = (struct employee *)b;
	if (empA->join_date.y - empB->join_date.y == 0) {
		if (empA->join_date.m - empB->join_date.m == 0) {	
			return (empA->join_date.d - empB->join_date.d);
		} else {
			return (empA->join_date.m - empB->join_date.m);
		}
	} else {
		return (empA->join_date.y - empB->join_date.y);
	}
}
