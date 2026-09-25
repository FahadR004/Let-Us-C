#include <stdlib.h>
#include <stdio.h> 

int main() {
	int basic_sal;
	
	printf("Enter your basic salary: ");
	scanf("%d", &basic_sal);

	printf("Your gross salary: %.2f\n", basic_sal + 0.4*basic_sal + 0.2*basic_sal);
} 
