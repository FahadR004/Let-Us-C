#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int num1, num2;
	
	printf("Enter two numbers (separated by spaces): ");
	scanf("%d %d", &num1, &num2);

	// // Using pow
	// printf("The number %d to the power of %d is: %.2f\n", num1, num2, pow(num1, num2));	

	// Using while loop
	// int count = 0;
	int power = 1;
	// while (count < num2) {
	// 	power = power*num1;
	// 	count++;
	// }

	for (int i = 0; i < num2; i++) {
		power = power*num1;
	}

	printf("The number %d to the power of %d is: %d\n", num1, num2, power);	
	
	return 0;

}