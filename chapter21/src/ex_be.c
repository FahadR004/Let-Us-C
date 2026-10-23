#include <stdio.h>
#include <stdlib.h>

void showbits(unsigned short n);

int main() {
	unsigned short num;
	printf("Enter a number: ");
	scanf("%hd", &num);
	printf("Num before exchange: Dec=%d, Binary= ", num);
	showbits(num);
	num = (num << 8) | (num >> 8);
	printf("Num afters exchange: Dec=%d, Binary= ", num);
	showbits(num);
	return 0;
}

void showbits(unsigned short n) {
	int i;
	unsigned short k, andmask;
	for (i = 15; i >= 0; i--) {
		andmask = 1 << i;
		k = n & andmask;
		if (i % 4 == 0 && i != 0) {
			(k == 0) ? printf("0_") : printf("1_");
		} else {
			(k == 0) ? printf("0") : printf("1");
		}
	}
	printf("\n");
}

// void showbits (unsigned int  n ) 
// { 
// 	int  i, k, andmask ; 
// 	for ( i = 31 ; i >= 0 ; i-- ) 
// 	{ 
// 		andmask = 1 << i ;   
// 		k = n & andmask ; 
// 		k == 0 ? printf ( "0" ) : printf ( "1" ) ; 
// 	} 
// }