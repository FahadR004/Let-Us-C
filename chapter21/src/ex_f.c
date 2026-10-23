#include <stdio.h>
#include <stdlib.h>

#define SHIFT(x, y) (x >> y)
#define _BV(x) (1 << x)

void showbits(unsigned int n);

int main() {
	int user_input, res, j, year = 0;
	int data[] = { 273, 548, 786, 1096 };
	for (int i = 0; i < 4; i++) {
		printf("STUDENT %d: ", i+1);
		showbits(data[i]);
		printf("\n");
	}

	printf("Enter a room number of the student (256 onwards): ");
	scanf("%d", &user_input);

	for (int i = 0; i < 4; i++) {
		res = data[i] & user_input;
		if (res != 0) {
			printf("For data[%d] = %d, we have: ", i, data[i]);
			for (j = 0; j < 4; j++) {
				if (data[i] & _BV(j))
					printf("Student is in Year %d\n", j+1);
			}

			if (SHIFT(data[i], 4) & 1) {
				printf("Student Department: Mechanical\n");
			} else if (SHIFT(data[i], 5) & 1) {
				printf("Student Department: Chemical\n");
			} else if (SHIFT(data[i], 6) & 1) {
				printf("Student Department: Electronics\n");
			} else {
				printf("Student Department: IT\n");
			}
		}
	}

	return 0;
}

void showbits (unsigned int  n ) 
{ 
	int  i, k, andmask ; 
	for ( i = 31 ; i >= 0 ; i-- ) 
	{ 
		andmask = 1 << i ;   
		k = n & andmask ; 
		k == 0 ? printf ( "0" ) : printf ( "1" ) ; 
	} 
}