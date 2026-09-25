#include <stdio.h>
#include <stdlib.h>

int main( ) { 
	int year, q, m, K, J, day;

	printf("Enter an year: ");
	scanf("%d", &year);

	// Using Zeller's Congruence
	// (3 = March, 4 = April, 5 = May, ..., 14 = February)
	q = 1; // Hardcoded for 1/1/year
	m = 13; // Hardcoded for January
	K = (year-1) % 100;
	J = (year-1) / 100;
	day = (q + ((13*(m+1))/5) + K + (K/4) + (J/4) + (5*J) ) % 7;

	// (0 = Saturday, 1 = Sunday, 2 = Monday, ..., 6 = Friday)
	switch (day) {
		case 0: printf("Day on 1/1/%d is Saturday.\n", year); break;
		case 1: printf("Day on 1/1/%d is Sunday.\n", year);  break;
		case 2: printf("Day on 1/1/%d is Monday.\n", year);  break;
		case 3: printf("Day on 1/1/%d is Tuesday.\n", year);  break;
		case 4: printf("Day on 1/1/%d is Wednesday.\n", year);  break;
		case 5: printf("Day on 1/1/%d is Thursday.\n", year);  break;
		case 6: printf("Day on 1/1/%d is Friday.\n", year);  break;
		default: printf("Something went wrong! This is the calculated day: %d", day); break;
	}

	return 0;
}	
