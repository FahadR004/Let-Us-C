// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	FILE *fp;
// 	char ch;

// 	fp = fopen("../docs/chapter19_solutions.txt", "r");
// 	if (fp == NULL) {
// 		printf("ERRORR\n");
// 		// return 1;
// 		exit(1);
// 	}
// 	while (1) {
// 		ch = fgetc(fp);
// 		if (ch == EOF)
// 			break;
// 		printf("%c", ch);
// 	}
// 	printf("\n");
// 	fclose(fp);
// 	return 0;
// }

/* Count chars, spaces, tabs and newlines in a file */  
// # include <stdio.h> 
// int main( ) 
// { 
// FILE  *fp ; 
// char  ch ; 
// int  nol = 0, not = 0, nob = 0, noc = 0 ; 
// fp = fopen ( "PR1.C", "r" ) ; 
// while ( 1 ) 
// {
// 	ch = fgetc ( fp ) ; 
// if ( ch == EOF ) 
// break ; 
// noc++ ; 
// if ( ch == '  ' ) 
// nob++ ; 
// if ( ch == '\n' ) 
// nol++ ; 
// if ( ch == '\t' ) 
// not++ ; 
// } 
// fclose ( fp ) ; 
// printf ( "Number of characters = %d\n", noc ) ; 
// printf ( "Number of blanks = %d\n", nob ) ; 
// printf ( "Number of tabs = %d\n", not ) ; 
// printf ( "Number of lines = %d\n", nol ) ; 
// return 0 ; 
// }

// Copies data from src file into target file
// # include <stdio.h> 
// # include <stdlib.h> 
// int main( ) 
// { 
//  FILE  *fs, *ft ; 
//  char  ch ; 
 
//  fs = fopen ( "./docs/chapter19_solutions.txt", "r" ) ; 
//  if ( fs == NULL ) 
//  { 
//   puts ( "Cannot open source file" ) ; 
//   exit ( 1 ) ; 
//  } 
//  ft = fopen ( "pr2.c", "w" ) ; 
//  if ( ft == NULL ) 
//  { 
//   puts ( "Cannot open target file" ) ; 
//   fclose ( fs ) ; 
//   exit ( 2 ) ; 
//  } 
//  while ( 1 ) 
//  { 
//   ch = fgetc ( fs ) ; 
 
//   if ( ch == EOF ) 
//    break ; 
//   else 
//    fputc ( ch, ft ) ; 
//  } 
//  fclose ( fs ) ; 
//  fclose ( ft ) ; 
//  return 0 ; 
// }

// Writes lines in files
// # include <stdio.h> 
// # include <stdlib.h> 
// # include <string.h> 
// int main( ) 
// { 
// FILE  *fp ; 
// char  s[ 80 ] ; 
// fp = fopen ( "POEM.TXT", "w" ) ; 
// if ( fp == NULL ) 
// { 
// printf ( "Cannot open file\n" ) ; 
// exit ( 1 ) ; 
// } 
// printf ( "\nEnter a few lines of text:\n" ) ; 
// while ( fgets ( s, sizeof(s), stdin ) != NULL ) 
// { 
// 	fputs ( s, fp ) ; 
// 	fputs ( "\n", fp ) ; 
// } 
// fclose ( fp ) ; 
// return 0 ; 
// }

/* Reads strings from the file and displays them on screen */ 
// # include <stdio.h> 
// # include <stdlib.h> 
// int main( ) 
// { 
// FILE  *fp ; 
// char  s[ 80 ] ; 
// fp = fopen ( "POEM.TXT", "r" ) ; 
// if ( fp == NULL ) 
// { 
// puts ( "Cannot open file" ) ; 
// exit ( 1 ) ; 
// } 
// while ( fgets ( s, 79, fp ) != NULL ) 
// printf ( "%s" , s ) ; 
// printf ( "\n" ) ; 
// fclose ( fp ) ; 
// return 0 ; 
// } 

/* Writes records to a file using structure */  
// # include <stdio.h>
// #include <stdlib.h>

