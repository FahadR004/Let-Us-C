#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "docs/ex_j_hosp.txt"

struct donor {
	char name[20];
	char addr[40];
	char age[3];
	char blood_type; // 1, 2, 3, 4
};

int main() {
	FILE *fs;
	char buffer[128];
	struct donor d;

	fs = fopen(FILENAME, "r");

	if (fs == NULL){
		printf("ERROR: Could not open file\n");
		return 1;
	}

	printf("-------------------------- Donor Records --------------------------\n");
	printf(" %-16s | %-40s | %-2s | %-3s\n", "Name", "Address", "Age", "Blood Type");
/*	while (fscanf(fs, "%10s %10s %40s %2d %d", d.first_name, d.last_name, d.addr, &d.age, &d.blood_type) != EOF) {
		printf(" %-5s %-10s | %-40s | %-3d | %-2d\n", d.first_name, d.last_name, d.addr, d.age, d.blood_type);
		if (d.age < 25 && d.blood_type == 2) {
		}
	}
*/	
	while (fgets(buffer, sizeof(buffer), fs)) {
		strncpy(d.name, buffer, 20);
		d.name[19] = '\0';
		strncpy(d.addr, buffer+20, 40);
		d.addr[39] = '\0';
		strncpy(d.age, buffer+60, 2);
		d.age[2] = '\0';
		// strncpy(d.blood_type, buffer+20, 40);
		d.blood_type = buffer[62];
		// printf(" %s %ld %s %c %s\n", d.name, strlen(buffer), d.age, d.blood_type, d.addr);

		if (atoi(d.age) < 25 && ((d.blood_type - '0') == 2)) {			
			printf(" %-20s | %-40s | %-3s | %-2c\n", d.name, d.addr, d.age, d.blood_type);
		}
	}
	return 0;
}