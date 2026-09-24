#include <stdio.h>
#include <stdlib.h>

int main () {
	int class, subj_failed;

	printf("Enter class of student: ");
	scanf("%d", &class);

	printf("Enter number of subjects failed by student: ");
	scanf("%d", &subj_failed);

	switch (class) {
		case 1:
			printf("Student is of first class\n");
			if (subj_failed > 3)
				printf("No grace marks for student!\n");
			else
				printf("Grace marks are 5 marks per subject!\n");
			break;
		case 2:
			printf("Student is of second class\n");
			if (subj_failed > 2)
				printf("No grace marks for student!\n");
			else
				printf("Grace marks are 4 marks per subject!\n");
			break;
		case 3:
			if (subj_failed > 1)
				printf("No grace marks for student!\n");
			else
				printf("Grace marks are 5 marks total!\n");
			break;
		default: 
			printf("No grace marks for student!\n");
			break;
	}
	return 0;
}