#include <stdio.h>
#include <stdlib.h>

#define _BV(x) (1 << x)

int main() {
	int i = 0;
	int color;
	
	printf("Enter a number: ");
	scanf("%d", &color);

	if ((color & _BV(0)) == (_BV(0))) {
		printf("Violet\n");
	} else if ((color & _BV(1)) == (_BV(1))) {
		printf("Indigo\n");
	} else if ((color & _BV(2)) == (_BV(2))) {
		printf("Blue\n");
	} else if ((color & _BV(3)) == (_BV(3))) {
		printf("Green\n");
	} else if ((color & _BV(4)) == (_BV(4))) {
		printf("Yellow\n");
	} else if ((color & _BV(5)) == (_BV(5))) {
		printf("Orange\n");
	} else if ((color & _BV(6)) == (_BV(6))) {
		printf("Red\n");
	} else {
		printf("Invalid Input\n");
	}

	return 0;
}