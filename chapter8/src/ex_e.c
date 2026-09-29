#include <stdio.h>
#include <stdlib.h>

int main () {
	int num, factor = 2;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	printf("Prime factors are: ");
	while (num != 1) {
		if (num % factor == 0){
			num = num / factor;
			printf("%d ", factor);
		}
		else 
			factor++;
	}
	printf("\n");

	return 0;
}