// int main( ) 
// { 
// FILE  *fp ; 
// char  another = 'Y' ;  
// struct emp  
// { 
// char  name[ 40 ] ; 
// int  age ; 
// float  bs ; 
// } ; 
// struct emp  e ; 
// fp = fopen ( "EMPLOYEE.DAT", "w" ) ;
// if ( fp == NULL ) 
// { 
// puts ( "Cannot open file" ) ; 
// exit ( 1 ) ; 
// } 
// while ( another == 'Y' ) 
// { 
// printf ( "\nEnter name, age and basic salary: " ) ; 
// scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ; 
// fprintf ( fp, "%s %d %f\n", e.name, e.age, e.bs ) ;  
// printf ( "Add another record (Y/N) " ) ; 
// // fflush ( stdin ) ; 
// getchar();
// another = getchar( ) ; 
// } 
// fclose ( fp ) ; 
// return 0 ; 
// } 

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	FILE *fp;
// 	char another = 'Y';
// 	struct emp {
// 		char name[40];
// 		int age;
// 		float bs;
// 	}
// 	fp = fopen("EMPLOYEE.DAT", "r");
// 	while (fscanf(""))

// 	return 0;
// }


// READ FROM AND WRITE INTO BINARY FILES
// # include <stdio.h> 
// # include <stdlib.h> 
// int main( ) 
// { 
// FILE  *fs, *ft ; 
// int ch ; 
// fs = fopen ( "pr1.exe", "rb" ) ; 
// if ( fs == NULL ) 
// { 
// puts ( "Cannot open source file" ) ; 
// exit ( 1 ) ; 
// } 
// ft = fopen ( "newpr1.exe", "wb" ) ;
// if ( ft == NULL ) 
// { 
// puts ( "Cannot open target file" ) ; 
// fclose ( fs ) ; 
// exit ( 2 ) ; 
// } 
// while ( 1 ) 
// { 
// ch = fgetc ( fs ) ; 
// if ( ch == EOF ) 
// break ; 
// else 
// fputc ( ch, ft ) ; 
// } 
// fclose ( fs ) ; 
// fclose ( ft ) ; 
// return 0 ; 
// }

// # include <stdio.h> 
// # include <stdlib.h> 

// int main( ) 
// { 
//  FILE  *fp ; 
//  char  another = 'Y' ;  
//  struct emp  
//  { 
//   char  name[ 40 ] ; 
//   int  age ; 
//   float  bs ; 
//  } ; 
//  struct emp  e ; 
  
//  fp = fopen ( "EMP.DAT", "wb" ) ; 
 
//  if ( fp == NULL ) 
//  { 
//   puts ( "Cannot open file" ) ; 
//   exit ( 1 ) ; 
//  } 
 
//  while ( another == 'Y' ) 
//  { 
//   printf ( "\nEnter name, age and basic salary: " ) ; 
//   scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ; 
//   fwrite ( &e, sizeof ( e ), 1, fp ) ;  
 
//   printf ( "Add another record (Y/N) " ) ; 
//   // fflush ( stdin ) ; 
//   getchar();
//   another = getchar( ) ; 
//  } 
 
//  fclose ( fp ) ; 
//  return 0 ; 
// }

/* Low-level FILE I/O, File-copy program which copies text, .com and .exe files */ 
# include <fcntl.h>
#include <unistd.h>
#include <sys/io.h> 
# include <sys/types.h>  /* if present in sys directory use "sys\\types.h" */ 
# include <sys/stat.h>  /* if present in sys directory use "sys\\stat.h" */ 
# include <stdlib.h> 
# include <stdio.h> 
int main( ) 
{ 
char  buffer[ 512  ], source [ 128  ], target [ 128  ] ; 
int  inhandle, outhandle, bytes ; 
printf ( "\nEnter source file name" ) ; 
scanf ("%s", source ) ; 
inhandle = open ( source, O_RDONLY ) ;
if ( inhandle == -1 ) 
 { 
  puts ( "Cannot open file" ) ; 
  exit ( 1 ) ; 
 } 
 
 printf ( "\nEnter target file name" ) ; 
 scanf("%s", target ) ; 
 
 outhandle = open ( target, O_CREAT | O_WRONLY,  S_IWRITE ) ; 
 if ( outhandle == -1 ) 
 { 
  puts ( "Cannot open file" ) ; 
  close ( inhandle ) ; 
  exit ( 2 ) ; 
 } 
 
 while ( 1 ) 
 { 
  bytes = read ( inhandle, buffer, 512 ) ; 
 
  if ( bytes > 0 ) 
   write ( outhandle, buffer, bytes ) ; 
  else  
   break ; 
 } 
 
 close ( inhandle ) ; 
 close ( outhandle ) ; 
 return 0 ; 
}