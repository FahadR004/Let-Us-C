#include <stdio.h>
#include <stdlib.h>

int main( ) { 
	int num, rev_num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	while (num > 0) {
		rev_num = rev_num*10 + num%10;
		num = num / 10;
	}

	if (num == rev_num) {
		printf("Reverse number program failed!");
	} else {
		printf("Number reversal succeeded\n");
		printf("Reversed Number: %d\n", rev_num);
	}

	return 0;
}	
