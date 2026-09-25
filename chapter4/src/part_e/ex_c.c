#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1, num2, num3, greatest_num;
	
	printf("Enter three numbers (with spaces): ");
	scanf("%d %d %d", &num1, &num2, &num3);

	greatest_num = (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2 : num3;

	printf("The biggest number of these three is: %d", greatest_num);

	return 0;
}
