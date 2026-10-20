// # include <stdio.h> 
// # include <ctype.h> 

// int main( ) 
// { 
// char  ch ; 
// ch = getchar( ) ; 
// if ( islower ( ch ) ) 
// putchar ( toupper ( ch ) ) ; 
// else 
// putchar ( tolower ( ch ) ) ;
// }

// # include <stdio.h> 
//          int main( ) 
// { 
//  int  i = 2 ; 
//  float  f = 2.5367 ; 
//  char  str[   ] = "Life is like that" ; 
 
//  printf ( "%4d\t%3.3f\t%4s\n", i, f, str ) ; 
//  return 0 ; 
// }

// # include <stdio.h> 
//          int main( ) 
// { 
//  printf ( "More often than \b\b not \rthe person who wins is the one who thinks he can!\n" ) ; 
//  return 0 ; 
// }

// # include <stdio.h> 
//          char  p[   ] = "The sixth sick sheikh's sixth ship is sick" ; 
// int main( ) 
// { 
//  int  i = 0 ; 
//  while ( p[ i ] != '\0' ) 
//  { 
//   putchar ( p[ i ] ) ; 
//   i++ ; 
//  } 
//  return 0 ; 
// }

// # include <stdio.h> 
//          int main( ) 
// { 
//  int  i ; 
//  char  a[   ] = "Hello" ; 
//  while ( a != '\0' ) 
//  {
//  	printf ( "%c", *a ) ; 
//   a++ ; 
//  } 
//  return 0 ; 
// }

// # include <stdio.h> 
//          int main( )   
// { 
//  double  dval ; 
//  scanf ( "%f", &dval ) ; 
//  printf ( "Double Value = %lf\n", dval ) ; 
//  return 0 ; 
// } 

// # include <stdio.h> 
//          int main( ) 
// { 
//  char  *mess[ 5 ] ; 
//  int  i ; 
//  for ( i = 0 ; i < 5 ; i++ ) 
//   scanf ( "%s", mess[ i ] ) ; 
//  return 0 ; 
// } 

# include <stdio.h> 
int main( ) 
{ 
char  buffer[ 50 ] ; 
int  no = 97; 
double  val = 2.34174 ; 
char  name[ 10 ] = "Shweta" ; 
sprintf ( buffer, "%d %lf %s", no, val, name ) ; 
printf ( "%s\n", buffer ) ; 
sscanf ( buffer, "%4d %lf %s", &no, &val, name ) ; 
printf ( "%s\n", buffer ) ; 
printf ( "%d %lf %s\n", no, val, name ) ; 
return 0 ; 
}