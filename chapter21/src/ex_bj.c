#include <stdio.h>
#include <stdlib.h>

#define _BV(x) (1 << x)

void showbits(unsigned char n);

int main() {
	int i, temp;
	unsigned char num;
	printf("Enter a number: ");
	scanf("%d", &temp);
	num = temp;
	printf("Number: Dec=%d, Binary: ", num);
	showbits(num);
	return 0;
}

void showbits ( unsigned char  n ) 
{ 
	int i;
	unsigned char k, andmask ; 
	for ( i = 15 ; i >= 0 ; i-- ) 
	{ 
		andmask = (_BV(i)) ;   
		k = n & andmask ; 
		(k == 0) ? printf ( "0" ) : printf ( "1" ) ; 
	} 
	printf("\n");
} 