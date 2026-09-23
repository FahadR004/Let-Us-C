#include <stdio.h>
#include <stdlib.h>

int main() {
	float pop = 10000;
	printf("Population Today: %f\n", pop);
	for (int i = 10; i > 0; i--) {
		pop = pop - pop*0.1;
		printf("Population in Year %d: %f\n", i, pop);
	}	

	return 0;

	// // float pop = 3486.784668;
	// printf("Population Today: %f\n", pop);
	// for (int i = 1; i <= 11; i++) {
	// 	pop = pop + pop*0.1;
	// 	printf("Population in Year %d: %f\n", i, pop);
	// }	

}