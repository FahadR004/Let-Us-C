#include <stdio.h>
#include <stdlib.h>

float getfloat();

int main() {
	float a;
	a = getfloat();
	printf("You entered the float value: %f \n", a);
	return 0;
}

float getfloat() {	
	char s[10];
	float var;
	printf("Enter a float value: ");
	scanf("%s", s);
	sscanf(s, "%f", &var);
	return var;
}