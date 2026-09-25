#include <stdio.h>
#include <stdlib.h>

int main( ) { 
	int weight;

	printf("Enter the weight of the boxer: ");
	scanf("%d", &weight);

	if (weight < 115)
		printf("Flyweight\n");
	else if (weight >= 115 && weight <= 121) 
		printf("Bantamweight\n");
	else if (weight > 122 && weight <= 153) 
		printf("Featherweight\n");
	else if (weight >= 154 && weight <= 189) 
		printf("Middleweight\n");
	else 
		printf("Heavyweight\n");

	return 0;
}	
