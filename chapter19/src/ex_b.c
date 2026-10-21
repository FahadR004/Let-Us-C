#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fs;
	FILE *ft;
	char buffer[1000];

	fs = fopen("docs/chapter19_solutions.txt", "r");
	if (fs == NULL) {
		printf("ERROR: Cannot find source file\n");
		return 1;
	}

	ft = fopen("docs/ex_b_target.txt", "a");
	if (ft == NULL) {
		printf("ERROR: Cannot find target file\n");
		return 1;
	}
	// fprintf(ft, "\n");
	// while (!feof(fs)) {
	// 	printf("%s", buffer);
	// 	fgets(buffer, sizeof(buffer), fs);
	// 	fprintf(ft, "%s", buffer);
	// 	// fputs(buffer, ft);
	// 	// fputs("\n", ft);
	// }
	// if (ftell(ft) != 0) fprintf(ft, "\n");
	while (fgets(buffer, sizeof(buffer), fs)) {
		fprintf(ft, "%s", buffer);
	}
	fprintf(ft, "\n");
	printf("Successfully copied source file into target file\n");
	fclose(fs);
	fclose(ft);

	return 0;
}

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
//  ft = fopen ( "./docs/ex_b_target.txt", "a" ) ; 
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