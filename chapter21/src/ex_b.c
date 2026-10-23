#include <stdio.h>
#include <stdlib.h>

#define _BV(x) (1 << x)
#define RESPONDENTS 5


int main() {
	int i, class, lang, paper;
	int user_data = 0;
	int count_1 = 0, count_2 = 0, count_3 = 0;
	int data[RESPONDENTS];
		
	printf("Please enter the following data correctly for proper statistical analysis: ");
	for (i = 0; i < RESPONDENTS; i++) {
		printf("\nEnter class (1 for Upper, 2 for Middle, 3 for Lower): ");
		scanf("%d", &class);
		// getchar();
		user_data |= _BV(class - 1); // Bits numbers 0, 1 and 2
		printf("\nEnter preferred language (1 for English, 2 for Hindi, 3 for Regional Lang.): ");
		scanf("%d", &lang);
		// getchar();
		user_data |= _BV(lang+2); // Bits number 3, 4 and 5 

		printf("\nEnter preferred category of paper (1 for Daily, 2 for Supplement, 3 for Tabloid): ");
		scanf("%d", &paper);
		// getchar();
		user_data |= _BV(paper+5); // Bits number 6, 7 and 8
		data[i] = user_data;
		user_data = 0;
		printf("\n\n");
	}

	printf("--------------- STATISTICAL DATA ANALYSIS ---------------\n");
	printf("Number of persons who read English daily is: ");
	for (i = 0; i < RESPONDENTS; i++) {
		if (data[i] & _BV(3)) 
			count_1++;
	}
	printf("%d!\n", count_1);

	printf("Number of upper class people who read tabloid: ");
	for (i = 0; i < RESPONDENTS; i++) {
		if ( (data[i] & _BV(0)) && (data[i] & _BV(8))) 
			count_2++;
	}
	printf("%d!\n", count_2);

	printf("Number of regional language readers: ");
	for (i = 0; i < RESPONDENTS; i++) {
		if (data[i] & _BV(5)) 
			count_3++;
	}
	printf("%d!\n", count_3);

	return 0;
}