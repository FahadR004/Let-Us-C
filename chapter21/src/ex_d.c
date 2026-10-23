#include <stdio.h>
#include <stdlib.h>

#define _BV(x) (1 << x)

struct animal {
	char name[30];
	int type;
};

int main() {
	int type;
	struct animal anim = {0}; // Set to 0

	printf("Enter the name of the animal: ");
	scanf("%s", anim.name);
	// getchar();

	printf("Enter type of animal (as integer value): ");
	scanf("%d", &anim.type);
	// getchar();

	// if (type < 1 || type > 4) {
	// 	printf("ERROR: Invalid Input!\n");
	// 	return 1;
	// }

	// anim.type |= (_BV(type - 1));

	// printf("Enter 0 for Herbivore and 1 for Carnivore: ");
	// scanf("%d", &eating_type);
	// // getchar();

	// if ((eating_type != 0) && (eating_type != 1)) {
	// 	printf("ERROR: Invalid Input!\n");
	// 	return 1;
	// }

	// if (eating_type) {
	// 	anim.type |= (_BV(4));
	// }

	printf("The animal %s is a ", anim.name);

	if ((anim.type & (_BV(0)))) {
		printf("canine\n");
	} else if ((anim.type & (_BV(1)))) {
		printf("feline\n");
	} else if ((anim.type & (_BV(2)))) {
		printf("cetacean\n");
	} else {
		printf("marsupial\n");
	}

	if (anim.type & (_BV(4))) {
		printf("%s is also a carnivore\n", anim.name);
	} else {
		printf("%s is also a herbivore\n", anim.name);
	}

	return 0;
}