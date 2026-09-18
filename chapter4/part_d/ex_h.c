#include <stdio.h>
#include <stdlib.h>


int main() {
	int month, date; // of birth
	printf("Enter the date and month of your birthday in the format (12 9): ");
	scanf("%d", month, date);

	if (month == 1) {
		if (date < 20) 
			printf("Your Zodiac Sign is Capricorn\n");
		else 
			printf("Your Zodiac Sign is Sagittarius\n");
	} 
	else if (month == 2) {
		if (date < 18) 
			printf("Your Zodiac Sign is Aquarius\n");
		else 
			printf("Your Zodiac Sign is Pisces\n");
	} 
	else if (month == 3) {
		if (date < 20) 
			printf("Your Zodiac Sign is Pisces\n", );
		else 
			printf("Your Zodiac Sign is Aries\n");
	}
	else if (month == 4) {
		if (date < 20) 
			printf("Your Zodiac Sign is Aries\n");
		else 
			printf("Your Zodiac Sign is Taurus\n");
	}
	else if (month == 5) {
		if (date < 21) 
			printf("Your Zodiac Sign is Taurus\n");
		else 
			printf("Your Zodiac Sign is Gemini\n");
	} 
	else if (month == 6) {
		if (date < 21) 
			printf("Your Zodiac Sign is Gemini\n");
		else 
			printf("Your Zodiac Sign is Cancer\n");
	}
	else if (month == 7) {
		if (date < 23) 
			printf("Your Zodiac Sign is Cancer\n");
		else
			printf("Your Zodiac Sign is Leo\n");
	}
	else if (month == 8) {
		if (date < 23)
			printf("Your Zodiac Sign is Leo\n");
		else
			printf("Your Zodiac Sign is Virgo\n");
	}
	else if (month == 9) {
		if (date < 23) 
			printf("Your Zodiac Sign is Virgo\n");
		else 
			printf("Your Zodiac Sign is Libra\n");
	} 
	else if (month == 10) {
		if (date < 23) 
			printf("Your Zodiac Sign is Libra\n");
		else 
			printf("Your Zodiac Sign is Scorpio\n");
	} 
	else if (month == 11) {
		if (date < 22) 
			printf("Your Zodiac Sign is Scorpio\n");
		else 
			printf("Your Zodiac Sign is Sagittarius\n");
	} 
	else if (month == 12) {
		if (date < 22) 
			printf("Your Zodiac Sign is Sagittarius\n");
		else 
			printf("Your Zodiac Sign is Capricorn\n");
	}
	else {
		printf("Please enter correct month and date!");
		return 1;
	}

	return 0;
}