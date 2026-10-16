#include <stdio.h>
#include <stdlib.h>

#define PLAYERS 3

typedef struct {
	int rank1; // by judge
	int rank2;
	int rank3;
} player;

int main() {
	int i, max, index;
	player players[PLAYERS];

	for (i = 0; i < PLAYERS; i++) {
		printf("For player %d\n", i+1);
		printf("Enter marks by judges (separated by spaces): " );
		scanf("%d %d %d", &players[i].rank1, &players[i].rank2, &players[i].rank3);
	}

	for (i = 0; i < PLAYERS - 1; i++) {
		index = i;
		max = players[i].rank1 + players[i].rank2 + players[i].rank3;
		if (max < players[i+1].rank1 + players[i+1].rank2 + players[i+1].rank3) {
			max = players[i+1].rank1 + players[i+1].rank2 + players[i+1].rank3;
			index = i+1;
		}
	}

	printf("The MVP is Player %d with sum of ranks as %d!\n", index, max);

	return 0;
}