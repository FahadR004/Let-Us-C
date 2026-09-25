#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float weight, height;
	float bmi;
	printf("Enter weight (in kgs) and height (in meters) separated by spaces: ");
	scanf("%f %f"if (bmi < 15) 
		printf("Your BMI category is Starvation"); , &weight, &height);

	bmi = weight/(pow(height, 2.0));

	if (bmi < 15) 
		printf("Your BMI category is Starvation\n");
	else if (bmi >= 15.1 && bmi <= 17.5) 
		printf("Your BMI category is Anorexic\n");
	else if (bmi >= 17.6 && bmi <= 18.5) 
		printf("Your BMI category is Underweight\n");
	else if (bmi >= 18.6 && bmi <= 24.9) 
		printf("Your BMI category is Ideal\n"); 
	else if (bmi >= 25 && bmi <= 25.9)
		printf("Your BMI category is Overweight\n"); 
	else if (bmi >= 30 && bmi <= 30.9) 
		printf("Your BMI category is Obese\n");
	else 
		printf("Your BMI category is Morbidly Obese\n"); 
}