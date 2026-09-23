#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	
	printf("Enter a number to get it's multiplication table: ");
	scanf("%d", &num);

	for (int i = 1; i <= 10; i++) 
		printf("%d * %d = %d\n", num, i, num*i);

	return 0;
}