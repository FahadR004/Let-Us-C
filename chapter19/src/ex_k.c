#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 5
#define FILENAME "docs/ex_k_target.txt"

int main() {
	int i = 0, flag = 0;
	FILE* fp;
	char user_input[10], buffer[16];
	char *names[SIZE] = {
		"Fahad",
		"Sarim",
		"Ahad",
		"Safeer",
		"Hamza"
	};

	fp = fopen(FILENAME, "w+");

	if (fp == NULL) {
		printf("ERROR: File not found!\n");
		return 1;
	}

	while (i < SIZE) {
		fprintf(fp, "%s\n", names[i]);
		i++;
	}

	rewind(fp);

	printf("Student list created!\n");
	
	printf("Enter a name to check in the file: ");
scanf("%s", user_input);
	strcat(user_input, "\n");

	while (fgets(buffer, sizeof(buffer), fp)) {
		// printf("buffer: %s, user_input: %s, comp.: %d, comp.2:%d\n", buffer, user_input, strcmp(buffer, user_input), strcasecmp(buffer, user_input));
		if (strcasecmp(buffer, user_input) == 0) {
			printf("Name Found!\n");
			printf("Printing from file: %s", buffer);
			flag = 1;
		}
	}

	if (!flag) 
		printf("Name not found!\n");

	rewind(fp);

	i = 1;
	printf("Displaying all names starting with S: \n");
	while (fgets(buffer, sizeof(buffer), fp)) {
		if (buffer[0] == 'S') {
			printf("%d. %s",i++, buffer);
		}
	}


	fclose(fp);

	return 0;
}