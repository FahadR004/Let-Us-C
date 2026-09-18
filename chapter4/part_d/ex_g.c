#include <stdio.h>
#include <stdlib.h>

int main( ) { 
	float R,G,B;
	float R_div, G_div, B_div;
	float C, M, Y, K;
	float white;

	printf("Enter values of in RGB format separated by spaces: ");
	scanf("%f %f %f", &R, &G, &B);

	if (R < 0 || G < 0 || B < 0) 
		printf("RGB values cannot be negative!\n");
		return 1;

	if (R > 255 || G > 255 || B > 255)
		printf("RGB values cannot be greater than 255!\n");

	if (R == 0 && G == 0 && B == 0) 
		printf("Corresponding C, M, Y, K values are 0, 0, 0 and 1 respectively\n");


	// Finding max for white
	R_div = R/255;
	G_div = G/255;
	B_div = B/255;

	if (R_div > G_div && R_div > B_div) white = R_div;
	else if (G_div > R_div && G_div > B_div) white = G_div;
	else white = B_div;

	C = ( (white - R_div) / white);
	M = ( (white - G_div) / white);
	Y = ( (white - B_div) / white);
	K = 1 - white; // Black

	printf("Corresponding C, M, Y, K values are %d, %d, %d and %d respectively\n", &C, &M, &Y, &K);

	return 0;
}	
