#include <stdio.h>
#include <stdlib.h>

#define SRC1 "docs/ex_c_target.txt"
#define SRC2 "docs/ex_d_target.txt"
#define TARGET "docs/ex_e_target.txt"

int count_lines(FILE* src);
void merge_files(FILE* src1, FILE *src2, FILE *target); // src1 lc > src2 lc

int main() {
	FILE *fs1, *fs2, *ft;
	int count1 = 0, count2 = 0;

	fs1 = fopen(SRC1, "r");
	if (fs1 == NULL) {
		printf("ERROR: File not found\n");
		exit(1);
	}

	fs2 = fopen(SRC2, "r");
	if (fs2 == NULL) {
		printf("ERROR: File not found\n");
		exit(1);
	}

	ft = fopen(TARGET, "w");
	if (ft == NULL) {
		printf("ERROR: File not found\n");
		exit(1);
	}

	count1 = count_lines(fs1);
	count2 = count_lines(fs2);

	rewind(fs1);
	rewind(fs2);

	if (count1 > count2) 
		merge_files(fs1, fs2, ft);
	else 
		merge_files(fs2, fs1, ft);

	fclose(fs1);
	fclose(fs2);
	fclose(ft);

	return 0;
}

int count_lines(FILE* fs1) {
	int count = 0;
	char ch;
	while (1) {
		ch = fgetc(fs1);
		if (ch == EOF) 
			break;
		if (ch == '\n')
			count++;
	}
	// while(fgets(line, sizeof(line), f_src) != NULL) {
	// 	printf("%d: %s", num_lines, line);
	// 	num_lines++;
	// }
	return count;
}

void merge_files(FILE* src1, FILE *src2, FILE *target) {
	char buffer1[64], buffer2[64];
	while (fgets(buffer2, sizeof(buffer2), src2) != NULL) {
		fgets(buffer1, sizeof(buffer1), src1);
		fprintf(target, "%s", buffer1);
		fprintf(target, "%s", buffer2);
	}	
	fprintf(target, "\n");
	while (fgets(buffer1, sizeof(buffer1), src1) != NULL) {
		fprintf(target, "%s", buffer1);
	}
}


// void merge_files(FILE* src1, FILE *src2, FILE *target) {
// 	int flag = 0;
// 	char buffer1[64], buffer2[64];
// 	while (fgets(buffer1, sizeof(buffer1), src1) != NULL) {
// 		fprintf(target, "%s", buffer1);
// 		if (fgets(buffer2, sizeof(buffer2), src2) != NULL) {
// 			fprintf(target, "%s", buffer2);
// 			printf("FTELL: %ld, EOF: %d\n", ftell(src2), EOF);
// 			// if (ftell(src2) == EOF) {
// 			// 	fprintf(target, "\n");
// 			// }
// 		} else if (!flag && fgets(buffer2, sizeof(buffer2), src2) == NULL) {
// 			flag = 1;
// 			fprintf(target, "\n");
// 		}
// 	}
// }

