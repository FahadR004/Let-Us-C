#include <stdio.h>
#include <stdlib.h>

int main() {
	int age_r, age_s, age_a;	
	
	printf("Enter ages of Ram, Shyam and Ajay (with spaces): ");
	scanf("%d %d %d", &age_r, &age_s, &age_a);

	if (age_r < age_s && age_r < age_a)
		printf("Ram is the youngest of the three");
	else if (age_s < age_r && age_s < age_a)
		printf("Shyam is the youngest of the three");
	else 
		printf("Ajay is the youngest of the three");

	return 0;
}