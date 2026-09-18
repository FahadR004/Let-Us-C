#include <stdio.h> 
#include <stdlib.h>

int main( ) {
	int hardness, t_strn;
	float c_cont;
	printf("Enter values for hardness, carbon content and tensile strength of steel: ");
	scanf("%d %f %d", &hardness, &c_cont, &t_strn);

	if (hardness > 50 && c_cont < 0.7 && t_strn > 5600)
		printf("Grade 10");
	else if (hardness > 50 && c_cont < 0.7 && t_strn <= 5600)
		printf("Grade 9");
	else if (hardness <= 50 && c_cont < 0.7 && t_strn > 5600)
		printf("Grade 8");
	else if (hardness > 50 && c_cont >= 0.7 && t_strn > 5600)
		printf("Grade 7");
	else if (hardness > 50 || c_cont < 0.7 || t_strn > 5600)
		printf("Grade 6");
	else
		printf("Grade 5");

	return 0;
} 