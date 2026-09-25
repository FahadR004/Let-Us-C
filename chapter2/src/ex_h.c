#include <stdio.h>
#include <stdlib.h>

int main() {
	int C, D, temp;
	printf("Enter two numbers (with spaces): ");
	scanf("%d %d", &C, &D);
	
	printf("Before swap: C = %d, D=%d\n", C, D);
	temp = C;
	C = D;
	D = temp;

	printf("After swap: C = %d, D=%d\n", C, D);

}
