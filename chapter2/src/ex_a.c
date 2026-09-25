#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	while (num != 0) {
		sum += num % 10;
		printf("%d\n", sum);	
		num = num / 10;
		printf("%d\n", num);
	}	

	printf("Sum of all numbers: %d", sum);
	
}
