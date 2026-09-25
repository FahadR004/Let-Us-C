#include <stdio.h>
#include <stdlib.h>

int main() {
	int choice, num, i, fact, prime, flag;

	while (choice != 4) {
		printf("=========== MENU ==============\n");
		printf("You can get: \n");
		printf("1) Factorial of a number\n");
		printf("2) Prime or not\n");
		printf("3) Odd or even\n");
		printf("4) Exit\n");

		printf("Enter your choice: ");
		scanf("%d", &choice);

		if (choice == 4) {
			printf("Exited\n");
			break;
		}

		printf("Enter a number: ");
		scanf("%d", &num);

		switch (choice) {
			case 1:
				fact = 1;
				for (i = 1; i <= num; i++) {
					fact = fact* i;
				}
				printf("The factorial of %d is %d\n", num, fact);
				break;
			case 2:
				flag = 0;
				prime = 2;
				while (prime != num) {
					if (num % prime == 0) {
						flag = 1;
						break;
					}
					prime++;
				}
				if (!flag)
					printf("%d is a prime number\n", num);
				else 	
					printf("%d is not a prime number\n", num);
				break;

			case 3:
				if (num % 2 == 0) 
					printf("%d is a even number\n", num);
				else 
					printf("%d is an odd number\n", num);
				
				break;
			
			// case 4:
			// 	printf("Exited...");
			// 	break;

			default: 
				printf("Please enter a valid option \n");
				break;
		}

	}
	return 0;
}