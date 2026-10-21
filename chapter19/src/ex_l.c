#include <stdio.h>
#include <stdlib.h>

#define MASTER "docs/ex_l_master.txt"
#define TRANS "docs/ex_l_transaction.txt"
#define TARGET "docs/ex_l_target.txt"

struct stud {
	int roll_no;
	char name[16];
};

struct trans {
	int roll_no;
	char res;
};

int main() {
	struct stud s;
	struct trans t;
	FILE *fs1, *fs2, *ft;

	fs1 = fopen(MASTER, "r");
	if (fs1 == NULL) {
		printf("ERROR: File not found\n");
		return 1;
	}

	fs2 = fopen(TRANS, "r");
	if (fs2 == NULL) {
		printf("ERROR: File not found\n");
		return 1;
	}

	ft = fopen(TARGET, "w");
	if (ft == NULL) {
		printf("ERROR: File not found\n");
		return 1;
	}

	while (fscanf(fs1, "%d %s", &s.roll_no, s.name) != EOF) {
		fscanf(fs2, "%d %c", &t.roll_no, &t.res);
		if ((s.roll_no == t.roll_no) && t.res == 'A') {
			fprintf(ft, "%d %s\n", s.roll_no, s.name);
		}
	}

	return 0;
}