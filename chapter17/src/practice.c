// # include <stdio.h> 

// int main( ) {
// struct book 
//  { 
//   char  name [40]; 
//   float  price ; 
//   int  pages ; 
//  } ; 
 
//  struct book  b[ 100 ] ; 
//  int  i ; 
 
//  for ( i = 0 ; i <= 2 ; i++ ) 
//  { 
//   printf ( "Enter name, price and pages " ) ; 
//   // fflush ( stdin ) ; 
//   scanf ( "%s %f %d", b[ i ].name, &b[ i ].price, &b[ i ].pages ) ; 
//  } 
 
//  for ( i = 0 ; i <= 2 ; i++ ) 
//   printf ( "%s %f %d\n", b[ i ].name, b[ i ].price, b[ i ].pages ) ; 
  
//  return 0 ; 
// }


// # include <stdio.h> 
// # pragma pack(1) 

// struct emp 
// {  
// int a ;  
// char ch ; 
// float s ; 
// } ;  
// # pragma pack( ) 

// int main( ) 
// { 
// struct emp e ; 
// printf ( "%p %p %p\n", &e.a, &e.ch, &e.s ) ; 
// return 0 ; 
// }


// # include <stdio.h> 
// # include <string.h> 
// int main( ) 
// { 
// struct  gospel 
// { 
// int  num ; 
// char  mess1[ 50 ] ; 
// char  mess2[ 50 ] ; 
// } m ; 
// m.num = 1 ; 
// strcpy ( m.mess1, "If all that you have is hammer" ) ; 
// strcpy ( m.mess2, "Everything looks like a nail" ) ; 
// /* assume that the strucure is located at address 1004 */ 
// printf ( "%p %p %p\n", &m.num, m.mess1, m.mess2 ) ; 
// return 0 ; 
// } 


#include <stdio.h>

int main() {
	struct {
		int x, y;
	} s[] = {10, 20, 15, 25, 8, 75, 6, 2};
	int *i;
	i = s;

	printf("What is this?? %d %d %d %d\n",*(i+3), s[2], s[0], s[i[7]].x);

	return 0;
}