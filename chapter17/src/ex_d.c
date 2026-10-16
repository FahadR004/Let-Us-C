#include <stdio.h>
#include <stdlib.h>

#define CRICKETERS 3

struct cricketer {
	char name[50];
	int age;
	int num_test_matches;
	int avg_runs; // per match
};

// typedef struct {
// 	char name[50];
// 	int age;
// 	int num_test_matches;
// 	int avg_runs;
// } cricketer;

int sort_cricketers(const void *a, const void *b);
void print_data(struct cricketer lst[CRICKETERS]);

int main() {
	int i, length;
	struct cricketer players_lst[CRICKETERS];

	for (i = 0; i < CRICKETERS; i++) {
		printf("Enter name, age, number of test matches played and average runs scored per match: ");
		scanf("%s %d %d %d", players_lst[i].name, &players_lst[i].age, &players_lst[i].num_test_matches, &players_lst[i].avg_runs);
	}

	printf("Unsorted data: \n");
	print_data(players_lst);

	qsort(players_lst, CRICKETERS, sizeof(struct cricketer), sort_cricketers);

	printf("Sorted data: \n");
	print_data(players_lst);

	return 0;
}

// For qsort function
int sort_cricketers(const void *a, const void *b) {
	// return (*(int*)a < *(int*)b);
	struct cricketer *cricketerA = (struct cricketer *)a;
	struct cricketer *cricketerB = (struct cricketer *)b;
	return (cricketerA->avg_runs - cricketerB->avg_runs);
	// with typedef
	// cricketer *cricketerA = (cricketer*)a;
	// cricketer *cricketerB = (cricketer*)b;
	// return (cricketerA->avg_runs - cricketerB->avg_runs);
	// 
}


void print_data(struct cricketer lst[CRICKETERS]) {
	int i;
	for (i = 0; i < CRICKETERS; i++) {
		printf("Name: %s, Age: %d, Number of Test Matches: %d, Avg. Runs: %d\n", lst[i].name, lst[i].age, lst[i].num_test_matches, lst[i].avg_runs);
	}
}