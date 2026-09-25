#include <stdlib.h>
#include <stdio.h>

int main() {
	int DLD, COD, CA, MBSD, OS;
	
	// Can also take marks with one scanf statement but used separate for clarity
	printf("Enter DLD marks");
	scanf("%d", &DLD);
	printf("Enter COD marks");
	scanf("%d", &COD);
	printf("Enter CA marks");
	scanf("%d", &CA);
	printf("Enter MBSD marks");
	scanf("%d", &MBSD);
	printf("Enter OS marks");
	scanf("%d", &OS);
	float aggregate = DLD+COD+CA+MBSD+OS;
	float percentage = (aggregate/500)*100;
	printf("Aggregate Marks: %.3f, Percentage: %.3f\n", aggregate, percentage); 
}
