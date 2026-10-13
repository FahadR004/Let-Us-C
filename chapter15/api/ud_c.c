#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void extract_string(char *str1, char* str2, int char_num, int position) {
	int i;
	int end_idx = position + char_num; 
	// Assuming position entered is based on 1-based counting
	if (char_num == 0) {
		strcpy(str2, str1);
	} else {
		// str1 = str1 + position - 1;
		// for (i = position-1; i < end_idx; i++) {
		// 	*str2 = *str1;
		// 	str1++;
		// 	str2++;
		// }
		// *str2 = '\0';
		strncpy(str2, str1+position-1, char_num);
	}
}