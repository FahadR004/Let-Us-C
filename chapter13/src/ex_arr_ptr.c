// # include <stdio.h> 
// void disp ( int  * ) ; 
// void show (int **n);
// int main( ) { 
// 	int  i ; 
// 	int  marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ; 
// 	for ( i = 0 ; i <= 6 ; i++ ) 
// 	disp ( &marks[ i ] ) ; 
// 	return 0 ; 
// } 

// void disp ( int  *n ) { 
// 	show (&n); 
// } 

// void show (int **n) {
// 	printf("%d \n", **n);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main () {
// 	int x, *ptr_x;
// 	ptr_x = &x;
// 	// Arguments are passed/evaluated from right to left in a function, so first we print original value, increment it, then add +2 (only in print), +1 (only in print), then print original value  
// 	printf("Address: %p, Address + 1: %p, ++Address: %p, Address + 3: %p\n", ptr_x, ptr_x+1, ptr_x+2, ptr_x++);

// 	// 4 will be printed as in difference of 4 bytes
// 	int arr[] = {1, 2, 3, 4, 5};
// 	printf("Address 0 : %p, Address 4: %p, Address 4-0: %ld\n", &arr[0], &arr[4],  &arr[4] - &arr[0]);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main () {
// 	int numbers[] = {1, 2, 3, 4, 5};
// 	int *n = &numbers[0];
// 	printf("*numbers: %d", *numbers);
// 	int i;
// 	for (i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)  {
// 		printf("Address: %p, Element: %d\n", n+i, *(n+i));
// 		// printf("Address: %p, Element: %d\n", n, *n);
// 		// n++;
// 	}	
// 	return 0;
// }

# include <stdio.h> 
int main( ) 
{ 
int  num[ ] = { 24, 34, 12, 44, 56, 17 } ; 
int  i ; 
for ( i = 0 ; i <= 5 ; i++ ) 
{ 
printf ( "address = %p ", &num[ i ] ) ; 
printf ( "element = %d %d ", num[ i ], *( num + i ) ) ;  
printf ( "%d %d\n", *( i + num ), i[ num ] ) ; 
} 
return 0 ; 
} 