#include <stdio.h>
#include <stdlib.h>

int romanToInt();

int main () {
	int num, digit, temp, i, count = 0;

	printf("Enter a number to get its Roman equivalent: ");
	scanf("%d", &num);

	if (num <= 0) {
		printf("Invalid input\n");
		return 1;
	}

	// temp = num;
	// while (temp != 0) {
	// 	temp = temp / 10;
	// 	count++;
	// }
	romanToInt(num);
	return 0;
}

int romanToInt(int num) {
	int I = 1;
	int IV = 4;
	int V = 5;
	int IX = 9;
	int X = 10;
	int XL = 40;
	int L = 50;
	int XC = 90;
	int C = 100;
	int CD = 400;
	int D = 500;
	int CM = 900;
	int M = 1000;

	printf("The Roman Equivalent of %d is: ", num);
	while (num != 0) {
		if (num >= M) {
			num -= M;
			printf("M");
		} else if (num >= CM) {
			num -= CM;
			printf("CM");
		} else if (num >= D) {
			num -= D;
			printf("D");
		} else if (num >= CD) {
			num -= CD;
			printf("CD");
		} else if (num >= C) {
			num -= C;
			printf("C");
		} else if (num >= XC) {
			num -= XC;
			printf("XC");
		} else if (num >= L) {
			num -= L;
			printf("L");
		} else if (num >= XL) {
			num -= XL;
			printf("XL");
		} else if (num >= X) {
			num -= X;
			printf("X");
		} else if (num >= IX) {
			num -= IX;
			printf("IX");
		} else if (num >= V) {
			num -= V;
			printf("V");
		} else if (num >= IV) {
			num -= IV	;
			printf("IV");
		} else if (num >= I) {
				num -= I;
				printf("I");
		}
	}
	printf("\n");

}

// #include <stdio.h>

// typedef struct {
//     char *sym;
//     int val;
// } numeral;

// int maxNume(numeral *nu, int num) {
//     int i, index = 0;
//     for (i = 0; i < 13; i++) {
//     	printf("DEBUG: %d, %d\n", nu[i].val, num);
//         if (nu[i].val <= num){
//             index = i;
//         	printf("DEBUG INDEX: %d\n", index );
//         }
//     }
//     printf("RETURN INDEX%d\n", index);
//     return index;
// }

// void decToRoman(numeral *nu, int num) {
//     int max;
//     if (num != 0) {
//         max = maxNume(nu, num);
//         printf("%s", nu[max].sym);
//         num -= nu[max].val;
//         decToRoman(nu, num);
//     }
// }

// int main() {
//     int number = 859;
//     numeral nume[13] = {
//         {"I", 1}, {"IV", 4}, {"V", 5}, {"IX", 9}, {"X", 10},
//         {"XL", 40}, {"L", 50}, {"XC", 90}, {"C", 100},
//         {"CD", 400}, {"D", 500}, {"CM", 900}, {"M", 1000}
//     };
    
//     printf("Decimal number: %d<br>", number);
//     if (number > 0 && number <= 4000) {
//         printf("Roman equivalent: ");
//         decToRoman(nume, number);
//         printf("<br>");
//     } else {
//         printf("Invalid Input<br>");
//     }
    
//     /* Test with another number */
//     number = 3574;
//     printf("\nDecimal number: %d<br>", number);
//     printf("Roman equivalent: ");
//     decToRoman(nume, number);
//     printf("<br>");
    
//     return 0;
// }