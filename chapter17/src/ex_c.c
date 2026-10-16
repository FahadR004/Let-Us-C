#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_ENGINES 60

struct engine {
	char serial_num[3];
	int year;
	// char material[10];
	// int quantity;
};

void init_serial_num(char *s, char ch, char num);

int main() {
	int i, year, count = 0;
	char start = 'A';
	struct engine engine_list[NUMBER_OF_ENGINES];
	for (i = 0; i < NUMBER_OF_ENGINES; i++) {		
		if (i > 9 && i % 10 == 0) {
			start++;
			count = 0;
		}
		engine_list[i].year = 2000 + i;
		init_serial_num(engine_list[i].serial_num, start, (char)(count + '0'));
		count++;

	}
	
	printf("Engines available are:\n");
	for (i = 0; i < NUMBER_OF_ENGINES; i++) {
		printf("Serial Num: %s, Year: %d\n", engine_list[i].serial_num, engine_list[i].year);
	}

	printf("Engines from BB1 and CC6 are: \n");
	for (i = 0; i < NUMBER_OF_ENGINES; i++) {
		if ((engine_list[i].serial_num[0] == 'B' && engine_list[i].serial_num[2] > '0') ||
			 engine_list[i].serial_num[0] == 'C' && engine_list[i].serial_num[2] < '7')
		printf("Serial Num: %s, Year: %d\n", engine_list[i].serial_num, engine_list[i].year);
	}

	return 0;
}

void init_serial_num(char *s, char ch, char num) {
	s[0] = ch;
	s[1] = ch;
	s[2] = num;
	s[3] = '\0';
}

// void add_char_to_str(char *s, char ch) {
// 	int length = strlen(s);
// 	s[length] = ch;
// 	s[length+1] = '\0';
// }