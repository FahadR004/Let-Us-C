#include <stdio.h>
#include <stdlib.h>

int main() {
	int matchsticks = 21;
	int user_input;

	while (matchsticks > 0) {
		printf("Enter the number of matchsticks: ");
		scanf("%d", &user_input);
		
		if (user_input < 1 || user_input > 4) {
			printf("Please enter a value between 1 and 4\n");
			return 1;
		}

		matchsticks -= user_input;

		if (matchsticks == 0) break;

		printf("Computer picks %d matchsticks...\n", matchsticks - 1);
		matchsticks  = matchsticks - (matchsticks - 1);		

		printf("Total matchsticks remaining: %d\n", matchsticks);
	}
	printf("You picked the last matchstick! Computer won!\n");
}
