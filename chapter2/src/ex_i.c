#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, hund_cnt, fifty_cnt, ten_cnt, five_cnt, two_cnt, one_cnt;
	hund_cnt =  fifty_cnt = ten_cnt = five_cnt = two_cnt = one_cnt = 0;

	printf("Enter a number: ");
	scanf("%d", &num);
	
	while (num >= 100) {
		num = num - 100;
		hund_cnt++;
	}

	while (num >= 50) {
		num = num - 50;
		fifty_cnt++;
	}

	while (num >= 10) {
		num = num - 10;
		ten_cnt++;
	}

	while (num >= 5) {
		num = num - 5;
		five_cnt++;
	}

	while (num >= 2) {
		num = num - 2;
	        two_cnt++;	
	}

	while (num != 0) {
		num = num - 1;
		one_cnt++;
	}

	printf("To create the current number using the smallest number of notes, we have: \n");
	printf("%d 100(s), %d 50(s), %d 10(s), %d 5(s), %d 2(s), %d 1(s)\n", hund_cnt, fifty_cnt, ten_cnt, five_cnt, two_cnt, one_cnt);


}
