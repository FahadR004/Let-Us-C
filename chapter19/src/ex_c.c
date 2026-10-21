#include <stdio.h>
#include <stdlib.h>

#define FILENAME "docs/ex_c_target.txt"

struct student {
	char name[20];
	int age;
};

int main() {
	FILE *f_src;
	struct student stud;
	int count = 1;

	f_src = fopen(FILENAME, "r");

	if (f_src == NULL) {
		printf("ERROR: File not found!\n");
		exit(1);
	}

	printf("-------------- Student Records ---------------\n");
	while (fscanf(f_src, "%s %d", stud.name, &stud.age) != EOF){
		printf("%d. %s %d\n", count, stud.name, stud.age);
		count++;
	}
	fclose(f_src);

	return 0;
}