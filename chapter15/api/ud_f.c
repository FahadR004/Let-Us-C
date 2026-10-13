#include <stdio.h>
#include <string.h>

int get_checksum(char *s) {
	int checksum = 0, i, digit;

	for (i = 1; i < 10; i++) {
		if ((int)s[i] == 88) {
			digit = 10;
		} else {
			digit = (*s) - '0';			
		}
		// printf("DEBUG: %d\n", checksum);
		// printf("DEBUG: %d %d %d\n",digit, i, digit*i);
		checksum += digit * i;
		s++;
	}
	printf("Checksum value is %d\n", checksum);
	
	if (checksum % 11 == 0)
		return 1;
	else 
		return 0;

}