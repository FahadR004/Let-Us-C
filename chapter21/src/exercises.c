 
# include <stdio.h> 
void showbits ( unsigned char ) ; 
 
// int main( ) 
// { 
//  char num = 5, j, k ; 
 
//  printf ( "\nDecimal %d is same as binary ", num ) ; 
//  showbits ( num ) ;  
 
//  for ( j = 1 ; j <= 3 ; j++ ) 
//  { 
//   k = num >> j ; 
//   printf ( "\n%d right shift %d gives ", num, j ) ; 
//   showbits ( k ) ;  
//  } 
//   printf("\n");
//  return 0 ;  
// } 
// void showbits ( unsigned char  n ) 
// { 
//  int i ; 
//  unsigned char  j, k, andmask ; 
 
//  for ( i = 7 ; i >= 0 ; i-- ) 
//  { 
//   j = i ;  
//   andmask = 1 << j ; 
//   k = n & andmask ; 
//   k == 0 ? printf ( "0" ) : printf ( "1" ) ; 
//  } 
// }


# define _BV(x)  ( 1 <<  x ) 
# include <stdio.h> 
int  main( ) 
{ 
unsigned  char  a ; 
a = _BV(3) ; 
printf ( "a = %02x\n", a ) ; 
return 0 ; 
}