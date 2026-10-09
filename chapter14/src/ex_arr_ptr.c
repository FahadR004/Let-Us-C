// #include <stdio.h>
// #include <stdlib.h>

// int main () {

// 	int  s[ 4 ][ 2 ] = { 
// 		{ 1234, 56 }, 
// 		{ 1212, 33 }, 
// 		{ 1434, 80 }, 
// 		{ 1312, 78 } 
// 	} ; 
// 	int  i ; 
// 	for ( i = 0 ; i <= 3 ; i++ ) 
// 	printf ( "Address of %d th 1-D array = %p\n", i, s[ i ] ) ;
// 	return 0;
// }


// #include <stdio.h> 

// int main( ) 
// {
//   int  s[ 4 ][ 2 ] = { 
//       { 1234, 56 }, 
//       { 1212, 33 }, 
//       { 1434, 80 }, 
//       { 1312, 78 } 
//   };   
//   int  i, j; 
 
//  for ( i = 0 ; i <= 3 ; i++ ) 
//  { 
//   for ( j = 0 ; j <= 1 ; j++ ) 
//    printf ( "%d ", *( *( s + i ) + j ) ) ;  
//   printf ( "\n" ) ; 
//  } 
//  return 0 ; 
// }


// #include <stdio.h> 

// int main( ) { 
//  int  s[ 4 ][ 2 ] = { 
//       { 1, 2 }, 
//       { 3, 4 }, 
//       { 5, 6 }, 
//       { 7, 8 } 
//   };   
//  int  ( *p )[ 2 ] ; 
//  int  i, j, *pint ; 
//  for ( i = 0 ; i <= 3 ; i++ ) 
//  { 
//   p = &s[ i ] ; 
//   pint = ( int * ) p ; 
//   for ( j = 0 ; j <= 1 ; j++ ) 
//     printf ( "%d ", *( pint + j ) ) ;  
//    printf("\n");
//  } 
//  return 0 ; 
// } 

// #include <stdio.h>
// #include <stdlib.h>

// void print ( int  q[   ][ 4 ], int , int ) ; 
// int main( ) 
// { 
//  int  a[ 3 ][ 4 ] = { 
//       1, 2, 3, 4, 
//       5, 6, 7, 8, 
//       9, 0, 1, 6 
//            } ; 
//  // display ( a, 3, 4 ) ; 
//  // show ( a, 3, 4 ) ; 
//  print ( a, 3, 4 ) ; 
//  return 0 ; 
// }

// void print ( int  q[   ][ 4 ], int  row, int  col ) 
// { 
//  int  i, j ; 
 
//  for ( i = 0 ; i < row ; i++ ) 
//  { 
//   for ( j = 0 ; j < col ; j++ ) 
//    printf ( "%d ", q[ i ][ j ] ) ; 
//   printf ( "\n" ) ; 
//  } 
// } 

// # include <stdio.h> 
// int main( ) 
// { 
// 	static int  a[   ] = { 0, 1, 2, 3, 4 } ; 
// 	int b = 4;
// 	int *ptr_b = &b;
// 	int  *p[ ] = { a, a + 1, a + 2, a + 3, a + 4 } ;
// 	printf ( "%p %p %p %d\n", p, *p, a, * ( *p ) ) ; 
// 	return 0 ; 
// }


// # include <stdio.h> 
// int main( ) 
// { 
//  int  n[ 3 ][ 3 ] = { 
//       2, 4, 3, 
//       6, 8, 5, 
//       3, 5, 1  
//      } ; 
//      // original
//      //printf ( "%d %d %d\n", *n, n[ 3 ][ 3 ], n[ 2 ][ 2 ] ) ; 
//  	printf ( "%d %d %d\n", **n, *( *(n+1) +1), n[ 2 ][ 2 ] ) ; 
//  return 0 ; 
// } 


// # include <stdio.h> 
// int main( ) 
// { 
//  int  n[ 3 ][ 3 ] = {  
//       2, 4, 3, 
//       6, 8, 5, 
//       3, 5, 1  
//              } ; 
//  int  i, *ptr ; 
//  ptr = n ; 
//  for ( i = 0 ; i <= 8 ; i++ ) 
//   printf ( "%d\n", *( ptr + i ) ) ; 
//  return 0 ; 
// }

# include <stdio.h> 
int main( ) { 
 int  n[ 3 ][ 3 ] = {  
      2, 4, 3, 
      6, 8, 5, 
      3, 5, 1  
 } ; 
//  int threed [3][2][3] = {
// 		{
// 			{1, 2, 3},
// 			{4, 5, 6}
// 		}, 
// 		{
// 			{7, 8, 9},
// 			{10, 11, 12}
// 		}, 
// 		{
// 			{13, 14, 15},
// 			{16, 17, 18}
// 		}, 
// 	};
// 	int threed [3][2][3] = {
// 		1,2,3, 4,5,6,   7,8,9, 10,11,12,  13,14,15, 16,17,18
// 	};

// printf("First Element: %d, Last Element: %d\n", threed[0][0][0], threed[2][1][2]);

 int  i, j ; 
 for ( i = 0 ; i <= 2 ; i++ ) 
  for ( j = 0 ; j <= 2 ; j++ ) 
   printf ( "%d %d\n", n[ i ][ j ], *( *( n + i ) + j ) ) ; 
 return 0 ; 
}



