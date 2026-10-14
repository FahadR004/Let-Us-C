#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_string(char *str, char* copy_str);

int main() {
	int i = 0;
	char  *s[ ] = {  
	   "To err is human...",  
	   "But to really mess things up...",  
	   "One needs to know C!!"  
     } ; 
	char *copy_str;

    printf("%s\n", s[0]);
    printf("%s\n", s[1]);
    printf("%s\n", s[2]);

    // s[0] = reverse_string(s[0], copy_str);
    // s[1] = reverse_string(s[1], copy_str);
    // s[2] =  reverse_string(s[2], copy_str);

    // Changed the address of the array of pointers
    for (i = 0; i < 3; i++) {
    	copy_str = (char *) malloc(strlen(s[i] + 1)*sizeof(char));
    	s[i] = reverse_string(s[i], copy_str);
    } 

    printf("%s\n", s[0]);
    printf("%s\n", s[1]);
    printf("%s\n", s[2]);

	return 0;
}

char* reverse_string(char *str, char* copy_str) {
	strcpy(copy_str, str);
	int i = 0;
	int j = strlen(copy_str) - 1;
	char c;
	while (i < j) {
		c = copy_str[i];
		copy_str[i] = copy_str[j];
		copy_str[j] = c;
		i++;
		j--;
	}
	return copy_str;
}

