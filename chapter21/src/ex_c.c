#include <stdio.h>
#include <stdlib.h>

#define _BV(x) (1 << x)

int main() {
	int i, user_input, win_count = 0;
	int game = 0;
		
	printf("Enter games won by ABC college: \n");
	for (i = 0; i < 9; i++) {
		printf("Did ABC college win game %d? (Enter 1 for win/ 0 for lose) ", i+1);
		scanf("%d", &user_input);		
		getchar();
		if (user_input) 
			game |= _BV(i);
	}

	printf("-----------------------------------------------------------\n");
	printf("Total games won by ABC College: ");
	for (i = 0; i < 9; i++) {
		if (game & _BV(i)) {
			win_count++;
		}
	}	
	printf("%d\n", win_count);
	if (win_count >= 5) {
		printf("ABC College is awarded Champion of Champions Trophy!\n");
	} else {
		printf("ABC College has failed to win Champion of Champions Trophy!\n");
	}


	return 0;
}