#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	float x, y;
	float r, phi;

	printf("Enter cartesian coordinates, x and y (with spaces): ");
	scanf("%f %f", &x, &y);
	int x_pow = pow(x, 2.0);
	int y_pow = pow(y, 2.0);	
	r  = sqrt( x_pow + y_pow );
	phi = atan( y/ x );

	printf("The polar coordinates are: r = %.2f, phi= %f radians \n", r, phi);
}
