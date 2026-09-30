#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calc_distance(int, int, int, int);
float calc_area(int, int, int, int, int, int);
void check_point(int, int, int, int, int, int, int, int, int *);

int main () {
	int x1, y1, x2, y2, x3, y3, px, py, result;
	int *ptr_res = &result;
	x1 = 0, y1 = 0, x2 = 10, y2= 30, x3 = 20, y3 = 0;
	px = 10, py = 15;
	check_point(x1, y1, x2, y2, x3, y3, px, py, ptr_res);
	if (*ptr_res) printf("Point lies inside the triangle!\n");
	else printf("Point does not lie inside the triangle\n");
	return 0;
}

void check_point(int x1, int y1, int x2, int y2, int x3, int y3, int px, int py, int *result) {
	float area_ABC, area_PAB, area_PBC, area_PCA;
	
	// Original points
	area_ABC = calc_area(x1, y1, x2, y2, x3, y3);

	// With point(x, y)
	area_PBC = calc_area(px, py, x2, y2, x3, y3);

	area_PCA = calc_area(x1, y1, px, py, x3, y3);

	area_PAB = calc_area(x1, y1, x2, y2, px, py);

	if (((int)area_ABC) == ((int)ceil((area_PBC + area_PCA + area_PAB)))) *result = 1;
	else *result = 0;

}

float calc_area(int x1, int y1, int x2, int y2, int x3, int y3) {
	float S, a, b, c;
	a = calc_distance(x1, y1, x2, y2);
	b = calc_distance(x2, y2, x3, y3);
	c = calc_distance(x1, y1, x3, y3);

	S = (a + b + c)/(2.0);
	return (sqrt(S*(S-a)*(S-b)*(S-c)));
}

float calc_distance(int x1, int y1, int x2, int y2) {
	float sqrt_value = pow((x2-x1), 2.0) + pow((y2 - y1), 2.0);
	return (sqrt(sqrt_value));	
}