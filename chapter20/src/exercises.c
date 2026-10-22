# include <stdio.h> 

// Using redirection with this file
// int main( ) 
// { 	
// 	int i = 1;
// 	char buffer[128];
// 	printf("This is read from the file\n");
// 	while (fgets(buffer, sizeof(buffer), stdin)) {
// 		printf("%d. %s\n", i, buffer);
// 		i++;
// 	}
// }

# include <stdio.h> 
int main ( int  ac, char  * av[ ] ) 
{ 
printf ( "%d\n", ac ) ; 
printf ( "%s\n", av[ 0 ] ) ; 
return 0 ; 
}