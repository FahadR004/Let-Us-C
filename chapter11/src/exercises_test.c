// # include <stdio.h> 
// int f ( int ) ; 
// int g ( int ) ; 
// int main( ) 
// { 
// int  x, y, s = 2 ; 
// s *= 3 ; 
// y = f ( s ) ; 
// x = g ( s ) ; 
// printf ( "%d %d %d\n", s, y, x ) ; 
// return 0 ; 
// } 
// int  t = 8 ; 
// int f ( int  a ) 
// { 
// printf("INSIDE F: value of a before = %d\n", a);
// a += -5 ; 
// printf("INSIDE F: value of a after = %d\n", a);
// t -= 4 ; 
// return ( a + t ) ; 
// } 
// int g ( int  a ) 
// { 
// printf("INSIDE F: value of a before = %d\n", a);
// a = 1 ; 
// printf("INSIDE F: value of a after = %d\n", a);
// t += a ; 
// return ( a + t ) ; 
// } 


// # include <stdio.h> 
// int main( ) 
// { 
// static int  count = 5 ; 
// printf ( "count = %d\n", count-- ) ; 
// if ( count != 0 ) 
// main( ) ;
// return 0 ; 
// }

// # include <stdio.h> 
// int g ( int ) ; 
// int main( ) 
// { 
// int  i, j ; 
// for ( i = 1 ; i < 5 ; i++ ) 
// { 
// j = g ( i ) ; 
// printf ( "%d\n", j ) ; 
// } 
// return 0 ; 
// } 
// int g ( int  x ) 
// { 
// static int  v = 1 ; 
// int  b = 3 ; 
// v += x ; 
// return ( v + x + b ) ; 
// }

// # include <stdio.h> 
// int main( ) 
// { 
// func( ) ; 
// func( ) ; 
// return 0 ; 
// } 
// void func( ) 
// { 
// auto int  i = 0 ; 
// register int j = 0 ; 
// static int k = 0 ; 
// i++ ;  j++ ;  k++ ; 
// printf ( "%d % d %d\n", i, j, k ) ; 
// }

// # include <stdio.h> 
// void func();
// int main( ) 
// { 
// func( ) ; 
// func( ) ; 
// return 0 ; 
// } 
// void func( ) 
// { 
// auto int  i = 0 ; 
// register int j = 0 ; 
// static int k = 0 ; 
// i++ ;  j++ ;  k++ ; 
// printf ( "%d % d %d\n", i, j, k ) ; 
// } 


// # include <stdio.h> 
// int x = 10 ; 
// int main( ) 
// { 
// int x = 20 ; 
// char  ch = 200 ; 
// printf ( "%d %c\n", ch ) ;
// { 
// int x  = 30 ; 
// printf ( "%d\n", x ) ; 
// } 
// printf ( "%d\n", x ) ; 
// return 0 ; 
// } 


 # include <stdio.h> 
int main( ) 
{
long float  a = 25.345e454 ; 
unsigned double  b = 25 ; 
printf ( "%lf %d\n", a, b ) ; 
return 0 ; 
} 




















