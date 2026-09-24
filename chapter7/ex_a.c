// Go through the program carefully and find out how it works. Also write a program to implement the same logic without using goto.

// #include <stdio.h> 
// int main( ) 
// { 
// int  i, j, k ;  
// for ( i = 1 ; i <= 3 ; i++ ) 
// { 
// for ( j = 1 ; j <= 3 ; j++ ) 
// { 
// for ( k = 1 ; k <= 3 ; k++ ) 
// { 
// if ( i == 3 && j == 3 && k == 3 ) 
// goto out ; 
// else


// Equivalent Code without goto:
#include <stdio.h> 
int main()  { 
	int  i, j, k ;  
	for ( i = 1 ; i <= 3 ; i++ ) 
	{ 
		for ( j = 1 ; j <= 3 ; j++ ) 
		{ 
			for ( k = 1 ; k <= 3 ; k++ ) 
			{	 
				if ( i == 3 && j == 3 && k == 3 ) 
					break;
				else
					printf ( "%d %d %d\n", i, j, k ) ; 
			} 
		} 
	} 
 
	return 0 ; 
}

