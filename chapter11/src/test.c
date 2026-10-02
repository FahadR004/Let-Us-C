#include <stdio.h>
#include <stdlib.h>

int * fun( ) ; 
int main() {
	long number = 32;
	printf("Size of: %ld, Number: %ld\n", sizeof(number), number);

	short number2 = 32;
	printf("Size of: %ld, Number: %d \n", sizeof(number2), number2);

	int unsigned number3 = 32;
	printf("Size of: %ld, Number: %d \n", sizeof(number3), number3);

	// char  ch = 291 ; 
	// printf ( "\n%d %c\n", ch, ch );

	// for ( ch = 0 ; ch <= 255 ; ch++ ) 
	// printf ( "%d %c\n", ch, ch ) ; 
	
	int* j;
	j = fun( ) ; 
	printf ( "%d\n", *j ) ; 
 
 	return 0;
}

int *fun( ) 
{ 
int k = 35 ; 
return ( &k ) ; 
}