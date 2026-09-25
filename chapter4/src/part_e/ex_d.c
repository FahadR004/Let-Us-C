#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846 
#endif

int main() {
	double angle, rad_angle, sq_sin, sq_cos, sum;

	printf("Enter an angle: ");
	scanf("%lf", &angle);

	rad_angle = (angle*M_PI)/180;
	sq_sin = pow(sin(rad_angle), 2.0);
	sq_cos = pow(cos(rad_angle), 2.0);
	sum = sq_sin + sq_cos;
	(fabs(sum - 1) < 1e-9) ? printf("Sin(%.2f)+Cos(%.2f)=1!\n", angle, angle) : printf("Sum of Sin(%f) and Cos(%f) is not equal to 1!\n", angle, angle);
	
	return 0;

}


