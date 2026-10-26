// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	union a {
// 		short int i;
// 		char ch[2];
// 	};

// 	struct b {
// 		short int i;
// 		char ch[2];
// 	};

// 	union a key1;
// 	struct b key2;

// 	printf("Size of Union: %ld, Size of Struct: %ld\n", sizeof(key1), sizeof(key2));
// 	printf("For Union: \n");
// 	key1.i = 512 ; 
// 	printf ( "key.i = %d\n", key1.i ) ; 
// 	printf ( "key.ch[ 0 ] = %d\n", key1.ch[ 0 ] ) ; 
// 	printf ( "key.ch[ 1 ] = %d\n", key1.ch[ 1 ] ) ; 


// 	struct  info1 
// 	{ 
// 	char  hobby[ 10 ] ; 
// 	int  crcardno ; 
// 	} ; 
// 	struct  info2 
// 	{ 
// 	char  vehno[ 10 ] ; 
// 	int  dist ; 
// 	} ; 
// 	union  info 
// 	{ 
// 	struct  info1 a ; 
// 	struct  info2  b ; 
// 	} ; 
// 	struct  employee 
// 	{ 
// 	char  n[ 20 ] ; 
// 	char  grade[ 4 ] ; 
// 	int  age ; 
// 	union  info  f ; 
// 	} ; 
// 	struct  employee  e ; 


// 	return 0;
// }

// # include <stdio.h> 
//          int main( ) 
// { 
//  enum  status { pass, fail, atkt } ; 
//  enum  status  stud1, stud2, stud3 ; 
//  stud1 = pass ; 
//  stud2 = fail ; 
//  stud3 = atkt ; 
//  printf ( "%d %d %d\n", stud1, stud2, stud3 ) ; 
//  return 0 ; 
// }	

// # include <stdio.h> 
//          int main( ) 
// { 
//  printf ( "%f\n", ( float ) ( ( int ) 3.5 / 2 ) ) ; 
//  return 0 ; 
// }

// # include <stdio.h> 
//          int main( ) 
// { 
//  float  i, j ; 
//  i = ( float ) 3 / 2 ; 
//  j = i * 3 ; 
//  printf ( "%d\n", ( int ) j ) ; 
//  return 0 ; 
// } 


// #include <stdio.h>
// int main( ) 
// { 
//  typedef  struct  patient 
//  { 
//   char  name[ 20 ] ; 
//   int  age ; 
//   int  systolic_bp ; 
//   int  diastolic_bp ; 
//  } ptt ; 
//  ptt  p1 = { "anil", 23, 110, 220 } ; 
//  printf ( "%s %d\n", p1.name, p1.age ) ; 
//  printf ( "%d %d\n", p1.systolic_bp, p1.diastolic_bp ) ; 
//  return 0 ; 
// }

//  # include <stdio.h> 
// void  show( ) ; 
//          int main( ) 
// { 
//  void  ( *s )( ) ; 
//  s = show ; 
//  ( *s )( ) ; 
//  s( ) ; 
//  return 0 ; 
// } 
// void  show( )  
// {  
//  printf ( "don't show off. It won't pay in the long run\n" ) ; 
// } 

# include <stdio.h> 
void  show ( int, float ) ; 
         int main( ) 
{ 
 void  ( *s )( int, float ) ; 
 s = show ; 
 ( *s )( 10, 3.14 ) ; 
 return 0 ; 
} 
void show ( int  i, float  f )  
{  
 printf ( "%d %f\n", i, f ) ; 
}