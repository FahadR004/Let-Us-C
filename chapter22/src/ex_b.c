#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct {
	int x;
	int y;
} Point;

void get_shape_type(int n, ...);

int main() {
	Point p;
	p.x = 1;
	p.y = 2;

	get_shape_type(1, p); // Point

	Point p1, p2;
	p1.x = 1, p2.x = 2;
	p1.y = 4, p2.y = 3;

	get_shape_type(2, p1, p2);  // Line

	Point tp1, tp2, tp3;
	tp1.x = 1, tp2.x = 2, tp3.x = 3;
	tp1.y = 2, tp2.y = 3, tp3.y = 4;

	get_shape_type(3, tp1, tp2, tp3); // Triangle 

	Point sp1, sp2, sp3, sp4;
	sp1.x = 1, sp2.x = 2, sp3.x = 3, sp4.x = 4;
	sp1.y = 4, sp2.y = 3, sp3.y = 2, sp4.y = 1;

	get_shape_type(4, sp1, sp2, sp3, sp4); // Square


	return 0;
}

void get_shape_type(int n, ...) {
	int i;
	char shape_name[32];
	Point p;

	va_list ptr;
	va_start(ptr, n);

	if (n == 1) {
		strcpy(shape_name, "Point");
	} else if (n == 2) {
		strcpy(shape_name, "Line");
	} else if (n == 3) {
		strcpy(shape_name, "Triangle");
	} else if (n == 4) {
		strcpy(shape_name, "Square/Rectangle");
	} else {
		printf("Shape Unknown\n");
		return;
	}

	printf("Shape is a %s\n", shape_name);
	printf("Printing coordinate values: \n");
	for (i = 0; i < n; i++) {
		p = va_arg(ptr, Point);
		printf("x%d=%d, y%d=%d\n", i+1, p.x, i+1, p.y);
	}

}