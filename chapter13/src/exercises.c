// # include <stdio.h> 
// int main( ) 
// { 
// int  num[ 26 ], temp ; 
// num[ 0 ] = 100 ; 
// num[ 25 ] = 200 ; 
// temp = num[ 25 ] ; 
// num[ 25 ] = num[ 0 ] ; 
// num[ 0 ] = temp ; 
// printf ( "%d %d\n", num[ 0 ], num[ 25 ] ) ; 
// return 0 ; 
// } 

// # include <stdio.h> 
// int main( ) 
// { 
// int  array[ 26 ], i ; 
// for ( i = 0 ; i <= 25 ; i++ ) 
// { 
// array[ i ] = 'A' + i ; 
// printf ( "%d %c\n", array[ i ], array[ i ] ) ; 
// } 
// return 0 ; 
// }

// # include <stdio.h> 
// int main( ) 
// { 
// int  sub[ 50 ], i ; 
// for ( i = 0 ; i <= 48 ; i++ ) ; 
// { 
// sub[ i ] = i ; 
// printf ( "%d\n", sub[ i ] ) ; 
// } 
// return 0 ; 
// }

// # include <stdio.h> 
// int main( ) 
// { 
// int  size ; 
// scanf ( "%d", &size ) ; 
// int  arr[ size ] ; 
// for (int i = 1 ; i <= size ; i++ ) 
// {  
// scanf ( "%d", &arr[ i ] ) ; 
// printf ( "%d\n", arr[ i ] ) ; 
// }  
// return 0 ; 
// }

// # include <stdio.h> 
// int main( ) { 
// int  b[ ] = { 10, 20, 30, 40, 50 } ;  
// int  i ; 
// for ( i = 0 ; i <= 4 ; i++ ) 
// printf ( "%d\n", *( b + i ) ) ; 
// return 0 ;
// } 

// # include <stdio.h> 
// int main( ) 
// { 
// int  b[ ] = { 0, 20, 0, 40, 5 } ;  
// int  i, *k ; 
// k = b ; 
// for ( i = 0 ; i <= 4 ; i++ ) 
// { 
// printf ( "%d\n", *k ) ; 
// k++ ;  
// }  
// return 0 ; 
// } 

// # include <stdio.h> 
// void change ( int  *, int ) ; 
// int main( ) 
// { 
// int  a[ ] = { 2, 4, 6, 8, 10 } ; 
// int  i ; 
// change ( a, 5 ) ; 
// for ( i = 0 ; i <= 4 ; i++ ) 
// printf ( "%d\n", a[ i ] ) ; 
// return 0 ; 
// } 
// void change ( int  *b, int  n )  
// { 
// int  i ; 
// for ( i = 0 ; i < n ; i++ ) 
// *( b + i ) = *( b + i ) + 5 ; 
// }

//  # include <stdio.h> 
// int main( ) 
// { 
// static int  a[ 5 ] ; 
// int  i ; 
// for ( i = 0 ; i <= 4 ; i++ )  
// printf ( "%d\n", a[ i ] ) ; 
// return 0 ; 
// } 

//  # include <stdio.h> 
// int main( ) 
// { 
// int  a[ 5 ] = { 5, 1, 15, 20, 25 } ; 
// int  i, j, k = 1, m ; 
// i = ++a[ 1 ] ; 
// j = a[ 1 ]++ ; 
// m = a[ i++ ] ; 
// printf ( "%d %d %d\n", i, j, m ) ; 
// } 

// # include <stdio.h> 
// int main( )  
// { 
// int  array[ 6 ] = { 1, 2, 3, 4, 5, 6 } ; 
// int  i ; 
// for ( i = 0 ; i <= 25 ; i++ ) 
// printf ( "%d\n", array[ i ] ) ; 
// return 0 ; 
// } 

// #include <stdio.h>
// int main( ) 
// { 
// int  a[ ] = { 10, 20, 30, 40, 50 } ;  
// int  j ; 
// j = a ;  /* store the address of zeroth element */ 
// j = j + 3 ; 
// printf ( "%d\n" *j ) ; 
// return 0 ; 
// } 

# include <stdio.h> 
int main( ) 
{ 
// int  max = 5 ; 
// float  arr[ max ] ; 
// for ( i = 0 ; i < max ; i++ ) 
// scanf ( "%f", &arr[ i ] ) ; 
return 0 ; 
} 